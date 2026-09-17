#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8210D8D8"))) PPC_WEAK_FUNC(sub_8210D8D8);
PPC_FUNC_IMPL(__imp__sub_8210D8D8) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,224(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 224);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8210D8E0"))) PPC_WEAK_FUNC(sub_8210D8E0);
PPC_FUNC_IMPL(__imp__sub_8210D8E0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,224(r3)
	PPC_STORE_U8(ctx.r3.u32 + 224, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8210D8EC"))) PPC_WEAK_FUNC(sub_8210D8EC);
PPC_FUNC_IMPL(__imp__sub_8210D8EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8210D8F0"))) PPC_WEAK_FUNC(sub_8210D8F0);
PPC_FUNC_IMPL(__imp__sub_8210D8F0) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,816(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 816);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8210D8F8"))) PPC_WEAK_FUNC(sub_8210D8F8);
PPC_FUNC_IMPL(__imp__sub_8210D8F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x8210D900;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r29,540(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 540);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8210d970
	if (ctx.cr6.eq) goto loc_8210D970;
	// addi r3,r31,512
	ctx.r3.s64 = ctx.r31.s64 + 512;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x8210d970
	if (ctx.cr6.eq) goto loc_8210D970;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r30,544(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 544);
	// stw r11,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r11.u32);
	// stw r11,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r11.u32);
	// bl 0x825af7b8
	ctx.lr = 0x8210D938;
	sub_825AF7B8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// beq cr6,0x8210d960
	if (ctx.cr6.eq) goto loc_8210D960;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,16128
	ctx.r3.s64 = ctx.r11.s64 + 16128;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x8210D958;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_8210D960:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x8210D970;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8210D970:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8210D978"))) PPC_WEAK_FUNC(sub_8210D978);
PPC_FUNC_IMPL(__imp__sub_8210D978) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x8210D980;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// addi r10,r31,512
	ctx.r10.s64 = ctx.r31.s64 + 512;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,7
	ctx.r9.s64 = 7;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8210D9B0:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8210d9b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8210D9B0;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r3,7
	ctx.r3.s64 = 458752;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// ori r3,r3,14715
	ctx.r3.u64 = ctx.r3.u64 | 14715;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// lbzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x825af678
	ctx.lr = 0x8210D9E4;
	sub_825AF678(ctx, base);
	// stw r30,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r30.u32);
	// stw r29,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8210D9F4"))) PPC_WEAK_FUNC(sub_8210D9F4);
PPC_FUNC_IMPL(__imp__sub_8210D9F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8210D9F8"))) PPC_WEAK_FUNC(sub_8210D9F8);
PPC_FUNC_IMPL(__imp__sub_8210D9F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x8210DA00;
	__savegprlr_29(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r11,26384
	ctx.r4.s64 = ctx.r11.s64 + 26384;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r11,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r11.u32);
	// bl 0x8259d1b0
	ctx.lr = 0x8210DA2C;
	sub_8259D1B0(ctx, base);
	// li r5,30
	ctx.r5.s64 = 30;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82361d08
	ctx.lr = 0x8210DA3C;
	sub_82361D08(ctx, base);
	// lwz r11,172(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8210da4c
	if (!ctx.cr6.eq) goto loc_8210DA4C;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
loc_8210DA4C:
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236b2f8
	ctx.lr = 0x8210DA6C;
	sub_8236B2F8(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8210DA74"))) PPC_WEAK_FUNC(sub_8210DA74);
PPC_FUNC_IMPL(__imp__sub_8210DA74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8210DA78"))) PPC_WEAK_FUNC(sub_8210DA78);
PPC_FUNC_IMPL(__imp__sub_8210DA78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baec
	ctx.lr = 0x8210DA80;
	__savegprlr_25(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,26388
	ctx.r31.s64 = ctx.r11.s64 + 26388;
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
	ctx.lr = 0x8210DAB8;
	sub_8259D1B0(ctx, base);
	// li r5,30
	ctx.r5.s64 = 30;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82361d08
	ctx.lr = 0x8210DAC8;
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
	ctx.lr = 0x8210DADC;
	sub_8259D1B0(ctx, base);
	// li r5,30
	ctx.r5.s64 = 30;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82361d08
	ctx.lr = 0x8210DAEC;
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
	ctx.lr = 0x8210DB00;
	sub_8259D1B0(ctx, base);
	// li r5,30
	ctx.r5.s64 = 30;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82361d08
	ctx.lr = 0x8210DB10;
	sub_82361D08(ctx, base);
	// lwz r11,172(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8210db20
	if (!ctx.cr6.eq) goto loc_8210DB20;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
loc_8210DB20:
	// lwz r6,236(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8210db30
	if (!ctx.cr6.eq) goto loc_8210DB30;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
loc_8210DB30:
	// lwz r5,300(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8210db40
	if (!ctx.cr6.eq) goto loc_8210DB40;
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
loc_8210DB40:
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
	ctx.lr = 0x8210DB58;
	sub_8236B2F8(ctx, base);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8210DB60"))) PPC_WEAK_FUNC(sub_8210DB60);
PPC_FUNC_IMPL(__imp__sub_8210DB60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x8210DB68;
	__savegprlr_26(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r11,26388
	ctx.r31.s64 = ctx.r11.s64 + 26388;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r29,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r29.u32);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// bl 0x8259d1b0
	ctx.lr = 0x8210DB9C;
	sub_8259D1B0(ctx, base);
	// li r5,30
	ctx.r5.s64 = 30;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82361d08
	ctx.lr = 0x8210DBAC;
	sub_82361D08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r29,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r29.u32);
	// bl 0x8259d1b0
	ctx.lr = 0x8210DBC0;
	sub_8259D1B0(ctx, base);
	// li r5,30
	ctx.r5.s64 = 30;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82361d08
	ctx.lr = 0x8210DBD0;
	sub_82361D08(ctx, base);
	// lwz r11,172(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8210dbe0
	if (!ctx.cr6.eq) goto loc_8210DBE0;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
loc_8210DBE0:
	// lwz r5,236(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8210dbf0
	if (!ctx.cr6.eq) goto loc_8210DBF0;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
loc_8210DBF0:
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
	ctx.lr = 0x8210DC0C;
	sub_8236B2F8(ctx, base);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8210DC14"))) PPC_WEAK_FUNC(sub_8210DC14);
PPC_FUNC_IMPL(__imp__sub_8210DC14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8210DC18"))) PPC_WEAK_FUNC(sub_8210DC18);
PPC_FUNC_IMPL(__imp__sub_8210DC18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x8210DC20;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82347970
	ctx.lr = 0x8210DC2C;
	sub_82347970(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8210dc64
	if (!ctx.cr6.gt) goto loc_8210DC64;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8210DC40:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// bl 0x82357738
	ctx.lr = 0x8210DC50;
	sub_82357738(ctx, base);
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8210dc40
	if (ctx.cr6.lt) goto loc_8210DC40;
loc_8210DC64:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8210DC6C"))) PPC_WEAK_FUNC(sub_8210DC6C);
PPC_FUNC_IMPL(__imp__sub_8210DC6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8210DC70"))) PPC_WEAK_FUNC(sub_8210DC70);
PPC_FUNC_IMPL(__imp__sub_8210DC70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x8210DC78;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// lwz r29,4(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r30,-20920(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20920);
	// subf r30,r29,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r29.s64;
	// stw r30,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r30.u32);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r4,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r4.u32);
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r5,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r5.u32);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r4,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r4.u32);
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// lwz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,-20920(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20920);
	// subf r5,r6,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r6.s64;
	// stw r5,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r5.u32);
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r4,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r4.u32);
	// bl 0x8210b3c8
	ctx.lr = 0x8210DCD0;
	sub_8210B3C8(ctx, base);
	// lwz r3,196(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r11,204(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// lwz r9,212(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// stfs f1,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// bl 0x82363bc0
	ctx.lr = 0x8210DCF8;
	sub_82363BC0(ctx, base);
	// lwz r8,220(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// lwz r6,228(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// stw r3,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r3.u32);
	// lbz r7,44(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// stb r7,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r7.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8210DD14"))) PPC_WEAK_FUNC(sub_8210DD14);
PPC_FUNC_IMPL(__imp__sub_8210DD14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8210DD18"))) PPC_WEAK_FUNC(sub_8210DD18);
PPC_FUNC_IMPL(__imp__sub_8210DD18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x8210DD20;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x825af010
	ctx.lr = 0x8210DD34;
	sub_825AF010(ctx, base);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r31,r11,-21272
	ctx.r31.s64 = ctx.r11.s64 + -21272;
	// li r4,45
	ctx.r4.s64 = 45;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8210cf48
	ctx.lr = 0x8210DD4C;
	sub_8210CF48(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// li r4,45
	ctx.r4.s64 = 45;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,23612(r10)
	PPC_STORE_U32(ctx.r10.u32 + 23612, ctx.r11.u32);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// stw r11,23616(r10)
	PPC_STORE_U32(ctx.r10.u32 + 23616, ctx.r11.u32);
	// bl 0x8210d3f0
	ctx.lr = 0x8210DD6C;
	sub_8210D3F0(ctx, base);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// addi r8,r10,-17512
	ctx.r8.s64 = ctx.r10.s64 + -17512;
	// addi r9,r9,6568
	ctx.r9.s64 = ctx.r9.s64 + 6568;
	// stw r3,23620(r11)
	PPC_STORE_U32(ctx.r11.u32 + 23620, ctx.r3.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r4,r10,6156
	ctx.r4.s64 = ctx.r10.s64 + 6156;
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// li r5,56
	ctx.r5.s64 = 56;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r7,84(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// lwz r6,88(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// lwz r9,72(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// bl 0x82376ca8
	ctx.lr = 0x8210DDCC;
	sub_82376CA8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x8210ddf0
	if (!ctx.cr6.lt) goto loc_8210DDF0;
loc_8210DDD4:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,45
	ctx.r4.s64 = 45;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8210DDE0:
	// bl 0x8210d230
	ctx.lr = 0x8210DDE4;
	sub_8210D230(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_8210DDF0:
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82376cc0
	ctx.lr = 0x8210DDFC;
	sub_82376CC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8210ddd4
	if (ctx.cr6.lt) goto loc_8210DDD4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82376aa0
	ctx.lr = 0x8210DE0C;
	sub_82376AA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,45
	ctx.r4.s64 = 45;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// blt cr6,0x8210dde0
	if (ctx.cr6.lt) goto loc_8210DDE0;
	// bl 0x8210d230
	ctx.lr = 0x8210DE24;
	sub_8210D230(ctx, base);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r29,23606(r11)
	PPC_STORE_U8(ctx.r11.u32 + 23606, ctx.r29.u8);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// sth r8,80(r7)
	PPC_STORE_U16(ctx.r7.u32 + 80, ctx.r8.u16);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8210DE44"))) PPC_WEAK_FUNC(sub_8210DE44);
PPC_FUNC_IMPL(__imp__sub_8210DE44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8210DE48"))) PPC_WEAK_FUNC(sub_8210DE48);
PPC_FUNC_IMPL(__imp__sub_8210DE48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x8210DE50;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r26,r11,26080
	ctx.r26.s64 = ctx.r11.s64 + 26080;
	// lwz r3,2672(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 2672);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8210de94
	if (ctx.cr6.eq) goto loc_8210DE94;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8210DE7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// bne cr6,0x8210de94
	if (!ctx.cr6.eq) goto loc_8210DE94;
	// lwz r11,2672(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 2672);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,264(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// bl 0x8210bd40
	ctx.lr = 0x8210DE94;
	sub_8210BD40(ctx, base);
loc_8210DE94:
	// lwz r9,2216(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2216);
	// mulli r11,r9,92
	ctx.r11.s64 = ctx.r9.s64 * 92;
	// add r8,r11,r31
	ctx.r8.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lhz r7,76(r8)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r8.u32 + 76);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8210e1e4
	if (ctx.cr6.eq) goto loc_8210E1E4;
	// lis r30,-32126
	ctx.r30.s64 = -2105409536;
	// lis r28,-32126
	ctx.r28.s64 = -2105409536;
	// lbz r11,23605(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 23605);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8210decc
	if (ctx.cr6.eq) goto loc_8210DECC;
	// lbz r6,23606(r28)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r28.u32 + 23606);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8210e1e4
	if (!ctx.cr6.eq) goto loc_8210E1E4;
loc_8210DECC:
	// lwz r3,2208(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2208);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8210e07c
	if (ctx.cr6.eq) goto loc_8210E07C;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,28(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x8210DEE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8210e1e4
	if (ctx.cr6.eq) goto loc_8210E1E4;
	// lbz r3,2213(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2213);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r3,2208(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2208);
	// beq cr6,0x8210dfd0
	if (ctx.cr6.eq) goto loc_8210DFD0;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,2216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2216);
	// mulli r11,r11,92
	ctx.r11.s64 = ctx.r11.s64 * 92;
	// stb r10,2213(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2213, ctx.r10.u8);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// lhz r9,78(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 78);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8210df44
	if (!ctx.cr6.eq) goto loc_8210DF44;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,72(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// lwz r4,68(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8210DF3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_8210DF44:
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r8,68(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// addi r4,r11,2047
	ctx.r4.s64 = ctx.r11.s64 + 2047;
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r6,84(r10)
	PPC_STORE_U32(ctx.r10.u32 + 84, ctx.r6.u32);
	// lwz r5,2216(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2216);
	// mulli r10,r5,92
	ctx.r10.s64 = ctx.r5.s64 * 92;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// rlwinm r5,r4,0,0,20
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFF800;
	// lwz r3,84(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// subf r9,r11,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r9,r9,-2048
	ctx.r9.s64 = ctx.r9.s64 + -2048;
	// stw r9,84(r10)
	PPC_STORE_U32(ctx.r10.u32 + 84, ctx.r9.u32);
	// lwz r8,2216(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2216);
	// mulli r10,r8,92
	ctx.r10.s64 = ctx.r8.s64 * 92;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lwz r7,84(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// rlwinm r6,r7,0,0,20
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFF800;
	// stw r6,84(r10)
	PPC_STORE_U32(ctx.r10.u32 + 84, ctx.r6.u32);
	// lwz r4,2216(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2216);
	// mulli r10,r4,92
	ctx.r10.s64 = ctx.r4.s64 * 92;
	// add r3,r10,r31
	ctx.r3.u64 = ctx.r10.u64 + ctx.r31.u64;
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// lwz r3,2208(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2208);
	// lwz r11,2216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2216);
	// mulli r11,r11,92
	ctx.r11.s64 = ctx.r11.s64 * 92;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r4,84(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8210DFC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_8210DFD0:
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8210DFE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// lbz r5,2212(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2212);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stw r29,2208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2208, ctx.r29.u32);
	// bne cr6,0x8210e1e4
	if (!ctx.cr6.eq) goto loc_8210E1E4;
	// lwz r4,2216(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2216);
	// li r27,1
	ctx.r27.s64 = 1;
	// mulli r11,r4,92
	ctx.r11.s64 = ctx.r4.s64 * 92;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lhz r3,78(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 78);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8210e068
	if (ctx.cr6.eq) goto loc_8210E068;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stb r27,23606(r28)
	PPC_STORE_U8(ctx.r28.u32 + 23606, ctx.r27.u8);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,23605(r30)
	PPC_STORE_U8(ctx.r30.u32 + 23605, ctx.r11.u8);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// stb r29,2212(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2212, ctx.r29.u8);
	// addi r30,r11,23588
	ctx.r30.s64 = ctx.r11.s64 + 23588;
	// lwz r11,2216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2216);
	// mulli r11,r11,92
	ctx.r11.s64 = ctx.r11.s64 * 92;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,-8936
	ctx.r5.s64 = ctx.r11.s64 + -8936;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// bl 0x825af158
	ctx.lr = 0x8210E05C;
	sub_825AF158(ctx, base);
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_8210E068:
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// stb r27,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r27.u8);
	// stb r27,2212(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2212, ctx.r27.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_8210E07C:
	// li r29,0
	ctx.r29.s64 = 0;
	// li r27,1
	ctx.r27.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8210e0d4
	if (ctx.cr6.eq) goto loc_8210E0D4;
	// lbz r8,23606(r28)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r28.u32 + 23606);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8210e0d4
	if (!ctx.cr6.eq) goto loc_8210E0D4;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stb r11,23605(r30)
	PPC_STORE_U8(ctx.r30.u32 + 23605, ctx.r11.u8);
	// lbz r7,2212(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2212);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8210e0c0
	if (!ctx.cr6.eq) goto loc_8210E0C0;
	// lwz r6,2216(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2216);
	// mulli r11,r6,92
	ctx.r11.s64 = ctx.r6.s64 * 92;
	// add r5,r11,r31
	ctx.r5.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r4,64(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 64);
	// stb r27,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r27.u8);
loc_8210E0C0:
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// stb r27,2212(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2212, ctx.r27.u8);
	// addi r11,r11,23588
	ctx.r11.s64 = ctx.r11.s64 + 23588;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x825aed30
	ctx.lr = 0x8210E0D4;
	sub_825AED30(ctx, base);
loc_8210E0D4:
	// lbz r3,2212(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2212);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8210e194
	if (ctx.cr6.eq) goto loc_8210E194;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stb r29,2212(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2212, ctx.r29.u8);
	// lis r10,-4370
	ctx.r10.s64 = -286392320;
	// li r8,-1
	ctx.r8.s64 = -1;
	// ori r9,r10,61166
	ctx.r9.u64 = ctx.r10.u64 | 61166;
	// stb r11,23605(r30)
	PPC_STORE_U8(ctx.r30.u32 + 23605, ctx.r11.u8);
	// lwz r11,2216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2216);
	// mulli r11,r11,92
	ctx.r11.s64 = ctx.r11.s64 * 92;
	// add r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 + ctx.r31.u64;
	// sth r29,76(r7)
	PPC_STORE_U16(ctx.r7.u32 + 76, ctx.r29.u16);
	// lwz r6,2216(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2216);
	// mulli r11,r6,92
	ctx.r11.s64 = ctx.r6.s64 * 92;
	// add r5,r11,r31
	ctx.r5.u64 = ctx.r11.u64 + ctx.r31.u64;
	// sth r29,78(r5)
	PPC_STORE_U16(ctx.r5.u32 + 78, ctx.r29.u16);
	// lwz r4,2216(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2216);
	// mulli r11,r4,92
	ctx.r11.s64 = ctx.r4.s64 * 92;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// sth r29,80(r3)
	PPC_STORE_U16(ctx.r3.u32 + 80, ctx.r29.u16);
	// lwz r11,2216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2216);
	// mulli r11,r11,92
	ctx.r11.s64 = ctx.r11.s64 * 92;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r9,84(r10)
	PPC_STORE_U32(ctx.r10.u32 + 84, ctx.r9.u32);
	// lwz r9,2216(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2216);
	// mulli r11,r9,92
	ctx.r11.s64 = ctx.r9.s64 * 92;
	// add r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r8,88(r7)
	PPC_STORE_U32(ctx.r7.u32 + 88, ctx.r8.u32);
	// lwz r6,2216(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2216);
	// lwz r5,2220(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2220);
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x8210e194
	if (ctx.cr6.eq) goto loc_8210E194;
loc_8210E158:
	// lwz r11,2216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2216);
	// mulli r10,r11,92
	ctx.r10.s64 = ctx.r11.s64 * 92;
	// add r4,r10,r31
	ctx.r4.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lhz r3,76(r4)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r4.u32 + 76);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8210e194
	if (!ctx.cr6.eq) goto loc_8210E194;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// stw r11,2216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2216, ctx.r11.u32);
	// bne cr6,0x8210e184
	if (!ctx.cr6.eq) goto loc_8210E184;
	// stw r29,2216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2216, ctx.r29.u32);
loc_8210E184:
	// lwz r11,2216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2216);
	// lwz r10,2220(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2220);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8210e158
	if (!ctx.cr6.eq) goto loc_8210E158;
loc_8210E194:
	// lwz r9,2216(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2216);
	// mulli r11,r9,92
	ctx.r11.s64 = ctx.r9.s64 * 92;
	// add r8,r11,r31
	ctx.r8.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lhz r7,76(r8)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r8.u32 + 76);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8210e1e4
	if (ctx.cr6.eq) goto loc_8210E1E4;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r3,r11,13000
	ctx.r3.s64 = ctx.r11.s64 + 13000;
	// bl 0x82101848
	ctx.lr = 0x8210E1B8;
	sub_82101848(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8210e1e4
	if (ctx.cr6.eq) goto loc_8210E1E4;
	// lwz r4,2216(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2216);
	// li r5,17
	ctx.r5.s64 = 17;
	// lwz r3,2672(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 2672);
	// mulli r11,r4,92
	ctx.r11.s64 = ctx.r4.s64 * 92;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82362500
	ctx.lr = 0x8210E1DC;
	sub_82362500(ctx, base);
	// stw r3,2208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2208, ctx.r3.u32);
	// stb r27,2213(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2213, ctx.r27.u8);
loc_8210E1E4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8210E1EC"))) PPC_WEAK_FUNC(sub_8210E1EC);
PPC_FUNC_IMPL(__imp__sub_8210E1EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8210E1F0"))) PPC_WEAK_FUNC(sub_8210E1F0);
PPC_FUNC_IMPL(__imp__sub_8210E1F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x8210E1F8;
	__savegprlr_26(ctx, base);
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
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// bl 0x8210de48
	ctx.lr = 0x8210E218;
	sub_8210DE48(ctx, base);
	// lwz r11,2220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2220);
	// li r6,0
	ctx.r6.s64 = 0;
	// mulli r10,r11,92
	ctx.r10.s64 = ctx.r11.s64 * 92;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lhz r9,76(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 76);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8210e26c
	if (ctx.cr6.eq) goto loc_8210E26C;
loc_8210E234:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// stw r11,2220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2220, ctx.r11.u32);
	// bne cr6,0x8210e248
	if (!ctx.cr6.eq) goto loc_8210E248;
	// stw r6,2220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2220, ctx.r6.u32);
loc_8210E248:
	// lwz r11,2220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2220);
	// mulli r10,r11,92
	ctx.r10.s64 = ctx.r11.s64 * 92;
	// add r8,r10,r31
	ctx.r8.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lhz r7,76(r8)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r8.u32 + 76);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8210e26c
	if (ctx.cr6.eq) goto loc_8210E26C;
	// lwz r5,2216(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2216);
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x8210e234
	if (!ctx.cr6.eq) goto loc_8210E234;
loc_8210E26C:
	// lwz r4,2220(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2220);
	// mulli r11,r4,92
	ctx.r11.s64 = ctx.r4.s64 * 92;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lhz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8210e368
	if (ctx.cr6.eq) goto loc_8210E368;
	// lwz r10,2216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2216);
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bne cr6,0x8210e298
	if (!ctx.cr6.eq) goto loc_8210E298;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_8210E298:
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8210e34c
	if (ctx.cr6.eq) goto loc_8210E34C;
loc_8210E2A4:
	// mulli r10,r11,92
	ctx.r10.s64 = ctx.r11.s64 * 92;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lhz r9,76(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 76);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8210e2e8
	if (!ctx.cr6.eq) goto loc_8210E2E8;
	// lwz r9,2216(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2216);
loc_8210E2BC:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8210e2e8
	if (ctx.cr6.eq) goto loc_8210E2E8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bne cr6,0x8210e2d4
	if (!ctx.cr6.eq) goto loc_8210E2D4;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_8210E2D4:
	// mulli r10,r11,92
	ctx.r10.s64 = ctx.r11.s64 * 92;
	// add r8,r10,r31
	ctx.r8.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lhz r5,76(r8)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r8.u32 + 76);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8210e2bc
	if (ctx.cr6.eq) goto loc_8210E2BC;
loc_8210E2E8:
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8210e320
	if (ctx.cr6.eq) goto loc_8210E320;
	// mulli r9,r11,92
	ctx.r9.s64 = ctx.r11.s64 * 92;
	// mulli r10,r7,92
	ctx.r10.s64 = ctx.r7.s64 * 92;
	// add r4,r9,r31
	ctx.r4.u64 = ctx.r9.u64 + ctx.r31.u64;
	// add r9,r10,r31
	ctx.r9.u64 = ctx.r10.u64 + ctx.r31.u64;
	// li r8,23
	ctx.r8.s64 = 23;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8210E30C:
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r3,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r3.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x8210e30c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8210E30C;
loc_8210E320:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bne cr6,0x8210e330
	if (!ctx.cr6.eq) goto loc_8210E330;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_8210E330:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmplwi cr6,r7,24
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 24, ctx.xer);
	// bne cr6,0x8210e340
	if (!ctx.cr6.eq) goto loc_8210E340;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
loc_8210E340:
	// lwz r10,2216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2216);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8210e2a4
	if (!ctx.cr6.eq) goto loc_8210E2A4;
loc_8210E34C:
	// lwz r9,2216(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2216);
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8210e364
	if (!ctx.cr6.eq) goto loc_8210E364;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_8210E364:
	// stw r7,2220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2220, ctx.r7.u32);
loc_8210E368:
	// lwz r8,2220(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2220);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mulli r10,r8,92
	ctx.r10.s64 = ctx.r8.s64 * 92;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
loc_8210E378:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bne cr6,0x8210e378
	if (!ctx.cr6.eq) goto loc_8210E378;
	// lwz r5,2220(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2220);
	// clrlwi r3,r26,24
	ctx.r3.u64 = ctx.r26.u32 & 0xFF;
	// mulli r11,r5,92
	ctx.r11.s64 = ctx.r5.s64 * 92;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r29,64(r4)
	PPC_STORE_U32(ctx.r4.u32 + 64, ctx.r29.u32);
	// lwz r11,2220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2220);
	// mulli r11,r11,92
	ctx.r11.s64 = ctx.r11.s64 * 92;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r28,68(r10)
	PPC_STORE_U32(ctx.r10.u32 + 68, ctx.r28.u32);
	// lwz r9,2220(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2220);
	// mulli r11,r9,92
	ctx.r11.s64 = ctx.r9.s64 * 92;
	// add r8,r11,r31
	ctx.r8.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r27,72(r8)
	PPC_STORE_U32(ctx.r8.u32 + 72, ctx.r27.u32);
	// lwz r7,2220(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2220);
	// lwz r5,2224(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2224);
	// mulli r11,r7,92
	ctx.r11.s64 = ctx.r7.s64 * 92;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// sth r5,76(r11)
	PPC_STORE_U16(ctx.r11.u32 + 76, ctx.r5.u16);
	// lwz r10,2220(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2220);
	// mulli r11,r10,92
	ctx.r11.s64 = ctx.r10.s64 * 92;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// sth r3,78(r9)
	PPC_STORE_U16(ctx.r9.u32 + 78, ctx.r3.u16);
	// lwz r8,2216(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2216);
	// mulli r11,r8,92
	ctx.r11.s64 = ctx.r8.s64 * 92;
	// add r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 + ctx.r31.u64;
	// sth r6,80(r7)
	PPC_STORE_U16(ctx.r7.u32 + 80, ctx.r6.u16);
	// lwz r5,2220(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2220);
	// mulli r11,r5,92
	ctx.r11.s64 = ctx.r5.s64 * 92;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r6,84(r4)
	PPC_STORE_U32(ctx.r4.u32 + 84, ctx.r6.u32);
	// lwz r3,2224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2224);
	// addic. r11,r3,1
	ctx.xer.ca = ctx.r3.u32 > 4294967294;
	ctx.r11.s64 = ctx.r3.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,2224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2224, ctx.r11.u32);
	// bne 0x8210e420
	if (!ctx.cr0.eq) goto loc_8210E420;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,2224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2224, ctx.r11.u32);
loc_8210E420:
	// lwz r10,2220(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2220);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mulli r11,r10,92
	ctx.r11.s64 = ctx.r10.s64 * 92;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r8,64(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 64);
	// stb r6,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r6.u8);
	// bl 0x8210de48
	ctx.lr = 0x8210E43C;
	sub_8210DE48(ctx, base);
	// lwz r7,2220(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2220);
	// mulli r11,r7,92
	ctx.r11.s64 = ctx.r7.s64 * 92;
	// add r6,r11,r31
	ctx.r6.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lhz r3,76(r6)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r6.u32 + 76);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8210E454"))) PPC_WEAK_FUNC(sub_8210E454);
PPC_FUNC_IMPL(__imp__sub_8210E454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8210E458"))) PPC_WEAK_FUNC(sub_8210E458);
PPC_FUNC_IMPL(__imp__sub_8210E458) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x8210E460;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,1
	ctx.r29.s64 = 1;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// stb r30,10700(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10700, ctx.r30.u8);
	// stb r29,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r29.u8);
	// bl 0x8212bb98
	ctx.lr = 0x8210E480;
	sub_8212BB98(ctx, base);
	// addi r3,r31,2592
	ctx.r3.s64 = ctx.r31.s64 + 2592;
	// bl 0x8225dbb0
	ctx.lr = 0x8210E488;
	sub_8225DBB0(ctx, base);
	// addi r3,r31,7088
	ctx.r3.s64 = ctx.r31.s64 + 7088;
	// bl 0x820f79d0
	ctx.lr = 0x8210E490;
	sub_820F79D0(ctx, base);
	// addi r3,r31,7488
	ctx.r3.s64 = ctx.r31.s64 + 7488;
	// bl 0x820f7ec0
	ctx.lr = 0x8210E498;
	sub_820F7EC0(ctx, base);
	// addi r3,r31,7495
	ctx.r3.s64 = ctx.r31.s64 + 7495;
	// bl 0x821ecc98
	ctx.lr = 0x8210E4A0;
	sub_821ECC98(ctx, base);
	// bl 0x8212bb98
	ctx.lr = 0x8210E4A4;
	sub_8212BB98(ctx, base);
	// addi r3,r31,7497
	ctx.r3.s64 = ctx.r31.s64 + 7497;
	// bl 0x820fc2e0
	ctx.lr = 0x8210E4AC;
	sub_820FC2E0(ctx, base);
	// addi r3,r31,7499
	ctx.r3.s64 = ctx.r31.s64 + 7499;
	// bl 0x8212bb98
	ctx.lr = 0x8210E4B4;
	sub_8212BB98(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stb r29,10664(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10664, ctx.r29.u8);
	// stb r30,10665(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10665, ctx.r30.u8);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// stb r30,10666(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10666, ctx.r30.u8);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,4
	ctx.r6.s64 = 4;
	// lfs f0,2868(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// stw r8,10652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10652, ctx.r8.u32);
	// li r9,3
	ctx.r9.s64 = 3;
	// stfs f0,32312(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32312, temp.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stb r11,23629(r10)
	PPC_STORE_U8(ctx.r10.u32 + 23629, ctx.r11.u8);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lfs f0,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// stfs f0,23632(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 23632, temp.u32);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// stw r30,10688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10688, ctx.r30.u32);
	// addi r11,r11,5908
	ctx.r11.s64 = ctx.r11.s64 + 5908;
	// stw r30,10692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10692, ctx.r30.u32);
	// stw r30,10696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10696, ctx.r30.u32);
	// stw r29,10672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10672, ctx.r29.u32);
	// stw r7,10676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10676, ctx.r7.u32);
	// stw r6,10680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10680, ctx.r6.u32);
	// stw r10,17520(r11)
	PPC_STORE_U32(ctx.r11.u32 + 17520, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r10,r31,7524
	ctx.r10.s64 = ctx.r31.s64 + 7524;
	// li r11,128
	ctx.r11.s64 = 128;
loc_8210E538:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r11,-16(r10)
	PPC_STORE_U32(ctx.r10.u32 + -16, ctx.r11.u32);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne cr6,0x8210e538
	if (!ctx.cr6.eq) goto loc_8210E538;
	// stb r30,7500(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7500, ctx.r30.u8);
	// stb r30,7501(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7501, ctx.r30.u8);
	// stw r8,7504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7504, ctx.r8.u32);
	// stw r11,7520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7520, ctx.r11.u32);
	// stw r11,7536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7536, ctx.r11.u32);
	// stw r11,7568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7568, ctx.r11.u32);
	// stw r11,7552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7552, ctx.r11.u32);
	// stw r11,7556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7556, ctx.r11.u32);
	// stw r11,7560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7560, ctx.r11.u32);
	// stw r11,7564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7564, ctx.r11.u32);
	// stw r30,7572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7572, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8210E588"))) PPC_WEAK_FUNC(sub_8210E588);
PPC_FUNC_IMPL(__imp__sub_8210E588) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae8
	ctx.lr = 0x8210E590;
	__savegprlr_24(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// ld r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// ld r27,8(r11)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
	// mr r25,r27
	ctx.r25.u64 = ctx.r27.u64;
	// mr r24,r28
	ctx.r24.u64 = ctx.r28.u64;
	// std r28,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r28.u64);
	// addi r29,r1,160
	ctx.r29.s64 = ctx.r1.s64 + 160;
	// std r27,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r27.u64);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// std r26,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r26.u64);
	// std r25,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r25.u64);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// std r24,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r24.u64);
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// std r10,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r10.u64);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// std r28,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r28.u64);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// std r9,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r9.u64);
	// std r27,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r27.u64);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// std r8,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r8.u64);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// std r10,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r10.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r9,8(r29)
	PPC_STORE_U64(ctx.r29.u32 + 8, ctx.r9.u64);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// lfs f10,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f10.f64 = double(temp.f32);
	// fadds f11,f12,f1
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f1.f64));
	// lfs f8,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f9,f10,f1
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f1.f64));
	// lfs f6,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f6.f64 = double(temp.f32);
	// fadds f7,f8,f1
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f1.f64));
	// lfs f4,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f5,f6,f1
	ctx.f5.f64 = double(float(ctx.f6.f64 - ctx.f1.f64));
	// fadds f3,f4,f1
	ctx.f3.f64 = double(float(ctx.f4.f64 + ctx.f1.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f9,116(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f7,132(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f5,152(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f3,168(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// bl 0x821020c8
	ctx.lr = 0x8210E664;
	sub_821020C8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821020c8
	ctx.lr = 0x8210E674;
	sub_821020C8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821020c8
	ctx.lr = 0x8210E684;
	sub_821020C8(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8210E68C"))) PPC_WEAK_FUNC(sub_8210E68C);
PPC_FUNC_IMPL(__imp__sub_8210E68C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8210E690"))) PPC_WEAK_FUNC(sub_8210E690);
PPC_FUNC_IMPL(__imp__sub_8210E690) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-18560
	ctx.r11.s64 = ctx.r11.s64 + -18560;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addis r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 524288;
	// addi r4,r11,-7824
	ctx.r4.s64 = ctx.r11.s64 + -7824;
	// bl 0x822ad430
	ctx.lr = 0x8210E6C0;
	sub_822AD430(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r3,r11,13000
	ctx.r3.s64 = ctx.r11.s64 + 13000;
	// bl 0x821f8c60
	ctx.lr = 0x8210E6CC;
	sub_821F8C60(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r3,r11,11600
	ctx.r3.s64 = ctx.r11.s64 + 11600;
	// bl 0x821f7430
	ctx.lr = 0x8210E6D8;
	sub_821F7430(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// bl 0x82203878
	ctx.lr = 0x8210E6F0;
	sub_82203878(ctx, base);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r3,r11,22016
	ctx.r3.s64 = ctx.r11.s64 + 22016;
	// bl 0x820dae98
	ctx.lr = 0x8210E6FC;
	sub_820DAE98(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r3,r11,-26064
	ctx.r3.s64 = ctx.r11.s64 + -26064;
	// bl 0x8212bb98
	ctx.lr = 0x8210E708;
	sub_8212BB98(ctx, base);
	// lis r11,-22171
	ctx.r11.s64 = -1452998656;
	// lis r9,-27106
	ctx.r9.s64 = -1776418816;
	// stb r30,74(r31)
	PPC_STORE_U8(ctx.r31.u32 + 74, ctx.r30.u8);
	// ori r10,r11,19753
	ctx.r10.u64 = ctx.r11.u64 | 19753;
	// stb r30,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r30.u8);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stb r30,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r30.u8);
	// ori r8,r9,27054
	ctx.r8.u64 = ctx.r9.u64 | 27054;
	// rldimi r10,r8,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// lfs f0,-12136(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12136);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// std r10,56(r31)
	PPC_STORE_U64(ctx.r31.u32 + 56, ctx.r10.u64);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stb r11,72(r31)
	PPC_STORE_U8(ctx.r31.u32 + 72, ctx.r11.u8);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8210E764"))) PPC_WEAK_FUNC(sub_8210E764);
PPC_FUNC_IMPL(__imp__sub_8210E764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8210E768"))) PPC_WEAK_FUNC(sub_8210E768);
PPC_FUNC_IMPL(__imp__sub_8210E768) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x8210E770;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-7552
	ctx.r3.s64 = ctx.r11.s64 + -7552;
	// bl 0x820b5fb0
	ctx.lr = 0x8210E784;
	sub_820B5FB0(ctx, base);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// addis r11,r11,34
	ctx.r11.s64 = ctx.r11.s64 + 2228224;
	// addi r3,r11,32128
	ctx.r3.s64 = ctx.r11.s64 + 32128;
	// bl 0x823259c8
	ctx.lr = 0x8210E798;
	sub_823259C8(ctx, base);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r3,r11,22016
	ctx.r3.s64 = ctx.r11.s64 + 22016;
	// bl 0x820db018
	ctx.lr = 0x8210E7A4;
	sub_820DB018(ctx, base);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r30,r11,-21272
	ctx.r30.s64 = ctx.r11.s64 + -21272;
	// li r4,23
	ctx.r4.s64 = 23;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8210d230
	ctx.lr = 0x8210E7BC;
	sub_8210D230(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stb r11,73(r31)
	PPC_STORE_U8(ctx.r31.u32 + 73, ctx.r11.u8);
	// stb r10,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r10.u8);
	// beq cr6,0x8210e7ec
	if (ctx.cr6.eq) goto loc_8210E7EC;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8210E7EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8210E7EC:
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r11,r11,-18560
	ctx.r11.s64 = ctx.r11.s64 + -18560;
	// addis r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 524288;
	// addi r3,r11,-7824
	ctx.r3.s64 = ctx.r11.s64 + -7824;
	// bl 0x822acff8
	ctx.lr = 0x8210E800;
	sub_822ACFF8(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// li r4,22
	ctx.r4.s64 = 22;
	// addi r29,r11,10416
	ctx.r29.s64 = ctx.r11.s64 + 10416;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,3896(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3896, ctx.r11.u32);
	// bl 0x821f6818
	ctx.lr = 0x8210E81C;
	sub_821F6818(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8210e838
	if (ctx.cr6.eq) goto loc_8210E838;
	// li r5,20
	ctx.r5.s64 = 20;
	// li r4,22
	ctx.r4.s64 = 22;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821f6828
	ctx.lr = 0x8210E838;
	sub_821F6828(ctx, base);
loc_8210E838:
	// li r4,30
	ctx.r4.s64 = 30;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821f6818
	ctx.lr = 0x8210E844;
	sub_821F6818(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8210e860
	if (ctx.cr6.eq) goto loc_8210E860;
	// li r5,20
	ctx.r5.s64 = 20;
	// li r4,30
	ctx.r4.s64 = 30;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821f6828
	ctx.lr = 0x8210E860;
	sub_821F6828(ctx, base);
loc_8210E860:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821f69a0
	ctx.lr = 0x8210E868;
	sub_821F69A0(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r3,r11,14528
	ctx.r3.s64 = ctx.r11.s64 + 14528;
	// bl 0x821f59f8
	ctx.lr = 0x8210E874;
	sub_821F59F8(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r30,r11,13000
	ctx.r30.s64 = ctx.r11.s64 + 13000;
loc_8210E87C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821feac0
	ctx.lr = 0x8210E884;
	sub_821FEAC0(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8210e87c
	if (ctx.cr6.eq) goto loc_8210E87C;
	// li r4,56
	ctx.r4.s64 = 56;
	// stw r4,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r4.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8210E8A0"))) PPC_WEAK_FUNC(sub_8210E8A0);
PPC_FUNC_IMPL(__imp__sub_8210E8A0) {
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
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,22016
	ctx.r3.s64 = ctx.r11.s64 + 22016;
	// bl 0x8212bb98
	ctx.lr = 0x8210E8C0;
	sub_8212BB98(ctx, base);
	// li r11,57
	ctx.r11.s64 = 57;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8210E8DC"))) PPC_WEAK_FUNC(sub_8210E8DC);
PPC_FUNC_IMPL(__imp__sub_8210E8DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8210E8E0"))) PPC_WEAK_FUNC(sub_8210E8E0);
PPC_FUNC_IMPL(__imp__sub_8210E8E0) {
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
	// addi r31,r11,26080
	ctx.r31.s64 = ctx.r11.s64 + 26080;
	// lis r11,7
	ctx.r11.s64 = 458752;
	// ori r10,r11,14715
	ctx.r10.u64 = ctx.r11.u64 | 14715;
	// lbzx r11,r31,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// lis r10,-32090
	ctx.r10.s64 = -2103050240;
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// addi r30,r10,26752
	ctx.r30.s64 = ctx.r10.s64 + 26752;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x8210e97c
	if (ctx.cr6.eq) goto loc_8210E97C;
	// addis r10,r31,7
	ctx.r10.s64 = ctx.r31.s64 + 458752;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r9,r10,14537
	ctx.r9.s64 = ctx.r10.s64 + 14537;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// lbzx r7,r11,r9
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8210e958
	if (ctx.cr6.eq) goto loc_8210E958;
	// addis r10,r31,7
	ctx.r10.s64 = ctx.r31.s64 + 458752;
	// addi r6,r10,14520
	ctx.r6.s64 = ctx.r10.s64 + 14520;
	// lwzx r5,r11,r6
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x8210e95c
	if (ctx.cr6.eq) goto loc_8210E95C;
loc_8210E958:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8210E95C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8210e97c
	if (ctx.cr6.eq) goto loc_8210E97C;
	// lis r5,0
	ctx.r5.s64 = 0;
	// li r6,9
	ctx.r6.s64 = 9;
	// ori r5,r5,32769
	ctx.r5.u64 = ctx.r5.u64 | 32769;
	// addi r3,r30,2896
	ctx.r3.s64 = ctx.r30.s64 + 2896;
	// bl 0x82361460
	ctx.lr = 0x8210E97C;
	sub_82361460(ctx, base);
loc_8210E97C:
	// lbz r10,2588(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2588);
	// li r11,-1
	ctx.r11.s64 = -1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8210e990
	if (ctx.cr6.eq) goto loc_8210E990;
	// lbz r11,2586(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2586);
loc_8210E990:
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x8210e9fc
	if (ctx.cr6.eq) goto loc_8210E9FC;
	// addis r10,r31,7
	ctx.r10.s64 = ctx.r31.s64 + 458752;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r9,r10,14537
	ctx.r9.s64 = ctx.r10.s64 + 14537;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// lbzx r7,r11,r9
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8210e9d8
	if (ctx.cr6.eq) goto loc_8210E9D8;
	// addis r10,r31,7
	ctx.r10.s64 = ctx.r31.s64 + 458752;
	// addi r6,r10,14520
	ctx.r6.s64 = ctx.r10.s64 + 14520;
	// lwzx r5,r11,r6
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x8210e9dc
	if (ctx.cr6.eq) goto loc_8210E9DC;
loc_8210E9D8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8210E9DC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8210e9fc
	if (ctx.cr6.eq) goto loc_8210E9FC;
	// lis r5,0
	ctx.r5.s64 = 0;
	// li r6,9
	ctx.r6.s64 = 9;
	// ori r5,r5,32769
	ctx.r5.u64 = ctx.r5.u64 | 32769;
	// addi r3,r30,2896
	ctx.r3.s64 = ctx.r30.s64 + 2896;
	// bl 0x82361460
	ctx.lr = 0x8210E9FC;
	sub_82361460(ctx, base);
loc_8210E9FC:
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

__attribute__((alias("__imp__sub_8210EA14"))) PPC_WEAK_FUNC(sub_8210EA14);
PPC_FUNC_IMPL(__imp__sub_8210EA14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8210EA18"))) PPC_WEAK_FUNC(sub_8210EA18);
PPC_FUNC_IMPL(__imp__sub_8210EA18) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x822e6a78
	sub_822E6A78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8210EA20"))) PPC_WEAK_FUNC(sub_8210EA20);
PPC_FUNC_IMPL(__imp__sub_8210EA20) {
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
	// addis r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 524288;
	// addi r3,r3,24504
	ctx.r3.s64 = ctx.r3.s64 + 24504;
	// bl 0x8212bb98
	ctx.lr = 0x8210EA44;
	sub_8212BB98(ctx, base);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// addi r3,r11,28544
	ctx.r3.s64 = ctx.r11.s64 + 28544;
	// bl 0x8233cb58
	ctx.lr = 0x8210EA50;
	sub_8233CB58(ctx, base);
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r3,r11,-18560
	ctx.r3.s64 = ctx.r11.s64 + -18560;
	// bl 0x822ae8f0
	ctx.lr = 0x8210EA5C;
	sub_822AE8F0(ctx, base);
	// bl 0x820ac678
	ctx.lr = 0x8210EA60;
	sub_820AC678(ctx, base);
	// bl 0x8210a7f0
	ctx.lr = 0x8210EA64;
	sub_8210A7F0(ctx, base);
	// bl 0x82123688
	ctx.lr = 0x8210EA68;
	sub_82123688(ctx, base);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,26752
	ctx.r3.s64 = ctx.r11.s64 + 26752;
	// bl 0x82229fa8
	ctx.lr = 0x8210EA78;
	sub_82229FA8(ctx, base);
	// bl 0x8212bb98
	ctx.lr = 0x8210EA7C;
	sub_8212BB98(ctx, base);
	// lis r11,7
	ctx.r11.s64 = 458752;
	// lis r9,7
	ctx.r9.s64 = 458752;
	// ori r10,r11,16216
	ctx.r10.u64 = ctx.r11.u64 | 16216;
	// lis r7,7
	ctx.r7.s64 = 458752;
	// li r11,2
	ctx.r11.s64 = 2;
	// ori r8,r9,16288
	ctx.r8.u64 = ctx.r9.u64 | 16288;
	// ori r6,r7,16284
	ctx.r6.u64 = ctx.r7.u64 | 16284;
	// lwzx r3,r31,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stwx r11,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r11.u32);
	// stwx r11,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r11.u32);
	// beq cr6,0x8210eabc
	if (ctx.cr6.eq) goto loc_8210EABC;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,20(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x8210EABC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8210EABC:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r3,r11,10416
	ctx.r3.s64 = ctx.r11.s64 + 10416;
	// bl 0x821f6948
	ctx.lr = 0x8210EAC8;
	sub_821F6948(ctx, base);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// lbz r11,58(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 58);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r30,r11,-14944
	ctx.r30.s64 = ctx.r11.s64 + -14944;
	// beq cr6,0x8210eaec
	if (ctx.cr6.eq) goto loc_8210EAEC;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,1420(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1420, ctx.r11.u8);
loc_8210EAEC:
	// addi r3,r30,22532
	ctx.r3.s64 = ctx.r30.s64 + 22532;
	// bl 0x82362de0
	ctx.lr = 0x8210EAF4;
	sub_82362DE0(ctx, base);
	// addis r3,r31,7
	ctx.r3.s64 = ctx.r31.s64 + 458752;
	// li r11,56
	ctx.r11.s64 = 56;
	// addi r3,r3,14496
	ctx.r3.s64 = ctx.r3.s64 + 14496;
	// stw r11,1428(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1428, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8210EB14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addis r30,r31,7
	ctx.r30.s64 = ctx.r31.s64 + 458752;
	// li r5,512
	ctx.r5.s64 = 512;
	// addi r30,r30,15320
	ctx.r30.s64 = ctx.r30.s64 + 15320;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259d300
	ctx.lr = 0x8210EB2C;
	sub_8259D300(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,540(r30)
	PPC_STORE_U32(ctx.r30.u32 + 540, ctx.r11.u32);
	// stw r11,544(r30)
	PPC_STORE_U32(ctx.r30.u32 + 544, ctx.r11.u32);
	// stb r11,18413(r31)
	PPC_STORE_U8(ctx.r31.u32 + 18413, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_8210EB54"))) PPC_WEAK_FUNC(sub_8210EB54);
PPC_FUNC_IMPL(__imp__sub_8210EB54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8210EB58"))) PPC_WEAK_FUNC(sub_8210EB58);
PPC_FUNC_IMPL(__imp__sub_8210EB58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x8210EB60;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addis r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 524288;
	// addi r3,r3,24504
	ctx.r3.s64 = ctx.r3.s64 + 24504;
	// bl 0x8212bb98
	ctx.lr = 0x8210EB74;
	sub_8212BB98(ctx, base);
	// addi r3,r31,2736
	ctx.r3.s64 = ctx.r31.s64 + 2736;
	// bl 0x821018e8
	ctx.lr = 0x8210EB7C;
	sub_821018E8(ctx, base);
	// lis r11,-32110
	ctx.r11.s64 = -2104360960;
	// addi r3,r11,12656
	ctx.r3.s64 = ctx.r11.s64 + 12656;
	// bl 0x82175300
	ctx.lr = 0x8210EB88;
	sub_82175300(ctx, base);
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r3,r11,-18560
	ctx.r3.s64 = ctx.r11.s64 + -18560;
	// bl 0x822d0a28
	ctx.lr = 0x8210EB94;
	sub_822D0A28(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r3,r11,10416
	ctx.r3.s64 = ctx.r11.s64 + 10416;
	// bl 0x8212bb98
	ctx.lr = 0x8210EBA0;
	sub_8212BB98(ctx, base);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// addi r30,r11,-32560
	ctx.r30.s64 = ctx.r11.s64 + -32560;
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// bl 0x8212bb98
	ctx.lr = 0x8210EBB0;
	sub_8212BB98(ctx, base);
	// addi r3,r30,2592
	ctx.r3.s64 = ctx.r30.s64 + 2592;
	// bl 0x8212bb98
	ctx.lr = 0x8210EBB8;
	sub_8212BB98(ctx, base);
	// addi r3,r30,7088
	ctx.r3.s64 = ctx.r30.s64 + 7088;
	// bl 0x8212bb98
	ctx.lr = 0x8210EBC0;
	sub_8212BB98(ctx, base);
	// addi r3,r30,7488
	ctx.r3.s64 = ctx.r30.s64 + 7488;
	// bl 0x8212bb98
	ctx.lr = 0x8210EBC8;
	sub_8212BB98(ctx, base);
	// addi r3,r30,7495
	ctx.r3.s64 = ctx.r30.s64 + 7495;
	// bl 0x8212bb98
	ctx.lr = 0x8210EBD0;
	sub_8212BB98(ctx, base);
	// addi r3,r30,7497
	ctx.r3.s64 = ctx.r30.s64 + 7497;
	// bl 0x8212bb98
	ctx.lr = 0x8210EBD8;
	sub_8212BB98(ctx, base);
	// bl 0x8212bb98
	ctx.lr = 0x8210EBDC;
	sub_8212BB98(ctx, base);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// addi r3,r11,28544
	ctx.r3.s64 = ctx.r11.s64 + 28544;
	// bl 0x8232d050
	ctx.lr = 0x8210EBE8;
	sub_8232D050(ctx, base);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// bl 0x82362a28
	ctx.lr = 0x8210EBF4;
	sub_82362A28(ctx, base);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r3,r11,26752
	ctx.r3.s64 = ctx.r11.s64 + 26752;
	// bl 0x8222a190
	ctx.lr = 0x8210EC00;
	sub_8222A190(ctx, base);
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r11,r11,-14944
	ctx.r11.s64 = ctx.r11.s64 + -14944;
	// addi r3,r11,22532
	ctx.r3.s64 = ctx.r11.s64 + 22532;
	// bl 0x8212bb98
	ctx.lr = 0x8210EC10;
	sub_8212BB98(ctx, base);
	// addis r3,r31,3
	ctx.r3.s64 = ctx.r31.s64 + 196608;
	// lis r11,7
	ctx.r11.s64 = 458752;
	// addi r3,r3,-11424
	ctx.r3.s64 = ctx.r3.s64 + -11424;
	// lis r9,7
	ctx.r9.s64 = 458752;
	// lis r7,7
	ctx.r7.s64 = 458752;
	// li r30,0
	ctx.r30.s64 = 0;
	// ori r10,r11,16224
	ctx.r10.u64 = ctx.r11.u64 | 16224;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// ori r8,r9,16216
	ctx.r8.u64 = ctx.r9.u64 | 16216;
	// ori r6,r7,16220
	ctx.r6.u64 = ctx.r7.u64 | 16220;
	// stbx r30,r31,r10
	PPC_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r30.u8);
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stwx r30,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r30.u32);
	// stwx r30,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r30.u32);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x8210EC50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addis r3,r31,3
	ctx.r3.s64 = ctx.r31.s64 + 196608;
	// addi r3,r3,496
	ctx.r3.s64 = ctx.r3.s64 + 496;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8210EC68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addis r3,r31,7
	ctx.r3.s64 = ctx.r31.s64 + 458752;
	// addi r3,r3,14496
	ctx.r3.s64 = ctx.r3.s64 + 14496;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8210EC80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addis r29,r31,7
	ctx.r29.s64 = ctx.r31.s64 + 458752;
	// li r5,512
	ctx.r5.s64 = 512;
	// addi r29,r29,15320
	ctx.r29.s64 = ctx.r29.s64 + 15320;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8259d300
	ctx.lr = 0x8210EC98;
	sub_8259D300(ctx, base);
	// stw r30,540(r29)
	PPC_STORE_U32(ctx.r29.u32 + 540, ctx.r30.u32);
	// stw r30,544(r29)
	PPC_STORE_U32(ctx.r29.u32 + 544, ctx.r30.u32);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// stb r30,18413(r31)
	PPC_STORE_U8(ctx.r31.u32 + 18413, ctx.r30.u8);
	// addi r30,r11,-21272
	ctx.r30.s64 = ctx.r11.s64 + -21272;
	// lwz r3,4060(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4060);
	// bl 0x825af7a0
	ctx.lr = 0x8210ECB4;
	sub_825AF7A0(ctx, base);
	// lwz r3,4064(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4064);
	// bl 0x825af7a0
	ctx.lr = 0x8210ECBC;
	sub_825AF7A0(ctx, base);
	// bl 0x8212bb98
	ctx.lr = 0x8210ECC0;
	sub_8212BB98(ctx, base);
	// lis r7,7
	ctx.r7.s64 = 458752;
	// lis r5,7
	ctx.r5.s64 = 458752;
	// li r11,3
	ctx.r11.s64 = 3;
	// ori r6,r7,16288
	ctx.r6.u64 = ctx.r7.u64 | 16288;
	// ori r4,r5,16284
	ctx.r4.u64 = ctx.r5.u64 | 16284;
	// stwx r11,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r11.u32);
	// stwx r11,r31,r4
	PPC_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r11.u32);
	// bl 0x8212bb98
	ctx.lr = 0x8210ECE0;
	sub_8212BB98(ctx, base);
	// bl 0x82361048
	ctx.lr = 0x8210ECE4;
	sub_82361048(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8210ECEC"))) PPC_WEAK_FUNC(sub_8210ECEC);
PPC_FUNC_IMPL(__imp__sub_8210ECEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8210ECF0"))) PPC_WEAK_FUNC(sub_8210ECF0);
PPC_FUNC_IMPL(__imp__sub_8210ECF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baec
	ctx.lr = 0x8210ECF8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r28,r11,-32560
	ctx.r28.s64 = ctx.r11.s64 + -32560;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// ori r27,r10,16292
	ctx.r27.u64 = ctx.r10.u64 | 16292;
	// stb r26,21740(r31)
	PPC_STORE_U8(ctx.r31.u32 + 21740, ctx.r26.u8);
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// addi r29,r11,28544
	ctx.r29.s64 = ctx.r11.s64 + 28544;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r25,r11,26752
	ctx.r25.s64 = ctx.r11.s64 + 26752;
	// beq cr6,0x8210edf8
	if (ctx.cr6.eq) goto loc_8210EDF8;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82231138
	ctx.lr = 0x8210ED3C;
	sub_82231138(ctx, base);
	// lbzx r9,r31,r27
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r27.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8210ed58
	if (ctx.cr6.eq) goto loc_8210ED58;
	// lbz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8210ed5c
	if (!ctx.cr6.eq) goto loc_8210ED5C;
loc_8210ED58:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8210ED5C:
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// lis r5,7
	ctx.r5.s64 = 458752;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// ori r30,r5,16216
	ctx.r30.u64 = ctx.r5.u64 | 16216;
	// bne cr6,0x8210ede4
	if (!ctx.cr6.eq) goto loc_8210EDE4;
	// lis r4,37
	ctx.r4.s64 = 2424832;
	// ori r3,r4,49145
	ctx.r3.u64 = ctx.r4.u64 | 49145;
	// lbzx r11,r29,r3
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8210ed9c
	if (!ctx.cr6.eq) goto loc_8210ED9C;
	// lis r10,37
	ctx.r10.s64 = 2424832;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// ori r9,r10,49144
	ctx.r9.u64 = ctx.r10.u64 | 49144;
	// lbzx r8,r29,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8210eda0
	if (ctx.cr6.eq) goto loc_8210EDA0;
loc_8210ED9C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8210EDA0:
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8210edb4
	if (!ctx.cr6.eq) goto loc_8210EDB4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82370c88
	ctx.lr = 0x8210EDB4;
	sub_82370C88(ctx, base);
loc_8210EDB4:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r5,21740(r31)
	PPC_STORE_U8(ctx.r31.u32 + 21740, ctx.r5.u8);
	// bl 0x82346810
	ctx.lr = 0x8210EDC4;
	sub_82346810(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8210b3c8
	ctx.lr = 0x8210EDCC;
	sub_8210B3C8(ctx, base);
	// lwzx r3,r31,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8210EDE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stb r26,21740(r31)
	PPC_STORE_U8(ctx.r31.u32 + 21740, ctx.r26.u8);
loc_8210EDE4:
	// lwzx r3,r31,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8210EDF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8210EDF8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8210b3c8
	ctx.lr = 0x8210EE00;
	sub_8210B3C8(ctx, base);
	// lis r8,7
	ctx.r8.s64 = 458752;
	// addis r30,r31,7
	ctx.r30.s64 = ctx.r31.s64 + 458752;
	// ori r7,r8,16228
	ctx.r7.u64 = ctx.r8.u64 | 16228;
	// addi r30,r30,16280
	ctx.r30.s64 = ctx.r30.s64 + 16280;
	// lwzx r6,r31,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// stfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// cmpwi cr6,r6,-1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -1, ctx.xer);
	// bne cr6,0x8210eeb0
	if (!ctx.cr6.eq) goto loc_8210EEB0;
	// lis r5,4
	ctx.r5.s64 = 262144;
	// ori r4,r5,30448
	ctx.r4.u64 = ctx.r5.u64 | 30448;
	// lbzx r3,r29,r4
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r4.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8210ee4c
	if (!ctx.cr6.eq) goto loc_8210EE4C;
	// lis r11,4
	ctx.r11.s64 = 262144;
	// ori r10,r11,30452
	ctx.r10.u64 = ctx.r11.u64 | 30452;
	// lwzx r11,r29,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// beq cr6,0x8210ee50
	if (ctx.cr6.eq) goto loc_8210EE50;
loc_8210EE4C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8210EE50:
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8210eeb0
	if (!ctx.cr6.eq) goto loc_8210EEB0;
	// lis r7,4
	ctx.r7.s64 = 262144;
	// ori r6,r7,30438
	ctx.r6.u64 = ctx.r7.u64 | 30438;
	// lbzx r5,r29,r6
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r6.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8210eeb0
	if (!ctx.cr6.eq) goto loc_8210EEB0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8232dd18
	ctx.lr = 0x8210EE78;
	sub_8232DD18(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8210eeb0
	if (!ctx.cr6.eq) goto loc_8210EEB0;
	// lbz r3,1(r28)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r28.u32 + 1);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8210eeb0
	if (ctx.cr6.eq) goto loc_8210EEB0;
	// addis r3,r31,3
	ctx.r3.s64 = ctx.r31.s64 + 196608;
	// lfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r3,-11424
	ctx.r3.s64 = ctx.r3.s64 + -11424;
	// bl 0x822ef4a8
	ctx.lr = 0x8210EEA0;
	sub_822EF4A8(ctx, base);
	// addis r3,r31,3
	ctx.r3.s64 = ctx.r31.s64 + 196608;
	// lfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r3,496
	ctx.r3.s64 = ctx.r3.s64 + 496;
	// bl 0x822ef4a8
	ctx.lr = 0x8210EEB0;
	sub_822EF4A8(ctx, base);
loc_8210EEB0:
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8210ef58
	if (ctx.cr6.eq) goto loc_8210EF58;
	// add r31,r31,r27
	ctx.r31.u64 = ctx.r31.u64 + ctx.r27.u64;
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r7,r9,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8210ef18
	if (ctx.cr6.eq) goto loc_8210EF18;
	// lis r6,37
	ctx.r6.s64 = 2424832;
	// ori r5,r6,49145
	ctx.r5.u64 = ctx.r6.u64 | 49145;
	// lbzx r4,r29,r5
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r5.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8210ef00
	if (!ctx.cr6.eq) goto loc_8210EF00;
	// lis r3,37
	ctx.r3.s64 = 2424832;
	// ori r11,r3,49144
	ctx.r11.u64 = ctx.r3.u64 | 49144;
	// lbzx r10,r29,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8210ef04
	if (ctx.cr6.eq) goto loc_8210EF04;
loc_8210EF00:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8210EF04:
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8210ef18
	if (!ctx.cr6.eq) goto loc_8210EF18;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82370cc0
	ctx.lr = 0x8210EF18;
	sub_82370CC0(ctx, base);
loc_8210EF18:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8222fd48
	ctx.lr = 0x8210EF20;
	sub_8222FD48(ctx, base);
	// lbz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8210ef3c
	if (ctx.cr6.eq) goto loc_8210EF3C;
	// lbz r6,0(r28)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8210ef40
	if (!ctx.cr6.eq) goto loc_8210EF40;
loc_8210EF3C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8210EF40:
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8210ef58
	if (!ctx.cr6.eq) goto loc_8210EF58;
	// addis r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 262144;
	// addi r3,r11,29888
	ctx.r3.s64 = ctx.r11.s64 + 29888;
	// bl 0x82346c68
	ctx.lr = 0x8210EF58;
	sub_82346C68(ctx, base);
loc_8210EF58:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8210EF60"))) PPC_WEAK_FUNC(sub_8210EF60);
PPC_FUNC_IMPL(__imp__sub_8210EF60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x8210EF68;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x82363c10
	ctx.lr = 0x8210EF78;
	sub_82363C10(ctx, base);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// lwz r10,26592(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26592);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,26592(r11)
	PPC_STORE_U32(ctx.r11.u32 + 26592, ctx.r10.u32);
	// bl 0x8236be50
	ctx.lr = 0x8210EF90;
	sub_8236BE50(ctx, base);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// addi r3,r11,28544
	ctx.r3.s64 = ctx.r11.s64 + 28544;
	// bl 0x8236be50
	ctx.lr = 0x8210EF9C;
	sub_8236BE50(ctx, base);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r30,r11,26752
	ctx.r30.s64 = ctx.r11.s64 + 26752;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82231138
	ctx.lr = 0x8210EFAC;
	sub_82231138(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82103f10
	ctx.lr = 0x8210EFB4;
	sub_82103F10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8210efc4
	if (ctx.cr6.eq) goto loc_8210EFC4;
	// li r29,1
	ctx.r29.s64 = 1;
loc_8210EFC4:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// bl 0x82362aa0
	ctx.lr = 0x8210EFD0;
	sub_82362AA0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8222fd48
	ctx.lr = 0x8210EFD8;
	sub_8222FD48(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8210EFE4"))) PPC_WEAK_FUNC(sub_8210EFE4);
PPC_FUNC_IMPL(__imp__sub_8210EFE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8210EFE8"))) PPC_WEAK_FUNC(sub_8210EFE8);
PPC_FUNC_IMPL(__imp__sub_8210EFE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x8210EFF0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8210F004:
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// lbz r10,2443(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2443);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8210f048
	if (ctx.cr6.eq) goto loc_8210F048;
	// lbz r9,2441(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2441);
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// mulli r11,r8,360
	ctx.r11.s64 = ctx.r8.s64 * 360;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,1004(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1004);
	// bl 0x823608f8
	ctx.lr = 0x8210F02C;
	sub_823608F8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8210f03c
	if (!ctx.cr6.eq) goto loc_8210F03C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8210F03C:
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8210f078
	if (ctx.cr6.eq) goto loc_8210F078;
loc_8210F048:
	// addi r5,r30,1
	ctx.r5.s64 = ctx.r30.s64 + 1;
	// extsb r29,r5
	ctx.r29.s64 = ctx.r5.s8;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// blt cr6,0x8210f004
	if (ctx.cr6.lt) goto loc_8210F004;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8210f06c
	if (ctx.cr6.eq) goto loc_8210F06C;
	// li r4,-1
	ctx.r4.s64 = -1;
	// stb r4,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r4.u8);
loc_8210F06C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8210F078:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8210f084
	if (ctx.cr6.eq) goto loc_8210F084;
	// stb r29,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r29.u8);
loc_8210F084:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8210F090"))) PPC_WEAK_FUNC(sub_8210F090);
PPC_FUNC_IMPL(__imp__sub_8210F090) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82104620
	ctx.lr = 0x8210F0AC;
	sub_82104620(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
loc_8210F0B0:
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8210f0f4
	if (ctx.cr6.eq) goto loc_8210F0F4;
	// rlwinm r10,r31,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r31,r10
	ctx.r8.u64 = ctx.r31.u64 + ctx.r10.u64;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// lhz r6,20(r7)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r7.u32 + 20);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8210f0e8
	if (!ctx.cr6.eq) goto loc_8210F0E8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8210F0E8:
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8210f11c
	if (!ctx.cr6.eq) goto loc_8210F11C;
loc_8210F0F4:
	// addi r3,r9,1
	ctx.r3.s64 = ctx.r9.s64 + 1;
	// extsb r9,r3
	ctx.r9.s64 = ctx.r3.s8;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// blt cr6,0x8210f0b0
	if (ctx.cr6.lt) goto loc_8210F0B0;
	// li r3,0
	ctx.r3.s64 = 0;
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
loc_8210F11C:
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

__attribute__((alias("__imp__sub_8210F134"))) PPC_WEAK_FUNC(sub_8210F134);
PPC_FUNC_IMPL(__imp__sub_8210F134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8210F138"))) PPC_WEAK_FUNC(sub_8210F138);
PPC_FUNC_IMPL(__imp__sub_8210F138) {
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
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82104620
	ctx.lr = 0x8210F154;
	sub_82104620(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_8210F158:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8210f17c
	if (ctx.cr6.eq) goto loc_8210F17C;
	// bl 0x8210bc08
	ctx.lr = 0x8210F170;
	sub_8210BC08(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8210f1a4
	if (!ctx.cr6.eq) goto loc_8210F1A4;
loc_8210F17C:
	// addi r8,r31,1
	ctx.r8.s64 = ctx.r31.s64 + 1;
	// extsb r31,r8
	ctx.r31.s64 = ctx.r8.s8;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// blt cr6,0x8210f158
	if (ctx.cr6.lt) goto loc_8210F158;
	// li r3,0
	ctx.r3.s64 = 0;
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
loc_8210F1A4:
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

__attribute__((alias("__imp__sub_8210F1BC"))) PPC_WEAK_FUNC(sub_8210F1BC);
PPC_FUNC_IMPL(__imp__sub_8210F1BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8210F1C0"))) PPC_WEAK_FUNC(sub_8210F1C0);
PPC_FUNC_IMPL(__imp__sub_8210F1C0) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82104620
	ctx.lr = 0x8210F1DC;
	sub_82104620(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_8210F1E0:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8210f204
	if (ctx.cr6.eq) goto loc_8210F204;
	// bl 0x8210b630
	ctx.lr = 0x8210F1F8;
	sub_8210B630(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8210f22c
	if (!ctx.cr6.eq) goto loc_8210F22C;
loc_8210F204:
	// addi r8,r31,1
	ctx.r8.s64 = ctx.r31.s64 + 1;
	// extsb r31,r8
	ctx.r31.s64 = ctx.r8.s8;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// blt cr6,0x8210f1e0
	if (ctx.cr6.lt) goto loc_8210F1E0;
	// li r3,0
	ctx.r3.s64 = 0;
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
loc_8210F22C:
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

__attribute__((alias("__imp__sub_8210F244"))) PPC_WEAK_FUNC(sub_8210F244);
PPC_FUNC_IMPL(__imp__sub_8210F244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8210F248"))) PPC_WEAK_FUNC(sub_8210F248);
PPC_FUNC_IMPL(__imp__sub_8210F248) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x8210F250;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// extsb r4,r4
	ctx.r4.s64 = ctx.r4.s8;
	// li r28,0
	ctx.r28.s64 = 0;
	// add r8,r4,r31
	ctx.r8.u64 = ctx.r4.u64 + ctx.r31.u64;
	// lbz r11,2441(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 2441);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbz r9,2445(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2445);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8210f288
	if (!ctx.cr6.eq) goto loc_8210F288;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_8210F288:
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r7,7
	ctx.r7.s64 = 458752;
	// addi r29,r11,26080
	ctx.r29.s64 = ctx.r11.s64 + 26080;
	// ori r6,r7,16216
	ctx.r6.u64 = ctx.r7.u64 | 16216;
	// li r27,1
	ctx.r27.s64 = 1;
	// lwzx r11,r29,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r6.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8210f320
	if (ctx.cr6.eq) goto loc_8210F320;
	// addis r10,r29,3
	ctx.r10.s64 = ctx.r29.s64 + 196608;
	// addi r5,r10,24760
	ctx.r5.s64 = ctx.r10.s64 + 24760;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x8210f320
	if (ctx.cr6.eq) goto loc_8210F320;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lis r3,34
	ctx.r3.s64 = 2228224;
	// addi r10,r11,28544
	ctx.r10.s64 = ctx.r11.s64 + 28544;
	// ori r11,r3,37004
	ctx.r11.u64 = ctx.r3.u64 | 37004;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// ble cr6,0x8210f31c
	if (!ctx.cr6.gt) goto loc_8210F31C;
	// addis r9,r10,35
	ctx.r9.s64 = ctx.r10.s64 + 2293760;
	// mulli r11,r4,19200
	ctx.r11.s64 = ctx.r4.s64 * 19200;
	// addi r9,r9,-28496
	ctx.r9.s64 = ctx.r9.s64 + -28496;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8210f308
	if (ctx.cr6.eq) goto loc_8210F308;
	// lbz r9,19176(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 19176);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8210f304
	if (!ctx.cr6.eq) goto loc_8210F304;
	// lwz r7,13520(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13520);
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// bne cr6,0x8210f308
	if (!ctx.cr6.eq) goto loc_8210F308;
loc_8210F304:
	// stb r27,2509(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2509, ctx.r27.u8);
loc_8210F308:
	// lis r6,37
	ctx.r6.s64 = 2424832;
	// ori r5,r6,49248
	ctx.r5.u64 = ctx.r6.u64 | 49248;
	// lbzx r3,r10,r5
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r5.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8210f320
	if (ctx.cr6.eq) goto loc_8210F320;
loc_8210F31C:
	// stb r27,2509(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2509, ctx.r27.u8);
loc_8210F320:
	// lbz r11,2509(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 2509);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// beq cr6,0x8210f398
	if (ctx.cr6.eq) goto loc_8210F398;
	// lfs f0,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r4,613
	ctx.r10.s64 = ctx.r4.s64 + 613;
	// addi r9,r4,615
	ctx.r9.s64 = ctx.r4.s64 + 615;
	// addi r7,r4,619
	ctx.r7.s64 = ctx.r4.s64 + 619;
	// addi r6,r4,621
	ctx.r6.s64 = ctx.r4.s64 + 621;
	// addi r5,r4,617
	ctx.r5.s64 = ctx.r4.s64 + 617;
	// addi r3,r4,623
	ctx.r3.s64 = ctx.r4.s64 + 623;
	// addi r11,r4,625
	ctx.r11.s64 = ctx.r4.s64 + 625;
	// rlwinm r4,r3,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r4,r31
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + ctx.r31.u32, temp.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r10,r31
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, temp.u32);
	// stfsx f0,r9,r31
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stfsx f0,r7,r31
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, temp.u32);
	// stfsx f0,r6,r31
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r31.u32, temp.u32);
	// stfsx f0,r5,r31
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r31.u32, temp.u32);
	// stfsx f0,r11,r31
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, temp.u32);
	// stb r28,2509(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2509, ctx.r28.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_8210F398:
	// addi r10,r4,619
	ctx.r10.s64 = ctx.r4.s64 + 619;
	// lfs f10,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f10.f64 = double(temp.f32);
	// rlwinm r30,r10,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f9,r30,r31
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f9,f10
	ctx.cr6.compare(ctx.f9.f64, ctx.f10.f64);
	// ble cr6,0x8210f400
	if (!ctx.cr6.gt) goto loc_8210F400;
	// addi r3,r29,92
	ctx.r3.s64 = ctx.r29.s64 + 92;
	// bl 0x8210b3c8
	ctx.lr = 0x8210F3B8;
	sub_8210B3C8(ctx, base);
	// fsubs f0,f9,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f9.f64 - ctx.f1.f64));
	// stfsx f0,r30,r31
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, temp.u32);
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bgt cr6,0x8210f3dc
	if (ctx.cr6.gt) goto loc_8210F3DC;
	// bso cr6,0x8210f3dc
	if (ctx.cr6.so) goto loc_8210F3DC;
	// addi r9,r4,613
	ctx.r9.s64 = ctx.r4.s64 + 613;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f10,r8,r31
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, temp.u32);
	// b 0x8210f3fc
	goto loc_8210F3FC;
loc_8210F3DC:
	// addi r7,r4,613
	ctx.r7.s64 = ctx.r4.s64 + 613;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,2868(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r11,r31
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x8210f400
	if (ctx.cr6.eq) goto loc_8210F400;
	// stfsx f0,r11,r31
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, temp.u32);
loc_8210F3FC:
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
loc_8210F400:
	// addi r6,r4,621
	ctx.r6.s64 = ctx.r4.s64 + 621;
	// rlwinm r30,r6,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f9,r30,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f9,f10
	ctx.cr6.compare(ctx.f9.f64, ctx.f10.f64);
	// ble cr6,0x8210f528
	if (!ctx.cr6.gt) goto loc_8210F528;
	// addi r3,r29,92
	ctx.r3.s64 = ctx.r29.s64 + 92;
	// bl 0x8210b3c8
	ctx.lr = 0x8210F41C;
	sub_8210B3C8(ctx, base);
	// fsubs f0,f9,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f9.f64 - ctx.f1.f64));
	// stfsx f0,r30,r31
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, temp.u32);
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bgt cr6,0x8210f470
	if (ctx.cr6.gt) goto loc_8210F470;
	// bso cr6,0x8210f470
	if (ctx.cr6.so) goto loc_8210F470;
	// addi r5,r4,617
	ctx.r5.s64 = ctx.r4.s64 + 617;
	// addi r3,r4,615
	ctx.r3.s64 = ctx.r4.s64 + 615;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r10,r31
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f12,r11,r31
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// beq cr6,0x8210f458
	if (ctx.cr6.eq) goto loc_8210F458;
	// stfsx f0,r11,r31
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, temp.u32);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
loc_8210F458:
	// addi r9,r4,623
	ctx.r9.s64 = ctx.r4.s64 + 623;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f10,r8,r31
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_8210F470:
	// addi r7,r4,625
	ctx.r7.s64 = ctx.r4.s64 + 625;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f11,r6,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x8210f4a4
	if (!ctx.cr6.gt) goto loc_8210F4A4;
	// addi r5,r4,623
	ctx.r5.s64 = ctx.r4.s64 + 623;
	// addi r4,r4,615
	ctx.r4.s64 = ctx.r4.s64 + 615;
	// rlwinm r3,r5,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r3,r31
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r31.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f10,r11,r31
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// b 0x8210f544
	goto loc_8210F544;
loc_8210F4A4:
	// addi r10,r4,617
	ctx.r10.s64 = ctx.r4.s64 + 617;
	// addi r11,r4,623
	ctx.r11.s64 = ctx.r4.s64 + 623;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfsx f0,r9,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f9,r11,r31
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	ctx.f9.f64 = double(temp.f32);
	// lfs f13,17572(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 17572);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8210f4fc
	if (!ctx.cr6.gt) goto loc_8210F4FC;
	// addi r8,r4,615
	ctx.r8.s64 = ctx.r4.s64 + 615;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f8,r10,r31
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	ctx.f8.f64 = double(temp.f32);
	// fcmpu cr6,f8,f13
	ctx.cr6.compare(ctx.f8.f64, ctx.f13.f64);
	// beq cr6,0x8210f550
	if (ctx.cr6.eq) goto loc_8210F550;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// stfsx f13,r10,r31
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, temp.u32);
	// stfsx f13,r11,r31
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, temp.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_8210F4FC:
	// addi r7,r4,615
	ctx.r7.s64 = ctx.r4.s64 + 615;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f7,r10,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	ctx.f7.f64 = double(temp.f32);
	// fcmpu cr6,f7,f0
	ctx.cr6.compare(ctx.f7.f64, ctx.f0.f64);
	// beq cr6,0x8210f550
	if (ctx.cr6.eq) goto loc_8210F550;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// stfsx f0,r10,r31
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, temp.u32);
	// stfsx f0,r11,r31
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, temp.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_8210F528:
	// addi r5,r4,615
	ctx.r5.s64 = ctx.r4.s64 + 615;
	// addi r6,r4,617
	ctx.r6.s64 = ctx.r4.s64 + 617;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f6,r11,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	ctx.f6.f64 = double(temp.f32);
	// lfsx f0,r4,r31
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r31.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f6
	ctx.cr6.compare(ctx.f0.f64, ctx.f6.f64);
loc_8210F544:
	// beq cr6,0x8210f550
	if (ctx.cr6.eq) goto loc_8210F550;
	// stfsx f0,r11,r31
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, temp.u32);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
loc_8210F550:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8210F55C"))) PPC_WEAK_FUNC(sub_8210F55C);
PPC_FUNC_IMPL(__imp__sub_8210F55C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8210F560"))) PPC_WEAK_FUNC(sub_8210F560);
PPC_FUNC_IMPL(__imp__sub_8210F560) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8210f57c
	if (ctx.cr6.lt) goto loc_8210F57C;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x82104708
	sub_82104708(ctx, base);
	return;
loc_8210F57C:
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lis r9,37
	ctx.r9.s64 = 2424832;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// ori r8,r9,49147
	ctx.r8.u64 = ctx.r9.u64 | 49147;
	// lbzx r7,r11,r8
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// extsb r11,r5
	ctx.r11.s64 = ctx.r5.s8;
	// add r6,r11,r3
	ctx.r6.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r5,2441(r6)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r6.u32 + 2441);
	// extsb r8,r5
	ctx.r8.s64 = ctx.r5.s8;
	// add r4,r8,r3
	ctx.r4.u64 = ctx.r8.u64 + ctx.r3.u64;
	// lbz r9,2445(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2445);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// clrlwi r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r7,r11,619
	ctx.r7.s64 = ctx.r11.s64 + 619;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r11,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// stfsx f1,r11,r3
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8210F5E0"))) PPC_WEAK_FUNC(sub_8210F5E0);
PPC_FUNC_IMPL(__imp__sub_8210F5E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lis r10,37
	ctx.r10.s64 = 2424832;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// ori r9,r10,49147
	ctx.r9.u64 = ctx.r10.u64 | 49147;
	// lbzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// extsb r11,r4
	ctx.r11.s64 = ctx.r4.s8;
	// add r7,r11,r3
	ctx.r7.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r5,2441(r7)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r7.u32 + 2441);
	// extsb r10,r5
	ctx.r10.s64 = ctx.r5.s8;
	// add r4,r10,r3
	ctx.r4.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lbz r10,2445(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2445);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// clrlwi r9,r6,31
	ctx.r9.u64 = ctx.r6.u32 & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r8,r11,617
	ctx.r8.s64 = ctx.r11.s64 + 617;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r11,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,12452(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12452);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfsx f13,r11,r3
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8210F650"))) PPC_WEAK_FUNC(sub_8210F650);
PPC_FUNC_IMPL(__imp__sub_8210F650) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x8210F658;
	__savegprlr_26(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// lis r9,-32124
	ctx.r9.s64 = -2105278464;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// addi r7,r9,26080
	ctx.r7.s64 = ctx.r9.s64 + 26080;
loc_8210F66C:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// mulli r9,r10,360
	ctx.r9.s64 = ctx.r10.s64 * 360;
	// addi r4,r7,264
	ctx.r4.s64 = ctx.r7.s64 + 264;
	// mulli r5,r8,220
	ctx.r5.s64 = ctx.r8.s64 * 220;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// extsb r10,r6
	ctx.r10.s64 = ctx.r6.s8;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r6,r5,r4
	ctx.r6.u64 = ctx.r5.u64 + ctx.r4.u64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// stw r8,1000(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1000, ctx.r8.u32);
	// stw r6,1004(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1004, ctx.r6.u32);
	// lfs f0,128(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1356(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 1356, temp.u32);
	// stb r31,2445(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2445, ctx.r31.u8);
	// blt cr6,0x8210f66c
	if (ctx.cr6.lt) goto loc_8210F66C;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// lfs f13,-12136(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -12136);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2864(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
loc_8210F6C4:
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// extsb r8,r5
	ctx.r8.s64 = ctx.r5.s8;
	// addi r3,r10,613
	ctx.r3.s64 = ctx.r10.s64 + 613;
	// addi r7,r10,615
	ctx.r7.s64 = ctx.r10.s64 + 615;
	// addi r6,r10,617
	ctx.r6.s64 = ctx.r10.s64 + 617;
	// addi r5,r10,619
	ctx.r5.s64 = ctx.r10.s64 + 619;
	// addi r30,r10,621
	ctx.r30.s64 = ctx.r10.s64 + 621;
	// addi r29,r10,623
	ctx.r29.s64 = ctx.r10.s64 + 623;
	// addi r28,r10,625
	ctx.r28.s64 = ctx.r10.s64 + 625;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r27,r10,628
	ctx.r27.s64 = ctx.r10.s64 + 628;
	// addi r10,r10,630
	ctx.r10.s64 = ctx.r10.s64 + 630;
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stb r4,2441(r9)
	PPC_STORE_U8(ctx.r9.u32 + 2441, ctx.r4.u8);
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stb r31,2443(r9)
	PPC_STORE_U8(ctx.r9.u32 + 2443, ctx.r31.u8);
	// rlwinm r30,r30,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r29,r29,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r3,r11
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, temp.u32);
	// rlwinm r28,r28,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r7,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r11.u32, temp.u32);
	// rlwinm r26,r10,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r6,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r11.u32, temp.u32);
	// rlwinm r27,r27,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r5,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r11.u32, temp.u32);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// stfsx f0,r30,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, temp.u32);
	// stfsx f0,r29,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + ctx.r11.u32, temp.u32);
	// stfsx f0,r28,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + ctx.r11.u32, temp.u32);
	// stb r31,2509(r9)
	PPC_STORE_U8(ctx.r9.u32 + 2509, ctx.r31.u8);
	// stfsx f13,r26,r11
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r26.u32 + ctx.r11.u32, temp.u32);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// stfsx f13,r27,r11
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r27.u32 + ctx.r11.u32, temp.u32);
	// blt cr6,0x8210f6c4
	if (ctx.cr6.lt) goto loc_8210F6C4;
	// li r4,-1
	ctx.r4.s64 = -1;
	// stb r31,2508(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2508, ctx.r31.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r4,2440(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2440, ctx.r4.u8);
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8210F76C"))) PPC_WEAK_FUNC(sub_8210F76C);
PPC_FUNC_IMPL(__imp__sub_8210F76C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8210F770"))) PPC_WEAK_FUNC(sub_8210F770);
PPC_FUNC_IMPL(__imp__sub_8210F770) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// lfs f13,2868(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2868);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
loc_8210F788:
	// mulli r11,r8,360
	ctx.r11.s64 = ctx.r8.s64 * 360;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r9,28
	ctx.r9.s64 = 28;
	// addi r10,r11,1012
	ctx.r10.s64 = ctx.r11.s64 + 1012;
	// addi r11,r10,10
	ctx.r11.s64 = ctx.r10.s64 + 10;
	// stfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
loc_8210F7A4:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stfs f13,2(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2, temp.u32);
	// stfs f0,6(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 6, temp.u32);
	// sth r7,-2(r11)
	PPC_STORE_U16(ctx.r11.u32 + -2, ctx.r7.u16);
	// sth r7,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r7.u16);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// bne cr6,0x8210f7a4
	if (!ctx.cr6.eq) goto loc_8210F7A4;
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// blt cr6,0x8210f788
	if (ctx.cr6.lt) goto loc_8210F788;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8210F7DC"))) PPC_WEAK_FUNC(sub_8210F7DC);
PPC_FUNC_IMPL(__imp__sub_8210F7DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8210F7E0"))) PPC_WEAK_FUNC(sub_8210F7E0);
PPC_FUNC_IMPL(__imp__sub_8210F7E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f1,17576(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17576);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82104620
	ctx.lr = 0x8210F800;
	sub_82104620(ctx, base);
	// lis r10,-32124
	ctx.r10.s64 = -2105278464;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,26080
	ctx.r10.s64 = ctx.r10.s64 + 26080;
	// lfs f13,128(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
loc_8210F810:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8210f838
	if (ctx.cr6.eq) goto loc_8210F838;
	// lfs f0,356(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 356);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bge cr6,0x8210f838
	if (!ctx.cr6.lt) goto loc_8210F838;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_8210F838:
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x8210f810
	if (ctx.cr6.lt) goto loc_8210F810;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8210F858"))) PPC_WEAK_FUNC(sub_8210F858);
PPC_FUNC_IMPL(__imp__sub_8210F858) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82104620
	ctx.lr = 0x8210F870;
	sub_82104620(ctx, base);
	// lis r10,-32124
	ctx.r10.s64 = -2105278464;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,26080
	ctx.r9.s64 = ctx.r10.s64 + 26080;
loc_8210F87C:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8210f898
	if (ctx.cr6.eq) goto loc_8210F898;
	// lfs f0,128(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,356(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 356, temp.u32);
loc_8210F898:
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// extsb r11,r7
	ctx.r11.s64 = ctx.r7.s8;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x8210f87c
	if (ctx.cr6.lt) goto loc_8210F87C;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8210F8B8"))) PPC_WEAK_FUNC(sub_8210F8B8);
PPC_FUNC_IMPL(__imp__sub_8210F8B8) {
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
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82104620
	ctx.lr = 0x8210F8D4;
	sub_82104620(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_8210F8D8:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8210f900
	if (ctx.cr6.eq) goto loc_8210F900;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82360838
	ctx.lr = 0x8210F8F4;
	sub_82360838(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8210f928
	if (!ctx.cr6.eq) goto loc_8210F928;
loc_8210F900:
	// addi r8,r31,1
	ctx.r8.s64 = ctx.r31.s64 + 1;
	// extsb r31,r8
	ctx.r31.s64 = ctx.r8.s8;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// blt cr6,0x8210f8d8
	if (ctx.cr6.lt) goto loc_8210F8D8;
	// li r3,0
	ctx.r3.s64 = 0;
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
loc_8210F928:
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

__attribute__((alias("__imp__sub_8210F940"))) PPC_WEAK_FUNC(sub_8210F940);
PPC_FUNC_IMPL(__imp__sub_8210F940) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x82104620
	ctx.lr = 0x8210F964;
	sub_82104620(ctx, base);
	// lbz r11,2443(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2443);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,-1
	ctx.r11.s64 = -1;
	// beq cr6,0x8210f978
	if (ctx.cr6.eq) goto loc_8210F978;
	// lbz r11,2441(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2441);
loc_8210F978:
	// lbz r10,2444(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2444);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// li r11,-1
	ctx.r11.s64 = -1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8210f990
	if (ctx.cr6.eq) goto loc_8210F990;
	// lbz r11,2442(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2442);
loc_8210F990:
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// li r31,0
	ctx.r31.s64 = 0;
loc_8210F998:
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lbzx r8,r31,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8210f9f0
	if (ctx.cr6.lt) goto loc_8210F9F0;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bge cr6,0x8210f9f0
	if (!ctx.cr6.lt) goto loc_8210F9F0;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwzx r3,r7,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8210f9f0
	if (ctx.cr6.eq) goto loc_8210F9F0;
	// clrlwi r5,r30,24
	ctx.r5.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8210f9e8
	if (!ctx.cr6.eq) goto loc_8210F9E8;
	// bl 0x8210b918
	ctx.lr = 0x8210F9D8;
	sub_8210B918(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8210f9ec
	if (ctx.cr6.eq) goto loc_8210F9EC;
loc_8210F9E8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8210F9EC:
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
loc_8210F9F0:
	// addi r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 1;
	// extsb r31,r3
	ctx.r31.s64 = ctx.r3.s8;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// blt cr6,0x8210f998
	if (ctx.cr6.lt) goto loc_8210F998;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_8210FA1C"))) PPC_WEAK_FUNC(sub_8210FA1C);
PPC_FUNC_IMPL(__imp__sub_8210FA1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8210FA20"))) PPC_WEAK_FUNC(sub_8210FA20);
PPC_FUNC_IMPL(__imp__sub_8210FA20) {
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
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// stw r4,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r4.u32);
	// stw r4,23500(r11)
	PPC_STORE_U32(ctx.r11.u32 + 23500, ctx.r4.u32);
	// bl 0x82104868
	ctx.lr = 0x8210FA44;
	sub_82104868(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821048f0
	ctx.lr = 0x8210FA4C;
	sub_821048F0(ctx, base);
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r3,r11,-14944
	ctx.r3.s64 = ctx.r11.s64 + -14944;
	// bl 0x82105f28
	ctx.lr = 0x8210FA58;
	sub_82105F28(ctx, base);
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

__attribute__((alias("__imp__sub_8210FA6C"))) PPC_WEAK_FUNC(sub_8210FA6C);
PPC_FUNC_IMPL(__imp__sub_8210FA6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8210FA70"))) PPC_WEAK_FUNC(sub_8210FA70);
PPC_FUNC_IMPL(__imp__sub_8210FA70) {
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
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lwz r10,23988(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23988);
	// lwz r9,23988(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23988);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r10,r9,5
	ctx.r10.s64 = ctx.r9.s64 + 5;
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// beq cr6,0x8210fad0
	if (ctx.cr6.eq) goto loc_8210FAD0;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8210FAD0:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8210faf0
	if (ctx.cr6.eq) goto loc_8210FAF0;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8210FAF0:
	// lwz r10,23988(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23988);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r5,r6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// beq cr6,0x8210fb34
	if (ctx.cr6.eq) goto loc_8210FB34;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8210FB34:
	// clrlwi r3,r10,24
	ctx.r3.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8210fb54
	if (ctx.cr6.eq) goto loc_8210FB54;
	// li r3,7
	ctx.r3.s64 = 7;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8210FB54:
	// lwz r10,23988(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23988);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r5,r6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// beq cr6,0x8210fb98
	if (ctx.cr6.eq) goto loc_8210FB98;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8210FB98:
	// clrlwi r3,r10,24
	ctx.r3.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8210fbb8
	if (ctx.cr6.eq) goto loc_8210FBB8;
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
loc_8210FBB8:
	// lwz r10,23988(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23988);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r5,r6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// beq cr6,0x8210fbfc
	if (ctx.cr6.eq) goto loc_8210FBFC;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8210FBFC:
	// clrlwi r3,r10,24
	ctx.r3.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8210fc60
	if (ctx.cr6.eq) goto loc_8210FC60;
	// bl 0x82360de0
	ctx.lr = 0x8210FC0C;
	sub_82360DE0(ctx, base);
	// cmplwi cr6,r3,12
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 12, ctx.xer);
	// bgt cr6,0x8210fce0
	if (ctx.cr6.gt) goto loc_8210FCE0;
	// lis r12,-32239
	ctx.r12.s64 = -2112815104;
	// addi r12,r12,-980
	ctx.r12.s64 = ctx.r12.s64 + -980;
	// rlwinm r0,r3,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r3.u64) {
	case 0:
		goto loc_8210FCE4;
	case 1:
		goto loc_8210FCE0;
	case 2:
		goto loc_8210FCE0;
	case 3:
		goto loc_8210FCE0;
	case 4:
		goto loc_8210FCE0;
	case 5:
		goto loc_8210FCE4;
	case 6:
		goto loc_8210FCE0;
	case 7:
		goto loc_8210FCE0;
	case 8:
		goto loc_8210FCE0;
	case 9:
		goto loc_8210FCE0;
	case 10:
		goto loc_8210FCE4;
	case 11:
		goto loc_8210FCE4;
	case 12:
		goto loc_8210FCE4;
	default:
		__builtin_unreachable();
	}
	// lwz r16,-796(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -796);
	// lwz r16,-800(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -800);
	// lwz r16,-800(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -800);
	// lwz r16,-800(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -800);
	// lwz r16,-800(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -800);
	// lwz r16,-796(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -796);
	// lwz r16,-800(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -800);
	// lwz r16,-800(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -800);
	// lwz r16,-800(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -800);
	// lwz r16,-800(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -800);
	// lwz r16,-796(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -796);
	// lwz r16,-796(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -796);
	// lwz r16,-796(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -796);
loc_8210FC60:
	// lwz r11,23988(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23988);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// beq cr6,0x8210fca4
	if (ctx.cr6.eq) goto loc_8210FCA4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8210FCA4:
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8210fce0
	if (ctx.cr6.eq) goto loc_8210FCE0;
	// bl 0x82360de0
	ctx.lr = 0x8210FCB4;
	sub_82360DE0(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// blt cr6,0x8210fccc
	if (ctx.cr6.lt) goto loc_8210FCCC;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// ble cr6,0x8210fce4
	if (!ctx.cr6.gt) goto loc_8210FCE4;
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// beq cr6,0x8210fce4
	if (ctx.cr6.eq) goto loc_8210FCE4;
loc_8210FCCC:
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8210FCE0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8210FCE4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8210FCF4"))) PPC_WEAK_FUNC(sub_8210FCF4);
PPC_FUNC_IMPL(__imp__sub_8210FCF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8210FCF8"))) PPC_WEAK_FUNC(sub_8210FCF8);
PPC_FUNC_IMPL(__imp__sub_8210FCF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x8210FD00;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82351298
	ctx.lr = 0x8210FD14;
	sub_82351298(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
loc_8210FD1C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8210fd44
	if (!ctx.cr6.eq) goto loc_8210FD44;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// blt cr6,0x8210fd1c
	if (ctx.cr6.lt) goto loc_8210FD1C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8210FD3C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_8210FD44:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82351298
	ctx.lr = 0x8210FD4C;
	sub_82351298(ctx, base);
	// addi r9,r31,2
	ctx.r9.s64 = ctx.r31.s64 + 2;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r8,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r30.u32);
	// bl 0x82361b70
	ctx.lr = 0x8210FD60;
	sub_82361B70(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8210fd74
	if (ctx.cr6.eq) goto loc_8210FD74;
	// lhz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8210fd3c
	if (!ctx.cr6.eq) goto loc_8210FD3C;
loc_8210FD74:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,12248
	ctx.r3.s64 = ctx.r11.s64 + 12248;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8210FD84"))) PPC_WEAK_FUNC(sub_8210FD84);
PPC_FUNC_IMPL(__imp__sub_8210FD84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8210FD88"))) PPC_WEAK_FUNC(sub_8210FD88);
PPC_FUNC_IMPL(__imp__sub_8210FD88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae8
	ctx.lr = 0x8210FD90;
	__savegprlr_24(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8210fdc4
	if (ctx.cr6.lt) goto loc_8210FDC4;
	// beq cr6,0x8210fee0
	if (ctx.cr6.eq) goto loc_8210FEE0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x8210ff14
	if (ctx.cr6.lt) goto loc_8210FF14;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
loc_8210FDC4:
	// lwz r8,48(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmpwi cr6,r8,14
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 14, ctx.xer);
	// bne cr6,0x8210fde4
	if (!ctx.cr6.eq) goto loc_8210FDE4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8210fa70
	ctx.lr = 0x8210FDD8;
	sub_8210FA70(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// stw r8,23500(r11)
	PPC_STORE_U32(ctx.r11.u32 + 23500, ctx.r8.u32);
loc_8210FDE4:
	// addi r11,r27,2
	ctx.r11.s64 = ctx.r27.s64 + 2;
	// rlwinm r25,r11,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwzx r9,r25,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r31.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8210fe2c
	if (!ctx.cr6.eq) goto loc_8210FE2C;
	// addi r11,r11,12128
	ctx.r11.s64 = ctx.r11.s64 + 12128;
	// rlwinm r9,r27,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-21272
	ctx.r3.s64 = ctx.r11.s64 + -21272;
	// lwzx r4,r9,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x8210cf48
	ctx.lr = 0x8210FE1C;
	sub_8210CF48(ctx, base);
	// stwx r3,r25,r31
	PPC_STORE_U32(ctx.r25.u32 + ctx.r31.u32, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
loc_8210FE2C:
	// addi r29,r11,12128
	ctx.r29.s64 = ctx.r11.s64 + 12128;
	// rlwinm r30,r27,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r26,r29,16
	ctx.r26.s64 = ctx.r29.s64 + 16;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// addi r28,r11,-21272
	ctx.r28.s64 = ctx.r11.s64 + -21272;
	// lwzx r10,r30,r26
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r26.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8210fe74
	if (!ctx.cr6.gt) goto loc_8210FE74;
	// addi r7,r29,8
	ctx.r7.s64 = ctx.r29.s64 + 8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzx r4,r30,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r7.u32);
	// bl 0x8210d3f0
	ctx.lr = 0x8210FE5C;
	sub_8210D3F0(ctx, base);
	// subf r11,r10,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r10.s64;
	// addi r6,r27,4
	ctx.r6.s64 = ctx.r27.s64 + 4;
	// add r4,r11,r3
	ctx.r4.u64 = ctx.r11.u64 + ctx.r3.u64;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r4,r5,r31
	PPC_STORE_U32(ctx.r5.u32 + ctx.r31.u32, ctx.r4.u32);
	// b 0x8210fe80
	goto loc_8210FE80;
loc_8210FE74:
	// addi r3,r27,4
	ctx.r3.s64 = ctx.r27.s64 + 4;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r24,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r24.u32);
loc_8210FE80:
	// addi r10,r29,64
	ctx.r10.s64 = ctx.r29.s64 + 64;
	// lwzx r4,r30,r29
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r29.u32);
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwzx r5,r9,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x8259d1b0
	ctx.lr = 0x8210FE98;
	sub_8259D1B0(ctx, base);
	// addi r8,r29,8
	ctx.r8.s64 = ctx.r29.s64 + 8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzx r4,r30,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r8.u32);
	// bl 0x8210d3f0
	ctx.lr = 0x8210FEA8;
	sub_8210D3F0(ctx, base);
	// lis r10,-32124
	ctx.r10.s64 = -2105278464;
	// lwzx r7,r30,r26
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r26.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwzx r6,r25,r31
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r31.u32);
	// addi r10,r10,26080
	ctx.r10.s64 = ctx.r10.s64 + 26080;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r31,53
	ctx.r5.s64 = ctx.r31.s64 + 53;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r10,2736
	ctx.r3.s64 = ctx.r10.s64 + 2736;
	// subf r7,r7,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r7.s64;
	// bl 0x8210e1f0
	ctx.lr = 0x8210FED4;
	sub_8210E1F0(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r6.u32);
loc_8210FEE0:
	// lbz r5,53(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 53);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8210fef8
	if (!ctx.cr6.eq) goto loc_8210FEF8;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
loc_8210FEF8:
	// addi r4,r27,2
	ctx.r4.s64 = ctx.r27.s64 + 2;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r3,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r31.u32);
	// bl 0x82347920
	ctx.lr = 0x8210FF08;
	sub_82347920(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
loc_8210FF14:
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r24,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r24.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8210FF24"))) PPC_WEAK_FUNC(sub_8210FF24);
PPC_FUNC_IMPL(__imp__sub_8210FF24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8210FF28"))) PPC_WEAK_FUNC(sub_8210FF28);
PPC_FUNC_IMPL(__imp__sub_8210FF28) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8210fd88
	ctx.lr = 0x8210FF3C;
	sub_8210FD88(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8210ff50
	if (ctx.cr6.eq) goto loc_8210FF50;
	// li r3,1
	ctx.r3.s64 = 1;
loc_8210FF50:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8210FF60"))) PPC_WEAK_FUNC(sub_8210FF60);
PPC_FUNC_IMPL(__imp__sub_8210FF60) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8210d230
	ctx.lr = 0x8210FF88;
	sub_8210D230(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8210FFA8"))) PPC_WEAK_FUNC(sub_8210FFA8);
PPC_FUNC_IMPL(__imp__sub_8210FFA8) {
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
	// bl 0x82104d60
	ctx.lr = 0x8210FFB8;
	sub_82104D60(ctx, base);
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

__attribute__((alias("__imp__sub_8210FFCC"))) PPC_WEAK_FUNC(sub_8210FFCC);
PPC_FUNC_IMPL(__imp__sub_8210FFCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8210FFD0"))) PPC_WEAK_FUNC(sub_8210FFD0);
PPC_FUNC_IMPL(__imp__sub_8210FFD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x8210FFD8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x821102b8
	if (ctx.cr6.gt) goto loc_821102B8;
	// lis r12,-32239
	ctx.r12.s64 = -2112815104;
	// addi r12,r12,4
	ctx.r12.s64 = ctx.r12.s64 + 4;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82110028;
	case 1:
		goto loc_82110038;
	case 2:
		goto loc_82110058;
	case 3:
		goto loc_821102B8;
	case 4:
		goto loc_82110114;
	case 5:
		goto loc_82110140;
	case 6:
		goto loc_8211019C;
	case 7:
		goto loc_82110270;
	case 8:
		goto loc_821102B0;
	default:
		__builtin_unreachable();
	}
	// lwz r16,40(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 40);
	// lwz r16,56(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 56);
	// lwz r16,88(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 88);
	// lwz r16,696(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 696);
	// lwz r16,276(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 276);
	// lwz r16,320(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 320);
	// lwz r16,412(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 412);
	// lwz r16,624(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 624);
	// lwz r16,688(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 688);
loc_82110028:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82110038:
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r3,r31,22532
	ctx.r3.s64 = ctx.r31.s64 + 22532;
	// stw r10,1076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1076, ctx.r10.u32);
	// bl 0x823630a0
	ctx.lr = 0x82110048;
	sub_823630A0(ctx, base);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82110058:
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r8,7
	ctx.r8.s64 = 458752;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// ori r7,r8,14718
	ctx.r7.u64 = ctx.r8.u64 | 14718;
	// li r30,0
	ctx.r30.s64 = 0;
	// lbzx r6,r11,r7
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// bne cr6,0x8211007c
	if (!ctx.cr6.eq) goto loc_8211007C;
	// stw r30,1076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1076, ctx.r30.u32);
loc_8211007C:
	// addi r29,r31,22532
	ctx.r29.s64 = ctx.r31.s64 + 22532;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82362fc0
	ctx.lr = 0x82110088;
	sub_82362FC0(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8211009c
	if (ctx.cr6.eq) goto loc_8211009C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82105e78
	ctx.lr = 0x8211009C;
	sub_82105E78(ctx, base);
loc_8211009C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82362f20
	ctx.lr = 0x821100A4;
	sub_82362F20(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821102b8
	if (ctx.cr6.eq) goto loc_821102B8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r30,1412(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1412, ctx.r30.u8);
	// stw r30,1076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1076, ctx.r30.u32);
	// bl 0x82105d30
	ctx.lr = 0x821100C0;
	sub_82105D30(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// li r10,3
	ctx.r10.s64 = 3;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r3,1076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1076, ctx.r3.u32);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,-88
	ctx.r5.s64 = ctx.r11.s64 + -88;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x825af158
	ctx.lr = 0x821100F0;
	sub_825AF158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,22520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22520, ctx.r3.u32);
	// beq cr6,0x821102b8
	if (ctx.cr6.eq) goto loc_821102B8;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x825af010
	ctx.lr = 0x82110104;
	sub_825AF010(ctx, base);
	// lwz r3,22520(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22520);
	// bl 0x825aee00
	ctx.lr = 0x8211010C;
	sub_825AEE00(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82110114:
	// lwz r3,22520(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22520);
	// bl 0x825aed30
	ctx.lr = 0x8211011C;
	sub_825AED30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82105d30
	ctx.lr = 0x82110124;
	sub_82105D30(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r30,1076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1076, ctx.r30.u32);
	// stw r30,22520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22520, ctx.r30.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82110140:
	// lbz r8,1414(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1414);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82110154
	if (ctx.cr6.eq) goto loc_82110154;
	// li r11,-1
	ctx.r11.s64 = -1;
	// b 0x82110160
	goto loc_82110160;
loc_82110154:
	// li r7,-1
	ctx.r7.s64 = -1;
	// lwz r11,1432(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1432);
	// stw r7,1432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1432, ctx.r7.u32);
loc_82110160:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8211018c
	if (ctx.cr6.lt) goto loc_8211018C;
	// bne cr6,0x821102b8
	if (!ctx.cr6.eq) goto loc_821102B8;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// li r6,8
	ctx.r6.s64 = 8;
	// stb r10,58(r11)
	PPC_STORE_U8(ctx.r11.u32 + 58, ctx.r10.u8);
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_8211018C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82105d30
	ctx.lr = 0x82110194;
	sub_82105D30(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_8211019C:
	// lis r5,1
	ctx.r5.s64 = 65536;
	// lis r3,1
	ctx.r3.s64 = 65536;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r4,r5,9480
	ctx.r4.u64 = ctx.r5.u64 | 9480;
	// ori r11,r3,9476
	ctx.r11.u64 = ctx.r3.u64 | 9476;
	// ori r9,r10,9472
	ctx.r9.u64 = ctx.r10.u64 | 9472;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r6,r31,r4
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	// lwzx r5,r31,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwzx r4,r31,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// stb r29,1418(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1418, ctx.r29.u8);
	// bl 0x82105918
	ctx.lr = 0x821101D0;
	sub_82105918(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// addi r30,r31,1080
	ctx.r30.s64 = ctx.r31.s64 + 1080;
	// ori r6,r7,9444
	ctx.r6.u64 = ctx.r7.u64 | 9444;
	// stw r8,1400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1400, ctx.r8.u32);
	// lbz r10,3672(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3672);
	// lwzx r3,r31,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lbz r10,3672(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3672);
	// stb r10,1144(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1144, ctx.r10.u8);
	// lbz r10,3672(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3672);
	// stb r10,1208(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1208, ctx.r10.u8);
	// lbz r11,3672(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3672);
	// stb r11,1272(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1272, ctx.r11.u8);
	// beq cr6,0x8211022c
	if (ctx.cr6.eq) goto loc_8211022C;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82361bd8
	ctx.lr = 0x82110220;
	sub_82361BD8(ctx, base);
	// lwz r11,1400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1400);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stw r5,1400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1400, ctx.r5.u32);
loc_8211022C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82110230:
	// lbz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82110230
	if (!ctx.cr6.eq) goto loc_82110230;
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r3,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82110258
	if (ctx.cr6.eq) goto loc_82110258;
	// stb r29,1414(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1414, ctx.r29.u8);
loc_82110258:
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r11,1432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1432, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82110270:
	// lbz r9,1414(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1414);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821102b8
	if (!ctx.cr6.eq) goto loc_821102B8;
	// li r8,-1
	ctx.r8.s64 = -1;
	// lwz r11,1432(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1432);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r8,1432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1432, ctx.r8.u32);
	// bne cr6,0x821102b8
	if (!ctx.cr6.eq) goto loc_821102B8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82105d30
	ctx.lr = 0x82110298;
	sub_82105D30(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// stb r7,1418(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1418, ctx.r7.u8);
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_821102B0:
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r5,1416(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1416, ctx.r5.u8);
loc_821102B8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821102C0"))) PPC_WEAK_FUNC(sub_821102C0);
PPC_FUNC_IMPL(__imp__sub_821102C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x821102C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bgt cr6,0x82110530
	if (ctx.cr6.gt) goto loc_82110530;
	// lis r12,-32239
	ctx.r12.s64 = -2112815104;
	// addi r12,r12,756
	ctx.r12.s64 = ctx.r12.s64 + 756;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82110310;
	case 1:
		goto loc_82110388;
	case 2:
		goto loc_821103E4;
	case 3:
		goto loc_82110430;
	case 4:
		goto loc_82110448;
	case 5:
		goto loc_821104BC;
	case 6:
		goto loc_82110520;
	default:
		__builtin_unreachable();
	}
	// lwz r16,784(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 784);
	// lwz r16,904(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 904);
	// lwz r16,996(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 996);
	// lwz r16,1072(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 1072);
	// lwz r16,1096(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 1096);
	// lwz r16,1212(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 1212);
	// lwz r16,1312(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 1312);
loc_82110310:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82105d30
	ctx.lr = 0x82110318;
	sub_82105D30(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// addi r4,r31,52
	ctx.r4.s64 = ctx.r31.s64 + 52;
	// ori r10,r11,9676
	ctx.r10.u64 = ctx.r11.u64 | 9676;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwzx r3,r31,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// stb r29,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r29.u8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82110340
	if (ctx.cr6.eq) goto loc_82110340;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// bl 0x82361bd8
	ctx.lr = 0x82110340;
	sub_82361BD8(ctx, base);
loc_82110340:
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// ori r8,r9,9440
	ctx.r8.u64 = ctx.r9.u64 | 9440;
	// ori r4,r7,9436
	ctx.r4.u64 = ctx.r7.u64 | 9436;
	// li r30,1
	ctx.r30.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r5,r31,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// lwzx r4,r31,r4
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	// stb r30,1413(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1413, ctx.r30.u8);
	// bl 0x82105b30
	ctx.lr = 0x82110370;
	sub_82105B30(ctx, base);
	// stw r30,1448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1448, ctx.r30.u32);
	// stb r30,1424(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1424, ctx.r30.u8);
	// stw r29,2336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2336, ctx.r29.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82110388:
	// lbz r3,1414(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1414);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8211039c
	if (ctx.cr6.eq) goto loc_8211039C;
	// li r11,-1
	ctx.r11.s64 = -1;
	// b 0x821103a8
	goto loc_821103A8;
loc_8211039C:
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r11,1432(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1432);
	// stw r10,1432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1432, ctx.r10.u32);
loc_821103A8:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x821103cc
	if (ctx.cr6.lt) goto loc_821103CC;
	// bne cr6,0x82110538
	if (!ctx.cr6.eq) goto loc_82110538;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82105d30
	ctx.lr = 0x821103BC;
	sub_82105D30(ctx, base);
loc_821103BC:
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r9,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_821103CC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82105d30
	ctx.lr = 0x821103D4;
	sub_82105D30(ctx, base);
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r8,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r8.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_821103E4:
	// lis r3,7
	ctx.r3.s64 = 458752;
	// lwz r7,22388(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22388);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r4,r31,22080
	ctx.r4.s64 = ctx.r31.s64 + 22080;
	// li r6,1
	ctx.r6.s64 = 1;
	// ori r10,r3,14715
	ctx.r10.u64 = ctx.r3.u64 | 14715;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r7,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r7.u32);
	// stw r6,22084(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22084, ctx.r6.u32);
	// lbzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x825af188
	ctx.lr = 0x82110418;
	sub_825AF188(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821103bc
	if (!ctx.cr6.eq) goto loc_821103BC;
	// li r8,6
	ctx.r8.s64 = 6;
	// stw r8,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r8.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82110430:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6
	ctx.r6.s64 = 6;
	// stb r7,1424(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1424, ctx.r7.u8);
	// stw r6,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r6.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82110448:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82105d30
	ctx.lr = 0x82110450;
	sub_82105D30(ctx, base);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// addi r4,r31,52
	ctx.r4.s64 = ctx.r31.s64 + 52;
	// ori r3,r5,9584
	ctx.r3.u64 = ctx.r5.u64 | 9584;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwzx r3,r31,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82110478
	if (ctx.cr6.eq) goto loc_82110478;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// bl 0x82361bd8
	ctx.lr = 0x82110478;
	sub_82361BD8(ctx, base);
loc_82110478:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// ori r9,r10,9440
	ctx.r9.u64 = ctx.r10.u64 | 9440;
	// ori r4,r8,9436
	ctx.r4.u64 = ctx.r8.u64 | 9436;
	// li r30,1
	ctx.r30.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r5,r31,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// lwzx r4,r31,r4
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	// stb r30,1413(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1413, ctx.r30.u8);
	// bl 0x82105b30
	ctx.lr = 0x821104A8;
	sub_82105B30(ctx, base);
	// li r3,5
	ctx.r3.s64 = 5;
	// stw r30,1448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1448, ctx.r30.u32);
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_821104BC:
	// lbz r11,1414(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1414);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821104d0
	if (ctx.cr6.eq) goto loc_821104D0;
	// li r11,-1
	ctx.r11.s64 = -1;
	// b 0x821104dc
	goto loc_821104DC;
loc_821104D0:
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r11,1432(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1432);
	// stw r10,1432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1432, ctx.r10.u32);
loc_821104DC:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82110500
	if (ctx.cr6.lt) goto loc_82110500;
	// bne cr6,0x82110538
	if (!ctx.cr6.eq) goto loc_82110538;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82105d30
	ctx.lr = 0x821104F0;
	sub_82105D30(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82110500:
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r8,1424(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1424, ctx.r8.u8);
	// bl 0x82105d30
	ctx.lr = 0x82110510;
	sub_82105D30(ctx, base);
	// li r7,6
	ctx.r7.s64 = 6;
	// stw r7,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r7.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82110520:
	// li r6,1
	ctx.r6.s64 = 1;
	// stb r6,1416(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1416, ctx.r6.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82110530:
	// li r5,6
	ctx.r5.s64 = 6;
	// stw r5,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r5.u32);
loc_82110538:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82110540"))) PPC_WEAK_FUNC(sub_82110540);
PPC_FUNC_IMPL(__imp__sub_82110540) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x82110548;
	__savegprlr_28(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bgt cr6,0x82110a70
	if (ctx.cr6.gt) goto loc_82110A70;
	// lis r12,-32239
	ctx.r12.s64 = -2112815104;
	// addi r12,r12,1396
	ctx.r12.s64 = ctx.r12.s64 + 1396;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_821105A4;
	case 1:
		goto loc_821105B8;
	case 2:
		goto loc_821105C8;
	case 3:
		goto loc_82110694;
	case 4:
		goto loc_821106DC;
	case 5:
		goto loc_8211081C;
	case 6:
		goto loc_82110878;
	case 7:
		goto loc_821108D4;
	case 8:
		goto loc_821109F0;
	case 9:
		goto loc_82110A28;
	case 10:
		goto loc_82110A40;
	case 11:
		goto loc_82110A58;
	default:
		__builtin_unreachable();
	}
	// lwz r16,1444(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 1444);
	// lwz r16,1464(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 1464);
	// lwz r16,1480(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 1480);
	// lwz r16,1684(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 1684);
	// lwz r16,1756(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 1756);
	// lwz r16,2076(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 2076);
	// lwz r16,2168(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 2168);
	// lwz r16,2260(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 2260);
	// lwz r16,2544(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 2544);
	// lwz r16,2600(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 2600);
	// lwz r16,2624(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 2624);
	// lwz r16,2648(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 2648);
loc_821105A4:
	// li r28,1
	ctx.r28.s64 = 1;
	// stb r28,1424(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1424, ctx.r28.u8);
	// stw r28,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r28.u32);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_821105B8:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_821105C8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82105d30
	ctx.lr = 0x821105D0;
	sub_82105D30(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,17700
	ctx.r4.s64 = ctx.r11.s64 + 17700;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,23504
	ctx.r3.s64 = ctx.r11.s64 + 23504;
	// bl 0x8210fcf8
	ctx.lr = 0x821105E4;
	sub_8210FCF8(ctx, base);
	// addi r4,r31,52
	ctx.r4.s64 = ctx.r31.s64 + 52;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stb r30,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r30.u8);
	// beq cr6,0x82110600
	if (ctx.cr6.eq) goto loc_82110600;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// bl 0x82361bd8
	ctx.lr = 0x82110600;
	sub_82361BD8(ctx, base);
loc_82110600:
	// li r28,1
	ctx.r28.s64 = 1;
	// stw r30,22480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22480, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r30,22472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22472, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r28,1413(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1413, ctx.r28.u8);
	// bl 0x825ae968
	ctx.lr = 0x82110624;
	sub_825AE968(ctx, base);
	// addi r9,r31,22400
	ctx.r9.s64 = ctx.r31.s64 + 22400;
	// stw r3,22468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22468, ctx.r3.u32);
	// addi r5,r31,22080
	ctx.r5.s64 = ctx.r31.s64 + 22080;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r11,13564
	ctx.r4.s64 = ctx.r11.s64 + 13564;
	// std r30,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r30.u64);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// std r30,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r30.u64);
	// li r7,0
	ctx.r7.s64 = 0;
	// std r30,16(r9)
	PPC_STORE_U64(ctx.r9.u32 + 16, ctx.r30.u64);
	// stw r30,24(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24, ctx.r30.u32);
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// lwz r10,22468(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22468);
	// li r6,3
	ctx.r6.s64 = 3;
	// lwz r3,22388(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22388);
	// stw r28,22084(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22084, ctx.r28.u32);
	// stw r10,22412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22412, ctx.r10.u32);
	// lis r10,7
	ctx.r10.s64 = 458752;
	// stw r3,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r3.u32);
	// ori r3,r10,14715
	ctx.r3.u64 = ctx.r10.u64 | 14715;
	// lbzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x825af168
	ctx.lr = 0x82110684;
	sub_825AF168(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_82110694:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,22400
	ctx.r3.s64 = ctx.r31.s64 + 22400;
	// bl 0x825aed68
	ctx.lr = 0x821106A4;
	sub_825AED68(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821106cc
	if (ctx.cr6.eq) goto loc_821106CC;
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x82110a78
	if (ctx.cr6.eq) goto loc_82110A78;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,6
	ctx.r9.s64 = 6;
	// stb r10,1424(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1424, ctx.r10.u8);
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_821106CC:
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r8,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r8.u32);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_821106DC:
	// li r5,259
	ctx.r5.s64 = 259;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,97
	ctx.r3.s64 = ctx.r1.s64 + 97;
	// bl 0x8259d300
	ctx.lr = 0x821106EC;
	sub_8259D300(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,17688
	ctx.r11.s64 = ctx.r11.s64 + 17688;
	// li r9,10
	ctx.r9.s64 = 10;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82110700:
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r7,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r7.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x82110700
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82110700;
	// addi r9,r31,22344
	ctx.r9.s64 = ctx.r31.s64 + 22344;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
loc_8211071C:
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8211071c
	if (!ctx.cr6.eq) goto loc_8211071C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82110730:
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
	// bne cr6,0x82110730
	if (!ctx.cr6.eq) goto loc_82110730;
	// lis r8,16384
	ctx.r8.s64 = 1073741824;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r8,r8,128
	ctx.r8.u64 = ctx.r8.u64 | 128;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,7
	ctx.r5.s64 = 7;
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825af2f0
	ctx.lr = 0x8211076C;
	sub_825AF2F0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// stw r3,22480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22480, ctx.r3.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// beq cr6,0x82110804
	if (ctx.cr6.eq) goto loc_82110804;
	// addi r29,r31,22428
	ctx.r29.s64 = ctx.r31.s64 + 22428;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// stw r30,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r30.u32);
	// stw r30,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r30.u32);
	// stw r30,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r30.u32);
	// bl 0x825ae968
	ctx.lr = 0x821107A8;
	sub_825AE968(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lwz r4,2356(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2356);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,22480(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22480);
	// lis r5,64
	ctx.r5.s64 = 4194304;
	// stw r11,22472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22472, ctx.r11.u32);
	// stw r11,22444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22444, ctx.r11.u32);
	// bl 0x825af500
	ctx.lr = 0x821107CC;
	sub_825AF500(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821107f4
	if (!ctx.cr6.eq) goto loc_821107F4;
	// bl 0x825af6c0
	ctx.lr = 0x821107D8;
	sub_825AF6C0(ctx, base);
	// cmplwi cr6,r3,996
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 996, ctx.xer);
	// blt cr6,0x821107e8
	if (ctx.cr6.lt) goto loc_821107E8;
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// ble cr6,0x821107f4
	if (!ctx.cr6.gt) goto loc_821107F4;
loc_821107E8:
	// li r5,6
	ctx.r5.s64 = 6;
	// stb r30,1424(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1424, ctx.r30.u8);
	// stw r5,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r5.u32);
loc_821107F4:
	// li r4,5
	ctx.r4.s64 = 5;
	// stw r4,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r4.u32);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_82110804:
	// li r3,6
	ctx.r3.s64 = 6;
	// stb r30,1424(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1424, ctx.r30.u8);
	// stw r30,22480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22480, ctx.r30.u32);
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8211081C:
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r3,22480(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22480);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,22428
	ctx.r4.s64 = ctx.r31.s64 + 22428;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// bl 0x825af7e0
	ctx.lr = 0x82110838;
	sub_825AF7E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82110850
	if (ctx.cr6.eq) goto loc_82110850;
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_82110850:
	// bl 0x825af6c0
	ctx.lr = 0x82110854;
	sub_825AF6C0(ctx, base);
	// cmplwi cr6,r3,996
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 996, ctx.xer);
	// blt cr6,0x82110864
	if (ctx.cr6.lt) goto loc_82110864;
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// ble cr6,0x82110a78
	if (!ctx.cr6.gt) goto loc_82110A78;
loc_82110864:
	// li r10,6
	ctx.r10.s64 = 6;
	// stb r30,1424(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1424, ctx.r30.u8);
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_82110878:
	// lwz r3,22480(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22480);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82110888
	if (ctx.cr6.eq) goto loc_82110888;
	// bl 0x825aed30
	ctx.lr = 0x82110888;
	sub_825AED30(ctx, base);
loc_82110888:
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r3,22472(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22472);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r30,22480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22480, ctx.r30.u32);
	// beq cr6,0x821108a0
	if (ctx.cr6.eq) goto loc_821108A0;
	// bl 0x825aed30
	ctx.lr = 0x821108A0;
	sub_825AED30(ctx, base);
loc_821108A0:
	// addi r4,r31,22400
	ctx.r4.s64 = ctx.r31.s64 + 22400;
	// stw r30,22472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22472, ctx.r30.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,13564
	ctx.r3.s64 = ctx.r11.s64 + 13564;
	// std r30,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r30.u64);
	// std r30,8(r4)
	PPC_STORE_U64(ctx.r4.u32 + 8, ctx.r30.u64);
	// std r30,16(r4)
	PPC_STORE_U64(ctx.r4.u32 + 16, ctx.r30.u64);
	// stw r30,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, ctx.r30.u32);
	// bl 0x825af190
	ctx.lr = 0x821108C4;
	sub_825AF190(ctx, base);
	// li r9,7
	ctx.r9.s64 = 7;
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_821108D4:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,22400
	ctx.r3.s64 = ctx.r31.s64 + 22400;
	// bl 0x825aed68
	ctx.lr = 0x821108E4;
	sub_825AED68(ctx, base);
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x82110a78
	if (ctx.cr6.eq) goto loc_82110A78;
	// lwz r3,22468(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22468);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821108fc
	if (ctx.cr6.eq) goto loc_821108FC;
	// bl 0x825aed30
	ctx.lr = 0x821108FC;
	sub_825AED30(ctx, base);
loc_821108FC:
	// li r30,0
	ctx.r30.s64 = 0;
	// lbz r8,1424(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1424);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r30,22468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22468, ctx.r30.u32);
	// bne cr6,0x821109e0
	if (!ctx.cr6.eq) goto loc_821109E0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82105d30
	ctx.lr = 0x82110918;
	sub_82105D30(ctx, base);
	// lis r7,1
	ctx.r7.s64 = 65536;
	// addi r4,r31,52
	ctx.r4.s64 = ctx.r31.s64 + 52;
	// ori r6,r7,9668
	ctx.r6.u64 = ctx.r7.u64 | 9668;
	// stb r30,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r30.u8);
	// lwzx r3,r31,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8211093c
	if (ctx.cr6.eq) goto loc_8211093C;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// bl 0x82361bd8
	ctx.lr = 0x8211093C;
	sub_82361BD8(ctx, base);
loc_8211093C:
	// li r28,1
	ctx.r28.s64 = 1;
	// stw r30,1400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1400, ctx.r30.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// addi r29,r31,1080
	ctx.r29.s64 = ctx.r31.s64 + 1080;
	// ori r4,r5,9428
	ctx.r4.u64 = ctx.r5.u64 | 9428;
	// stb r28,1413(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1413, ctx.r28.u8);
	// lbz r10,3672(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3672);
	// lwzx r3,r31,r4
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	// stb r10,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r10.u8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lbz r10,3672(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3672);
	// stb r10,1144(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1144, ctx.r10.u8);
	// lbz r10,3672(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3672);
	// stb r10,1208(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1208, ctx.r10.u8);
	// lbz r11,3672(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3672);
	// stb r11,1272(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1272, ctx.r11.u8);
	// beq cr6,0x8211099c
	if (ctx.cr6.eq) goto loc_8211099C;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82361bd8
	ctx.lr = 0x82110990;
	sub_82361BD8(ctx, base);
	// lwz r11,1400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1400);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// stw r3,1400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1400, ctx.r3.u32);
loc_8211099C:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_821109A0:
	// lbz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821109a0
	if (!ctx.cr6.eq) goto loc_821109A0;
	// subf r11,r11,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r11.s64;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821109c8
	if (ctx.cr6.eq) goto loc_821109C8;
	// stb r28,1414(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1414, ctx.r28.u8);
loc_821109C8:
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r8,1432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1432, ctx.r8.u32);
	// stw r7,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r7.u32);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_821109E0:
	// li r6,9
	ctx.r6.s64 = 9;
	// stw r6,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r6.u32);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_821109F0:
	// lbz r5,1414(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1414);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82110a78
	if (!ctx.cr6.eq) goto loc_82110A78;
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r11,1432(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1432);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r4,1432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1432, ctx.r4.u32);
	// bne cr6,0x82110a78
	if (!ctx.cr6.eq) goto loc_82110A78;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82105d30
	ctx.lr = 0x82110A18;
	sub_82105D30(ctx, base);
	// li r3,10
	ctx.r3.s64 = 10;
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_82110A28:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82105d30
	ctx.lr = 0x82110A30;
	sub_82105D30(ctx, base);
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_82110A40:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,11
	ctx.r9.s64 = 11;
	// stb r10,1424(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1424, ctx.r10.u8);
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_82110A58:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82105d30
	ctx.lr = 0x82110A60;
	sub_82105D30(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r8,1416(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1416, ctx.r8.u8);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_82110A70:
	// li r7,11
	ctx.r7.s64 = 11;
	// stw r7,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r7.u32);
loc_82110A78:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82110A80"))) PPC_WEAK_FUNC(sub_82110A80);
PPC_FUNC_IMPL(__imp__sub_82110A80) {
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
loc_82110A94:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82104e58
	ctx.lr = 0x82110A9C;
	sub_82104E58(ctx, base);
	// b 0x82110a94
	goto loc_82110A94;
}

__attribute__((alias("__imp__sub_82110AA0"))) PPC_WEAK_FUNC(sub_82110AA0);
PPC_FUNC_IMPL(__imp__sub_82110AA0) {
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
	// addi r30,r31,22488
	ctx.r30.s64 = ctx.r31.s64 + 22488;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825c719c
	ctx.lr = 0x82110AC4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r30,48(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x825c718c
	ctx.lr = 0x82110AD0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// cmplwi cr6,r30,14
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 14, ctx.xer);
	// bgt cr6,0x82110c10
	if (ctx.cr6.gt) goto loc_82110C10;
	// lis r12,-32239
	ctx.r12.s64 = -2112815104;
	// addi r12,r12,2800
	ctx.r12.s64 = ctx.r12.s64 + 2800;
	// rlwinm r0,r30,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r30.u64) {
	case 0:
		goto loc_82110B2C;
	case 1:
		goto loc_82110B48;
	case 2:
		goto loc_82110C10;
	case 3:
		goto loc_82110C10;
	case 4:
		goto loc_82110B5C;
	case 5:
		goto loc_82110C10;
	case 6:
		goto loc_82110C10;
	case 7:
		goto loc_82110C10;
	case 8:
		goto loc_82110C10;
	case 9:
		goto loc_82110C10;
	case 10:
		goto loc_82110C10;
	case 11:
		goto loc_82110C10;
	case 12:
		goto loc_82110BCC;
	case 13:
		goto loc_82110BE8;
	case 14:
		goto loc_82110C00;
	default:
		__builtin_unreachable();
	}
	// lwz r16,2860(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 2860);
	// lwz r16,2888(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 2888);
	// lwz r16,3088(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 3088);
	// lwz r16,3088(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 3088);
	// lwz r16,2908(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 2908);
	// lwz r16,3088(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 3088);
	// lwz r16,3088(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 3088);
	// lwz r16,3088(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 3088);
	// lwz r16,3088(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 3088);
	// lwz r16,3088(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 3088);
	// lwz r16,3088(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 3088);
	// lwz r16,3088(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 3088);
	// lwz r16,3020(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 3020);
	// lwz r16,3048(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 3048);
	// lwz r16,3072(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 3072);
loc_82110B2C:
	// li r10,1
	ctx.r10.s64 = 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r10,1424(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1424, ctx.r10.u8);
	// stw r11,2336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2336, ctx.r11.u32);
	// stw r11,2352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2352, ctx.r11.u32);
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// b 0x82110c10
	goto loc_82110C10;
loc_82110B48:
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r3,22516(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22516);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// bl 0x825aee00
	ctx.lr = 0x82110B58;
	sub_825AEE00(ctx, base);
	// b 0x82110c10
	goto loc_82110C10;
loc_82110B5C:
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// ori r9,r10,14718
	ctx.r9.u64 = ctx.r10.u64 | 14718;
	// lbzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// beq cr6,0x82110c10
	if (ctx.cr6.eq) goto loc_82110C10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82105d30
	ctx.lr = 0x82110B80;
	sub_82105D30(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,17700
	ctx.r4.s64 = ctx.r11.s64 + 17700;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,23504
	ctx.r3.s64 = ctx.r11.s64 + 23504;
	// bl 0x8210fcf8
	ctx.lr = 0x82110B94;
	sub_8210FCF8(ctx, base);
	// addi r4,r31,52
	ctx.r4.s64 = ctx.r31.s64 + 52;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stb r7,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r7.u8);
	// beq cr6,0x82110bb0
	if (ctx.cr6.eq) goto loc_82110BB0;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// bl 0x82361bd8
	ctx.lr = 0x82110BB0;
	sub_82361BD8(ctx, base);
loc_82110BB0:
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,22516(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22516);
	// li r5,5
	ctx.r5.s64 = 5;
	// stb r6,1413(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1413, ctx.r6.u8);
	// stw r5,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r5.u32);
	// bl 0x825aee00
	ctx.lr = 0x82110BC8;
	sub_825AEE00(ctx, base);
	// b 0x82110c10
	goto loc_82110C10;
loc_82110BCC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r4,1076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1076, ctx.r4.u32);
	// bl 0x82105d30
	ctx.lr = 0x82110BDC;
	sub_82105D30(ctx, base);
	// li r3,14
	ctx.r3.s64 = 14;
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// b 0x82110c10
	goto loc_82110C10;
loc_82110BE8:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,14
	ctx.r10.s64 = 14;
	// stw r11,1076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1076, ctx.r11.u32);
	// stb r11,1424(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1424, ctx.r11.u8);
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// b 0x82110c10
	goto loc_82110C10;
loc_82110C00:
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r9,1076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1076, ctx.r9.u32);
	// stb r8,1416(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1416, ctx.r8.u8);
loc_82110C10:
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

__attribute__((alias("__imp__sub_82110C28"))) PPC_WEAK_FUNC(sub_82110C28);
PPC_FUNC_IMPL(__imp__sub_82110C28) {
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
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x82110e2c
	if (ctx.cr6.gt) goto loc_82110E2C;
	// lis r12,-32239
	ctx.r12.s64 = -2112815104;
	// addi r12,r12,3168
	ctx.r12.s64 = ctx.r12.s64 + 3168;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82110C70;
	case 1:
		goto loc_82110C8C;
	case 2:
		goto loc_82110CD8;
	case 3:
		goto loc_82110E10;
	default:
		__builtin_unreachable();
	}
	// lwz r16,3184(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 3184);
	// lwz r16,3212(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 3212);
	// lwz r16,3288(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 3288);
	// lwz r16,3600(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 3600);
loc_82110C70:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
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
loc_82110C8C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r4,r11,17784
	ctx.r4.s64 = ctx.r11.s64 + 17784;
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// bl 0x8259d2a0
	ctx.lr = 0x82110CA0;
	sub_8259D2A0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r7,r11,17764
	ctx.r7.s64 = ctx.r11.s64 + 17764;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r11,17744
	ctx.r6.s64 = ctx.r11.s64 + 17744;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stb r10,1413(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1413, ctx.r10.u8);
	// addi r5,r11,17724
	ctx.r5.s64 = ctx.r11.s64 + 17724;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,17708
	ctx.r4.s64 = ctx.r11.s64 + 17708;
	// bl 0x82105a18
	ctx.lr = 0x82110CD0;
	sub_82105A18(ctx, base);
	// li r9,2
	ctx.r9.s64 = 2;
	// b 0x82110e30
	goto loc_82110E30;
loc_82110CD8:
	// lbz r8,1414(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1414);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82110e34
	if (!ctx.cr6.eq) goto loc_82110E34;
	// li r7,-1
	ctx.r7.s64 = -1;
	// lwz r11,1432(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1432);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// stw r7,1432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1432, ctx.r7.u32);
	// bgt cr6,0x82110e34
	if (ctx.cr6.gt) goto loc_82110E34;
	// lis r12,-32239
	ctx.r12.s64 = -2112815104;
	// addi r12,r12,3344
	ctx.r12.s64 = ctx.r12.s64 + 3344;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82110D20;
	case 1:
		goto loc_82110D58;
	case 2:
		goto loc_82110D90;
	case 3:
		goto loc_82110DE4;
	default:
		__builtin_unreachable();
	}
	// lwz r16,3360(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 3360);
	// lwz r16,3416(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 3416);
	// lwz r16,3472(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 3472);
	// lwz r16,3556(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 3556);
loc_82110D20:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82105d30
	ctx.lr = 0x82110D28;
	sub_82105D30(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// stb r10,1416(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1416, ctx.r10.u8);
	// stw r5,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r5.u32);
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
loc_82110D58:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82105d30
	ctx.lr = 0x82110D60;
	sub_82105D30(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// stb r10,1416(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1416, ctx.r10.u8);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
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
loc_82110D90:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82105d30
	ctx.lr = 0x82110D98;
	sub_82105D30(ctx, base);
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r11,r31,2267
	ctx.r11.s64 = ctx.r31.s64 + 2267;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82110DA8:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stb r10,-3(r11)
	PPC_STORE_U8(ctx.r11.u32 + -3, ctx.r10.u8);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82110da8
	if (!ctx.cr6.eq) goto loc_82110DA8;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stb r10,1416(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1416, ctx.r10.u8);
	// stw r8,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r8.u32);
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
loc_82110DE4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82105d30
	ctx.lr = 0x82110DEC;
	sub_82105D30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821057e8
	ctx.lr = 0x82110DF4;
	sub_821057E8(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
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
loc_82110E10:
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,1416(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1416, ctx.r10.u8);
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
loc_82110E2C:
	// li r9,3
	ctx.r9.s64 = 3;
loc_82110E30:
	// stw r9,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r9.u32);
loc_82110E34:
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

__attribute__((alias("__imp__sub_82110E48"))) PPC_WEAK_FUNC(sub_82110E48);
PPC_FUNC_IMPL(__imp__sub_82110E48) {
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
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bgt cr6,0x821110d4
	if (ctx.cr6.gt) goto loc_821110D4;
	// lis r12,-32239
	ctx.r12.s64 = -2112815104;
	// addi r12,r12,3716
	ctx.r12.s64 = ctx.r12.s64 + 3716;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82110EA0;
	case 1:
		goto loc_82110EAC;
	case 2:
		goto loc_82110F3C;
	case 3:
		goto loc_82110FA4;
	case 4:
		goto loc_8211100C;
	case 5:
		goto loc_821110D4;
	case 6:
		goto loc_821110CC;
	default:
		__builtin_unreachable();
	}
	// lwz r16,3744(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 3744);
	// lwz r16,3756(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 3756);
	// lwz r16,3900(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 3900);
	// lwz r16,4004(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4004);
	// lwz r16,4108(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4108);
	// lwz r16,4308(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4308);
	// lwz r16,4300(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4300);
loc_82110EA0:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// b 0x821110d4
	goto loc_821110D4;
loc_82110EAC:
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r11,58(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 58);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82110ef0
	if (ctx.cr6.eq) goto loc_82110EF0;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// ori r8,r9,9496
	ctx.r8.u64 = ctx.r9.u64 | 9496;
	// ori r4,r7,9500
	ctx.r4.u64 = ctx.r7.u64 | 9500;
	// lwzx r5,r31,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// lwzx r4,r31,r4
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	// bl 0x82105918
	ctx.lr = 0x82110EE4;
	sub_82105918(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// b 0x82110f10
	goto loc_82110F10;
loc_82110EF0:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r8,r9,9484
	ctx.r8.u64 = ctx.r9.u64 | 9484;
	// ori r10,r11,9488
	ctx.r10.u64 = ctx.r11.u64 | 9488;
	// lwzx r4,r31,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// lwzx r5,r31,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// bl 0x82105918
	ctx.lr = 0x82110F08;
	sub_82105918(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r7,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r7.u32);
loc_82110F10:
	// lis r6,1
	ctx.r6.s64 = 65536;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// ori r5,r6,9440
	ctx.r5.u64 = ctx.r6.u64 | 9440;
	// ori r11,r4,9436
	ctx.r11.u64 = ctx.r4.u64 | 9436;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r5,r31,r5
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// lwzx r4,r31,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// bl 0x82105b30
	ctx.lr = 0x82110F38;
	sub_82105B30(ctx, base);
	// b 0x821110d4
	goto loc_821110D4;
loc_82110F3C:
	// lbz r10,1414(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1414);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82110f50
	if (ctx.cr6.eq) goto loc_82110F50;
	// li r11,-1
	ctx.r11.s64 = -1;
	// b 0x82110f5c
	goto loc_82110F5C;
loc_82110F50:
	// li r9,-1
	ctx.r9.s64 = -1;
	// lwz r11,1432(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1432);
	// stw r9,1432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1432, ctx.r9.u32);
loc_82110F5C:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82110f7c
	if (ctx.cr6.lt) goto loc_82110F7C;
	// bne cr6,0x821110d4
	if (!ctx.cr6.eq) goto loc_821110D4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82105d30
	ctx.lr = 0x82110F70;
	sub_82105D30(ctx, base);
	// li r8,6
	ctx.r8.s64 = 6;
	// stw r8,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// b 0x821110d4
	goto loc_821110D4;
loc_82110F7C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82105d30
	ctx.lr = 0x82110F84;
	sub_82105D30(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,22532
	ctx.r3.s64 = ctx.r31.s64 + 22532;
	// bl 0x82363348
	ctx.lr = 0x82110F98;
	sub_82363348(ctx, base);
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r7,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r7.u32);
	// b 0x821110d4
	goto loc_821110D4;
loc_82110FA4:
	// lbz r6,1414(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1414);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82110fb8
	if (ctx.cr6.eq) goto loc_82110FB8;
	// li r11,-1
	ctx.r11.s64 = -1;
	// b 0x82110fc4
	goto loc_82110FC4;
loc_82110FB8:
	// li r5,-1
	ctx.r5.s64 = -1;
	// lwz r11,1432(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1432);
	// stw r5,1432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1432, ctx.r5.u32);
loc_82110FC4:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82110fe4
	if (ctx.cr6.lt) goto loc_82110FE4;
	// bne cr6,0x821110d4
	if (!ctx.cr6.eq) goto loc_821110D4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82105d30
	ctx.lr = 0x82110FD8;
	sub_82105D30(ctx, base);
	// li r4,6
	ctx.r4.s64 = 6;
	// stw r4,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r4.u32);
	// b 0x821110d4
	goto loc_821110D4;
loc_82110FE4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82105d30
	ctx.lr = 0x82110FEC;
	sub_82105D30(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,22532
	ctx.r3.s64 = ctx.r31.s64 + 22532;
	// bl 0x82363348
	ctx.lr = 0x82111000;
	sub_82363348(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// b 0x821110d4
	goto loc_821110D4;
loc_8211100C:
	// addi r30,r31,22532
	ctx.r30.s64 = ctx.r31.s64 + 22532;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82362fc0
	ctx.lr = 0x82111018;
	sub_82362FC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211102c
	if (ctx.cr6.eq) goto loc_8211102C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82105e78
	ctx.lr = 0x8211102C;
	sub_82105E78(ctx, base);
loc_8211102C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82362f20
	ctx.lr = 0x82111034;
	sub_82362F20(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821110d4
	if (ctx.cr6.eq) goto loc_821110D4;
	// lwz r9,22552(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22552);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x821110c0
	if (!ctx.cr6.eq) goto loc_821110C0;
	// lwz r8,22556(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22556);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// bne cr6,0x82111074
	if (!ctx.cr6.eq) goto loc_82111074;
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r9,58(r11)
	PPC_STORE_U8(ctx.r11.u32 + 58, ctx.r9.u8);
	// stb r9,1419(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1419, ctx.r9.u8);
	// b 0x82111084
	goto loc_82111084;
loc_82111074:
	// stb r10,58(r11)
	PPC_STORE_U8(ctx.r11.u32 + 58, ctx.r10.u8);
	// stb r10,1419(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1419, ctx.r10.u8);
	// stw r10,1452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1452, ctx.r10.u32);
	// stw r10,1456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1456, ctx.r10.u32);
loc_82111084:
	// li r7,5
	ctx.r7.s64 = 5;
	// addi r11,r31,2267
	ctx.r11.s64 = ctx.r31.s64 + 2267;
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r7,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r7.u32);
loc_82111094:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stb r10,-3(r11)
	PPC_STORE_U8(ctx.r11.u32 + -3, ctx.r10.u8);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82111094
	if (!ctx.cr6.eq) goto loc_82111094;
	// li r6,3
	ctx.r6.s64 = 3;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stb r10,1416(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1416, ctx.r10.u8);
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// b 0x821110d4
	goto loc_821110D4;
loc_821110C0:
	// li r5,6
	ctx.r5.s64 = 6;
	// stw r5,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r5.u32);
	// b 0x821110d4
	goto loc_821110D4;
loc_821110CC:
	// li r4,1
	ctx.r4.s64 = 1;
	// stb r4,1416(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1416, ctx.r4.u8);
loc_821110D4:
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

__attribute__((alias("__imp__sub_821110EC"))) PPC_WEAK_FUNC(sub_821110EC);
PPC_FUNC_IMPL(__imp__sub_821110EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821110F0"))) PPC_WEAK_FUNC(sub_821110F0);
PPC_FUNC_IMPL(__imp__sub_821110F0) {
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
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x82111238
	if (ctx.cr6.gt) goto loc_82111238;
	// lis r12,-32239
	ctx.r12.s64 = -2112815104;
	// addi r12,r12,4396
	ctx.r12.s64 = ctx.r12.s64 + 4396;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8211113C;
	case 1:
		goto loc_821111A0;
	case 2:
		goto loc_821111F4;
	case 3:
		goto loc_8211122C;
	default:
		__builtin_unreachable();
	}
	// lwz r16,4412(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4412);
	// lwz r16,4512(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4512);
	// lwz r16,4596(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4596);
	// lwz r16,4652(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4652);
loc_8211113C:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// addi r4,r31,52
	ctx.r4.s64 = ctx.r31.s64 + 52;
	// ori r10,r11,9528
	ctx.r10.u64 = ctx.r11.u64 | 9528;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwzx r3,r31,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// stb r9,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r9.u8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82111164
	if (ctx.cr6.eq) goto loc_82111164;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// bl 0x82361bd8
	ctx.lr = 0x82111164;
	sub_82361BD8(ctx, base);
loc_82111164:
	// lis r8,1
	ctx.r8.s64 = 65536;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// ori r5,r8,9440
	ctx.r5.u64 = ctx.r8.u64 | 9440;
	// ori r11,r4,9436
	ctx.r11.u64 = ctx.r4.u64 | 9436;
	// li r30,1
	ctx.r30.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r5,r31,r5
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// lwzx r4,r31,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// stb r30,1413(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1413, ctx.r30.u8);
	// bl 0x82105b30
	ctx.lr = 0x82111194;
	sub_82105B30(ctx, base);
	// stw r30,1448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1448, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// b 0x82111240
	goto loc_82111240;
loc_821111A0:
	// lbz r10,1414(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1414);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821111b4
	if (ctx.cr6.eq) goto loc_821111B4;
	// li r11,-1
	ctx.r11.s64 = -1;
	// b 0x821111c0
	goto loc_821111C0;
loc_821111B4:
	// li r9,-1
	ctx.r9.s64 = -1;
	// lwz r11,1432(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1432);
	// stw r9,1432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1432, ctx.r9.u32);
loc_821111C0:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x821111e0
	if (ctx.cr6.lt) goto loc_821111E0;
	// bne cr6,0x82111240
	if (!ctx.cr6.eq) goto loc_82111240;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82105d30
	ctx.lr = 0x821111D4;
	sub_82105D30(ctx, base);
	// li r8,3
	ctx.r8.s64 = 3;
	// stw r8,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r8.u32);
	// b 0x82111240
	goto loc_82111240;
loc_821111E0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82105d30
	ctx.lr = 0x821111E8;
	sub_82105D30(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r7,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r7.u32);
	// b 0x82111240
	goto loc_82111240;
loc_821111F4:
	// li r30,1
	ctx.r30.s64 = 1;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,2
	ctx.r5.s64 = 2;
	// stb r10,54(r11)
	PPC_STORE_U8(ctx.r11.u32 + 54, ctx.r10.u8);
	// stb r10,55(r11)
	PPC_STORE_U8(ctx.r11.u32 + 55, ctx.r10.u8);
	// li r10,90
	ctx.r10.s64 = 90;
	// stb r10,47(r11)
	PPC_STORE_U8(ctx.r11.u32 + 47, ctx.r10.u8);
	// stb r10,48(r11)
	PPC_STORE_U8(ctx.r11.u32 + 48, ctx.r10.u8);
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// stw r5,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r5.u32);
	// b 0x82111240
	goto loc_82111240;
loc_8211122C:
	// li r4,1
	ctx.r4.s64 = 1;
	// stb r4,1416(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1416, ctx.r4.u8);
	// b 0x82111240
	goto loc_82111240;
loc_82111238:
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
loc_82111240:
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

__attribute__((alias("__imp__sub_82111258"))) PPC_WEAK_FUNC(sub_82111258);
PPC_FUNC_IMPL(__imp__sub_82111258) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x82364080
	ctx.lr = 0x82111280;
	sub_82364080(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lhz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 100);
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// ori r10,r11,9640
	ctx.r10.u64 = ctx.r11.u64 | 9640;
	// lhz r11,98(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 98);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r4,r31,2072
	ctx.r4.s64 = ctx.r31.s64 + 2072;
	// li r3,32
	ctx.r3.s64 = 32;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lwzx r5,r31,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// lhz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 96);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// bl 0x8210da78
	ctx.lr = 0x821112BC;
	sub_8210DA78(ctx, base);
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// fctiwz f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f31.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f31.f64));
	// lis r8,-28254
	ctx.r8.s64 = -1851654144;
	// lis r6,-30584
	ctx.r6.s64 = -2004353024;
	// ori r7,r8,46021
	ctx.r7.u64 = ctx.r8.u64 | 46021;
	// ori r5,r6,34953
	ctx.r5.u64 = ctx.r6.u64 | 34953;
	// stfiwx f0,0,r9
	PPC_STORE_U32(ctx.r9.u32, ctx.f0.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mulhwu r4,r10,r7
	ctx.r4.u64 = (uint64_t(ctx.r10.u32) * uint64_t(ctx.r7.u32)) >> 32;
	// rlwinm r11,r4,21,11,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 21) & 0x1FFFFF;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mulli r3,r11,3600
	ctx.r3.s64 = ctx.r11.s64 * 3600;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// subf r10,r3,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r3.s64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// mulhwu r9,r10,r5
	ctx.r9.u64 = (uint64_t(ctx.r10.u32) * uint64_t(ctx.r5.u32)) >> 32;
	// rlwinm r11,r9,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// li r3,32
	ctx.r3.s64 = 32;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bne cr6,0x82111334
	if (!ctx.cr6.eq) goto loc_82111334;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82111324
	if (!ctx.cr6.eq) goto loc_82111324;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// ori r5,r8,9644
	ctx.r5.u64 = ctx.r8.u64 | 9644;
	// b 0x82111354
	goto loc_82111354;
loc_82111324:
	// lis r4,1
	ctx.r4.s64 = 65536;
	// ori r11,r4,9648
	ctx.r11.u64 = ctx.r4.u64 | 9648;
	// lwzx r5,r31,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// b 0x82111358
	goto loc_82111358;
loc_82111334:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8211134c
	if (!ctx.cr6.eq) goto loc_8211134C;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r10,9652
	ctx.r9.u64 = ctx.r10.u64 | 9652;
	// lwzx r5,r31,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// b 0x82111358
	goto loc_82111358;
loc_8211134C:
	// lis r8,1
	ctx.r8.s64 = 65536;
	// ori r5,r8,9656
	ctx.r5.u64 = ctx.r8.u64 | 9656;
loc_82111354:
	// lwzx r5,r31,r5
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
loc_82111358:
	// addi r4,r31,2136
	ctx.r4.s64 = ctx.r31.s64 + 2136;
	// bl 0x8210db60
	ctx.lr = 0x82111360;
	sub_8210DB60(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82111378"))) PPC_WEAK_FUNC(sub_82111378);
PPC_FUNC_IMPL(__imp__sub_82111378) {
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
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821113a8
	if (ctx.cr6.eq) goto loc_821113A8;
	// li r10,16
	ctx.r10.s64 = 16;
	// stw r10,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r10.u32);
	// b 0x821113e8
	goto loc_821113E8;
loc_821113A8:
	// addi r31,r30,2200
	ctx.r31.s64 = ctx.r30.s64 + 2200;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82361f88
	ctx.lr = 0x821113BC;
	sub_82361F88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82361f20
	ctx.lr = 0x821113C4;
	sub_82361F20(ctx, base);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r6,r10,25040
	ctx.r6.s64 = ctx.r10.s64 + 25040;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,20352
	ctx.r3.s64 = ctx.r11.s64 + 20352;
	// bl 0x82222908
	ctx.lr = 0x821113E8;
	sub_82222908(ctx, base);
loc_821113E8:
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

__attribute__((alias("__imp__sub_82111400"))) PPC_WEAK_FUNC(sub_82111400);
PPC_FUNC_IMPL(__imp__sub_82111400) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r11,12396
	ctx.r4.s64 = ctx.r11.s64 + 12396;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,23504
	ctx.r3.s64 = ctx.r11.s64 + 23504;
	// bl 0x8210fcf8
	ctx.lr = 0x8211142C;
	sub_8210FCF8(ctx, base);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r31,r11,26080
	ctx.r31.s64 = ctx.r11.s64 + 26080;
	// li r9,0
	ctx.r9.s64 = 0;
	// addis r11,r31,7
	ctx.r11.s64 = ctx.r31.s64 + 458752;
	// li r10,7
	ctx.r10.s64 = 7;
	// addi r11,r11,15832
	ctx.r11.s64 = ctx.r11.s64 + 15832;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8211144C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8211144c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8211144C;
	// addis r11,r31,7
	ctx.r11.s64 = ctx.r31.s64 + 458752;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r8,r11,15320
	ctx.r8.s64 = ctx.r11.s64 + 15320;
	// lis r11,7
	ctx.r11.s64 = 458752;
	// addi r7,r9,16128
	ctx.r7.s64 = ctx.r9.s64 + 16128;
	// ori r3,r11,14715
	ctx.r3.u64 = ctx.r11.u64 | 14715;
	// addis r10,r31,7
	ctx.r10.s64 = ctx.r31.s64 + 458752;
	// lis r4,12288
	ctx.r4.s64 = 805306368;
	// addi r10,r10,15832
	ctx.r10.s64 = ctx.r10.s64 + 15832;
	// li r9,32
	ctx.r9.s64 = 32;
	// lbzx r11,r31,r3
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r3.u32);
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// ori r4,r4,100
	ctx.r4.u64 = ctx.r4.u64 | 100;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x825af678
	ctx.lr = 0x82111494;
	sub_825AF678(ctx, base);
	// lis r10,7
	ctx.r10.s64 = 458752;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r8,7
	ctx.r8.s64 = 458752;
	// ori r9,r10,15864
	ctx.r9.u64 = ctx.r10.u64 | 15864;
	// addi r11,r11,4984
	ctx.r11.s64 = ctx.r11.s64 + 4984;
	// ori r7,r8,15860
	ctx.r7.u64 = ctx.r8.u64 | 15860;
	// stwx r30,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r30.u32);
	// stwx r11,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_821114CC"))) PPC_WEAK_FUNC(sub_821114CC);
PPC_FUNC_IMPL(__imp__sub_821114CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821114D0"))) PPC_WEAK_FUNC(sub_821114D0);
PPC_FUNC_IMPL(__imp__sub_821114D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae4
	ctx.lr = 0x821114D8;
	__savegprlr_23(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r23,-32161
	ctx.r23.s64 = -2107703296;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-17184(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17184);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x821115b8
	if (!ctx.cr6.eq) goto loc_821115B8;
	// addi r30,r31,22532
	ctx.r30.s64 = ctx.r31.s64 + 22532;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82362fc0
	ctx.lr = 0x821114FC;
	sub_82362FC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82111510
	if (ctx.cr6.eq) goto loc_82111510;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82105e78
	ctx.lr = 0x82111510;
	sub_82105E78(ctx, base);
loc_82111510:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82362f20
	ctx.lr = 0x82111518;
	sub_82362F20(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821115ac
	if (ctx.cr6.eq) goto loc_821115AC;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r9,7
	ctx.r9.s64 = 458752;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// ori r8,r9,14715
	ctx.r8.u64 = ctx.r9.u64 | 14715;
	// lbzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x8211154c
	if (!ctx.cr6.eq) goto loc_8211154C;
loc_82111540:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8259bb34
	__restgprlr_23(ctx, base);
	return;
loc_8211154C:
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// li r7,11
	ctx.r7.s64 = 11;
	// li r6,11
	ctx.r6.s64 = 11;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x825af1a8
	ctx.lr = 0x8211156C;
	sub_825AF1A8(ctx, base);
	// lis r11,-32114
	ctx.r11.s64 = -2104623104;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r31,r11,15912
	ctx.r31.s64 = ctx.r11.s64 + 15912;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r4,r11,20040
	ctx.r4.s64 = ctx.r11.s64 + 20040;
	// li r5,3388
	ctx.r5.s64 = 3388;
	// bl 0x825ae950
	ctx.lr = 0x82111590;
	sub_825AE950(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x825aed30
	ctx.lr = 0x82111598;
	sub_825AED30(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82111540
	if (ctx.cr6.eq) goto loc_82111540;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-17184(r23)
	PPC_STORE_U32(ctx.r23.u32 + -17184, ctx.r11.u32);
loc_821115AC:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8259bb34
	__restgprlr_23(ctx, base);
	return;
loc_821115B8:
	// lis r25,-32114
	ctx.r25.s64 = -2104623104;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r26,r10,-1416
	ctx.r26.s64 = ctx.r10.s64 + -1416;
	// lwz r9,15912(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15912);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82111690
	if (!ctx.cr6.lt) goto loc_82111690;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// lis r28,-32255
	ctx.r28.s64 = -2113863680;
	// addi r29,r10,20040
	ctx.r29.s64 = ctx.r10.s64 + 20040;
	// lis r10,-32162
	ctx.r10.s64 = -2107768832;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r24,r10,28848
	ctx.r24.s64 = ctx.r10.s64 + 28848;
loc_821115E8:
	// mulli r10,r11,308
	ctx.r10.s64 = ctx.r11.s64 * 308;
	// addi r6,r29,4
	ctx.r6.s64 = ctx.r29.s64 + 4;
	// lwzx r5,r10,r6
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// cmplwi cr6,r5,2
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 2, ctx.xer);
	// bne cr6,0x82111680
	if (!ctx.cr6.eq) goto loc_82111680;
	// addi r11,r29,264
	ctx.r11.s64 = ctx.r29.s64 + 264;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82104de0
	ctx.lr = 0x8211160C;
	sub_82104DE0(ctx, base);
	// lwz r9,5948(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 5948);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82111650
	if (!ctx.cr6.gt) goto loc_82111650;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
loc_82111624:
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r4,r30
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x82111644
	if (ctx.cr6.eq) goto loc_82111644;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82111624
	if (ctx.cr6.lt) goto loc_82111624;
	// b 0x82111650
	goto loc_82111650;
loc_82111644:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bge cr6,0x82111654
	if (!ctx.cr6.lt) goto loc_82111654;
loc_82111650:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82111654:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82111678
	if (ctx.cr6.eq) goto loc_82111678;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x820f7920
	ctx.lr = 0x8211166C;
	sub_820F7920(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821116ac
	if (ctx.cr6.eq) goto loc_821116AC;
loc_82111678:
	// lwz r11,-17184(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17184);
	// lwz r9,15912(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15912);
loc_82111680:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// stw r11,-17184(r23)
	PPC_STORE_U32(ctx.r23.u32 + -17184, ctx.r11.u32);
	// blt cr6,0x821115e8
	if (ctx.cr6.lt) goto loc_821115E8;
loc_82111690:
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r11,-17184(r23)
	PPC_STORE_U32(ctx.r23.u32 + -17184, ctx.r11.u32);
	// bl 0x821004b0
	ctx.lr = 0x821116A0;
	sub_821004B0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8259bb34
	__restgprlr_23(ctx, base);
	return;
loc_821116AC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x820fb130
	ctx.lr = 0x821116B8;
	sub_820FB130(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821017c0
	ctx.lr = 0x821116C4;
	sub_821017C0(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x82347480
	ctx.lr = 0x821116CC;
	sub_82347480(ctx, base);
	// lbz r10,99(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 99);
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// bne cr6,0x821116dc
	if (!ctx.cr6.eq) goto loc_821116DC;
	// stb r27,99(r1)
	PPC_STORE_U8(ctx.r1.u32 + 99, ctx.r27.u8);
loc_821116DC:
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r11,23504
	ctx.r3.s64 = ctx.r11.s64 + 23504;
	// bl 0x8210fcf8
	ctx.lr = 0x821116EC;
	sub_8210FCF8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// lis r3,1
	ctx.r3.s64 = 65536;
	// ori r4,r5,9536
	ctx.r4.u64 = ctx.r5.u64 | 9536;
	// ori r11,r3,9532
	ctx.r11.u64 = ctx.r3.u64 | 9532;
	// ori r7,r8,9540
	ctx.r7.u64 = ctx.r8.u64 | 9540;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r5,r31,r4
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	// lwzx r4,r31,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// stwx r6,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r6.u32);
	// bl 0x82105918
	ctx.lr = 0x8211171C;
	sub_82105918(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r27,1400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1400, ctx.r27.u32);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r30,r31,1080
	ctx.r30.s64 = ctx.r31.s64 + 1080;
	// ori r9,r10,9444
	ctx.r9.u64 = ctx.r10.u64 | 9444;
	// lbz r10,3672(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3672);
	// lwzx r3,r31,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lbz r10,3672(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3672);
	// stb r10,1144(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1144, ctx.r10.u8);
	// lbz r10,3672(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3672);
	// stb r10,1208(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1208, ctx.r10.u8);
	// lbz r11,3672(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3672);
	// stb r11,1272(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1272, ctx.r11.u8);
	// beq cr6,0x82111774
	if (ctx.cr6.eq) goto loc_82111774;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82361bd8
	ctx.lr = 0x82111768;
	sub_82361BD8(ctx, base);
	// lwz r11,1400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1400);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,1400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1400, ctx.r8.u32);
loc_82111774:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82111778:
	// lbz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82111778
	if (!ctx.cr6.eq) goto loc_82111778;
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r6,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821117a4
	if (ctx.cr6.eq) goto loc_821117A4;
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r5,1414(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1414, ctx.r5.u8);
loc_821117A4:
	// lwz r11,-17184(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17184);
	// li r4,-1
	ctx.r4.s64 = -1;
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r4,1432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1432, ctx.r4.u32);
	// stw r11,-17184(r23)
	PPC_STORE_U32(ctx.r23.u32 + -17184, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8259bb34
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821117C4"))) PPC_WEAK_FUNC(sub_821117C4);
PPC_FUNC_IMPL(__imp__sub_821117C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821117C8"))) PPC_WEAK_FUNC(sub_821117C8);
PPC_FUNC_IMPL(__imp__sub_821117C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x821117D0;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x8259bba0
	ctx.lr = 0x821117D8;
	__savefpr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmr f26,f1
	ctx.fpscr.disableFlushMode();
	ctx.f26.f64 = ctx.f1.f64;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r30,r11,12428
	ctx.r30.s64 = ctx.r11.s64 + 12428;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f27,2868(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2868);
	ctx.f27.f64 = double(temp.f32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lfs f28,-12136(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -12136);
	ctx.f28.f64 = double(temp.f32);
	// li r31,0
	ctx.r31.s64 = 0;
	// lfs f31,-1628(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -1628);
	ctx.f31.f64 = double(temp.f32);
	// addi r29,r3,8
	ctx.r29.s64 = ctx.r3.s64 + 8;
	// lfs f29,13864(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 13864);
	ctx.f29.f64 = double(temp.f32);
	// lfs f30,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f30.f64 = double(temp.f32);
loc_8211181C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8210b580
	ctx.lr = 0x8211182C;
	sub_8210B580(ctx, base);
	// addi r11,r30,160
	ctx.r11.s64 = ctx.r30.s64 + 160;
	// lbzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82111898
	if (ctx.cr6.eq) goto loc_82111898;
	// fmr f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f30.f64;
	// fcmpu cr6,f1,f29
	ctx.cr6.compare(ctx.f1.f64, ctx.f29.f64);
	// bge cr6,0x82111860
	if (!ctx.cr6.lt) goto loc_82111860;
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fneg f0,f13
	ctx.f0.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// b 0x82111878
	goto loc_82111878;
loc_82111860:
	// lfs f13,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// ble cr6,0x82111894
	if (!ctx.cr6.gt) goto loc_82111894;
	// fsubs f12,f1,f13
	ctx.f12.f64 = double(float(ctx.f1.f64 - ctx.f13.f64));
	// fmuls f0,f12,f31
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
loc_82111878:
	// fcmpu cr6,f0,f28
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// bge cr6,0x82111888
	if (!ctx.cr6.lt) goto loc_82111888;
	// fmr f0,f28
	ctx.f0.f64 = ctx.f28.f64;
	// b 0x82111894
	goto loc_82111894;
loc_82111888:
	// fcmpu cr6,f0,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f27.f64);
	// ble cr6,0x82111894
	if (!ctx.cr6.gt) goto loc_82111894;
	// fmr f0,f27
	ctx.f0.f64 = ctx.f27.f64;
loc_82111894:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
loc_82111898:
	// addi r9,r30,32
	ctx.r9.s64 = ctx.r30.s64 + 32;
	// fmr f2,f26
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f26.f64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lbzx r6,r31,r9
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// bl 0x82108770
	ctx.lr = 0x821118AC;
	sub_82108770(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// cmpwi cr6,r31,28
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 28, ctx.xer);
	// blt cr6,0x8211181c
	if (ctx.cr6.lt) goto loc_8211181C;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x8259bbec
	ctx.lr = 0x821118C8;
	__restfpr_26(ctx, base);
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821118CC"))) PPC_WEAK_FUNC(sub_821118CC);
PPC_FUNC_IMPL(__imp__sub_821118CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821118D0"))) PPC_WEAK_FUNC(sub_821118D0);
PPC_FUNC_IMPL(__imp__sub_821118D0) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82111938
	if (ctx.cr6.eq) goto loc_82111938;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x82111938
	if (ctx.cr6.eq) goto loc_82111938;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x82111930
	if (ctx.cr6.eq) goto loc_82111930;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// beq cr6,0x82111930
	if (ctx.cr6.eq) goto loc_82111930;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,12488
	ctx.r11.s64 = ctx.r11.s64 + 12488;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r3
	ctx.r8.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// lhz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r8.u32 + 8);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82111928
	if (!ctx.cr6.eq) goto loc_82111928;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82111928:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
loc_82111930:
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x821088b8
	sub_821088B8(ctx, base);
	return;
loc_82111938:
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821088b8
	sub_821088B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82111940"))) PPC_WEAK_FUNC(sub_82111940);
PPC_FUNC_IMPL(__imp__sub_82111940) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,-32560
	ctx.r30.s64 = ctx.r11.s64 + -32560;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82111994
	if (ctx.cr6.eq) goto loc_82111994;
	// bl 0x82104550
	ctx.lr = 0x82111970;
	sub_82104550(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lbz r9,68(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 68);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82111994
	if (ctx.cr6.eq) goto loc_82111994;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,20(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82111994;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82111994:
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lis r6,37
	ctx.r6.s64 = 2424832;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// ori r5,r6,49147
	ctx.r5.u64 = ctx.r6.u64 | 49147;
	// lbzx r4,r11,r5
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x821119cc
	if (!ctx.cr6.eq) goto loc_821119CC;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// addi r3,r11,92
	ctx.r3.s64 = ctx.r11.s64 + 92;
	// bl 0x8210b3c8
	ctx.lr = 0x821119C0;
	sub_8210B3C8(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r3,r11,4864
	ctx.r3.s64 = ctx.r11.s64 + 4864;
	// bl 0x821a92b8
	ctx.lr = 0x821119CC;
	sub_821A92B8(ctx, base);
loc_821119CC:
	// lbz r3,1(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821119ec
	if (ctx.cr6.eq) goto loc_821119EC;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821119EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821119EC:
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

__attribute__((alias("__imp__sub_82111A04"))) PPC_WEAK_FUNC(sub_82111A04);
PPC_FUNC_IMPL(__imp__sub_82111A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82111A08"))) PPC_WEAK_FUNC(sub_82111A08);
PPC_FUNC_IMPL(__imp__sub_82111A08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae8
	ctx.lr = 0x82111A10;
	__savegprlr_24(ctx, base);
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x8259bba4
	ctx.lr = 0x82111A18;
	__savefpr_27(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r31,r11,26080
	ctx.r31.s64 = ctx.r11.s64 + 26080;
	// lis r11,7
	ctx.r11.s64 = 458752;
	// ori r10,r11,16216
	ctx.r10.u64 = ctx.r11.u64 | 16216;
	// lwzx r11,r31,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,432(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 432);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82111A48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r1,146
	ctx.r11.s64 = ctx.r1.s64 + 146;
	// li r10,11
	ctx.r10.s64 = 11;
	// sth r9,144(r1)
	PPC_STORE_U16(ctx.r1.u32 + 144, ctx.r9.u16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82111A60:
	// sth r9,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x82111a60
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82111A60;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lfs f13,128(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// lis r3,7
	ctx.r3.s64 = 458752;
	// addi r28,r11,26752
	ctx.r28.s64 = ctx.r11.s64 + 26752;
	// ori r11,r3,16271
	ctx.r11.u64 = ctx.r3.u64 | 16271;
	// lis r7,3
	ctx.r7.s64 = 196608;
	// lis r27,-32162
	ctx.r27.s64 = -2107768832;
	// ori r6,r7,51969
	ctx.r6.u64 = ctx.r7.u64 | 51969;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lbzx r26,r31,r11
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// addi r29,r11,28544
	ctx.r29.s64 = ctx.r11.s64 + 28544;
	// lfs f0,32320(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 32320);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lbzx r5,r28,r6
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r6.u32);
	// lfs f28,-12136(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -12136);
	ctx.f28.f64 = double(temp.f32);
	// fsubs f29,f13,f0
	ctx.f29.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// addi r25,r11,12668
	ctx.r25.s64 = ctx.r11.s64 + 12668;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f10,36(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// lis r31,-32255
	ctx.r31.s64 = -2113863680;
	// lfs f27,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f27.f64 = double(temp.f32);
	// beq cr6,0x82111b34
	if (ctx.cr6.eq) goto loc_82111B34;
	// clrlwi r10,r26,24
	ctx.r10.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82111b34
	if (!ctx.cr6.eq) goto loc_82111B34;
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// beq cr6,0x82111b34
	if (ctx.cr6.eq) goto loc_82111B34;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8210b3c8
	ctx.lr = 0x82111AEC;
	sub_8210B3C8(ctx, base);
	// fcmpu cr6,f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f10.f64, ctx.f1.f64);
	// bgt cr6,0x82111b34
	if (ctx.cr6.gt) goto loc_82111B34;
	// bso cr6,0x82111b34
	if (ctx.cr6.so) goto loc_82111B34;
	// lfs f0,-212(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + -212);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f29,f0
	ctx.cr6.compare(ctx.f29.f64, ctx.f0.f64);
	// bgt cr6,0x82111b74
	if (ctx.cr6.gt) goto loc_82111B74;
	// bso cr6,0x82111b74
	if (ctx.cr6.so) goto loc_82111B74;
	// fcmpu cr6,f29,f27
	ctx.cr6.compare(ctx.f29.f64, ctx.f27.f64);
	// blt cr6,0x82111b74
	if (ctx.cr6.lt) goto loc_82111B74;
	// bso cr6,0x82111b74
	if (ctx.cr6.so) goto loc_82111B74;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x8259da38
	ctx.lr = 0x82111B1C;
	sub_8259DA38(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lfs f0,-1628(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -1628);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,36(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// li r4,1
	ctx.r4.s64 = 1;
	// fsubs f31,f0,f13
	ctx.f31.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// b 0x82111b78
	goto loc_82111B78;
loc_82111B34:
	// lbz r9,45(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 45);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82111b74
	if (!ctx.cr6.eq) goto loc_82111B74;
	// clrlwi r8,r26,24
	ctx.r8.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82111b74
	if (!ctx.cr6.eq) goto loc_82111B74;
	// lfs f0,13524(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 13524);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// bgt cr6,0x82111b74
	if (ctx.cr6.gt) goto loc_82111B74;
	// bso cr6,0x82111b74
	if (ctx.cr6.so) goto loc_82111B74;
	// fsubs f1,f0,f10
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// bl 0x8259da38
	ctx.lr = 0x82111B64;
	sub_8259DA38(ctx, base);
	// lfs f10,36(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// li r4,1
	ctx.r4.s64 = 1;
	// frsp f31,f1
	ctx.f31.f64 = double(float(ctx.f1.f64));
	// b 0x82111b78
	goto loc_82111B78;
loc_82111B74:
	// lfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f31.f64 = double(temp.f32);
loc_82111B78:
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82111b90
	if (ctx.cr6.eq) goto loc_82111B90;
	// fmr f13,f28
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f28.f64;
	// fmr f0,f28
	ctx.f0.f64 = ctx.f28.f64;
	// b 0x82111bb4
	goto loc_82111BB4;
loc_82111B90:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f12,13524(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 13524);
	ctx.f12.f64 = double(temp.f32);
	// clrlwi r7,r26,24
	ctx.r7.u64 = ctx.r26.u32 & 0xFF;
	// fsubs f13,f12,f10
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// lfs f0,6152(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6152);
	ctx.f0.f64 = double(temp.f32);
	// beq cr6,0x82111bb4
	if (ctx.cr6.eq) goto loc_82111BB4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2872(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2872);
	ctx.f0.f64 = double(temp.f32);
loc_82111BB4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f30,2868(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f30.f64 = double(temp.f32);
	// beq cr6,0x82111c80
	if (ctx.cr6.eq) goto loc_82111C80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fctiwz f11,f31
	ctx.f11.s64 = (ctx.f31.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f31.f64));
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stfiwx f11,0,r4
	PPC_STORE_U32(ctx.r4.u32, ctx.f11.u32);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82362158
	ctx.lr = 0x82111BE4;
	sub_82362158(ctx, base);
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r31,r1,144
	ctx.r31.s64 = ctx.r1.s64 + 144;
	// addi r30,r11,-18560
	ctx.r30.s64 = ctx.r11.s64 + -18560;
	// addis r11,r30,9
	ctx.r11.s64 = ctx.r30.s64 + 589824;
	// addi r3,r11,-19376
	ctx.r3.s64 = ctx.r11.s64 + -19376;
	// bl 0x822a3c90
	ctx.lr = 0x82111BFC;
	sub_822A3C90(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lfs f2,17840(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17840);
	ctx.f2.f64 = double(temp.f32);
	// addis r11,r30,9
	ctx.r11.s64 = ctx.r30.s64 + 589824;
	// addi r3,r11,-19376
	ctx.r3.s64 = ctx.r11.s64 + -19376;
	// bl 0x822b3068
	ctx.lr = 0x82111C14;
	sub_822B3068(ctx, base);
	// lis r3,3
	ctx.r3.s64 = 196608;
	// ori r11,r3,51969
	ctx.r11.u64 = ctx.r3.u64 | 51969;
	// lbzx r10,r28,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82111c48
	if (ctx.cr6.eq) goto loc_82111C48;
	// clrlwi r9,r26,24
	ctx.r9.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82111c48
	if (ctx.cr6.eq) goto loc_82111C48;
	// lfs f0,-20(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + -20);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f29,f0
	ctx.cr6.compare(ctx.f29.f64, ctx.f0.f64);
	// blt cr6,0x82111c6c
	if (ctx.cr6.lt) goto loc_82111C6C;
	// bso cr6,0x82111c6c
	if (ctx.cr6.so) goto loc_82111C6C;
	// b 0x82111c60
	goto loc_82111C60;
loc_82111C48:
	// lfs f0,36(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,13524(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 13524);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// lfs f0,0(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f9,f0
	ctx.cr6.compare(ctx.f9.f64, ctx.f0.f64);
	// bge cr6,0x82111c6c
	if (!ctx.cr6.lt) goto loc_82111C6C;
loc_82111C60:
	// addis r11,r30,9
	ctx.r11.s64 = ctx.r30.s64 + 589824;
	// addi r3,r11,-19376
	ctx.r3.s64 = ctx.r11.s64 + -19376;
	// bl 0x822b3330
	ctx.lr = 0x82111C6C;
	sub_822B3330(ctx, base);
loc_82111C6C:
	// fcmpu cr6,f31,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f27.f64);
	// bgt cr6,0x82111d70
	if (ctx.cr6.gt) goto loc_82111D70;
	// bso cr6,0x82111d70
	if (ctx.cr6.so) goto loc_82111D70;
	// stfs f28,32320(r27)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r27.u32 + 32320, temp.u32);
	// b 0x82111d70
	goto loc_82111D70;
loc_82111C80:
	// lbz r8,45(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 45);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82111c98
	if (!ctx.cr6.eq) goto loc_82111C98;
	// clrlwi r7,r26,24
	ctx.r7.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82111cd8
	if (ctx.cr6.eq) goto loc_82111CD8;
loc_82111C98:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82111cd8
	if (ctx.cr6.gt) goto loc_82111CD8;
	// bso cr6,0x82111cd8
	if (ctx.cr6.so) goto loc_82111CD8;
	// fcmpu cr6,f13,f27
	ctx.cr6.compare(ctx.f13.f64, ctx.f27.f64);
	// blt cr6,0x82111cd8
	if (ctx.cr6.lt) goto loc_82111CD8;
	// bso cr6,0x82111cd8
	if (ctx.cr6.so) goto loc_82111CD8;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-18560
	ctx.r11.s64 = ctx.r11.s64 + -18560;
	// addis r11,r11,9
	ctx.r11.s64 = ctx.r11.s64 + 589824;
	// addi r3,r11,-19376
	ctx.r3.s64 = ctx.r11.s64 + -19376;
	// bl 0x822b2f78
	ctx.lr = 0x82111CC8;
	sub_822B2F78(ctx, base);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// addi r11,r11,13400
	ctx.r11.s64 = ctx.r11.s64 + 13400;
	// lwz r31,68(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// b 0x82111d68
	goto loc_82111D68;
loc_82111CD8:
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r30,r11,-18560
	ctx.r30.s64 = ctx.r11.s64 + -18560;
	// addis r11,r30,9
	ctx.r11.s64 = ctx.r30.s64 + 589824;
	// addi r3,r11,-19376
	ctx.r3.s64 = ctx.r11.s64 + -19376;
	// bl 0x822b2f78
	ctx.lr = 0x82111CF0;
	sub_822B2F78(ctx, base);
	// lfs f8,13524(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 13524);
	ctx.f8.f64 = double(temp.f32);
	// lfs f0,36(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x82111d10
	if (!ctx.cr6.lt) goto loc_82111D10;
	// fcmpu cr6,f0,f27
	ctx.cr6.compare(ctx.f0.f64, ctx.f27.f64);
	// bso cr6,0x82111d10
	if (ctx.cr6.so) goto loc_82111D10;
	// bge cr6,0x82111d50
	if (!ctx.cr6.lt) goto loc_82111D50;
loc_82111D10:
	// lis r6,3
	ctx.r6.s64 = 196608;
	// ori r5,r6,51969
	ctx.r5.u64 = ctx.r6.u64 | 51969;
	// lbzx r4,r28,r5
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r5.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82111e84
	if (ctx.cr6.eq) goto loc_82111E84;
	// clrlwi r3,r26,24
	ctx.r3.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82111e84
	if (ctx.cr6.eq) goto loc_82111E84;
	// lfs f0,-1628(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -1628);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f29,f0
	ctx.cr6.compare(ctx.f29.f64, ctx.f0.f64);
	// bgt cr6,0x82111e84
	if (ctx.cr6.gt) goto loc_82111E84;
	// bso cr6,0x82111e84
	if (ctx.cr6.so) goto loc_82111E84;
	// lfs f0,-212(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + -212);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f29,f0
	ctx.cr6.compare(ctx.f29.f64, ctx.f0.f64);
	// blt cr6,0x82111e84
	if (ctx.cr6.lt) goto loc_82111E84;
	// bso cr6,0x82111e84
	if (ctx.cr6.so) goto loc_82111E84;
loc_82111D50:
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// addi r11,r11,13400
	ctx.r11.s64 = ctx.r11.s64 + 13400;
	// lwz r31,72(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// addis r11,r30,9
	ctx.r11.s64 = ctx.r30.s64 + 589824;
	// addi r3,r11,-19376
	ctx.r3.s64 = ctx.r11.s64 + -19376;
	// bl 0x822b3330
	ctx.lr = 0x82111D68;
	sub_822B3330(ctx, base);
loc_82111D68:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82111e84
	if (ctx.cr6.eq) goto loc_82111E84;
loc_82111D70:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82111e84
	if (ctx.cr6.eq) goto loc_82111E84;
	// lis r11,-32110
	ctx.r11.s64 = -2104360960;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// addi r11,r11,12656
	ctx.r11.s64 = ctx.r11.s64 + 12656;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// std r9,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r9.u64);
	// lfs f0,25556(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25556);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// addi r5,r11,20024
	ctx.r5.s64 = ctx.r11.s64 + 20024;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f12,17836(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17836);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f7,80(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lfd f5,136(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// frsp f13,f6
	ctx.f13.f64 = double(float(ctx.f6.f64));
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// fmuls f2,f3,f12
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f12.f64));
	// lfs f12,17832(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17832);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f1,f13,f12
	ctx.f1.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f2,132(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lfs f13,3580(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3580);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmuls f12,f1,f13
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// fmadds f11,f12,f0,f30
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f30.f64));
	// lfs f0,17828(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17828);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f11,f0
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// bl 0x82194ed8
	ctx.lr = 0x82111E18;
	sub_82194ED8(ctx, base);
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// lfs f10,184(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f10.f64 = double(temp.f32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwz r8,236(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ld r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// ld r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// std r7,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r7.u64);
	// std r6,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r6.u64);
	// std r5,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r5.u64);
	// std r11,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, ctx.r11.u64);
	// lfs f9,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f5.f64 = double(temp.f32);
	// stfs f10,104(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f9,108(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f8,112(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f7,116(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f6,120(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f5,124(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82111E84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82111E84:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x8259bbf0
	ctx.lr = 0x82111E90;
	__restfpr_27(ctx, base);
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82111E94"))) PPC_WEAK_FUNC(sub_82111E94);
PPC_FUNC_IMPL(__imp__sub_82111E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82111E98"))) PPC_WEAK_FUNC(sub_82111E98);
PPC_FUNC_IMPL(__imp__sub_82111E98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82111EA0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32110
	ctx.r11.s64 = -2104360960;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,12656
	ctx.r31.s64 = ctx.r11.s64 + 12656;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82173950
	ctx.lr = 0x82111EBC;
	sub_82173950(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82142c30
	ctx.lr = 0x82111EC8;
	sub_82142C30(ctx, base);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r29,r11,28544
	ctx.r29.s64 = ctx.r11.s64 + 28544;
	// addi r3,r31,784
	ctx.r3.s64 = ctx.r31.s64 + 784;
	// addis r11,r29,35
	ctx.r11.s64 = ctx.r29.s64 + 2293760;
	// addi r5,r11,-28496
	ctx.r5.s64 = ctx.r11.s64 + -28496;
	// bl 0x820ac2b0
	ctx.lr = 0x82111EE4;
	sub_820AC2B0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820f2d50
	ctx.lr = 0x82111EEC;
	sub_820F2D50(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8217ea50
	ctx.lr = 0x82111EF8;
	sub_8217EA50(ctx, base);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// addi r3,r11,-2944
	ctx.r3.s64 = ctx.r11.s64 + -2944;
	// bl 0x82182438
	ctx.lr = 0x82111F04;
	sub_82182438(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82150858
	ctx.lr = 0x82111F0C;
	sub_82150858(ctx, base);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82111f3c
	if (ctx.cr6.eq) goto loc_82111F3C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,452(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 452);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82111F2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// li r30,1
	ctx.r30.s64 = 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82111f40
	if (!ctx.cr6.eq) goto loc_82111F40;
loc_82111F3C:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82111F40:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82150a38
	ctx.lr = 0x82111F48;
	sub_82150A38(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8217ea50
	ctx.lr = 0x82111F54;
	sub_8217EA50(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r11,r11,14528
	ctx.r11.s64 = ctx.r11.s64 + 14528;
	// lbz r8,22397(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 22397);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82112030
	if (!ctx.cr6.eq) goto loc_82112030;
	// lis r7,34
	ctx.r7.s64 = 2228224;
	// ori r6,r7,52259
	ctx.r6.u64 = ctx.r7.u64 | 52259;
	// lbzx r5,r29,r6
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r6.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82112024
	if (!ctx.cr6.eq) goto loc_82112024;
	// clrlwi r3,r30,24
	ctx.r3.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82112024
	if (!ctx.cr6.eq) goto loc_82112024;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r30,r11,26080
	ctx.r30.s64 = ctx.r11.s64 + 26080;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r10,r11,54116
	ctx.r10.u64 = ctx.r11.u64 | 54116;
	// lwzx r11,r30,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82111fc4
	if (ctx.cr6.eq) goto loc_82111FC4;
	// lis r9,-22330
	ctx.r9.s64 = -1463418880;
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// lis r7,-17864
	ctx.r7.s64 = -1170735104;
	// ori r8,r9,38459
	ctx.r8.u64 = ctx.r9.u64 | 38459;
	// ori r6,r7,59490
	ctx.r6.u64 = ctx.r7.u64 | 59490;
	// rldimi r8,r6,32,0
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r8.u64 & 0xFFFFFFFF);
	// cmpld cr6,r11,r8
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r8.u64, ctx.xer);
	// beq cr6,0x82111fd0
	if (ctx.cr6.eq) goto loc_82111FD0;
loc_82111FC4:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r3,r11,4864
	ctx.r3.s64 = ctx.r11.s64 + 4864;
	// bl 0x82187f48
	ctx.lr = 0x82111FD0;
	sub_82187F48(ctx, base);
loc_82111FD0:
	// bl 0x82356350
	ctx.lr = 0x82111FD4;
	sub_82356350(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82356420
	ctx.lr = 0x82111FDC;
	sub_82356420(ctx, base);
	// lis r5,2
	ctx.r5.s64 = 131072;
	// ori r4,r5,54116
	ctx.r4.u64 = ctx.r5.u64 | 54116;
	// lwzx r11,r30,r4
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r4.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82112010
	if (ctx.cr6.eq) goto loc_82112010;
	// lis r3,-22330
	ctx.r3.s64 = -1463418880;
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// lis r9,-17864
	ctx.r9.s64 = -1170735104;
	// ori r10,r3,38459
	ctx.r10.u64 = ctx.r3.u64 | 38459;
	// ori r8,r9,59490
	ctx.r8.u64 = ctx.r9.u64 | 59490;
	// rldimi r10,r8,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// beq cr6,0x8211201c
	if (ctx.cr6.eq) goto loc_8211201C;
loc_82112010:
	// addis r11,r29,35
	ctx.r11.s64 = ctx.r29.s64 + 2293760;
	// addi r3,r11,-28496
	ctx.r3.s64 = ctx.r11.s64 + -28496;
	// bl 0x82111a08
	ctx.lr = 0x8211201C;
	sub_82111A08(ctx, base);
loc_8211201C:
	// bl 0x82356408
	ctx.lr = 0x82112020;
	sub_82356408(ctx, base);
	// b 0x82112030
	goto loc_82112030;
loc_82112024:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r3,r11,4864
	ctx.r3.s64 = ctx.r11.s64 + 4864;
	// bl 0x82187f48
	ctx.lr = 0x82112030;
	sub_82187F48(ctx, base);
loc_82112030:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82150858
	ctx.lr = 0x82112038;
	sub_82150858(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82223a58
	ctx.lr = 0x82112040;
	sub_82223A58(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82112048"))) PPC_WEAK_FUNC(sub_82112048);
PPC_FUNC_IMPL(__imp__sub_82112048) {
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
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,10416
	ctx.r30.s64 = ctx.r11.s64 + 10416;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821f6898
	ctx.lr = 0x82112070;
	sub_821F6898(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821f6a00
	ctx.lr = 0x82112078;
	sub_821F6A00(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r3,r11,14528
	ctx.r3.s64 = ctx.r11.s64 + 14528;
	// bl 0x821f5a90
	ctx.lr = 0x82112084;
	sub_821F5A90(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// beq cr6,0x821120a8
	if (ctx.cr6.eq) goto loc_821120A8;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x821120A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821120A8:
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r11,r11,-18560
	ctx.r11.s64 = ctx.r11.s64 + -18560;
	// addis r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 524288;
	// addi r3,r11,-7824
	ctx.r3.s64 = ctx.r11.s64 + -7824;
	// bl 0x822acff8
	ctx.lr = 0x821120BC;
	sub_822ACFF8(ctx, base);
	// lis r7,2
	ctx.r7.s64 = 131072;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// ori r6,r7,54064
	ctx.r6.u64 = ctx.r7.u64 | 54064;
	// lis r5,2
	ctx.r5.s64 = 131072;
	// lis r3,2
	ctx.r3.s64 = 131072;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// ori r4,r5,54060
	ctx.r4.u64 = ctx.r5.u64 | 54060;
	// stbx r10,r11,r6
	PPC_STORE_U8(ctx.r11.u32 + ctx.r6.u32, ctx.r10.u8);
	// ori r9,r3,54100
	ctx.r9.u64 = ctx.r3.u64 | 54100;
	// ori r6,r7,54096
	ctx.r6.u64 = ctx.r7.u64 | 54096;
	// lfs f0,128(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// li r8,56
	ctx.r8.s64 = 56;
	// stfsx f0,r11,r4
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r4.u32, temp.u32);
	// stbx r10,r11,r9
	PPC_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u8);
	// li r10,2
	ctx.r10.s64 = 2;
	// stfsx f0,r11,r6
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r6.u32, temp.u32);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// addi r11,r11,-21272
	ctx.r11.s64 = ctx.r11.s64 + -21272;
	// stw r10,3896(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3896, ctx.r10.u32);
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_8211212C"))) PPC_WEAK_FUNC(sub_8211212C);
PPC_FUNC_IMPL(__imp__sub_8211212C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82112130"))) PPC_WEAK_FUNC(sub_82112130);
PPC_FUNC_IMPL(__imp__sub_82112130) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82112138;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r29,r11,-32560
	ctx.r29.s64 = ctx.r11.s64 + -32560;
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211223c
	if (ctx.cr6.eq) goto loc_8211223C;
	// bl 0x82104550
	ctx.lr = 0x82112158;
	sub_82104550(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lbz r9,68(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 68);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82112184
	if (!ctx.cr6.eq) goto loc_82112184;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r8,3
	ctx.r8.s64 = 196608;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// ori r7,r8,51959
	ctx.r7.u64 = ctx.r8.u64 | 51959;
	// lbzx r6,r11,r7
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82112198
	if (ctx.cr6.eq) goto loc_82112198;
loc_82112184:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,20(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x82112198;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82112198:
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r31,r11,26080
	ctx.r31.s64 = ctx.r11.s64 + 26080;
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// bl 0x8210b3c8
	ctx.lr = 0x821121A8;
	sub_8210B3C8(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r3,r11,4864
	ctx.r3.s64 = ctx.r11.s64 + 4864;
	// bl 0x821a92b8
	ctx.lr = 0x821121B4;
	sub_821A92B8(ctx, base);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,432(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821121C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8211223c
	if (!ctx.cr6.eq) goto loc_8211223C;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lis r8,34
	ctx.r8.s64 = 2228224;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// ori r7,r8,52259
	ctx.r7.u64 = ctx.r8.u64 | 52259;
	// lbzx r6,r11,r7
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82112218
	if (ctx.cr6.eq) goto loc_82112218;
	// lis r5,7
	ctx.r5.s64 = 458752;
	// ori r4,r5,16248
	ctx.r4.u64 = ctx.r5.u64 | 16248;
	// lbzx r3,r31,r4
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r4.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8211223c
	if (!ctx.cr6.eq) goto loc_8211223C;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// li r11,1
	ctx.r11.s64 = 1;
	// ori r9,r10,16247
	ctx.r9.u64 = ctx.r10.u64 | 16247;
	// stbx r11,r31,r9
	PPC_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u8);
	// b 0x8211223c
	goto loc_8211223C;
loc_82112218:
	// lis r8,7
	ctx.r8.s64 = 458752;
	// ori r7,r8,16248
	ctx.r7.u64 = ctx.r8.u64 | 16248;
	// lbzx r6,r31,r7
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r7.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8211223c
	if (ctx.cr6.eq) goto loc_8211223C;
	// lis r5,7
	ctx.r5.s64 = 458752;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r4,r5,16247
	ctx.r4.u64 = ctx.r5.u64 | 16247;
	// stbx r11,r31,r4
	PPC_STORE_U8(ctx.r31.u32 + ctx.r4.u32, ctx.r11.u8);
loc_8211223C:
	// lbz r3,1(r29)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r29.u32 + 1);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8211225c
	if (ctx.cr6.eq) goto loc_8211225C;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8211225C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8211225C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82112264"))) PPC_WEAK_FUNC(sub_82112264);
PPC_FUNC_IMPL(__imp__sub_82112264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82112268"))) PPC_WEAK_FUNC(sub_82112268);
PPC_FUNC_IMPL(__imp__sub_82112268) {
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
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmpwi cr6,r11,28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 28, ctx.xer);
	// bne cr6,0x82112348
	if (!ctx.cr6.eq) goto loc_82112348;
	// lis r11,-32110
	ctx.r11.s64 = -2104360960;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r31,r11,12656
	ctx.r31.s64 = ctx.r11.s64 + 12656;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82173950
	ctx.lr = 0x8211229C;
	sub_82173950(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82142c30
	ctx.lr = 0x821122A8;
	sub_82142C30(ctx, base);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r30,r11,28544
	ctx.r30.s64 = ctx.r11.s64 + 28544;
	// addi r3,r31,784
	ctx.r3.s64 = ctx.r31.s64 + 784;
	// addis r11,r30,35
	ctx.r11.s64 = ctx.r30.s64 + 2293760;
	// addi r5,r11,-28496
	ctx.r5.s64 = ctx.r11.s64 + -28496;
	// bl 0x820ac2b0
	ctx.lr = 0x821122C4;
	sub_820AC2B0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f2d50
	ctx.lr = 0x821122CC;
	sub_820F2D50(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8217ea50
	ctx.lr = 0x821122D8;
	sub_8217EA50(ctx, base);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// addi r3,r11,-2944
	ctx.r3.s64 = ctx.r11.s64 + -2944;
	// bl 0x82182438
	ctx.lr = 0x821122E4;
	sub_82182438(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82150858
	ctx.lr = 0x821122EC;
	sub_82150858(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82150a38
	ctx.lr = 0x821122F4;
	sub_82150A38(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8217ea50
	ctx.lr = 0x82112300;
	sub_8217EA50(ctx, base);
	// lis r10,34
	ctx.r10.s64 = 2228224;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// ori r9,r10,52259
	ctx.r9.u64 = ctx.r10.u64 | 52259;
	// addi r3,r11,4864
	ctx.r3.s64 = ctx.r11.s64 + 4864;
	// lbzx r8,r30,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bl 0x82187f48
	ctx.lr = 0x8211231C;
	sub_82187F48(ctx, base);
	// bl 0x82356350
	ctx.lr = 0x82112320;
	sub_82356350(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82356420
	ctx.lr = 0x82112328;
	sub_82356420(ctx, base);
	// addis r11,r30,35
	ctx.r11.s64 = ctx.r30.s64 + 2293760;
	// addi r3,r11,-28496
	ctx.r3.s64 = ctx.r11.s64 + -28496;
	// bl 0x82111a08
	ctx.lr = 0x82112334;
	sub_82111A08(ctx, base);
	// bl 0x82356408
	ctx.lr = 0x82112338;
	sub_82356408(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82150858
	ctx.lr = 0x82112340;
	sub_82150858(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82223a58
	ctx.lr = 0x82112348;
	sub_82223A58(ctx, base);
loc_82112348:
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

__attribute__((alias("__imp__sub_82112360"))) PPC_WEAK_FUNC(sub_82112360);
PPC_FUNC_IMPL(__imp__sub_82112360) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x82112368;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stb r11,12(r29)
	PPC_STORE_U8(ctx.r29.u32 + 12, ctx.r11.u8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82112394
	if (ctx.cr6.eq) goto loc_82112394;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82112394;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82112394:
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r11,r11,-18560
	ctx.r11.s64 = ctx.r11.s64 + -18560;
	// addis r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 524288;
	// addi r3,r11,-7824
	ctx.r3.s64 = ctx.r11.s64 + -7824;
	// bl 0x822acff8
	ctx.lr = 0x821123A8;
	sub_822ACFF8(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r3,r11,14528
	ctx.r3.s64 = ctx.r11.s64 + 14528;
	// bl 0x821f5a90
	ctx.lr = 0x821123B4;
	sub_821F5A90(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r31,r11,10416
	ctx.r31.s64 = ctx.r11.s64 + 10416;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f6a00
	ctx.lr = 0x821123C4;
	sub_821F6A00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f6898
	ctx.lr = 0x821123CC;
	sub_821F6898(ctx, base);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r31,r11,26752
	ctx.r31.s64 = ctx.r11.s64 + 26752;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82223fb0
	ctx.lr = 0x821123DC;
	sub_82223FB0(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// lis r8,3
	ctx.r8.s64 = 196608;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// ori r7,r8,51969
	ctx.r7.u64 = ctx.r8.u64 | 51969;
	// lis r6,3
	ctx.r6.s64 = 196608;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// ori r5,r6,51970
	ctx.r5.u64 = ctx.r6.u64 | 51970;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stbx r10,r31,r7
	PPC_STORE_U8(ctx.r31.u32 + ctx.r7.u32, ctx.r10.u8);
	// li r10,1
	ctx.r10.s64 = 1;
	// stbx r10,r31,r5
	PPC_STORE_U8(ctx.r31.u32 + ctx.r5.u32, ctx.r10.u8);
	// ble cr6,0x82112438
	if (!ctx.cr6.gt) goto loc_82112438;
loc_82112410:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x82365758
	ctx.lr = 0x8211241C;
	sub_82365758(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82112428
	if (ctx.cr6.eq) goto loc_82112428;
	// stb r28,1649(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1649, ctx.r28.u8);
loc_82112428:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82112410
	if (ctx.cr6.lt) goto loc_82112410;
loc_82112438:
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r3,2
	ctx.r3.s64 = 131072;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// ori r10,r3,54060
	ctx.r10.u64 = ctx.r3.u64 | 54060;
	// ori r6,r7,54096
	ctx.r6.u64 = ctx.r7.u64 | 54096;
	// lis r5,3
	ctx.r5.s64 = 196608;
	// lis r7,3
	ctx.r7.s64 = 196608;
	// lfs f0,128(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stfsx f0,r11,r10
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, temp.u32);
	// ori r3,r5,51972
	ctx.r3.u64 = ctx.r5.u64 | 51972;
	// stfsx f0,r11,r6
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r6.u32, temp.u32);
	// ori r6,r7,51976
	ctx.r6.u64 = ctx.r7.u64 | 51976;
	// lis r5,2
	ctx.r5.s64 = 131072;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// stwx r9,r31,r3
	PPC_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r9.u32);
	// ori r3,r5,54064
	ctx.r3.u64 = ctx.r5.u64 | 54064;
	// stwx r9,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r9.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// ori r6,r7,54100
	ctx.r6.u64 = ctx.r7.u64 | 54100;
	// li r4,56
	ctx.r4.s64 = 56;
	// lbz r8,23631(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 23631);
	// stbx r9,r11,r3
	PPC_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r9.u8);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stbx r9,r11,r6
	PPC_STORE_U8(ctx.r11.u32 + ctx.r6.u32, ctx.r9.u8);
	// stw r4,44(r29)
	PPC_STORE_U32(ctx.r29.u32 + 44, ctx.r4.u32);
	// beq cr6,0x821124b4
	if (ctx.cr6.eq) goto loc_821124B4;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stb r11,23631(r10)
	PPC_STORE_U8(ctx.r10.u32 + 23631, ctx.r11.u8);
loc_821124B4:
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r11,r11,-21272
	ctx.r11.s64 = ctx.r11.s64 + -21272;
	// stw r10,3896(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3896, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821124CC"))) PPC_WEAK_FUNC(sub_821124CC);
PPC_FUNC_IMPL(__imp__sub_821124CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821124D0"))) PPC_WEAK_FUNC(sub_821124D0);
PPC_FUNC_IMPL(__imp__sub_821124D0) {
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
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8210b630
	ctx.lr = 0x821124EC;
	sub_8210B630(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82112508
	if (ctx.cr6.eq) goto loc_82112508;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// lfs f0,128(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
loc_82112508:
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

__attribute__((alias("__imp__sub_8211251C"))) PPC_WEAK_FUNC(sub_8211251C);
PPC_FUNC_IMPL(__imp__sub_8211251C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82112520"))) PPC_WEAK_FUNC(sub_82112520);
PPC_FUNC_IMPL(__imp__sub_82112520) {
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
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82108d00
	ctx.lr = 0x82112554;
	sub_82108D00(ctx, base);
	// li r5,128
	ctx.r5.s64 = 128;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,12556
	ctx.r3.s64 = ctx.r31.s64 + 12556;
	// bl 0x8259d2a0
	ctx.lr = 0x82112564;
	sub_8259D2A0(ctx, base);
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

__attribute__((alias("__imp__sub_82112580"))) PPC_WEAK_FUNC(sub_82112580);
PPC_FUNC_IMPL(__imp__sub_82112580) {
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
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r4,1
	ctx.r4.s64 = 1;
	// stb r30,13448(r31)
	PPC_STORE_U8(ctx.r31.u32 + 13448, ctx.r30.u8);
	// stw r30,11480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11480, ctx.r30.u32);
	// stw r30,11484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11484, ctx.r30.u32);
	// stb r30,13450(r31)
	PPC_STORE_U8(ctx.r31.u32 + 13450, ctx.r30.u8);
	// stw r30,13516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13516, ctx.r30.u32);
	// stb r11,13449(r31)
	PPC_STORE_U8(ctx.r31.u32 + 13449, ctx.r11.u8);
	// stw r30,13456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13456, ctx.r30.u32);
	// stw r30,12136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12136, ctx.r30.u32);
	// stw r10,12144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12144, ctx.r10.u32);
	// stb r30,13451(r31)
	PPC_STORE_U8(ctx.r31.u32 + 13451, ctx.r30.u8);
	// stw r30,13524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13524, ctx.r30.u32);
	// stw r30,13528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13528, ctx.r30.u32);
	// stw r30,13460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13460, ctx.r30.u32);
	// stb r30,13452(r31)
	PPC_STORE_U8(ctx.r31.u32 + 13452, ctx.r30.u8);
	// stw r30,12332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12332, ctx.r30.u32);
	// stw r30,12336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12336, ctx.r30.u32);
	// stb r30,13453(r31)
	PPC_STORE_U8(ctx.r31.u32 + 13453, ctx.r30.u8);
	// bl 0x82228c60
	ctx.lr = 0x821125F0;
	sub_82228C60(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r30,12344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12344, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_82112610"))) PPC_WEAK_FUNC(sub_82112610);
PPC_FUNC_IMPL(__imp__sub_82112610) {
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
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,11484(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11484);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x821126a0
	if (ctx.cr6.gt) goto loc_821126A0;
	// lis r12,-32239
	ctx.r12.s64 = -2112815104;
	// addi r12,r12,9808
	ctx.r12.s64 = ctx.r12.s64 + 9808;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82112668;
	case 1:
		goto loc_82112674;
	case 2:
		goto loc_82112680;
	case 3:
		goto loc_8211268C;
	case 4:
		goto loc_821126C8;
	case 5:
		goto loc_82112698;
	default:
		__builtin_unreachable();
	}
	// lwz r16,9832(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 9832);
	// lwz r16,9844(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 9844);
	// lwz r16,9856(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 9856);
	// lwz r16,9868(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 9868);
	// lwz r16,9928(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 9928);
	// lwz r16,9880(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 9880);
loc_82112668:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r6,r11,-29064
	ctx.r6.s64 = ctx.r11.s64 + -29064;
	// b 0x821126a0
	goto loc_821126A0;
loc_82112674:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r6,r11,-28928
	ctx.r6.s64 = ctx.r11.s64 + -28928;
	// b 0x821126a0
	goto loc_821126A0;
loc_82112680:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r6,r11,-28784
	ctx.r6.s64 = ctx.r11.s64 + -28784;
	// b 0x821126a0
	goto loc_821126A0;
loc_8211268C:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r6,r11,-28640
	ctx.r6.s64 = ctx.r11.s64 + -28640;
	// b 0x821126a0
	goto loc_821126A0;
loc_82112698:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r6,r11,-28496
	ctx.r6.s64 = ctx.r11.s64 + -28496;
loc_821126A0:
	// lis r30,-32126
	ctx.r30.s64 = -2105409536;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r31,12056
	ctx.r3.s64 = ctx.r31.s64 + 12056;
	// stw r31,23660(r30)
	PPC_STORE_U32(ctx.r30.u32 + 23660, ctx.r31.u32);
	// lwz r4,12140(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12140);
	// bl 0x8259cd88
	ctx.lr = 0x821126B8;
	sub_8259CD88(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,23660(r30)
	PPC_STORE_U32(ctx.r30.u32 + 23660, ctx.r11.u32);
	// stb r10,13448(r31)
	PPC_STORE_U8(ctx.r31.u32 + 13448, ctx.r10.u8);
loc_821126C8:
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

__attribute__((alias("__imp__sub_821126E0"))) PPC_WEAK_FUNC(sub_821126E0);
PPC_FUNC_IMPL(__imp__sub_821126E0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// blt cr6,0x8211270c
	if (ctx.cr6.lt) goto loc_8211270C;
	// bne cr6,0x8211272c
	if (!ctx.cr6.eq) goto loc_8211272C;
	// lwz r10,13460(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13460);
	// lwz r11,13464(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13464);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82112730
	if (ctx.cr6.lt) goto loc_82112730;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82112730
	goto loc_82112730;
loc_8211270C:
	// lwz r11,13464(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13464);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82112730
	if (!ctx.cr6.lt) goto loc_82112730;
	// lwz r8,13460(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13460);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x82112730
	goto loc_82112730;
loc_8211272C:
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
loc_82112730:
	// lwz r7,13460(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13460);
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r11,r11,32424
	ctx.r11.s64 = ctx.r11.s64 + 32424;
	// lwz r5,0(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwzx r4,r5,r6
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r6.u32);
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r3,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82112754"))) PPC_WEAK_FUNC(sub_82112754);
PPC_FUNC_IMPL(__imp__sub_82112754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82112758"))) PPC_WEAK_FUNC(sub_82112758);
PPC_FUNC_IMPL(__imp__sub_82112758) {
	PPC_FUNC_PROLOGUE();
	// addi r10,r4,3014
	ctx.r10.s64 = ctx.r4.s64 + 3014;
	// lwz r9,12136(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12136);
	// lis r4,3
	ctx.r4.s64 = 196608;
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32090
	ctx.r10.s64 = -2103050240;
	// ori r8,r4,51957
	ctx.r8.u64 = ctx.r4.u64 | 51957;
	// addi r10,r10,26752
	ctx.r10.s64 = ctx.r10.s64 + 26752;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwzx r6,r6,r3
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r3.u32);
	// addi r11,r3,13468
	ctx.r11.s64 = ctx.r3.s64 + 13468;
	// lbzx r8,r10,r8
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r8.u32);
	// rlwinm r10,r6,14,0,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 14) & 0xFFFFC000;
	// stw r7,13504(r3)
	PPC_STORE_U32(ctx.r3.u32 + 13504, ctx.r7.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// lbz r5,12555(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12555);
	// rlwinm r4,r5,0,29,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// beq cr6,0x821127b0
	if (ctx.cr6.eq) goto loc_821127B0;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
loc_821127B0:
	// clrlwi r5,r9,24
	ctx.r5.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x821128c0
	if (ctx.cr6.eq) {
		sub_821128C0(ctx, base);
		return;
	}
	// lwz r10,11480(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11480);
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// bgt cr6,0x82112bc4
	if (ctx.cr6.gt) {
		// ERROR 82112BC4
		return;
	}
	// lis r12,-32239
	ctx.r12.s64 = -2112815104;
	// addi r12,r12,10208
	ctx.r12.s64 = ctx.r12.s64 + 10208;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		// ERROR: 0x821127F8
		return;
	case 1:
		// ERROR: 0x821127F8
		return;
	case 2:
		// ERROR: 0x8211281C
		return;
	case 3:
		// ERROR: 0x82112BC4
		return;
	case 4:
		// ERROR: 0x82112BC4
		return;
	case 5:
		// ERROR: 0x8211286C
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_821127E0"))) PPC_WEAK_FUNC(sub_821127E0);
PPC_FUNC_IMPL(__imp__sub_821127E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r16,10232(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 10232);
	// lwz r16,10232(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 10232);
	// lwz r16,10268(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 10268);
	// lwz r16,11204(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 11204);
	// lwz r16,11204(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 11204);
	// lwz r16,10348(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 10348);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// li r4,5
	ctx.r4.s64 = 5;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r4,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r4.u32);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// stw r8,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r8.u32);
	// lwz r3,13504(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13504);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8211281C"))) PPC_WEAK_FUNC(sub_8211281C);
PPC_FUNC_IMPL(__imp__sub_8211281C) {
	PPC_FUNC_PROLOGUE();
	// lbz r7,13452(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 13452);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8211284c
	if (ctx.cr6.eq) goto loc_8211284C;
	// lwz r5,36(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// li r6,7
	ctx.r6.s64 = 7;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r6,r4,r11
	PPC_STORE_U32(ctx.r4.u32 + ctx.r11.u32, ctx.r6.u32);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// lwz r3,13504(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13504);
	// blr 
	return;
loc_8211284C:
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r6,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r6.u32);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// stw r7,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r7.u32);
	// lwz r3,13504(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13504);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8211286C"))) PPC_WEAK_FUNC(sub_8211286C);
PPC_FUNC_IMPL(__imp__sub_8211286C) {
	PPC_FUNC_PROLOGUE();
	// lbz r6,13452(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 13452);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8211289c
	if (ctx.cr6.eq) goto loc_8211289C;
	// lwz r4,36(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// li r5,8
	ctx.r5.s64 = 8;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r5.u32);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r9,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r9.u32);
	// lwz r3,13504(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13504);
	// blr 
	return;
loc_8211289C:
	// lwz r7,36(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// li r8,3
	ctx.r8.s64 = 3;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r8,r6,r11
	PPC_STORE_U32(ctx.r6.u32 + ctx.r11.u32, ctx.r8.u32);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// stw r5,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r5.u32);
	// lwz r3,13504(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13504);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821128C0"))) PPC_WEAK_FUNC(sub_821128C0);
PPC_FUNC_IMPL(__imp__sub_821128C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,11480(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11480);
	// cmplwi cr6,r9,8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 8, ctx.xer);
	// bgt cr6,0x82112bc4
	if (ctx.cr6.gt) {
		// ERROR 82112BC4
		return;
	}
	// lis r12,-32239
	ctx.r12.s64 = -2112815104;
	// addi r12,r12,10468
	ctx.r12.s64 = ctx.r12.s64 + 10468;
	// rlwinm r0,r9,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r9.u64) {
	case 0:
		// ERROR: 0x82112908
		return;
	case 1:
		// ERROR: 0x821129F0
		return;
	case 2:
		// ERROR: 0x82112AB0
		return;
	case 3:
		// ERROR: 0x82112B0C
		return;
	case 4:
		// ERROR: 0x82112B0C
		return;
	case 5:
		// ERROR: 0x82112AB0
		return;
	case 6:
		// ERROR: 0x82112B0C
		return;
	case 7:
		// ERROR: 0x82112B0C
		return;
	case 8:
		// ERROR: 0x82112B0C
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_821128E4"))) PPC_WEAK_FUNC(sub_821128E4);
PPC_FUNC_IMPL(__imp__sub_821128E4) {
	PPC_FUNC_PROLOGUE();
	// lwz r16,10504(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 10504);
	// lwz r16,10736(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 10736);
	// lwz r16,10928(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 10928);
	// lwz r16,11020(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 11020);
	// lwz r16,11020(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 11020);
	// lwz r16,10928(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 10928);
	// lwz r16,11020(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 11020);
	// lwz r16,11020(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 11020);
	// lwz r16,11020(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 11020);
	// clrlwi r9,r8,24
	ctx.r9.u64 = ctx.r8.u32 & 0xFF;
	// lwz r8,36(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// li r4,4
	ctx.r4.s64 = 4;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stwx r4,r5,r11
	PPC_STORE_U32(ctx.r5.u32 + ctx.r11.u32, ctx.r4.u32);
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// addi r4,r9,1
	ctx.r4.s64 = ctx.r9.s64 + 1;
	// stw r4,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r4.u32);
	// beq cr6,0x821129ac
	if (ctx.cr6.eq) goto loc_821129AC;
	// lbz r9,12555(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12555);
	// rlwinm r8,r9,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82112948
	if (!ctx.cr6.eq) goto loc_82112948;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
loc_82112948:
	// clrlwi r4,r9,24
	ctx.r4.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82112994
	if (ctx.cr6.eq) goto loc_82112994;
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r6,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r6.u32);
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// addi r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 1;
	// stw r5,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r5.u32);
	// lbz r4,12555(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12555);
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// bne cr6,0x82112984
	if (!ctx.cr6.eq) goto loc_82112984;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_82112984:
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821129d0
	if (ctx.cr6.eq) goto loc_821129D0;
	// li r7,3
	ctx.r7.s64 = 3;
loc_82112994:
	// lwz r6,36(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r7,r5,r11
	PPC_STORE_U32(ctx.r5.u32 + ctx.r11.u32, ctx.r7.u32);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// stw r4,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r4.u32);
loc_821129AC:
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// li r10,5
	ctx.r10.s64 = 5;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u32);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// stw r7,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r7.u32);
	// lwz r3,13504(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13504);
	// blr 
	return;
loc_821129D0:
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// li r10,2
	ctx.r10.s64 = 2;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u32);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// stw r7,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r7.u32);
	// b 0x821129ac
	goto loc_821129AC;
}

__attribute__((alias("__imp__sub_821129F0"))) PPC_WEAK_FUNC(sub_821129F0);
PPC_FUNC_IMPL(__imp__sub_821129F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r4,36(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// li r5,4
	ctx.r5.s64 = 4;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r5.u32);
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// stw r8,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r8.u32);
	// lbz r5,12555(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12555);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// clrlwi r4,r5,31
	ctx.r4.u64 = ctx.r5.u32 & 0x1;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82112a24
	if (!ctx.cr6.eq) goto loc_82112A24;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_82112A24:
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82112a70
	if (ctx.cr6.eq) goto loc_82112A70;
	// lwz r7,36(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// li r8,3
	ctx.r8.s64 = 3;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// li r7,5
	ctx.r7.s64 = 5;
	// stwx r8,r6,r11
	PPC_STORE_U32(ctx.r6.u32 + ctx.r11.u32, ctx.r8.u32);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// rotlwi r6,r5,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r5,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r5.u32);
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r7,r5,r11
	PPC_STORE_U32(ctx.r5.u32 + ctx.r11.u32, ctx.r7.u32);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// stw r4,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r4.u32);
	// lwz r3,13504(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13504);
	// blr 
	return;
loc_82112A70:
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// li r4,2
	ctx.r4.s64 = 2;
	// li r7,5
	ctx.r7.s64 = 5;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r4,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r4.u32);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// rotlwi r6,r8,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r8.u32);
	// stwx r7,r5,r11
	PPC_STORE_U32(ctx.r5.u32 + ctx.r11.u32, ctx.r7.u32);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// stw r4,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r4.u32);
	// lwz r3,13504(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13504);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82112AB0"))) PPC_WEAK_FUNC(sub_82112AB0);
PPC_FUNC_IMPL(__imp__sub_82112AB0) {
	PPC_FUNC_PROLOGUE();
	// lbz r8,13452(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 13452);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82112b0c
	if (ctx.cr6.eq) goto loc_82112B0C;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bne cr6,0x82112ae8
	if (!ctx.cr6.eq) goto loc_82112AE8;
	// lwz r6,36(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// li r7,7
	ctx.r7.s64 = 7;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r7,r5,r11
	PPC_STORE_U32(ctx.r5.u32 + ctx.r11.u32, ctx.r7.u32);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// stw r4,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r4.u32);
	// lwz r3,13504(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13504);
	// blr 
	return;
loc_82112AE8:
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// li r10,8
	ctx.r10.s64 = 8;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u32);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// stw r7,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r7.u32);
	// lwz r3,13504(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13504);
	// blr 
	return;
loc_82112B0C:
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,6
	ctx.r4.s64 = 6;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r5.u32);
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// addi r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 1;
	// rotlwi r9,r5,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r5,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r5.u32);
	// stwx r4,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r4.u32);
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// addi r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 1;
	// stw r5,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r5.u32);
	// lbz r4,12555(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12555);
	// clrlwi r9,r4,31
	ctx.r9.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// bne cr6,0x82112b5c
	if (!ctx.cr6.eq) goto loc_82112B5C;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
loc_82112B5C:
	// clrlwi r5,r9,24
	ctx.r5.u64 = ctx.r9.u32 & 0xFF;
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// li r4,3
	ctx.r4.s64 = 3;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bne cr6,0x82112b78
	if (!ctx.cr6.eq) goto loc_82112B78;
	// li r4,2
	ctx.r4.s64 = 2;
loc_82112B78:
	// stwx r4,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r4.u32);
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// addi r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 1;
	// stw r5,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r5.u32);
	// lbz r4,12555(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12555);
	// rlwinm r10,r4,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// bne cr6,0x82112ba0
	if (!ctx.cr6.eq) goto loc_82112BA0;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_82112BA0:
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82112bc4
	if (ctx.cr6.eq) goto loc_82112BC4;
	// lwz r7,36(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r6,r5,r11
	PPC_STORE_U32(ctx.r5.u32 + ctx.r11.u32, ctx.r6.u32);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// stw r4,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r4.u32);
loc_82112BC4:
	// lwz r3,13504(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13504);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82112BCC"))) PPC_WEAK_FUNC(sub_82112BCC);
PPC_FUNC_IMPL(__imp__sub_82112BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82112BD0"))) PPC_WEAK_FUNC(sub_82112BD0);
PPC_FUNC_IMPL(__imp__sub_82112BD0) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,12144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12144);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x82112c00
	if (ctx.cr6.eq) goto loc_82112C00;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,13448(r31)
	PPC_STORE_U8(ctx.r31.u32 + 13448, ctx.r10.u8);
loc_82112C00:
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r11,-6648
	ctx.r3.s64 = ctx.r11.s64 + -6648;
	// bl 0x820fe130
	ctx.lr = 0x82112C10;
	sub_820FE130(ctx, base);
	// cntlzw r9,r30
	ctx.r9.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r9,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bl 0x82109240
	ctx.lr = 0x82112C20;
	sub_82109240(ctx, base);
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

__attribute__((alias("__imp__sub_82112C38"))) PPC_WEAK_FUNC(sub_82112C38);
PPC_FUNC_IMPL(__imp__sub_82112C38) {
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
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-4160(r1)
	ea = -4160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,-1452
	ctx.r30.s64 = ctx.r11.s64 + -1452;
	// addi r4,r1,4128
	ctx.r4.s64 = ctx.r1.s64 + 4128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820fa120
	ctx.lr = 0x82112C68;
	sub_820FA120(ctx, base);
	// lwz r11,13440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13440);
	// lwz r10,12136(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12136);
	// li r5,16384
	ctx.r5.s64 = 16384;
	// rlwinm r11,r11,14,0,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0xFFFFC000;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8259d3a0
	ctx.lr = 0x82112C80;
	sub_8259D3A0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,12144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12144);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// stb r10,13451(r31)
	PPC_STORE_U8(ctx.r31.u32 + 13451, ctx.r10.u8);
	// beq cr6,0x82112cec
	if (ctx.cr6.eq) goto loc_82112CEC;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x82112d24
	if (!ctx.cr6.eq) goto loc_82112D24;
	// lwz r11,13524(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13524);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82112cb8
	if (ctx.cr6.eq) goto loc_82112CB8;
	// lwz r4,13528(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13528);
	// li r3,1
	ctx.r3.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82112CB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82112CB8:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r9,-6216
	ctx.r9.s64 = -407371776;
	// lis r8,-27105
	ctx.r8.s64 = -1776353280;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// li r11,8
	ctx.r11.s64 = 8;
	// ori r4,r9,63999
	ctx.r4.u64 = ctx.r9.u64 | 63999;
	// ori r7,r8,28614
	ctx.r7.u64 = ctx.r8.u64 | 28614;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// rldimi r4,r7,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// stw r11,8400(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8400, ctx.r11.u32);
	// bl 0x820a38e8
	ctx.lr = 0x82112CE8;
	sub_820A38E8(ctx, base);
	// b 0x82112d24
	goto loc_82112D24;
loc_82112CEC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820fa138
	ctx.lr = 0x82112CF4;
	sub_820FA138(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,3672
	ctx.r4.s64 = ctx.r11.s64 + 3672;
	// bl 0x820f9708
	ctx.lr = 0x82112D04;
	sub_820F9708(ctx, base);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// addis r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 262144;
	// addi r3,r11,29888
	ctx.r3.s64 = ctx.r11.s64 + 29888;
	// bl 0x823247c0
	ctx.lr = 0x82112D18;
	sub_823247C0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82109240
	ctx.lr = 0x82112D24;
	sub_82109240(ctx, base);
loc_82112D24:
	// addi r1,r1,4160
	ctx.r1.s64 = ctx.r1.s64 + 4160;
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

__attribute__((alias("__imp__sub_82112D3C"))) PPC_WEAK_FUNC(sub_82112D3C);
PPC_FUNC_IMPL(__imp__sub_82112D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82112D40"))) PPC_WEAK_FUNC(sub_82112D40);
PPC_FUNC_IMPL(__imp__sub_82112D40) {
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
	// li r4,37
	ctx.r4.s64 = 37;
	// bl 0x8210cf48
	ctx.lr = 0x82112D68;
	sub_8210CF48(ctx, base);
	// addis r11,r3,5
	ctx.r11.s64 = ctx.r3.s64 + 327680;
	// stw r3,12136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12136, ctx.r3.u32);
	// stw r11,12332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12332, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82112D88"))) PPC_WEAK_FUNC(sub_82112D88);
PPC_FUNC_IMPL(__imp__sub_82112D88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82112D90;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,1
	ctx.r29.s64 = 1;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-21272
	ctx.r3.s64 = ctx.r11.s64 + -21272;
	// li r4,37
	ctx.r4.s64 = 37;
	// stw r30,12140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12140, ctx.r30.u32);
	// stb r29,13448(r31)
	PPC_STORE_U8(ctx.r31.u32 + 13448, ctx.r29.u8);
	// bl 0x8210d230
	ctx.lr = 0x82112DBC;
	sub_8210D230(ctx, base);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// stw r30,13508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13508, ctx.r30.u32);
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r3,r11,25864
	ctx.r3.s64 = ctx.r11.s64 + 25864;
	// bl 0x822236f8
	ctx.lr = 0x82112DD4;
	sub_822236F8(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stb r29,11081(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11081, ctx.r29.u8);
	// stb r30,13453(r31)
	PPC_STORE_U8(ctx.r31.u32 + 13453, ctx.r30.u8);
	// stw r30,12136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12136, ctx.r30.u32);
	// stw r30,12332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12332, ctx.r30.u32);
	// stw r11,12144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12144, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82112DF4"))) PPC_WEAK_FUNC(sub_82112DF4);
PPC_FUNC_IMPL(__imp__sub_82112DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82112DF8"))) PPC_WEAK_FUNC(sub_82112DF8);
PPC_FUNC_IMPL(__imp__sub_82112DF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x82112E00;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,12140(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12140);
	// lwz r10,12136(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12136);
	// addi r8,r11,3014
	ctx.r8.s64 = ctx.r11.s64 + 3014;
	// rlwinm r9,r11,14,0,17
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0xFFFFC000;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r10,r9
	ctx.r31.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stwx r11,r7,r30
	PPC_STORE_U32(ctx.r7.u32 + ctx.r30.u32, ctx.r11.u32);
	// lwz r6,12544(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12544);
	// cmpwi cr6,r6,4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 4, ctx.xer);
	// bne cr6,0x82112e58
	if (!ctx.cr6.eq) goto loc_82112E58;
	// lwz r5,12440(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12440);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r5,27
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 27, ctx.xer);
	// beq cr6,0x82112e48
	if (ctx.cr6.eq) goto loc_82112E48;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82112E48:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82112e5c
	if (!ctx.cr6.eq) goto loc_82112E5C;
loc_82112E58:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82112E5C:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r29,r11,26080
	ctx.r29.s64 = ctx.r11.s64 + 26080;
	// bne cr6,0x82112e80
	if (!ctx.cr6.eq) goto loc_82112E80;
	// lbz r9,12555(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12555);
	// ori r8,r9,4
	ctx.r8.u64 = ctx.r9.u64 | 4;
	// stb r8,12555(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12555, ctx.r8.u8);
	// b 0x82112f90
	goto loc_82112F90;
loc_82112E80:
	// lwz r11,11480(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11480);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82112f4c
	if (!ctx.cr6.eq) goto loc_82112F4C;
	// addi r4,r31,12396
	ctx.r4.s64 = ctx.r31.s64 + 12396;
	// addi r3,r30,12344
	ctx.r3.s64 = ctx.r30.s64 + 12344;
	// bl 0x82109858
	ctx.lr = 0x82112E98;
	sub_82109858(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// bne cr6,0x82112eac
	if (!ctx.cr6.eq) goto loc_82112EAC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82112EAC:
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82112ec8
	if (ctx.cr6.eq) goto loc_82112EC8;
	// lbz r6,12555(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12555);
	// ori r3,r6,2
	ctx.r3.u64 = ctx.r6.u64 | 2;
	// stb r3,12555(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12555, ctx.r3.u8);
	// b 0x82112ed4
	goto loc_82112ED4;
loc_82112EC8:
	// lbz r11,12555(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12555);
	// andi. r10,r11,253
	ctx.r10.u64 = ctx.r11.u64 & 253;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r10,12555(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12555, ctx.r10.u8);
loc_82112ED4:
	// lis r8,7
	ctx.r8.s64 = 458752;
	// stb r5,12554(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12554, ctx.r5.u8);
	// addis r10,r29,7
	ctx.r10.s64 = ctx.r29.s64 + 458752;
	// ori r7,r8,14715
	ctx.r7.u64 = ctx.r8.u64 | 14715;
	// addi r6,r10,14528
	ctx.r6.s64 = ctx.r10.s64 + 14528;
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// lbzx r11,r29,r7
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r7.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r3,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// ldx r10,r11,r6
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r6.u32);
	// std r10,12432(r31)
	PPC_STORE_U64(ctx.r31.u32 + 12432, ctx.r10.u64);
	// beq cr6,0x82112f90
	if (ctx.cr6.eq) goto loc_82112F90;
	// addi r11,r31,12460
	ctx.r11.s64 = ctx.r31.s64 + 12460;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r3,r30,14464
	ctx.r3.s64 = ctx.r30.s64 + 14464;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x82109a70
	ctx.lr = 0x82112F20;
	sub_82109A70(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82112f3c
	if (ctx.cr6.eq) goto loc_82112F3C;
	// lbz r8,12555(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12555);
	// ori r7,r8,1
	ctx.r7.u64 = ctx.r8.u64 | 1;
	// stb r7,12555(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12555, ctx.r7.u8);
	// b 0x82112f90
	goto loc_82112F90;
loc_82112F3C:
	// lbz r6,12555(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12555);
	// rlwinm r5,r6,0,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r5,12555(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12555, ctx.r5.u8);
	// b 0x82112f90
	goto loc_82112F90;
loc_82112F4C:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82112f90
	if (!ctx.cr6.eq) goto loc_82112F90;
	// addi r6,r31,12396
	ctx.r6.s64 = ctx.r31.s64 + 12396;
	// lbz r5,12554(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12554);
	// addi r4,r31,12460
	ctx.r4.s64 = ctx.r31.s64 + 12460;
	// addi r3,r30,14464
	ctx.r3.s64 = ctx.r30.s64 + 14464;
	// bl 0x82109a70
	ctx.lr = 0x82112F68;
	sub_82109A70(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82112f84
	if (ctx.cr6.eq) goto loc_82112F84;
	// lbz r3,12555(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12555);
	// ori r11,r3,1
	ctx.r11.u64 = ctx.r3.u64 | 1;
	// stb r11,12555(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12555, ctx.r11.u8);
	// b 0x82112f90
	goto loc_82112F90;
loc_82112F84:
	// lbz r10,12555(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12555);
	// rlwinm r9,r10,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r9,12555(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12555, ctx.r9.u8);
loc_82112F90:
	// lis r7,7
	ctx.r7.s64 = 458752;
	// lwz r8,11480(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11480);
	// ori r6,r7,14715
	ctx.r6.u64 = ctx.r7.u64 | 14715;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lbzx r10,r29,r6
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r6.u32);
	// beq cr6,0x82112fe4
	if (ctx.cr6.eq) goto loc_82112FE4;
	// addis r9,r29,7
	ctx.r9.s64 = ctx.r29.s64 + 458752;
	// ld r5,12432(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 12432);
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// addi r4,r9,14528
	ctx.r4.s64 = ctx.r9.s64 + 14528;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r3,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// ldx r9,r11,r4
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r4.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpld cr6,r9,r5
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r5.u64, ctx.xer);
	// beq cr6,0x82112fd8
	if (ctx.cr6.eq) goto loc_82112FD8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82112FD8:
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8211300c
	if (ctx.cr6.eq) goto loc_8211300C;
loc_82112FE4:
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// addis r10,r29,7
	ctx.r10.s64 = ctx.r29.s64 + 458752;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r10,14538
	ctx.r10.s64 = ctx.r10.s64 + 14538;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// rlwinm r11,r6,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r3,r31,12460
	ctx.r3.s64 = ctx.r31.s64 + 12460;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8259d2a0
	ctx.lr = 0x8211300C;
	sub_8259D2A0(ctx, base);
loc_8211300C:
	// lwz r11,12140(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12140);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r5,12140(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12140, ctx.r5.u32);
	// lbz r4,12555(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12555);
	// rlwinm r3,r4,0,29,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// beq cr6,0x82113030
	if (ctx.cr6.eq) goto loc_82113030;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82113030:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82113050
	if (!ctx.cr6.eq) goto loc_82113050;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8215ffb0
	ctx.lr = 0x82113044;
	sub_8215FFB0(ctx, base);
	// addi r3,r31,16384
	ctx.r3.s64 = ctx.r31.s64 + 16384;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_82113050:
	// li r5,42
	ctx.r5.s64 = 42;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r31,12688
	ctx.r3.s64 = ctx.r31.s64 + 12688;
	// bl 0x8259d2a0
	ctx.lr = 0x82113060;
	sub_8259D2A0(ctx, base);
	// addi r3,r31,16384
	ctx.r3.s64 = ctx.r31.s64 + 16384;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8211306C"))) PPC_WEAK_FUNC(sub_8211306C);
PPC_FUNC_IMPL(__imp__sub_8211306C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82113070"))) PPC_WEAK_FUNC(sub_82113070);
PPC_FUNC_IMPL(__imp__sub_82113070) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-1452
	ctx.r3.s64 = ctx.r11.s64 + -1452;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x820fa120
	ctx.lr = 0x82113098;
	sub_820FA120(ctx, base);
	// lwz r11,13524(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13524);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821130b8
	if (ctx.cr6.eq) goto loc_821130B8;
	// lwz r4,13528(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13528);
	// li r3,10
	ctx.r3.s64 = 10;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821130B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821130B8:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r9,r31,12336
	ctx.r9.s64 = ctx.r31.s64 + 12336;
	// lwz r7,12332(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12332);
	// addi r6,r10,-16384
	ctx.r6.s64 = ctx.r10.s64 + -16384;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// lis r8,48
	ctx.r8.s64 = 3145728;
	// addi r5,r30,16384
	ctx.r5.s64 = ctx.r30.s64 + 16384;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,20404
	ctx.r3.s64 = ctx.r11.s64 + 20404;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// bl 0x820fe868
	ctx.lr = 0x821130E8;
	sub_820FE868(ctx, base);
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

__attribute__((alias("__imp__sub_82113100"))) PPC_WEAK_FUNC(sub_82113100);
PPC_FUNC_IMPL(__imp__sub_82113100) {
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
	// lwz r11,12140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12140);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// stw r11,12140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12140, ctx.r11.u32);
	// ble cr6,0x82113144
	if (!ctx.cr6.gt) goto loc_82113144;
	// lwz r9,12136(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12136);
	// rlwinm r10,r4,14,0,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 14) & 0xFFFFC000;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r5,r11,14,0,17
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0xFFFFC000;
	// addi r4,r3,16384
	ctx.r4.s64 = ctx.r3.s64 + 16384;
	// bl 0x8259dd00
	ctx.lr = 0x82113144;
	sub_8259DD00(ctx, base);
loc_82113144:
	// lwz r10,12140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12140);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82113174
	if (!ctx.cr6.gt) goto loc_82113174;
	// addi r10,r31,12056
	ctx.r10.s64 = ctx.r31.s64 + 12056;
loc_82113158:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r8,12140(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12140);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82113158
	if (ctx.cr6.lt) goto loc_82113158;
loc_82113174:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82112610
	ctx.lr = 0x8211317C;
	sub_82112610(ctx, base);
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

__attribute__((alias("__imp__sub_82113190"))) PPC_WEAK_FUNC(sub_82113190);
PPC_FUNC_IMPL(__imp__sub_82113190) {
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
	// lwz r11,11480(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11480);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x821131d0
	if (!ctx.cr6.eq) goto loc_821131D0;
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821131d0
	if (ctx.cr6.eq) goto loc_821131D0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,13440(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13440);
	// bl 0x82113100
	ctx.lr = 0x821131D0;
	sub_82113100(ctx, base);
loc_821131D0:
	// lwz r9,12144(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12144);
	// cmpwi cr6,r9,7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 7, ctx.xer);
	// bne cr6,0x821131f4
	if (!ctx.cr6.eq) goto loc_821131F4;
	// clrlwi r8,r30,24
	ctx.r8.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821131f4
	if (ctx.cr6.eq) goto loc_821131F4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82113070
	ctx.lr = 0x821131F0;
	sub_82113070(ctx, base);
	// b 0x82113208
	goto loc_82113208;
loc_821131F4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82109240
	ctx.lr = 0x82113200;
	sub_82109240(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// stb r7,13448(r31)
	PPC_STORE_U8(ctx.r31.u32 + 13448, ctx.r7.u8);
loc_82113208:
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

__attribute__((alias("__imp__sub_82113220"))) PPC_WEAK_FUNC(sub_82113220);
PPC_FUNC_IMPL(__imp__sub_82113220) {
	PPC_FUNC_PROLOGUE();
	// lis r10,7
	ctx.r10.s64 = 458752;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// ori r9,r10,14715
	ctx.r9.u64 = ctx.r10.u64 | 14715;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// lis r7,-32239
	ctx.r7.s64 = -2112815104;
	// addi r4,r8,948
	ctx.r4.s64 = ctx.r8.s64 + 948;
	// addi r7,r7,-27016
	ctx.r7.s64 = ctx.r7.s64 + -27016;
	// lbzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// addis r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 458752;
	// lis r9,-32090
	ctx.r9.s64 = -2103050240;
	// addi r6,r11,14538
	ctx.r6.s64 = ctx.r11.s64 + 14538;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r9,r9,26752
	ctx.r9.s64 = ctx.r9.s64 + 26752;
	// addi r5,r11,13264
	ctx.r5.s64 = ctx.r11.s64 + 13264;
	// addis r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 65536;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// addi r3,r11,25864
	ctx.r3.s64 = ctx.r11.s64 + 25864;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 + ctx.r6.u64;
	// b 0x82229a40
	sub_82229A40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8211327C"))) PPC_WEAK_FUNC(sub_8211327C);
PPC_FUNC_IMPL(__imp__sub_8211327C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82113280"))) PPC_WEAK_FUNC(sub_82113280);
PPC_FUNC_IMPL(__imp__sub_82113280) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82113288;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821132c4
	if (ctx.cr6.eq) goto loc_821132C4;
	// lwz r11,1092(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1092);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,12396
	ctx.r4.s64 = ctx.r11.s64 + 12396;
	// bl 0x82109690
	ctx.lr = 0x821132A8;
	sub_82109690(ctx, base);
	// lwz r4,944(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 944);
	// lwz r11,940(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 940);
	// li r3,0
	ctx.r3.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821132BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_821132C4:
	// lis r10,7
	ctx.r10.s64 = 458752;
	// lwz r29,1092(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1092);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// ori r9,r10,14715
	ctx.r9.u64 = ctx.r10.u64 | 14715;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// lis r8,-32239
	ctx.r8.s64 = -2112815104;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,12544
	ctx.r6.s64 = 12544;
	// addi r4,r31,948
	ctx.r4.s64 = ctx.r31.s64 + 948;
	// lbzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// addis r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 458752;
	// extsb r5,r10
	ctx.r5.s64 = ctx.r10.s8;
	// lis r10,-32090
	ctx.r10.s64 = -2103050240;
	// addi r30,r11,14528
	ctx.r30.s64 = ctx.r11.s64 + 14528;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r10,r10,26752
	ctx.r10.s64 = ctx.r10.s64 + 26752;
	// addi r9,r11,13280
	ctx.r9.s64 = ctx.r11.s64 + 13280;
	// addis r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 65536;
	// addi r10,r8,-26416
	ctx.r10.s64 = ctx.r8.s64 + -26416;
	// addi r3,r11,25864
	ctx.r3.s64 = ctx.r11.s64 + 25864;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r31,1076
	ctx.r8.s64 = ctx.r31.s64 + 1076;
	// add r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 + ctx.r11.u64;
	// rlwinm r11,r5,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// ldx r5,r11,r30
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r30.u32);
	// std r5,12432(r29)
	PPC_STORE_U64(ctx.r29.u32 + 12432, ctx.r5.u64);
	// lwz r5,1092(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1092);
	// bl 0x82229890
	ctx.lr = 0x82113338;
	sub_82229890(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82113340"))) PPC_WEAK_FUNC(sub_82113340);
PPC_FUNC_IMPL(__imp__sub_82113340) {
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
	// bl 0x821099b0
	ctx.lr = 0x82113358;
	sub_821099B0(ctx, base);
	// lis r10,-19946
	ctx.r10.s64 = -1307181056;
	// subfic r11,r31,-4
	ctx.xer.ca = ctx.r31.u32 <= 4294967292;
	ctx.r11.s64 = -4 - ctx.r31.s64;
	// ori r9,r10,17097
	ctx.r9.u64 = ctx.r10.u64 | 17097;
	// lbz r10,2(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// add r8,r3,r11
	ctx.r8.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r6,r10,255
	ctx.r6.s64 = ctx.r10.s64 + 255;
	// mulhwu r7,r8,r9
	ctx.r7.u64 = (uint64_t(ctx.r8.u32) * uint64_t(ctx.r9.u32)) >> 32;
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// rlwinm r11,r7,25,7,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 25) & 0x1FFFFFF;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// stb r10,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r10.u8);
	// bge cr6,0x821133c8
	if (!ctx.cr6.lt) goto loc_821133C8;
	// clrlwi r4,r5,24
	ctx.r4.u64 = ctx.r5.u32 & 0xFF;
	// mulli r10,r11,184
	ctx.r10.s64 = ctx.r11.s64 * 184;
	// subf r3,r11,r4
	ctx.r3.s64 = ctx.r4.s64 - ctx.r11.s64;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// mulli r5,r3,184
	ctx.r5.s64 = ctx.r3.s64 * 184;
	// addi r4,r10,188
	ctx.r4.s64 = ctx.r10.s64 + 188;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// bl 0x8259dd00
	ctx.lr = 0x821133AC;
	sub_8259DD00(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r11.u8);
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
loc_821133C8:
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r10.u8);
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

__attribute__((alias("__imp__sub_821133E4"))) PPC_WEAK_FUNC(sub_821133E4);
PPC_FUNC_IMPL(__imp__sub_821133E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821133E8"))) PPC_WEAK_FUNC(sub_821133E8);
PPC_FUNC_IMPL(__imp__sub_821133E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x821133F0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,31
	ctx.r8.s64 = 31;
	// addi r28,r29,24
	ctx.r28.s64 = ctx.r29.s64 + 24;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// addi r10,r29,28
	ctx.r10.s64 = ctx.r29.s64 + 28;
	// li r9,23
	ctx.r9.s64 = 23;
	// stw r8,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r8.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8211341C:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8211341c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8211341C;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82113448
	if (ctx.cr6.eq) goto loc_82113448;
	// addi r31,r29,120
	ctx.r31.s64 = ctx.r29.s64 + 120;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ffa90
	ctx.lr = 0x82113444;
	sub_820FFA90(ctx, base);
	// b 0x82113480
	goto loc_82113480;
loc_82113448:
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r30,r11,13096
	ctx.r30.s64 = ctx.r11.s64 + 13096;
	// lwz r3,6936(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6936);
	// bl 0x82100468
	ctx.lr = 0x82113458;
	sub_82100468(ctx, base);
	// addi r31,r29,120
	ctx.r31.s64 = ctx.r29.s64 + 120;
	// lwz r4,6936(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6936);
	// li r5,6928
	ctx.r5.s64 = 6928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259d3a0
	ctx.lr = 0x8211346C;
	sub_8259D3A0(ctx, base);
	// lfs f0,16(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fsubs f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// bl 0x820fb590
	ctx.lr = 0x82113480;
	sub_820FB590(ctx, base);
loc_82113480:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82113494
	if (ctx.cr6.eq) goto loc_82113494;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820fb5a0
	ctx.lr = 0x82113494;
	sub_820FB5A0(ctx, base);
loc_82113494:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820fb540
	ctx.lr = 0x8211349C;
	sub_820FB540(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,439
	ctx.r10.s64 = 439;
	// addi r11,r28,8
	ctx.r11.s64 = ctx.r28.s64 + 8;
loc_821134A8:
	// lwz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lwz r7,-4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// bne cr6,0x821134a8
	if (!ctx.cr6.eq) goto loc_821134A8;
	// stw r9,7048(r29)
	PPC_STORE_U32(ctx.r29.u32 + 7048, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821134E4"))) PPC_WEAK_FUNC(sub_821134E4);
PPC_FUNC_IMPL(__imp__sub_821134E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821134E8"))) PPC_WEAK_FUNC(sub_821134E8);
PPC_FUNC_IMPL(__imp__sub_821134E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x821134F0;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r30,r29,28
	ctx.r30.s64 = ctx.r29.s64 + 28;
	// addi r31,r11,26080
	ctx.r31.s64 = ctx.r11.s64 + 26080;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r31,75
	ctx.r3.s64 = ctx.r31.s64 + 75;
	// addi r4,r30,75
	ctx.r4.s64 = ctx.r30.s64 + 75;
	// lbz r11,58(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 58);
	// stb r11,58(r31)
	PPC_STORE_U8(ctx.r31.u32 + 58, ctx.r11.u8);
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// lwz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// lbz r11,72(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 72);
	// stb r11,72(r31)
	PPC_STORE_U8(ctx.r31.u32 + 72, ctx.r11.u8);
	// bl 0x8259d2a0
	ctx.lr = 0x82113538;
	sub_8259D2A0(ctx, base);
	// lbz r11,73(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 73);
	// stb r11,73(r31)
	PPC_STORE_U8(ctx.r31.u32 + 73, ctx.r11.u8);
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r28,r11,-18560
	ctx.r28.s64 = ctx.r11.s64 + -18560;
	// lhz r11,41(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 41);
	// rlwinm r10,r11,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stb r10,41(r31)
	PPC_STORE_U8(ctx.r31.u32 + 41, ctx.r10.u8);
	// stb r11,42(r31)
	PPC_STORE_U8(ctx.r31.u32 + 42, ctx.r11.u8);
	// lbz r11,54(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 54);
	// stb r11,54(r31)
	PPC_STORE_U8(ctx.r31.u32 + 54, ctx.r11.u8);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,55(r31)
	PPC_STORE_U8(ctx.r31.u32 + 55, ctx.r11.u8);
	// lbz r11,47(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 47);
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// stb r11,47(r31)
	PPC_STORE_U8(ctx.r31.u32 + 47, ctx.r11.u8);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfs f31,-1576(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1576);
	ctx.f31.f64 = double(temp.f32);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f12,f31
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// bl 0x822aea28
	ctx.lr = 0x82113598;
	sub_822AEA28(ctx, base);
	// lbz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 48);
	// extsb r6,r11
	ctx.r6.s64 = ctx.r11.s8;
	// stb r11,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r11.u8);
	// addis r11,r28,9
	ctx.r11.s64 = ctx.r28.s64 + 589824;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// addi r3,r11,-17140
	ctx.r3.s64 = ctx.r11.s64 + -17140;
	// lfd f11,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmuls f1,f9,f31
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// bl 0x822ad7f0
	ctx.lr = 0x821135C4;
	sub_822AD7F0(ctx, base);
	// lbz r5,46(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 46);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// extsb r4,r5
	ctx.r4.s64 = ctx.r5.s8;
	// stb r4,46(r31)
	PPC_STORE_U8(ctx.r31.u32 + 46, ctx.r4.u8);
	// bl 0x8212bb98
	ctx.lr = 0x821135D8;
	sub_8212BB98(ctx, base);
	// lhz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 56);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// sth r11,56(r31)
	PPC_STORE_U16(ctx.r31.u32 + 56, ctx.r11.u16);
	// lbz r11,50(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 50);
	// stb r11,50(r31)
	PPC_STORE_U8(ctx.r31.u32 + 50, ctx.r11.u8);
	// lbz r11,51(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 51);
	// stb r11,51(r31)
	PPC_STORE_U8(ctx.r31.u32 + 51, ctx.r11.u8);
	// li r11,41
	ctx.r11.s64 = 41;
	// lbz r10,53(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 53);
	// stb r10,53(r31)
	PPC_STORE_U8(ctx.r31.u32 + 53, ctx.r10.u8);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8211360C:
	// lbz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stb r3,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r3.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x8211360c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8211360C;
	// addis r11,r28,9
	ctx.r11.s64 = ctx.r28.s64 + 589824;
	// addi r3,r11,-17140
	ctx.r3.s64 = ctx.r11.s64 + -17140;
	// bl 0x822bf618
	ctx.lr = 0x8211362C;
	sub_822BF618(ctx, base);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r11,r11,13096
	ctx.r11.s64 = ctx.r11.s64 + 13096;
	// lwz r28,6936(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6936);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821016c8
	ctx.lr = 0x82113640;
	sub_821016C8(ctx, base);
	// lbz r11,59(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 59);
	// addi r27,r29,120
	ctx.r27.s64 = ctx.r29.s64 + 120;
	// li r5,6928
	ctx.r5.s64 = 6928;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stb r11,59(r31)
	PPC_STORE_U8(ctx.r31.u32 + 59, ctx.r11.u8);
	// lbz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 60);
	// stb r11,60(r31)
	PPC_STORE_U8(ctx.r31.u32 + 60, ctx.r11.u8);
	// lbz r11,61(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 61);
	// stb r11,61(r31)
	PPC_STORE_U8(ctx.r31.u32 + 61, ctx.r11.u8);
	// lbz r11,62(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 62);
	// stb r11,62(r31)
	PPC_STORE_U8(ctx.r31.u32 + 62, ctx.r11.u8);
	// lbz r11,63(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 63);
	// stb r11,63(r31)
	PPC_STORE_U8(ctx.r31.u32 + 63, ctx.r11.u8);
	// bl 0x8259d3a0
	ctx.lr = 0x8211367C;
	sub_8259D3A0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82101680
	ctx.lr = 0x82113684;
	sub_82101680(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lbz r10,7044(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 7044);
	// lfs f8,16(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// lwz r9,7048(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 7048);
	// stfs f8,12(r29)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r29.u32 + 12, temp.u32);
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// stb r10,8(r29)
	PPC_STORE_U8(ctx.r29.u32 + 8, ctx.r10.u8);
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821136B0"))) PPC_WEAK_FUNC(sub_821136B0);
PPC_FUNC_IMPL(__imp__sub_821136B0) {
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
	// cmpwi cr6,r11,31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31, ctx.xer);
	// bne cr6,0x82113744
	if (!ctx.cr6.eq) goto loc_82113744;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// li r10,439
	ctx.r10.s64 = 439;
loc_821136DC:
	// lwz r7,-4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lwz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// bne cr6,0x821136dc
	if (!ctx.cr6.eq) goto loc_821136DC;
	// lwz r10,7024(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7024);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82113744
	if (!ctx.cr6.eq) goto loc_82113744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8210ad08
	ctx.lr = 0x82113720;
	sub_8210AD08(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82113744
	if (ctx.cr6.eq) goto loc_82113744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8210adc8
	ctx.lr = 0x82113734;
	sub_8210ADC8(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82113748
	if (!ctx.cr6.eq) goto loc_82113748;
loc_82113744:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82113748:
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

__attribute__((alias("__imp__sub_8211375C"))) PPC_WEAK_FUNC(sub_8211375C);
PPC_FUNC_IMPL(__imp__sub_8211375C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82113760"))) PPC_WEAK_FUNC(sub_82113760);
PPC_FUNC_IMPL(__imp__sub_82113760) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825c6b6c
	ctx.lr = 0x8211377C;
	__imp__XGetVideoMode(ctx, base);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// li r9,1
	ctx.r9.s64 = 1;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x821137ec
	if (!ctx.cr6.eq) goto loc_821137EC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,-1660(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1660);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f13,11648(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11648);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x821137cc
	if (ctx.cr6.gt) goto loc_821137CC;
	// bso cr6,0x821137cc
	if (ctx.cr6.so) goto loc_821137CC;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f13,-4824(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4824);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x821137cc
	if (ctx.cr6.lt) goto loc_821137CC;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// bns cr6,0x821137d0
	if (!ctx.cr6.so) goto loc_821137D0;
loc_821137CC:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_821137D0:
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821137f0
	if (ctx.cr6.eq) goto loc_821137F0;
	// lis r8,-32126
	ctx.r8.s64 = -2105409536;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// stb r10,6036(r8)
	PPC_STORE_U8(ctx.r8.u32 + 6036, ctx.r10.u8);
	// b 0x821137f8
	goto loc_821137F8;
loc_821137EC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821137F0:
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// stb r11,6036(r10)
	PPC_STORE_U8(ctx.r10.u32 + 6036, ctx.r11.u8);
loc_821137F8:
	// lis r8,-32126
	ctx.r8.s64 = -2105409536;
	// li r7,90
	ctx.r7.s64 = 90;
	// li r6,65
	ctx.r6.s64 = 65;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// stb r11,6037(r8)
	PPC_STORE_U8(ctx.r8.u32 + 6037, ctx.r11.u8);
	// stb r7,47(r31)
	PPC_STORE_U8(ctx.r31.u32 + 47, ctx.r7.u8);
	// stb r6,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r6.u8);
	// stb r7,49(r31)
	PPC_STORE_U8(ctx.r31.u32 + 49, ctx.r7.u8);
	// stb r11,43(r31)
	PPC_STORE_U8(ctx.r31.u32 + 43, ctx.r11.u8);
	// stb r11,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r11.u8);
	// stb r11,46(r31)
	PPC_STORE_U8(ctx.r31.u32 + 46, ctx.r11.u8);
	// stb r11,50(r31)
	PPC_STORE_U8(ctx.r31.u32 + 50, ctx.r11.u8);
	// stb r11,51(r31)
	PPC_STORE_U8(ctx.r31.u32 + 51, ctx.r11.u8);
	// stb r9,52(r31)
	PPC_STORE_U8(ctx.r31.u32 + 52, ctx.r9.u8);
	// stb r9,53(r31)
	PPC_STORE_U8(ctx.r31.u32 + 53, ctx.r9.u8);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// stb r9,72(r31)
	PPC_STORE_U8(ctx.r31.u32 + 72, ctx.r9.u8);
	// stb r11,73(r31)
	PPC_STORE_U8(ctx.r31.u32 + 73, ctx.r11.u8);
	// stb r9,54(r31)
	PPC_STORE_U8(ctx.r31.u32 + 54, ctx.r9.u8);
	// stb r9,55(r31)
	PPC_STORE_U8(ctx.r31.u32 + 55, ctx.r9.u8);
	// stb r9,56(r31)
	PPC_STORE_U8(ctx.r31.u32 + 56, ctx.r9.u8);
	// stb r9,57(r31)
	PPC_STORE_U8(ctx.r31.u32 + 57, ctx.r9.u8);
	// stb r11,58(r31)
	PPC_STORE_U8(ctx.r31.u32 + 58, ctx.r11.u8);
	// lwz r8,23988(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23988);
	// lwz r7,23988(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23988);
	// addi r5,r8,1
	ctx.r5.s64 = ctx.r8.s64 + 1;
	// addi r8,r7,5
	ctx.r8.s64 = ctx.r7.s64 + 5;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r3,r8,1
	ctx.r3.s64 = ctx.r8.s64 + 1;
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// beq cr6,0x821138a8
	if (ctx.cr6.eq) goto loc_821138A8;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_821138A8:
	// clrlwi r4,r8,24
	ctx.r4.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821138bc
	if (ctx.cr6.eq) goto loc_821138BC;
	// li r10,2
	ctx.r10.s64 = 2;
	// b 0x82113a1c
	goto loc_82113A1C;
loc_821138BC:
	// lwz r8,23988(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23988);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r8,1
	ctx.r7.s64 = ctx.r8.s64 + 1;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r5,r6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// beq cr6,0x82113900
	if (ctx.cr6.eq) goto loc_82113900;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_82113900:
	// clrlwi r3,r8,24
	ctx.r3.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82113914
	if (ctx.cr6.eq) goto loc_82113914;
	// li r10,7
	ctx.r10.s64 = 7;
	// b 0x82113a1c
	goto loc_82113A1C;
loc_82113914:
	// lwz r8,23988(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23988);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r6,r8,1
	ctx.r6.s64 = ctx.r8.s64 + 1;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r5,r8,1
	ctx.r5.s64 = ctx.r8.s64 + 1;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r3,r4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x82113958
	if (ctx.cr6.eq) goto loc_82113958;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_82113958:
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8211396c
	if (ctx.cr6.eq) goto loc_8211396C;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// b 0x82113a1c
	goto loc_82113A1C;
loc_8211396C:
	// lwz r8,23988(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23988);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r5,r8,1
	ctx.r5.s64 = ctx.r8.s64 + 1;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r4,r8,1
	ctx.r4.s64 = ctx.r8.s64 + 1;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r8,r3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r3.s32, ctx.xer);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// beq cr6,0x821139b0
	if (ctx.cr6.eq) goto loc_821139B0;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_821139B0:
	// clrlwi r6,r8,24
	ctx.r6.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x821139c8
	if (ctx.cr6.eq) goto loc_821139C8;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// stw r11,23500(r10)
	PPC_STORE_U32(ctx.r10.u32 + 23500, ctx.r11.u32);
	// b 0x82113a24
	goto loc_82113A24;
loc_821139C8:
	// lwz r10,23988(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23988);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// beq cr6,0x82113a0c
	if (ctx.cr6.eq) goto loc_82113A0C;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82113A0C:
	// clrlwi r6,r10,24
	ctx.r6.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82113a24
	if (ctx.cr6.eq) goto loc_82113A24;
	// li r10,4
	ctx.r10.s64 = 4;
loc_82113A1C:
	// lis r8,-32126
	ctx.r8.s64 = -2105409536;
	// stw r10,23500(r8)
	PPC_STORE_U32(ctx.r8.u32 + 23500, ctx.r10.u32);
loc_82113A24:
	// lis r8,257
	ctx.r8.s64 = 16842752;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// ori r8,r8,257
	ctx.r8.u64 = ctx.r8.u64 | 257;
	// li r7,10
	ctx.r7.s64 = 10;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_82113A38:
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82113a38
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82113A38;
	// stb r8,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
	// stb r9,41(r31)
	PPC_STORE_U8(ctx.r31.u32 + 41, ctx.r9.u8);
	// stb r9,42(r31)
	PPC_STORE_U8(ctx.r31.u32 + 42, ctx.r9.u8);
	// stb r11,59(r31)
	PPC_STORE_U8(ctx.r31.u32 + 59, ctx.r11.u8);
	// stb r11,60(r31)
	PPC_STORE_U8(ctx.r31.u32 + 60, ctx.r11.u8);
	// stb r11,61(r31)
	PPC_STORE_U8(ctx.r31.u32 + 61, ctx.r11.u8);
	// stb r9,62(r31)
	PPC_STORE_U8(ctx.r31.u32 + 62, ctx.r9.u8);
	// stb r11,63(r31)
	PPC_STORE_U8(ctx.r31.u32 + 63, ctx.r11.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82113A78"))) PPC_WEAK_FUNC(sub_82113A78);
PPC_FUNC_IMPL(__imp__sub_82113A78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82113a98
	if (!ctx.cr6.eq) goto loc_82113A98;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82113A98:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// beq cr6,0x82113ac0
	if (ctx.cr6.eq) goto loc_82113AC0;
	// lis r9,3
	ctx.r9.s64 = 196608;
	// li r10,9
	ctx.r10.s64 = 9;
	// ori r8,r9,476
	ctx.r8.u64 = ctx.r9.u64 | 476;
	// stwx r10,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u32);
	// b 0x82113ad0
	goto loc_82113AD0;
loc_82113AC0:
	// lis r7,3
	ctx.r7.s64 = 196608;
	// li r10,12
	ctx.r10.s64 = 12;
	// ori r6,r7,476
	ctx.r6.u64 = ctx.r7.u64 | 476;
	// stwx r10,r11,r6
	PPC_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r10.u32);
loc_82113AD0:
	// lbz r5,57(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 57);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82113ae4
	if (!ctx.cr6.eq) goto loc_82113AE4;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82113AE4:
	// clrlwi r4,r10,24
	ctx.r4.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82113b04
	if (ctx.cr6.eq) goto loc_82113B04;
	// lis r9,3
	ctx.r9.s64 = 196608;
	// li r10,9
	ctx.r10.s64 = 9;
	// ori r8,r9,12396
	ctx.r8.u64 = ctx.r9.u64 | 12396;
	// stwx r10,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u32);
	// b 0x82113b14
	goto loc_82113B14;
loc_82113B04:
	// lis r7,3
	ctx.r7.s64 = 196608;
	// li r10,12
	ctx.r10.s64 = 12;
	// ori r6,r7,12396
	ctx.r6.u64 = ctx.r7.u64 | 12396;
	// stwx r10,r11,r6
	PPC_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r10.u32);
loc_82113B14:
	// lbz r4,43(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 43);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lbz r5,44(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 44);
	// extsb r8,r4
	ctx.r8.s64 = ctx.r4.s8;
	// extsb r9,r5
	ctx.r9.s64 = ctx.r5.s8;
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f12,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,17848(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17848);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// frsp f10,f13
	ctx.f10.f64 = double(float(ctx.f13.f64));
	// lfs f13,17844(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17844);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32110
	ctx.r11.s64 = -2104360960;
	// addi r11,r11,12656
	ctx.r11.s64 = ctx.r11.s64 + 12656;
	// fmuls f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// stfs f13,40(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// fmuls f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f0,44(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// bl 0x8210ae30
	ctx.lr = 0x82113B70;
	sub_8210AE30(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82113B80"))) PPC_WEAK_FUNC(sub_82113B80);
PPC_FUNC_IMPL(__imp__sub_82113B80) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stb r10,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r10.u8);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82113BA4"))) PPC_WEAK_FUNC(sub_82113BA4);
PPC_FUNC_IMPL(__imp__sub_82113BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82113BA8"))) PPC_WEAK_FUNC(sub_82113BA8);
PPC_FUNC_IMPL(__imp__sub_82113BA8) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r10,55
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 55, ctx.xer);
	// bgt cr6,0x82113fb0
	if (ctx.cr6.gt) goto loc_82113FB0;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r31,r11,10416
	ctx.r31.s64 = ctx.r11.s64 + 10416;
	// lis r12,-32239
	ctx.r12.s64 = -2112815104;
	// addi r12,r12,15344
	ctx.r12.s64 = ctx.r12.s64 + 15344;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_82113CD0;
	case 1:
		goto loc_82113CD0;
	case 2:
		goto loc_82113CF0;
	case 3:
		goto loc_82113D78;
	case 4:
		goto loc_82113DA0;
	case 5:
		goto loc_82113DBC;
	case 6:
		goto loc_82113DE0;
	case 7:
		goto loc_82113DE8;
	case 8:
		goto loc_82113E38;
	case 9:
		goto loc_82113FB0;
	case 10:
		goto loc_82113FB0;
	case 11:
		goto loc_82113FB0;
	case 12:
		goto loc_82113FB0;
	case 13:
		goto loc_82113FB0;
	case 14:
		goto loc_82113FB0;
	case 15:
		goto loc_82113FB0;
	case 16:
		goto loc_82113FB0;
	case 17:
		goto loc_82113FB0;
	case 18:
		goto loc_82113FB0;
	case 19:
		goto loc_82113FB0;
	case 20:
		goto loc_82113FB0;
	case 21:
		goto loc_82113FB0;
	case 22:
		goto loc_82113FB0;
	case 23:
		goto loc_82113FB0;
	case 24:
		goto loc_82113FB0;
	case 25:
		goto loc_82113FB0;
	case 26:
		goto loc_82113FB0;
	case 27:
		goto loc_82113DE8;
	case 28:
		goto loc_82113FB0;
	case 29:
		goto loc_82113FB0;
	case 30:
		goto loc_82113FB0;
	case 31:
		goto loc_82113FB0;
	case 32:
		goto loc_82113FB0;
	case 33:
		goto loc_82113FB0;
	case 34:
		goto loc_82113FB0;
	case 35:
		goto loc_82113FB0;
	case 36:
		goto loc_82113FB0;
	case 37:
		goto loc_82113FB0;
	case 38:
		goto loc_82113FB0;
	case 39:
		goto loc_82113FB0;
	case 40:
		goto loc_82113FB0;
	case 41:
		goto loc_82113FB0;
	case 42:
		goto loc_82113FB0;
	case 43:
		goto loc_82113FB0;
	case 44:
		goto loc_82113FB0;
	case 45:
		goto loc_82113FB0;
	case 46:
		goto loc_82113FB0;
	case 47:
		goto loc_82113FB0;
	case 48:
		goto loc_82113FB0;
	case 49:
		goto loc_82113FB0;
	case 50:
		goto loc_82113FB0;
	case 51:
		goto loc_82113FB0;
	case 52:
		goto loc_82113FB0;
	case 53:
		goto loc_82113FB0;
	case 54:
		goto loc_82113FB0;
	case 55:
		goto loc_82113CD0;
	default:
		__builtin_unreachable();
	}
	// lwz r16,15568(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 15568);
	// lwz r16,15568(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 15568);
	// lwz r16,15600(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 15600);
	// lwz r16,15736(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 15736);
	// lwz r16,15776(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 15776);
	// lwz r16,15804(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 15804);
	// lwz r16,15840(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 15840);
	// lwz r16,15848(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 15848);
	// lwz r16,15928(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 15928);
	// lwz r16,16304(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 16304);
	// lwz r16,16304(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 16304);
	// lwz r16,16304(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 16304);
	// lwz r16,16304(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 16304);
	// lwz r16,16304(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 16304);
	// lwz r16,16304(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 16304);
	// lwz r16,16304(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 16304);
	// lwz r16,16304(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 16304);
	// lwz r16,16304(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 16304);
	// lwz r16,16304(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 16304);
	// lwz r16,16304(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 16304);
	// lwz r16,16304(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 16304);
	// lwz r16,16304(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 16304);
	// lwz r16,16304(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 16304);
	// lwz r16,16304(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 16304);
	// lwz r16,16304(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 16304);
	// lwz r16,16304(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 16304);
	// lwz r16,16304(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 16304);
	// lwz r16,15848(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 15848);
	// lwz r16,16304(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 16304);
	// lwz r16,16304(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 16304);
	// lwz r16,16304(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 16304);
	// lwz r16,16304(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 16304);
	// lwz r16,16304(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 16304);
	// lwz r16,16304(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 16304);
	// lwz r16,16304(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 16304);
	// lwz r16,16304(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 16304);
	// lwz r16,16304(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 16304);
	// lwz r16,16304(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 16304);
	// lwz r16,16304(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 16304);
	// lwz r16,16304(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 16304);
	// lwz r16,16304(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 16304);
	// lwz r16,16304(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 16304);
	// lwz r16,16304(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 16304);
	// lwz r16,16304(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 16304);
	// lwz r16,16304(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 16304);
	// lwz r16,16304(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 16304);
	// lwz r16,16304(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 16304);
	// lwz r16,16304(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 16304);
	// lwz r16,16304(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 16304);
	// lwz r16,16304(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 16304);
	// lwz r16,16304(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 16304);
	// lwz r16,16304(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 16304);
	// lwz r16,16304(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 16304);
	// lwz r16,16304(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 16304);
	// lwz r16,16304(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 16304);
	// lwz r16,15568(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 15568);
loc_82113CD0:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r9,3
	ctx.r9.s64 = 196608;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r8,r9,51969
	ctx.r8.u64 = ctx.r9.u64 | 51969;
	// li r7,3
	ctx.r7.s64 = 3;
	// stbx r10,r11,r8
	PPC_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u8);
	// stw r7,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r7.u32);
loc_82113CF0:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r11,r11,11600
	ctx.r11.s64 = ctx.r11.s64 + 11600;
	// lwz r11,324(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 324);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// addi r11,r11,-21272
	ctx.r11.s64 = ctx.r11.s64 + -21272;
	// lwz r10,3896(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3896);
	// beq cr6,0x82113d34
	if (ctx.cr6.eq) goto loc_82113D34;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82113d20
	if (!ctx.cr6.gt) goto loc_82113D20;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82113d5c
	goto loc_82113D5C;
loc_82113D20:
	// lwz r10,3892(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3892);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82113d58
	if (ctx.cr6.eq) goto loc_82113D58;
	// li r10,2
	ctx.r10.s64 = 2;
	// b 0x82113d54
	goto loc_82113D54;
loc_82113D34:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82113d44
	if (!ctx.cr6.gt) goto loc_82113D44;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82113d5c
	goto loc_82113D5C;
loc_82113D44:
	// lwz r10,3892(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3892);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x82113d58
	if (ctx.cr6.eq) goto loc_82113D58;
	// li r10,3
	ctx.r10.s64 = 3;
loc_82113D54:
	// stw r10,3892(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3892, ctx.r10.u32);
loc_82113D58:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82113D5C:
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82113d70
	if (!ctx.cr6.eq) goto loc_82113D70;
loc_82113D68:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82113fb4
	goto loc_82113FB4;
loc_82113D70:
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r5,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r5.u32);
loc_82113D78:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r3,r11,14528
	ctx.r3.s64 = ctx.r11.s64 + 14528;
	// bl 0x821f5820
	ctx.lr = 0x82113D84;
	sub_821F5820(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82113d68
	if (ctx.cr6.eq) goto loc_82113D68;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82201110
	ctx.lr = 0x82113D98;
	sub_82201110(ctx, base);
	// li r3,5
	ctx.r3.s64 = 5;
	// stw r3,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r3.u32);
loc_82113DA0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82200be0
	ctx.lr = 0x82113DA8;
	sub_82200BE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82113d68
	if (ctx.cr6.eq) goto loc_82113D68;
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r10,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r10.u32);
loc_82113DBC:
	// li r5,27
	ctx.r5.s64 = 27;
	// li r4,27
	ctx.r4.s64 = 27;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82200f80
	ctx.lr = 0x82113DCC;
	sub_82200F80(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82113d68
	if (ctx.cr6.eq) goto loc_82113D68;
	// li r8,7
	ctx.r8.s64 = 7;
	// stw r8,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r8.u32);
loc_82113DE0:
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r7,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r7.u32);
loc_82113DE8:
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// lis r6,7
	ctx.r6.s64 = 458752;
	// addi r11,r11,-18560
	ctx.r11.s64 = ctx.r11.s64 + -18560;
	// ori r5,r6,57712
	ctx.r5.u64 = ctx.r6.u64 | 57712;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwzx r10,r11,r5
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// addis r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 524288;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,-7824
	ctx.r3.s64 = ctx.r11.s64 + -7824;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82113E1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821042b0
	ctx.lr = 0x82113E24;
	sub_821042B0(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82113d68
	if (ctx.cr6.eq) goto loc_82113D68;
	// li r8,9
	ctx.r8.s64 = 9;
	// stw r8,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r8.u32);
loc_82113E38:
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// addi r31,r11,26080
	ctx.r31.s64 = ctx.r11.s64 + 26080;
	// ori r6,r7,54056
	ctx.r6.u64 = ctx.r7.u64 | 54056;
	// addi r3,r31,2585
	ctx.r3.s64 = ctx.r31.s64 + 2585;
	// addi r9,r31,1144
	ctx.r9.s64 = ctx.r31.s64 + 1144;
	// lfs f0,128(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// lwzx r11,r31,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// lis r6,2
	ctx.r6.s64 = 131072;
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r5,r6,54060
	ctx.r5.u64 = ctx.r6.u64 | 54060;
	// ori r10,r11,54092
	ctx.r10.u64 = ctx.r11.u64 | 54092;
	// lbzx r8,r4,r3
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r3.u32);
	// addi r3,r31,2585
	ctx.r3.s64 = ctx.r31.s64 + 2585;
	// extsb r4,r8
	ctx.r4.s64 = ctx.r8.s8;
	// lwzx r11,r31,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// stfsx f0,r31,r5
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, temp.u32);
	// mulli r10,r4,360
	ctx.r10.s64 = ctx.r4.s64 * 360;
	// extsb r7,r11
	ctx.r7.s64 = ctx.r11.s8;
	// lis r11,7
	ctx.r11.s64 = 458752;
	// lis r5,2
	ctx.r5.s64 = 131072;
	// ori r8,r11,16271
	ctx.r8.u64 = ctx.r11.u64 | 16271;
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// ori r4,r5,54032
	ctx.r4.u64 = ctx.r5.u64 | 54032;
	// lis r5,2
	ctx.r5.s64 = 131072;
	// lbzx r6,r31,r8
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r8.u32);
	// lis r8,2
	ctx.r8.s64 = 131072;
	// stwx r11,r31,r4
	PPC_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r11.u32);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lbzx r3,r7,r3
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r3.u32);
	// ori r7,r8,54096
	ctx.r7.u64 = ctx.r8.u64 | 54096;
	// ori r10,r11,54060
	ctx.r10.u64 = ctx.r11.u64 | 54060;
	// extsb r9,r3
	ctx.r9.s64 = ctx.r3.s8;
	// ori r4,r5,54068
	ctx.r4.u64 = ctx.r5.u64 | 54068;
	// mulli r11,r9,360
	ctx.r11.s64 = ctx.r9.s64 * 360;
	// stfsx f0,r31,r10
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, temp.u32);
	// stfsx f0,r31,r7
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, temp.u32);
	// addi r10,r31,1144
	ctx.r10.s64 = ctx.r31.s64 + 1144;
	// lis r3,2
	ctx.r3.s64 = 131072;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ori r10,r3,54064
	ctx.r10.u64 = ctx.r3.u64 | 54064;
	// ori r8,r9,54100
	ctx.r8.u64 = ctx.r9.u64 | 54100;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// stwx r11,r31,r4
	PPC_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stbx r11,r31,r10
	PPC_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u8);
	// stbx r11,r31,r8
	PPC_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r11.u8);
	// beq cr6,0x82113f24
	if (ctx.cr6.eq) goto loc_82113F24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82104148
	ctx.lr = 0x82113F08;
	sub_82104148(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82113f24
	if (ctx.cr6.eq) goto loc_82113F24;
	// lis r11,-32110
	ctx.r11.s64 = -2104360960;
	// addi r3,r11,12656
	ctx.r3.s64 = ctx.r11.s64 + 12656;
	// bl 0x82173a08
	ctx.lr = 0x82113F20;
	sub_82173A08(ctx, base);
	// b 0x82113f30
	goto loc_82113F30;
loc_82113F24:
	// lis r11,-32110
	ctx.r11.s64 = -2104360960;
	// addi r3,r11,12656
	ctx.r3.s64 = ctx.r11.s64 + 12656;
	// bl 0x8215c4c8
	ctx.lr = 0x82113F30;
	sub_8215C4C8(ctx, base);
loc_82113F30:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,328(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 328);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82113F44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r10,4864
	ctx.r3.s64 = ctx.r10.s64 + 4864;
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r11,2216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2216, ctx.r11.u32);
	// bl 0x82188018
	ctx.lr = 0x82113F5C;
	sub_82188018(ctx, base);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// bl 0x82203870
	ctx.lr = 0x82113F68;
	sub_82203870(ctx, base);
	// lis r3,23479
	ctx.r3.s64 = 1538719744;
	// lis r10,-27583
	ctx.r10.s64 = -1807679488;
	// ori r11,r3,12096
	ctx.r11.u64 = ctx.r3.u64 | 12096;
	// ori r9,r10,16339
	ctx.r9.u64 = ctx.r10.u64 | 16339;
	// lis r8,3
	ctx.r8.s64 = 196608;
	// rldimi r11,r9,32,0
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r11.u64 & 0xFFFFFFFF);
	// ori r7,r8,24816
	ctx.r7.u64 = ctx.r8.u64 | 24816;
	// lis r6,3
	ctx.r6.s64 = 196608;
	// lis r3,7
	ctx.r3.s64 = 458752;
	// ori r5,r6,24824
	ctx.r5.u64 = ctx.r6.u64 | 24824;
	// ori r10,r3,16247
	ctx.r10.u64 = ctx.r3.u64 | 16247;
	// stdx r11,r31,r7
	PPC_STORE_U64(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u64);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,28
	ctx.r4.s64 = 28;
	// stwx r11,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stbx r11,r31,r10
	PPC_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u8);
	// stw r4,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r4.u32);
loc_82113FB0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82113FB4:
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

__attribute__((alias("__imp__sub_82113FCC"))) PPC_WEAK_FUNC(sub_82113FCC);
PPC_FUNC_IMPL(__imp__sub_82113FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82113FD0"))) PPC_WEAK_FUNC(sub_82113FD0);
PPC_FUNC_IMPL(__imp__sub_82113FD0) {
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
	// lis r11,-32110
	ctx.r11.s64 = -2104360960;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r31,r11,12656
	ctx.r31.s64 = ctx.r11.s64 + 12656;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82173950
	ctx.lr = 0x82113FF8;
	sub_82173950(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82173950
	ctx.lr = 0x82114004;
	sub_82173950(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82142c30
	ctx.lr = 0x82114010;
	sub_82142C30(ctx, base);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r30,r11,28544
	ctx.r30.s64 = ctx.r11.s64 + 28544;
	// addi r3,r31,784
	ctx.r3.s64 = ctx.r31.s64 + 784;
	// addis r11,r30,35
	ctx.r11.s64 = ctx.r30.s64 + 2293760;
	// addi r5,r11,-28496
	ctx.r5.s64 = ctx.r11.s64 + -28496;
	// bl 0x820ac2b0
	ctx.lr = 0x8211402C;
	sub_820AC2B0(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82142c30
	ctx.lr = 0x82114038;
	sub_82142C30(ctx, base);
	// addis r11,r30,35
	ctx.r11.s64 = ctx.r30.s64 + 2293760;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,1536
	ctx.r3.s64 = ctx.r31.s64 + 1536;
	// addi r5,r11,-9296
	ctx.r5.s64 = ctx.r11.s64 + -9296;
	// bl 0x820ac2b0
	ctx.lr = 0x8211404C;
	sub_820AC2B0(ctx, base);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// ori r9,r10,16271
	ctx.r9.u64 = ctx.r10.u64 | 16271;
	// lbzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821140a0
	if (ctx.cr6.eq) goto loc_821140A0;
	// lis r7,7
	ctx.r7.s64 = 458752;
	// ori r6,r7,16216
	ctx.r6.u64 = ctx.r7.u64 | 16216;
	// lwzx r11,r11,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,392(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 392);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x82114088;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821140a0
	if (ctx.cr6.eq) goto loc_821140A0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f2d50
	ctx.lr = 0x8211409C;
	sub_820F2D50(ctx, base);
	// b 0x821140a8
	goto loc_821140A8;
loc_821140A0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f2dc8
	ctx.lr = 0x821140A8;
	sub_820F2DC8(ctx, base);
loc_821140A8:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8217ea50
	ctx.lr = 0x821140B4;
	sub_8217EA50(ctx, base);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// addi r3,r11,-2944
	ctx.r3.s64 = ctx.r11.s64 + -2944;
	// bl 0x82182438
	ctx.lr = 0x821140C0;
	sub_82182438(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82150858
	ctx.lr = 0x821140C8;
	sub_82150858(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82150a38
	ctx.lr = 0x821140D0;
	sub_82150A38(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8217ea50
	ctx.lr = 0x821140DC;
	sub_8217EA50(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r3,r11,4864
	ctx.r3.s64 = ctx.r11.s64 + 4864;
	// bl 0x82187f48
	ctx.lr = 0x821140E8;
	sub_82187F48(ctx, base);
	// bl 0x82356350
	ctx.lr = 0x821140EC;
	sub_82356350(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82356420
	ctx.lr = 0x821140F4;
	sub_82356420(ctx, base);
	// addis r11,r30,35
	ctx.r11.s64 = ctx.r30.s64 + 2293760;
	// addi r3,r11,-28496
	ctx.r3.s64 = ctx.r11.s64 + -28496;
	// bl 0x82111a08
	ctx.lr = 0x82114100;
	sub_82111A08(ctx, base);
	// bl 0x82356408
	ctx.lr = 0x82114104;
	sub_82356408(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82150858
	ctx.lr = 0x8211410C;
	sub_82150858(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82223a58
	ctx.lr = 0x82114114;
	sub_82223A58(ctx, base);
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

__attribute__((alias("__imp__sub_8211412C"))) PPC_WEAK_FUNC(sub_8211412C);
PPC_FUNC_IMPL(__imp__sub_8211412C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82114130"))) PPC_WEAK_FUNC(sub_82114130);
PPC_FUNC_IMPL(__imp__sub_82114130) {
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
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,10416
	ctx.r30.s64 = ctx.r11.s64 + 10416;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821f6898
	ctx.lr = 0x82114158;
	sub_821F6898(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821f6a00
	ctx.lr = 0x82114160;
	sub_821F6A00(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r3,r11,14528
	ctx.r3.s64 = ctx.r11.s64 + 14528;
	// bl 0x821f5a90
	ctx.lr = 0x8211416C;
	sub_821F5A90(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// beq cr6,0x82114190
	if (ctx.cr6.eq) goto loc_82114190;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82114190;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82114190:
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r11,r11,-18560
	ctx.r11.s64 = ctx.r11.s64 + -18560;
	// addis r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 524288;
	// addi r3,r11,-7824
	ctx.r3.s64 = ctx.r11.s64 + -7824;
	// bl 0x822acff8
	ctx.lr = 0x821141A4;
	sub_822ACFF8(ctx, base);
	// lis r7,37
	ctx.r7.s64 = 2424832;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// ori r6,r7,49146
	ctx.r6.u64 = ctx.r7.u64 | 49146;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r5,2
	ctx.r5.s64 = 131072;
	// lis r3,2
	ctx.r3.s64 = 131072;
	// ori r4,r5,54060
	ctx.r4.u64 = ctx.r5.u64 | 54060;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// stbx r10,r11,r6
	PPC_STORE_U8(ctx.r11.u32 + ctx.r6.u32, ctx.r10.u8);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r5,2
	ctx.r5.s64 = 131072;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r9,r3,54064
	ctx.r9.u64 = ctx.r3.u64 | 54064;
	// ori r6,r7,54096
	ctx.r6.u64 = ctx.r7.u64 | 54096;
	// li r8,56
	ctx.r8.s64 = 56;
	// lfs f0,128(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r11,r4
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r4.u32, temp.u32);
	// ori r4,r5,54100
	ctx.r4.u64 = ctx.r5.u64 | 54100;
	// stbx r10,r11,r9
	PPC_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u8);
	// stfsx f0,r11,r6
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r6.u32, temp.u32);
	// stbx r10,r11,r4
	PPC_STORE_U8(ctx.r11.u32 + ctx.r4.u32, ctx.r10.u8);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r11,r11,-21272
	ctx.r11.s64 = ctx.r11.s64 + -21272;
	// stw r10,3896(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3896, ctx.r10.u32);
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_8211422C"))) PPC_WEAK_FUNC(sub_8211422C);
PPC_FUNC_IMPL(__imp__sub_8211422C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82114230"))) PPC_WEAK_FUNC(sub_82114230);
PPC_FUNC_IMPL(__imp__sub_82114230) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// ori r9,r10,31004
	ctx.r9.u64 = ctx.r10.u64 | 31004;
	// lbzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82114280
	if (ctx.cr6.eq) goto loc_82114280;
	// li r7,0
	ctx.r7.s64 = 0;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,30604
	ctx.r3.s64 = ctx.r11.s64 + 30604;
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// bl 0x82222840
	ctx.lr = 0x82114278;
	sub_82222840(ctx, base);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x821142bc
	goto loc_821142BC;
loc_82114280:
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r10,r10,23504
	ctx.r10.s64 = ctx.r10.s64 + 23504;
	// lis r5,7
	ctx.r5.s64 = 458752;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// ori r4,r5,15316
	ctx.r4.u64 = ctx.r5.u64 | 15316;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r10,48(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// li r31,4
	ctx.r31.s64 = 4;
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// stwx r10,r11,r4
	PPC_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r10.u32);
	// addis r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 458752;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r3,r11,15316
	ctx.r3.s64 = ctx.r11.s64 + 15316;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
loc_821142BC:
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_821142D0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x821142d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821142D0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8259d3a0
	ctx.lr = 0x821142F4;
	sub_8259D3A0(ctx, base);
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825c6b7c
	ctx.lr = 0x82114300;
	__imp__XamLoaderSetLaunchData(ctx, base);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82114314"))) PPC_WEAK_FUNC(sub_82114314);
PPC_FUNC_IMPL(__imp__sub_82114314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82114318"))) PPC_WEAK_FUNC(sub_82114318);
PPC_FUNC_IMPL(__imp__sub_82114318) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825c6b8c
	ctx.lr = 0x82114330;
	__imp__XamLoaderGetLaunchData(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821143a0
	if (!ctx.cr6.eq) goto loc_821143A0;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82114384
	if (ctx.cr6.lt) goto loc_82114384;
	// bne cr6,0x821143a0
	if (!ctx.cr6.eq) goto loc_821143A0;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lis r8,7
	ctx.r8.s64 = 458752;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r7,r8,15312
	ctx.r7.u64 = ctx.r8.u64 | 15312;
	// addis r9,r11,7
	ctx.r9.s64 = ctx.r11.s64 + 458752;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r9,15316
	ctx.r3.s64 = ctx.r9.s64 + 15316;
	// stbx r10,r11,r7
	PPC_STORE_U8(ctx.r11.u32 + ctx.r7.u32, ctx.r10.u8);
	// bl 0x8259d3a0
	ctx.lr = 0x82114374;
	sub_8259D3A0(ctx, base);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82114384:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r3,r11,30604
	ctx.r3.s64 = ctx.r11.s64 + 30604;
	// bl 0x822224a0
	ctx.lr = 0x821143A0;
	sub_822224A0(ctx, base);
loc_821143A0:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821143B0"))) PPC_WEAK_FUNC(sub_821143B0);
PPC_FUNC_IMPL(__imp__sub_821143B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x821143B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x820fc018
	ctx.lr = 0x821143C4;
	sub_820FC018(ctx, base);
	// addi r30,r29,120
	ctx.r30.s64 = ctx.r29.s64 + 120;
	// li r31,4
	ctx.r31.s64 = 4;
loc_821143CC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820fc018
	ctx.lr = 0x821143D4;
	sub_820FC018(ctx, base);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r30,r30,220
	ctx.r30.s64 = ctx.r30.s64 + 220;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821143cc
	if (!ctx.cr6.eq) goto loc_821143CC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8210f770
	ctx.lr = 0x821143EC;
	sub_8210F770(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821143F8"))) PPC_WEAK_FUNC(sub_821143F8);
PPC_FUNC_IMPL(__imp__sub_821143F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baec
	ctx.lr = 0x82114400;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// li r10,1
	ctx.r10.s64 = 1;
loc_82114414:
	// add r8,r11,r31
	ctx.r8.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// extsb r11,r9
	ctx.r11.s64 = ctx.r9.s8;
	// stb r10,2509(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2509, ctx.r10.u8);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x82114414
	if (ctx.cr6.lt) goto loc_82114414;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// addi r28,r31,2452
	ctx.r28.s64 = ctx.r31.s64 + 2452;
	// addi r26,r31,2443
	ctx.r26.s64 = ctx.r31.s64 + 2443;
	// lis r27,-32255
	ctx.r27.s64 = -2113863680;
loc_8211443C:
	// lbzx r7,r26,r29
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r26.u32 + ctx.r29.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x821144b4
	if (ctx.cr6.eq) goto loc_821144B4;
	// clrlwi r4,r29,24
	ctx.r4.u64 = ctx.r29.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8210f248
	ctx.lr = 0x82114454;
	sub_8210F248(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x821144b4
	if (ctx.cr6.eq) goto loc_821144B4;
	// add r5,r29,r31
	ctx.r5.u64 = ctx.r29.u64 + ctx.r31.u64;
	// lbz r4,2441(r5)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r5.u32 + 2441);
	// extsb r11,r4
	ctx.r11.s64 = ctx.r4.s8;
	// mulli r11,r11,220
	ctx.r11.s64 = ctx.r11.s64 * 220;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r30,r11,120
	ctx.r30.s64 = ctx.r11.s64 + 120;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82360838
	ctx.lr = 0x82114480;
	sub_82360838(ctx, base);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821144b4
	if (ctx.cr6.eq) goto loc_821144B4;
	// lfs f13,8(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f0,13256(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 13256);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x82360950
	ctx.lr = 0x821144A0;
	sub_82360950(ctx, base);
	// lfs f12,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f0,13256(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 13256);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// bl 0x823609c8
	ctx.lr = 0x821144B4;
	sub_823609C8(ctx, base);
loc_821144B4:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplwi cr6,r29,2
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 2, ctx.xer);
	// blt cr6,0x8211443c
	if (ctx.cr6.lt) goto loc_8211443C;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_821144CC:
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// extsb r10,r9
	ctx.r10.s64 = ctx.r9.s8;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// stb r25,2443(r9)
	PPC_STORE_U8(ctx.r9.u32 + 2443, ctx.r25.u8);
	// stb r8,2441(r9)
	PPC_STORE_U8(ctx.r9.u32 + 2441, ctx.r8.u8);
	// blt cr6,0x821144cc
	if (ctx.cr6.lt) goto loc_821144CC;
	// li r7,-1
	ctx.r7.s64 = -1;
	// stb r7,2440(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2440, ctx.r7.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82114500"))) PPC_WEAK_FUNC(sub_82114500);
PPC_FUNC_IMPL(__imp__sub_82114500) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x82114508;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// extsb r27,r26
	ctx.r27.s64 = ctx.r26.s8;
	// li r11,1
	ctx.r11.s64 = 1;
	// add r29,r27,r31
	ctx.r29.u64 = ctx.r27.u64 + ctx.r31.u64;
	// lbz r10,2443(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 2443);
	// stb r11,2509(r29)
	PPC_STORE_U8(ctx.r29.u32 + 2509, ctx.r11.u8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821145a4
	if (ctx.cr6.eq) goto loc_821145A4;
	// bl 0x8210f248
	ctx.lr = 0x82114534;
	sub_8210F248(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821145a4
	if (ctx.cr6.eq) goto loc_821145A4;
	// lbz r11,2441(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 2441);
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// mulli r11,r8,220
	ctx.r11.s64 = ctx.r8.s64 * 220;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r30,r11,120
	ctx.r30.s64 = ctx.r11.s64 + 120;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82360838
	ctx.lr = 0x8211455C;
	sub_82360838(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x821145a4
	if (ctx.cr6.eq) goto loc_821145A4;
	// addi r6,r27,615
	ctx.r6.s64 = ctx.r27.s64 + 615;
	// lis r28,-32255
	ctx.r28.s64 = -2113863680;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f0,13256(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 13256);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r5,r31
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r31.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x82360950
	ctx.lr = 0x82114588;
	sub_82360950(ctx, base);
	// addi r4,r27,613
	ctx.r4.s64 = ctx.r27.s64 + 613;
	// lfs f0,13256(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 13256);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f12,r11,r31
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// bl 0x823609c8
	ctx.lr = 0x821145A4;
	sub_823609C8(ctx, base);
loc_821145A4:
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r26,2441(r29)
	PPC_STORE_U8(ctx.r29.u32 + 2441, ctx.r26.u8);
	// stb r10,2443(r29)
	PPC_STORE_U8(ctx.r29.u32 + 2443, ctx.r10.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821145B8"))) PPC_WEAK_FUNC(sub_821145B8);
PPC_FUNC_IMPL(__imp__sub_821145B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x821145C0;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lbz r11,2508(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2508);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82114660
	if (ctx.cr6.eq) goto loc_82114660;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r28,r30,2441
	ctx.r28.s64 = ctx.r30.s64 + 2441;
	// lfs f31,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f31.f64 = double(temp.f32);
loc_821145E8:
	// lbzx r10,r28,r29
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r29.u32);
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// mulli r11,r11,220
	ctx.r11.s64 = ctx.r11.s64 * 220;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r31,r11,120
	ctx.r31.s64 = ctx.r11.s64 + 120;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82360838
	ctx.lr = 0x82114604;
	sub_82360838(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82114648
	if (ctx.cr6.eq) goto loc_82114648;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82360900
	ctx.lr = 0x82114618;
	sub_82360900(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// beq cr6,0x8211462c
	if (ctx.cr6.eq) goto loc_8211462C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82360950
	ctx.lr = 0x8211462C;
	sub_82360950(ctx, base);
loc_8211462C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82360928
	ctx.lr = 0x82114634;
	sub_82360928(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// beq cr6,0x82114648
	if (ctx.cr6.eq) goto loc_82114648;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x823609c8
	ctx.lr = 0x82114648;
	sub_823609C8(ctx, base);
loc_82114648:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r29,2
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 2, ctx.xer);
	// blt cr6,0x821145e8
	if (ctx.cr6.lt) goto loc_821145E8;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_82114660:
	// addi r28,r30,2452
	ctx.r28.s64 = ctx.r30.s64 + 2452;
	// addi r26,r30,2443
	ctx.r26.s64 = ctx.r30.s64 + 2443;
	// lis r27,-32255
	ctx.r27.s64 = -2113863680;
loc_8211466C:
	// lbzx r8,r26,r29
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r26.u32 + ctx.r29.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821146e4
	if (ctx.cr6.eq) goto loc_821146E4;
	// clrlwi r4,r29,24
	ctx.r4.u64 = ctx.r29.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8210f248
	ctx.lr = 0x82114684;
	sub_8210F248(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x821146e4
	if (ctx.cr6.eq) goto loc_821146E4;
	// add r6,r29,r30
	ctx.r6.u64 = ctx.r29.u64 + ctx.r30.u64;
	// lbz r5,2441(r6)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r6.u32 + 2441);
	// extsb r11,r5
	ctx.r11.s64 = ctx.r5.s8;
	// mulli r11,r11,220
	ctx.r11.s64 = ctx.r11.s64 * 220;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r31,r11,120
	ctx.r31.s64 = ctx.r11.s64 + 120;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82360838
	ctx.lr = 0x821146B0;
	sub_82360838(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821146e4
	if (ctx.cr6.eq) goto loc_821146E4;
	// lfs f13,8(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,13256(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 13256);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x82360950
	ctx.lr = 0x821146D0;
	sub_82360950(ctx, base);
	// lfs f12,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,13256(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 13256);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// bl 0x823609c8
	ctx.lr = 0x821146E4;
	sub_823609C8(ctx, base);
loc_821146E4:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplwi cr6,r29,2
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 2, ctx.xer);
	// blt cr6,0x8211466c
	if (ctx.cr6.lt) goto loc_8211466C;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82114700"))) PPC_WEAK_FUNC(sub_82114700);
PPC_FUNC_IMPL(__imp__sub_82114700) {
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
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82114758
	if (ctx.cr6.eq) goto loc_82114758;
	// lis r10,-32124
	ctx.r10.s64 = -2105278464;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,26080
	ctx.r9.s64 = ctx.r10.s64 + 26080;
	// li r8,1
	ctx.r8.s64 = 1;
loc_82114738:
	// addi r7,r9,2653
	ctx.r7.s64 = ctx.r9.s64 + 2653;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stbx r8,r11,r7
	PPC_STORE_U8(ctx.r11.u32 + ctx.r7.u32, ctx.r8.u8);
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x82114738
	if (ctx.cr6.lt) goto loc_82114738;
	// addi r3,r9,144
	ctx.r3.s64 = ctx.r9.s64 + 144;
	// bl 0x821145b8
	ctx.lr = 0x82114758;
	sub_821145B8(ctx, base);
loc_82114758:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82360c10
	ctx.lr = 0x82114764;
	sub_82360C10(ctx, base);
	// stb r31,2508(r30)
	PPC_STORE_U8(ctx.r30.u32 + 2508, ctx.r31.u8);
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

__attribute__((alias("__imp__sub_82114780"))) PPC_WEAK_FUNC(sub_82114780);
PPC_FUNC_IMPL(__imp__sub_82114780) {
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
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821147A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82361a30
	ctx.lr = 0x821147B0;
	sub_82361A30(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821147d4
	if (!ctx.cr6.eq) goto loc_821147D4;
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
loc_821147D4:
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,255
	ctx.r7.s64 = 255;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_821147E0:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r6,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// stb r9,41(r10)
	PPC_STORE_U8(ctx.r10.u32 + 41, ctx.r9.u8);
	// stw r9,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r9.u32);
	// std r9,32(r10)
	PPC_STORE_U64(ctx.r10.u32 + 32, ctx.r9.u64);
	// stb r7,40(r10)
	PPC_STORE_U8(ctx.r10.u32 + 40, ctx.r7.u8);
	// blt cr6,0x821147e0
	if (ctx.cr6.lt) goto loc_821147E0;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stb r9,220(r31)
	PPC_STORE_U8(ctx.r31.u32 + 220, ctx.r9.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r9,221(r31)
	PPC_STORE_U8(ctx.r31.u32 + 221, ctx.r9.u8);
	// stb r9,222(r31)
	PPC_STORE_U8(ctx.r31.u32 + 222, ctx.r9.u8);
	// stb r9,223(r31)
	PPC_STORE_U8(ctx.r31.u32 + 223, ctx.r9.u8);
	// stb r9,218(r31)
	PPC_STORE_U8(ctx.r31.u32 + 218, ctx.r9.u8);
	// stb r11,219(r31)
	PPC_STORE_U8(ctx.r31.u32 + 219, ctx.r11.u8);
	// stb r11,216(r31)
	PPC_STORE_U8(ctx.r31.u32 + 216, ctx.r11.u8);
	// stb r11,217(r31)
	PPC_STORE_U8(ctx.r31.u32 + 217, ctx.r11.u8);
	// stb r9,225(r31)
	PPC_STORE_U8(ctx.r31.u32 + 225, ctx.r9.u8);
	// stb r9,224(r31)
	PPC_STORE_U8(ctx.r31.u32 + 224, ctx.r9.u8);
	// stb r9,226(r31)
	PPC_STORE_U8(ctx.r31.u32 + 226, ctx.r9.u8);
	// stw r9,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r9.u32);
	// stw r9,808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 808, ctx.r9.u32);
	// stw r9,812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 812, ctx.r9.u32);
	// bl 0x8210d780
	ctx.lr = 0x82114854;
	sub_8210D780(ctx, base);
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

__attribute__((alias("__imp__sub_8211486C"))) PPC_WEAK_FUNC(sub_8211486C);
PPC_FUNC_IMPL(__imp__sub_8211486C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82114870"))) PPC_WEAK_FUNC(sub_82114870);
PPC_FUNC_IMPL(__imp__sub_82114870) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x82114878;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32124
	ctx.r9.s64 = -2105278464;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r9,r9,26080
	ctx.r9.s64 = ctx.r9.s64 + 26080;
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// addi r8,r9,2587
	ctx.r8.s64 = ctx.r9.s64 + 2587;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lbzx r7,r10,r8
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r8.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x821148b0
	if (!ctx.cr6.eq) goto loc_821148B0;
	// li r29,-1
	ctx.r29.s64 = -1;
	// b 0x821148b8
	goto loc_821148B8;
loc_821148B0:
	// addi r5,r9,2585
	ctx.r5.s64 = ctx.r9.s64 + 2585;
	// lbzx r29,r10,r5
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r5.u32);
loc_821148B8:
	// stb r11,216(r31)
	PPC_STORE_U8(ctx.r31.u32 + 216, ctx.r11.u8);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// stb r27,218(r31)
	PPC_STORE_U8(ctx.r31.u32 + 218, ctx.r27.u8);
	// stb r29,217(r31)
	PPC_STORE_U8(ctx.r31.u32 + 217, ctx.r29.u8);
	// addi r30,r11,11892
	ctx.r30.s64 = ctx.r11.s64 + 11892;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r3,r31,360
	ctx.r3.s64 = ctx.r31.s64 + 360;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bne cr6,0x821148e4
	if (!ctx.cr6.eq) goto loc_821148E4;
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
loc_821148E4:
	// bl 0x8259d2a0
	ctx.lr = 0x821148E8;
	sub_8259D2A0(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r3,r31,232
	ctx.r3.s64 = ctx.r31.s64 + 232;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bne cr6,0x82114900
	if (!ctx.cr6.eq) goto loc_82114900;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82114900:
	// bl 0x8259d2a0
	ctx.lr = 0x82114904;
	sub_8259D2A0(ctx, base);
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// li r8,1
	ctx.r8.s64 = 1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbz r10,41(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 41);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82114938
	if (ctx.cr6.eq) goto loc_82114938;
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8211493c
	if (!ctx.cr6.eq) goto loc_8211493C;
loc_82114938:
	// li r9,0
	ctx.r9.s64 = 0;
loc_8211493C:
	// clrlwi r7,r9,24
	ctx.r7.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82114994
	if (ctx.cr6.eq) goto loc_82114994;
	// clrlwi r6,r27,24
	ctx.r6.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82114980
	if (ctx.cr6.eq) goto loc_82114980;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8211496c
	if (ctx.cr6.eq) goto loc_8211496C;
	// lwz r5,24(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x82114970
	if (ctx.cr6.eq) goto loc_82114970;
loc_8211496C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82114970:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821149b8
	if (!ctx.cr6.eq) goto loc_821149B8;
	// b 0x821149a4
	goto loc_821149A4;
loc_82114980:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8210d590
	ctx.lr = 0x8211498C;
	sub_8210D590(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_82114994:
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821149a8
	if (ctx.cr6.eq) goto loc_821149A8;
loc_821149A4:
	// li r4,2
	ctx.r4.s64 = 2;
loc_821149A8:
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r8,220(r31)
	PPC_STORE_U8(ctx.r31.u32 + 220, ctx.r8.u8);
	// stb r27,221(r31)
	PPC_STORE_U8(ctx.r31.u32 + 221, ctx.r27.u8);
	// bl 0x825af668
	ctx.lr = 0x821149B8;
	sub_825AF668(ctx, base);
loc_821149B8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821149C0"))) PPC_WEAK_FUNC(sub_821149C0);
PPC_FUNC_IMPL(__imp__sub_821149C0) {
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
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r11,228(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 228);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82114a30
	if (ctx.cr6.eq) goto loc_82114A30;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82114a30
	if (ctx.cr6.eq) goto loc_82114A30;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82114a64
	if (!ctx.cr6.eq) goto loc_82114A64;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// lis r7,-32239
	ctx.r7.s64 = -2112815104;
	// addi r3,r10,10416
	ctx.r3.s64 = ctx.r10.s64 + 10416;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r7,r7,-10064
	ctx.r7.s64 = ctx.r7.s64 + -10064;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r8,424
	ctx.r5.s64 = ctx.r8.s64 + 424;
	// addi r4,r8,552
	ctx.r4.s64 = ctx.r8.s64 + 552;
	// bl 0x821e6928
	ctx.lr = 0x82114A20;
	sub_821E6928(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82114A30:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// lis r7,-32239
	ctx.r7.s64 = -2112815104;
	// addi r3,r10,10416
	ctx.r3.s64 = ctx.r10.s64 + 10416;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r7,r7,-10064
	ctx.r7.s64 = ctx.r7.s64 + -10064;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r8,616
	ctx.r5.s64 = ctx.r8.s64 + 616;
	// addi r4,r8,744
	ctx.r4.s64 = ctx.r8.s64 + 744;
	// bl 0x821e6928
	ctx.lr = 0x82114A64;
	sub_821E6928(ctx, base);
loc_82114A64:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82114A74"))) PPC_WEAK_FUNC(sub_82114A74);
PPC_FUNC_IMPL(__imp__sub_82114A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82114A78"))) PPC_WEAK_FUNC(sub_82114A78);
PPC_FUNC_IMPL(__imp__sub_82114A78) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// bne cr6,0x82114a98
	if (!ctx.cr6.eq) goto loc_82114A98;
	// lbz r5,218(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 218);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r4,216(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 216);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x82114870
	sub_82114870(ctx, base);
	return;
loc_82114A98:
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lbz r11,218(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 218);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82114ac4
	if (!ctx.cr6.eq) goto loc_82114AC4;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// stb r9,226(r4)
	PPC_STORE_U8(ctx.r4.u32 + 226, ctx.r9.u8);
	// stb r10,58(r11)
	PPC_STORE_U8(ctx.r11.u32 + 58, ctx.r10.u8);
loc_82114AC4:
	// stb r10,220(r4)
	PPC_STORE_U8(ctx.r4.u32 + 220, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82114ACC"))) PPC_WEAK_FUNC(sub_82114ACC);
PPC_FUNC_IMPL(__imp__sub_82114ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82114AD0"))) PPC_WEAK_FUNC(sub_82114AD0);
PPC_FUNC_IMPL(__imp__sub_82114AD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae4
	ctx.lr = 0x82114AD8;
	__savegprlr_23(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r11,74(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 74);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32110
	ctx.r11.s64 = -2104360960;
	// addi r23,r11,12656
	ctx.r23.s64 = ctx.r11.s64 + 12656;
	// beq cr6,0x82114b08
	if (ctx.cr6.eq) goto loc_82114B08;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lfs f1,-12136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12136);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82181ab8
	ctx.lr = 0x82114B08;
	sub_82181AB8(ctx, base);
loc_82114B08:
	// lis r10,-32090
	ctx.r10.s64 = -2103050240;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r24,r10,26752
	ctx.r24.s64 = ctx.r10.s64 + 26752;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lis r10,-32124
	ctx.r10.s64 = -2105278464;
	// cmplwi cr6,r11,55
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 55, ctx.xer);
	// addi r29,r10,26080
	ctx.r29.s64 = ctx.r10.s64 + 26080;
	// bgt cr6,0x82114f4c
	if (ctx.cr6.gt) goto loc_82114F4C;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// addi r27,r10,-21272
	ctx.r27.s64 = ctx.r10.s64 + -21272;
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// addi r26,r10,10416
	ctx.r26.s64 = ctx.r10.s64 + 10416;
	// lis r12,-32239
	ctx.r12.s64 = -2112815104;
	// addi r12,r12,19284
	ctx.r12.s64 = ctx.r12.s64 + 19284;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82114C34;
	case 1:
		goto loc_82114D34;
	case 2:
		goto loc_82114DB4;
	case 3:
		goto loc_82114DD0;
	case 4:
		goto loc_82114DF4;
	case 5:
		goto loc_82114E14;
	case 6:
		goto loc_82114E3C;
	case 7:
		goto loc_82114E44;
	case 8:
		goto loc_82114E4C;
	case 9:
		goto loc_82114E54;
	case 10:
		goto loc_82114EC4;
	case 11:
		goto loc_82114ED8;
	case 12:
		goto loc_82114EF8;
	case 13:
		goto loc_82114EF8;
	case 14:
		goto loc_82114F1C;
	case 15:
		goto loc_82114F4C;
	case 16:
		goto loc_82114F4C;
	case 17:
		goto loc_82114F4C;
	case 18:
		goto loc_82114F4C;
	case 19:
		goto loc_82114F4C;
	case 20:
		goto loc_82114F4C;
	case 21:
		goto loc_82114F4C;
	case 22:
		goto loc_82114F4C;
	case 23:
		goto loc_82114F4C;
	case 24:
		goto loc_82114F4C;
	case 25:
		goto loc_82114F4C;
	case 26:
		goto loc_82114F4C;
	case 27:
		goto loc_82114F4C;
	case 28:
		goto loc_82114F4C;
	case 29:
		goto loc_82114F4C;
	case 30:
		goto loc_82114F4C;
	case 31:
		goto loc_82114F4C;
	case 32:
		goto loc_82114F4C;
	case 33:
		goto loc_82114F4C;
	case 34:
		goto loc_82114F4C;
	case 35:
		goto loc_82114F4C;
	case 36:
		goto loc_82114F4C;
	case 37:
		goto loc_82114F4C;
	case 38:
		goto loc_82114F4C;
	case 39:
		goto loc_82114F4C;
	case 40:
		goto loc_82114F4C;
	case 41:
		goto loc_82114F4C;
	case 42:
		goto loc_82114F4C;
	case 43:
		goto loc_82114F4C;
	case 44:
		goto loc_82114F4C;
	case 45:
		goto loc_82114F4C;
	case 46:
		goto loc_82114F4C;
	case 47:
		goto loc_82114F4C;
	case 48:
		goto loc_82114F4C;
	case 49:
		goto loc_82114F4C;
	case 50:
		goto loc_82114F4C;
	case 51:
		goto loc_82114F4C;
	case 52:
		goto loc_82114F4C;
	case 53:
		goto loc_82114F4C;
	case 54:
		goto loc_82114F4C;
	case 55:
		goto loc_82114C34;
	default:
		__builtin_unreachable();
	}
	// lwz r16,19508(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 19508);
	// lwz r16,19764(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 19764);
	// lwz r16,19892(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 19892);
	// lwz r16,19920(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 19920);
	// lwz r16,19956(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 19956);
	// lwz r16,19988(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 19988);
	// lwz r16,20028(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 20028);
	// lwz r16,20036(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 20036);
	// lwz r16,20044(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 20044);
	// lwz r16,20052(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 20052);
	// lwz r16,20164(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 20164);
	// lwz r16,20184(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 20184);
	// lwz r16,20216(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 20216);
	// lwz r16,20216(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 20216);
	// lwz r16,20252(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 20252);
	// lwz r16,20300(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 20300);
	// lwz r16,20300(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 20300);
	// lwz r16,20300(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 20300);
	// lwz r16,20300(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 20300);
	// lwz r16,20300(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 20300);
	// lwz r16,20300(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 20300);
	// lwz r16,20300(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 20300);
	// lwz r16,20300(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 20300);
	// lwz r16,20300(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 20300);
	// lwz r16,20300(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 20300);
	// lwz r16,20300(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 20300);
	// lwz r16,20300(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 20300);
	// lwz r16,20300(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 20300);
	// lwz r16,20300(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 20300);
	// lwz r16,20300(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 20300);
	// lwz r16,20300(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 20300);
	// lwz r16,20300(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 20300);
	// lwz r16,20300(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 20300);
	// lwz r16,20300(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 20300);
	// lwz r16,20300(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 20300);
	// lwz r16,20300(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 20300);
	// lwz r16,20300(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 20300);
	// lwz r16,20300(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 20300);
	// lwz r16,20300(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 20300);
	// lwz r16,20300(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 20300);
	// lwz r16,20300(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 20300);
	// lwz r16,20300(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 20300);
	// lwz r16,20300(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 20300);
	// lwz r16,20300(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 20300);
	// lwz r16,20300(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 20300);
	// lwz r16,20300(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 20300);
	// lwz r16,20300(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 20300);
	// lwz r16,20300(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 20300);
	// lwz r16,20300(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 20300);
	// lwz r16,20300(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 20300);
	// lwz r16,20300(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 20300);
	// lwz r16,20300(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 20300);
	// lwz r16,20300(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 20300);
	// lwz r16,20300(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 20300);
	// lwz r16,20300(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 20300);
	// lwz r16,19508(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 19508);
loc_82114C34:
	// lwz r11,3896(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 3896);
	// li r28,1
	ctx.r28.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82114c4c
	if (!ctx.cr6.gt) goto loc_82114C4C;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// b 0x82114c64
	goto loc_82114C64;
loc_82114C4C:
	// lwz r11,3892(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 3892);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82114c60
	if (ctx.cr6.eq) goto loc_82114C60;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// stw r11,3892(r27)
	PPC_STORE_U32(ctx.r27.u32 + 3892, ctx.r11.u32);
loc_82114C60:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82114C64:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82114c80
	if (!ctx.cr6.eq) goto loc_82114C80;
loc_82114C70:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x8259bb34
	__restgprlr_23(ctx, base);
	return;
loc_82114C80:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r30,r11,11600
	ctx.r30.s64 = ctx.r11.s64 + 11600;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821f8280
	ctx.lr = 0x82114C94;
	sub_821F8280(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821f82a0
	ctx.lr = 0x82114CA0;
	sub_821F82A0(ctx, base);
	// lis r9,2
	ctx.r9.s64 = 131072;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// ori r8,r9,54064
	ctx.r8.u64 = ctx.r9.u64 | 54064;
	// ori r6,r7,54100
	ctx.r6.u64 = ctx.r7.u64 | 54100;
	// stbx r11,r29,r8
	PPC_STORE_U8(ctx.r29.u32 + ctx.r8.u32, ctx.r11.u8);
	// stbx r11,r29,r6
	PPC_STORE_U8(ctx.r29.u32 + ctx.r6.u32, ctx.r11.u8);
loc_82114CBC:
	// addi r4,r29,2653
	ctx.r4.s64 = ctx.r29.s64 + 2653;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stbx r28,r11,r4
	PPC_STORE_U8(ctx.r11.u32 + ctx.r4.u32, ctx.r28.u8);
	// extsb r11,r5
	ctx.r11.s64 = ctx.r5.s8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x82114cbc
	if (ctx.cr6.lt) goto loc_82114CBC;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r30,r11,-18560
	ctx.r30.s64 = ctx.r11.s64 + -18560;
	// lis r11,7
	ctx.r11.s64 = 458752;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// ori r10,r11,57728
	ctx.r10.u64 = ctx.r11.u64 | 57728;
	// stwx r3,r30,r10
	PPC_STORE_U32(ctx.r30.u32 + ctx.r10.u32, ctx.r3.u32);
	// beq cr6,0x82114d10
	if (ctx.cr6.eq) goto loc_82114D10;
	// lis r8,9
	ctx.r8.s64 = 589824;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// ori r7,r8,9308
	ctx.r7.u64 = ctx.r8.u64 | 9308;
	// lwz r6,16(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// lwzx r4,r30,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r7.u32);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82114D10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82114D10:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a0118
	ctx.lr = 0x82114D18;
	sub_822A0118(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821042b0
	ctx.lr = 0x82114D20;
	sub_821042B0(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82114c70
	if (ctx.cr6.eq) goto loc_82114C70;
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r4,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r4.u32);
loc_82114D34:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r30,r11,14528
	ctx.r30.s64 = ctx.r11.s64 + 14528;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821f5650
	ctx.lr = 0x82114D44;
	sub_821F5650(ctx, base);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82114c70
	if (ctx.cr6.eq) goto loc_82114C70;
	// li r4,20
	ctx.r4.s64 = 20;
	// addi r3,r30,7432
	ctx.r3.s64 = ctx.r30.s64 + 7432;
	// bl 0x821fbf68
	ctx.lr = 0x82114D5C;
	sub_821FBF68(ctx, base);
	// addis r11,r24,3
	ctx.r11.s64 = ctx.r24.s64 + 196608;
	// addi r3,r11,15896
	ctx.r3.s64 = ctx.r11.s64 + 15896;
	// bl 0x821aa558
	ctx.lr = 0x82114D68;
	sub_821AA558(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r30,7432
	ctx.r3.s64 = ctx.r30.s64 + 7432;
	// bl 0x821fbf68
	ctx.lr = 0x82114D74;
	sub_821FBF68(ctx, base);
	// addi r3,r26,544
	ctx.r3.s64 = ctx.r26.s64 + 544;
	// bl 0x821a9a68
	ctx.lr = 0x82114D7C;
	sub_821A9A68(ctx, base);
	// lbz r11,74(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 74);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82114dac
	if (!ctx.cr6.eq) goto loc_82114DAC;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82201110
	ctx.lr = 0x82114D90;
	sub_82201110(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821fd810
	ctx.lr = 0x82114D98;
	sub_821FD810(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82114dac
	if (ctx.cr6.eq) goto loc_82114DAC;
	// lfs f0,128(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
loc_82114DAC:
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r9,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r9.u32);
loc_82114DB4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82200878
	ctx.lr = 0x82114DBC;
	sub_82200878(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82114c70
	if (ctx.cr6.eq) goto loc_82114C70;
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r7,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r7.u32);
loc_82114DD0:
	// li r5,20
	ctx.r5.s64 = 20;
	// li r4,22
	ctx.r4.s64 = 22;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82200f80
	ctx.lr = 0x82114DE0;
	sub_82200F80(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82114c70
	if (ctx.cr6.eq) goto loc_82114C70;
	// li r5,5
	ctx.r5.s64 = 5;
	// stw r5,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r5.u32);
loc_82114DF4:
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-7552
	ctx.r3.s64 = ctx.r11.s64 + -7552;
	// bl 0x820cd4b8
	ctx.lr = 0x82114E00;
	sub_820CD4B8(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82114c70
	if (ctx.cr6.eq) goto loc_82114C70;
	// li r3,6
	ctx.r3.s64 = 6;
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
loc_82114E14:
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// addis r11,r11,34
	ctx.r11.s64 = ctx.r11.s64 + 2228224;
	// addi r3,r11,32128
	ctx.r3.s64 = ctx.r11.s64 + 32128;
	// bl 0x8232fdc0
	ctx.lr = 0x82114E28;
	sub_8232FDC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82114c70
	if (ctx.cr6.eq) goto loc_82114C70;
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
loc_82114E3C:
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r9,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r9.u32);
loc_82114E44:
	// li r8,9
	ctx.r8.s64 = 9;
	// stw r8,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r8.u32);
loc_82114E4C:
	// li r7,10
	ctx.r7.s64 = 10;
	// stw r7,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r7.u32);
loc_82114E54:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,23
	ctx.r4.s64 = 23;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8210cf48
	ctx.lr = 0x82114E64;
	sub_8210CF48(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// stw r6,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r6.u32);
	// beq cr6,0x82114c70
	if (ctx.cr6.eq) goto loc_82114C70;
	// addi r5,r31,73
	ctx.r5.s64 = ctx.r31.s64 + 73;
	// li r4,23
	ctx.r4.s64 = 23;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r25,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r25.u8);
	// bl 0x8210d3f0
	ctx.lr = 0x82114E88;
	sub_8210D3F0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r4,r11,17960
	ctx.r4.s64 = ctx.r11.s64 + 17960;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r29,2736
	ctx.r3.s64 = ctx.r29.s64 + 2736;
	// bl 0x8210e1f0
	ctx.lr = 0x82114EA0;
	sub_8210E1F0(ctx, base);
	// lbz r6,74(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 74);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82114ebc
	if (ctx.cr6.eq) goto loc_82114EBC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lfs f1,25556(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25556);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82181ab8
	ctx.lr = 0x82114EBC;
	sub_82181AB8(ctx, base);
loc_82114EBC:
	// li r5,11
	ctx.r5.s64 = 11;
	// stw r5,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r5.u32);
loc_82114EC4:
	// lbz r4,73(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 73);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82114c70
	if (ctx.cr6.eq) goto loc_82114C70;
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
loc_82114ED8:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r3,r11,13000
	ctx.r3.s64 = ctx.r11.s64 + 13000;
	// bl 0x821f8cd8
	ctx.lr = 0x82114EE4;
	sub_821F8CD8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82114c70
	if (ctx.cr6.eq) goto loc_82114C70;
	// li r10,13
	ctx.r10.s64 = 13;
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
loc_82114EF8:
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r3,r11,22016
	ctx.r3.s64 = ctx.r11.s64 + 22016;
	// bl 0x820daf58
	ctx.lr = 0x82114F04;
	sub_820DAF58(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-26064
	ctx.r3.s64 = ctx.r11.s64 + -26064;
	// bl 0x821439e8
	ctx.lr = 0x82114F14;
	sub_821439E8(ctx, base);
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r9,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r9.u32);
loc_82114F1C:
	// lfs f13,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lfs f0,128(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f31,f0,f13
	ctx.f31.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// bl 0x821fd810
	ctx.lr = 0x82114F30;
	sub_821FD810(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82114f4c
	if (ctx.cr6.eq) goto loc_82114F4C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,12032(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12032);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// blt cr6,0x82114c70
	if (ctx.cr6.lt) goto loc_82114C70;
loc_82114F4C:
	// addis r11,r24,1
	ctx.r11.s64 = ctx.r24.s64 + 65536;
	// addi r3,r11,30604
	ctx.r3.s64 = ctx.r11.s64 + 30604;
	// bl 0x822224b8
	ctx.lr = 0x82114F58;
	sub_822224B8(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82114f74
	if (ctx.cr6.eq) goto loc_82114F74;
	// addis r11,r24,1
	ctx.r11.s64 = ctx.r24.s64 + 65536;
	// addi r3,r11,30604
	ctx.r3.s64 = ctx.r11.s64 + 30604;
	// bl 0x822224c0
	ctx.lr = 0x82114F70;
	sub_822224C0(ctx, base);
	// b 0x82114f8c
	goto loc_82114F8C;
loc_82114F74:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lwz r5,64(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// li r6,0
	ctx.r6.s64 = 0;
	// ld r4,56(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 56);
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// bl 0x820a38e8
	ctx.lr = 0x82114F8C;
	sub_820A38E8(ctx, base);
loc_82114F8C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821042b0
	ctx.lr = 0x82114F94;
	sub_821042B0(ctx, base);
	// lis r6,7
	ctx.r6.s64 = 458752;
	// lis r4,7
	ctx.r4.s64 = 458752;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// ori r5,r6,16252
	ctx.r5.u64 = ctx.r6.u64 | 16252;
	// ori r3,r4,16247
	ctx.r3.u64 = ctx.r4.u64 | 16247;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// lis r8,7
	ctx.r8.s64 = 458752;
	// lis r6,7
	ctx.r6.s64 = 458752;
	// ori r9,r10,16271
	ctx.r9.u64 = ctx.r10.u64 | 16271;
	// stwx r11,r29,r5
	PPC_STORE_U32(ctx.r29.u32 + ctx.r5.u32, ctx.r11.u32);
	// lis r4,7
	ctx.r4.s64 = 458752;
	// stbx r11,r29,r3
	PPC_STORE_U8(ctx.r29.u32 + ctx.r3.u32, ctx.r11.u8);
	// ori r7,r8,16272
	ctx.r7.u64 = ctx.r8.u64 | 16272;
	// ori r5,r6,16273
	ctx.r5.u64 = ctx.r6.u64 | 16273;
	// ori r3,r4,16274
	ctx.r3.u64 = ctx.r4.u64 | 16274;
	// stbx r11,r29,r9
	PPC_STORE_U8(ctx.r29.u32 + ctx.r9.u32, ctx.r11.u8);
	// stbx r11,r29,r7
	PPC_STORE_U8(ctx.r29.u32 + ctx.r7.u32, ctx.r11.u8);
	// stbx r11,r29,r5
	PPC_STORE_U8(ctx.r29.u32 + ctx.r5.u32, ctx.r11.u8);
	// stbx r11,r29,r3
	PPC_STORE_U8(ctx.r29.u32 + ctx.r3.u32, ctx.r11.u8);
	// lbz r11,74(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 74);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82115000
	if (ctx.cr6.eq) goto loc_82115000;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lfs f1,2868(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82181ab8
	ctx.lr = 0x82114FFC;
	sub_82181AB8(ctx, base);
	// stb r25,74(r31)
	PPC_STORE_U8(ctx.r31.u32 + 74, ctx.r25.u8);
loc_82115000:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8210e8e0
	ctx.lr = 0x82115008;
	sub_8210E8E0(ctx, base);
	// li r10,28
	ctx.r10.s64 = 28;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// bl 0x82173a08
	ctx.lr = 0x82115018;
	sub_82173A08(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x8259bb34
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82115028"))) PPC_WEAK_FUNC(sub_82115028);
PPC_FUNC_IMPL(__imp__sub_82115028) {
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
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// ori r9,r10,16292
	ctx.r9.u64 = ctx.r10.u64 | 16292;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lbzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82115070
	if (ctx.cr6.eq) goto loc_82115070;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lbz r7,-32560(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + -32560);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82115074
	if (!ctx.cr6.eq) goto loc_82115074;
loc_82115070:
	// li r10,1
	ctx.r10.s64 = 1;
loc_82115074:
	// clrlwi r5,r10,24
	ctx.r5.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x821150e8
	if (!ctx.cr6.eq) goto loc_821150E8;
	// addi r3,r11,92
	ctx.r3.s64 = ctx.r11.s64 + 92;
	// bl 0x8210b3c8
	ctx.lr = 0x82115088;
	sub_8210B3C8(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r3,r11,13000
	ctx.r3.s64 = ctx.r11.s64 + 13000;
	// bl 0x821fe9c8
	ctx.lr = 0x82115094;
	sub_821FE9C8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82104550
	ctx.lr = 0x8211509C;
	sub_82104550(ctx, base);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r11,r11,-24936
	ctx.r11.s64 = ctx.r11.s64 + -24936;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821150e8
	if (ctx.cr6.eq) goto loc_821150E8;
	// lis r4,-8415
	ctx.r4.s64 = -551485440;
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// lis r10,-27114
	ctx.r10.s64 = -1776943104;
	// ori r3,r4,27832
	ctx.r3.u64 = ctx.r4.u64 | 27832;
	// ori r9,r10,2197
	ctx.r9.u64 = ctx.r10.u64 | 2197;
	// rldimi r3,r9,32,0
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r3.u64 & 0xFFFFFFFF);
	// cmpld cr6,r11,r3
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r3.u64, ctx.xer);
	// bne cr6,0x821150e8
	if (!ctx.cr6.eq) goto loc_821150E8;
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r3,r11,22016
	ctx.r3.s64 = ctx.r11.s64 + 22016;
	// lbz r8,4715(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4715);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821150e8
	if (ctx.cr6.eq) goto loc_821150E8;
	// bl 0x820f72c8
	ctx.lr = 0x821150E8;
	sub_820F72C8(ctx, base);
loc_821150E8:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,68(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-12136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12136);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// addi r31,r11,28544
	ctx.r31.s64 = ctx.r11.s64 + 28544;
	// beq cr6,0x8211511c
	if (ctx.cr6.eq) goto loc_8211511C;
	// lfs f13,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f0,-1648(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1648);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8211512c
	if (!ctx.cr6.gt) goto loc_8211512C;
loc_8211511C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8210e8e0
	ctx.lr = 0x82115124;
	sub_8210E8E0(ctx, base);
	// lfs f0,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 68, temp.u32);
loc_8211512C:
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

__attribute__((alias("__imp__sub_82115144"))) PPC_WEAK_FUNC(sub_82115144);
PPC_FUNC_IMPL(__imp__sub_82115144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82115148"))) PPC_WEAK_FUNC(sub_82115148);
PPC_FUNC_IMPL(__imp__sub_82115148) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,2384(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2384);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8211515c
	if (ctx.cr6.eq) goto loc_8211515C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8211515C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82115164"))) PPC_WEAK_FUNC(sub_82115164);
PPC_FUNC_IMPL(__imp__sub_82115164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82115168"))) PPC_WEAK_FUNC(sub_82115168);
PPC_FUNC_IMPL(__imp__sub_82115168) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,2384(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2384);
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8211517c
	if (ctx.cr6.eq) goto loc_8211517C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8211517C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82115184"))) PPC_WEAK_FUNC(sub_82115184);
PPC_FUNC_IMPL(__imp__sub_82115184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82115188"))) PPC_WEAK_FUNC(sub_82115188);
PPC_FUNC_IMPL(__imp__sub_82115188) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,2384(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2384);
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8211519c
	if (ctx.cr6.eq) goto loc_8211519C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8211519C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821151A4"))) PPC_WEAK_FUNC(sub_821151A4);
PPC_FUNC_IMPL(__imp__sub_821151A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821151A8"))) PPC_WEAK_FUNC(sub_821151A8);
PPC_FUNC_IMPL(__imp__sub_821151A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,2384(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2384);
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x821151c4
	if (!ctx.cr6.eq) goto loc_821151C4;
	// lbz r10,2892(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2892);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821151c8
	if (ctx.cr6.eq) goto loc_821151C8;
loc_821151C4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821151C8:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821151D0"))) PPC_WEAK_FUNC(sub_821151D0);
PPC_FUNC_IMPL(__imp__sub_821151D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,2992(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2992);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x821151e4
	if (ctx.cr6.eq) goto loc_821151E4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821151E4:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821151EC"))) PPC_WEAK_FUNC(sub_821151EC);
PPC_FUNC_IMPL(__imp__sub_821151EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821151F0"))) PPC_WEAK_FUNC(sub_821151F0);
PPC_FUNC_IMPL(__imp__sub_821151F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,3020(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3020);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82115204
	if (ctx.cr6.eq) goto loc_82115204;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82115204:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8211520C"))) PPC_WEAK_FUNC(sub_8211520C);
PPC_FUNC_IMPL(__imp__sub_8211520C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82115210"))) PPC_WEAK_FUNC(sub_82115210);
PPC_FUNC_IMPL(__imp__sub_82115210) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,2992(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2992);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82115224
	if (ctx.cr6.eq) goto loc_82115224;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82115224:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8211522C"))) PPC_WEAK_FUNC(sub_8211522C);
PPC_FUNC_IMPL(__imp__sub_8211522C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82115230"))) PPC_WEAK_FUNC(sub_82115230);
PPC_FUNC_IMPL(__imp__sub_82115230) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,5904
	ctx.r3.s64 = ctx.r3.s64 + 5904;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82115238"))) PPC_WEAK_FUNC(sub_82115238);
PPC_FUNC_IMPL(__imp__sub_82115238) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,3056(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3056);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8211524c
	if (ctx.cr6.eq) goto loc_8211524C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8211524C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82115254"))) PPC_WEAK_FUNC(sub_82115254);
PPC_FUNC_IMPL(__imp__sub_82115254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82115258"))) PPC_WEAK_FUNC(sub_82115258);
PPC_FUNC_IMPL(__imp__sub_82115258) {
	PPC_FUNC_PROLOGUE();
	// li r3,6
	ctx.r3.s64 = 6;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82115260"))) PPC_WEAK_FUNC(sub_82115260);
PPC_FUNC_IMPL(__imp__sub_82115260) {
	PPC_FUNC_PROLOGUE();
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82115268"))) PPC_WEAK_FUNC(sub_82115268);
PPC_FUNC_IMPL(__imp__sub_82115268) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,5080
	ctx.r3.s64 = ctx.r3.s64 + 5080;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82115270"))) PPC_WEAK_FUNC(sub_82115270);
PPC_FUNC_IMPL(__imp__sub_82115270) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,2384(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2384);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82115284
	if (ctx.cr6.eq) goto loc_82115284;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82115284:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8211528C"))) PPC_WEAK_FUNC(sub_8211528C);
PPC_FUNC_IMPL(__imp__sub_8211528C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82115290"))) PPC_WEAK_FUNC(sub_82115290);
PPC_FUNC_IMPL(__imp__sub_82115290) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,3488(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3488);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x821152a4
	if (ctx.cr6.eq) goto loc_821152A4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821152A4:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821152AC"))) PPC_WEAK_FUNC(sub_821152AC);
PPC_FUNC_IMPL(__imp__sub_821152AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821152B0"))) PPC_WEAK_FUNC(sub_821152B0);
PPC_FUNC_IMPL(__imp__sub_821152B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,3488(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3488);
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x821152c4
	if (ctx.cr6.eq) goto loc_821152C4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821152C4:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821152CC"))) PPC_WEAK_FUNC(sub_821152CC);
PPC_FUNC_IMPL(__imp__sub_821152CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821152D0"))) PPC_WEAK_FUNC(sub_821152D0);
PPC_FUNC_IMPL(__imp__sub_821152D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baec
	ctx.lr = 0x821152D8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r11,-32560(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -32560);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211545c
	if (ctx.cr6.eq) goto loc_8211545C;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// addis r8,r31,3
	ctx.r8.s64 = ctx.r31.s64 + 196608;
	// ori r9,r10,16216
	ctx.r9.u64 = ctx.r10.u64 | 16216;
	// addi r8,r8,24760
	ctx.r8.s64 = ctx.r8.s64 + 24760;
	// lis r6,7
	ctx.r6.s64 = 458752;
	// ori r11,r6,16247
	ctx.r11.u64 = ctx.r6.u64 | 16247;
	// lwzx r7,r31,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8211531c
	if (!ctx.cr6.eq) goto loc_8211531C;
	// li r5,0
	ctx.r5.s64 = 0;
	// stbx r5,r31,r11
	PPC_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r5.u8);
loc_8211531C:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addis r11,r31,7
	ctx.r11.s64 = ctx.r31.s64 + 458752;
	// addi r11,r11,16248
	ctx.r11.s64 = ctx.r11.s64 + 16248;
	// lbzx r10,r31,r4
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r4.u32);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82115374
	if (ctx.cr6.eq) goto loc_82115374;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r11,r11,28928
	ctx.r11.s64 = ctx.r11.s64 + 28928;
	// lwz r3,196(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// beq cr6,0x82115364
	if (ctx.cr6.eq) goto loc_82115364;
	// lwz r11,476(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 476);
	// li r4,2
	ctx.r4.s64 = 2;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// b 0x82115370
	goto loc_82115370;
loc_82115364:
	// lwz r10,476(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 476);
	// li r4,1
	ctx.r4.s64 = 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82115370:
	// bctrl 
	ctx.lr = 0x82115374;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82115374:
	// addis r27,r31,7
	ctx.r27.s64 = ctx.r31.s64 + 458752;
	// lis r10,-32160
	ctx.r10.s64 = -2107637760;
	// addi r27,r27,16232
	ctx.r27.s64 = ctx.r27.s64 + 16232;
	// addi r26,r10,-18560
	ctx.r26.s64 = ctx.r10.s64 + -18560;
	// lis r9,7
	ctx.r9.s64 = 458752;
	// lis r8,7
	ctx.r8.s64 = 458752;
	// lis r10,-32085
	ctx.r10.s64 = -2102722560;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// ori r30,r9,16228
	ctx.r30.u64 = ctx.r9.u64 | 16228;
	// li r28,-1
	ctx.r28.s64 = -1;
	// ori r29,r8,16236
	ctx.r29.u64 = ctx.r8.u64 | 16236;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// addi r25,r10,28544
	ctx.r25.s64 = ctx.r10.s64 + 28544;
	// beq cr6,0x821153d8
	if (ctx.cr6.eq) goto loc_821153D8;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stwx r11,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r11.u32);
	// bl 0x82370cc0
	ctx.lr = 0x821153B8;
	sub_82370CC0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822ae9b8
	ctx.lr = 0x821153C4;
	sub_822AE9B8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x82114700
	ctx.lr = 0x821153D0;
	sub_82114700(ctx, base);
	// stw r28,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r28.u32);
	// stwx r28,r31,r29
	PPC_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r28.u32);
loc_821153D8:
	// add r10,r31,r30
	ctx.r10.u64 = ctx.r31.u64 + ctx.r30.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x8211545c
	if (ctx.cr6.eq) goto loc_8211545C;
	// add r30,r31,r29
	ctx.r30.u64 = ctx.r31.u64 + ctx.r29.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8211545c
	if (ctx.cr6.eq) goto loc_8211545C;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82115454
	if (!ctx.cr6.eq) goto loc_82115454;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// stw r28,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r28.u32);
	// lis r7,7
	ctx.r7.s64 = 458752;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// ori r6,r7,16216
	ctx.r6.u64 = ctx.r7.u64 | 16216;
	// lwzx r11,r11,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82115440
	if (ctx.cr6.eq) goto loc_82115440;
	// lis r5,0
	ctx.r5.s64 = 0;
	// ori r4,r5,46272
	ctx.r4.u64 = ctx.r5.u64 | 46272;
	// lbzx r3,r11,r4
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82115440
	if (!ctx.cr6.eq) goto loc_82115440;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822ae9f0
	ctx.lr = 0x82115440;
	sub_822AE9F0(ctx, base);
loc_82115440:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x82114700
	ctx.lr = 0x8211544C;
	sub_82114700(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82370c88
	ctx.lr = 0x82115454;
	sub_82370C88(ctx, base);
loc_82115454:
	// stw r28,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r28.u32);
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
loc_8211545C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82115464"))) PPC_WEAK_FUNC(sub_82115464);
PPC_FUNC_IMPL(__imp__sub_82115464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82115468"))) PPC_WEAK_FUNC(sub_82115468);
PPC_FUNC_IMPL(__imp__sub_82115468) {
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
	// beq cr6,0x8211548c
	if (ctx.cr6.eq) goto loc_8211548C;
	// bl 0x82114230
	ctx.lr = 0x8211548C;
	sub_82114230(ctx, base);
loc_8211548C:
	// lis r10,7
	ctx.r10.s64 = 458752;
	// li r8,1
	ctx.r8.s64 = 1;
	// ori r9,r10,16224
	ctx.r9.u64 = ctx.r10.u64 | 16224;
	// stbx r8,r31,r9
	PPC_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r8.u8);
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

__attribute__((alias("__imp__sub_821154B0"))) PPC_WEAK_FUNC(sub_821154B0);
PPC_FUNC_IMPL(__imp__sub_821154B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x821154B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82104620
	ctx.lr = 0x821154C8;
	sub_82104620(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r11,12488
	ctx.r30.s64 = ctx.r11.s64 + 12488;
loc_821154D4:
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82115560
	if (ctx.cr6.eq) goto loc_82115560;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x82115548
	if (ctx.cr6.eq) goto loc_82115548;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x82115548
	if (ctx.cr6.eq) goto loc_82115548;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82115540
	if (ctx.cr6.eq) goto loc_82115540;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82115540
	if (ctx.cr6.eq) goto loc_82115540;
	// rlwinm r9,r31,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r3
	ctx.r7.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// lhz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r7.u32 + 8);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82115538
	if (!ctx.cr6.eq) goto loc_82115538;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82115538:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// b 0x82115554
	goto loc_82115554;
loc_82115540:
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x8211554c
	goto loc_8211554C;
loc_82115548:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8211554C:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x821088b8
	ctx.lr = 0x82115554;
	sub_821088B8(ctx, base);
loc_82115554:
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8211557c
	if (!ctx.cr6.eq) goto loc_8211557C;
loc_82115560:
	// addi r4,r29,1
	ctx.r4.s64 = ctx.r29.s64 + 1;
	// extsb r29,r4
	ctx.r29.s64 = ctx.r4.s8;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// blt cr6,0x821154d4
	if (ctx.cr6.lt) goto loc_821154D4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_8211557C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82115588"))) PPC_WEAK_FUNC(sub_82115588);
PPC_FUNC_IMPL(__imp__sub_82115588) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x82115590;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x821145b8
	ctx.lr = 0x8211559C;
	sub_821145B8(ctx, base);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r28,r11,26080
	ctx.r28.s64 = ctx.r11.s64 + 26080;
loc_821155A8:
	// mulli r11,r30,360
	ctx.r11.s64 = ctx.r30.s64 * 360;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r31,r11,1000
	ctx.r31.s64 = ctx.r11.s64 + 1000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8210b630
	ctx.lr = 0x821155BC;
	sub_8210B630(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821155d0
	if (ctx.cr6.eq) goto loc_821155D0;
	// lfs f0,128(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,356(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 356, temp.u32);
loc_821155D0:
	// addi r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 1;
	// extsb r30,r10
	ctx.r30.s64 = ctx.r10.s8;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// blt cr6,0x821155a8
	if (ctx.cr6.lt) goto loc_821155A8;
	// addis r11,r28,8
	ctx.r11.s64 = ctx.r28.s64 + 524288;
	// addi r3,r11,24504
	ctx.r3.s64 = ctx.r11.s64 + 24504;
	// bl 0x8212bb98
	ctx.lr = 0x821155EC;
	sub_8212BB98(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821155F4"))) PPC_WEAK_FUNC(sub_821155F4);
PPC_FUNC_IMPL(__imp__sub_821155F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821155F8"))) PPC_WEAK_FUNC(sub_821155F8);
PPC_FUNC_IMPL(__imp__sub_821155F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82115600;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r11,26080
	ctx.r30.s64 = ctx.r11.s64 + 26080;
loc_82115614:
	// mulli r11,r31,360
	ctx.r11.s64 = ctx.r31.s64 * 360;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r3,r30,92
	ctx.r3.s64 = ctx.r30.s64 + 92;
	// addi r4,r11,1000
	ctx.r4.s64 = ctx.r11.s64 + 1000;
	// bl 0x8210b3c8
	ctx.lr = 0x82115628;
	sub_8210B3C8(ctx, base);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r3,r4,12
	ctx.r3.s64 = ctx.r4.s64 + 12;
	// bl 0x821117c8
	ctx.lr = 0x82115634;
	sub_821117C8(ctx, base);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// extsb r31,r11
	ctx.r31.s64 = ctx.r11.s8;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// blt cr6,0x82115614
	if (ctx.cr6.lt) goto loc_82115614;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8211564C"))) PPC_WEAK_FUNC(sub_8211564C);
PPC_FUNC_IMPL(__imp__sub_8211564C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82115650"))) PPC_WEAK_FUNC(sub_82115650);
PPC_FUNC_IMPL(__imp__sub_82115650) {
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
	// lbz r11,2508(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2508);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82115678
	if (ctx.cr6.eq) goto loc_82115678;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82114700
	ctx.lr = 0x82115678;
	sub_82114700(ctx, base);
loc_82115678:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
loc_82115680:
	// add r8,r11,r31
	ctx.r8.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// extsb r11,r9
	ctx.r11.s64 = ctx.r9.s8;
	// stb r10,2509(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2509, ctx.r10.u8);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x82115680
	if (ctx.cr6.lt) goto loc_82115680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821145b8
	ctx.lr = 0x821156A0;
	sub_821145B8(ctx, base);
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

__attribute__((alias("__imp__sub_821156B4"))) PPC_WEAK_FUNC(sub_821156B4);
PPC_FUNC_IMPL(__imp__sub_821156B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821156B8"))) PPC_WEAK_FUNC(sub_821156B8);
PPC_FUNC_IMPL(__imp__sub_821156B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae8
	ctx.lr = 0x821156C0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x821145b8
	ctx.lr = 0x821156D0;
	sub_821145B8(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r26,0
	ctx.r26.s64 = 0;
	// clrlwi r24,r31,24
	ctx.r24.u64 = ctx.r31.u32 & 0xFF;
	// li r28,0
	ctx.r28.s64 = 0;
	// stb r11,2440(r27)
	PPC_STORE_U8(ctx.r27.u32 + 2440, ctx.r11.u8);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r25,r11,26080
	ctx.r25.s64 = ctx.r11.s64 + 26080;
loc_821156EC:
	// mulli r11,r28,360
	ctx.r11.s64 = ctx.r28.s64 * 360;
	// add r29,r11,r27
	ctx.r29.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r31,r29,1000
	ctx.r31.s64 = ctx.r29.s64 + 1000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8210b630
	ctx.lr = 0x82115700;
	sub_8210B630(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82115714
	if (ctx.cr6.eq) goto loc_82115714;
	// lfs f0,128(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,356(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 356, temp.u32);
loc_82115714:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82115730
	if (ctx.cr6.eq) goto loc_82115730;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8210b630
	ctx.lr = 0x82115724;
	sub_8210B630(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// b 0x82115820
	goto loc_82115820;
loc_82115730:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x82360838
	ctx.lr = 0x8211573C;
	sub_82360838(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82115758
	if (ctx.cr6.eq) goto loc_82115758;
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x823608c8
	ctx.lr = 0x82115754;
	sub_823608C8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82115758:
	// clrlwi r7,r30,24
	ctx.r7.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82115840
	if (!ctx.cr6.eq) goto loc_82115840;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x82360838
	ctx.lr = 0x82115770;
	sub_82360838(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8211578c
	if (ctx.cr6.eq) goto loc_8211578C;
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82360878
	ctx.lr = 0x82115788;
	sub_82360878(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_8211578C:
	// clrlwi r5,r30,24
	ctx.r5.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82115840
	if (!ctx.cr6.eq) goto loc_82115840;
	// lhz r4,1212(r29)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r29.u32 + 1212);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x821157ac
	if (!ctx.cr6.eq) goto loc_821157AC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821157AC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82115840
	if (!ctx.cr6.eq) goto loc_82115840;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x82360838
	ctx.lr = 0x821157C4;
	sub_82360838(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821157e0
	if (ctx.cr6.eq) goto loc_821157E0;
	// li r4,12
	ctx.r4.s64 = 12;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x823608c8
	ctx.lr = 0x821157DC;
	sub_823608C8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_821157E0:
	// clrlwi r9,r30,24
	ctx.r9.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82115840
	if (!ctx.cr6.eq) goto loc_82115840;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8210b6d8
	ctx.lr = 0x821157F8;
	sub_8210B6D8(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82115840
	if (!ctx.cr6.eq) goto loc_82115840;
	// lhz r7,1164(r29)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r29.u32 + 1164);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82115818
	if (!ctx.cr6.eq) goto loc_82115818;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82115818:
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
loc_82115820:
	// bne cr6,0x82115840
	if (!ctx.cr6.eq) goto loc_82115840;
	// addi r4,r28,1
	ctx.r4.s64 = ctx.r28.s64 + 1;
	// extsb r26,r4
	ctx.r26.s64 = ctx.r4.s8;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 4, ctx.xer);
	// blt cr6,0x821156ec
	if (ctx.cr6.lt) goto loc_821156EC;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
loc_82115840:
	// stb r26,2440(r27)
	PPC_STORE_U8(ctx.r27.u32 + 2440, ctx.r26.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8211584C"))) PPC_WEAK_FUNC(sub_8211584C);
PPC_FUNC_IMPL(__imp__sub_8211584C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82115850"))) PPC_WEAK_FUNC(sub_82115850);
PPC_FUNC_IMPL(__imp__sub_82115850) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae8
	ctx.lr = 0x82115858;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r26,r11,26080
	ctx.r26.s64 = ctx.r11.s64 + 26080;
loc_82115874:
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8211587C:
	// add r10,r11,r27
	ctx.r10.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lbz r8,2443(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2443);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821158a0
	if (ctx.cr6.eq) goto loc_821158A0;
	// lbz r7,2441(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2441);
	// extsb r6,r28
	ctx.r6.s64 = ctx.r28.s8;
	// extsb r5,r7
	ctx.r5.s64 = ctx.r7.s8;
	// cmpw cr6,r5,r6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// beq cr6,0x821158b4
	if (ctx.cr6.eq) goto loc_821158B4;
loc_821158A0:
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// extsb r9,r4
	ctx.r9.s64 = ctx.r4.s8;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x8211587c
	if (ctx.cr6.lt) goto loc_8211587C;
loc_821158B4:
	// extsb r3,r9
	ctx.r3.s64 = ctx.r9.s8;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x82115960
	if (!ctx.cr6.eq) goto loc_82115960;
	// extsb r11,r28
	ctx.r11.s64 = ctx.r28.s8;
	// mulli r11,r11,360
	ctx.r11.s64 = ctx.r11.s64 * 360;
	// add r29,r11,r27
	ctx.r29.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r31,r29,1000
	ctx.r31.s64 = ctx.r29.s64 + 1000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8210b630
	ctx.lr = 0x821158D8;
	sub_8210B630(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821158ec
	if (ctx.cr6.eq) goto loc_821158EC;
	// lfs f0,128(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,356(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 356, temp.u32);
loc_821158EC:
	// clrlwi r9,r24,24
	ctx.r9.u64 = ctx.r24.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8211590c
	if (ctx.cr6.eq) goto loc_8211590C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8210b630
	ctx.lr = 0x82115900;
	sub_8210B630(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// b 0x8211595c
	goto loc_8211595C;
loc_8211590C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x82360838
	ctx.lr = 0x82115918;
	sub_82360838(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82115934
	if (ctx.cr6.eq) goto loc_82115934;
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82360878
	ctx.lr = 0x82115930;
	sub_82360878(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82115934:
	// clrlwi r6,r30,24
	ctx.r6.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82115970
	if (!ctx.cr6.eq) goto loc_82115970;
	// lhz r5,1212(r29)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r29.u32 + 1212);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82115954
	if (!ctx.cr6.eq) goto loc_82115954;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82115954:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
loc_8211595C:
	// bne cr6,0x82115970
	if (!ctx.cr6.eq) goto loc_82115970;
loc_82115960:
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// extsb r28,r11
	ctx.r28.s64 = ctx.r11.s8;
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 4, ctx.xer);
	// blt cr6,0x82115874
	if (ctx.cr6.lt) goto loc_82115874;
loc_82115970:
	// extsb r9,r28
	ctx.r9.s64 = ctx.r28.s8;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// beq cr6,0x8211599c
	if (ctx.cr6.eq) goto loc_8211599C;
	// extsb r11,r25
	ctx.r11.s64 = ctx.r25.s8;
	// li r8,1
	ctx.r8.s64 = 1;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stb r8,2443(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2443, ctx.r8.u8);
	// stb r28,2441(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2441, ctx.r28.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
loc_8211599C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821159A8"))) PPC_WEAK_FUNC(sub_821159A8);
PPC_FUNC_IMPL(__imp__sub_821159A8) {
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
	// li r7,1
	ctx.r7.s64 = 1;
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// stw r9,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r9.u32);
loc_821159DC:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r8,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r8.u32);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821159dc
	if (!ctx.cr6.eq) goto loc_821159DC;
	// li r6,14
	ctx.r6.s64 = 14;
	// stw r8,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r8.u32);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// stw r8,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
	// stw r8,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r8.u32);
	// stw r8,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r8.u32);
	// stb r8,55(r31)
	PPC_STORE_U8(ctx.r31.u32 + 55, ctx.r8.u8);
	// stw r6,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r6.u32);
	// stb r8,54(r31)
	PPC_STORE_U8(ctx.r31.u32 + 54, ctx.r8.u8);
	// lwz r10,23988(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23988);
	// lwz r9,23988(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23988);
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// addi r10,r9,2
	ctx.r10.s64 = ctx.r9.s64 + 2;
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r6,r9
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x82115a68
	if (ctx.cr6.eq) goto loc_82115A68;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82115A68:
	// clrlwi r4,r10,24
	ctx.r4.u64 = ctx.r10.u32 & 0xFF;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82115a7c
	if (!ctx.cr6.eq) goto loc_82115A7C;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82115A7C:
	// clrlwi r3,r10,24
	ctx.r3.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82115cf8
	if (!ctx.cr6.eq) goto loc_82115CF8;
	// lwz r10,23988(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23988);
	// lwz r9,23988(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23988);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r10,r9,5
	ctx.r10.s64 = ctx.r9.s64 + 5;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpw cr6,r10,r3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, ctx.xer);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// beq cr6,0x82115ad8
	if (ctx.cr6.eq) goto loc_82115AD8;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82115AD8:
	// clrlwi r6,r10,24
	ctx.r6.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82115b28
	if (ctx.cr6.eq) goto loc_82115B28;
	// li r5,2
	ctx.r5.s64 = 2;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r5,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r5.u32);
	// stw r11,23500(r10)
	PPC_STORE_U32(ctx.r10.u32 + 23500, ctx.r11.u32);
	// bl 0x82104868
	ctx.lr = 0x82115B00;
	sub_82104868(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821048f0
	ctx.lr = 0x82115B08;
	sub_821048F0(ctx, base);
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r3,r11,-14944
	ctx.r3.s64 = ctx.r11.s64 + -14944;
	// bl 0x82105f28
	ctx.lr = 0x82115B14;
	sub_82105F28(ctx, base);
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
loc_82115B28:
	// lwz r10,23988(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23988);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r6,r9
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x82115b6c
	if (ctx.cr6.eq) goto loc_82115B6C;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82115B6C:
	// clrlwi r4,r10,24
	ctx.r4.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82115bb8
	if (ctx.cr6.eq) goto loc_82115BB8;
	// li r11,7
	ctx.r11.s64 = 7;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r11,23500(r10)
	PPC_STORE_U32(ctx.r10.u32 + 23500, ctx.r11.u32);
	// bl 0x82104868
	ctx.lr = 0x82115B90;
	sub_82104868(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821048f0
	ctx.lr = 0x82115B98;
	sub_821048F0(ctx, base);
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r3,r11,-14944
	ctx.r3.s64 = ctx.r11.s64 + -14944;
	// bl 0x82105f28
	ctx.lr = 0x82115BA4;
	sub_82105F28(ctx, base);
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
loc_82115BB8:
	// lwz r10,23988(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23988);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r5,r6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// beq cr6,0x82115bfc
	if (ctx.cr6.eq) goto loc_82115BFC;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82115BFC:
	// clrlwi r3,r10,24
	ctx.r3.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82115c48
	if (ctx.cr6.eq) goto loc_82115C48;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// stw r7,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r7.u32);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,23500(r10)
	PPC_STORE_U32(ctx.r10.u32 + 23500, ctx.r11.u32);
	// bl 0x82104868
	ctx.lr = 0x82115C20;
	sub_82104868(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821048f0
	ctx.lr = 0x82115C28;
	sub_821048F0(ctx, base);
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r3,r11,-14944
	ctx.r3.s64 = ctx.r11.s64 + -14944;
	// bl 0x82105f28
	ctx.lr = 0x82115C34;
	sub_82105F28(ctx, base);
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
loc_82115C48:
	// lwz r10,23988(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23988);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r3,r4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x82115c8c
	if (ctx.cr6.eq) goto loc_82115C8C;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82115C8C:
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82115ce4
	if (!ctx.cr6.eq) goto loc_82115CE4;
	// lwz r11,23988(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23988);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x82115cd8
	if (!ctx.cr6.eq) goto loc_82115CD8;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
loc_82115CD8:
	// clrlwi r9,r8,24
	ctx.r9.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82115cf8
	if (ctx.cr6.eq) goto loc_82115CF8;
loc_82115CE4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8210fa70
	ctx.lr = 0x82115CEC;
	sub_8210FA70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8210fa20
	ctx.lr = 0x82115CF8;
	sub_8210FA20(ctx, base);
loc_82115CF8:
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

__attribute__((alias("__imp__sub_82115D0C"))) PPC_WEAK_FUNC(sub_82115D0C);
PPC_FUNC_IMPL(__imp__sub_82115D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82115D10"))) PPC_WEAK_FUNC(sub_82115D10);
PPC_FUNC_IMPL(__imp__sub_82115D10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x82115D18;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r10,54
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 54, ctx.xer);
	// bgt cr6,0x82116338
	if (ctx.cr6.gt) goto loc_82116338;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r30,-32126
	ctx.r30.s64 = -2105409536;
	// addi r28,r11,26080
	ctx.r28.s64 = ctx.r11.s64 + 26080;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// li r27,1
	ctx.r27.s64 = 1;
	// addi r29,r11,-21272
	ctx.r29.s64 = ctx.r11.s64 + -21272;
	// lis r12,-32239
	ctx.r12.s64 = -2112815104;
	// addi r12,r12,23904
	ctx.r12.s64 = ctx.r12.s64 + 23904;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_82115E3C;
	case 1:
		goto loc_82115E44;
	case 2:
		goto loc_82115EA0;
	case 3:
		goto loc_82115EC8;
	case 4:
		goto loc_82115FD0;
	case 5:
		goto loc_821160A4;
	case 6:
		goto loc_821161AC;
	case 7:
		goto loc_82116280;
	case 8:
		goto loc_821162D0;
	case 9:
		goto loc_821162F4;
	case 10:
		goto loc_82116310;
	case 11:
		goto loc_82116330;
	case 12:
		goto loc_82116338;
	case 13:
		goto loc_82116338;
	case 14:
		goto loc_82116338;
	case 15:
		goto loc_82116338;
	case 16:
		goto loc_82116338;
	case 17:
		goto loc_82116338;
	case 18:
		goto loc_82116338;
	case 19:
		goto loc_82116338;
	case 20:
		goto loc_82116338;
	case 21:
		goto loc_82116338;
	case 22:
		goto loc_82116338;
	case 23:
		goto loc_82116338;
	case 24:
		goto loc_82116338;
	case 25:
		goto loc_82116338;
	case 26:
		goto loc_82116338;
	case 27:
		goto loc_82116338;
	case 28:
		goto loc_82116338;
	case 29:
		goto loc_82116338;
	case 30:
		goto loc_82116338;
	case 31:
		goto loc_82116338;
	case 32:
		goto loc_82116338;
	case 33:
		goto loc_82116338;
	case 34:
		goto loc_82116338;
	case 35:
		goto loc_82116338;
	case 36:
		goto loc_82116338;
	case 37:
		goto loc_82116338;
	case 38:
		goto loc_82116338;
	case 39:
		goto loc_82116338;
	case 40:
		goto loc_82116338;
	case 41:
		goto loc_82116338;
	case 42:
		goto loc_82116338;
	case 43:
		goto loc_82116338;
	case 44:
		goto loc_82116338;
	case 45:
		goto loc_82116338;
	case 46:
		goto loc_82116338;
	case 47:
		goto loc_82116338;
	case 48:
		goto loc_82116338;
	case 49:
		goto loc_82116338;
	case 50:
		goto loc_82116338;
	case 51:
		goto loc_82116338;
	case 52:
		goto loc_82116338;
	case 53:
		goto loc_82116338;
	case 54:
		goto loc_82115E3C;
	default:
		__builtin_unreachable();
	}
	// lwz r16,24124(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 24124);
	// lwz r16,24132(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 24132);
	// lwz r16,24224(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 24224);
	// lwz r16,24264(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 24264);
	// lwz r16,24528(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 24528);
	// lwz r16,24740(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 24740);
	// lwz r16,25004(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 25004);
	// lwz r16,25216(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 25216);
	// lwz r16,25296(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 25296);
	// lwz r16,25332(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 25332);
	// lwz r16,25360(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 25360);
	// lwz r16,25392(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 25392);
	// lwz r16,25400(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 25400);
	// lwz r16,25400(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 25400);
	// lwz r16,25400(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 25400);
	// lwz r16,25400(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 25400);
	// lwz r16,25400(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 25400);
	// lwz r16,25400(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 25400);
	// lwz r16,25400(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 25400);
	// lwz r16,25400(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 25400);
	// lwz r16,25400(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 25400);
	// lwz r16,25400(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 25400);
	// lwz r16,25400(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 25400);
	// lwz r16,25400(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 25400);
	// lwz r16,25400(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 25400);
	// lwz r16,25400(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 25400);
	// lwz r16,25400(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 25400);
	// lwz r16,25400(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 25400);
	// lwz r16,25400(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 25400);
	// lwz r16,25400(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 25400);
	// lwz r16,25400(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 25400);
	// lwz r16,25400(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 25400);
	// lwz r16,25400(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 25400);
	// lwz r16,25400(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 25400);
	// lwz r16,25400(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 25400);
	// lwz r16,25400(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 25400);
	// lwz r16,25400(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 25400);
	// lwz r16,25400(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 25400);
	// lwz r16,25400(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 25400);
	// lwz r16,25400(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 25400);
	// lwz r16,25400(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 25400);
	// lwz r16,25400(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 25400);
	// lwz r16,25400(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 25400);
	// lwz r16,25400(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 25400);
	// lwz r16,25400(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 25400);
	// lwz r16,25400(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 25400);
	// lwz r16,25400(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 25400);
	// lwz r16,25400(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 25400);
	// lwz r16,25400(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 25400);
	// lwz r16,25400(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 25400);
	// lwz r16,25400(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 25400);
	// lwz r16,25400(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 25400);
	// lwz r16,25400(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 25400);
	// lwz r16,25400(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 25400);
	// lwz r16,24124(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 24124);
loc_82115E3C:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82115E44:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,33
	ctx.r4.s64 = 33;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8210cf48
	ctx.lr = 0x82115E54;
	sub_8210CF48(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// stw r6,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r6.u32);
	// bne cr6,0x82115e70
	if (!ctx.cr6.eq) goto loc_82115E70;
loc_82115E64:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_82115E70:
	// li r4,33
	ctx.r4.s64 = 33;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8210d3f0
	ctx.lr = 0x82115E7C;
	sub_8210D3F0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r4,r11,6756
	ctx.r4.s64 = ctx.r11.s64 + 6756;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r31,53
	ctx.r5.s64 = ctx.r31.s64 + 53;
	// addi r3,r28,2736
	ctx.r3.s64 = ctx.r28.s64 + 2736;
	// bl 0x8210e1f0
	ctx.lr = 0x82115E98;
	sub_8210E1F0(ctx, base);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_82115EA0:
	// lbz r9,53(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 53);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82115e64
	if (ctx.cr6.eq) goto loc_82115E64;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82359c90
	ctx.lr = 0x82115EB4;
	sub_82359C90(ctx, base);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x823522c0
	ctx.lr = 0x82115EBC;
	sub_823522C0(ctx, base);
	// li r8,4
	ctx.r8.s64 = 4;
	// stb r27,55(r31)
	PPC_STORE_U8(ctx.r31.u32 + 55, ctx.r27.u8);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
loc_82115EC8:
	// lwz r11,23988(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23988);
	// lwz r10,23988(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23988);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// addi r11,r10,5
	ctx.r11.s64 = ctx.r10.s64 + 5;
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// beq cr6,0x82115f18
	if (ctx.cr6.eq) goto loc_82115F18;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82115F18:
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82115fc0
	if (!ctx.cr6.eq) goto loc_82115FC0;
	// lwz r11,23988(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23988);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// beq cr6,0x82115f68
	if (ctx.cr6.eq) goto loc_82115F68;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82115F68:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82115fc0
	if (!ctx.cr6.eq) goto loc_82115FC0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,31
	ctx.r4.s64 = 31;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8210cf48
	ctx.lr = 0x82115F84;
	sub_8210CF48(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// stw r6,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r6.u32);
	// beq cr6,0x82115e64
	if (ctx.cr6.eq) goto loc_82115E64;
	// li r4,31
	ctx.r4.s64 = 31;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8210d3f0
	ctx.lr = 0x82115FA0;
	sub_8210D3F0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r4,r11,6784
	ctx.r4.s64 = ctx.r11.s64 + 6784;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r31,53
	ctx.r5.s64 = ctx.r31.s64 + 53;
	// addi r3,r28,2736
	ctx.r3.s64 = ctx.r28.s64 + 2736;
	// bl 0x8210e1f0
	ctx.lr = 0x82115FBC;
	sub_8210E1F0(ctx, base);
	// b 0x82115fc8
	goto loc_82115FC8;
loc_82115FC0:
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
loc_82115FC8:
	// li r9,5
	ctx.r9.s64 = 5;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
loc_82115FD0:
	// lwz r11,23988(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23988);
	// lwz r10,23988(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23988);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// addi r11,r10,5
	ctx.r11.s64 = ctx.r10.s64 + 5;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r3,r4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x82116020
	if (ctx.cr6.eq) goto loc_82116020;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82116020:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82116098
	if (!ctx.cr6.eq) goto loc_82116098;
	// lwz r11,23988(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23988);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r5,r6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// beq cr6,0x82116070
	if (ctx.cr6.eq) goto loc_82116070;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82116070:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82116098
	if (!ctx.cr6.eq) goto loc_82116098;
	// lbz r11,53(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 53);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82115e64
	if (ctx.cr6.eq) goto loc_82115E64;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82359c90
	ctx.lr = 0x82116090;
	sub_82359C90(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x823522c0
	ctx.lr = 0x82116098;
	sub_823522C0(ctx, base);
loc_82116098:
	// li r10,6
	ctx.r10.s64 = 6;
	// stb r27,54(r31)
	PPC_STORE_U8(ctx.r31.u32 + 54, ctx.r27.u8);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_821160A4:
	// lwz r11,23988(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23988);
	// lwz r10,23988(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23988);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addi r11,r10,5
	ctx.r11.s64 = ctx.r10.s64 + 5;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// beq cr6,0x821160f4
	if (ctx.cr6.eq) goto loc_821160F4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821160F4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8211619c
	if (!ctx.cr6.eq) goto loc_8211619C;
	// lwz r11,23988(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23988);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// beq cr6,0x82116144
	if (ctx.cr6.eq) goto loc_82116144;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82116144:
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8211619c
	if (!ctx.cr6.eq) goto loc_8211619C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8210cf48
	ctx.lr = 0x82116160;
	sub_8210CF48(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// stw r6,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r6.u32);
	// beq cr6,0x82115e64
	if (ctx.cr6.eq) goto loc_82115E64;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8210d3f0
	ctx.lr = 0x8211617C;
	sub_8210D3F0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r4,r11,6720
	ctx.r4.s64 = ctx.r11.s64 + 6720;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r31,53
	ctx.r5.s64 = ctx.r31.s64 + 53;
	// addi r3,r28,2736
	ctx.r3.s64 = ctx.r28.s64 + 2736;
	// bl 0x8210e1f0
	ctx.lr = 0x82116198;
	sub_8210E1F0(ctx, base);
	// b 0x821161a4
	goto loc_821161A4;
loc_8211619C:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
loc_821161A4:
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_821161AC:
	// lwz r11,23988(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23988);
	// lwz r10,23988(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23988);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addi r11,r10,5
	ctx.r11.s64 = ctx.r10.s64 + 5;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// beq cr6,0x821161fc
	if (ctx.cr6.eq) goto loc_821161FC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821161FC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82116274
	if (!ctx.cr6.eq) goto loc_82116274;
	// lwz r11,23988(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23988);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// beq cr6,0x8211624c
	if (ctx.cr6.eq) goto loc_8211624C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8211624C:
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82116274
	if (!ctx.cr6.eq) goto loc_82116274;
	// lbz r3,53(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 53);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82115e64
	if (ctx.cr6.eq) goto loc_82115E64;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82359c90
	ctx.lr = 0x8211626C;
	sub_82359C90(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x823522c0
	ctx.lr = 0x82116274;
	sub_823522C0(ctx, base);
loc_82116274:
	// li r11,8
	ctx.r11.s64 = 8;
	// stb r27,56(r31)
	PPC_STORE_U8(ctx.r31.u32 + 56, ctx.r27.u8);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82116280:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,34
	ctx.r4.s64 = 34;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8210cf48
	ctx.lr = 0x82116290;
	sub_8210CF48(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// stw r6,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r6.u32);
	// beq cr6,0x82115e64
	if (ctx.cr6.eq) goto loc_82115E64;
	// li r4,34
	ctx.r4.s64 = 34;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8210d3f0
	ctx.lr = 0x821162AC;
	sub_8210D3F0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r4,r11,6692
	ctx.r4.s64 = ctx.r11.s64 + 6692;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r31,53
	ctx.r5.s64 = ctx.r31.s64 + 53;
	// addi r3,r28,2736
	ctx.r3.s64 = ctx.r28.s64 + 2736;
	// bl 0x8210e1f0
	ctx.lr = 0x821162C8;
	sub_8210E1F0(ctx, base);
	// li r10,9
	ctx.r10.s64 = 9;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_821162D0:
	// lbz r9,53(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 53);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82115e64
	if (ctx.cr6.eq) goto loc_82115E64;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x82359c90
	ctx.lr = 0x821162E4;
	sub_82359C90(ctx, base);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x823522c0
	ctx.lr = 0x821162EC;
	sub_823522C0(ctx, base);
	// li r8,10
	ctx.r8.s64 = 10;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
loc_821162F4:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8210cf48
	ctx.lr = 0x82116304;
	sub_8210CF48(ctx, base);
	// li r7,11
	ctx.r7.s64 = 11;
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
loc_82116310:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8210fd88
	ctx.lr = 0x8211631C;
	sub_8210FD88(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82115e64
	if (ctx.cr6.eq) goto loc_82115E64;
	// li r5,12
	ctx.r5.s64 = 12;
	// stw r5,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r5.u32);
loc_82116330:
	// li r4,28
	ctx.r4.s64 = 28;
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
loc_82116338:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82116344"))) PPC_WEAK_FUNC(sub_82116344);
PPC_FUNC_IMPL(__imp__sub_82116344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82116348"))) PPC_WEAK_FUNC(sub_82116348);
PPC_FUNC_IMPL(__imp__sub_82116348) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x82116350;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// bl 0x8210b358
	ctx.lr = 0x8211635C;
	sub_8210B358(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821163b8
	if (ctx.cr6.eq) goto loc_821163B8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r10,10
	ctx.r10.s64 = 10;
	// addi r28,r11,12136
	ctx.r28.s64 = ctx.r11.s64 + 12136;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// addi r30,r4,16
	ctx.r30.s64 = ctx.r4.s64 + 16;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// addi r27,r11,-21272
	ctx.r27.s64 = ctx.r11.s64 + -21272;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8211638C:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8210d230
	ctx.lr = 0x8211639C;
	sub_8210D230(ctx, base);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r9,r28,8
	ctx.r9.s64 = ctx.r28.s64 + 8;
	// stw r29,-8(r30)
	PPC_STORE_U32(ctx.r30.u32 + -8, ctx.r29.u32);
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r31,r9
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8211638c
	if (ctx.cr6.lt) goto loc_8211638C;
loc_821163B8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821163C0"))) PPC_WEAK_FUNC(sub_821163C0);
PPC_FUNC_IMPL(__imp__sub_821163C0) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,17584
	ctx.r11.s64 = ctx.r11.s64 + 17584;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x820905f8
	ctx.lr = 0x821163E8;
	sub_820905F8(ctx, base);
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// addi r3,r3,-29968
	ctx.r3.s64 = ctx.r3.s64 + -29968;
	// bl 0x82090730
	ctx.lr = 0x821163F4;
	sub_82090730(ctx, base);
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// addi r3,r3,-29860
	ctx.r3.s64 = ctx.r3.s64 + -29860;
	// bl 0x82090818
	ctx.lr = 0x82116400;
	sub_82090818(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// addi r11,r11,25520
	ctx.r11.s64 = ctx.r11.s64 + 25520;
	// addi r3,r3,-13260
	ctx.r3.s64 = ctx.r3.s64 + -13260;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82090730
	ctx.lr = 0x82116418;
	sub_82090730(ctx, base);
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// addi r3,r3,-13152
	ctx.r3.s64 = ctx.r3.s64 + -13152;
	// bl 0x82090818
	ctx.lr = 0x82116424;
	sub_82090818(ctx, base);
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

__attribute__((alias("__imp__sub_8211643C"))) PPC_WEAK_FUNC(sub_8211643C);
PPC_FUNC_IMPL(__imp__sub_8211643C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82116440"))) PPC_WEAK_FUNC(sub_82116440);
PPC_FUNC_IMPL(__imp__sub_82116440) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae4
	ctx.lr = 0x82116448;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,1428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1428);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,55
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 55, ctx.xer);
	// bgt cr6,0x821173c0
	if (ctx.cr6.gt) goto loc_821173C0;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r23,-1
	ctx.r23.s64 = -1;
	// li r24,1
	ctx.r24.s64 = 1;
	// lis r12,-32239
	ctx.r12.s64 = -2112815104;
	// addi r12,r12,25732
	ctx.r12.s64 = ctx.r12.s64 + 25732;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82116564;
	case 1:
		goto loc_82116678;
	case 2:
		goto loc_821166A0;
	case 3:
		goto loc_8211730C;
	case 4:
		goto loc_82117338;
	case 5:
		goto loc_8211737C;
	case 6:
		goto loc_821173C0;
	case 7:
		goto loc_821173C0;
	case 8:
		goto loc_821173C0;
	case 9:
		goto loc_821173C0;
	case 10:
		goto loc_821173C0;
	case 11:
		goto loc_821173C0;
	case 12:
		goto loc_821173C0;
	case 13:
		goto loc_821173C0;
	case 14:
		goto loc_821173C0;
	case 15:
		goto loc_821173C0;
	case 16:
		goto loc_821173C0;
	case 17:
		goto loc_821173C0;
	case 18:
		goto loc_821173C0;
	case 19:
		goto loc_821173C0;
	case 20:
		goto loc_821173C0;
	case 21:
		goto loc_821173C0;
	case 22:
		goto loc_821173C0;
	case 23:
		goto loc_821173C0;
	case 24:
		goto loc_821173C0;
	case 25:
		goto loc_821173C0;
	case 26:
		goto loc_821173C0;
	case 27:
		goto loc_821173C0;
	case 28:
		goto loc_821173C0;
	case 29:
		goto loc_821173C0;
	case 30:
		goto loc_821173C0;
	case 31:
		goto loc_821173C0;
	case 32:
		goto loc_821173C0;
	case 33:
		goto loc_821173C0;
	case 34:
		goto loc_821173C0;
	case 35:
		goto loc_821173C0;
	case 36:
		goto loc_821173C0;
	case 37:
		goto loc_821173C0;
	case 38:
		goto loc_821173C0;
	case 39:
		goto loc_821173C0;
	case 40:
		goto loc_821173C0;
	case 41:
		goto loc_821173C0;
	case 42:
		goto loc_821173C0;
	case 43:
		goto loc_821173C0;
	case 44:
		goto loc_821173C0;
	case 45:
		goto loc_821173C0;
	case 46:
		goto loc_821173C0;
	case 47:
		goto loc_821173C0;
	case 48:
		goto loc_821173C0;
	case 49:
		goto loc_821173C0;
	case 50:
		goto loc_821173C0;
	case 51:
		goto loc_821173C0;
	case 52:
		goto loc_821173C0;
	case 53:
		goto loc_821173C0;
	case 54:
		goto loc_821173C0;
	case 55:
		goto loc_82116644;
	default:
		__builtin_unreachable();
	}
	// lwz r16,25956(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 25956);
	// lwz r16,26232(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 26232);
	// lwz r16,26272(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 26272);
	// lwz r16,29452(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 29452);
	// lwz r16,29496(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 29496);
	// lwz r16,29564(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 29564);
	// lwz r16,29632(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 29632);
	// lwz r16,29632(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 29632);
	// lwz r16,29632(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 29632);
	// lwz r16,29632(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 29632);
	// lwz r16,29632(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 29632);
	// lwz r16,29632(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 29632);
	// lwz r16,29632(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 29632);
	// lwz r16,29632(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 29632);
	// lwz r16,29632(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 29632);
	// lwz r16,29632(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 29632);
	// lwz r16,29632(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 29632);
	// lwz r16,29632(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 29632);
	// lwz r16,29632(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 29632);
	// lwz r16,29632(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 29632);
	// lwz r16,29632(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 29632);
	// lwz r16,29632(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 29632);
	// lwz r16,29632(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 29632);
	// lwz r16,29632(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 29632);
	// lwz r16,29632(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 29632);
	// lwz r16,29632(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 29632);
	// lwz r16,29632(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 29632);
	// lwz r16,29632(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 29632);
	// lwz r16,29632(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 29632);
	// lwz r16,29632(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 29632);
	// lwz r16,29632(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 29632);
	// lwz r16,29632(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 29632);
	// lwz r16,29632(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 29632);
	// lwz r16,29632(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 29632);
	// lwz r16,29632(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 29632);
	// lwz r16,29632(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 29632);
	// lwz r16,29632(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 29632);
	// lwz r16,29632(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 29632);
	// lwz r16,29632(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 29632);
	// lwz r16,29632(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 29632);
	// lwz r16,29632(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 29632);
	// lwz r16,29632(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 29632);
	// lwz r16,29632(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 29632);
	// lwz r16,29632(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 29632);
	// lwz r16,29632(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 29632);
	// lwz r16,29632(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 29632);
	// lwz r16,29632(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 29632);
	// lwz r16,29632(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 29632);
	// lwz r16,29632(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 29632);
	// lwz r16,29632(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 29632);
	// lwz r16,29632(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 29632);
	// lwz r16,29632(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 29632);
	// lwz r16,29632(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 29632);
	// lwz r16,29632(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 29632);
	// lwz r16,29632(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 29632);
	// lwz r16,26180(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 26180);
loc_82116564:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r30,r11,3672
	ctx.r30.s64 = ctx.r11.s64 + 3672;
	// addi r3,r31,2008
	ctx.r3.s64 = ctx.r31.s64 + 2008;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8259d2a0
	ctx.lr = 0x8211657C;
	sub_8259D2A0(ctx, base);
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,1624
	ctx.r3.s64 = ctx.r31.s64 + 1624;
	// bl 0x8259d2a0
	ctx.lr = 0x8211658C;
	sub_8259D2A0(ctx, base);
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,1688
	ctx.r3.s64 = ctx.r31.s64 + 1688;
	// bl 0x8259d2a0
	ctx.lr = 0x8211659C;
	sub_8259D2A0(ctx, base);
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,1752
	ctx.r3.s64 = ctx.r31.s64 + 1752;
	// bl 0x8259d2a0
	ctx.lr = 0x821165AC;
	sub_8259D2A0(ctx, base);
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,1816
	ctx.r3.s64 = ctx.r31.s64 + 1816;
	// bl 0x8259d2a0
	ctx.lr = 0x821165BC;
	sub_8259D2A0(ctx, base);
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,1880
	ctx.r3.s64 = ctx.r31.s64 + 1880;
	// bl 0x8259d2a0
	ctx.lr = 0x821165CC;
	sub_8259D2A0(ctx, base);
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,1944
	ctx.r3.s64 = ctx.r31.s64 + 1944;
	// bl 0x8259d2a0
	ctx.lr = 0x821165DC;
	sub_8259D2A0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r10,r31,2271
	ctx.r10.s64 = ctx.r31.s64 + 2271;
	// stb r25,2264(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2264, ctx.r25.u8);
	// addi r11,r11,27340
	ctx.r11.s64 = ctx.r11.s64 + 27340;
	// stb r25,2265(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2265, ctx.r25.u8);
	// li r9,16
	ctx.r9.s64 = 16;
	// stb r25,2266(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2266, ctx.r25.u8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_821165FC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x821165fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821165FC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r10,r31,2303
	ctx.r10.s64 = ctx.r31.s64 + 2303;
	// addi r11,r11,27328
	ctx.r11.s64 = ctx.r11.s64 + 27328;
	// li r9,10
	ctx.r9.s64 = 10;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82116624:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r8,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x82116624
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82116624;
	// li r7,56
	ctx.r7.s64 = 56;
	// stw r23,2336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2336, ctx.r23.u32);
	// stw r7,1428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1428, ctx.r7.u32);
loc_82116644:
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// stw r25,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r25.u32);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// addi r11,r11,6040
	ctx.r11.s64 = ctx.r11.s64 + 6040;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// stb r10,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r10.u8);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,2864(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stw r6,1428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1428, ctx.r6.u32);
loc_82116678:
	// addi r3,r31,22532
	ctx.r3.s64 = ctx.r31.s64 + 22532;
	// bl 0x8236bb20
	ctx.lr = 0x82116680;
	sub_8236BB20(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82116698
	if (!ctx.cr6.eq) goto loc_82116698;
loc_8211668C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb34
	__restgprlr_23(ctx, base);
	return;
loc_82116698:
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r4,1428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1428, ctx.r4.u32);
loc_821166A0:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,27312
	ctx.r4.s64 = ctx.r11.s64 + 27312;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r30,r11,23504
	ctx.r30.s64 = ctx.r11.s64 + 23504;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8210fcf8
	ctx.lr = 0x821166B8;
	sub_8210FCF8(ctx, base);
	// addis r28,r31,1
	ctx.r28.s64 = ctx.r31.s64 + 65536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r28,r28,9396
	ctx.r28.s64 = ctx.r28.s64 + 9396;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r10,27296
	ctx.r4.s64 = ctx.r10.s64 + 27296;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// bl 0x8210fcf8
	ctx.lr = 0x821166D8;
	sub_8210FCF8(ctx, base);
	// addis r29,r31,1
	ctx.r29.s64 = ctx.r31.s64 + 65536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r29,r29,9400
	ctx.r29.s64 = ctx.r29.s64 + 9400;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r10,27284
	ctx.r4.s64 = ctx.r10.s64 + 27284;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// bl 0x8210fcf8
	ctx.lr = 0x821166F8;
	sub_8210FCF8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r3,1
	ctx.r3.s64 = 65536;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// ori r9,r3,9404
	ctx.r9.u64 = ctx.r3.u64 | 9404;
	// addi r4,r10,27268
	ctx.r4.s64 = ctx.r10.s64 + 27268;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stwx r11,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u32);
	// bl 0x8210fcf8
	ctx.lr = 0x82116718;
	sub_8210FCF8(ctx, base);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r7,r8,9408
	ctx.r7.u64 = ctx.r8.u64 | 9408;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r10,27248
	ctx.r4.s64 = ctx.r10.s64 + 27248;
	// stwx r11,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u32);
	// bl 0x8210fcf8
	ctx.lr = 0x82116738;
	sub_8210FCF8(ctx, base);
	// lis r6,1
	ctx.r6.s64 = 65536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r5,r6,9412
	ctx.r5.u64 = ctx.r6.u64 | 9412;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r10,27228
	ctx.r4.s64 = ctx.r10.s64 + 27228;
	// stwx r11,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r11.u32);
	// bl 0x8210fcf8
	ctx.lr = 0x82116758;
	sub_8210FCF8(ctx, base);
	// lis r4,1
	ctx.r4.s64 = 65536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r9,r4,9416
	ctx.r9.u64 = ctx.r4.u64 | 9416;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r10,27204
	ctx.r4.s64 = ctx.r10.s64 + 27204;
	// stwx r11,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u32);
	// bl 0x8210fcf8
	ctx.lr = 0x82116778;
	sub_8210FCF8(ctx, base);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r7,r8,9420
	ctx.r7.u64 = ctx.r8.u64 | 9420;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r10,27184
	ctx.r4.s64 = ctx.r10.s64 + 27184;
	// stwx r11,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u32);
	// bl 0x8210fcf8
	ctx.lr = 0x82116798;
	sub_8210FCF8(ctx, base);
	// lis r6,1
	ctx.r6.s64 = 65536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r5,r6,9424
	ctx.r5.u64 = ctx.r6.u64 | 9424;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r10,27172
	ctx.r4.s64 = ctx.r10.s64 + 27172;
	// stwx r11,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r11.u32);
	// bl 0x8210fcf8
	ctx.lr = 0x821167B8;
	sub_8210FCF8(ctx, base);
	// lis r4,1
	ctx.r4.s64 = 65536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r9,r4,9428
	ctx.r9.u64 = ctx.r4.u64 | 9428;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r10,27156
	ctx.r4.s64 = ctx.r10.s64 + 27156;
	// stwx r11,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u32);
	// bl 0x8210fcf8
	ctx.lr = 0x821167D8;
	sub_8210FCF8(ctx, base);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r7,r8,9432
	ctx.r7.u64 = ctx.r8.u64 | 9432;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stwx r11,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r10,27140
	ctx.r4.s64 = ctx.r10.s64 + 27140;
	// bl 0x8210fcf8
	ctx.lr = 0x821167F8;
	sub_8210FCF8(ctx, base);
	// lis r6,1
	ctx.r6.s64 = 65536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r5,r6,9436
	ctx.r5.u64 = ctx.r6.u64 | 9436;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r10,27124
	ctx.r4.s64 = ctx.r10.s64 + 27124;
	// stwx r11,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r11.u32);
	// bl 0x8210fcf8
	ctx.lr = 0x82116818;
	sub_8210FCF8(ctx, base);
	// lis r4,1
	ctx.r4.s64 = 65536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r9,r4,9440
	ctx.r9.u64 = ctx.r4.u64 | 9440;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r10,27100
	ctx.r4.s64 = ctx.r10.s64 + 27100;
	// stwx r11,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u32);
	// bl 0x8210fcf8
	ctx.lr = 0x82116838;
	sub_8210FCF8(ctx, base);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r7,r8,9444
	ctx.r7.u64 = ctx.r8.u64 | 9444;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r10,27084
	ctx.r4.s64 = ctx.r10.s64 + 27084;
	// stwx r11,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u32);
	// bl 0x8210fcf8
	ctx.lr = 0x82116858;
	sub_8210FCF8(ctx, base);
	// lis r6,1
	ctx.r6.s64 = 65536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r5,r6,9448
	ctx.r5.u64 = ctx.r6.u64 | 9448;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r10,27060
	ctx.r4.s64 = ctx.r10.s64 + 27060;
	// stwx r11,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r11.u32);
	// bl 0x8210fcf8
	ctx.lr = 0x82116878;
	sub_8210FCF8(ctx, base);
	// lis r4,1
	ctx.r4.s64 = 65536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r9,r4,9452
	ctx.r9.u64 = ctx.r4.u64 | 9452;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r10,27036
	ctx.r4.s64 = ctx.r10.s64 + 27036;
	// stwx r11,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u32);
	// bl 0x8210fcf8
	ctx.lr = 0x82116898;
	sub_8210FCF8(ctx, base);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r7,r8,9456
	ctx.r7.u64 = ctx.r8.u64 | 9456;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r10,27016
	ctx.r4.s64 = ctx.r10.s64 + 27016;
	// stwx r11,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u32);
	// bl 0x8210fcf8
	ctx.lr = 0x821168B8;
	sub_8210FCF8(ctx, base);
	// lis r6,1
	ctx.r6.s64 = 65536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r5,r6,9460
	ctx.r5.u64 = ctx.r6.u64 | 9460;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r10,26988
	ctx.r4.s64 = ctx.r10.s64 + 26988;
	// stwx r11,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r11.u32);
	// bl 0x8210fcf8
	ctx.lr = 0x821168D8;
	sub_8210FCF8(ctx, base);
	// lis r4,1
	ctx.r4.s64 = 65536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r9,r4,9464
	ctx.r9.u64 = ctx.r4.u64 | 9464;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r10,26960
	ctx.r4.s64 = ctx.r10.s64 + 26960;
	// stwx r11,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u32);
	// bl 0x8210fcf8
	ctx.lr = 0x821168F8;
	sub_8210FCF8(ctx, base);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r7,r8,9584
	ctx.r7.u64 = ctx.r8.u64 | 9584;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r10,26940
	ctx.r4.s64 = ctx.r10.s64 + 26940;
	// stwx r11,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u32);
	// bl 0x8210fcf8
	ctx.lr = 0x82116918;
	sub_8210FCF8(ctx, base);
	// lis r6,1
	ctx.r6.s64 = 65536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r5,r6,9468
	ctx.r5.u64 = ctx.r6.u64 | 9468;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r4,r10,26916
	ctx.r4.s64 = ctx.r10.s64 + 26916;
	// stwx r11,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8210fcf8
	ctx.lr = 0x82116938;
	sub_8210FCF8(ctx, base);
	// lis r4,1
	ctx.r4.s64 = 65536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r9,r4,9472
	ctx.r9.u64 = ctx.r4.u64 | 9472;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r10,26892
	ctx.r4.s64 = ctx.r10.s64 + 26892;
	// stwx r11,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u32);
	// bl 0x8210fcf8
	ctx.lr = 0x82116958;
	sub_8210FCF8(ctx, base);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r7,r8,9476
	ctx.r7.u64 = ctx.r8.u64 | 9476;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r10,26868
	ctx.r4.s64 = ctx.r10.s64 + 26868;
	// stwx r11,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u32);
	// bl 0x8210fcf8
	ctx.lr = 0x82116978;
	sub_8210FCF8(ctx, base);
	// lis r6,1
	ctx.r6.s64 = 65536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r5,r6,9480
	ctx.r5.u64 = ctx.r6.u64 | 9480;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r10,26844
	ctx.r4.s64 = ctx.r10.s64 + 26844;
	// stwx r11,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r11.u32);
	// bl 0x8210fcf8
	ctx.lr = 0x82116998;
	sub_8210FCF8(ctx, base);
	// lis r4,1
	ctx.r4.s64 = 65536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r9,r4,9484
	ctx.r9.u64 = ctx.r4.u64 | 9484;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r10,26820
	ctx.r4.s64 = ctx.r10.s64 + 26820;
	// stwx r11,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u32);
	// bl 0x8210fcf8
	ctx.lr = 0x821169B8;
	sub_8210FCF8(ctx, base);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r7,r8,9488
	ctx.r7.u64 = ctx.r8.u64 | 9488;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r10,26796
	ctx.r4.s64 = ctx.r10.s64 + 26796;
	// stwx r11,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u32);
	// bl 0x8210fcf8
	ctx.lr = 0x821169D8;
	sub_8210FCF8(ctx, base);
	// lis r6,1
	ctx.r6.s64 = 65536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r5,r6,9492
	ctx.r5.u64 = ctx.r6.u64 | 9492;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r10,26772
	ctx.r4.s64 = ctx.r10.s64 + 26772;
	// stwx r11,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r11.u32);
	// bl 0x8210fcf8
	ctx.lr = 0x821169F8;
	sub_8210FCF8(ctx, base);
	// lis r4,1
	ctx.r4.s64 = 65536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r9,r4,9496
	ctx.r9.u64 = ctx.r4.u64 | 9496;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r10,26752
	ctx.r4.s64 = ctx.r10.s64 + 26752;
	// stwx r11,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u32);
	// bl 0x8210fcf8
	ctx.lr = 0x82116A18;
	sub_8210FCF8(ctx, base);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r7,r8,9500
	ctx.r7.u64 = ctx.r8.u64 | 9500;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r10,26732
	ctx.r4.s64 = ctx.r10.s64 + 26732;
	// stwx r11,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u32);
	// bl 0x8210fcf8
	ctx.lr = 0x82116A38;
	sub_8210FCF8(ctx, base);
	// lis r6,1
	ctx.r6.s64 = 65536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r5,r6,9504
	ctx.r5.u64 = ctx.r6.u64 | 9504;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r10,26712
	ctx.r4.s64 = ctx.r10.s64 + 26712;
	// stwx r11,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r11.u32);
	// bl 0x8210fcf8
	ctx.lr = 0x82116A58;
	sub_8210FCF8(ctx, base);
	// lis r4,1
	ctx.r4.s64 = 65536;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// ori r9,r4,9508
	ctx.r9.u64 = ctx.r4.u64 | 9508;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r10,26692
	ctx.r4.s64 = ctx.r10.s64 + 26692;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stwx r11,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u32);
	// bl 0x8210fcf8
	ctx.lr = 0x82116A78;
	sub_8210FCF8(ctx, base);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r7,r8,9512
	ctx.r7.u64 = ctx.r8.u64 | 9512;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r10,26672
	ctx.r4.s64 = ctx.r10.s64 + 26672;
	// stwx r11,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u32);
	// bl 0x8210fcf8
	ctx.lr = 0x82116A98;
	sub_8210FCF8(ctx, base);
	// lis r6,1
	ctx.r6.s64 = 65536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r5,r6,9516
	ctx.r5.u64 = ctx.r6.u64 | 9516;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r10,26648
	ctx.r4.s64 = ctx.r10.s64 + 26648;
	// stwx r11,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r11.u32);
	// bl 0x8210fcf8
	ctx.lr = 0x82116AB8;
	sub_8210FCF8(ctx, base);
	// lis r4,1
	ctx.r4.s64 = 65536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r9,r4,9520
	ctx.r9.u64 = ctx.r4.u64 | 9520;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r10,26628
	ctx.r4.s64 = ctx.r10.s64 + 26628;
	// stwx r11,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u32);
	// bl 0x8210fcf8
	ctx.lr = 0x82116AD8;
	sub_8210FCF8(ctx, base);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r7,r8,9524
	ctx.r7.u64 = ctx.r8.u64 | 9524;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r10,26604
	ctx.r4.s64 = ctx.r10.s64 + 26604;
	// stwx r11,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u32);
	// bl 0x8210fcf8
	ctx.lr = 0x82116AF8;
	sub_8210FCF8(ctx, base);
	// lis r6,1
	ctx.r6.s64 = 65536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r5,r6,9528
	ctx.r5.u64 = ctx.r6.u64 | 9528;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r10,26580
	ctx.r4.s64 = ctx.r10.s64 + 26580;
	// stwx r11,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r11.u32);
	// bl 0x8210fcf8
	ctx.lr = 0x82116B18;
	sub_8210FCF8(ctx, base);
	// lis r4,1
	ctx.r4.s64 = 65536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r9,r4,9532
	ctx.r9.u64 = ctx.r4.u64 | 9532;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r10,26556
	ctx.r4.s64 = ctx.r10.s64 + 26556;
	// stwx r11,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u32);
	// bl 0x8210fcf8
	ctx.lr = 0x82116B38;
	sub_8210FCF8(ctx, base);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r7,r8,9536
	ctx.r7.u64 = ctx.r8.u64 | 9536;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r10,26532
	ctx.r4.s64 = ctx.r10.s64 + 26532;
	// stwx r11,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u32);
	// bl 0x8210fcf8
	ctx.lr = 0x82116B58;
	sub_8210FCF8(ctx, base);
	// lis r6,1
	ctx.r6.s64 = 65536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r5,r6,9544
	ctx.r5.u64 = ctx.r6.u64 | 9544;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r10,26508
	ctx.r4.s64 = ctx.r10.s64 + 26508;
	// stwx r11,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r11.u32);
	// bl 0x8210fcf8
	ctx.lr = 0x82116B78;
	sub_8210FCF8(ctx, base);
	// lis r4,1
	ctx.r4.s64 = 65536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r9,r4,9548
	ctx.r9.u64 = ctx.r4.u64 | 9548;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r10,26488
	ctx.r4.s64 = ctx.r10.s64 + 26488;
	// stwx r11,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u32);
	// bl 0x8210fcf8
	ctx.lr = 0x82116B98;
	sub_8210FCF8(ctx, base);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r7,r8,9552
	ctx.r7.u64 = ctx.r8.u64 | 9552;
	// addi r4,r10,26460
	ctx.r4.s64 = ctx.r10.s64 + 26460;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stwx r11,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u32);
	// bl 0x8210fcf8
	ctx.lr = 0x82116BB8;
	sub_8210FCF8(ctx, base);
	// lis r6,1
	ctx.r6.s64 = 65536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r5,r6,9556
	ctx.r5.u64 = ctx.r6.u64 | 9556;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r10,26444
	ctx.r4.s64 = ctx.r10.s64 + 26444;
	// stwx r11,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r11.u32);
	// bl 0x8210fcf8
	ctx.lr = 0x82116BD8;
	sub_8210FCF8(ctx, base);
	// lis r4,1
	ctx.r4.s64 = 65536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r9,r4,9560
	ctx.r9.u64 = ctx.r4.u64 | 9560;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r10,26428
	ctx.r4.s64 = ctx.r10.s64 + 26428;
	// stwx r11,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u32);
	// bl 0x8210fcf8
	ctx.lr = 0x82116BF8;
	sub_8210FCF8(ctx, base);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r7,r8,9564
	ctx.r7.u64 = ctx.r8.u64 | 9564;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r10,26416
	ctx.r4.s64 = ctx.r10.s64 + 26416;
	// stwx r11,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u32);
	// bl 0x8210fcf8
	ctx.lr = 0x82116C18;
	sub_8210FCF8(ctx, base);
	// lis r6,1
	ctx.r6.s64 = 65536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r5,r6,9568
	ctx.r5.u64 = ctx.r6.u64 | 9568;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r10,26396
	ctx.r4.s64 = ctx.r10.s64 + 26396;
	// stwx r11,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r11.u32);
	// bl 0x8210fcf8
	ctx.lr = 0x82116C38;
	sub_8210FCF8(ctx, base);
	// addis r27,r31,1
	ctx.r27.s64 = ctx.r31.s64 + 65536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r27,r27,9572
	ctx.r27.s64 = ctx.r27.s64 + 9572;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r10,26372
	ctx.r4.s64 = ctx.r10.s64 + 26372;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// bl 0x8210fcf8
	ctx.lr = 0x82116C58;
	sub_8210FCF8(ctx, base);
	// lis r4,1
	ctx.r4.s64 = 65536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r9,r4,9576
	ctx.r9.u64 = ctx.r4.u64 | 9576;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r10,26344
	ctx.r4.s64 = ctx.r10.s64 + 26344;
	// stwx r11,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u32);
	// bl 0x8210fcf8
	ctx.lr = 0x82116C78;
	sub_8210FCF8(ctx, base);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r7,r8,9580
	ctx.r7.u64 = ctx.r8.u64 | 9580;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r10,26320
	ctx.r4.s64 = ctx.r10.s64 + 26320;
	// stwx r11,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u32);
	// bl 0x8210fcf8
	ctx.lr = 0x82116C98;
	sub_8210FCF8(ctx, base);
	// lis r6,1
	ctx.r6.s64 = 65536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r5,r6,9588
	ctx.r5.u64 = ctx.r6.u64 | 9588;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r10,26308
	ctx.r4.s64 = ctx.r10.s64 + 26308;
	// stwx r11,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r11.u32);
	// bl 0x8210fcf8
	ctx.lr = 0x82116CB8;
	sub_8210FCF8(ctx, base);
	// lis r4,1
	ctx.r4.s64 = 65536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r9,r4,9592
	ctx.r9.u64 = ctx.r4.u64 | 9592;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r10,26296
	ctx.r4.s64 = ctx.r10.s64 + 26296;
	// stwx r11,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u32);
	// bl 0x8210fcf8
	ctx.lr = 0x82116CD8;
	sub_8210FCF8(ctx, base);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r7,r8,9596
	ctx.r7.u64 = ctx.r8.u64 | 9596;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r10,26284
	ctx.r4.s64 = ctx.r10.s64 + 26284;
	// stwx r11,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u32);
	// bl 0x8210fcf8
	ctx.lr = 0x82116CF8;
	sub_8210FCF8(ctx, base);
	// lis r6,1
	ctx.r6.s64 = 65536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r5,r6,9600
	ctx.r5.u64 = ctx.r6.u64 | 9600;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r10,26264
	ctx.r4.s64 = ctx.r10.s64 + 26264;
	// stwx r11,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r11.u32);
	// bl 0x8210fcf8
	ctx.lr = 0x82116D18;
	sub_8210FCF8(ctx, base);
	// lis r4,1
	ctx.r4.s64 = 65536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r9,r4,9604
	ctx.r9.u64 = ctx.r4.u64 | 9604;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r10,26244
	ctx.r4.s64 = ctx.r10.s64 + 26244;
	// stwx r11,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u32);
	// bl 0x8210fcf8
	ctx.lr = 0x82116D38;
	sub_8210FCF8(ctx, base);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r7,r8,9608
	ctx.r7.u64 = ctx.r8.u64 | 9608;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r10,26228
	ctx.r4.s64 = ctx.r10.s64 + 26228;
	// stwx r11,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u32);
	// bl 0x8210fcf8
	ctx.lr = 0x82116D58;
	sub_8210FCF8(ctx, base);
	// lis r6,1
	ctx.r6.s64 = 65536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r5,r6,9612
	ctx.r5.u64 = ctx.r6.u64 | 9612;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r10,26208
	ctx.r4.s64 = ctx.r10.s64 + 26208;
	// stwx r11,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r11.u32);
	// bl 0x8210fcf8
	ctx.lr = 0x82116D78;
	sub_8210FCF8(ctx, base);
	// lis r4,1
	ctx.r4.s64 = 65536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r9,r4,9616
	ctx.r9.u64 = ctx.r4.u64 | 9616;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r10,26188
	ctx.r4.s64 = ctx.r10.s64 + 26188;
	// stwx r11,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u32);
	// bl 0x8210fcf8
	ctx.lr = 0x82116D98;
	sub_8210FCF8(ctx, base);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r7,r8,9620
	ctx.r7.u64 = ctx.r8.u64 | 9620;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r10,26164
	ctx.r4.s64 = ctx.r10.s64 + 26164;
	// stwx r11,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u32);
	// bl 0x8210fcf8
	ctx.lr = 0x82116DB8;
	sub_8210FCF8(ctx, base);
	// lis r6,1
	ctx.r6.s64 = 65536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r5,r6,9624
	ctx.r5.u64 = ctx.r6.u64 | 9624;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r10,26144
	ctx.r4.s64 = ctx.r10.s64 + 26144;
	// stwx r11,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r11.u32);
	// bl 0x8210fcf8
	ctx.lr = 0x82116DD8;
	sub_8210FCF8(ctx, base);
	// lis r4,1
	ctx.r4.s64 = 65536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r9,r4,9628
	ctx.r9.u64 = ctx.r4.u64 | 9628;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r10,26128
	ctx.r4.s64 = ctx.r10.s64 + 26128;
	// stwx r11,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u32);
	// bl 0x8210fcf8
	ctx.lr = 0x82116DF8;
	sub_8210FCF8(ctx, base);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r7,r8,9632
	ctx.r7.u64 = ctx.r8.u64 | 9632;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r10,26104
	ctx.r4.s64 = ctx.r10.s64 + 26104;
	// stwx r11,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u32);
	// bl 0x8210fcf8
	ctx.lr = 0x82116E18;
	sub_8210FCF8(ctx, base);
	// lis r6,1
	ctx.r6.s64 = 65536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r5,r6,9636
	ctx.r5.u64 = ctx.r6.u64 | 9636;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r10,26088
	ctx.r4.s64 = ctx.r10.s64 + 26088;
	// stwx r11,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r11.u32);
	// bl 0x8210fcf8
	ctx.lr = 0x82116E38;
	sub_8210FCF8(ctx, base);
	// lis r4,1
	ctx.r4.s64 = 65536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r9,r4,9640
	ctx.r9.u64 = ctx.r4.u64 | 9640;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r10,26068
	ctx.r4.s64 = ctx.r10.s64 + 26068;
	// stwx r11,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u32);
	// bl 0x8210fcf8
	ctx.lr = 0x82116E58;
	sub_8210FCF8(ctx, base);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r7,r8,9644
	ctx.r7.u64 = ctx.r8.u64 | 9644;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r10,26048
	ctx.r4.s64 = ctx.r10.s64 + 26048;
	// stwx r11,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u32);
	// bl 0x8210fcf8
	ctx.lr = 0x82116E78;
	sub_8210FCF8(ctx, base);
	// lis r6,1
	ctx.r6.s64 = 65536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r5,r6,9648
	ctx.r5.u64 = ctx.r6.u64 | 9648;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r10,26028
	ctx.r4.s64 = ctx.r10.s64 + 26028;
	// stwx r11,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r11.u32);
	// bl 0x8210fcf8
	ctx.lr = 0x82116E98;
	sub_8210FCF8(ctx, base);
	// lis r4,1
	ctx.r4.s64 = 65536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r9,r4,9652
	ctx.r9.u64 = ctx.r4.u64 | 9652;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r10,26004
	ctx.r4.s64 = ctx.r10.s64 + 26004;
	// stwx r11,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u32);
	// bl 0x8210fcf8
	ctx.lr = 0x82116EB8;
	sub_8210FCF8(ctx, base);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r7,r8,9656
	ctx.r7.u64 = ctx.r8.u64 | 9656;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r10,25980
	ctx.r4.s64 = ctx.r10.s64 + 25980;
	// stwx r11,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u32);
	// bl 0x8210fcf8
	ctx.lr = 0x82116ED8;
	sub_8210FCF8(ctx, base);
	// lis r6,1
	ctx.r6.s64 = 65536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r5,r6,9660
	ctx.r5.u64 = ctx.r6.u64 | 9660;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r10,25952
	ctx.r4.s64 = ctx.r10.s64 + 25952;
	// stwx r11,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r11.u32);
	// bl 0x8210fcf8
	ctx.lr = 0x82116EF8;
	sub_8210FCF8(ctx, base);
	// lis r4,1
	ctx.r4.s64 = 65536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r9,r4,9664
	ctx.r9.u64 = ctx.r4.u64 | 9664;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r10,25920
	ctx.r4.s64 = ctx.r10.s64 + 25920;
	// stwx r11,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u32);
	// bl 0x8210fcf8
	ctx.lr = 0x82116F18;
	sub_8210FCF8(ctx, base);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r7,r8,9668
	ctx.r7.u64 = ctx.r8.u64 | 9668;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r10,25888
	ctx.r4.s64 = ctx.r10.s64 + 25888;
	// stwx r11,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u32);
	// bl 0x8210fcf8
	ctx.lr = 0x82116F38;
	sub_8210FCF8(ctx, base);
	// lis r6,1
	ctx.r6.s64 = 65536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r5,r6,9672
	ctx.r5.u64 = ctx.r6.u64 | 9672;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r10,25856
	ctx.r4.s64 = ctx.r10.s64 + 25856;
	// stwx r11,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r11.u32);
	// bl 0x8210fcf8
	ctx.lr = 0x82116F58;
	sub_8210FCF8(ctx, base);
	// lis r4,1
	ctx.r4.s64 = 65536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r9,r4,9676
	ctx.r9.u64 = ctx.r4.u64 | 9676;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r10,25840
	ctx.r4.s64 = ctx.r10.s64 + 25840;
	// stwx r11,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u32);
	// bl 0x8210fcf8
	ctx.lr = 0x82116F78;
	sub_8210FCF8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// ori r7,r8,9680
	ctx.r7.u64 = ctx.r8.u64 | 9680;
	// addi r4,r10,25816
	ctx.r4.s64 = ctx.r10.s64 + 25816;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stwx r11,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u32);
	// bl 0x8210fcf8
	ctx.lr = 0x82116F98;
	sub_8210FCF8(ctx, base);
	// lis r6,1
	ctx.r6.s64 = 65536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r5,r6,9684
	ctx.r5.u64 = ctx.r6.u64 | 9684;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r10,25796
	ctx.r4.s64 = ctx.r10.s64 + 25796;
	// stwx r11,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r11.u32);
	// bl 0x8210fcf8
	ctx.lr = 0x82116FB8;
	sub_8210FCF8(ctx, base);
	// lis r4,1
	ctx.r4.s64 = 65536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r9,r4,9688
	ctx.r9.u64 = ctx.r4.u64 | 9688;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r10,25772
	ctx.r4.s64 = ctx.r10.s64 + 25772;
	// stwx r11,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u32);
	// bl 0x8210fcf8
	ctx.lr = 0x82116FD8;
	sub_8210FCF8(ctx, base);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r7,r8,9692
	ctx.r7.u64 = ctx.r8.u64 | 9692;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r10,25760
	ctx.r4.s64 = ctx.r10.s64 + 25760;
	// stwx r11,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u32);
	// bl 0x8210fcf8
	ctx.lr = 0x82116FF8;
	sub_8210FCF8(ctx, base);
	// lis r6,1
	ctx.r6.s64 = 65536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r5,r6,9696
	ctx.r5.u64 = ctx.r6.u64 | 9696;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r10,25732
	ctx.r4.s64 = ctx.r10.s64 + 25732;
	// stwx r11,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r11.u32);
	// bl 0x8210fcf8
	ctx.lr = 0x82117018;
	sub_8210FCF8(ctx, base);
	// lis r4,1
	ctx.r4.s64 = 65536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r9,r4,9700
	ctx.r9.u64 = ctx.r4.u64 | 9700;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r10,25712
	ctx.r4.s64 = ctx.r10.s64 + 25712;
	// stwx r11,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u32);
	// bl 0x8210fcf8
	ctx.lr = 0x82117038;
	sub_8210FCF8(ctx, base);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// ori r7,r8,9704
	ctx.r7.u64 = ctx.r8.u64 | 9704;
	// stwx r3,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r3.u32);
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x82117154
	if (ctx.cr6.gt) goto loc_82117154;
	// lis r12,-32239
	ctx.r12.s64 = -2112815104;
	// addi r12,r12,28780
	ctx.r12.s64 = ctx.r12.s64 + 28780;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_821170B0;
	case 1:
		goto loc_821170EC;
	case 2:
		goto loc_82117120;
	case 3:
		goto loc_8211707C;
	default:
		__builtin_unreachable();
	}
	// lwz r16,28848(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 28848);
	// lwz r16,28908(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 28908);
	// lwz r16,28960(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 28960);
	// lwz r16,28796(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 28796);
loc_8211707C:
	// addis r26,r31,1
	ctx.r26.s64 = ctx.r31.s64 + 65536;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r26,r26,9708
	ctx.r26.s64 = ctx.r26.s64 + 9708;
	// addi r11,r11,25692
	ctx.r11.s64 = ctx.r11.s64 + 25692;
	// li r9,19
	ctx.r9.s64 = 19;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82117098:
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r6,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r6.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x82117098
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82117098;
	// b 0x82117184
	goto loc_82117184;
loc_821170B0:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addis r26,r31,1
	ctx.r26.s64 = ctx.r31.s64 + 65536;
	// addi r11,r11,25676
	ctx.r11.s64 = ctx.r11.s64 + 25676;
	// addi r26,r26,9708
	ctx.r26.s64 = ctx.r26.s64 + 9708;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r5,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r5.u32);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r4,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r4.u32);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r3,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r3.u32);
	// lhz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// sth r10,12(r26)
	PPC_STORE_U16(ctx.r26.u32 + 12, ctx.r10.u16);
	// lbz r9,14(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 14);
	// stb r9,14(r26)
	PPC_STORE_U8(ctx.r26.u32 + 14, ctx.r9.u8);
	// b 0x82117184
	goto loc_82117184;
loc_821170EC:
	// addis r26,r31,1
	ctx.r26.s64 = ctx.r31.s64 + 65536;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r26,r26,9708
	ctx.r26.s64 = ctx.r26.s64 + 9708;
	// addi r11,r11,25656
	ctx.r11.s64 = ctx.r11.s64 + 25656;
	// li r9,17
	ctx.r9.s64 = 17;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82117108:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r8,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x82117108
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82117108;
	// b 0x82117184
	goto loc_82117184;
loc_82117120:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addis r26,r31,1
	ctx.r26.s64 = ctx.r31.s64 + 65536;
	// addi r11,r11,25640
	ctx.r11.s64 = ctx.r11.s64 + 25640;
	// addi r26,r26,9708
	ctx.r26.s64 = ctx.r26.s64 + 9708;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r7,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r7.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r6,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r6.u32);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r5,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r5.u32);
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r4,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r4.u32);
	// b 0x82117184
	goto loc_82117184;
loc_82117154:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addis r26,r31,1
	ctx.r26.s64 = ctx.r31.s64 + 65536;
	// addi r11,r11,25624
	ctx.r11.s64 = ctx.r11.s64 + 25624;
	// addi r26,r26,9708
	ctx.r26.s64 = ctx.r26.s64 + 9708;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r3,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r3.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r10.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r9.u32);
	// lbz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// stb r8,12(r26)
	PPC_STORE_U8(ctx.r26.u32 + 12, ctx.r8.u8);
loc_82117184:
	// li r5,64
	ctx.r5.s64 = 64;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r4,r31,1336
	ctx.r4.s64 = ctx.r31.s64 + 1336;
	// bl 0x82361bd8
	ctx.lr = 0x82117194;
	sub_82361BD8(ctx, base);
	// addi r30,r31,22532
	ctx.r30.s64 = ctx.r31.s64 + 22532;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82362f48
	ctx.lr = 0x821171A0;
	sub_82362F48(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,1460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1460, ctx.r11.u32);
	// bl 0x82362f58
	ctx.lr = 0x821171B0;
	sub_82362F58(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,1464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1464, ctx.r11.u32);
	// bl 0x82362f68
	ctx.lr = 0x821171C0;
	sub_82362F68(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r27,r31,1472
	ctx.r27.s64 = ctx.r31.s64 + 1472;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// bl 0x82360600
	ctx.lr = 0x821171D4;
	sub_82360600(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,1468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1468, ctx.r11.u32);
	// bl 0x82360610
	ctx.lr = 0x821171E4;
	sub_82360610(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,1476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1476, ctx.r11.u32);
	// bl 0x82362f78
	ctx.lr = 0x821171F4;
	sub_82362F78(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,1480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1480, ctx.r11.u32);
	// bl 0x82362f88
	ctx.lr = 0x82117208;
	sub_82362F88(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,1612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1612, ctx.r11.u32);
	// bl 0x82362f88
	ctx.lr = 0x8211721C;
	sub_82362F88(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,1616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1616, ctx.r11.u32);
	// bl 0x82362f88
	ctx.lr = 0x82117230;
	sub_82362F88(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r3,r31,22560
	ctx.r3.s64 = ctx.r31.s64 + 22560;
	// stw r11,1620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1620, ctx.r11.u32);
	// bl 0x82361f50
	ctx.lr = 0x82117244;
	sub_82361F50(ctx, base);
	// lwz r7,1464(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1464);
	// li r6,192
	ctx.r6.s64 = 192;
	// li r5,21096
	ctx.r5.s64 = 21096;
	// stw r6,88(r7)
	PPC_STORE_U32(ctx.r7.u32 + 88, ctx.r6.u32);
	// lwz r4,1464(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1464);
	// stw r5,92(r4)
	PPC_STORE_U32(ctx.r4.u32 + 92, ctx.r5.u32);
	// lwz r3,1464(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1464);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// lwz r10,1464(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1464);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r9,100(r10)
	PPC_STORE_U32(ctx.r10.u32 + 100, ctx.r9.u32);
	// lwz r8,1464(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1464);
	// stw r26,104(r8)
	PPC_STORE_U32(ctx.r8.u32 + 104, ctx.r26.u32);
	// lwz r7,0(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// stw r24,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r24.u32);
	// lwz r6,0(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r5,1464(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1464);
	// stw r5,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r5.u32);
	// lwz r3,1460(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1460);
	// bl 0x820905d8
	ctx.lr = 0x82117298;
	sub_820905D8(ctx, base);
	// lwz r4,1460(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1460);
	// lis r3,1
	ctx.r3.s64 = 65536;
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r26,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r26.u32);
	// lwz r11,1460(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1460);
	// stw r24,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r24.u32);
	// lwz r10,1460(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1460);
	// stw r27,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r27.u32);
	// lwz r9,1460(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1460);
	// stw r3,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r3.u32);
	// lwz r7,1480(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1480);
	// stw r26,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r26.u32);
	// lwz r6,1480(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1480);
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r5,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r5.u32);
	// stb r25,2267(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2267, ctx.r25.u8);
	// stb r25,2268(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2268, ctx.r25.u8);
	// stb r25,2269(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2269, ctx.r25.u8);
	// stb r25,1418(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1418, ctx.r25.u8);
	// stw r25,1400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1400, ctx.r25.u32);
	// stw r23,1404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1404, ctx.r23.u32);
	// stb r25,1412(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1412, ctx.r25.u8);
	// stw r25,1408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1408, ctx.r25.u32);
	// stw r25,1448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1448, ctx.r25.u32);
	// stb r25,1421(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1421, ctx.r25.u8);
	// stb r25,1422(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1422, ctx.r25.u8);
	// stb r25,1423(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1423, ctx.r25.u8);
	// stw r25,1076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1076, ctx.r25.u32);
	// stw r8,1428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1428, ctx.r8.u32);
loc_8211730C:
	// lbz r4,1420(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1420);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82117330
	if (ctx.cr6.eq) goto loc_82117330;
	// li r6,0
	ctx.r6.s64 = 0;
	// stb r25,1420(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1420, ctx.r25.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,22532
	ctx.r3.s64 = ctx.r31.s64 + 22532;
	// bl 0x82363348
	ctx.lr = 0x82117330;
	sub_82363348(ctx, base);
loc_82117330:
	// li r3,5
	ctx.r3.s64 = 5;
	// stw r3,1428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1428, ctx.r3.u32);
loc_82117338:
	// addi r30,r31,22532
	ctx.r30.s64 = ctx.r31.s64 + 22532;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82362f20
	ctx.lr = 0x82117344;
	sub_82362F20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211668c
	if (ctx.cr6.eq) goto loc_8211668C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82363b18
	ctx.lr = 0x82117358;
	sub_82363B18(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r10,1452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1452, ctx.r10.u32);
	// bl 0x82363b18
	ctx.lr = 0x8211736C;
	sub_82363B18(ctx, base);
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r9,6
	ctx.r9.s64 = 6;
	// stw r8,1456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1456, ctx.r8.u32);
	// stw r9,1428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1428, ctx.r9.u32);
loc_8211737C:
	// addi r3,r31,22488
	ctx.r3.s64 = ctx.r31.s64 + 22488;
	// bl 0x825c71ac
	ctx.lr = 0x82117384;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,4
	ctx.r7.s64 = 4;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,2688
	ctx.r5.s64 = ctx.r11.s64 + 2688;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x825af158
	ctx.lr = 0x821173A4;
	sub_825AF158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,22516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22516, ctx.r3.u32);
	// beq cr6,0x821173b8
	if (ctx.cr6.eq) goto loc_821173B8;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x825af010
	ctx.lr = 0x821173B8;
	sub_825AF010(ctx, base);
loc_821173B8:
	// li r7,7
	ctx.r7.s64 = 7;
	// stw r7,1428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1428, ctx.r7.u32);
loc_821173C0:
	// li r6,28
	ctx.r6.s64 = 28;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r6,1428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1428, ctx.r6.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb34
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821173D4"))) PPC_WEAK_FUNC(sub_821173D4);
PPC_FUNC_IMPL(__imp__sub_821173D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821173D8"))) PPC_WEAK_FUNC(sub_821173D8);
PPC_FUNC_IMPL(__imp__sub_821173D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae8
	ctx.lr = 0x821173E0;
	__savegprlr_24(ctx, base);
	// stwu r1,-864(r1)
	ea = -864 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 19, ctx.xer);
	// bgt cr6,0x821181d4
	if (ctx.cr6.gt) goto loc_821181D4;
	// lis r12,-32239
	ctx.r12.s64 = -2112815104;
	// addi r12,r12,29708
	ctx.r12.s64 = ctx.r12.s64 + 29708;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8211745C;
	case 1:
		goto loc_821175A8;
	case 2:
		goto loc_821175D8;
	case 3:
		goto loc_82117640;
	case 4:
		goto loc_82117688;
	case 5:
		goto loc_82117844;
	case 6:
		goto loc_821181DC;
	case 7:
		goto loc_821178BC;
	case 8:
		goto loc_82117AB0;
	case 9:
		goto loc_82117AF8;
	case 10:
		goto loc_82117C30;
	case 11:
		goto loc_82117C9C;
	case 12:
		goto loc_82117CF8;
	case 13:
		goto loc_82117ED8;
	case 14:
		goto loc_82117F78;
	case 15:
		goto loc_82117FF8;
	case 16:
		goto loc_82118080;
	case 17:
		goto loc_82118110;
	case 18:
		goto loc_82118174;
	case 19:
		goto loc_821181A4;
	default:
		__builtin_unreachable();
	}
	// lwz r16,29788(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 29788);
	// lwz r16,30120(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 30120);
	// lwz r16,30168(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 30168);
	// lwz r16,30272(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 30272);
	// lwz r16,30344(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 30344);
	// lwz r16,30788(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 30788);
	// lwz r16,-32292(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -32292);
	// lwz r16,30908(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 30908);
	// lwz r16,31408(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 31408);
	// lwz r16,31480(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 31480);
	// lwz r16,31792(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 31792);
	// lwz r16,31900(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 31900);
	// lwz r16,31992(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 31992);
	// lwz r16,32472(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 32472);
	// lwz r16,32632(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 32632);
	// lwz r16,32760(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 32760);
	// lwz r16,-32640(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -32640);
	// lwz r16,-32496(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -32496);
	// lwz r16,-32396(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -32396);
	// lwz r16,-32348(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -32348);
loc_8211745C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82105d30
	ctx.lr = 0x82117464;
	sub_82105D30(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,27400
	ctx.r4.s64 = ctx.r11.s64 + 27400;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,23504
	ctx.r3.s64 = ctx.r11.s64 + 23504;
	// bl 0x8210fcf8
	ctx.lr = 0x82117478;
	sub_8210FCF8(ctx, base);
	// addi r30,r31,52
	ctx.r30.s64 = ctx.r31.s64 + 52;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stb r28,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r28.u8);
	// beq cr6,0x82117498
	if (ctx.cr6.eq) goto loc_82117498;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82361bd8
	ctx.lr = 0x82117498;
	sub_82361BD8(ctx, base);
loc_82117498:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r28,22388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22388, ctx.r28.u32);
	// lis r9,7
	ctx.r9.s64 = 458752;
	// stb r28,22396(r31)
	PPC_STORE_U8(ctx.r31.u32 + 22396, ctx.r28.u8);
	// li r24,1
	ctx.r24.s64 = 1;
	// li r29,-1
	ctx.r29.s64 = -1;
	// li r10,512
	ctx.r10.s64 = 512;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// ori r8,r9,14715
	ctx.r8.u64 = ctx.r9.u64 | 14715;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// stb r24,1424(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1424, ctx.r24.u8);
	// stw r29,2336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2336, ctx.r29.u32);
	// stw r10,22392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22392, ctx.r10.u32);
	// stb r24,1413(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1413, ctx.r24.u8);
	// lbzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x821181dc
	if (!ctx.cr6.eq) goto loc_821181DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82105d30
	ctx.lr = 0x821174E8;
	sub_82105D30(ctx, base);
	// lis r6,1
	ctx.r6.s64 = 65536;
	// stb r28,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r28.u8);
	// ori r5,r6,9672
	ctx.r5.u64 = ctx.r6.u64 | 9672;
	// lwzx r3,r31,r5
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8211750c
	if (ctx.cr6.eq) goto loc_8211750C;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82361bd8
	ctx.lr = 0x8211750C;
	sub_82361BD8(ctx, base);
loc_8211750C:
	// lis r4,1
	ctx.r4.s64 = 65536;
	// stb r24,1413(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1413, ctx.r24.u8);
	// addi r30,r31,1080
	ctx.r30.s64 = ctx.r31.s64 + 1080;
	// stw r28,1400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1400, ctx.r28.u32);
	// ori r3,r4,9444
	ctx.r3.u64 = ctx.r4.u64 | 9444;
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lwzx r3,r31,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
loc_82117530:
	// lbz r9,3672(r8)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + 3672);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// bne cr6,0x82117530
	if (!ctx.cr6.eq) goto loc_82117530;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82117568
	if (ctx.cr6.eq) goto loc_82117568;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82361bd8
	ctx.lr = 0x8211755C;
	sub_82361BD8(ctx, base);
	// lwz r11,1400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1400);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1400, ctx.r11.u32);
loc_82117568:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82117570:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82117570
	if (!ctx.cr6.eq) goto loc_82117570;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r8,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82117598
	if (ctx.cr6.eq) goto loc_82117598;
	// stb r24,1414(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1414, ctx.r24.u8);
loc_82117598:
	// stw r29,1432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1432, ctx.r29.u32);
	// stw r24,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r24.u32);
	// addi r1,r1,864
	ctx.r1.s64 = ctx.r1.s64 + 864;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
loc_821175A8:
	// lbz r7,1414(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1414);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x821181dc
	if (!ctx.cr6.eq) goto loc_821181DC;
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r11,1432(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1432);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// stw r6,1432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1432, ctx.r6.u32);
	// beq cr6,0x821181dc
	if (ctx.cr6.eq) goto loc_821181DC;
	// li r5,19
	ctx.r5.s64 = 19;
	// stw r5,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r5.u32);
	// addi r1,r1,864
	ctx.r1.s64 = ctx.r1.s64 + 864;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
loc_821175D8:
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r4,7
	ctx.r4.s64 = 458752;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// ori r3,r4,14718
	ctx.r3.u64 = ctx.r4.u64 | 14718;
	// lbzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821181dc
	if (!ctx.cr6.eq) goto loc_821181DC;
	// addi r8,r31,22400
	ctx.r8.s64 = ctx.r31.s64 + 22400;
	// li r28,0
	ctx.r28.s64 = 0;
	// lis r9,7
	ctx.r9.s64 = 458752;
	// lis r6,64
	ctx.r6.s64 = 4194304;
	// ori r5,r9,14715
	ctx.r5.u64 = ctx.r9.u64 | 14715;
	// addi r7,r31,22388
	ctx.r7.s64 = ctx.r31.s64 + 22388;
	// std r28,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r28.u64);
	// li r4,1
	ctx.r4.s64 = 1;
	// std r28,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r28.u64);
	// std r28,16(r8)
	PPC_STORE_U64(ctx.r8.u32 + 16, ctx.r28.u64);
	// stw r28,24(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24, ctx.r28.u32);
	// lbzx r11,r11,r5
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// lwz r5,22392(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22392);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x825af690
	ctx.lr = 0x82117630;
	sub_825AF690(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r4,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r4.u32);
	// addi r1,r1,864
	ctx.r1.s64 = ctx.r1.s64 + 864;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
loc_82117640:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,22400
	ctx.r3.s64 = ctx.r31.s64 + 22400;
	// bl 0x825aed68
	ctx.lr = 0x82117650;
	sub_825AED68(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82117678
	if (ctx.cr6.eq) goto loc_82117678;
	// cmplwi cr6,r3,996
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 996, ctx.xer);
	// beq cr6,0x821181dc
	if (ctx.cr6.eq) goto loc_821181DC;
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x821181dc
	if (ctx.cr6.eq) goto loc_821181DC;
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// addi r1,r1,864
	ctx.r1.s64 = ctx.r1.s64 + 864;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
loc_82117678:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// addi r1,r1,864
	ctx.r1.s64 = ctx.r1.s64 + 864;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
loc_82117688:
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// ori r9,r10,14718
	ctx.r9.u64 = ctx.r10.u64 | 14718;
	// lbzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// beq cr6,0x821181dc
	if (ctx.cr6.eq) goto loc_821181DC;
	// lis r3,7
	ctx.r3.s64 = 458752;
	// lwz r4,22388(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22388);
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// ori r10,r3,14715
	ctx.r10.u64 = ctx.r3.u64 | 14715;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lbzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x825af1a8
	ctx.lr = 0x821176D0;
	sub_825AF1A8(ctx, base);
	// addi r30,r31,2368
	ctx.r30.s64 = ctx.r31.s64 + 2368;
	// li r5,19712
	ctx.r5.s64 = 19712;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259d300
	ctx.lr = 0x821176E4;
	sub_8259D300(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r5,19712
	ctx.r5.s64 = 19712;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x825ae950
	ctx.lr = 0x821176FC;
	sub_825AE950(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// ble cr6,0x8211770c
	if (!ctx.cr6.gt) goto loc_8211770C;
	// li r11,64
	ctx.r11.s64 = 64;
loc_8211770C:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,2348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2348, ctx.r11.u32);
	// bl 0x825aed30
	ctx.lr = 0x82117718;
	sub_825AED30(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// addi r29,r11,27392
	ctx.r29.s64 = ctx.r11.s64 + 27392;
	// stw r28,2340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2340, ctx.r28.u32);
	// li r24,1
	ctx.r24.s64 = 1;
	// stw r9,2336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2336, ctx.r9.u32);
loc_82117738:
	// lbz r8,2270(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2270);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r5,r31,2303
	ctx.r5.s64 = ctx.r31.s64 + 2303;
	// bne cr6,0x82117758
	if (!ctx.cr6.eq) goto loc_82117758;
	// addi r5,r31,2271
	ctx.r5.s64 = ctx.r31.s64 + 2271;
loc_82117758:
	// bl 0x8259d1b0
	ctx.lr = 0x8211775C;
	sub_8259D1B0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821177d4
	if (ctx.cr6.eq) goto loc_821177D4;
	// addi r7,r31,2632
	ctx.r7.s64 = ctx.r31.s64 + 2632;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
loc_82117774:
	// lwz r4,-260(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + -260);
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// bne cr6,0x821177c4
	if (!ctx.cr6.eq) goto loc_821177C4;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_82117788:
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// subf r8,r3,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r3.s64;
	// beq cr6,0x821177ac
	if (ctx.cr6.eq) goto loc_821177AC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82117788
	if (ctx.cr6.eq) goto loc_82117788;
loc_821177AC:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x821177c4
	if (!ctx.cr6.eq) goto loc_821177C4;
	// lwz r11,2340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2340);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,2340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2340, ctx.r11.u32);
loc_821177C4:
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// addi r7,r7,308
	ctx.r7.s64 = ctx.r7.s64 + 308;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82117774
	if (!ctx.cr6.eq) goto loc_82117774;
loc_821177D4:
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821177f0
	if (!ctx.cr6.eq) goto loc_821177F0;
	// lwz r9,2336(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2336);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// bne cr6,0x821177f0
	if (!ctx.cr6.eq) goto loc_821177F0;
	// stw r30,2336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2336, ctx.r30.u32);
loc_821177F0:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,20
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 20, ctx.xer);
	// blt cr6,0x82117738
	if (ctx.cr6.lt) goto loc_82117738;
	// lwz r8,2336(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2336);
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// bne cr6,0x82117818
	if (!ctx.cr6.eq) goto loc_82117818;
	// li r7,13
	ctx.r7.s64 = 13;
	// stw r7,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r7.u32);
	// addi r1,r1,864
	ctx.r1.s64 = ctx.r1.s64 + 864;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
loc_82117818:
	// lbz r6,2270(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2270);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82117834
	if (ctx.cr6.eq) goto loc_82117834;
	// li r5,7
	ctx.r5.s64 = 7;
	// stw r5,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r5.u32);
	// addi r1,r1,864
	ctx.r1.s64 = ctx.r1.s64 + 864;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
loc_82117834:
	// li r4,5
	ctx.r4.s64 = 5;
	// stw r4,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r4.u32);
	// addi r1,r1,864
	ctx.r1.s64 = ctx.r1.s64 + 864;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
loc_82117844:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r11,12360
	ctx.r30.s64 = ctx.r11.s64 + 12360;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r4,r30,36
	ctx.r4.s64 = ctx.r30.s64 + 36;
	// addi r29,r11,23504
	ctx.r29.s64 = ctx.r11.s64 + 23504;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8210fcf8
	ctx.lr = 0x82117860;
	sub_8210FCF8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8210fcf8
	ctx.lr = 0x82117870;
	sub_8210FCF8(ctx, base);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// addis r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 458752;
	// lis r4,12288
	ctx.r4.s64 = 805306368;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r8,r10,16128
	ctx.r8.s64 = ctx.r10.s64 + 16128;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// addi r9,r9,4984
	ctx.r9.s64 = ctx.r9.s64 + 4984;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// ori r4,r4,100
	ctx.r4.u64 = ctx.r4.u64 | 100;
	// addi r3,r11,15320
	ctx.r3.s64 = ctx.r11.s64 + 15320;
	// bl 0x8210d978
	ctx.lr = 0x821178AC;
	sub_8210D978(ctx, base);
	// li r3,6
	ctx.r3.s64 = 6;
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// addi r1,r1,864
	ctx.r1.s64 = ctx.r1.s64 + 864;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
loc_821178BC:
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r25,r11,26080
	ctx.r25.s64 = ctx.r11.s64 + 26080;
	// lis r11,7
	ctx.r11.s64 = 458752;
	// ori r10,r11,14718
	ctx.r10.u64 = ctx.r11.u64 | 14718;
	// lbzx r9,r25,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r25.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// beq cr6,0x821181dc
	if (ctx.cr6.eq) goto loc_821181DC;
	// lbz r8,2270(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2270);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// addi r30,r11,-1452
	ctx.r30.s64 = ctx.r11.s64 + -1452;
	// bne cr6,0x821178f4
	if (!ctx.cr6.eq) goto loc_821178F4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820fa150
	ctx.lr = 0x821178F4;
	sub_820FA150(ctx, base);
loc_821178F4:
	// li r28,0
	ctx.r28.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r28,22484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22484, ctx.r28.u32);
	// stw r28,22476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22476, ctx.r28.u32);
	// bl 0x825ae968
	ctx.lr = 0x82117914;
	sub_825AE968(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r27,r31,22400
	ctx.r27.s64 = ctx.r31.s64 + 22400;
	// addi r26,r31,22080
	ctx.r26.s64 = ctx.r31.s64 + 22080;
	// li r24,1
	ctx.r24.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,22468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22468, ctx.r11.u32);
	// std r28,0(r27)
	PPC_STORE_U64(ctx.r27.u32 + 0, ctx.r28.u64);
	// std r28,8(r27)
	PPC_STORE_U64(ctx.r27.u32 + 8, ctx.r28.u64);
	// std r28,16(r27)
	PPC_STORE_U64(ctx.r27.u32 + 16, ctx.r28.u64);
	// stw r28,24(r27)
	PPC_STORE_U32(ctx.r27.u32 + 24, ctx.r28.u32);
	// lwz r7,22468(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22468);
	// lwz r6,22388(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22388);
	// stw r24,22084(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22084, ctx.r24.u32);
	// stw r7,22412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22412, ctx.r7.u32);
	// stw r6,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r6.u32);
	// bl 0x82105d30
	ctx.lr = 0x82117954;
	sub_82105D30(ctx, base);
	// lbz r5,2270(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2270);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8211796c
	if (ctx.cr6.eq) goto loc_8211796C;
	// lwz r11,2356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2356);
	// addi r29,r11,12476
	ctx.r29.s64 = ctx.r11.s64 + 12476;
	// b 0x82117978
	goto loc_82117978;
loc_8211796C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f9f90
	ctx.lr = 0x82117974;
	sub_820F9F90(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82117978:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x821179f0
	if (ctx.cr6.eq) goto loc_821179F0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8259de20
	ctx.lr = 0x82117988;
	sub_8259DE20(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821179f0
	if (ctx.cr6.eq) goto loc_821179F0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8259de20
	ctx.lr = 0x82117998;
	sub_8259DE20(ctx, base);
	// cmplwi cr6,r3,127
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 127, ctx.xer);
	// bge cr6,0x821179ac
	if (!ctx.cr6.lt) goto loc_821179AC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8259de20
	ctx.lr = 0x821179A8;
	sub_8259DE20(ctx, base);
	// b 0x821179b0
	goto loc_821179B0;
loc_821179AC:
	// li r3,127
	ctx.r3.s64 = 127;
loc_821179B0:
	// addi r30,r31,22088
	ctx.r30.s64 = ctx.r31.s64 + 22088;
	// addi r5,r3,1
	ctx.r5.s64 = ctx.r3.s64 + 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259ddc0
	ctx.lr = 0x821179C4;
	sub_8259DDC0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,27400
	ctx.r4.s64 = ctx.r11.s64 + 27400;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,23504
	ctx.r3.s64 = ctx.r11.s64 + 23504;
	// bl 0x8210fcf8
	ctx.lr = 0x821179D8;
	sub_8210FCF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82105918
	ctx.lr = 0x821179EC;
	sub_82105918(ctx, base);
	// b 0x82117a30
	goto loc_82117A30;
loc_821179F0:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r31,22088
	ctx.r3.s64 = ctx.r31.s64 + 22088;
	// addi r4,r11,27388
	ctx.r4.s64 = ctx.r11.s64 + 27388;
	// bl 0x8259dbb0
	ctx.lr = 0x82117A00;
	sub_8259DBB0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,27400
	ctx.r4.s64 = ctx.r11.s64 + 27400;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,23504
	ctx.r3.s64 = ctx.r11.s64 + 23504;
	// bl 0x8210fcf8
	ctx.lr = 0x82117A14;
	sub_8210FCF8(ctx, base);
	// addi r4,r31,52
	ctx.r4.s64 = ctx.r31.s64 + 52;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stb r28,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r28.u8);
	// beq cr6,0x82117a2c
	if (ctx.cr6.eq) goto loc_82117A2C;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// bl 0x82361bd8
	ctx.lr = 0x82117A2C;
	sub_82361BD8(ctx, base);
loc_82117A2C:
	// stb r24,1413(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1413, ctx.r24.u8);
loc_82117A30:
	// lbz r4,2270(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2270);
	// addi r30,r31,22344
	ctx.r30.s64 = ctx.r31.s64 + 22344;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r6,2336(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2336);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,27392
	ctx.r4.s64 = ctx.r11.s64 + 27392;
	// addi r5,r31,2303
	ctx.r5.s64 = ctx.r31.s64 + 2303;
	// bne cr6,0x82117a58
	if (!ctx.cr6.eq) goto loc_82117A58;
	// addi r5,r31,2271
	ctx.r5.s64 = ctx.r31.s64 + 2271;
loc_82117A58:
	// bl 0x8259d1b0
	ctx.lr = 0x82117A5C;
	sub_8259D1B0(ctx, base);
	// lwz r11,2356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2356);
	// li r5,42
	ctx.r5.s64 = 42;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,12688
	ctx.r3.s64 = ctx.r11.s64 + 12688;
	// bl 0x8259d2a0
	ctx.lr = 0x82117A70;
	sub_8259D2A0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r3,7
	ctx.r3.s64 = 458752;
	// addi r4,r11,13564
	ctx.r4.s64 = ctx.r11.s64 + 13564;
	// ori r11,r3,14715
	ctx.r11.u64 = ctx.r3.u64 | 14715;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2
	ctx.r6.s64 = 2;
	// lbzx r11,r25,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + ctx.r11.u32);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x825af168
	ctx.lr = 0x82117AA0;
	sub_825AF168(ctx, base);
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// addi r1,r1,864
	ctx.r1.s64 = ctx.r1.s64 + 864;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
loc_82117AB0:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,22400
	ctx.r3.s64 = ctx.r31.s64 + 22400;
	// bl 0x825aed68
	ctx.lr = 0x82117AC0;
	sub_825AED68(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82117ae8
	if (ctx.cr6.eq) goto loc_82117AE8;
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x821181dc
	if (ctx.cr6.eq) goto loc_821181DC;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,11
	ctx.r8.s64 = 11;
	// stb r9,1424(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1424, ctx.r9.u8);
	// stw r8,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r8.u32);
	// addi r1,r1,864
	ctx.r1.s64 = ctx.r1.s64 + 864;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
loc_82117AE8:
	// li r7,9
	ctx.r7.s64 = 9;
	// stw r7,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r7.u32);
	// addi r1,r1,864
	ctx.r1.s64 = ctx.r1.s64 + 864;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
loc_82117AF8:
	// li r5,259
	ctx.r5.s64 = 259;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,273
	ctx.r3.s64 = ctx.r1.s64 + 273;
	// bl 0x8259d300
	ctx.lr = 0x82117B08;
	sub_8259D300(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r10,r1,272
	ctx.r10.s64 = ctx.r1.s64 + 272;
	// addi r11,r11,17688
	ctx.r11.s64 = ctx.r11.s64 + 17688;
	// li r9,10
	ctx.r9.s64 = 10;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82117B1C:
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r6,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r6.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x82117b1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82117B1C;
	// addi r9,r31,22344
	ctx.r9.s64 = ctx.r31.s64 + 22344;
	// addi r11,r1,272
	ctx.r11.s64 = ctx.r1.s64 + 272;
loc_82117B38:
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82117b38
	if (!ctx.cr6.eq) goto loc_82117B38;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82117B4C:
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
	// bne cr6,0x82117b4c
	if (!ctx.cr6.eq) goto loc_82117B4C;
	// lis r8,16384
	ctx.r8.s64 = 1073741824;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r8,r8,128
	ctx.r8.u64 = ctx.r8.u64 | 128;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,7
	ctx.r5.s64 = 7;
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x825af2f0
	ctx.lr = 0x82117B88;
	sub_825AF2F0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// stw r3,22484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22484, ctx.r3.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// beq cr6,0x82117c18
	if (ctx.cr6.eq) goto loc_82117C18;
	// addi r30,r31,22448
	ctx.r30.s64 = ctx.r31.s64 + 22448;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// std r28,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r28.u64);
	// std r28,8(r30)
	PPC_STORE_U64(ctx.r30.u32 + 8, ctx.r28.u64);
	// stw r28,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r28.u32);
	// bl 0x825ae968
	ctx.lr = 0x82117BBC;
	sub_825AE968(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r4,2356(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2356);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r3,22484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22484);
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r5,64
	ctx.r5.s64 = 4194304;
	// stw r11,22476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22476, ctx.r11.u32);
	// stw r11,22464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22464, ctx.r11.u32);
	// bl 0x825af1c8
	ctx.lr = 0x82117BE0;
	sub_825AF1C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82117c08
	if (!ctx.cr6.eq) goto loc_82117C08;
	// bl 0x825af6c0
	ctx.lr = 0x82117BEC;
	sub_825AF6C0(ctx, base);
	// cmplwi cr6,r3,996
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 996, ctx.xer);
	// blt cr6,0x82117bfc
	if (ctx.cr6.lt) goto loc_82117BFC;
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// ble cr6,0x82117c08
	if (!ctx.cr6.gt) goto loc_82117C08;
loc_82117BFC:
	// li r4,11
	ctx.r4.s64 = 11;
	// stb r28,1424(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1424, ctx.r28.u8);
	// stw r4,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r4.u32);
loc_82117C08:
	// li r3,10
	ctx.r3.s64 = 10;
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// addi r1,r1,864
	ctx.r1.s64 = ctx.r1.s64 + 864;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
loc_82117C18:
	// li r11,11
	ctx.r11.s64 = 11;
	// stb r28,1424(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1424, ctx.r28.u8);
	// stw r28,22484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22484, ctx.r28.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// addi r1,r1,864
	ctx.r1.s64 = ctx.r1.s64 + 864;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
loc_82117C30:
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r3,22484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22484);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,22448
	ctx.r4.s64 = ctx.r31.s64 + 22448;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// bl 0x825af7e0
	ctx.lr = 0x82117C4C;
	sub_825AF7E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82117c64
	if (ctx.cr6.eq) goto loc_82117C64;
	// li r10,11
	ctx.r10.s64 = 11;
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// addi r1,r1,864
	ctx.r1.s64 = ctx.r1.s64 + 864;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
loc_82117C64:
	// bl 0x825af6c0
	ctx.lr = 0x82117C68;
	sub_825AF6C0(ctx, base);
	// cmplwi cr6,r3,996
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 996, ctx.xer);
	// blt cr6,0x82117c88
	if (ctx.cr6.lt) goto loc_82117C88;
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// ble cr6,0x821181dc
	if (!ctx.cr6.gt) goto loc_821181DC;
	// cmplwi cr6,r3,1617
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1617, ctx.xer);
	// bne cr6,0x82117c88
	if (!ctx.cr6.eq) goto loc_82117C88;
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r9,22396(r31)
	PPC_STORE_U8(ctx.r31.u32 + 22396, ctx.r9.u8);
loc_82117C88:
	// li r8,11
	ctx.r8.s64 = 11;
	// stb r28,1424(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1424, ctx.r28.u8);
	// stw r8,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r8.u32);
	// addi r1,r1,864
	ctx.r1.s64 = ctx.r1.s64 + 864;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
loc_82117C9C:
	// lwz r3,22484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22484);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82117cac
	if (ctx.cr6.eq) goto loc_82117CAC;
	// bl 0x825aed30
	ctx.lr = 0x82117CAC;
	sub_825AED30(ctx, base);
loc_82117CAC:
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r3,22476(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22476);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r28,22484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22484, ctx.r28.u32);
	// beq cr6,0x82117cc4
	if (ctx.cr6.eq) goto loc_82117CC4;
	// bl 0x825aed30
	ctx.lr = 0x82117CC4;
	sub_825AED30(ctx, base);
loc_82117CC4:
	// addi r4,r31,22400
	ctx.r4.s64 = ctx.r31.s64 + 22400;
	// stw r28,22476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22476, ctx.r28.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,13564
	ctx.r3.s64 = ctx.r11.s64 + 13564;
	// std r28,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r28.u64);
	// std r28,8(r4)
	PPC_STORE_U64(ctx.r4.u32 + 8, ctx.r28.u64);
	// std r28,16(r4)
	PPC_STORE_U64(ctx.r4.u32 + 16, ctx.r28.u64);
	// stw r28,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, ctx.r28.u32);
	// bl 0x825af190
	ctx.lr = 0x82117CE8;
	sub_825AF190(ctx, base);
	// li r7,12
	ctx.r7.s64 = 12;
	// stw r7,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r7.u32);
	// addi r1,r1,864
	ctx.r1.s64 = ctx.r1.s64 + 864;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
loc_82117CF8:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,22400
	ctx.r3.s64 = ctx.r31.s64 + 22400;
	// bl 0x825aed68
	ctx.lr = 0x82117D08;
	sub_825AED68(ctx, base);
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x821181dc
	if (ctx.cr6.eq) goto loc_821181DC;
	// lwz r3,22468(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22468);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82117d20
	if (ctx.cr6.eq) goto loc_82117D20;
	// bl 0x825aed30
	ctx.lr = 0x82117D20;
	sub_825AED30(ctx, base);
loc_82117D20:
	// lis r6,7
	ctx.r6.s64 = 458752;
	// lwz r11,1468(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1468);
	// lis r10,-32124
	ctx.r10.s64 = -2105278464;
	// li r28,0
	ctx.r28.s64 = 0;
	// ori r5,r6,14715
	ctx.r5.u64 = ctx.r6.u64 | 14715;
	// addi r10,r10,26080
	ctx.r10.s64 = ctx.r10.s64 + 26080;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r31,22080
	ctx.r4.s64 = ctx.r31.s64 + 22080;
	// stw r28,22468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22468, ctx.r28.u32);
	// lwz r6,56(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// lbzx r10,r10,r5
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r5.u32);
	// lwz r5,52(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// extsb r3,r10
	ctx.r3.s64 = ctx.r10.s8;
	// bl 0x825af198
	ctx.lr = 0x82117D58;
	sub_825AF198(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82117d64
	if (ctx.cr6.eq) goto loc_82117D64;
	// stb r28,1424(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1424, ctx.r28.u8);
loc_82117D64:
	// lbz r4,22396(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 22396);
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// bne cr6,0x82117d84
	if (!ctx.cr6.eq) goto loc_82117D84;
	// li r3,15
	ctx.r3.s64 = 15;
	// stb r28,22396(r31)
	PPC_STORE_U8(ctx.r31.u32 + 22396, ctx.r28.u8);
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// addi r1,r1,864
	ctx.r1.s64 = ctx.r1.s64 + 864;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
loc_82117D84:
	// lbz r11,1424(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1424);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82117da0
	if (!ctx.cr6.eq) goto loc_82117DA0;
	// li r10,16
	ctx.r10.s64 = 16;
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// addi r1,r1,864
	ctx.r1.s64 = ctx.r1.s64 + 864;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
loc_82117DA0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82105d30
	ctx.lr = 0x82117DA8;
	sub_82105D30(ctx, base);
	// lwz r11,2340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2340);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r6,20
	ctx.r6.s64 = 20;
	// addi r4,r10,27368
	ctx.r4.s64 = ctx.r10.s64 + 27368;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82101778
	ctx.lr = 0x82117DC4;
	sub_82101778(ctx, base);
	// lbz r9,2270(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2270);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// beq cr6,0x82117e00
	if (ctx.cr6.eq) goto loc_82117E00;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// addi r4,r11,27356
	ctx.r4.s64 = ctx.r11.s64 + 27356;
	// ori r7,r8,9684
	ctx.r7.u64 = ctx.r8.u64 | 9684;
	// lwzx r5,r31,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// bl 0x82101778
	ctx.lr = 0x82117DF0;
	sub_82101778(ctx, base);
	// lis r6,1
	ctx.r6.s64 = 65536;
	// ori r5,r6,9692
	ctx.r5.u64 = ctx.r6.u64 | 9692;
	// lwzx r5,r31,r5
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// b 0x82117e20
	goto loc_82117E20;
loc_82117E00:
	// lis r4,1
	ctx.r4.s64 = 65536;
	// ori r10,r4,9680
	ctx.r10.u64 = ctx.r4.u64 | 9680;
	// addi r4,r11,27356
	ctx.r4.s64 = ctx.r11.s64 + 27356;
	// lwzx r5,r31,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// bl 0x82101778
	ctx.lr = 0x82117E14;
	sub_82101778(ctx, base);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// ori r8,r9,9688
	ctx.r8.u64 = ctx.r9.u64 | 9688;
	// lwzx r5,r31,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
loc_82117E20:
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82105918
	ctx.lr = 0x82117E30;
	sub_82105918(ctx, base);
	// lis r7,1
	ctx.r7.s64 = 65536;
	// addi r30,r31,1080
	ctx.r30.s64 = ctx.r31.s64 + 1080;
	// stw r28,1400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1400, ctx.r28.u32);
	// ori r6,r7,9444
	ctx.r6.u64 = ctx.r7.u64 | 9444;
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lwzx r3,r31,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
loc_82117E50:
	// lbz r9,3672(r8)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + 3672);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// bne cr6,0x82117e50
	if (!ctx.cr6.eq) goto loc_82117E50;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82117e88
	if (ctx.cr6.eq) goto loc_82117E88;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82361bd8
	ctx.lr = 0x82117E7C;
	sub_82361BD8(ctx, base);
	// lwz r11,1400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1400);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stw r5,1400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1400, ctx.r5.u32);
loc_82117E88:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82117E90:
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82117e90
	if (!ctx.cr6.eq) goto loc_82117E90;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// li r24,1
	ctx.r24.s64 = 1;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r3,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82117ebc
	if (ctx.cr6.eq) goto loc_82117EBC;
	// stb r24,1414(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1414, ctx.r24.u8);
loc_82117EBC:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r24,1448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1448, ctx.r24.u32);
	// li r10,18
	ctx.r10.s64 = 18;
	// stw r11,1432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1432, ctx.r11.u32);
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// addi r1,r1,864
	ctx.r1.s64 = ctx.r1.s64 + 864;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
loc_82117ED8:
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r9,7
	ctx.r9.s64 = 458752;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// ori r8,r9,14718
	ctx.r8.u64 = ctx.r9.u64 | 14718;
	// lbzx r7,r11,r8
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// beq cr6,0x821181dc
	if (ctx.cr6.eq) goto loc_821181DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82105d30
	ctx.lr = 0x82117EFC;
	sub_82105D30(ctx, base);
	// lis r6,1
	ctx.r6.s64 = 65536;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// ori r5,r6,9700
	ctx.r5.u64 = ctx.r6.u64 | 9700;
	// addi r6,r11,2848
	ctx.r6.s64 = ctx.r11.s64 + 2848;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// li r3,256
	ctx.r3.s64 = 256;
	// lwzx r5,r31,r5
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// bl 0x8210d9f8
	ctx.lr = 0x82117F1C;
	sub_8210D9F8(ctx, base);
	// addi r4,r31,52
	ctx.r4.s64 = ctx.r31.s64 + 52;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// stb r28,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r28.u8);
	// bl 0x82361bd8
	ctx.lr = 0x82117F34;
	sub_82361BD8(ctx, base);
	// lis r3,1
	ctx.r3.s64 = 65536;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// li r4,1
	ctx.r4.s64 = 1;
	// ori r11,r3,9464
	ctx.r11.u64 = ctx.r3.u64 | 9464;
	// ori r9,r10,9660
	ctx.r9.u64 = ctx.r10.u64 | 9660;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r4,1413(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1413, ctx.r4.u8);
	// lwzx r5,r31,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwzx r4,r31,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// bl 0x82105b30
	ctx.lr = 0x82117F64;
	sub_82105B30(ctx, base);
	// li r8,14
	ctx.r8.s64 = 14;
	// stw r28,1448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1448, ctx.r28.u32);
	// stw r8,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r8.u32);
	// addi r1,r1,864
	ctx.r1.s64 = ctx.r1.s64 + 864;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
loc_82117F78:
	// lbz r7,1414(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1414);
	// li r29,-1
	ctx.r29.s64 = -1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82117f90
	if (ctx.cr6.eq) goto loc_82117F90;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82117f98
	goto loc_82117F98;
loc_82117F90:
	// lwz r11,1432(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1432);
	// stw r29,1432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1432, ctx.r29.u32);
loc_82117F98:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82117fc4
	if (ctx.cr6.lt) goto loc_82117FC4;
	// bne cr6,0x821181dc
	if (!ctx.cr6.eq) goto loc_821181DC;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r6,1424(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1424, ctx.r6.u8);
	// bl 0x82105d30
	ctx.lr = 0x82117FB4;
	sub_82105D30(ctx, base);
	// li r5,19
	ctx.r5.s64 = 19;
	// stw r5,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r5.u32);
	// addi r1,r1,864
	ctx.r1.s64 = ctx.r1.s64 + 864;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
loc_82117FC4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82105d30
	ctx.lr = 0x82117FCC;
	sub_82105D30(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r29,2336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2336, ctx.r29.u32);
	// li r11,512
	ctx.r11.s64 = 512;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r4,1424(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1424, ctx.r4.u8);
	// stw r3,22388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22388, ctx.r3.u32);
	// stw r11,22392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22392, ctx.r11.u32);
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// addi r1,r1,864
	ctx.r1.s64 = ctx.r1.s64 + 864;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
loc_82117FF8:
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r9,7
	ctx.r9.s64 = 458752;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// ori r8,r9,14718
	ctx.r8.u64 = ctx.r9.u64 | 14718;
	// lbzx r7,r11,r8
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// beq cr6,0x821181dc
	if (ctx.cr6.eq) goto loc_821181DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82105d30
	ctx.lr = 0x8211801C;
	sub_82105D30(ctx, base);
	// lis r6,1
	ctx.r6.s64 = 65536;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// ori r5,r6,9580
	ctx.r5.u64 = ctx.r6.u64 | 9580;
	// ori r11,r4,9704
	ctx.r11.u64 = ctx.r4.u64 | 9704;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r5,r31,r5
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// lwzx r4,r31,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// bl 0x82105918
	ctx.lr = 0x82118040;
	sub_82105918(ctx, base);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// ori r9,r10,9440
	ctx.r9.u64 = ctx.r10.u64 | 9440;
	// ori r4,r8,9436
	ctx.r4.u64 = ctx.r8.u64 | 9436;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r5,r31,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// lwzx r4,r31,r4
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	// bl 0x82105b30
	ctx.lr = 0x82118068;
	sub_82105B30(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// li r11,17
	ctx.r11.s64 = 17;
	// stw r3,1448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1448, ctx.r3.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// addi r1,r1,864
	ctx.r1.s64 = ctx.r1.s64 + 864;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
loc_82118080:
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// ori r9,r10,14718
	ctx.r9.u64 = ctx.r10.u64 | 14718;
	// lbzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// beq cr6,0x821181dc
	if (ctx.cr6.eq) goto loc_821181DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82105d30
	ctx.lr = 0x821180A4;
	sub_82105D30(ctx, base);
	// lis r7,1
	ctx.r7.s64 = 65536;
	// addi r4,r31,52
	ctx.r4.s64 = ctx.r31.s64 + 52;
	// ori r6,r7,9580
	ctx.r6.u64 = ctx.r7.u64 | 9580;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwzx r3,r31,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// stb r5,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r5.u8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821180cc
	if (ctx.cr6.eq) goto loc_821180CC;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// bl 0x82361bd8
	ctx.lr = 0x821180CC;
	sub_82361BD8(ctx, base);
loc_821180CC:
	// lis r4,1
	ctx.r4.s64 = 65536;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r11,r4,9440
	ctx.r11.u64 = ctx.r4.u64 | 9440;
	// ori r9,r10,9436
	ctx.r9.u64 = ctx.r10.u64 | 9436;
	// li r24,1
	ctx.r24.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r5,r31,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwzx r4,r31,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// stb r24,1413(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1413, ctx.r24.u8);
	// bl 0x82105b30
	ctx.lr = 0x821180FC;
	sub_82105B30(ctx, base);
	// li r8,17
	ctx.r8.s64 = 17;
	// stw r24,1448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1448, ctx.r24.u32);
	// stw r8,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r8.u32);
	// addi r1,r1,864
	ctx.r1.s64 = ctx.r1.s64 + 864;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
loc_82118110:
	// lbz r7,1414(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1414);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82118124
	if (ctx.cr6.eq) goto loc_82118124;
	// li r11,-1
	ctx.r11.s64 = -1;
	// b 0x82118130
	goto loc_82118130;
loc_82118124:
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r11,1432(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1432);
	// stw r6,1432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1432, ctx.r6.u32);
loc_82118130:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82118154
	if (ctx.cr6.lt) goto loc_82118154;
	// bne cr6,0x821181dc
	if (!ctx.cr6.eq) goto loc_821181DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82105d30
	ctx.lr = 0x82118144;
	sub_82105D30(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r5,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r5.u32);
	// addi r1,r1,864
	ctx.r1.s64 = ctx.r1.s64 + 864;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
loc_82118154:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r4,1424(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1424, ctx.r4.u8);
	// bl 0x82105d30
	ctx.lr = 0x82118164;
	sub_82105D30(ctx, base);
	// li r3,19
	ctx.r3.s64 = 19;
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// addi r1,r1,864
	ctx.r1.s64 = ctx.r1.s64 + 864;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
loc_82118174:
	// lbz r11,1414(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1414);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821181dc
	if (!ctx.cr6.eq) goto loc_821181DC;
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r11,1432(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1432);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// stw r10,1432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1432, ctx.r10.u32);
	// beq cr6,0x821181dc
	if (ctx.cr6.eq) goto loc_821181DC;
	// li r9,19
	ctx.r9.s64 = 19;
	// stw r9,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// addi r1,r1,864
	ctx.r1.s64 = ctx.r1.s64 + 864;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
loc_821181A4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82105d30
	ctx.lr = 0x821181AC;
	sub_82105D30(ctx, base);
	// addi r30,r31,22532
	ctx.r30.s64 = ctx.r31.s64 + 22532;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82363b28
	ctx.lr = 0x821181B8;
	sub_82363B28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82363b38
	ctx.lr = 0x821181C4;
	sub_82363B38(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82105688
	ctx.lr = 0x821181CC;
	sub_82105688(ctx, base);
	// addi r1,r1,864
	ctx.r1.s64 = ctx.r1.s64 + 864;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
loc_821181D4:
	// li r8,19
	ctx.r8.s64 = 19;
	// stw r8,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r8.u32);
loc_821181DC:
	// addi r1,r1,864
	ctx.r1.s64 = ctx.r1.s64 + 864;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821181E4"))) PPC_WEAK_FUNC(sub_821181E4);
PPC_FUNC_IMPL(__imp__sub_821181E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821181E8"))) PPC_WEAK_FUNC(sub_821181E8);
PPC_FUNC_IMPL(__imp__sub_821181E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x821181F0;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bgt cr6,0x821182e4
	if (ctx.cr6.gt) goto loc_821182E4;
	// lis r12,-32238
	ctx.r12.s64 = -2112749568;
	// addi r12,r12,-32228
	ctx.r12.s64 = ctx.r12.s64 + -32228;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82118260;
	case 1:
		goto loc_82118270;
	case 2:
		goto loc_821182F4;
	case 3:
		goto loc_82118468;
	case 4:
		goto loc_821184D0;
	case 5:
		goto loc_82118560;
	case 6:
		goto loc_821185C4;
	case 7:
		goto loc_82118630;
	case 8:
		goto loc_82118654;
	case 9:
		goto loc_821186C0;
	case 10:
		goto loc_82118768;
	case 11:
		goto loc_82118874;
	case 12:
		goto loc_821188D0;
	case 13:
		goto loc_821189B0;
	case 14:
		goto loc_82118AA0;
	case 15:
		goto loc_82118A64;
	case 16:
		goto loc_82118AFC;
	default:
		__builtin_unreachable();
	}
	// lwz r16,-32160(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -32160);
	// lwz r16,-32144(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -32144);
	// lwz r16,-32012(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -32012);
	// lwz r16,-31640(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -31640);
	// lwz r16,-31536(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -31536);
	// lwz r16,-31392(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -31392);
	// lwz r16,-31292(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -31292);
	// lwz r16,-31184(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -31184);
	// lwz r16,-31148(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -31148);
	// lwz r16,-31040(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -31040);
	// lwz r16,-30872(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -30872);
	// lwz r16,-30604(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -30604);
	// lwz r16,-30512(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -30512);
	// lwz r16,-30288(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -30288);
	// lwz r16,-30048(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -30048);
	// lwz r16,-30108(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -30108);
	// lwz r16,-29956(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -29956);
loc_82118260:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_82118270:
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// lbz r11,58(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 58);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821182d8
	if (ctx.cr6.eq) goto loc_821182D8;
	// addi r30,r31,22532
	ctx.r30.s64 = ctx.r31.s64 + 22532;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82363b28
	ctx.lr = 0x82118290;
	sub_82363B28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82363b38
	ctx.lr = 0x8211829C;
	sub_82363B38(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r7,1480(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1480);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r9,1076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1076, ctx.r9.u32);
	// lwz r11,84(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 84);
	// lwz r4,0(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821182C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_821182D8:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,22532
	ctx.r3.s64 = ctx.r31.s64 + 22532;
	// bl 0x82360620
	ctx.lr = 0x821182E4;
	sub_82360620(ctx, base);
loc_821182E4:
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
loc_821182EC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_821182F4:
	// addi r30,r31,22532
	ctx.r30.s64 = ctx.r31.s64 + 22532;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82362fc0
	ctx.lr = 0x82118300;
	sub_82362FC0(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82118314
	if (ctx.cr6.eq) goto loc_82118314;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82105e78
	ctx.lr = 0x82118314;
	sub_82105E78(ctx, base);
loc_82118314:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82362f20
	ctx.lr = 0x8211831C;
	sub_82362F20(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x821182ec
	if (ctx.cr6.eq) goto loc_821182EC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82360698
	ctx.lr = 0x82118330;
	sub_82360698(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82118384
	if (ctx.cr6.eq) goto loc_82118384;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82360620
	ctx.lr = 0x82118348;
	sub_82360620(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82363b30
	ctx.lr = 0x82118354;
	sub_82363B30(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82363b20
	ctx.lr = 0x82118360;
	sub_82363B20(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82363b18
	ctx.lr = 0x82118368;
	sub_82363B18(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r5,1452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1452, ctx.r5.u32);
	// bl 0x82363b18
	ctx.lr = 0x8211837C;
	sub_82363B18(ctx, base);
	// lwz r4,20(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r4,1456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1456, ctx.r4.u32);
loc_82118384:
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,22548(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22548);
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// stw r3,1076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1076, ctx.r3.u32);
	// bgt cr6,0x821182ec
	if (ctx.cr6.gt) goto loc_821182EC;
	// lis r12,-32238
	ctx.r12.s64 = -2112749568;
	// addi r12,r12,-31824
	ctx.r12.s64 = ctx.r12.s64 + -31824;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_821183F4;
	case 1:
		goto loc_821183E4;
	case 2:
		goto loc_821183E4;
	case 3:
		goto loc_821183E4;
	case 4:
		goto loc_821183E4;
	case 5:
		goto loc_821183E4;
	case 6:
		goto loc_821182EC;
	case 7:
		goto loc_821183E4;
	case 8:
		goto loc_821183E4;
	case 9:
		goto loc_821183F4;
	case 10:
		goto loc_821182EC;
	case 11:
		goto loc_821183E4;
	case 12:
		goto loc_821183E4;
	default:
		__builtin_unreachable();
	}
	// lwz r16,-31756(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -31756);
	// lwz r16,-31772(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -31772);
	// lwz r16,-31772(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -31772);
	// lwz r16,-31772(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -31772);
	// lwz r16,-31772(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -31772);
	// lwz r16,-31772(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -31772);
	// lwz r16,-32020(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -32020);
	// lwz r16,-31772(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -31772);
	// lwz r16,-31772(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -31772);
	// lwz r16,-31756(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -31756);
	// lwz r16,-32020(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -32020);
	// lwz r16,-31772(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -31772);
	// lwz r16,-31772(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -31772);
loc_821183E4:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_821183F4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82363b18
	ctx.lr = 0x821183FC;
	sub_82363B18(ctx, base);
	// lwz r10,1452(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1452);
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82118458
	if (!ctx.cr6.eq) goto loc_82118458;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82363b18
	ctx.lr = 0x82118414;
	sub_82363B18(ctx, base);
	// lwz r8,1456(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1456);
	// lwz r7,20(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82118458
	if (!ctx.cr6.eq) goto loc_82118458;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82362f40
	ctx.lr = 0x8211842C;
	sub_82362F40(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82118448
	if (!ctx.cr6.eq) goto loc_82118448;
	// li r5,7
	ctx.r5.s64 = 7;
	// stw r5,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r5.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_82118448:
	// li r4,9
	ctx.r4.s64 = 9;
	// stw r4,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r4.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_82118458:
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_82118468:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// addi r4,r31,52
	ctx.r4.s64 = ctx.r31.s64 + 52;
	// ori r10,r11,9556
	ctx.r10.u64 = ctx.r11.u64 | 9556;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwzx r3,r31,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// stb r9,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r9.u8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82118490
	if (ctx.cr6.eq) goto loc_82118490;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// bl 0x82361bd8
	ctx.lr = 0x82118490;
	sub_82361BD8(ctx, base);
loc_82118490:
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// ori r5,r7,9432
	ctx.r5.u64 = ctx.r7.u64 | 9432;
	// li r8,1
	ctx.r8.s64 = 1;
	// ori r11,r4,9660
	ctx.r11.u64 = ctx.r4.u64 | 9660;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r5,r31,r5
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// stb r8,1413(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1413, ctx.r8.u8);
	// lwzx r4,r31,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// bl 0x82105b30
	ctx.lr = 0x821184C0;
	sub_82105B30(ctx, base);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_821184D0:
	// lbz r9,1414(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1414);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821184e4
	if (ctx.cr6.eq) goto loc_821184E4;
	// li r11,-1
	ctx.r11.s64 = -1;
	// b 0x821184f0
	goto loc_821184F0;
loc_821184E4:
	// li r8,-1
	ctx.r8.s64 = -1;
	// lwz r11,1432(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1432);
	// stw r8,1432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1432, ctx.r8.u32);
loc_821184F0:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8211850c
	if (ctx.cr6.lt) goto loc_8211850C;
	// bne cr6,0x821182ec
	if (!ctx.cr6.eq) goto loc_821182EC;
	// li r7,5
	ctx.r7.s64 = 5;
	// stw r7,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r7.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_8211850C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82105d30
	ctx.lr = 0x82118514;
	sub_82105D30(ctx, base);
	// addi r30,r31,22532
	ctx.r30.s64 = ctx.r31.s64 + 22532;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82360620
	ctx.lr = 0x82118524;
	sub_82360620(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r10,1480(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1480);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r4,1076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1076, ctx.r4.u32);
	// lwz r9,84(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82118550;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r8,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_82118560:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82105d30
	ctx.lr = 0x82118568;
	sub_82105D30(ctx, base);
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// ori r5,r7,9496
	ctx.r5.u64 = ctx.r7.u64 | 9496;
	// ori r11,r4,9504
	ctx.r11.u64 = ctx.r4.u64 | 9504;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r5,r31,r5
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// lwzx r4,r31,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// bl 0x82105918
	ctx.lr = 0x8211858C;
	sub_82105918(ctx, base);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// ori r9,r10,9440
	ctx.r9.u64 = ctx.r10.u64 | 9440;
	// ori r4,r8,9436
	ctx.r4.u64 = ctx.r8.u64 | 9436;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r5,r31,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// lwzx r4,r31,r4
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	// bl 0x82105b30
	ctx.lr = 0x821185B4;
	sub_82105B30(ctx, base);
	// li r3,6
	ctx.r3.s64 = 6;
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_821185C4:
	// lbz r11,1414(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1414);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821185d8
	if (ctx.cr6.eq) goto loc_821185D8;
	// li r11,-1
	ctx.r11.s64 = -1;
	// b 0x821185e4
	goto loc_821185E4;
loc_821185D8:
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r11,1432(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1432);
	// stw r10,1432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1432, ctx.r10.u32);
loc_821185E4:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82118608
	if (ctx.cr6.lt) goto loc_82118608;
	// bne cr6,0x821182ec
	if (!ctx.cr6.eq) goto loc_821182EC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82105d30
	ctx.lr = 0x821185F8;
	sub_82105D30(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_82118608:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82105d30
	ctx.lr = 0x82118610;
	sub_82105D30(ctx, base);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// li r8,16
	ctx.r8.s64 = 16;
	// stb r10,58(r11)
	PPC_STORE_U8(ctx.r11.u32 + 58, ctx.r10.u8);
	// stw r8,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_82118630:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,22532
	ctx.r3.s64 = ctx.r31.s64 + 22532;
	// bl 0x82363348
	ctx.lr = 0x82118644;
	sub_82363348(ctx, base);
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r7,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r7.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_82118654:
	// addi r30,r31,22532
	ctx.r30.s64 = ctx.r31.s64 + 22532;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82362fc0
	ctx.lr = 0x82118660;
	sub_82362FC0(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82118674
	if (ctx.cr6.eq) goto loc_82118674;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82105e78
	ctx.lr = 0x82118674;
	sub_82105E78(ctx, base);
loc_82118674:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82362f20
	ctx.lr = 0x8211867C;
	sub_82362F20(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x821182ec
	if (ctx.cr6.eq) goto loc_821182EC;
	// lwz r4,22552(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22552);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x821186b0
	if (!ctx.cr6.eq) goto loc_821186B0;
	// lwz r3,22556(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22556);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x821186b0
	if (!ctx.cr6.eq) goto loc_821186B0;
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_821186B0:
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_821186C0:
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r31,2008
	ctx.r3.s64 = ctx.r31.s64 + 2008;
	// bl 0x82361dd0
	ctx.lr = 0x821186D0;
	sub_82361DD0(ctx, base);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r30,r11,6040
	ctx.r30.s64 = ctx.r11.s64 + 6040;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821133e8
	ctx.lr = 0x821186E8;
	sub_821133E8(ctx, base);
	// lwz r9,1444(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1444);
	// lis r7,1
	ctx.r7.s64 = 65536;
	// mulli r11,r9,7032
	ctx.r11.s64 = ctx.r9.s64 * 7032;
	// add r8,r11,r31
	ctx.r8.u64 = ctx.r11.u64 + ctx.r31.u64;
	// ori r27,r7,9744
	ctx.r27.u64 = ctx.r7.u64 | 9744;
	// li r5,7032
	ctx.r5.s64 = 7032;
	// addi r4,r30,24
	ctx.r4.s64 = ctx.r30.s64 + 24;
	// add r3,r8,r27
	ctx.r3.u64 = ctx.r8.u64 + ctx.r27.u64;
	// bl 0x8259d3a0
	ctx.lr = 0x8211870C;
	sub_8259D3A0(ctx, base);
	// addi r29,r31,1612
	ctx.r29.s64 = ctx.r31.s64 + 1612;
	// addi r28,r31,1816
	ctx.r28.s64 = ctx.r31.s64 + 1816;
	// li r30,3
	ctx.r30.s64 = 3;
loc_82118718:
	// li r5,64
	ctx.r5.s64 = 64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8259d2a0
	ctx.lr = 0x82118728;
	sub_8259D2A0(ctx, base);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r28,r28,64
	ctx.r28.s64 = ctx.r28.s64 + 64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82118718
	if (!ctx.cr6.eq) goto loc_82118718;
	// lwz r4,1480(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1480);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// add r5,r31,r27
	ctx.r5.u64 = ctx.r31.u64 + ctx.r27.u64;
	// addi r3,r31,22532
	ctx.r3.s64 = ctx.r31.s64 + 22532;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x823631c0
	ctx.lr = 0x82118758;
	sub_823631C0(ctx, base);
	// li r3,10
	ctx.r3.s64 = 10;
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_82118768:
	// addi r30,r31,22532
	ctx.r30.s64 = ctx.r31.s64 + 22532;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82362fc0
	ctx.lr = 0x82118774;
	sub_82362FC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82118788
	if (ctx.cr6.eq) goto loc_82118788;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82105e78
	ctx.lr = 0x82118788;
	sub_82105E78(ctx, base);
loc_82118788:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82362f20
	ctx.lr = 0x82118790;
	sub_82362F20(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821182ec
	if (ctx.cr6.eq) goto loc_821182EC;
	// lwz r11,22552(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22552);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82118828
	if (ctx.cr6.lt) goto loc_82118828;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x821182ec
	if (!ctx.cr6.lt) goto loc_821182EC;
	// lwz r9,1436(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1436);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,1440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1440, ctx.r9.u32);
	// bl 0x82105d30
	ctx.lr = 0x821187C0;
	sub_82105D30(ctx, base);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// addi r4,r31,52
	ctx.r4.s64 = ctx.r31.s64 + 52;
	// ori r7,r8,9560
	ctx.r7.u64 = ctx.r8.u64 | 9560;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwzx r3,r31,r7
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// stb r6,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r6.u8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821187e8
	if (ctx.cr6.eq) goto loc_821187E8;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// bl 0x82361bd8
	ctx.lr = 0x821187E8;
	sub_82361BD8(ctx, base);
loc_821187E8:
	// lis r4,1
	ctx.r4.s64 = 65536;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// li r5,1
	ctx.r5.s64 = 1;
	// ori r11,r4,9440
	ctx.r11.u64 = ctx.r4.u64 | 9440;
	// ori r9,r10,9436
	ctx.r9.u64 = ctx.r10.u64 | 9436;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r5,1413(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1413, ctx.r5.u8);
	// lwzx r5,r31,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwzx r4,r31,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// bl 0x82105b30
	ctx.lr = 0x82118818;
	sub_82105B30(ctx, base);
	// li r8,11
	ctx.r8.s64 = 11;
	// stw r8,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_82118828:
	// lwz r7,1436(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1436);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r10,1480(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1480);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r7,1440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1440, ctx.r7.u32);
	// stw r4,1076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1076, ctx.r4.u32);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,84(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8211885C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r8,12
	ctx.r8.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
	// bl 0x82105d30
	ctx.lr = 0x8211886C;
	sub_82105D30(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_82118874:
	// lbz r7,1414(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1414);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82118888
	if (ctx.cr6.eq) goto loc_82118888;
	// li r11,-1
	ctx.r11.s64 = -1;
	// b 0x82118894
	goto loc_82118894;
loc_82118888:
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r11,1432(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1432);
	// stw r6,1432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1432, ctx.r6.u32);
loc_82118894:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x821188b8
	if (ctx.cr6.lt) goto loc_821188B8;
	// bne cr6,0x821182ec
	if (!ctx.cr6.eq) goto loc_821182EC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82105d30
	ctx.lr = 0x821188A8;
	sub_82105D30(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r5,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r5.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_821188B8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82105d30
	ctx.lr = 0x821188C0;
	sub_82105D30(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r4,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r4.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_821188D0:
	// addi r30,r31,22532
	ctx.r30.s64 = ctx.r31.s64 + 22532;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82362fc0
	ctx.lr = 0x821188DC;
	sub_82362FC0(ctx, base);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821188f0
	if (ctx.cr6.eq) goto loc_821188F0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82105e78
	ctx.lr = 0x821188F0;
	sub_82105E78(ctx, base);
loc_821188F0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82362f20
	ctx.lr = 0x821188F8;
	sub_82362F20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821182ec
	if (ctx.cr6.eq) goto loc_821182EC;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,22548(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22548);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r10,1076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1076, ctx.r10.u32);
	// bne cr6,0x8211894c
	if (!ctx.cr6.eq) goto loc_8211894C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82363b18
	ctx.lr = 0x82118920;
	sub_82363B18(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r8,1452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1452, ctx.r8.u32);
	// bl 0x82363b18
	ctx.lr = 0x82118934;
	sub_82363B18(ctx, base);
	// lwz r6,20(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r7,16
	ctx.r7.s64 = 16;
	// stw r7,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r7.u32);
	// stw r6,1456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1456, ctx.r6.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_8211894C:
	// lis r5,1
	ctx.r5.s64 = 65536;
	// addi r4,r31,52
	ctx.r4.s64 = ctx.r31.s64 + 52;
	// ori r3,r5,9588
	ctx.r3.u64 = ctx.r5.u64 | 9588;
	// stb r10,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r10.u8);
	// lwzx r3,r31,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82118970
	if (ctx.cr6.eq) goto loc_82118970;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// bl 0x82361bd8
	ctx.lr = 0x82118970;
	sub_82361BD8(ctx, base);
loc_82118970:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// li r11,1
	ctx.r11.s64 = 1;
	// ori r9,r10,9440
	ctx.r9.u64 = ctx.r10.u64 | 9440;
	// ori r4,r8,9436
	ctx.r4.u64 = ctx.r8.u64 | 9436;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,1413(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1413, ctx.r11.u8);
	// lwzx r5,r31,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// lwzx r4,r31,r4
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	// bl 0x82105b30
	ctx.lr = 0x821189A0;
	sub_82105B30(ctx, base);
	// li r3,13
	ctx.r3.s64 = 13;
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_821189B0:
	// lbz r11,1414(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1414);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821189c4
	if (ctx.cr6.eq) goto loc_821189C4;
	// li r11,-1
	ctx.r11.s64 = -1;
	// b 0x821189d0
	goto loc_821189D0;
loc_821189C4:
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r11,1432(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1432);
	// stw r10,1432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1432, ctx.r10.u32);
loc_821189D0:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82118a4c
	if (ctx.cr6.lt) goto loc_82118A4C;
	// bne cr6,0x821182ec
	if (!ctx.cr6.eq) goto loc_821182EC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82105d30
	ctx.lr = 0x821189E4;
	sub_82105D30(ctx, base);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// addi r4,r31,52
	ctx.r4.s64 = ctx.r31.s64 + 52;
	// ori r8,r9,9508
	ctx.r8.u64 = ctx.r9.u64 | 9508;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwzx r3,r31,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// stb r7,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r7.u8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82118a0c
	if (ctx.cr6.eq) goto loc_82118A0C;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// bl 0x82361bd8
	ctx.lr = 0x82118A0C;
	sub_82361BD8(ctx, base);
loc_82118A0C:
	// lis r4,1
	ctx.r4.s64 = 65536;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// li r5,1
	ctx.r5.s64 = 1;
	// ori r11,r4,9436
	ctx.r11.u64 = ctx.r4.u64 | 9436;
	// ori r9,r10,9440
	ctx.r9.u64 = ctx.r10.u64 | 9440;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r5,1413(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1413, ctx.r5.u8);
	// lwzx r5,r31,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwzx r4,r31,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// bl 0x82105b30
	ctx.lr = 0x82118A3C;
	sub_82105B30(ctx, base);
	// li r8,14
	ctx.r8.s64 = 14;
	// stw r8,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_82118A4C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82105d30
	ctx.lr = 0x82118A54;
	sub_82105D30(ctx, base);
	// li r7,15
	ctx.r7.s64 = 15;
	// stw r7,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r7.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_82118A64:
	// addi r11,r31,2267
	ctx.r11.s64 = ctx.r31.s64 + 2267;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82118A70:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stb r10,-3(r11)
	PPC_STORE_U8(ctx.r11.u32 + -3, ctx.r10.u8);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82118a70
	if (!ctx.cr6.eq) goto loc_82118A70;
	// li r6,3
	ctx.r6.s64 = 3;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stb r10,1416(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1416, ctx.r10.u8);
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_82118AA0:
	// lbz r5,1414(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1414);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82118ab4
	if (ctx.cr6.eq) goto loc_82118AB4;
	// li r11,-1
	ctx.r11.s64 = -1;
	// b 0x82118ac0
	goto loc_82118AC0;
loc_82118AB4:
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r11,1432(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1432);
	// stw r4,1432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1432, ctx.r4.u32);
loc_82118AC0:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82118ae4
	if (ctx.cr6.lt) goto loc_82118AE4;
	// bne cr6,0x821182ec
	if (!ctx.cr6.eq) goto loc_821182EC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82105d30
	ctx.lr = 0x82118AD4;
	sub_82105D30(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_82118AE4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82105d30
	ctx.lr = 0x82118AEC;
	sub_82105D30(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_82118AFC:
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,1416(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1416, ctx.r10.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82118B0C"))) PPC_WEAK_FUNC(sub_82118B0C);
PPC_FUNC_IMPL(__imp__sub_82118B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82118B10"))) PPC_WEAK_FUNC(sub_82118B10);
PPC_FUNC_IMPL(__imp__sub_82118B10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae4
	ctx.lr = 0x82118B18;
	__savegprlr_23(ctx, base);
	// stwu r1,-2016(r1)
	ea = -2016 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mulli r11,r29,7032
	ctx.r11.s64 = ctx.r29.s64 * 7032;
	// add r31,r11,r30
	ctx.r31.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// addi r4,r1,1184
	ctx.r4.s64 = ctx.r1.s64 + 1184;
	// ori r10,r11,9904
	ctx.r10.u64 = ctx.r11.u64 | 9904;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r3,r11,14528
	ctx.r3.s64 = ctx.r11.s64 + 14528;
	// lwzx r24,r31,r10
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// bl 0x821fd0c0
	ctx.lr = 0x82118B48;
	sub_821FD0C0(ctx, base);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// ori r11,r5,9916
	ctx.r11.u64 = ctx.r5.u64 | 9916;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r8,r9,9908
	ctx.r8.u64 = ctx.r9.u64 | 9908;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// ori r9,r10,9840
	ctx.r9.u64 = ctx.r10.u64 | 9840;
	// lwzx r23,r31,r11
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// ori r6,r7,9912
	ctx.r6.u64 = ctx.r7.u64 | 9912;
	// addi r11,r11,-1416
	ctx.r11.s64 = ctx.r11.s64 + -1416;
	// lwzx r28,r31,r8
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// lis r7,1
	ctx.r7.s64 = 65536;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r5,r7,9844
	ctx.r5.u64 = ctx.r7.u64 | 9844;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r25,r31,r6
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// lwz r27,1008(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1008);
	// lwzx r11,r31,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// lfsx f1,r31,r5
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	ctx.f1.f64 = double(temp.f32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82111258
	ctx.lr = 0x82118BA0;
	sub_82111258(ctx, base);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// ori r9,r10,9612
	ctx.r9.u64 = ctx.r10.u64 | 9612;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lwzx r3,r30,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// bl 0x82361bd8
	ctx.lr = 0x82118BB8;
	sub_82361BD8(ctx, base);
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82118BC0:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82118bc0
	if (!ctx.cr6.eq) goto loc_82118BC0;
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r11,r29,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rotlwi r11,r7,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// addi r4,r9,1624
	ctx.r4.s64 = ctx.r9.s64 + 1624;
	// subfic r5,r11,1024
	ctx.xer.ca = ctx.r11.u32 <= 1024;
	ctx.r5.s64 = 1024 - ctx.r11.s64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8259d2a0
	ctx.lr = 0x82118BF8;
	sub_8259D2A0(ctx, base);
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82118C00:
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82118c00
	if (!ctx.cr6.eq) goto loc_82118C00;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// rotlwi r11,r8,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// ori r6,r7,9616
	ctx.r6.u64 = ctx.r7.u64 | 9616;
	// li r26,10
	ctx.r26.s64 = 10;
	// addi r10,r1,161
	ctx.r10.s64 = ctx.r1.s64 + 161;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r3,r30,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r6.u32);
	// stbx r26,r11,r9
	PPC_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r26.u8);
	// bl 0x82361bd8
	ctx.lr = 0x82118C44;
	sub_82361BD8(ctx, base);
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82118C4C:
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82118c4c
	if (!ctx.cr6.eq) goto loc_82118C4C;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// rotlwi r11,r4,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// addi r3,r30,2072
	ctx.r3.s64 = ctx.r30.s64 + 2072;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82361bd8
	ctx.lr = 0x82118C7C;
	sub_82361BD8(ctx, base);
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82118C84:
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82118c84
	if (!ctx.cr6.eq) goto loc_82118C84;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// rotlwi r11,r8,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// ori r6,r7,9620
	ctx.r6.u64 = ctx.r7.u64 | 9620;
	// addi r10,r1,161
	ctx.r10.s64 = ctx.r1.s64 + 161;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stbx r26,r11,r9
	PPC_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r26.u8);
	// lwzx r3,r30,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r6.u32);
	// bl 0x82361bd8
	ctx.lr = 0x82118CC4;
	sub_82361BD8(ctx, base);
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82118CCC:
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82118ccc
	if (!ctx.cr6.eq) goto loc_82118CCC;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// rotlwi r11,r4,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// addi r3,r30,2136
	ctx.r3.s64 = ctx.r30.s64 + 2136;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82361bd8
	ctx.lr = 0x82118CFC;
	sub_82361BD8(ctx, base);
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82118D04:
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82118d04
	if (!ctx.cr6.eq) goto loc_82118D04;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// rotlwi r11,r8,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// ori r6,r7,9624
	ctx.r6.u64 = ctx.r7.u64 | 9624;
	// addi r10,r1,161
	ctx.r10.s64 = ctx.r1.s64 + 161;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stbx r26,r11,r9
	PPC_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r26.u8);
	// lwzx r3,r30,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r6.u32);
	// bl 0x82361bd8
	ctx.lr = 0x82118D44;
	sub_82361BD8(ctx, base);
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82118D4C:
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82118d4c
	if (!ctx.cr6.eq) goto loc_82118D4C;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r29,r10,27420
	ctx.r29.s64 = ctx.r10.s64 + 27420;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rotlwi r31,r11,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259da78
	ctx.lr = 0x82118D88;
	sub_8259DA78(ctx, base);
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// subfic r5,r31,1024
	ctx.xer.ca = ctx.r31.u32 <= 1024;
	ctx.r5.s64 = 1024 - ctx.r31.s64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bl 0x8259d2a0
	ctx.lr = 0x82118D9C;
	sub_8259D2A0(ctx, base);
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82118DA4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82118da4
	if (!ctx.cr6.eq) goto loc_82118DA4;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// ori r7,r8,9628
	ctx.r7.u64 = ctx.r8.u64 | 9628;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// rotlwi r11,r6,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// li r5,1024
	ctx.r5.s64 = 1024;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r3,r30,r7
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r7.u32);
	// bl 0x82361bd8
	ctx.lr = 0x82118DDC;
	sub_82361BD8(ctx, base);
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82118DE4:
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82118de4
	if (!ctx.cr6.eq) goto loc_82118DE4;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rotlwi r31,r11,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259da78
	ctx.lr = 0x82118E18;
	sub_8259DA78(ctx, base);
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// subfic r5,r31,1024
	ctx.xer.ca = ctx.r31.u32 <= 1024;
	ctx.r5.s64 = 1024 - ctx.r31.s64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bl 0x8259d2a0
	ctx.lr = 0x82118E2C;
	sub_8259D2A0(ctx, base);
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82118E34:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82118e34
	if (!ctx.cr6.eq) goto loc_82118E34;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// ori r7,r8,9632
	ctx.r7.u64 = ctx.r8.u64 | 9632;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// rotlwi r11,r6,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// li r5,1024
	ctx.r5.s64 = 1024;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r3,r30,r7
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r7.u32);
	// bl 0x82361bd8
	ctx.lr = 0x82118E6C;
	sub_82361BD8(ctx, base);
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82118E74:
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82118e74
	if (!ctx.cr6.eq) goto loc_82118E74;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r8,r1,1188
	ctx.r8.s64 = ctx.r1.s64 + 1188;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// mulli r9,r24,68
	ctx.r9.s64 = ctx.r24.s64 * 68;
	// rotlwi r11,r4,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// subfic r5,r11,1024
	ctx.xer.ca = ctx.r11.u32 <= 1024;
	ctx.r5.s64 = 1024 - ctx.r11.s64;
	// addi r4,r9,-68
	ctx.r4.s64 = ctx.r9.s64 + -68;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8259d2a0
	ctx.lr = 0x82118EB0;
	sub_8259D2A0(ctx, base);
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82118EB8:
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82118eb8
	if (!ctx.cr6.eq) goto loc_82118EB8;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// rotlwi r11,r8,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// ori r6,r7,9636
	ctx.r6.u64 = ctx.r7.u64 | 9636;
	// addi r10,r1,161
	ctx.r10.s64 = ctx.r1.s64 + 161;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stbx r26,r11,r9
	PPC_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r26.u8);
	// lwzx r3,r30,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r6.u32);
	// bl 0x82361bd8
	ctx.lr = 0x82118EF8;
	sub_82361BD8(ctx, base);
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82118F00:
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82118f00
	if (!ctx.cr6.eq) goto loc_82118F00;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r5,r10,27412
	ctx.r5.s64 = ctx.r10.s64 + 27412;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rotlwi r31,r11,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259da78
	ctx.lr = 0x82118F34;
	sub_8259DA78(ctx, base);
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// subfic r5,r31,1024
	ctx.xer.ca = ctx.r31.u32 <= 1024;
	ctx.r5.s64 = 1024 - ctx.r31.s64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bl 0x8259d2a0
	ctx.lr = 0x82118F48;
	sub_8259D2A0(ctx, base);
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r30,52
	ctx.r3.s64 = ctx.r30.s64 + 52;
	// bl 0x8259d2a0
	ctx.lr = 0x82118F58;
	sub_8259D2A0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,1413(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1413, ctx.r10.u8);
	// addi r1,r1,2016
	ctx.r1.s64 = ctx.r1.s64 + 2016;
	// b 0x8259bb34
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82118F68"))) PPC_WEAK_FUNC(sub_82118F68);
PPC_FUNC_IMPL(__imp__sub_82118F68) {
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
	// lis r31,-32114
	ctx.r31.s64 = -2104623104;
	// lwz r11,15916(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15916);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82118fec
	if (ctx.cr6.lt) goto loc_82118FEC;
	// beq cr6,0x82118fa0
	if (ctx.cr6.eq) goto loc_82118FA0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x8211902c
	if (!ctx.cr6.lt) goto loc_8211902C;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8211904c
	goto loc_8211904C;
loc_82118FA0:
	// lbz r11,1414(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1414);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8211902c
	if (!ctx.cr6.eq) goto loc_8211902C;
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r11,1432(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1432);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// stw r10,1432(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1432, ctx.r10.u32);
	// beq cr6,0x8211902c
	if (ctx.cr6.eq) goto loc_8211902C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82119024
	if (!ctx.cr6.eq) goto loc_82119024;
	// bl 0x82105d30
	ctx.lr = 0x82118FCC;
	sub_82105D30(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r11,15916(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15916, ctx.r11.u32);
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
loc_82118FEC:
	// bl 0x821114d0
	ctx.lr = 0x82118FF0;
	sub_821114D0(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x82119044
	if (ctx.cr6.lt) goto loc_82119044;
	// beq cr6,0x82119024
	if (ctx.cr6.eq) goto loc_82119024;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// bne cr6,0x8211902c
	if (!ctx.cr6.eq) goto loc_8211902C;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r11,15916(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15916, ctx.r11.u32);
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
loc_82119024:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,15916(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15916, ctx.r11.u32);
loc_8211902C:
	// li r3,2
	ctx.r3.s64 = 2;
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
loc_82119044:
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8211904C:
	// stw r11,15916(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15916, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82119064"))) PPC_WEAK_FUNC(sub_82119064);
PPC_FUNC_IMPL(__imp__sub_82119064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82119068"))) PPC_WEAK_FUNC(sub_82119068);
PPC_FUNC_IMPL(__imp__sub_82119068) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82119070;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r10,55
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 55, ctx.xer);
	// bgt cr6,0x82119470
	if (ctx.cr6.gt) goto loc_82119470;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r29,r11,10416
	ctx.r29.s64 = ctx.r11.s64 + 10416;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r31,r11,26080
	ctx.r31.s64 = ctx.r11.s64 + 26080;
	// lis r12,-32238
	ctx.r12.s64 = -2112749568;
	// addi r12,r12,-28496
	ctx.r12.s64 = ctx.r12.s64 + -28496;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_82119190;
	case 1:
		goto loc_82119190;
	case 2:
		goto loc_821191B0;
	case 3:
		goto loc_82119204;
	case 4:
		goto loc_8211922C;
	case 5:
		goto loc_82119248;
	case 6:
		goto loc_821192D0;
	case 7:
		goto loc_821192D8;
	case 8:
		goto loc_82119328;
	case 9:
		goto loc_82119470;
	case 10:
		goto loc_82119470;
	case 11:
		goto loc_82119470;
	case 12:
		goto loc_82119470;
	case 13:
		goto loc_82119470;
	case 14:
		goto loc_82119470;
	case 15:
		goto loc_82119470;
	case 16:
		goto loc_82119470;
	case 17:
		goto loc_82119470;
	case 18:
		goto loc_82119470;
	case 19:
		goto loc_82119470;
	case 20:
		goto loc_82119470;
	case 21:
		goto loc_82119470;
	case 22:
		goto loc_82119470;
	case 23:
		goto loc_82119470;
	case 24:
		goto loc_82119470;
	case 25:
		goto loc_82119470;
	case 26:
		goto loc_82119470;
	case 27:
		goto loc_821192D8;
	case 28:
		goto loc_82119470;
	case 29:
		goto loc_82119470;
	case 30:
		goto loc_82119470;
	case 31:
		goto loc_82119470;
	case 32:
		goto loc_82119470;
	case 33:
		goto loc_82119470;
	case 34:
		goto loc_82119470;
	case 35:
		goto loc_82119470;
	case 36:
		goto loc_82119470;
	case 37:
		goto loc_82119470;
	case 38:
		goto loc_82119470;
	case 39:
		goto loc_82119470;
	case 40:
		goto loc_82119470;
	case 41:
		goto loc_82119470;
	case 42:
		goto loc_82119470;
	case 43:
		goto loc_82119470;
	case 44:
		goto loc_82119470;
	case 45:
		goto loc_82119470;
	case 46:
		goto loc_82119470;
	case 47:
		goto loc_82119470;
	case 48:
		goto loc_82119470;
	case 49:
		goto loc_82119470;
	case 50:
		goto loc_82119470;
	case 51:
		goto loc_82119470;
	case 52:
		goto loc_82119470;
	case 53:
		goto loc_82119470;
	case 54:
		goto loc_82119470;
	case 55:
		goto loc_82119190;
	default:
		__builtin_unreachable();
	}
	// lwz r16,-28272(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -28272);
	// lwz r16,-28272(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -28272);
	// lwz r16,-28240(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -28240);
	// lwz r16,-28156(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -28156);
	// lwz r16,-28116(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -28116);
	// lwz r16,-28088(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -28088);
	// lwz r16,-27952(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -27952);
	// lwz r16,-27944(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -27944);
	// lwz r16,-27864(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -27864);
	// lwz r16,-27536(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -27536);
	// lwz r16,-27536(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -27536);
	// lwz r16,-27536(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -27536);
	// lwz r16,-27536(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -27536);
	// lwz r16,-27536(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -27536);
	// lwz r16,-27536(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -27536);
	// lwz r16,-27536(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -27536);
	// lwz r16,-27536(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -27536);
	// lwz r16,-27536(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -27536);
	// lwz r16,-27536(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -27536);
	// lwz r16,-27536(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -27536);
	// lwz r16,-27536(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -27536);
	// lwz r16,-27536(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -27536);
	// lwz r16,-27536(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -27536);
	// lwz r16,-27536(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -27536);
	// lwz r16,-27536(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -27536);
	// lwz r16,-27536(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -27536);
	// lwz r16,-27536(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -27536);
	// lwz r16,-27944(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -27944);
	// lwz r16,-27536(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -27536);
	// lwz r16,-27536(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -27536);
	// lwz r16,-27536(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -27536);
	// lwz r16,-27536(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -27536);
	// lwz r16,-27536(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -27536);
	// lwz r16,-27536(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -27536);
	// lwz r16,-27536(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -27536);
	// lwz r16,-27536(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -27536);
	// lwz r16,-27536(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -27536);
	// lwz r16,-27536(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -27536);
	// lwz r16,-27536(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -27536);
	// lwz r16,-27536(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -27536);
	// lwz r16,-27536(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -27536);
	// lwz r16,-27536(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -27536);
	// lwz r16,-27536(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -27536);
	// lwz r16,-27536(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -27536);
	// lwz r16,-27536(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -27536);
	// lwz r16,-27536(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -27536);
	// lwz r16,-27536(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -27536);
	// lwz r16,-27536(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -27536);
	// lwz r16,-27536(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -27536);
	// lwz r16,-27536(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -27536);
	// lwz r16,-27536(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -27536);
	// lwz r16,-27536(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -27536);
	// lwz r16,-27536(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -27536);
	// lwz r16,-27536(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -27536);
	// lwz r16,-27536(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -27536);
	// lwz r16,-28272(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -28272);
loc_82119190:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r8,3
	ctx.r8.s64 = 196608;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r7,r8,51969
	ctx.r7.u64 = ctx.r8.u64 | 51969;
	// li r9,3
	ctx.r9.s64 = 3;
	// stbx r10,r11,r7
	PPC_STORE_U8(ctx.r11.u32 + ctx.r7.u32, ctx.r10.u8);
	// stw r9,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r9.u32);
loc_821191B0:
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// addi r11,r11,-21272
	ctx.r11.s64 = ctx.r11.s64 + -21272;
	// lwz r10,3896(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3896);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x821191cc
	if (!ctx.cr6.gt) goto loc_821191CC;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x821191e4
	goto loc_821191E4;
loc_821191CC:
	// lwz r10,3892(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3892);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x821191e0
	if (ctx.cr6.eq) goto loc_821191E0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,3892(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3892, ctx.r10.u32);
loc_821191E0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_821191E4:
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x821191fc
	if (!ctx.cr6.eq) goto loc_821191FC;
loc_821191F0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_821191FC:
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r5,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r5.u32);
loc_82119204:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r3,r11,14528
	ctx.r3.s64 = ctx.r11.s64 + 14528;
	// bl 0x821f5820
	ctx.lr = 0x82119210;
	sub_821F5820(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821191f0
	if (ctx.cr6.eq) goto loc_821191F0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82201110
	ctx.lr = 0x82119224;
	sub_82201110(ctx, base);
	// li r3,5
	ctx.r3.s64 = 5;
	// stw r3,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r3.u32);
loc_8211922C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82200be0
	ctx.lr = 0x82119234;
	sub_82200BE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821191f0
	if (ctx.cr6.eq) goto loc_821191F0;
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r10,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r10.u32);
loc_82119248:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82104148
	ctx.lr = 0x82119250;
	sub_82104148(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821192ac
	if (!ctx.cr6.eq) goto loc_821192AC;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r11,r11,11600
	ctx.r11.s64 = ctx.r11.s64 + 11600;
	// lwz r11,552(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 552);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8211927c
	if (!ctx.cr6.eq) goto loc_8211927C;
	// li r4,24
	ctx.r4.s64 = 24;
	// b 0x821192b0
	goto loc_821192B0;
loc_8211927C:
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x8211928c
	if (!ctx.cr6.eq) goto loc_8211928C;
	// li r4,25
	ctx.r4.s64 = 25;
	// b 0x821192b0
	goto loc_821192B0;
loc_8211928C:
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// li r5,27
	ctx.r5.s64 = 27;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bne cr6,0x821192a4
	if (!ctx.cr6.eq) goto loc_821192A4;
	// li r4,26
	ctx.r4.s64 = 26;
	// b 0x821192b8
	goto loc_821192B8;
loc_821192A4:
	// li r4,23
	ctx.r4.s64 = 23;
	// b 0x821192b8
	goto loc_821192B8;
loc_821192AC:
	// li r4,28
	ctx.r4.s64 = 28;
loc_821192B0:
	// li r5,27
	ctx.r5.s64 = 27;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_821192B8:
	// bl 0x82200f80
	ctx.lr = 0x821192BC;
	sub_82200F80(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821191f0
	if (ctx.cr6.eq) goto loc_821191F0;
	// li r7,7
	ctx.r7.s64 = 7;
	// stw r7,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r7.u32);
loc_821192D0:
	// li r6,8
	ctx.r6.s64 = 8;
	// stw r6,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r6.u32);
loc_821192D8:
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// lis r5,7
	ctx.r5.s64 = 458752;
	// addi r11,r11,-18560
	ctx.r11.s64 = ctx.r11.s64 + -18560;
	// ori r4,r5,57712
	ctx.r4.u64 = ctx.r5.u64 | 57712;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwzx r10,r11,r4
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// addis r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 524288;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,-7824
	ctx.r3.s64 = ctx.r11.s64 + -7824;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8211930C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821042b0
	ctx.lr = 0x82119314;
	sub_821042B0(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821191f0
	if (ctx.cr6.eq) goto loc_821191F0;
	// li r8,9
	ctx.r8.s64 = 9;
	// stw r8,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r8.u32);
loc_82119328:
	// lis r7,2
	ctx.r7.s64 = 131072;
	// addi r10,r31,2585
	ctx.r10.s64 = ctx.r31.s64 + 2585;
	// ori r6,r7,54056
	ctx.r6.u64 = ctx.r7.u64 | 54056;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// ori r7,r8,54064
	ctx.r7.u64 = ctx.r8.u64 | 54064;
	// lwzx r11,r31,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// lis r6,2
	ctx.r6.s64 = 131072;
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// lis r11,-32110
	ctx.r11.s64 = -2104360960;
	// ori r5,r6,54060
	ctx.r5.u64 = ctx.r6.u64 | 54060;
	// addi r3,r11,12656
	ctx.r3.s64 = ctx.r11.s64 + 12656;
	// li r11,1
	ctx.r11.s64 = 1;
	// lbzx r9,r4,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r10.u32);
	// addi r10,r31,1144
	ctx.r10.s64 = ctx.r31.s64 + 1144;
	// extsb r4,r9
	ctx.r4.s64 = ctx.r9.s8;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// stbx r11,r31,r7
	PPC_STORE_U8(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u8);
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r8,r9,54100
	ctx.r8.u64 = ctx.r9.u64 | 54100;
	// lfs f0,128(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r31,r5
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, temp.u32);
	// lis r7,2
	ctx.r7.s64 = 131072;
	// ori r6,r7,54032
	ctx.r6.u64 = ctx.r7.u64 | 54032;
	// stbx r11,r31,r8
	PPC_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r11.u8);
	// mulli r11,r4,360
	ctx.r11.s64 = ctx.r4.s64 * 360;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwx r11,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r11.u32);
	// bl 0x82173a08
	ctx.lr = 0x82119398;
	sub_82173A08(ctx, base);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,328(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 328);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x821193AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r10,4864
	ctx.r3.s64 = ctx.r10.s64 + 4864;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,2216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2216, ctx.r11.u32);
	// bl 0x82188018
	ctx.lr = 0x821193C4;
	sub_82188018(ctx, base);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-12136(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12136);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// stfs f0,32320(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32320, temp.u32);
	// bl 0x82203870
	ctx.lr = 0x821193E0;
	sub_82203870(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821041d8
	ctx.lr = 0x821193E8;
	sub_821041D8(ctx, base);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82119438
	if (!ctx.cr6.eq) goto loc_82119438;
	// lis r11,-994
	ctx.r11.s64 = -65142784;
	// lis r10,-27116
	ctx.r10.s64 = -1777074176;
	// ori r11,r11,62591
	ctx.r11.u64 = ctx.r11.u64 | 62591;
	// ori r9,r10,41781
	ctx.r9.u64 = ctx.r10.u64 | 41781;
	// lis r8,3
	ctx.r8.s64 = 196608;
	// rldimi r11,r9,32,0
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r11.u64 & 0xFFFFFFFF);
	// ori r7,r8,24816
	ctx.r7.u64 = ctx.r8.u64 | 24816;
	// lis r6,3
	ctx.r6.s64 = 196608;
	// li r3,1
	ctx.r3.s64 = 1;
	// ori r5,r6,24824
	ctx.r5.u64 = ctx.r6.u64 | 24824;
	// stdx r11,r31,r7
	PPC_STORE_U64(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u64);
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r11.u32);
	// li r5,28
	ctx.r5.s64 = 28;
	// stw r5,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r5.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82119438:
	// lis r4,23479
	ctx.r4.s64 = 1538719744;
	// lis r3,-27583
	ctx.r3.s64 = -1807679488;
	// ori r11,r4,12096
	ctx.r11.u64 = ctx.r4.u64 | 12096;
	// ori r10,r3,16339
	ctx.r10.u64 = ctx.r3.u64 | 16339;
	// lis r9,3
	ctx.r9.s64 = 196608;
	// rldimi r11,r10,32,0
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r11.u64 & 0xFFFFFFFF);
	// ori r8,r9,24816
	ctx.r8.u64 = ctx.r9.u64 | 24816;
	// lis r7,3
	ctx.r7.s64 = 196608;
	// li r5,28
	ctx.r5.s64 = 28;
	// ori r6,r7,24824
	ctx.r6.u64 = ctx.r7.u64 | 24824;
	// stdx r11,r31,r8
	PPC_STORE_U64(ctx.r31.u32 + ctx.r8.u32, ctx.r11.u64);
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r11.u32);
	// stw r5,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r5.u32);
loc_82119470:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8211947C"))) PPC_WEAK_FUNC(sub_8211947C);
PPC_FUNC_IMPL(__imp__sub_8211947C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82119480"))) PPC_WEAK_FUNC(sub_82119480);
PPC_FUNC_IMPL(__imp__sub_82119480) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae4
	ctx.lr = 0x82119488;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r11,44(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 44);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r10,55
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 55, ctx.xer);
	// bgt cr6,0x82119934
	if (ctx.cr6.gt) goto loc_82119934;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// li r23,0
	ctx.r23.s64 = 0;
	// addi r25,r11,10416
	ctx.r25.s64 = ctx.r11.s64 + 10416;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// li r24,1
	ctx.r24.s64 = 1;
	// addi r31,r11,26752
	ctx.r31.s64 = ctx.r11.s64 + 26752;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r28,r11,26080
	ctx.r28.s64 = ctx.r11.s64 + 26080;
	// lis r12,-32238
	ctx.r12.s64 = -2112749568;
	// addi r12,r12,-27432
	ctx.r12.s64 = ctx.r12.s64 + -27432;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_821195B8;
	case 1:
		goto loc_821195B8;
	case 2:
		goto loc_8211960C;
	case 3:
		goto loc_82119668;
	case 4:
		goto loc_82119684;
	case 5:
		goto loc_821197C0;
	case 6:
		goto loc_821197E4;
	case 7:
		goto loc_821197EC;
	case 8:
		goto loc_82119844;
	case 9:
		goto loc_82119934;
	case 10:
		goto loc_82119934;
	case 11:
		goto loc_82119890;
	case 12:
		goto loc_82119934;
	case 13:
		goto loc_82119934;
	case 14:
		goto loc_82119934;
	case 15:
		goto loc_82119934;
	case 16:
		goto loc_82119934;
	case 17:
		goto loc_82119934;
	case 18:
		goto loc_82119934;
	case 19:
		goto loc_82119934;
	case 20:
		goto loc_82119934;
	case 21:
		goto loc_82119934;
	case 22:
		goto loc_82119934;
	case 23:
		goto loc_82119934;
	case 24:
		goto loc_82119934;
	case 25:
		goto loc_82119934;
	case 26:
		goto loc_82119934;
	case 27:
		goto loc_82119844;
	case 28:
		goto loc_82119934;
	case 29:
		goto loc_82119934;
	case 30:
		goto loc_82119934;
	case 31:
		goto loc_82119934;
	case 32:
		goto loc_82119934;
	case 33:
		goto loc_82119934;
	case 34:
		goto loc_82119934;
	case 35:
		goto loc_82119934;
	case 36:
		goto loc_82119934;
	case 37:
		goto loc_82119934;
	case 38:
		goto loc_82119934;
	case 39:
		goto loc_82119934;
	case 40:
		goto loc_82119934;
	case 41:
		goto loc_82119934;
	case 42:
		goto loc_82119934;
	case 43:
		goto loc_82119934;
	case 44:
		goto loc_82119934;
	case 45:
		goto loc_82119934;
	case 46:
		goto loc_82119934;
	case 47:
		goto loc_82119934;
	case 48:
		goto loc_82119934;
	case 49:
		goto loc_82119934;
	case 50:
		goto loc_82119934;
	case 51:
		goto loc_82119934;
	case 52:
		goto loc_82119934;
	case 53:
		goto loc_82119934;
	case 54:
		goto loc_82119934;
	case 55:
		goto loc_821195B8;
	default:
		__builtin_unreachable();
	}
	// lwz r16,-27208(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -27208);
	// lwz r16,-27208(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -27208);
	// lwz r16,-27124(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -27124);
	// lwz r16,-27032(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -27032);
	// lwz r16,-27004(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -27004);
	// lwz r16,-26688(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -26688);
	// lwz r16,-26652(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -26652);
	// lwz r16,-26644(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -26644);
	// lwz r16,-26556(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -26556);
	// lwz r16,-26316(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -26316);
	// lwz r16,-26316(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -26316);
	// lwz r16,-26480(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -26480);
	// lwz r16,-26316(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -26316);
	// lwz r16,-26316(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -26316);
	// lwz r16,-26316(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -26316);
	// lwz r16,-26316(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -26316);
	// lwz r16,-26316(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -26316);
	// lwz r16,-26316(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -26316);
	// lwz r16,-26316(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -26316);
	// lwz r16,-26316(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -26316);
	// lwz r16,-26316(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -26316);
	// lwz r16,-26316(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -26316);
	// lwz r16,-26316(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -26316);
	// lwz r16,-26316(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -26316);
	// lwz r16,-26316(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -26316);
	// lwz r16,-26316(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -26316);
	// lwz r16,-26316(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -26316);
	// lwz r16,-26556(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -26556);
	// lwz r16,-26316(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -26316);
	// lwz r16,-26316(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -26316);
	// lwz r16,-26316(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -26316);
	// lwz r16,-26316(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -26316);
	// lwz r16,-26316(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -26316);
	// lwz r16,-26316(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -26316);
	// lwz r16,-26316(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -26316);
	// lwz r16,-26316(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -26316);
	// lwz r16,-26316(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -26316);
	// lwz r16,-26316(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -26316);
	// lwz r16,-26316(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -26316);
	// lwz r16,-26316(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -26316);
	// lwz r16,-26316(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -26316);
	// lwz r16,-26316(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -26316);
	// lwz r16,-26316(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -26316);
	// lwz r16,-26316(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -26316);
	// lwz r16,-26316(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -26316);
	// lwz r16,-26316(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -26316);
	// lwz r16,-26316(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -26316);
	// lwz r16,-26316(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -26316);
	// lwz r16,-26316(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -26316);
	// lwz r16,-26316(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -26316);
	// lwz r16,-26316(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -26316);
	// lwz r16,-26316(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -26316);
	// lwz r16,-26316(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -26316);
	// lwz r16,-26316(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -26316);
	// lwz r16,-26316(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -26316);
	// lwz r16,-27208(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -27208);
loc_821195B8:
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// addi r11,r11,-21272
	ctx.r11.s64 = ctx.r11.s64 + -21272;
	// lwz r10,3896(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3896);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x821195d4
	if (!ctx.cr6.gt) goto loc_821195D4;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// b 0x821195ec
	goto loc_821195EC;
loc_821195D4:
	// lwz r10,3892(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3892);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x821195e8
	if (ctx.cr6.eq) goto loc_821195E8;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// stw r10,3892(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3892, ctx.r10.u32);
loc_821195E8:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_821195EC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82119604
	if (!ctx.cr6.eq) goto loc_82119604;
loc_821195F8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8259bb34
	__restgprlr_23(ctx, base);
	return;
loc_82119604:
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r10,44(r26)
	PPC_STORE_U32(ctx.r26.u32 + 44, ctx.r10.u32);
loc_8211960C:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r30,r11,14528
	ctx.r30.s64 = ctx.r11.s64 + 14528;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821f5820
	ctx.lr = 0x8211961C;
	sub_821F5820(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821195f8
	if (ctx.cr6.eq) goto loc_821195F8;
	// li r4,20
	ctx.r4.s64 = 20;
	// addi r3,r30,7432
	ctx.r3.s64 = ctx.r30.s64 + 7432;
	// bl 0x821fbf68
	ctx.lr = 0x82119634;
	sub_821FBF68(ctx, base);
	// addis r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 196608;
	// addi r3,r11,15896
	ctx.r3.s64 = ctx.r11.s64 + 15896;
	// bl 0x821aa558
	ctx.lr = 0x82119640;
	sub_821AA558(ctx, base);
	// li r4,19
	ctx.r4.s64 = 19;
	// addi r3,r30,7432
	ctx.r3.s64 = ctx.r30.s64 + 7432;
	// bl 0x821fbf68
	ctx.lr = 0x8211964C;
	sub_821FBF68(ctx, base);
	// addis r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 196608;
	// addi r3,r11,16992
	ctx.r3.s64 = ctx.r11.s64 + 16992;
	// bl 0x821a9bf0
	ctx.lr = 0x82119658;
	sub_821A9BF0(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82201110
	ctx.lr = 0x82119660;
	sub_82201110(ctx, base);
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r8,44(r26)
	PPC_STORE_U32(ctx.r26.u32 + 44, ctx.r8.u32);
loc_82119668:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82200be0
	ctx.lr = 0x82119670;
	sub_82200BE0(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x821195f8
	if (ctx.cr6.eq) goto loc_821195F8;
	// li r6,5
	ctx.r6.s64 = 5;
	// stw r6,44(r26)
	PPC_STORE_U32(ctx.r26.u32 + 44, ctx.r6.u32);
loc_82119684:
	// lis r5,3
	ctx.r5.s64 = 196608;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// ori r4,r5,51969
	ctx.r4.u64 = ctx.r5.u64 | 51969;
	// lis r10,3
	ctx.r10.s64 = 196608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r9,r10,51970
	ctx.r9.u64 = ctx.r10.u64 | 51970;
	// stbx r11,r31,r4
	PPC_STORE_U8(ctx.r31.u32 + ctx.r4.u32, ctx.r11.u8);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// stbx r11,r31,r9
	PPC_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u8);
	// bl 0x8222a240
	ctx.lr = 0x821196AC;
	sub_8222A240(ctx, base);
	// lis r8,7
	ctx.r8.s64 = 458752;
	// ori r7,r8,16216
	ctx.r7.u64 = ctx.r8.u64 | 16216;
	// lwzx r11,r28,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r7.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mulli r10,r6,584
	ctx.r10.s64 = ctx.r6.s64 * 584;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r29,r11,16
	ctx.r29.s64 = ctx.r11.s64 + 16;
	// lwz r11,304(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 304);
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// blt cr6,0x82119750
	if (ctx.cr6.lt) goto loc_82119750;
	// bne cr6,0x821197b8
	if (!ctx.cr6.eq) goto loc_821197B8;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821197b8
	if (!ctx.cr6.gt) goto loc_821197B8;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// addis r11,r11,37
	ctx.r11.s64 = ctx.r11.s64 + 2424832;
	// addi r29,r11,-29728
	ctx.r29.s64 = ctx.r11.s64 + -29728;
loc_82119700:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x82365758
	ctx.lr = 0x8211970C;
	sub_82365758(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8211971c
	if (!ctx.cr6.eq) goto loc_8211971C;
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
	// b 0x82119738
	goto loc_82119738;
loc_8211971C:
	// clrlwi r5,r27,24
	ctx.r5.u64 = ctx.r27.u32 & 0xFF;
	// addi r11,r29,-15744
	ctx.r11.s64 = ctx.r29.s64 + -15744;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82119730
	if (!ctx.cr6.eq) goto loc_82119730;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82119730:
	// stw r11,1932(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1932, ctx.r11.u32);
	// stw r3,15724(r11)
	PPC_STORE_U32(ctx.r11.u32 + 15724, ctx.r3.u32);
loc_82119738:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,15744
	ctx.r29.s64 = ctx.r29.s64 + 15744;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82119700
	if (ctx.cr6.lt) goto loc_82119700;
	// b 0x821197b8
	goto loc_821197B8;
loc_82119750:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821197b8
	if (!ctx.cr6.gt) goto loc_821197B8;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// addi r27,r11,28544
	ctx.r27.s64 = ctx.r11.s64 + 28544;
loc_82119768:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x82365758
	ctx.lr = 0x82119774;
	sub_82365758(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821197a8
	if (ctx.cr6.eq) goto loc_821197A8;
	// lwz r4,304(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 304);
	// cmpw cr6,r30,r4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x821197a4
	if (!ctx.cr6.eq) goto loc_821197A4;
	// addis r11,r27,37
	ctx.r11.s64 = ctx.r27.s64 + 2424832;
	// lis r10,36
	ctx.r10.s64 = 2359296;
	// addi r11,r11,-29728
	ctx.r11.s64 = ctx.r11.s64 + -29728;
	// ori r9,r10,51532
	ctx.r9.u64 = ctx.r10.u64 | 51532;
	// stw r11,1932(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1932, ctx.r11.u32);
	// stwx r3,r27,r9
	PPC_STORE_U32(ctx.r27.u32 + ctx.r9.u32, ctx.r3.u32);
	// b 0x821197a8
	goto loc_821197A8;
loc_821197A4:
	// stw r23,1932(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1932, ctx.r23.u32);
loc_821197A8:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82119768
	if (ctx.cr6.lt) goto loc_82119768;
loc_821197B8:
	// li r8,6
	ctx.r8.s64 = 6;
	// stw r8,44(r26)
	PPC_STORE_U32(ctx.r26.u32 + 44, ctx.r8.u32);
loc_821197C0:
	// li r5,27
	ctx.r5.s64 = 27;
	// li r4,29
	ctx.r4.s64 = 29;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82200f80
	ctx.lr = 0x821197D0;
	sub_82200F80(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x821195f8
	if (ctx.cr6.eq) goto loc_821195F8;
	// li r6,7
	ctx.r6.s64 = 7;
	// stw r6,44(r26)
	PPC_STORE_U32(ctx.r26.u32 + 44, ctx.r6.u32);
loc_821197E4:
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r5,44(r26)
	PPC_STORE_U32(ctx.r26.u32 + 44, ctx.r5.u32);
loc_821197EC:
	// stw r23,16(r26)
	PPC_STORE_U32(ctx.r26.u32 + 16, ctx.r23.u32);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82119828
	if (!ctx.cr6.gt) goto loc_82119828;
loc_82119800:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x82365758
	ctx.lr = 0x8211980C;
	sub_82365758(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82119818
	if (ctx.cr6.eq) goto loc_82119818;
	// stb r24,1649(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1649, ctx.r24.u8);
loc_82119818:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82119800
	if (ctx.cr6.lt) goto loc_82119800;
loc_82119828:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r3,3
	ctx.r3.s64 = 196608;
	// li r4,9
	ctx.r4.s64 = 9;
	// lfs f0,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// ori r11,r3,51912
	ctx.r11.u64 = ctx.r3.u64 | 51912;
	// stfsx f0,r31,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, temp.u32);
	// stw r4,44(r26)
	PPC_STORE_U32(ctx.r26.u32 + 44, ctx.r4.u32);
loc_82119844:
	// lis r10,7
	ctx.r10.s64 = 458752;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// ori r9,r10,57712
	ctx.r9.u64 = ctx.r10.u64 | 57712;
	// addi r11,r11,-18560
	ctx.r11.s64 = ctx.r11.s64 + -18560;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// addis r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 524288;
	// addi r3,r11,-7824
	ctx.r3.s64 = ctx.r11.s64 + -7824;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82119874;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821042b0
	ctx.lr = 0x8211987C;
	sub_821042B0(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x821195f8
	if (ctx.cr6.eq) goto loc_821195F8;
	// li r6,12
	ctx.r6.s64 = 12;
	// stw r6,44(r26)
	PPC_STORE_U32(ctx.r26.u32 + 44, ctx.r6.u32);
loc_82119890:
	// lis r5,2
	ctx.r5.s64 = 131072;
	// addi r9,r28,2585
	ctx.r9.s64 = ctx.r28.s64 + 2585;
	// ori r4,r5,54056
	ctx.r4.u64 = ctx.r5.u64 | 54056;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// lis r5,2
	ctx.r5.s64 = 131072;
	// ori r6,r7,54064
	ctx.r6.u64 = ctx.r7.u64 | 54064;
	// lwzx r11,r28,r4
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r4.u32);
	// ori r4,r5,54060
	ctx.r4.u64 = ctx.r5.u64 | 54060;
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// lis r11,-32110
	ctx.r11.s64 = -2104360960;
	// addi r3,r11,12656
	ctx.r3.s64 = ctx.r11.s64 + 12656;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// lbzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// addi r10,r28,1144
	ctx.r10.s64 = ctx.r28.s64 + 1144;
	// extsb r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// stbx r11,r28,r6
	PPC_STORE_U8(ctx.r28.u32 + ctx.r6.u32, ctx.r11.u8);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// ori r7,r8,54100
	ctx.r7.u64 = ctx.r8.u64 | 54100;
	// lfs f0,128(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r28,r4
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + ctx.r4.u32, temp.u32);
	// lis r6,2
	ctx.r6.s64 = 131072;
	// ori r5,r6,54032
	ctx.r5.u64 = ctx.r6.u64 | 54032;
	// stbx r11,r28,r7
	PPC_STORE_U8(ctx.r28.u32 + ctx.r7.u32, ctx.r11.u8);
	// mulli r11,r9,360
	ctx.r11.s64 = ctx.r9.s64 * 360;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwx r11,r28,r5
	PPC_STORE_U32(ctx.r28.u32 + ctx.r5.u32, ctx.r11.u32);
	// bl 0x82173a08
	ctx.lr = 0x82119900;
	sub_82173A08(ctx, base);
	// lwz r3,4(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,328(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 328);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82119914;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r10,4864
	ctx.r3.s64 = ctx.r10.s64 + 4864;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,2216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2216, ctx.r11.u32);
	// bl 0x82188018
	ctx.lr = 0x8211992C;
	sub_82188018(ctx, base);
	// li r10,28
	ctx.r10.s64 = 28;
	// stw r10,44(r26)
	PPC_STORE_U32(ctx.r26.u32 + 44, ctx.r10.u32);
loc_82119934:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8259bb34
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82119940"))) PPC_WEAK_FUNC(sub_82119940);
PPC_FUNC_IMPL(__imp__sub_82119940) {
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
	// lwz r9,13460(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13460);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82119970
	if (!ctx.cr6.eq) goto loc_82119970;
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
loc_82119970:
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// blt cr6,0x82119994
	if (ctx.cr6.lt) goto loc_82119994;
	// bne cr6,0x821199ac
	if (!ctx.cr6.eq) goto loc_821199AC;
	// lwz r11,13464(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13464);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x821199b0
	if (ctx.cr6.lt) goto loc_821199B0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x821199b0
	goto loc_821199B0;
loc_82119994:
	// lwz r11,13464(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13464);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x821199b0
	if (!ctx.cr6.lt) goto loc_821199B0;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// b 0x821199b0
	goto loc_821199B0;
loc_821199AC:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_821199B0:
	// stw r11,13464(r3)
	PPC_STORE_U32(ctx.r3.u32 + 13464, ctx.r11.u32);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stw r8,11484(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11484, ctx.r8.u32);
	// bl 0x82112610
	ctx.lr = 0x821199C8;
	sub_82112610(ctx, base);
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

__attribute__((alias("__imp__sub_821199DC"))) PPC_WEAK_FUNC(sub_821199DC);
PPC_FUNC_IMPL(__imp__sub_821199DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821199E0"))) PPC_WEAK_FUNC(sub_821199E0);
PPC_FUNC_IMPL(__imp__sub_821199E0) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82119a20
	if (!ctx.cr6.eq) goto loc_82119A20;
	// lhz r11,14464(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14464);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82119a14
	if (ctx.cr6.eq) goto loc_82119A14;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82119A14:
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82119a3c
	if (!ctx.cr6.eq) goto loc_82119A3C;
loc_82119A20:
	// addi r30,r31,14464
	ctx.r30.s64 = ctx.r31.s64 + 14464;
	// li r5,924
	ctx.r5.s64 = 924;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259d300
	ctx.lr = 0x82119A34;
	sub_8259D300(ctx, base);
	// li r8,5
	ctx.r8.s64 = 5;
	// sth r8,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r8.u16);
loc_82119A3C:
	// lis r10,-32090
	ctx.r10.s64 = -2103050240;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r10,r10,26752
	ctx.r10.s64 = ctx.r10.s64 + 26752;
	// addi r4,r11,-28264
	ctx.r4.s64 = ctx.r11.s64 + -28264;
	// addi r9,r31,12344
	ctx.r9.s64 = ctx.r31.s64 + 12344;
	// addis r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 65536;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r3,r10,25864
	ctx.r3.s64 = ctx.r10.s64 + 25864;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// stw r4,940(r9)
	PPC_STORE_U32(ctx.r9.u32 + 940, ctx.r4.u32);
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// ori r4,r10,14715
	ctx.r4.u64 = ctx.r10.u64 | 14715;
	// stw r31,944(r9)
	PPC_STORE_U32(ctx.r9.u32 + 944, ctx.r31.u32);
	// addis r7,r11,7
	ctx.r7.s64 = ctx.r11.s64 + 458752;
	// lis r8,-32239
	ctx.r8.s64 = -2112815104;
	// addi r7,r7,14538
	ctx.r7.s64 = ctx.r7.s64 + 14538;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lbzx r11,r11,r4
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// addi r8,r8,-26784
	ctx.r8.s64 = ctx.r8.s64 + -26784;
	// addi r6,r6,13280
	ctx.r6.s64 = ctx.r6.s64 + 13280;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// li r5,3
	ctx.r5.s64 = 3;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r4,r9,556
	ctx.r4.s64 = ctx.r9.s64 + 556;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// bl 0x822299a0
	ctx.lr = 0x82119AAC;
	sub_822299A0(ctx, base);
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

__attribute__((alias("__imp__sub_82119AC4"))) PPC_WEAK_FUNC(sub_82119AC4);
PPC_FUNC_IMPL(__imp__sub_82119AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82119AC8"))) PPC_WEAK_FUNC(sub_82119AC8);
PPC_FUNC_IMPL(__imp__sub_82119AC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259badc
	ctx.lr = 0x82119AD0;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// lwz r11,12140(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12140);
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// lwz r10,12136(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12136);
	// li r21,1
	ctx.r21.s64 = 1;
	// rlwinm r11,r11,14,0,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0xFFFFC000;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,12544(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12544);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bne cr6,0x82119b30
	if (!ctx.cr6.eq) goto loc_82119B30;
	// lwz r9,12440(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12440);
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// cmplwi cr6,r9,27
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 27, ctx.xer);
	// beq cr6,0x82119b20
	if (ctx.cr6.eq) goto loc_82119B20;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82119B20:
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82119b34
	if (!ctx.cr6.eq) goto loc_82119B34;
loc_82119B30:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82119B34:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r4,r23,24
	ctx.r4.u64 = ctx.r23.u32 & 0xFF;
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// beq cr6,0x82119d38
	if (ctx.cr6.eq) goto loc_82119D38;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82119b70
	if (ctx.cr6.eq) goto loc_82119B70;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821091e8
	ctx.lr = 0x82119B64;
	sub_821091E8(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82119d38
	if (ctx.cr6.eq) goto loc_82119D38;
loc_82119B70:
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r26,r11,26080
	ctx.r26.s64 = ctx.r11.s64 + 26080;
	// beq cr6,0x82119bbc
	if (ctx.cr6.eq) goto loc_82119BBC;
	// lbz r8,12555(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12555);
	// addi r10,r31,12396
	ctx.r10.s64 = ctx.r31.s64 + 12396;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// ori r7,r8,4
	ctx.r7.u64 = ctx.r8.u64 | 4;
	// li r9,9
	ctx.r9.s64 = 9;
	// stb r7,12555(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12555, ctx.r7.u8);
	// lbz r6,53(r25)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r25.u32 + 53);
	// stb r6,12554(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12554, ctx.r6.u8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82119BA4:
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r5,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82119ba4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82119BA4;
	// b 0x82119c88
	goto loc_82119C88;
loc_82119BBC:
	// lbz r11,53(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 53);
	// addi r29,r25,36
	ctx.r29.s64 = ctx.r25.s64 + 36;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r3,r30,14464
	ctx.r3.s64 = ctx.r30.s64 + 14464;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x82109a70
	ctx.lr = 0x82119BD8;
	sub_82109A70(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r5,128
	ctx.r5.s64 = 128;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r31,12556
	ctx.r3.s64 = ctx.r31.s64 + 12556;
	// bl 0x8259d2a0
	ctx.lr = 0x82119BEC;
	sub_8259D2A0(ctx, base);
	// clrlwi r10,r28,24
	ctx.r10.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82119c08
	if (ctx.cr6.eq) goto loc_82119C08;
	// lbz r9,12555(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12555);
	// ori r8,r9,1
	ctx.r8.u64 = ctx.r9.u64 | 1;
	// stb r8,12555(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12555, ctx.r8.u8);
	// b 0x82119c14
	goto loc_82119C14;
loc_82119C08:
	// lbz r7,12555(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12555);
	// rlwinm r6,r7,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r6,12555(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12555, ctx.r6.u8);
loc_82119C14:
	// lbz r11,53(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 53);
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,12460
	ctx.r3.s64 = ctx.r31.s64 + 12460;
	// stb r11,12554(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12554, ctx.r11.u8);
	// bl 0x8259d2a0
	ctx.lr = 0x82119C2C;
	sub_8259D2A0(ctx, base);
	// addis r11,r26,7
	ctx.r11.s64 = ctx.r26.s64 + 458752;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,14496
	ctx.r3.s64 = ctx.r11.s64 + 14496;
	// bl 0x8210d818
	ctx.lr = 0x82119C3C;
	sub_8210D818(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82119c7c
	if (ctx.cr6.eq) goto loc_82119C7C;
	// addi r4,r31,12396
	ctx.r4.s64 = ctx.r31.s64 + 12396;
	// addi r3,r30,12344
	ctx.r3.s64 = ctx.r30.s64 + 12344;
	// bl 0x821095b0
	ctx.lr = 0x82119C54;
	sub_821095B0(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82119c70
	if (ctx.cr6.eq) goto loc_82119C70;
	// lbz r8,12555(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12555);
	// ori r7,r8,2
	ctx.r7.u64 = ctx.r8.u64 | 2;
	// stb r7,12555(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12555, ctx.r7.u8);
	// b 0x82119c7c
	goto loc_82119C7C;
loc_82119C70:
	// lbz r6,12555(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12555);
	// andi. r5,r6,253
	ctx.r5.u64 = ctx.r6.u64 & 253;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stb r5,12555(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12555, ctx.r5.u8);
loc_82119C7C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8215ffb0
	ctx.lr = 0x82119C84;
	sub_8215FFB0(ctx, base);
	// sth r24,12552(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12552, ctx.r24.u16);
loc_82119C88:
	// lis r11,7
	ctx.r11.s64 = 458752;
	// lwz r3,11480(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11480);
	// ori r10,r11,14715
	ctx.r10.u64 = ctx.r11.u64 | 14715;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// lbzx r10,r26,r10
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r26.u32 + ctx.r10.u32);
	// beq cr6,0x82119cdc
	if (ctx.cr6.eq) goto loc_82119CDC;
	// addis r9,r26,7
	ctx.r9.s64 = ctx.r26.s64 + 458752;
	// ld r8,12432(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 12432);
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// addi r7,r9,14528
	ctx.r7.s64 = ctx.r9.s64 + 14528;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// rlwinm r5,r6,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// ldx r4,r5,r7
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r5.u32 + ctx.r7.u32);
	// cmpld cr6,r4,r8
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, ctx.r8.u64, ctx.xer);
	// beq cr6,0x82119cd0
	if (ctx.cr6.eq) goto loc_82119CD0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82119CD0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82119d04
	if (ctx.cr6.eq) goto loc_82119D04;
loc_82119CDC:
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// addis r10,r26,7
	ctx.r10.s64 = ctx.r26.s64 + 458752;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r10,14538
	ctx.r10.s64 = ctx.r10.s64 + 14538;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r3,r31,12460
	ctx.r3.s64 = ctx.r31.s64 + 12460;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8259d2a0
	ctx.lr = 0x82119D04;
	sub_8259D2A0(ctx, base);
loc_82119D04:
	// lwz r11,12140(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12140);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r31,r31,16384
	ctx.r31.s64 = ctx.r31.s64 + 16384;
	// addi r8,r11,3014
	ctx.r8.s64 = ctx.r11.s64 + 3014;
	// addi r4,r10,3672
	ctx.r4.s64 = ctx.r10.s64 + 3672;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r11,r7,r30
	PPC_STORE_U32(ctx.r7.u32 + ctx.r30.u32, ctx.r11.u32);
	// lwz r11,12140(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12140);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,12140(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12140, ctx.r6.u32);
	// bl 0x82112520
	ctx.lr = 0x82119D34;
	sub_82112520(ctx, base);
	// b 0x82119d40
	goto loc_82119D40;
loc_82119D38:
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r23,0
	ctx.r23.s64 = 0;
loc_82119D40:
	// clrlwi r5,r23,24
	ctx.r5.u64 = ctx.r23.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82119d70
	if (!ctx.cr6.eq) goto loc_82119D70;
	// lwz r4,11480(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11480);
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// bne cr6,0x82119d70
	if (!ctx.cr6.eq) goto loc_82119D70;
	// lbz r3,53(r25)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r25.u32 + 53);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r4,r25,36
	ctx.r4.s64 = ctx.r25.s64 + 36;
	// extsb r5,r3
	ctx.r5.s64 = ctx.r3.s8;
	// addi r3,r30,14464
	ctx.r3.s64 = ctx.r30.s64 + 14464;
	// bl 0x82113340
	ctx.lr = 0x82119D70;
	sub_82113340(ctx, base);
loc_82119D70:
	// clrlwi r11,r22,24
	ctx.r11.u64 = ctx.r22.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82119da8
	if (ctx.cr6.eq) goto loc_82119DA8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82112610
	ctx.lr = 0x82119D84;
	sub_82112610(ctx, base);
	// lwz r11,13524(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13524);
	// stb r21,13448(r30)
	PPC_STORE_U8(ctx.r30.u32 + 13448, ctx.r21.u8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82119da4
	if (ctx.cr6.eq) goto loc_82119DA4;
	// lwz r4,13528(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13528);
	// li r3,0
	ctx.r3.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82119DA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82119DA4:
	// stw r21,11476(r30)
	PPC_STORE_U32(ctx.r30.u32 + 11476, ctx.r21.u32);
loc_82119DA8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8259bb2c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82119DB4"))) PPC_WEAK_FUNC(sub_82119DB4);
PPC_FUNC_IMPL(__imp__sub_82119DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82119DB8"))) PPC_WEAK_FUNC(sub_82119DB8);
PPC_FUNC_IMPL(__imp__sub_82119DB8) {
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
	// lis r10,7
	ctx.r10.s64 = 458752;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// ori r9,r10,14715
	ctx.r9.u64 = ctx.r10.u64 | 14715;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// addi r5,r3,14464
	ctx.r5.s64 = ctx.r3.s64 + 14464;
	// lis r7,-32239
	ctx.r7.s64 = -2112815104;
	// li r6,924
	ctx.r6.s64 = 924;
	// lbzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// addis r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 458752;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// extsb r8,r10
	ctx.r8.s64 = ctx.r10.s8;
	// lis r10,-32090
	ctx.r10.s64 = -2103050240;
	// addi r31,r11,14538
	ctx.r31.s64 = ctx.r11.s64 + 14538;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r10,r10,26752
	ctx.r10.s64 = ctx.r10.s64 + 26752;
	// addi r4,r11,13304
	ctx.r4.s64 = ctx.r11.s64 + 13304;
	// addis r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 65536;
	// addi r10,r7,11216
	ctx.r10.s64 = ctx.r7.s64 + 11216;
	// addi r3,r11,25864
	ctx.r3.s64 = ctx.r11.s64 + 25864;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r9,13316
	ctx.r9.s64 = ctx.r9.s64 + 13316;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwinm r11,r8,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r8,r11,r31
	ctx.r8.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82229890
	ctx.lr = 0x82119E34;
	sub_82229890(ctx, base);
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

__attribute__((alias("__imp__sub_82119E48"))) PPC_WEAK_FUNC(sub_82119E48);
PPC_FUNC_IMPL(__imp__sub_82119E48) {
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
	// li r30,1
	ctx.r30.s64 = 1;
	// stb r30,13448(r31)
	PPC_STORE_U8(ctx.r31.u32 + 13448, ctx.r30.u8);
	// bl 0x82112610
	ctx.lr = 0x82119E6C;
	sub_82112610(ctx, base);
	// lwz r11,12144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12144);
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bgt cr6,0x82119f10
	if (ctx.cr6.gt) goto loc_82119F10;
	// lis r12,-32238
	ctx.r12.s64 = -2112749568;
	// addi r12,r12,-24944
	ctx.r12.s64 = ctx.r12.s64 + -24944;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82119F2C;
	case 1:
		goto loc_82119F10;
	case 2:
		goto loc_82119F10;
	case 3:
		goto loc_82119F10;
	case 4:
		goto loc_82119EAC;
	case 5:
		goto loc_82119EE0;
	case 6:
		goto loc_82119F04;
	default:
		__builtin_unreachable();
	}
	// lwz r16,-24788(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -24788);
	// lwz r16,-24816(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -24816);
	// lwz r16,-24816(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -24816);
	// lwz r16,-24816(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -24816);
	// lwz r16,-24916(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -24916);
	// lwz r16,-24864(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -24864);
	// lwz r16,-24828(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -24828);
loc_82119EAC:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82109240
	ctx.lr = 0x82119EB8;
	sub_82109240(ctx, base);
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r11,r11,-14944
	ctx.r11.s64 = ctx.r11.s64 + -14944;
	// lbz r11,1424(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1424);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82119f10
	if (ctx.cr6.eq) goto loc_82119F10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r30,13451(r31)
	PPC_STORE_U8(ctx.r31.u32 + 13451, ctx.r30.u8);
	// bl 0x82109548
	ctx.lr = 0x82119ED8;
	sub_82109548(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82119f14
	goto loc_82119F14;
loc_82119EE0:
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r11,r11,-14944
	ctx.r11.s64 = ctx.r11.s64 + -14944;
	// lbz r10,1424(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1424);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82119f04
	if (ctx.cr6.eq) goto loc_82119F04;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,13440(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13440);
	// bl 0x82113100
	ctx.lr = 0x82119F00;
	sub_82113100(ctx, base);
	// stb r30,13448(r31)
	PPC_STORE_U8(ctx.r31.u32 + 13448, ctx.r30.u8);
loc_82119F04:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82109240
	ctx.lr = 0x82119F10;
	sub_82109240(ctx, base);
loc_82119F10:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82119F14:
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
loc_82119F2C:
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r11,r11,-14944
	ctx.r11.s64 = ctx.r11.s64 + -14944;
	// lbz r9,1424(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1424);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82119f04
	if (ctx.cr6.eq) goto loc_82119F04;
	// lwz r8,12344(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12344);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// blt cr6,0x82119f54
	if (ctx.cr6.lt) goto loc_82119F54;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82119F54:
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82119f6c
	if (ctx.cr6.eq) goto loc_82119F6C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82113070
	ctx.lr = 0x82119F68;
	sub_82113070(ctx, base);
	// b 0x82119f10
	goto loc_82119F10;
loc_82119F6C:
	// lwz r11,13524(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13524);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82119f88
	if (ctx.cr6.eq) goto loc_82119F88;
	// lwz r4,13528(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13528);
	// li r3,8
	ctx.r3.s64 = 8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82119F88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82119F88:
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r5,13508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13508, ctx.r5.u32);
	// b 0x82119f10
	goto loc_82119F10;
}

__attribute__((alias("__imp__sub_82119F94"))) PPC_WEAK_FUNC(sub_82119F94);
PPC_FUNC_IMPL(__imp__sub_82119F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82119F98"))) PPC_WEAK_FUNC(sub_82119F98);
PPC_FUNC_IMPL(__imp__sub_82119F98) {
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
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r30,12136(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12136);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82108d00
	ctx.lr = 0x82119FD0;
	sub_82108D00(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r11,3672
	ctx.r4.s64 = ctx.r11.s64 + 3672;
	// addi r3,r30,12556
	ctx.r3.s64 = ctx.r30.s64 + 12556;
	// bl 0x8259d2a0
	ctx.lr = 0x82119FE4;
	sub_8259D2A0(ctx, base);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,-25912
	ctx.r5.s64 = ctx.r11.s64 + -25912;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222fad8
	ctx.lr = 0x82119FFC;
	sub_8222FAD8(ctx, base);
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

__attribute__((alias("__imp__sub_8211A014"))) PPC_WEAK_FUNC(sub_8211A014);
PPC_FUNC_IMPL(__imp__sub_8211A014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8211A018"))) PPC_WEAK_FUNC(sub_8211A018);
PPC_FUNC_IMPL(__imp__sub_8211A018) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x8211A020;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r5,940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 940, ctx.r5.u32);
	// stw r6,944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 944, ctx.r6.u32);
	// bl 0x82109690
	ctx.lr = 0x8211A038;
	sub_82109690(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r29,r31,948
	ctx.r29.s64 = ctx.r31.s64 + 948;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r5,r11,13888
	ctx.r5.s64 = ctx.r11.s64 + 13888;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,128
	ctx.r4.s64 = 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8259da78
	ctx.lr = 0x8211A058;
	sub_8259DA78(ctx, base);
	// lis r10,7
	ctx.r10.s64 = 458752;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// ori r9,r10,14715
	ctx.r9.u64 = ctx.r10.u64 | 14715;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// lis r7,-32239
	ctx.r7.s64 = -2112815104;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// addi r7,r7,12832
	ctx.r7.s64 = ctx.r7.s64 + 12832;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lbzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// addis r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 458752;
	// lis r9,-32090
	ctx.r9.s64 = -2103050240;
	// addi r6,r11,14538
	ctx.r6.s64 = ctx.r11.s64 + 14538;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r9,r9,26752
	ctx.r9.s64 = ctx.r9.s64 + 26752;
	// addi r5,r11,13280
	ctx.r5.s64 = ctx.r11.s64 + 13280;
	// addis r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 65536;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// addi r3,r11,25864
	ctx.r3.s64 = ctx.r11.s64 + 25864;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 + ctx.r6.u64;
	// bl 0x82229a40
	ctx.lr = 0x8211A0B4;
	sub_82229A40(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8211A0BC"))) PPC_WEAK_FUNC(sub_8211A0BC);
PPC_FUNC_IMPL(__imp__sub_8211A0BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8211A0C0"))) PPC_WEAK_FUNC(sub_8211A0C0);
PPC_FUNC_IMPL(__imp__sub_8211A0C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x8211A0C8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// addi r30,r31,1076
	ctx.r30.s64 = ctx.r31.s64 + 1076;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x8259d2a0
	ctx.lr = 0x8211A0E8;
	sub_8259D2A0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r29,r31,948
	ctx.r29.s64 = ctx.r31.s64 + 948;
	// addi r5,r11,13888
	ctx.r5.s64 = ctx.r11.s64 + 13888;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r4,128
	ctx.r4.s64 = 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8259da78
	ctx.lr = 0x8211A108;
	sub_8259DA78(ctx, base);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addis r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 65536;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r9,r9,13264
	ctx.r9.s64 = ctx.r9.s64 + 13264;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// addi r10,r10,12928
	ctx.r10.s64 = ctx.r10.s64 + 12928;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r3,25864
	ctx.r3.s64 = ctx.r3.s64 + 25864;
	// lwz r6,17304(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17304);
	// lwz r5,17296(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17296);
	// bl 0x82229890
	ctx.lr = 0x8211A14C;
	sub_82229890(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8211A154"))) PPC_WEAK_FUNC(sub_8211A154);
PPC_FUNC_IMPL(__imp__sub_8211A154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8211A158"))) PPC_WEAK_FUNC(sub_8211A158);
PPC_FUNC_IMPL(__imp__sub_8211A158) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x8211A160;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addis r28,r29,7
	ctx.r28.s64 = ctx.r29.s64 + 458752;
	// addi r28,r28,16260
	ctx.r28.s64 = ctx.r28.s64 + 16260;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8211a18c
	if (ctx.cr6.eq) goto loc_8211A18C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8211a1d0
	if (ctx.cr6.eq) goto loc_8211A1D0;
	// cmpwi cr6,r11,56
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 56, ctx.xer);
	// bne cr6,0x8211a260
	if (!ctx.cr6.eq) goto loc_8211A260;
loc_8211A18C:
	// addi r27,r29,144
	ctx.r27.s64 = ctx.r29.s64 + 144;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82360bb8
	ctx.lr = 0x8211A198;
	sub_82360BB8(ctx, base);
	// addi r30,r27,120
	ctx.r30.s64 = ctx.r27.s64 + 120;
	// li r31,4
	ctx.r31.s64 = 4;
loc_8211A1A0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823607a0
	ctx.lr = 0x8211A1A8;
	sub_823607A0(ctx, base);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r30,r30,220
	ctx.r30.s64 = ctx.r30.s64 + 220;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8211a1a0
	if (!ctx.cr6.eq) goto loc_8211A1A0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8210f650
	ctx.lr = 0x8211A1C0;
	sub_8210F650(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821143b0
	ctx.lr = 0x8211A1C8;
	sub_821143B0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_8211A1D0:
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r31,r11,-21848
	ctx.r31.s64 = ctx.r11.s64 + -21848;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r7,r11,27436
	ctx.r7.s64 = ctx.r11.s64 + 27436;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// stw r31,2672(r29)
	PPC_STORE_U32(ctx.r29.u32 + 2672, ctx.r31.u32);
	// addi r30,r11,23572
	ctx.r30.s64 = ctx.r11.s64 + 23572;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r6,r30,8
	ctx.r6.s64 = ctx.r30.s64 + 8;
	// addi r5,r11,24024
	ctx.r5.s64 = ctx.r11.s64 + 24024;
	// bl 0x82370600
	ctx.lr = 0x8211A204;
	sub_82370600(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-17088
	ctx.r4.s64 = ctx.r11.s64 + -17088;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82360510
	ctx.lr = 0x8211A218;
	sub_82360510(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823624f0
	ctx.lr = 0x8211A220;
	sub_823624F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236b4e8
	ctx.lr = 0x8211A228;
	sub_8236B4E8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r7,r11,27432
	ctx.r7.s64 = ctx.r11.s64 + 27432;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r5,r11,25784
	ctx.r5.s64 = ctx.r11.s64 + 25784;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// addi r3,r11,-21548
	ctx.r3.s64 = ctx.r11.s64 + -21548;
	// bl 0x823704d8
	ctx.lr = 0x8211A24C;
	sub_823704D8(ctx, base);
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r3,r11,-18560
	ctx.r3.s64 = ctx.r11.s64 + -18560;
	// bl 0x822cbeb8
	ctx.lr = 0x8211A258;
	sub_822CBEB8(ctx, base);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
loc_8211A260:
	// lis r9,7
	ctx.r9.s64 = 458752;
	// li r7,28
	ctx.r7.s64 = 28;
	// ori r8,r9,16240
	ctx.r8.u64 = ctx.r9.u64 | 16240;
	// li r3,1
	ctx.r3.s64 = 1;
	// stwx r7,r29,r8
	PPC_STORE_U32(ctx.r29.u32 + ctx.r8.u32, ctx.r7.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8211A27C"))) PPC_WEAK_FUNC(sub_8211A27C);
PPC_FUNC_IMPL(__imp__sub_8211A27C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8211A280"))) PPC_WEAK_FUNC(sub_8211A280);
PPC_FUNC_IMPL(__imp__sub_8211A280) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x8211A288;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8236aad8
	ctx.lr = 0x8211A294;
	sub_8236AAD8(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_8211A298:
	// mulli r11,r31,220
	ctx.r11.s64 = ctx.r31.s64 * 220;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r29,r11,120
	ctx.r29.s64 = ctx.r11.s64 + 120;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823608f8
	ctx.lr = 0x8211A2AC;
	sub_823608F8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82360bf8
	ctx.lr = 0x8211A2BC;
	sub_82360BF8(ctx, base);
	// cmpwi cr6,r28,-1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, -1, ctx.xer);
	// bne cr6,0x8211a2e0
	if (!ctx.cr6.eq) goto loc_8211A2E0;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x8211a2f8
	if (!ctx.cr6.eq) goto loc_8211A2F8;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82360c78
	ctx.lr = 0x8211A2DC;
	sub_82360C78(ctx, base);
	// b 0x8211a2f8
	goto loc_8211A2F8;
loc_8211A2E0:
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8211a2f8
	if (ctx.cr6.eq) goto loc_8211A2F8;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82360d08
	ctx.lr = 0x8211A2F8;
	sub_82360D08(ctx, base);
loc_8211A2F8:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// extsb r31,r11
	ctx.r31.s64 = ctx.r11.s8;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// blt cr6,0x8211a298
	if (ctx.cr6.lt) goto loc_8211A298;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82115588
	ctx.lr = 0x8211A310;
	sub_82115588(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8211A318"))) PPC_WEAK_FUNC(sub_8211A318);
PPC_FUNC_IMPL(__imp__sub_8211A318) {
	PPC_FUNC_PROLOGUE();
	// b 0x821155f8
	sub_821155F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8211A31C"))) PPC_WEAK_FUNC(sub_8211A31C);
PPC_FUNC_IMPL(__imp__sub_8211A31C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8211A320"))) PPC_WEAK_FUNC(sub_8211A320);
PPC_FUNC_IMPL(__imp__sub_8211A320) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x8211A328;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,-9
	ctx.r11.s64 = ctx.r11.s64 + -9;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x8211a6ac
	if (ctx.cr6.gt) goto loc_8211A6AC;
	// lis r12,-32238
	ctx.r12.s64 = -2112749568;
	// addi r12,r12,-23720
	ctx.r12.s64 = ctx.r12.s64 + -23720;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8211A370;
	case 1:
		goto loc_8211A4A4;
	case 2:
		goto loc_8211A6AC;
	case 3:
		goto loc_8211A6AC;
	case 4:
		goto loc_8211A6AC;
	case 5:
		goto loc_8211A64C;
	default:
		__builtin_unreachable();
	}
	// lwz r16,-23696(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -23696);
	// lwz r16,-23388(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -23388);
	// lwz r16,-22868(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -22868);
	// lwz r16,-22868(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -22868);
	// lwz r16,-22868(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -22868);
	// lwz r16,-22964(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -22964);
loc_8211A370:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r27,1
	ctx.r27.s64 = 1;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// bne cr6,0x8211a38c
	if (!ctx.cr6.eq) goto loc_8211A38C;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_8211A38C:
	// clrlwi r28,r30,24
	ctx.r28.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x8211a3bc
	if (!ctx.cr6.eq) goto loc_8211A3BC;
	// lbz r10,222(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 222);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8211a3bc
	if (ctx.cr6.eq) goto loc_8211A3BC;
	// lwz r11,808(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 808);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211a3bc
	if (ctx.cr6.eq) goto loc_8211A3BC;
	// lwz r3,812(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 812);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8211A3BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8211A3BC:
	// lbz r9,223(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 223);
	// stb r30,222(r31)
	PPC_STORE_U8(ctx.r31.u32 + 222, ctx.r30.u8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8211a6ac
	if (!ctx.cr6.eq) goto loc_8211A6AC;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x8211a6ac
	if (!ctx.cr6.eq) goto loc_8211A6AC;
	// lbz r8,220(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 220);
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bne cr6,0x8211a43c
	if (!ctx.cr6.eq) goto loc_8211A43C;
	// lbz r7,219(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 219);
	// cmplwi cr6,r7,255
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 255, ctx.xer);
	// bne cr6,0x8211a42c
	if (!ctx.cr6.eq) goto loc_8211A42C;
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r3,r10,10416
	ctx.r3.s64 = ctx.r10.s64 + 10416;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,5
	ctx.r9.s64 = 5;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// addi r7,r11,19064
	ctx.r7.s64 = ctx.r11.s64 + 19064;
	// li r6,6
	ctx.r6.s64 = 6;
	// addi r5,r31,232
	ctx.r5.s64 = ctx.r31.s64 + 232;
	// addi r4,r31,360
	ctx.r4.s64 = ctx.r31.s64 + 360;
	// bl 0x821e6928
	ctx.lr = 0x8211A420;
	sub_821E6928(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_8211A42C:
	// stb r29,220(r31)
	PPC_STORE_U8(ctx.r31.u32 + 220, ctx.r29.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_8211A43C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x8211a6ac
	if (!ctx.cr6.eq) goto loc_8211A6AC;
	// lbz r6,219(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 219);
	// extsb r3,r6
	ctx.r3.s64 = ctx.r6.s8;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// ble cr6,0x8211a6ac
	if (!ctx.cr6.gt) goto loc_8211A6AC;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x825aeb40
	ctx.lr = 0x8211A460;
	sub_825AEB40(ctx, base);
	// lbz r5,219(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 219);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// extsb r11,r5
	ctx.r11.s64 = ctx.r5.s8;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r3,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,42
	ctx.r3.s64 = ctx.r11.s64 + 42;
	// bl 0x8259cce0
	ctx.lr = 0x8211A484;
	sub_8259CCE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8211a6ac
	if (ctx.cr6.eq) goto loc_8211A6AC;
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r27,223(r31)
	PPC_STORE_U8(ctx.r31.u32 + 223, ctx.r27.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_8211A4A4:
	// lbz r10,223(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 223);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8211a6ac
	if (!ctx.cr6.eq) goto loc_8211A6AC;
	// lbz r9,219(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 219);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// extsb r3,r9
	ctx.r3.s64 = ctx.r9.s8;
	// bl 0x825aece0
	ctx.lr = 0x8211A4C0;
	sub_825AECE0(ctx, base);
	// lbz r8,219(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 219);
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// ble cr6,0x8211a4f0
	if (!ctx.cr6.gt) goto loc_8211A4F0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8211a4f0
	if (ctx.cr6.eq) goto loc_8211A4F0;
	// li r27,1
	ctx.r27.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r27,223(r31)
	PPC_STORE_U8(ctx.r31.u32 + 223, ctx.r27.u8);
	// stw r27,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r27.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_8211A4F0:
	// lbz r7,226(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 226);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8211a558
	if (ctx.cr6.eq) goto loc_8211A558;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// lbz r6,2587(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2587);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8211a518
	if (ctx.cr6.eq) goto loc_8211A518;
	// lbz r4,2585(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2585);
loc_8211A518:
	// extsb r11,r4
	ctx.r11.s64 = ctx.r4.s8;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// ble cr6,0x8211a6ac
	if (!ctx.cr6.gt) goto loc_8211A6AC;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// slw r11,r5,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r11.u8 & 0x3F));
	// and r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 & ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8211a6ac
	if (ctx.cr6.eq) goto loc_8211A6AC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8210d590
	ctx.lr = 0x8211A544;
	sub_8210D590(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r9,226(r31)
	PPC_STORE_U8(ctx.r31.u32 + 226, ctx.r9.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_8211A558:
	// li r29,0
	ctx.r29.s64 = 0;
	// li r27,1
	ctx.r27.s64 = 1;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// ble cr6,0x8211a5d0
	if (!ctx.cr6.gt) goto loc_8211A5D0;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x825aeb40
	ctx.lr = 0x8211A578;
	sub_825AEB40(ctx, base);
	// lbz r8,219(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 219);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// slw r6,r27,r11
	ctx.r6.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r11.u8 & 0x3F));
	// and r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 & ctx.r7.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8211a5d0
	if (ctx.cr6.eq) goto loc_8211A5D0;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r5,15
	ctx.r5.s64 = 15;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r4,r11,42
	ctx.r4.s64 = ctx.r11.s64 + 42;
	// bl 0x8259de50
	ctx.lr = 0x8211A5B4;
	sub_8259DE50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8211a5d0
	if (ctx.cr6.eq) goto loc_8211A5D0;
	// li r3,2
	ctx.r3.s64 = 2;
	// stb r27,223(r31)
	PPC_STORE_U8(ctx.r31.u32 + 223, ctx.r27.u8);
	// stb r29,220(r31)
	PPC_STORE_U8(ctx.r31.u32 + 220, ctx.r29.u8);
	// stb r29,221(r31)
	PPC_STORE_U8(ctx.r31.u32 + 221, ctx.r29.u8);
	// stw r3,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r3.u32);
loc_8211A5D0:
	// lbz r11,220(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 220);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211a6ac
	if (ctx.cr6.eq) goto loc_8211A6AC;
	// lbz r4,217(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 217);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// extsb r9,r4
	ctx.r9.s64 = ctx.r4.s8;
	// slw r8,r27,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r9.u8 & 0x3F));
	// and r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 & ctx.r10.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8211a6ac
	if (ctx.cr6.eq) goto loc_8211A6AC;
	// lbz r6,219(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 219);
	// cmplwi cr6,r6,255
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 255, ctx.xer);
	// bne cr6,0x8211a60c
	if (!ctx.cr6.eq) goto loc_8211A60C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8210d590
	ctx.lr = 0x8211A60C;
	sub_8210D590(ctx, base);
loc_8211A60C:
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// stb r29,220(r31)
	PPC_STORE_U8(ctx.r31.u32 + 220, ctx.r29.u8);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// stb r29,221(r31)
	PPC_STORE_U8(ctx.r31.u32 + 221, ctx.r29.u8);
	// addi r30,r10,10416
	ctx.r30.s64 = ctx.r10.s64 + 10416;
	// addi r4,r11,19064
	ctx.r4.s64 = ctx.r11.s64 + 19064;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821e6a10
	ctx.lr = 0x8211A62C;
	sub_821E6A10(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8211a6ac
	if (ctx.cr6.eq) goto loc_8211A6AC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821e69f0
	ctx.lr = 0x8211A640;
	sub_821E69F0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_8211A64C:
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8211a6ac
	if (ctx.cr6.eq) goto loc_8211A6AC;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r11,26080
	ctx.r29.s64 = ctx.r11.s64 + 26080;
	// li r27,1
	ctx.r27.s64 = 1;
loc_8211A668:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// slw r11,r27,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r30.u8 & 0x3F));
	// and r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 & ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8211a6a0
	if (ctx.cr6.eq) goto loc_8211A6A0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// clrlwi r4,r30,24
	ctx.r4.u64 = ctx.r30.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8210d6c0
	ctx.lr = 0x8211A68C;
	sub_8210D6C0(ctx, base);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r7,r29,41
	ctx.r7.s64 = ctx.r29.s64 + 41;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stbx r9,r30,r7
	PPC_STORE_U8(ctx.r30.u32 + ctx.r7.u32, ctx.r9.u8);
	// bl 0x82113a78
	ctx.lr = 0x8211A6A0;
	sub_82113A78(ctx, base);
loc_8211A6A0:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 2, ctx.xer);
	// blt cr6,0x8211a668
	if (ctx.cr6.lt) goto loc_8211A668;
loc_8211A6AC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8211A6B8"))) PPC_WEAK_FUNC(sub_8211A6B8);
PPC_FUNC_IMPL(__imp__sub_8211A6B8) {
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
	// lbz r11,224(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 224);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8211a6e4
	if (!ctx.cr6.eq) goto loc_8211A6E4;
	// bl 0x821149c0
	ctx.lr = 0x8211A6DC;
	sub_821149C0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,224(r31)
	PPC_STORE_U8(ctx.r31.u32 + 224, ctx.r10.u8);
loc_8211A6E4:
	// lbz r9,222(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 222);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8211a734
	if (!ctx.cr6.eq) goto loc_8211A734;
	// lbz r8,225(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 225);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8211a734
	if (ctx.cr6.eq) goto loc_8211A734;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r31,r11,26080
	ctx.r31.s64 = ctx.r11.s64 + 26080;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82114230
	ctx.lr = 0x8211A70C;
	sub_82114230(ctx, base);
	// lis r7,7
	ctx.r7.s64 = 458752;
	// li r11,1
	ctx.r11.s64 = 1;
	// ori r6,r7,16224
	ctx.r6.u64 = ctx.r7.u64 | 16224;
	// li r3,1
	ctx.r3.s64 = 1;
	// stbx r11,r31,r6
	PPC_STORE_U8(ctx.r31.u32 + ctx.r6.u32, ctx.r11.u8);
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
loc_8211A734:
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

__attribute__((alias("__imp__sub_8211A74C"))) PPC_WEAK_FUNC(sub_8211A74C);
PPC_FUNC_IMPL(__imp__sub_8211A74C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8211A750"))) PPC_WEAK_FUNC(sub_8211A750);
PPC_FUNC_IMPL(__imp__sub_8211A750) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259badc
	ctx.lr = 0x8211A758;
	__savegprlr_21(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r9,r11,27444
	ctx.r9.s64 = ctx.r11.s64 + 27444;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// addi r11,r11,-1096
	ctx.r11.s64 = ctx.r11.s64 + -1096;
	// addi r10,r3,304
	ctx.r10.s64 = ctx.r3.s64 + 304;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r8,r8,17492
	ctx.r8.s64 = ctx.r8.s64 + 17492;
	// addi r7,r7,17512
	ctx.r7.s64 = ctx.r7.s64 + 17512;
	// addi r9,r9,17532
	ctx.r9.s64 = ctx.r9.s64 + 17532;
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stw r11,160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 160, ctx.r11.u32);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// stw r11,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r11.u32);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// stw r8,128(r10)
	PPC_STORE_U32(ctx.r10.u32 + 128, ctx.r8.u32);
	// addi r6,r6,17552
	ctx.r6.s64 = ctx.r6.s64 + 17552;
	// stw r7,176(r10)
	PPC_STORE_U32(ctx.r10.u32 + 176, ctx.r7.u32);
	// addi r5,r5,13364
	ctx.r5.s64 = ctx.r5.s64 + 13364;
	// stw r9,368(r10)
	PPC_STORE_U32(ctx.r10.u32 + 368, ctx.r9.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// addi r7,r9,16496
	ctx.r7.s64 = ctx.r9.s64 + 16496;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stw r6,408(r10)
	PPC_STORE_U32(ctx.r10.u32 + 408, ctx.r6.u32);
	// addi r4,r4,13368
	ctx.r4.s64 = ctx.r4.s64 + 13368;
	// stw r5,976(r3)
	PPC_STORE_U32(ctx.r3.u32 + 976, ctx.r5.u32);
	// addi r6,r9,16532
	ctx.r6.s64 = ctx.r9.s64 + 16532;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r31,-32255
	ctx.r31.s64 = -2113863680;
	// addi r5,r9,16568
	ctx.r5.s64 = ctx.r9.s64 + 16568;
	// lis r30,-32255
	ctx.r30.s64 = -2113863680;
	// stw r4,1408(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1408, ctx.r4.u32);
	// addi r31,r31,13372
	ctx.r31.s64 = ctx.r31.s64 + 13372;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r29,-32255
	ctx.r29.s64 = -2113863680;
	// lis r28,-32255
	ctx.r28.s64 = -2113863680;
	// addi r30,r30,13376
	ctx.r30.s64 = ctx.r30.s64 + 13376;
	// lis r27,-32255
	ctx.r27.s64 = -2113863680;
	// stw r31,1440(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1440, ctx.r31.u32);
	// addi r4,r9,16604
	ctx.r4.s64 = ctx.r9.s64 + 16604;
	// addi r29,r29,13380
	ctx.r29.s64 = ctx.r29.s64 + 13380;
	// lis r26,-32255
	ctx.r26.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stw r30,1480(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1480, ctx.r30.u32);
	// addi r28,r28,13384
	ctx.r28.s64 = ctx.r28.s64 + 13384;
	// lis r25,-32255
	ctx.r25.s64 = -2113863680;
	// addi r27,r27,13388
	ctx.r27.s64 = ctx.r27.s64 + 13388;
	// stw r29,1512(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1512, ctx.r29.u32);
	// lis r24,-32255
	ctx.r24.s64 = -2113863680;
	// addi r26,r26,13392
	ctx.r26.s64 = ctx.r26.s64 + 13392;
	// lis r23,-32255
	ctx.r23.s64 = -2113863680;
	// stw r28,1536(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1536, ctx.r28.u32);
	// addi r31,r9,16640
	ctx.r31.s64 = ctx.r9.s64 + 16640;
	// addi r25,r25,13396
	ctx.r25.s64 = ctx.r25.s64 + 13396;
	// stw r27,1576(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1576, ctx.r27.u32);
	// lis r22,-32255
	ctx.r22.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stw r26,1608(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1608, ctx.r26.u32);
	// addi r24,r24,13400
	ctx.r24.s64 = ctx.r24.s64 + 13400;
	// lis r21,-32255
	ctx.r21.s64 = -2113863680;
	// addi r23,r23,13404
	ctx.r23.s64 = ctx.r23.s64 + 13404;
	// stw r25,1672(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1672, ctx.r25.u32);
	// addi r22,r22,13408
	ctx.r22.s64 = ctx.r22.s64 + 13408;
	// addi r30,r9,16676
	ctx.r30.s64 = ctx.r9.s64 + 16676;
	// addi r21,r21,13412
	ctx.r21.s64 = ctx.r21.s64 + 13412;
	// stw r24,1736(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1736, ctx.r24.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stw r23,1792(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1792, ctx.r23.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r9,16712
	ctx.r29.s64 = ctx.r9.s64 + 16712;
	// stw r22,2432(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2432, ctx.r22.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stw r21,2640(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2640, ctx.r21.u32);
	// addi r10,r10,16460
	ctx.r10.s64 = ctx.r10.s64 + 16460;
	// stw r11,2736(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2736, ctx.r11.u32);
	// addi r9,r9,16748
	ctx.r9.s64 = ctx.r9.s64 + 16748;
	// stw r11,2816(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2816, ctx.r11.u32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// stw r10,3056(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3056, ctx.r10.u32);
	// addi r8,r8,16784
	ctx.r8.s64 = ctx.r8.s64 + 16784;
	// stw r10,3280(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3280, ctx.r10.u32);
	// lis r28,-32255
	ctx.r28.s64 = -2113863680;
	// stw r7,3504(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3504, ctx.r7.u32);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// stw r6,3648(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3648, ctx.r6.u32);
	// lis r27,-32255
	ctx.r27.s64 = -2113863680;
	// stw r5,3904(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3904, ctx.r5.u32);
	// lis r26,-32255
	ctx.r26.s64 = -2113863680;
	// stw r4,4080(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4080, ctx.r4.u32);
	// addi r28,r28,16820
	ctx.r28.s64 = ctx.r28.s64 + 16820;
	// stw r31,4512(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4512, ctx.r31.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r30,4768(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4768, ctx.r30.u32);
	// addi r6,r7,25472
	ctx.r6.s64 = ctx.r7.s64 + 25472;
	// stw r29,5040(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5040, ctx.r29.u32);
	// addi r27,r27,16856
	ctx.r27.s64 = ctx.r27.s64 + 16856;
	// stw r9,5184(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5184, ctx.r9.u32);
	// addi r26,r26,16892
	ctx.r26.s64 = ctx.r26.s64 + 16892;
	// stw r9,5328(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5328, ctx.r9.u32);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// stw r8,5472(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5472, ctx.r8.u32);
	// addi r10,r10,16928
	ctx.r10.s64 = ctx.r10.s64 + 16928;
	// stw r8,5568(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5568, ctx.r8.u32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r7,r7,16964
	ctx.r7.s64 = ctx.r7.s64 + 16964;
	// stw r28,5664(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5664, ctx.r28.u32);
	// addi r4,r8,17000
	ctx.r4.s64 = ctx.r8.s64 + 17000;
	// stw r27,5744(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5744, ctx.r27.u32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// stw r26,5968(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5968, ctx.r26.u32);
	// stw r10,6240(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6240, ctx.r10.u32);
	// addi r10,r3,7920
	ctx.r10.s64 = ctx.r3.s64 + 7920;
	// addi r31,r8,17036
	ctx.r31.s64 = ctx.r8.s64 + 17036;
	// stw r6,6320(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6320, ctx.r6.u32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// stw r7,6848(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6848, ctx.r7.u32);
	// stw r4,6944(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6944, ctx.r4.u32);
	// addi r9,r3,8400
	ctx.r9.s64 = ctx.r3.s64 + 8400;
	// addi r30,r8,17072
	ctx.r30.s64 = ctx.r8.s64 + 17072;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// stw r31,7104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 7104, ctx.r31.u32);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// addi r5,r8,17108
	ctx.r5.s64 = ctx.r8.s64 + 17108;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// stw r30,7248(r3)
	PPC_STORE_U32(ctx.r3.u32 + 7248, ctx.r30.u32);
	// addi r7,r7,17180
	ctx.r7.s64 = ctx.r7.s64 + 17180;
	// stw r6,7392(r3)
	PPC_STORE_U32(ctx.r3.u32 + 7392, ctx.r6.u32);
	// addi r8,r8,17144
	ctx.r8.s64 = ctx.r8.s64 + 17144;
	// stw r5,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
	// stw r11,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r11.u32);
	// stw r11,112(r10)
	PPC_STORE_U32(ctx.r10.u32 + 112, ctx.r11.u32);
	// stw r11,192(r10)
	PPC_STORE_U32(ctx.r10.u32 + 192, ctx.r11.u32);
	// stw r11,272(r10)
	PPC_STORE_U32(ctx.r10.u32 + 272, ctx.r11.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r5,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r5.u32);
	// stw r11,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, ctx.r11.u32);
	// addi r10,r10,17252
	ctx.r10.s64 = ctx.r10.s64 + 17252;
	// stw r11,112(r9)
	PPC_STORE_U32(ctx.r9.u32 + 112, ctx.r11.u32);
	// stw r11,192(r9)
	PPC_STORE_U32(ctx.r9.u32 + 192, ctx.r11.u32);
	// stw r11,272(r9)
	PPC_STORE_U32(ctx.r9.u32 + 272, ctx.r11.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r8,8880(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8880, ctx.r8.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stw r8,8908(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8908, ctx.r8.u32);
	// addi r11,r11,17216
	ctx.r11.s64 = ctx.r11.s64 + 17216;
	// stw r8,8936(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8936, ctx.r8.u32);
	// addi r9,r9,17288
	ctx.r9.s64 = ctx.r9.s64 + 17288;
	// stw r8,8964(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8964, ctx.r8.u32);
	// stw r8,8992(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8992, ctx.r8.u32);
	// stw r7,9020(r3)
	PPC_STORE_U32(ctx.r3.u32 + 9020, ctx.r7.u32);
	// stw r7,9072(r3)
	PPC_STORE_U32(ctx.r3.u32 + 9072, ctx.r7.u32);
	// stw r7,9124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 9124, ctx.r7.u32);
	// stw r11,9184(r3)
	PPC_STORE_U32(ctx.r3.u32 + 9184, ctx.r11.u32);
	// stw r11,9616(r3)
	PPC_STORE_U32(ctx.r3.u32 + 9616, ctx.r11.u32);
	// stw r10,10048(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10048, ctx.r10.u32);
	// stw r10,10336(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10336, ctx.r10.u32);
	// stw r9,10624(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10624, ctx.r9.u32);
	// b 0x8259bb2c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8211A9DC"))) PPC_WEAK_FUNC(sub_8211A9DC);
PPC_FUNC_IMPL(__imp__sub_8211A9DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8211A9E0"))) PPC_WEAK_FUNC(sub_8211A9E0);
PPC_FUNC_IMPL(__imp__sub_8211A9E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82362980
	sub_82362980(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8211A9E4"))) PPC_WEAK_FUNC(sub_8211A9E4);
PPC_FUNC_IMPL(__imp__sub_8211A9E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8211A9E8"))) PPC_WEAK_FUNC(sub_8211A9E8);
PPC_FUNC_IMPL(__imp__sub_8211A9E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82362aa0
	sub_82362AA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8211A9EC"))) PPC_WEAK_FUNC(sub_8211A9EC);
PPC_FUNC_IMPL(__imp__sub_8211A9EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8211A9F0"))) PPC_WEAK_FUNC(sub_8211A9F0);
PPC_FUNC_IMPL(__imp__sub_8211A9F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x8211A9F8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// lis r8,7
	ctx.r8.s64 = 458752;
	// lis r6,7
	ctx.r6.s64 = 458752;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// ori r9,r10,16269
	ctx.r9.u64 = ctx.r10.u64 | 16269;
	// ori r7,r8,16268
	ctx.r7.u64 = ctx.r8.u64 | 16268;
	// ori r5,r6,16292
	ctx.r5.u64 = ctx.r6.u64 | 16292;
	// li r28,1
	ctx.r28.s64 = 1;
	// lis r4,7
	ctx.r4.s64 = 458752;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// stbx r30,r31,r9
	PPC_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r30.u8);
	// ori r3,r4,16293
	ctx.r3.u64 = ctx.r4.u64 | 16293;
	// stbx r30,r31,r7
	PPC_STORE_U8(ctx.r31.u32 + ctx.r7.u32, ctx.r30.u8);
	// lis r8,7
	ctx.r8.s64 = 458752;
	// lis r6,3
	ctx.r6.s64 = 196608;
	// stbx r28,r31,r5
	PPC_STORE_U8(ctx.r31.u32 + ctx.r5.u32, ctx.r28.u8);
	// ori r9,r10,16294
	ctx.r9.u64 = ctx.r10.u64 | 16294;
	// ori r7,r8,15868
	ctx.r7.u64 = ctx.r8.u64 | 15868;
	// ori r5,r6,12436
	ctx.r5.u64 = ctx.r6.u64 | 12436;
	// stbx r30,r31,r3
	PPC_STORE_U8(ctx.r31.u32 + ctx.r3.u32, ctx.r30.u8);
	// lis r4,3
	ctx.r4.s64 = 196608;
	// lis r10,3
	ctx.r10.s64 = 196608;
	// ori r3,r4,12444
	ctx.r3.u64 = ctx.r4.u64 | 12444;
	// stbx r30,r31,r9
	PPC_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r30.u8);
	// lis r8,3
	ctx.r8.s64 = 196608;
	// stbx r28,r31,r7
	PPC_STORE_U8(ctx.r31.u32 + ctx.r7.u32, ctx.r28.u8);
	// lis r6,3
	ctx.r6.s64 = 196608;
	// stbx r30,r31,r5
	PPC_STORE_U8(ctx.r31.u32 + ctx.r5.u32, ctx.r30.u8);
	// ori r9,r10,12440
	ctx.r9.u64 = ctx.r10.u64 | 12440;
	// ori r7,r8,12468
	ctx.r7.u64 = ctx.r8.u64 | 12468;
	// ori r5,r6,24752
	ctx.r5.u64 = ctx.r6.u64 | 24752;
	// stbx r30,r31,r3
	PPC_STORE_U8(ctx.r31.u32 + ctx.r3.u32, ctx.r30.u8);
	// lis r4,3
	ctx.r4.s64 = 196608;
	// lis r10,3
	ctx.r10.s64 = 196608;
	// ori r3,r4,20660
	ctx.r3.u64 = ctx.r4.u64 | 20660;
	// stwx r30,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r30.u32);
	// lis r8,7
	ctx.r8.s64 = 458752;
	// stwx r30,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r30.u32);
	// lis r6,7
	ctx.r6.s64 = 458752;
	// stbx r30,r31,r5
	PPC_STORE_U8(ctx.r31.u32 + ctx.r5.u32, ctx.r30.u8);
	// ori r9,r10,24753
	ctx.r9.u64 = ctx.r10.u64 | 24753;
	// ori r7,r8,15869
	ctx.r7.u64 = ctx.r8.u64 | 15869;
	// ori r5,r6,16245
	ctx.r5.u64 = ctx.r6.u64 | 16245;
	// stwx r30,r31,r3
	PPC_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r30.u32);
	// lis r4,7
	ctx.r4.s64 = 458752;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// ori r3,r4,16246
	ctx.r3.u64 = ctx.r4.u64 | 16246;
	// stbx r30,r31,r9
	PPC_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r30.u8);
	// lis r8,7
	ctx.r8.s64 = 458752;
	// stbx r30,r31,r7
	PPC_STORE_U8(ctx.r31.u32 + ctx.r7.u32, ctx.r30.u8);
	// addis r26,r31,3
	ctx.r26.s64 = ctx.r31.s64 + 196608;
	// stbx r30,r31,r5
	PPC_STORE_U8(ctx.r31.u32 + ctx.r5.u32, ctx.r30.u8);
	// lis r6,697
	ctx.r6.s64 = 45678592;
	// lis r4,-698
	ctx.r4.s64 = -45744128;
	// addis r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 196608;
	// stbx r30,r31,r3
	PPC_STORE_U8(ctx.r31.u32 + ctx.r3.u32, ctx.r30.u8);
	// ori r9,r10,16270
	ctx.r9.u64 = ctx.r10.u64 | 16270;
	// ori r7,r8,15871
	ctx.r7.u64 = ctx.r8.u64 | 15871;
	// addi r26,r26,12432
	ctx.r26.s64 = ctx.r26.s64 + 12432;
	// addi r11,r11,12424
	ctx.r11.s64 = ctx.r11.s64 + 12424;
	// ori r5,r6,55032
	ctx.r5.u64 = ctx.r6.u64 | 55032;
	// ori r10,r4,10503
	ctx.r10.u64 = ctx.r4.u64 | 10503;
	// stbx r30,r31,r9
	PPC_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stbx r30,r31,r7
	PPC_STORE_U8(ctx.r31.u32 + ctx.r7.u32, ctx.r30.u8);
	// stw r30,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r30.u32);
	// stw r5,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x8210bfd0
	ctx.lr = 0x8211AB14;
	sub_8210BFD0(ctx, base);
	// bl 0x82360fd0
	ctx.lr = 0x8211AB18;
	sub_82360FD0(ctx, base);
	// bl 0x8212bb98
	ctx.lr = 0x8211AB1C;
	sub_8212BB98(ctx, base);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// addi r3,r11,-21272
	ctx.r3.s64 = ctx.r11.s64 + -21272;
	// bl 0x8210c060
	ctx.lr = 0x8211AB28;
	sub_8210C060(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82113760
	ctx.lr = 0x8211AB30;
	sub_82113760(ctx, base);
	// bl 0x82361058
	ctx.lr = 0x8211AB34;
	sub_82361058(ctx, base);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lbz r11,6036(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6036);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211ab60
	if (ctx.cr6.eq) goto loc_8211AB60;
	// li r3,50
	ctx.r3.s64 = 50;
	// bl 0x82363b40
	ctx.lr = 0x8211AB4C;
	sub_82363B40(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f2,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f1,-1624(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1624);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8211ab78
	goto loc_8211AB78;
loc_8211AB60:
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x82363b40
	ctx.lr = 0x8211AB68;
	sub_82363B40(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f2,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f1,13420(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 13420);
	ctx.f1.f64 = double(temp.f32);
loc_8211AB78:
	// addis r3,r31,7
	ctx.r3.s64 = ctx.r31.s64 + 458752;
	// addi r3,r3,15904
	ctx.r3.s64 = ctx.r3.s64 + 15904;
	// bl 0x82363d80
	ctx.lr = 0x8211AB84;
	sub_82363D80(ctx, base);
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// stb r30,48(r3)
	PPC_STORE_U8(ctx.r3.u32 + 48, ctx.r30.u8);
	// stb r30,49(r3)
	PPC_STORE_U8(ctx.r3.u32 + 49, ctx.r30.u8);
	// bl 0x82363c28
	ctx.lr = 0x8211AB94;
	sub_82363C28(ctx, base);
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// li r27,-1
	ctx.r27.s64 = -1;
	// addi r29,r11,-14944
	ctx.r29.s64 = ctx.r11.s64 + -14944;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// addi r11,r11,5912
	ctx.r11.s64 = ctx.r11.s64 + 5912;
	// addi r3,r29,22532
	ctx.r3.s64 = ctx.r29.s64 + 22532;
	// stw r10,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// stw r10,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
	// stw r10,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// stw r10,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r10.u32);
	// stw r10,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r10.u32);
	// stw r10,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r10.u32);
	// stw r10,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r10.u32);
	// stw r10,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r10.u32);
	// stw r10,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r10.u32);
	// stw r10,92(r11)
	PPC_STORE_U32(ctx.r11.u32 + 92, ctx.r10.u32);
	// stw r10,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r10.u32);
	// stw r10,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r10.u32);
	// stw r10,104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 104, ctx.r10.u32);
	// stw r10,108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 108, ctx.r10.u32);
	// stw r10,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r10.u32);
	// stw r10,116(r11)
	PPC_STORE_U32(ctx.r11.u32 + 116, ctx.r10.u32);
	// stw r10,120(r11)
	PPC_STORE_U32(ctx.r11.u32 + 120, ctx.r10.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// stw r10,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r11,r11,23432
	ctx.r11.s64 = ctx.r11.s64 + 23432;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// stw r10,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// stw r10,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// stw r10,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// bl 0x82362d40
	ctx.lr = 0x8211AC84;
	sub_82362D40(ctx, base);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,23504
	ctx.r3.s64 = ctx.r11.s64 + 23504;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stw r11,1444(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1444, ctx.r11.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stb r11,1420(r29)
	PPC_STORE_U8(ctx.r29.u32 + 1420, ctx.r11.u8);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r11,1428(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1428, ctx.r11.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r11,22388(r29)
	PPC_STORE_U32(ctx.r29.u32 + 22388, ctx.r11.u32);
	// bl 0x821159a8
	ctx.lr = 0x8211ACB0;
	sub_821159A8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,21744
	ctx.r3.s64 = ctx.r31.s64 + 21744;
	// bl 0x823511d8
	ctx.lr = 0x8211ACBC;
	sub_823511D8(ctx, base);
	// addi r3,r31,2736
	ctx.r3.s64 = ctx.r31.s64 + 2736;
	// bl 0x82101890
	ctx.lr = 0x8211ACC4;
	sub_82101890(ctx, base);
	// lis r11,-32110
	ctx.r11.s64 = -2104360960;
	// addi r3,r11,12656
	ctx.r3.s64 = ctx.r11.s64 + 12656;
	// bl 0x8217e958
	ctx.lr = 0x8211ACD0;
	sub_8217E958(ctx, base);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// addi r3,r11,-32560
	ctx.r3.s64 = ctx.r11.s64 + -32560;
	// bl 0x8210e458
	ctx.lr = 0x8211ACDC;
	sub_8210E458(ctx, base);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r3,r11,26752
	ctx.r3.s64 = ctx.r11.s64 + 26752;
	// bl 0x8222e2e0
	ctx.lr = 0x8211ACE8;
	sub_8222E2E0(ctx, base);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// addi r3,r11,28544
	ctx.r3.s64 = ctx.r11.s64 + 28544;
	// bl 0x823413e8
	ctx.lr = 0x8211ACF4;
	sub_823413E8(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r3,r11,12976
	ctx.r3.s64 = ctx.r11.s64 + 12976;
	// bl 0x82201ed0
	ctx.lr = 0x8211AD00;
	sub_82201ED0(ctx, base);
	// lis r11,-32110
	ctx.r11.s64 = -2104360960;
	// addi r3,r11,3336
	ctx.r3.s64 = ctx.r11.s64 + 3336;
	// bl 0x82142a00
	ctx.lr = 0x8211AD0C;
	sub_82142A00(ctx, base);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r29,r11,-24936
	ctx.r29.s64 = ctx.r11.s64 + -24936;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82203860
	ctx.lr = 0x8211AD1C;
	sub_82203860(ctx, base);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r6,r11,92
	ctx.r6.s64 = ctx.r11.s64 + 92;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82203848
	ctx.lr = 0x8211AD38;
	sub_82203848(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r3,r11,10416
	ctx.r3.s64 = ctx.r11.s64 + 10416;
	// bl 0x821fd3d0
	ctx.lr = 0x8211AD44;
	sub_821FD3D0(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r3,r11,14528
	ctx.r3.s64 = ctx.r11.s64 + 14528;
	// bl 0x82203630
	ctx.lr = 0x8211AD50;
	sub_82203630(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r3,r11,11476
	ctx.r3.s64 = ctx.r11.s64 + 11476;
	// bl 0x821ff960
	ctx.lr = 0x8211AD5C;
	sub_821FF960(ctx, base);
	// addis r3,r31,7
	ctx.r3.s64 = ctx.r31.s64 + 458752;
	// addi r3,r3,14496
	ctx.r3.s64 = ctx.r3.s64 + 14496;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8211AD74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addis r29,r31,7
	ctx.r29.s64 = ctx.r31.s64 + 458752;
	// li r5,512
	ctx.r5.s64 = 512;
	// addi r29,r29,15320
	ctx.r29.s64 = ctx.r29.s64 + 15320;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8259d300
	ctx.lr = 0x8211AD8C;
	sub_8259D300(ctx, base);
	// addi r3,r31,20352
	ctx.r3.s64 = ctx.r31.s64 + 20352;
	// stw r30,540(r29)
	PPC_STORE_U32(ctx.r29.u32 + 540, ctx.r30.u32);
	// stw r30,544(r29)
	PPC_STORE_U32(ctx.r29.u32 + 544, ctx.r30.u32);
	// stb r30,18413(r31)
	PPC_STORE_U8(ctx.r31.u32 + 18413, ctx.r30.u8);
	// bl 0x8212bb98
	ctx.lr = 0x8211ADA0;
	sub_8212BB98(ctx, base);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r29,r11,13096
	ctx.r29.s64 = ctx.r11.s64 + 13096;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820fed40
	ctx.lr = 0x8211ADB0;
	sub_820FED40(ctx, base);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// stw r29,6936(r29)
	PPC_STORE_U32(ctx.r29.u32 + 6936, ctx.r29.u32);
	// addi r3,r11,-1452
	ctx.r3.s64 = ctx.r11.s64 + -1452;
	// bl 0x820f9520
	ctx.lr = 0x8211ADC0;
	sub_820F9520(ctx, base);
	// addis r3,r31,3
	ctx.r3.s64 = ctx.r31.s64 + 196608;
	// lis r6,7
	ctx.r6.s64 = 458752;
	// stw r30,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r30.u32);
	// addi r3,r3,24760
	ctx.r3.s64 = ctx.r3.s64 + 24760;
	// lis r4,7
	ctx.r4.s64 = 458752;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// ori r5,r6,16224
	ctx.r5.u64 = ctx.r6.u64 | 16224;
	// ori r11,r4,16216
	ctx.r11.u64 = ctx.r4.u64 | 16216;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// ori r9,r10,16220
	ctx.r9.u64 = ctx.r10.u64 | 16220;
	// stbx r30,r31,r5
	PPC_STORE_U8(ctx.r31.u32 + ctx.r5.u32, ctx.r30.u8);
	// stwx r30,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r30.u32);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stwx r30,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r30.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8211AE00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addis r3,r31,3
	ctx.r3.s64 = ctx.r31.s64 + 196608;
	// addi r3,r3,24840
	ctx.r3.s64 = ctx.r3.s64 + 24840;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x8211AE18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addis r3,r31,3
	ctx.r3.s64 = ctx.r31.s64 + 196608;
	// addi r3,r3,24860
	ctx.r3.s64 = ctx.r3.s64 + 24860;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8211AE30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addis r3,r31,3
	ctx.r3.s64 = ctx.r31.s64 + 196608;
	// addi r3,r3,24888
	ctx.r3.s64 = ctx.r3.s64 + 24888;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8211AE48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addis r29,r31,3
	ctx.r29.s64 = ctx.r31.s64 + 196608;
	// addi r29,r29,24944
	ctx.r29.s64 = ctx.r29.s64 + 24944;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8211AE64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addis r3,r31,3
	ctx.r3.s64 = ctx.r31.s64 + 196608;
	// addi r3,r3,27936
	ctx.r3.s64 = ctx.r3.s64 + 27936;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x8211AE7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addis r3,r31,3
	ctx.r3.s64 = ctx.r31.s64 + 196608;
	// addi r3,r3,31424
	ctx.r3.s64 = ctx.r3.s64 + 31424;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8211AE94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addis r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 262144;
	// addi r3,r3,-24816
	ctx.r3.s64 = ctx.r3.s64 + -24816;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8211AEAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addis r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 262144;
	// addi r3,r3,-21792
	ctx.r3.s64 = ctx.r3.s64 + -21792;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8211AEC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x8211AED8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addis r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 262144;
	// addi r3,r3,-31056
	ctx.r3.s64 = ctx.r3.s64 + -31056;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8211AEF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addis r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 262144;
	// addi r3,r3,-27920
	ctx.r3.s64 = ctx.r3.s64 + -27920;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8211AF08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addis r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 262144;
	// addi r3,r3,-15264
	ctx.r3.s64 = ctx.r3.s64 + -15264;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8211AF20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addis r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 262144;
	// addi r3,r3,-18752
	ctx.r3.s64 = ctx.r3.s64 + -18752;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x8211AF38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addis r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 262144;
	// addi r3,r3,-11776
	ctx.r3.s64 = ctx.r3.s64 + -11776;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8211AF50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addis r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 262144;
	// addi r3,r3,1344
	ctx.r3.s64 = ctx.r3.s64 + 1344;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8211AF68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addis r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 262144;
	// addi r3,r3,-8288
	ctx.r3.s64 = ctx.r3.s64 + -8288;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8211AF80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addis r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 262144;
	// addi r3,r3,7088
	ctx.r3.s64 = ctx.r3.s64 + 7088;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x8211AF98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addis r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 262144;
	// addi r3,r3,12704
	ctx.r3.s64 = ctx.r3.s64 + 12704;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8211AFB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addis r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 262144;
	// addi r3,r3,18064
	ctx.r3.s64 = ctx.r3.s64 + 18064;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8211AFC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addis r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 262144;
	// addi r3,r3,-1728
	ctx.r3.s64 = ctx.r3.s64 + -1728;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8211AFE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addis r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 262144;
	// addi r3,r3,23424
	ctx.r3.s64 = ctx.r3.s64 + 23424;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x8211AFF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addis r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 262144;
	// addi r3,r3,25856
	ctx.r3.s64 = ctx.r3.s64 + 25856;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8211B010;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addis r3,r31,5
	ctx.r3.s64 = ctx.r31.s64 + 327680;
	// addi r3,r3,6600
	ctx.r3.s64 = ctx.r3.s64 + 6600;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8211B028;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addis r3,r31,6
	ctx.r3.s64 = ctx.r31.s64 + 393216;
	// addi r3,r3,-12656
	ctx.r3.s64 = ctx.r3.s64 + -12656;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8211B040;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addis r3,r31,7
	ctx.r3.s64 = ctx.r31.s64 + 458752;
	// addi r3,r3,-31896
	ctx.r3.s64 = ctx.r3.s64 + -31896;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x8211B058;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addis r3,r31,7
	ctx.r3.s64 = ctx.r31.s64 + 458752;
	// addi r3,r3,14408
	ctx.r3.s64 = ctx.r3.s64 + 14408;
	// bl 0x82120ca8
	ctx.lr = 0x8211B064;
	sub_82120CA8(ctx, base);
	// addis r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 196608;
	// addis r10,r31,3
	ctx.r10.s64 = ctx.r31.s64 + 196608;
	// addi r11,r11,-11504
	ctx.r11.s64 = ctx.r11.s64 + -11504;
	// addis r3,r31,3
	ctx.r3.s64 = ctx.r31.s64 + 196608;
	// addi r10,r10,-11468
	ctx.r10.s64 = ctx.r10.s64 + -11468;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,-11424
	ctx.r3.s64 = ctx.r3.s64 + -11424;
	// stb r30,32(r11)
	PPC_STORE_U8(ctx.r11.u32 + 32, ctx.r30.u8);
	// stw r30,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r30.u32);
	// stb r30,32(r10)
	PPC_STORE_U8(ctx.r10.u32 + 32, ctx.r30.u8);
	// stw r28,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r28.u32);
	// bl 0x82317748
	ctx.lr = 0x8211B094;
	sub_82317748(ctx, base);
	// addis r3,r31,3
	ctx.r3.s64 = ctx.r31.s64 + 196608;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r3,496
	ctx.r3.s64 = ctx.r3.s64 + 496;
	// bl 0x82317748
	ctx.lr = 0x8211B0A4;
	sub_82317748(ctx, base);
	// lis r4,7
	ctx.r4.s64 = 458752;
	// lis r11,7
	ctx.r11.s64 = 458752;
	// ori r3,r4,16232
	ctx.r3.u64 = ctx.r4.u64 | 16232;
	// ori r10,r11,16236
	ctx.r10.u64 = ctx.r11.u64 | 16236;
	// lis r5,3
	ctx.r5.s64 = 196608;
	// lis r9,7
	ctx.r9.s64 = 458752;
	// ori r4,r5,24754
	ctx.r4.u64 = ctx.r5.u64 | 24754;
	// stwx r27,r31,r3
	PPC_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r27.u32);
	// lis r7,7
	ctx.r7.s64 = 458752;
	// stwx r27,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r27.u32);
	// lis r3,7
	ctx.r3.s64 = 458752;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// ori r8,r9,16228
	ctx.r8.u64 = ctx.r9.u64 | 16228;
	// ori r11,r3,16240
	ctx.r11.u64 = ctx.r3.u64 | 16240;
	// stbx r30,r31,r4
	PPC_STORE_U8(ctx.r31.u32 + ctx.r4.u32, ctx.r30.u8);
	// ori r6,r7,16244
	ctx.r6.u64 = ctx.r7.u64 | 16244;
	// ori r9,r10,16260
	ctx.r9.u64 = ctx.r10.u64 | 16260;
	// lis r4,7
	ctx.r4.s64 = 458752;
	// stwx r27,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r27.u32);
	// lis r8,7
	ctx.r8.s64 = 458752;
	// ori r3,r4,16273
	ctx.r3.u64 = ctx.r4.u64 | 16273;
	// stwx r28,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r28.u32);
	// stbx r30,r31,r6
	PPC_STORE_U8(ctx.r31.u32 + ctx.r6.u32, ctx.r30.u8);
	// lis r11,7
	ctx.r11.s64 = 458752;
	// stwx r28,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r28.u32);
	// lis r6,7
	ctx.r6.s64 = 458752;
	// lis r9,7
	ctx.r9.s64 = 458752;
	// ori r7,r8,16288
	ctx.r7.u64 = ctx.r8.u64 | 16288;
	// stbx r30,r31,r3
	PPC_STORE_U8(ctx.r31.u32 + ctx.r3.u32, ctx.r30.u8);
	// ori r5,r6,16284
	ctx.r5.u64 = ctx.r6.u64 | 16284;
	// ori r10,r11,16274
	ctx.r10.u64 = ctx.r11.u64 | 16274;
	// ori r8,r9,16275
	ctx.r8.u64 = ctx.r9.u64 | 16275;
	// addis r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 524288;
	// stwx r30,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r30.u32);
	// addi r3,r3,24504
	ctx.r3.s64 = ctx.r3.s64 + 24504;
	// stwx r30,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r30.u32);
	// stbx r30,r31,r10
	PPC_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r30.u8);
	// stbx r30,r31,r8
	PPC_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r30.u8);
	// bl 0x8212bb98
	ctx.lr = 0x8211B140;
	sub_8212BB98(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addis r3,r31,7
	ctx.r3.s64 = ctx.r31.s64 + 458752;
	// addi r6,r11,3672
	ctx.r6.s64 = ctx.r11.s64 + 3672;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r5,r11,13328
	ctx.r5.s64 = ctx.r11.s64 + 13328;
	// addi r3,r3,15960
	ctx.r3.s64 = ctx.r3.s64 + 15960;
	// bl 0x8259da78
	ctx.lr = 0x8211B160;
	sub_8259DA78(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8211B168"))) PPC_WEAK_FUNC(sub_8211B168);
PPC_FUNC_IMPL(__imp__sub_8211B168) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bac0
	ctx.lr = 0x8211B170;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r22,r31,2736
	ctx.r22.s64 = ctx.r31.s64 + 2736;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// stb r28,21740(r31)
	PPC_STORE_U8(ctx.r31.u32 + 21740, ctx.r28.u8);
	// bl 0x8210de48
	ctx.lr = 0x8211B18C;
	sub_8210DE48(ctx, base);
	// lis r10,-32090
	ctx.r10.s64 = -2103050240;
	// addis r27,r31,7
	ctx.r27.s64 = ctx.r31.s64 + 458752;
	// addi r14,r10,26752
	ctx.r14.s64 = ctx.r10.s64 + 26752;
	// addi r27,r27,16240
	ctx.r27.s64 = ctx.r27.s64 + 16240;
	// lis r10,-32160
	ctx.r10.s64 = -2107637760;
	// li r23,1
	ctx.r23.s64 = 1;
	// addi r15,r10,-18560
	ctx.r15.s64 = ctx.r10.s64 + -18560;
	// lis r10,-32110
	ctx.r10.s64 = -2104360960;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r17,r10,12656
	ctx.r17.s64 = ctx.r10.s64 + 12656;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lis r10,-32124
	ctx.r10.s64 = -2105278464;
	// cmplwi cr6,r11,55
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 55, ctx.xer);
	// addi r30,r10,26080
	ctx.r30.s64 = ctx.r10.s64 + 26080;
	// bgt cr6,0x8211b66c
	if (ctx.cr6.gt) goto loc_8211B66C;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r9,3
	ctx.r9.s64 = 196608;
	// addi r29,r10,-21272
	ctx.r29.s64 = ctx.r10.s64 + -21272;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// lis r8,3
	ctx.r8.s64 = 196608;
	// lis r7,3
	ctx.r7.s64 = 196608;
	// lis r6,3
	ctx.r6.s64 = 196608;
	// lis r5,3
	ctx.r5.s64 = 196608;
	// lis r4,3
	ctx.r4.s64 = 196608;
	// lis r3,3
	ctx.r3.s64 = 196608;
	// ori r16,r10,16264
	ctx.r16.u64 = ctx.r10.u64 | 16264;
	// ori r18,r9,12452
	ctx.r18.u64 = ctx.r9.u64 | 12452;
	// ori r19,r8,24753
	ctx.r19.u64 = ctx.r8.u64 | 24753;
	// ori r20,r7,24752
	ctx.r20.u64 = ctx.r7.u64 | 24752;
	// ori r21,r6,12432
	ctx.r21.u64 = ctx.r6.u64 | 12432;
	// ori r24,r5,12436
	ctx.r24.u64 = ctx.r5.u64 | 12436;
	// ori r25,r4,12440
	ctx.r25.u64 = ctx.r4.u64 | 12440;
	// ori r26,r3,12444
	ctx.r26.u64 = ctx.r3.u64 | 12444;
	// lis r12,-32238
	ctx.r12.s64 = -2112749568;
	// addi r12,r12,-19928
	ctx.r12.s64 = ctx.r12.s64 + -19928;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8211B308;
	case 1:
		goto loc_8211B340;
	case 2:
		goto loc_8211B390;
	case 3:
		goto loc_8211B3AC;
	case 4:
		goto loc_8211B3CC;
	case 5:
		goto loc_8211B41C;
	case 6:
		goto loc_8211B478;
	case 7:
		goto loc_8211B4B0;
	case 8:
		goto loc_8211B50C;
	case 9:
		goto loc_8211B534;
	case 10:
		goto loc_8211B584;
	case 11:
		goto loc_8211B5BC;
	case 12:
		goto loc_8211B5EC;
	case 13:
		goto loc_8211B60C;
	case 14:
		goto loc_8211B63C;
	case 15:
		goto loc_8211B66C;
	case 16:
		goto loc_8211B66C;
	case 17:
		goto loc_8211B66C;
	case 18:
		goto loc_8211B66C;
	case 19:
		goto loc_8211B66C;
	case 20:
		goto loc_8211B66C;
	case 21:
		goto loc_8211B66C;
	case 22:
		goto loc_8211B66C;
	case 23:
		goto loc_8211B66C;
	case 24:
		goto loc_8211B66C;
	case 25:
		goto loc_8211B66C;
	case 26:
		goto loc_8211B66C;
	case 27:
		goto loc_8211B66C;
	case 28:
		goto loc_8211B66C;
	case 29:
		goto loc_8211B66C;
	case 30:
		goto loc_8211B66C;
	case 31:
		goto loc_8211B66C;
	case 32:
		goto loc_8211B66C;
	case 33:
		goto loc_8211B66C;
	case 34:
		goto loc_8211B66C;
	case 35:
		goto loc_8211B66C;
	case 36:
		goto loc_8211B66C;
	case 37:
		goto loc_8211B66C;
	case 38:
		goto loc_8211B66C;
	case 39:
		goto loc_8211B66C;
	case 40:
		goto loc_8211B66C;
	case 41:
		goto loc_8211B66C;
	case 42:
		goto loc_8211B66C;
	case 43:
		goto loc_8211B66C;
	case 44:
		goto loc_8211B66C;
	case 45:
		goto loc_8211B66C;
	case 46:
		goto loc_8211B66C;
	case 47:
		goto loc_8211B66C;
	case 48:
		goto loc_8211B66C;
	case 49:
		goto loc_8211B66C;
	case 50:
		goto loc_8211B66C;
	case 51:
		goto loc_8211B66C;
	case 52:
		goto loc_8211B66C;
	case 53:
		goto loc_8211B66C;
	case 54:
		goto loc_8211B66C;
	case 55:
		goto loc_8211B308;
	default:
		__builtin_unreachable();
	}
	// lwz r16,-19704(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -19704);
	// lwz r16,-19648(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -19648);
	// lwz r16,-19568(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -19568);
	// lwz r16,-19540(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -19540);
	// lwz r16,-19508(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -19508);
	// lwz r16,-19428(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -19428);
	// lwz r16,-19336(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -19336);
	// lwz r16,-19280(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -19280);
	// lwz r16,-19188(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -19188);
	// lwz r16,-19148(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -19148);
	// lwz r16,-19068(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -19068);
	// lwz r16,-19012(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -19012);
	// lwz r16,-18964(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -18964);
	// lwz r16,-18932(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -18932);
	// lwz r16,-18884(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -18884);
	// lwz r16,-18836(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -18836);
	// lwz r16,-18836(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -18836);
	// lwz r16,-18836(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -18836);
	// lwz r16,-18836(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -18836);
	// lwz r16,-18836(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -18836);
	// lwz r16,-18836(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -18836);
	// lwz r16,-18836(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -18836);
	// lwz r16,-18836(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -18836);
	// lwz r16,-18836(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -18836);
	// lwz r16,-18836(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -18836);
	// lwz r16,-18836(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -18836);
	// lwz r16,-18836(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -18836);
	// lwz r16,-18836(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -18836);
	// lwz r16,-18836(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -18836);
	// lwz r16,-18836(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -18836);
	// lwz r16,-18836(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -18836);
	// lwz r16,-18836(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -18836);
	// lwz r16,-18836(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -18836);
	// lwz r16,-18836(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -18836);
	// lwz r16,-18836(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -18836);
	// lwz r16,-18836(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -18836);
	// lwz r16,-18836(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -18836);
	// lwz r16,-18836(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -18836);
	// lwz r16,-18836(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -18836);
	// lwz r16,-18836(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -18836);
	// lwz r16,-18836(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -18836);
	// lwz r16,-18836(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -18836);
	// lwz r16,-18836(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -18836);
	// lwz r16,-18836(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -18836);
	// lwz r16,-18836(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -18836);
	// lwz r16,-18836(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -18836);
	// lwz r16,-18836(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -18836);
	// lwz r16,-18836(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -18836);
	// lwz r16,-18836(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -18836);
	// lwz r16,-18836(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -18836);
	// lwz r16,-18836(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -18836);
	// lwz r16,-18836(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -18836);
	// lwz r16,-18836(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -18836);
	// lwz r16,-18836(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -18836);
	// lwz r16,-18836(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -18836);
	// lwz r16,-19704(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -19704);
loc_8211B308:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8211a158
	ctx.lr = 0x8211B310;
	sub_8211A158(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8211b328
	if (!ctx.cr6.eq) goto loc_8211B328;
loc_8211B31C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x8259bb10
	__restgprlr_14(ctx, base);
	return;
loc_8211B328:
	// bl 0x8218d128
	ctx.lr = 0x8211B32C;
	sub_8218D128(ctx, base);
	// lis r10,3
	ctx.r10.s64 = 196608;
	// li r8,2
	ctx.r8.s64 = 2;
	// ori r9,r10,24754
	ctx.r9.u64 = ctx.r10.u64 | 24754;
	// stw r8,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r8.u32);
	// stbx r23,r31,r9
	PPC_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r23.u8);
loc_8211B340:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,39
	ctx.r4.s64 = 39;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8210cf48
	ctx.lr = 0x8211B350;
	sub_8210CF48(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// stwx r6,r31,r25
	PPC_STORE_U32(ctx.r31.u32 + ctx.r25.u32, ctx.r6.u32);
	// beq cr6,0x8211b31c
	if (ctx.cr6.eq) goto loc_8211B31C;
	// li r4,39
	ctx.r4.s64 = 39;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8210d3f0
	ctx.lr = 0x8211B36C;
	sub_8210D3F0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r4,r11,29164
	ctx.r4.s64 = ctx.r11.s64 + 29164;
	// li r8,0
	ctx.r8.s64 = 0;
	// add r5,r31,r26
	ctx.r5.u64 = ctx.r31.u64 + ctx.r26.u64;
	// addi r3,r30,2736
	ctx.r3.s64 = ctx.r30.s64 + 2736;
	// bl 0x8210e1f0
	ctx.lr = 0x8211B388;
	sub_8210E1F0(ctx, base);
	// li r7,3
	ctx.r7.s64 = 3;
	// stw r7,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r7.u32);
loc_8211B390:
	// lbzx r6,r31,r26
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r26.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8211b31c
	if (ctx.cr6.eq) goto loc_8211B31C;
	// lwzx r3,r31,r25
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r25.u32);
	// bl 0x8210dc18
	ctx.lr = 0x8211B3A4;
	sub_8210DC18(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r5,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r5.u32);
loc_8211B3AC:
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,23504
	ctx.r3.s64 = ctx.r11.s64 + 23504;
	// bl 0x82115d10
	ctx.lr = 0x8211B3B8;
	sub_82115D10(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8211b31c
	if (ctx.cr6.eq) goto loc_8211B31C;
	// li r3,5
	ctx.r3.s64 = 5;
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
loc_8211B3CC:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8210cf48
	ctx.lr = 0x8211B3DC;
	sub_8210CF48(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// stwx r6,r31,r21
	PPC_STORE_U32(ctx.r31.u32 + ctx.r21.u32, ctx.r6.u32);
	// beq cr6,0x8211b31c
	if (ctx.cr6.eq) goto loc_8211B31C;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8210d3f0
	ctx.lr = 0x8211B3F8;
	sub_8210D3F0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r4,r11,29148
	ctx.r4.s64 = ctx.r11.s64 + 29148;
	// li r8,0
	ctx.r8.s64 = 0;
	// add r5,r31,r24
	ctx.r5.u64 = ctx.r31.u64 + ctx.r24.u64;
	// addi r3,r30,2736
	ctx.r3.s64 = ctx.r30.s64 + 2736;
	// bl 0x8210e1f0
	ctx.lr = 0x8211B414;
	sub_8210E1F0(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_8211B41C:
	// lbzx r10,r31,r24
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r24.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8211b31c
	if (ctx.cr6.eq) goto loc_8211B31C;
	// lwzx r3,r31,r21
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r21.u32);
	// bl 0x8210dc18
	ctx.lr = 0x8211B430;
	sub_8210DC18(ctx, base);
	// bl 0x8210b358
	ctx.lr = 0x8211B434;
	sub_8210B358(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8211b44c
	if (!ctx.cr6.eq) goto loc_8211B44C;
	// bl 0x82187688
	ctx.lr = 0x8211B444;
	sub_82187688(ctx, base);
	// bl 0x82189630
	ctx.lr = 0x8211B448;
	sub_82189630(ctx, base);
	// bl 0x821f8400
	ctx.lr = 0x8211B44C;
	sub_821F8400(ctx, base);
loc_8211B44C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addis r6,r31,3
	ctx.r6.s64 = ctx.r31.s64 + 196608;
	// addi r4,r11,29132
	ctx.r4.s64 = ctx.r11.s64 + 29132;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,8192
	ctx.r7.s64 = 8192;
	// addi r6,r6,12464
	ctx.r6.s64 = ctx.r6.s64 + 12464;
	// add r5,r31,r20
	ctx.r5.u64 = ctx.r31.u64 + ctx.r20.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8210e1f0
	ctx.lr = 0x8211B470;
	sub_8210E1F0(ctx, base);
	// li r8,7
	ctx.r8.s64 = 7;
	// stw r8,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r8.u32);
loc_8211B478:
	// lbzx r7,r31,r20
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r20.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8211b31c
	if (ctx.cr6.eq) goto loc_8211B31C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addis r6,r31,3
	ctx.r6.s64 = ctx.r31.s64 + 196608;
	// addi r4,r11,29112
	ctx.r4.s64 = ctx.r11.s64 + 29112;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,4096
	ctx.r7.s64 = 4096;
	// addi r6,r6,20656
	ctx.r6.s64 = ctx.r6.s64 + 20656;
	// add r5,r31,r19
	ctx.r5.u64 = ctx.r31.u64 + ctx.r19.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8210e1f0
	ctx.lr = 0x8211B4A8;
	sub_8210E1F0(ctx, base);
	// li r6,8
	ctx.r6.s64 = 8;
	// stw r6,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r6.u32);
loc_8211B4B0:
	// lbzx r5,r31,r19
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r19.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8211b31c
	if (ctx.cr6.eq) goto loc_8211B31C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8210cf48
	ctx.lr = 0x8211B4CC;
	sub_8210CF48(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// stwx r6,r31,r16
	PPC_STORE_U32(ctx.r31.u32 + ctx.r16.u32, ctx.r6.u32);
	// beq cr6,0x8211b31c
	if (ctx.cr6.eq) goto loc_8211B31C;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8210d3f0
	ctx.lr = 0x8211B4E8;
	sub_8210D3F0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r4,r11,29092
	ctx.r4.s64 = ctx.r11.s64 + 29092;
	// li r8,0
	ctx.r8.s64 = 0;
	// add r5,r31,r18
	ctx.r5.u64 = ctx.r31.u64 + ctx.r18.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8210e1f0
	ctx.lr = 0x8211B504;
	sub_8210E1F0(ctx, base);
	// li r4,9
	ctx.r4.s64 = 9;
	// stw r4,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r4.u32);
loc_8211B50C:
	// lbzx r3,r31,r18
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r18.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8211b31c
	if (ctx.cr6.eq) goto loc_8211B31C;
	// lis r11,3
	ctx.r11.s64 = 196608;
	// lwzx r3,r31,r16
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r16.u32);
	// ori r10,r11,12448
	ctx.r10.u64 = ctx.r11.u64 | 12448;
	// stwx r3,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r3.u32);
	// bl 0x822d4488
	ctx.lr = 0x8211B52C;
	sub_822D4488(ctx, base);
	// li r9,10
	ctx.r9.s64 = 10;
	// stw r9,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r9.u32);
loc_8211B534:
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82184970
	ctx.lr = 0x8211B53C;
	sub_82184970(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8211b31c
	if (ctx.cr6.eq) goto loc_8211B31C;
	// bl 0x8210b358
	ctx.lr = 0x8211B54C;
	sub_8210B358(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8211b56c
	if (!ctx.cr6.eq) goto loc_8211B56C;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r29,r11,13096
	ctx.r29.s64 = ctx.r11.s64 + 13096;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821016c8
	ctx.lr = 0x8211B568;
	sub_821016C8(ctx, base);
	// stw r29,6936(r29)
	PPC_STORE_U32(ctx.r29.u32 + 6936, ctx.r29.u32);
loc_8211B56C:
	// li r6,11
	ctx.r6.s64 = 11;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// stw r6,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r6.u32);
	// lfs f1,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82181ab8
	ctx.lr = 0x8211B584;
	sub_82181AB8(ctx, base);
loc_8211B584:
	// lis r5,7
	ctx.r5.s64 = 458752;
	// ori r4,r5,57692
	ctx.r4.u64 = ctx.r5.u64 | 57692;
	// lwzx r11,r15,r4
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + ctx.r4.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bge cr6,0x8211b5a0
	if (!ctx.cr6.lt) goto loc_8211B5A0;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x822cbeb8
	ctx.lr = 0x8211B5A0;
	sub_822CBEB8(ctx, base);
loc_8211B5A0:
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x822cc288
	ctx.lr = 0x8211B5A8;
	sub_822CC288(ctx, base);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8211b31c
	if (ctx.cr6.eq) goto loc_8211B31C;
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_8211B5BC:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// lfs f1,-4736(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4736);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82181ab8
	ctx.lr = 0x8211B5CC;
	sub_82181AB8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x8222e590
	ctx.lr = 0x8211B5D8;
	sub_8222E590(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8211b31c
	if (ctx.cr6.eq) goto loc_8211B31C;
	// li r9,13
	ctx.r9.s64 = 13;
	// stw r9,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r9.u32);
loc_8211B5EC:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r3,r11,14528
	ctx.r3.s64 = ctx.r11.s64 + 14528;
	// bl 0x821ff2d0
	ctx.lr = 0x8211B5F8;
	sub_821FF2D0(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r3,r11,11476
	ctx.r3.s64 = ctx.r11.s64 + 11476;
	// bl 0x821ffad0
	ctx.lr = 0x8211B604;
	sub_821FFAD0(ctx, base);
	// li r8,14
	ctx.r8.s64 = 14;
	// stw r8,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r8.u32);
loc_8211B60C:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r3,r11,10416
	ctx.r3.s64 = ctx.r11.s64 + 10416;
	// bl 0x822006b0
	ctx.lr = 0x8211B618;
	sub_822006B0(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8211b31c
	if (ctx.cr6.eq) goto loc_8211B31C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// lfs f1,12444(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12444);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82181ab8
	ctx.lr = 0x8211B634;
	sub_82181AB8(ctx, base);
	// li r6,15
	ctx.r6.s64 = 15;
	// stw r6,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r6.u32);
loc_8211B63C:
	// bl 0x8210b358
	ctx.lr = 0x8211B640;
	sub_8210B358(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8211b664
	if (!ctx.cr6.eq) goto loc_8211B664;
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r3,r11,-14944
	ctx.r3.s64 = ctx.r11.s64 + -14944;
	// bl 0x82116440
	ctx.lr = 0x8211B658;
	sub_82116440(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8211b31c
	if (ctx.cr6.eq) goto loc_8211B31C;
loc_8211B664:
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
loc_8211B66C:
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lwz r4,3328(r17)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r17.u32 + 3328);
	// li r3,0
	ctx.r3.s64 = 0;
	// lbz r11,6036(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6036);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8211b688
	if (!ctx.cr6.eq) goto loc_8211B688;
	// li r3,1
	ctx.r3.s64 = 1;
loc_8211B688:
	// bl 0x82361078
	ctx.lr = 0x8211B68C;
	sub_82361078(ctx, base);
	// addi r29,r31,92
	ctx.r29.s64 = ctx.r31.s64 + 92;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82363c80
	ctx.lr = 0x8211B698;
	sub_82363C80(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82370c88
	ctx.lr = 0x8211B6A0;
	sub_82370C88(ctx, base);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// addi r3,r11,-32560
	ctx.r3.s64 = ctx.r11.s64 + -32560;
	// bl 0x82101c38
	ctx.lr = 0x8211B6AC;
	sub_82101C38(ctx, base);
	// lis r11,-32110
	ctx.r11.s64 = -2104360960;
	// addi r3,r11,3336
	ctx.r3.s64 = ctx.r11.s64 + 3336;
	// bl 0x821737a8
	ctx.lr = 0x8211B6B8;
	sub_821737A8(ctx, base);
	// addis r3,r31,7
	ctx.r3.s64 = ctx.r31.s64 + 458752;
	// addi r3,r3,14496
	ctx.r3.s64 = ctx.r3.s64 + 14496;
	// bl 0x82114780
	ctx.lr = 0x8211B6C4;
	sub_82114780(ctx, base);
	// addis r29,r31,7
	ctx.r29.s64 = ctx.r31.s64 + 458752;
	// li r5,512
	ctx.r5.s64 = 512;
	// addi r29,r29,15320
	ctx.r29.s64 = ctx.r29.s64 + 15320;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8259d300
	ctx.lr = 0x8211B6DC;
	sub_8259D300(ctx, base);
	// addi r3,r31,4964
	ctx.r3.s64 = ctx.r31.s64 + 4964;
	// stw r28,540(r29)
	PPC_STORE_U32(ctx.r29.u32 + 540, ctx.r28.u32);
	// stw r28,544(r29)
	PPC_STORE_U32(ctx.r29.u32 + 544, ctx.r28.u32);
	// bl 0x82112580
	ctx.lr = 0x8211B6EC;
	sub_82112580(ctx, base);
	// addi r3,r31,20352
	ctx.r3.s64 = ctx.r31.s64 + 20352;
	// bl 0x82222858
	ctx.lr = 0x8211B6F4;
	sub_82222858(ctx, base);
	// addis r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 196608;
	// addi r7,r30,2585
	ctx.r7.s64 = ctx.r30.s64 + 2585;
	// addi r11,r11,-11504
	ctx.r11.s64 = ctx.r11.s64 + -11504;
	// addi r6,r30,1144
	ctx.r6.s64 = ctx.r30.s64 + 1144;
	// addis r10,r31,3
	ctx.r10.s64 = ctx.r31.s64 + 196608;
	// addi r5,r30,2585
	ctx.r5.s64 = ctx.r30.s64 + 2585;
	// addi r10,r10,-11468
	ctx.r10.s64 = ctx.r10.s64 + -11468;
	// lwz r25,24(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lis r3,7
	ctx.r3.s64 = 458752;
	// addi r8,r30,1144
	ctx.r8.s64 = ctx.r30.s64 + 1144;
	// extsb r25,r25
	ctx.r25.s64 = ctx.r25.s8;
	// ori r29,r3,16236
	ctx.r29.u64 = ctx.r3.u64 | 16236;
	// lis r3,7
	ctx.r3.s64 = 458752;
	// lis r4,7
	ctx.r4.s64 = 458752;
	// li r9,-1
	ctx.r9.s64 = -1;
	// lbzx r7,r25,r7
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r25.u32 + ctx.r7.u32);
	// ori r26,r3,16228
	ctx.r26.u64 = ctx.r3.u64 | 16228;
	// ori r4,r4,16232
	ctx.r4.u64 = ctx.r4.u64 | 16232;
	// extsb r7,r7
	ctx.r7.s64 = ctx.r7.s8;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// mulli r7,r7,360
	ctx.r7.s64 = ctx.r7.s64 * 360;
	// add r6,r7,r6
	ctx.r6.u64 = ctx.r7.u64 + ctx.r6.u64;
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// lfs f0,128(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// extsb r6,r11
	ctx.r6.s64 = ctx.r11.s8;
	// lbzx r5,r6,r5
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r5.u32);
	// extsb r11,r5
	ctx.r11.s64 = ctx.r5.s8;
	// mulli r11,r11,360
	ctx.r11.s64 = ctx.r11.s64 * 360;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lfs f0,128(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 28, temp.u32);
	// stwx r9,r31,r4
	PPC_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r9.u32);
	// stwx r9,r31,r29
	PPC_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r9.u32);
	// stwx r9,r31,r26
	PPC_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r9.u32);
	// bl 0x82115650
	ctx.lr = 0x8211B78C;
	sub_82115650(ctx, base);
	// lis r7,7
	ctx.r7.s64 = 458752;
	// lis r5,7
	ctx.r5.s64 = 458752;
	// ori r6,r7,16244
	ctx.r6.u64 = ctx.r7.u64 | 16244;
	// ori r4,r5,16245
	ctx.r4.u64 = ctx.r5.u64 | 16245;
	// lis r3,7
	ctx.r3.s64 = 458752;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// lis r8,7
	ctx.r8.s64 = 458752;
	// stbx r28,r31,r6
	PPC_STORE_U8(ctx.r31.u32 + ctx.r6.u32, ctx.r28.u8);
	// lis r6,7
	ctx.r6.s64 = 458752;
	// stbx r28,r31,r4
	PPC_STORE_U8(ctx.r31.u32 + ctx.r4.u32, ctx.r28.u8);
	// addi r29,r31,21744
	ctx.r29.s64 = ctx.r31.s64 + 21744;
	// lwz r4,2672(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2672);
	// ori r11,r3,16246
	ctx.r11.u64 = ctx.r3.u64 | 16246;
	// ori r9,r10,16247
	ctx.r9.u64 = ctx.r10.u64 | 16247;
	// ori r7,r8,16248
	ctx.r7.u64 = ctx.r8.u64 | 16248;
	// ori r5,r6,15873
	ctx.r5.u64 = ctx.r6.u64 | 15873;
	// lis r3,7
	ctx.r3.s64 = 458752;
	// stbx r28,r31,r11
	PPC_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r28.u8);
	// lis r10,7
	ctx.r10.s64 = 458752;
	// stbx r28,r31,r9
	PPC_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r28.u8);
	// ori r11,r3,16252
	ctx.r11.u64 = ctx.r3.u64 | 16252;
	// stbx r28,r31,r5
	PPC_STORE_U8(ctx.r31.u32 + ctx.r5.u32, ctx.r28.u8);
	// ori r9,r10,16256
	ctx.r9.u64 = ctx.r10.u64 | 16256;
	// stbx r28,r31,r7
	PPC_STORE_U8(ctx.r31.u32 + ctx.r7.u32, ctx.r28.u8);
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r5,r14,2700
	ctx.r5.s64 = ctx.r14.s64 + 2700;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stwx r23,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r23.u32);
	// stwx r8,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r8.u32);
	// bl 0x82350fd0
	ctx.lr = 0x8211B804;
	sub_82350FD0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// addi r4,r11,29076
	ctx.r4.s64 = ctx.r11.s64 + 29076;
	// addis r11,r30,7
	ctx.r11.s64 = ctx.r30.s64 + 458752;
	// ori r7,r7,8192
	ctx.r7.u64 = ctx.r7.u64 | 8192;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,16304
	ctx.r6.s64 = ctx.r11.s64 + 16304;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82351220
	ctx.lr = 0x8211B828;
	sub_82351220(ctx, base);
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// addi r3,r11,-1816
	ctx.r3.s64 = ctx.r11.s64 + -1816;
	// bl 0x820a63b8
	ctx.lr = 0x8211B834;
	sub_820A63B8(ctx, base);
	// bl 0x820ac4f0
	ctx.lr = 0x8211B838;
	sub_820AC4F0(ctx, base);
	// bl 0x82109af0
	ctx.lr = 0x8211B83C;
	sub_82109AF0(ctx, base);
	// bl 0x82123618
	ctx.lr = 0x8211B840;
	sub_82123618(ctx, base);
	// lis r7,7
	ctx.r7.s64 = 458752;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r6,r7,16276
	ctx.r6.u64 = ctx.r7.u64 | 16276;
	// stwx r23,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r23.u32);
	// bl 0x82113a78
	ctx.lr = 0x8211B854;
	sub_82113A78(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x822c1388
	ctx.lr = 0x8211B860;
	sub_822C1388(ctx, base);
	// addis r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 524288;
	// addi r3,r3,24504
	ctx.r3.s64 = ctx.r3.s64 + 24504;
	// bl 0x820fc018
	ctx.lr = 0x8211B86C;
	sub_820FC018(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r5,7
	ctx.r5.s64 = 458752;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// ori r4,r5,16220
	ctx.r4.u64 = ctx.r5.u64 | 16220;
	// lfs f1,-15112(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15112);
	ctx.f1.f64 = double(temp.f32);
	// addis r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 196608;
	// addi r11,r11,24760
	ctx.r11.s64 = ctx.r11.s64 + 24760;
	// stwx r11,r31,r4
	PPC_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r11.u32);
	// bl 0x82181ab8
	ctx.lr = 0x8211B890;
	sub_82181AB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82114318
	ctx.lr = 0x8211B898;
	sub_82114318(ctx, base);
	// lis r9,7
	ctx.r9.s64 = 458752;
	// lis r7,7
	ctx.r7.s64 = 458752;
	// li r10,28
	ctx.r10.s64 = 28;
	// ori r8,r9,16288
	ctx.r8.u64 = ctx.r9.u64 | 16288;
	// ori r6,r7,16284
	ctx.r6.u64 = ctx.r7.u64 | 16284;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// stwx r23,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r23.u32);
	// stwx r23,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r23.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x8259bb10
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8211B8C4"))) PPC_WEAK_FUNC(sub_8211B8C4);
PPC_FUNC_IMPL(__imp__sub_8211B8C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}


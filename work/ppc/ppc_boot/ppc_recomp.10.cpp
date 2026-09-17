#include "graphics_dispatch.h"
#include "ppc_recomp_shared.h"
__attribute__((alias("__imp__sub_8211B8C8"))) PPC_WEAK_FUNC(sub_8211B8C8);
__attribute__((alias("__imp__sub_8211BEE0"))) PPC_WEAK_FUNC(sub_8211BEE0);
__attribute__((alias("__imp__sub_8211BFE8"))) PPC_WEAK_FUNC(sub_8211BFE8);
__attribute__((alias("__imp__sub_8211C520"))) PPC_WEAK_FUNC(sub_8211C520);
__attribute__((alias("__imp__sub_8211C620"))) PPC_WEAK_FUNC(sub_8211C620);
__attribute__((alias("__imp__sub_8211C808"))) PPC_WEAK_FUNC(sub_8211C808);
__attribute__((alias("__imp__sub_8211C978"))) PPC_WEAK_FUNC(sub_8211C978);
__attribute__((alias("__imp__sub_8211CA00"))) PPC_WEAK_FUNC(sub_8211CA00);
__attribute__((alias("__imp__sub_8211CAC0"))) PPC_WEAK_FUNC(sub_8211CAC0);
__attribute__((alias("__imp__sub_8211CDD8"))) PPC_WEAK_FUNC(sub_8211CDD8);
__attribute__((alias("__imp__sub_8211E310"))) PPC_WEAK_FUNC(sub_8211E310);
__attribute__((alias("__imp__sub_8211F330"))) PPC_WEAK_FUNC(sub_8211F330);
__attribute__((alias("__imp__sub_8211F3B8"))) PPC_WEAK_FUNC(sub_8211F3B8);
__attribute__((alias("__imp__sub_8211F448"))) PPC_WEAK_FUNC(sub_8211F448);
__attribute__((alias("__imp__sub_8211F460"))) PPC_WEAK_FUNC(sub_8211F460);
__attribute__((alias("__imp__sub_8211F4D8"))) PPC_WEAK_FUNC(sub_8211F4D8);
__attribute__((alias("__imp__sub_8211F620"))) PPC_WEAK_FUNC(sub_8211F620);
__attribute__((alias("__imp__sub_8211F830"))) PPC_WEAK_FUNC(sub_8211F830);
__attribute__((alias("__imp__sub_8211FA28"))) PPC_WEAK_FUNC(sub_8211FA28);
__attribute__((alias("__imp__sub_82120AA0"))) PPC_WEAK_FUNC(sub_82120AA0);
__attribute__((alias("__imp__sub_82120AC0"))) PPC_WEAK_FUNC(sub_82120AC0);
__attribute__((alias("__imp__sub_82120BB0"))) PPC_WEAK_FUNC(sub_82120BB0);
__attribute__((alias("__imp__sub_82120CA8"))) PPC_WEAK_FUNC(sub_82120CA8);
__attribute__((alias("__imp__sub_82121768"))) PPC_WEAK_FUNC(sub_82121768);
__attribute__((alias("__imp__sub_82123618"))) PPC_WEAK_FUNC(sub_82123618);
__attribute__((alias("__imp__sub_82123688"))) PPC_WEAK_FUNC(sub_82123688);
__attribute__((alias("__imp__sub_82124158"))) PPC_WEAK_FUNC(sub_82124158);
__attribute__((alias("__imp__sub_82124160"))) PPC_WEAK_FUNC(sub_82124160);
__attribute__((alias("__imp__sub_82126DB8"))) PPC_WEAK_FUNC(sub_82126DB8);
PPC_FUNC_IMPL(__imp__sub_8211B8C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x8211B8D0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 17, ctx.xer);
	// bgt cr6,0x8211bed8
	if (ctx.cr6.gt) goto loc_8211BED8;
	// lis r12,-32238
	ctx.r12.s64 = -2112749568;
	// addi r12,r12,-18180
	ctx.r12.s64 = ctx.r12.s64 + -18180;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8211B944;
	case 1:
		goto loc_8211B954;
	case 2:
		goto loc_8211B9BC;
	case 3:
		goto loc_8211BA18;
	case 4:
		goto loc_8211BA28;
	case 5:
		goto loc_8211BA28;
	case 6:
		goto loc_8211BAE8;
	case 7:
		goto loc_8211BBA8;
	case 8:
		goto loc_8211BC14;
	case 9:
		goto loc_8211BCAC;
	case 10:
		goto loc_8211BDB4;
	case 11:
		goto loc_8211BE20;
	case 12:
		goto loc_8211BED8;
	case 13:
		goto loc_8211BED8;
	case 14:
		goto loc_8211BED8;
	case 15:
		goto loc_8211BE40;
	case 16:
		goto loc_8211BE8C;
	case 17:
		goto loc_8211BED0;
	default:
		__builtin_unreachable();
	}
	// lwz r16,-18108(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -18108);
	// lwz r16,-18092(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -18092);
	// lwz r16,-17988(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -17988);
	// lwz r16,-17896(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -17896);
	// lwz r16,-17880(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -17880);
	// lwz r16,-17880(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -17880);
	// lwz r16,-17688(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -17688);
	// lwz r16,-17496(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -17496);
	// lwz r16,-17388(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -17388);
	// lwz r16,-17236(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -17236);
	// lwz r16,-16972(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -16972);
	// lwz r16,-16864(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -16864);
	// lwz r16,-16680(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -16680);
	// lwz r16,-16680(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -16680);
	// lwz r16,-16680(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -16680);
	// lwz r16,-16832(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -16832);
	// lwz r16,-16756(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -16756);
	// lwz r16,-16688(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -16688);
loc_8211B944:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_8211B954:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r4,r31,52
	ctx.r4.s64 = ctx.r31.s64 + 52;
	// ori r9,r10,9448
	ctx.r9.u64 = ctx.r10.u64 | 9448;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwzx r3,r31,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// stb r8,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r8.u8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8211b97c
	if (ctx.cr6.eq) goto loc_8211B97C;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// bl 0x82361bd8
	ctx.lr = 0x8211B97C;
	sub_82361BD8(ctx, base);
loc_8211B97C:
	// lis r4,1
	ctx.r4.s64 = 65536;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// li r5,1
	ctx.r5.s64 = 1;
	// ori r11,r4,9412
	ctx.r11.u64 = ctx.r4.u64 | 9412;
	// ori r9,r10,9408
	ctx.r9.u64 = ctx.r10.u64 | 9408;
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
	ctx.lr = 0x8211B9AC;
	sub_82105B30(ctx, base);
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_8211B9BC:
	// lbz r7,1414(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1414);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8211b9d0
	if (ctx.cr6.eq) goto loc_8211B9D0;
	// li r11,-1
	ctx.r11.s64 = -1;
	// b 0x8211b9dc
	goto loc_8211B9DC;
loc_8211B9D0:
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r11,1432(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1432);
	// stw r6,1432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1432, ctx.r6.u32);
loc_8211B9DC:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8211ba00
	if (ctx.cr6.lt) goto loc_8211BA00;
	// bne cr6,0x8211bed8
	if (!ctx.cr6.eq) goto loc_8211BED8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82105d30
	ctx.lr = 0x8211B9F0;
	sub_82105D30(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r5,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r5.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_8211BA00:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82105d30
	ctx.lr = 0x8211BA08;
	sub_82105D30(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r4,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r4.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_8211BA18:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821057e8
	ctx.lr = 0x8211BA20;
	sub_821057E8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_8211BA28:
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r11,r11,13096
	ctx.r11.s64 = ctx.r11.s64 + 13096;
	// lwz r3,6936(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6936);
	// bl 0x821016c8
	ctx.lr = 0x8211BA38;
	sub_821016C8(ctx, base);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r3,7
	ctx.r3.s64 = 458752;
	// addi r30,r11,26080
	ctx.r30.s64 = ctx.r11.s64 + 26080;
	// ori r11,r3,14715
	ctx.r11.u64 = ctx.r3.u64 | 14715;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lbzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// addis r11,r30,7
	ctx.r11.s64 = ctx.r30.s64 + 458752;
	// addi r3,r11,14496
	ctx.r3.s64 = ctx.r11.s64 + 14496;
	// bl 0x8210d6c0
	ctx.lr = 0x8211BA5C;
	sub_8210D6C0(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,56(r30)
	PPC_STORE_U8(ctx.r30.u32 + 56, ctx.r11.u8);
	// stb r10,41(r30)
	PPC_STORE_U8(ctx.r30.u32 + 41, ctx.r10.u8);
	// lbz r9,1412(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1412);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8211ba90
	if (ctx.cr6.eq) goto loc_8211BA90;
	// bl 0x82105d30
	ctx.lr = 0x8211BA80;
	sub_82105D30(ctx, base);
	// li r8,8
	ctx.r8.s64 = 8;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_8211BA90:
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// ori r5,r7,9488
	ctx.r5.u64 = ctx.r7.u64 | 9488;
	// ori r11,r4,9484
	ctx.r11.u64 = ctx.r4.u64 | 9484;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwzx r5,r31,r5
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// lwzx r4,r31,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// bl 0x82105918
	ctx.lr = 0x8211BAB0;
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
	ctx.lr = 0x8211BAD8;
	sub_82105B30(ctx, base);
	// li r3,6
	ctx.r3.s64 = 6;
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_8211BAE8:
	// lbz r11,1414(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1414);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211bafc
	if (ctx.cr6.eq) goto loc_8211BAFC;
	// li r11,-1
	ctx.r11.s64 = -1;
	// b 0x8211bb08
	goto loc_8211BB08;
loc_8211BAFC:
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r11,1432(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1432);
	// stw r10,1432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1432, ctx.r10.u32);
loc_8211BB08:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8211bb78
	if (ctx.cr6.lt) goto loc_8211BB78;
	// bne cr6,0x8211bed8
	if (!ctx.cr6.eq) goto loc_8211BED8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82105d30
	ctx.lr = 0x8211BB1C;
	sub_82105D30(ctx, base);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// ori r8,r9,9496
	ctx.r8.u64 = ctx.r9.u64 | 9496;
	// ori r4,r7,9492
	ctx.r4.u64 = ctx.r7.u64 | 9492;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r5,r31,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// lwzx r4,r31,r4
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	// bl 0x82105918
	ctx.lr = 0x8211BB40;
	sub_82105918(ctx, base);
	// lis r3,1
	ctx.r3.s64 = 65536;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r11,r3,9440
	ctx.r11.u64 = ctx.r3.u64 | 9440;
	// ori r9,r10,9436
	ctx.r9.u64 = ctx.r10.u64 | 9436;
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
	// bl 0x82105b30
	ctx.lr = 0x8211BB68;
	sub_82105B30(ctx, base);
	// li r8,7
	ctx.r8.s64 = 7;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_8211BB78:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82105d30
	ctx.lr = 0x8211BB80;
	sub_82105D30(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// li r7,8
	ctx.r7.s64 = 8;
	// stb r10,58(r11)
	PPC_STORE_U8(ctx.r11.u32 + 58, ctx.r10.u8);
	// stb r30,1420(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1420, ctx.r30.u8);
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_8211BBA8:
	// lbz r6,1414(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1414);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8211bbbc
	if (ctx.cr6.eq) goto loc_8211BBBC;
	// li r11,-1
	ctx.r11.s64 = -1;
	// b 0x8211bbc8
	goto loc_8211BBC8;
loc_8211BBBC:
	// li r5,-1
	ctx.r5.s64 = -1;
	// lwz r11,1432(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1432);
	// stw r5,1432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1432, ctx.r5.u32);
loc_8211BBC8:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8211bbec
	if (ctx.cr6.lt) goto loc_8211BBEC;
	// bne cr6,0x8211bed8
	if (!ctx.cr6.eq) goto loc_8211BED8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82105d30
	ctx.lr = 0x8211BBDC;
	sub_82105D30(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r4,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r4.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_8211BBEC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82105d30
	ctx.lr = 0x8211BBF4;
	sub_82105D30(ctx, base);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// li r3,8
	ctx.r3.s64 = 8;
	// stb r10,58(r11)
	PPC_STORE_U8(ctx.r11.u32 + 58, ctx.r10.u8);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_8211BC14:
	// lbz r11,1413(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1413);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8211bed8
	if (!ctx.cr6.eq) goto loc_8211BED8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r11,12328
	ctx.r30.s64 = ctx.r11.s64 + 12328;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r4,r30,-32
	ctx.r4.s64 = ctx.r30.s64 + -32;
	// addi r29,r11,23504
	ctx.r29.s64 = ctx.r11.s64 + 23504;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8210fcf8
	ctx.lr = 0x8211BC3C;
	sub_8210FCF8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r30,-60
	ctx.r4.s64 = ctx.r30.s64 + -60;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8210fcf8
	ctx.lr = 0x8211BC4C;
	sub_8210FCF8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8210fcf8
	ctx.lr = 0x8211BC5C;
	sub_8210FCF8(ctx, base);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// lis r4,12288
	ctx.r4.s64 = 805306368;
	// addis r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 458752;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// addi r9,r9,24928
	ctx.r9.s64 = ctx.r9.s64 + 24928;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r5,9
	ctx.r5.s64 = 9;
	// ori r4,r4,100
	ctx.r4.u64 = ctx.r4.u64 | 100;
	// addi r3,r11,15320
	ctx.r3.s64 = ctx.r11.s64 + 15320;
	// bl 0x8210d978
	ctx.lr = 0x8211BC94;
	sub_8210D978(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,9
	ctx.r9.s64 = 9;
	// stb r10,1423(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1423, ctx.r10.u8);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_8211BCAC:
	// lbz r11,1417(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1417);
	// li r30,1
	ctx.r30.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211bcc8
	if (ctx.cr6.eq) goto loc_8211BCC8;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stb r9,1417(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1417, ctx.r9.u8);
loc_8211BCC8:
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8211bed8
	if (ctx.cr6.eq) goto loc_8211BED8;
	// addi r11,r31,2008
	ctx.r11.s64 = ctx.r31.s64 + 2008;
	// stb r9,1423(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1423, ctx.r9.u8);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8211BCE0:
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8211bce0
	if (!ctx.cr6.eq) goto loc_8211BCE0;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8211bd2c
	if (!ctx.cr6.eq) goto loc_8211BD2C;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// bne cr6,0x8211bd20
	if (!ctx.cr6.eq) goto loc_8211BD20;
	// li r3,4
	ctx.r3.s64 = 4;
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_8211BD20:
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_8211BD2C:
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// li r10,11
	ctx.r10.s64 = 11;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lbz r11,58(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 58);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8211bed8
	if (!ctx.cr6.eq) goto loc_8211BED8;
	// lbz r8,1412(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1412);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8211bda8
	if (!ctx.cr6.eq) goto loc_8211BDA8;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// addi r4,r31,52
	ctx.r4.s64 = ctx.r31.s64 + 52;
	// ori r6,r7,9516
	ctx.r6.u64 = ctx.r7.u64 | 9516;
	// stb r9,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r9.u8);
	// lwzx r3,r31,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8211bd78
	if (ctx.cr6.eq) goto loc_8211BD78;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// bl 0x82361bd8
	ctx.lr = 0x8211BD78;
	sub_82361BD8(ctx, base);
loc_8211BD78:
	// lis r5,1
	ctx.r5.s64 = 65536;
	// stb r30,1413(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1413, ctx.r30.u8);
	// lis r3,1
	ctx.r3.s64 = 65536;
	// ori r4,r5,9440
	ctx.r4.u64 = ctx.r5.u64 | 9440;
	// ori r11,r3,9436
	ctx.r11.u64 = ctx.r3.u64 | 9436;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r5,r31,r4
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	// lwzx r4,r31,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// bl 0x82105b30
	ctx.lr = 0x8211BDA4;
	sub_82105B30(ctx, base);
	// li r10,10
	ctx.r10.s64 = 10;
loc_8211BDA8:
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_8211BDB4:
	// lbz r9,1414(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1414);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8211bdc8
	if (ctx.cr6.eq) goto loc_8211BDC8;
	// li r11,-1
	ctx.r11.s64 = -1;
	// b 0x8211bdd4
	goto loc_8211BDD4;
loc_8211BDC8:
	// li r8,-1
	ctx.r8.s64 = -1;
	// lwz r11,1432(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1432);
	// stw r8,1432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1432, ctx.r8.u32);
loc_8211BDD4:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8211be00
	if (ctx.cr6.lt) goto loc_8211BE00;
	// bne cr6,0x8211bed8
	if (!ctx.cr6.eq) goto loc_8211BED8;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r7,1422(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1422, ctx.r7.u8);
	// bl 0x82105d30
	ctx.lr = 0x8211BDF0;
	sub_82105D30(ctx, base);
	// li r6,11
	ctx.r6.s64 = 11;
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_8211BE00:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r5,1422(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1422, ctx.r5.u8);
	// bl 0x82105d30
	ctx.lr = 0x8211BE10;
	sub_82105D30(ctx, base);
	// li r4,11
	ctx.r4.s64 = 11;
	// stw r4,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r4.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_8211BE20:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82118f68
	ctx.lr = 0x8211BE28;
	sub_82118F68(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8211bed8
	if (ctx.cr6.eq) goto loc_8211BED8;
	// li r3,15
	ctx.r3.s64 = 15;
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_8211BE40:
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// lbz r11,58(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 58);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8211be60
	if (!ctx.cr6.eq) goto loc_8211BE60;
	// lbz r10,1422(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1422);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8211be7c
	if (ctx.cr6.eq) goto loc_8211BE7C;
loc_8211BE60:
	// lbz r9,1412(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1412);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8211be7c
	if (!ctx.cr6.eq) goto loc_8211BE7C;
	// li r8,16
	ctx.r8.s64 = 16;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_8211BE7C:
	// li r7,17
	ctx.r7.s64 = 17;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_8211BE8C:
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r11,r31,2267
	ctx.r11.s64 = ctx.r31.s64 + 2267;
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r6,1440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1440, ctx.r6.u32);
loc_8211BEA0:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stb r9,-3(r11)
	PPC_STORE_U8(ctx.r11.u32 + -3, ctx.r9.u8);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8211bea0
	if (!ctx.cr6.eq) goto loc_8211BEA0;
	// li r5,3
	ctx.r5.s64 = 3;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// stb r9,1416(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1416, ctx.r9.u8);
	// stw r5,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r5.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_8211BED0:
	// li r4,1
	ctx.r4.s64 = 1;
	// stb r4,1416(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1416, ctx.r4.u8);
loc_8211BED8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_8211BEE0) {
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
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// bne cr6,0x8211bf28
	if (!ctx.cr6.eq) goto loc_8211BF28;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r4,r31,1272
	ctx.r4.s64 = ctx.r31.s64 + 1272;
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// bl 0x8259d2a0
	ctx.lr = 0x8211BF0C;
	sub_8259D2A0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,1413(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1413, ctx.r11.u8);
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
loc_8211BF28:
	// add r11,r4,r31
	ctx.r11.u64 = ctx.r4.u64 + ctx.r31.u64;
	// lbz r10,2264(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2264);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8211bfa4
	if (ctx.cr6.eq) goto loc_8211BFA4;
	// lbz r9,2267(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2267);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8211bf60
	if (!ctx.cr6.eq) goto loc_8211BF60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82118b10
	ctx.lr = 0x8211BF4C;
	sub_82118B10(ctx, base);
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
loc_8211BF60:
	// lis r8,1
	ctx.r8.s64 = 65536;
	// addi r4,r31,52
	ctx.r4.s64 = ctx.r31.s64 + 52;
	// ori r7,r8,9604
	ctx.r7.u64 = ctx.r8.u64 | 9604;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwzx r3,r31,r7
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// stb r6,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r6.u8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8211bf88
	if (ctx.cr6.eq) goto loc_8211BF88;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// bl 0x82361bd8
	ctx.lr = 0x8211BF88;
	sub_82361BD8(ctx, base);
loc_8211BF88:
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r5,1413(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1413, ctx.r5.u8);
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
loc_8211BFA4:
	// lis r4,1
	ctx.r4.s64 = 65536;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r3,r4,9608
	ctx.r3.u64 = ctx.r4.u64 | 9608;
	// addi r4,r31,52
	ctx.r4.s64 = ctx.r31.s64 + 52;
	// lwzx r3,r31,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8211bfcc
	if (ctx.cr6.eq) goto loc_8211BFCC;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// bl 0x82361bd8
	ctx.lr = 0x8211BFCC;
	sub_82361BD8(ctx, base);
loc_8211BFCC:
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,1413(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1413, ctx.r10.u8);
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
PPC_FUNC_IMPL(__imp__sub_8211BFE8) {
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
	// addi r30,r11,26752
	ctx.r30.s64 = ctx.r11.s64 + 26752;
	// addi r3,r30,2896
	ctx.r3.s64 = ctx.r30.s64 + 2896;
	// bl 0x82366c90
	ctx.lr = 0x8211C010;
	sub_82366C90(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x8211c078
	if (ctx.cr6.lt) goto loc_8211C078;
	// beq cr6,0x8211c05c
	if (ctx.cr6.eq) goto loc_8211C05C;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// bge cr6,0x8211c070
	if (!ctx.cr6.lt) goto loc_8211C070;
	// lwz r11,13440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13440);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// lwz r9,12136(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12136);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// rlwinm r11,r11,14,0,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0xFFFFC000;
	// addi r5,r10,12688
	ctx.r5.s64 = ctx.r10.s64 + 12688;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r3,r31,12344
	ctx.r3.s64 = ctx.r31.s64 + 12344;
	// addi r4,r11,12396
	ctx.r4.s64 = ctx.r11.s64 + 12396;
	// lbz r10,12555(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12555);
	// andi. r9,r10,253
	ctx.r9.u64 = ctx.r10.u64 & 253;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stb r9,12555(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12555, ctx.r9.u8);
	// bl 0x8211a018
	ctx.lr = 0x8211C058;
	sub_8211A018(ctx, base);
	// b 0x8211c070
	goto loc_8211C070;
loc_8211C05C:
	// addi r3,r30,2896
	ctx.r3.s64 = ctx.r30.s64 + 2896;
	// bl 0x82367a40
	ctx.lr = 0x8211C064;
	sub_82367A40(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82109240
	ctx.lr = 0x8211C070;
	sub_82109240(ctx, base);
loc_8211C070:
	// li r8,0
	ctx.r8.s64 = 0;
	// stb r8,13453(r31)
	PPC_STORE_U8(ctx.r31.u32 + 13453, ctx.r8.u8);
loc_8211C078:
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
PPC_FUNC_IMPL(__imp__sub_8211C520) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae8
	ctx.lr = 0x8211C528;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8211c54c
	if (ctx.cr6.eq) goto loc_8211C54C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,13456(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13456, ctx.r11.u32);
	// stb r11,13448(r28)
	PPC_STORE_U8(ctx.r28.u32 + 13448, ctx.r11.u8);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
loc_8211C54C:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// ori r9,r10,26384
	ctx.r9.u64 = ctx.r10.u64 | 26384;
	// lwzx r29,r11,r9
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x8211c578
	if (!ctx.cr6.eq) goto loc_8211C578;
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r8,13448(r28)
	PPC_STORE_U8(ctx.r28.u32 + 13448, ctx.r8.u8);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
loc_8211C578:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82228c60
	ctx.lr = 0x8211C584;
	sub_82228C60(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x8211c60c
	if (!ctx.cr6.gt) goto loc_8211C60C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r24,r28,11504
	ctx.r24.s64 = ctx.r28.s64 + 11504;
	// addi r27,r11,3672
	ctx.r27.s64 = ctx.r11.s64 + 3672;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r31,r28,11648
	ctx.r31.s64 = ctx.r28.s64 + 11648;
	// addi r26,r11,13884
	ctx.r26.s64 = ctx.r11.s64 + 13884;
	// li r25,0
	ctx.r25.s64 = 0;
loc_8211C5A8:
	// li r5,36
	ctx.r5.s64 = 36;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// bl 0x8259d2a0
	ctx.lr = 0x8211C5BC;
	sub_8259D2A0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stb r25,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, ctx.r25.u8);
	// bl 0x8259dbe0
	ctx.lr = 0x8211C5CC;
	sub_8259DBE0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8259dbe0
	ctx.lr = 0x8211C5D8;
	sub_8259DBE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8211c5e8
	if (ctx.cr6.eq) goto loc_8211C5E8;
	// bl 0x8259dbd0
	ctx.lr = 0x8211C5E4;
	sub_8259DBD0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_8211C5E8:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82222220
	ctx.lr = 0x8211C5FC;
	sub_82222220(ctx, base);
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// addi r31,r31,128
	ctx.r31.s64 = ctx.r31.s64 + 128;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8211c5a8
	if (!ctx.cr6.eq) goto loc_8211C5A8;
loc_8211C60C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82119f98
	ctx.lr = 0x8211C614;
	sub_82119F98(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_8211C620) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baec
	ctx.lr = 0x8211C628;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r11,11476(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11476);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8211c7a4
	if (ctx.cr6.eq) goto loc_8211C7A4;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8211c800
	if (!ctx.cr6.eq) goto loc_8211C800;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r30,r11,26752
	ctx.r30.s64 = ctx.r11.s64 + 26752;
	// addi r3,r30,2896
	ctx.r3.s64 = ctx.r30.s64 + 2896;
	// bl 0x82366c90
	ctx.lr = 0x8211C654;
	sub_82366C90(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8211c78c
	if (ctx.cr6.eq) goto loc_8211C78C;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x8211c800
	if (!ctx.cr6.eq) goto loc_8211C800;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r3,r30,2896
	ctx.r3.s64 = ctx.r30.s64 + 2896;
	// stw r31,11476(r27)
	PPC_STORE_U32(ctx.r27.u32 + 11476, ctx.r31.u32);
	// stw r31,12140(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12140, ctx.r31.u32);
	// bl 0x823693c0
	ctx.lr = 0x8211C678;
	sub_823693C0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x8211c694
	if (!ctx.cr6.eq) goto loc_8211C694;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,13448(r27)
	PPC_STORE_U8(ctx.r27.u32 + 13448, ctx.r11.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
loc_8211C694:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82228c60
	ctx.lr = 0x8211C6A0;
	sub_82228C60(ctx, base);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x8211c77c
	if (!ctx.cr6.gt) goto loc_8211C77C;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r25,r11,-6648
	ctx.r25.s64 = ctx.r11.s64 + -6648;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r28,r11,26080
	ctx.r28.s64 = ctx.r11.s64 + 26080;
loc_8211C6B8:
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,2896
	ctx.r3.s64 = ctx.r30.s64 + 2896;
	// bl 0x82369240
	ctx.lr = 0x8211C6D0;
	sub_82369240(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259dbd0
	ctx.lr = 0x8211C6D8;
	sub_8259DBD0(ctx, base);
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,2896
	ctx.r3.s64 = ctx.r30.s64 + 2896;
	// bl 0x82369240
	ctx.lr = 0x8211C6F0;
	sub_82369240(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259dbd0
	ctx.lr = 0x8211C6F8;
	sub_8259DBD0(ctx, base);
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,2896
	ctx.r3.s64 = ctx.r30.s64 + 2896;
	// bl 0x82369240
	ctx.lr = 0x8211C710;
	sub_82369240(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259dbd0
	ctx.lr = 0x8211C718;
	sub_8259DBD0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,2896
	ctx.r3.s64 = ctx.r30.s64 + 2896;
	// bl 0x82369240
	ctx.lr = 0x8211C734;
	sub_82369240(ctx, base);
	// addis r11,r28,7
	ctx.r11.s64 = ctx.r28.s64 + 458752;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,14496
	ctx.r3.s64 = ctx.r11.s64 + 14496;
	// bl 0x8210d818
	ctx.lr = 0x8211C744;
	sub_8210D818(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8211c75c
	if (ctx.cr6.eq) goto loc_8211C75C;
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x820fe130
	ctx.lr = 0x8211C75C;
	sub_820FE130(ctx, base);
loc_8211C75C:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82222220
	ctx.lr = 0x8211C770;
	sub_82222220(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r26
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x8211c6b8
	if (ctx.cr6.lt) goto loc_8211C6B8;
loc_8211C77C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82119f98
	ctx.lr = 0x8211C784;
	sub_82119F98(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
loc_8211C78C:
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r3,r30,2896
	ctx.r3.s64 = ctx.r30.s64 + 2896;
	// stw r9,11476(r27)
	PPC_STORE_U32(ctx.r27.u32 + 11476, ctx.r9.u32);
	// bl 0x82367a40
	ctx.lr = 0x8211C79C;
	sub_82367A40(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
loc_8211C7A4:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r31,r11,26752
	ctx.r31.s64 = ctx.r11.s64 + 26752;
	// addi r3,r31,2896
	ctx.r3.s64 = ctx.r31.s64 + 2896;
	// bl 0x82366c90
	ctx.lr = 0x8211C7B4;
	sub_82366C90(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8211c7f0
	if (ctx.cr6.eq) goto loc_8211C7F0;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x8211c800
	if (!ctx.cr6.eq) goto loc_8211C800;
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,2896
	ctx.r3.s64 = ctx.r31.s64 + 2896;
	// bl 0x8236ea38
	ctx.lr = 0x8211C7E0;
	sub_8236EA38(ctx, base);
	// li r8,5
	ctx.r8.s64 = 5;
	// stw r8,11476(r27)
	PPC_STORE_U32(ctx.r27.u32 + 11476, ctx.r8.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
loc_8211C7F0:
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r3,r31,2896
	ctx.r3.s64 = ctx.r31.s64 + 2896;
	// stw r7,11476(r27)
	PPC_STORE_U32(ctx.r27.u32 + 11476, ctx.r7.u32);
	// bl 0x82367a40
	ctx.lr = 0x8211C800;
	sub_82367A40(ctx, base);
loc_8211C800:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_8211C808) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x8211C810;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lbz r30,2(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x8211c838
	if (!ctx.cr6.eq) goto loc_8211C838;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,13448(r29)
	PPC_STORE_U8(ctx.r29.u32 + 13448, ctx.r11.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_8211C838:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82228c60
	ctx.lr = 0x8211C844;
	sub_82228C60(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x8211c878
	if (!ctx.cr6.gt) goto loc_8211C878;
	// addi r31,r31,40
	ctx.r31.s64 = ctx.r31.s64 + 40;
loc_8211C850:
	// lbz r10,17(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17);
	// addi r6,r31,-36
	ctx.r6.s64 = ctx.r31.s64 + -36;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// extsb r5,r10
	ctx.r5.s64 = ctx.r10.s8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82222220
	ctx.lr = 0x8211C868;
	sub_82222220(ctx, base);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r31,r31,184
	ctx.r31.s64 = ctx.r31.s64 + 184;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8211c850
	if (!ctx.cr6.eq) goto loc_8211C850;
loc_8211C878:
	// lwz r31,12136(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12136);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,27
	ctx.r8.s64 = 27;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r9,12544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12544, ctx.r9.u32);
	// stw r8,12440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12440, ctx.r8.u32);
	// bl 0x82360f10
	ctx.lr = 0x8211C894;
	sub_82360F10(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82364000
	ctx.lr = 0x8211C8A0;
	sub_82364000(ctx, base);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r6,7
	ctx.r6.s64 = 458752;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// ori r5,r6,16271
	ctx.r5.u64 = ctx.r6.u64 | 16271;
	// stw r7,12444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12444, ctx.r7.u32);
	// lbzx r4,r11,r5
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// addi r11,r11,11600
	ctx.r11.s64 = ctx.r11.s64 + 11600;
	// beq cr6,0x8211c8e4
	if (ctx.cr6.eq) goto loc_8211C8E4;
	// lwz r10,552(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 552);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8211c8e4
	if (ctx.cr6.eq) goto loc_8211C8E4;
	// ld r3,24(r10)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r10.u32 + 24);
	// std r3,12448(r31)
	PPC_STORE_U64(ctx.r31.u32 + 12448, ctx.r3.u64);
	// b 0x8211c8fc
	goto loc_8211C8FC;
loc_8211C8E4:
	// lis r10,-32085
	ctx.r10.s64 = -2102722560;
	// lis r9,34
	ctx.r9.s64 = 2228224;
	// addi r10,r10,28544
	ctx.r10.s64 = ctx.r10.s64 + 28544;
	// ori r8,r9,36952
	ctx.r8.u64 = ctx.r9.u64 | 36952;
	// ldx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r8.u32);
	// std r10,12448(r31)
	PPC_STORE_U64(ctx.r31.u32 + 12448, ctx.r10.u64);
loc_8211C8FC:
	// lwz r11,320(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 320);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// stw r11,12456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12456, ctx.r11.u32);
	// std r30,12432(r31)
	PPC_STORE_U64(ctx.r31.u32 + 12432, ctx.r30.u64);
	// bl 0x82360f10
	ctx.lr = 0x8211C914;
	sub_82360F10(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82364000
	ctx.lr = 0x8211C920;
	sub_82364000(ctx, base);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r31,12556
	ctx.r11.s64 = ctx.r31.s64 + 12556;
	// sth r30,12552(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12552, ctx.r30.u16);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stb r30,12555(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12555, ctx.r30.u8);
	// li r5,128
	ctx.r5.s64 = 128;
	// stb r30,12554(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12554, ctx.r30.u8);
	// addi r4,r10,3672
	ctx.r4.s64 = ctx.r10.s64 + 3672;
	// stw r30,12684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12684, ctx.r30.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r7,12548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12548, ctx.r7.u32);
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// stb r30,12688(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12688, ctx.r30.u8);
	// bl 0x8259d2a0
	ctx.lr = 0x8211C958;
	sub_8259D2A0(ctx, base);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-25912
	ctx.r5.s64 = ctx.r11.s64 + -25912;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8222fad8
	ctx.lr = 0x8211C970;
	sub_8222FAD8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_8211C978) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8211c9bc
	if (!ctx.cr6.eq) goto loc_8211C9BC;
	// addi r31,r30,13540
	ctx.r31.s64 = ctx.r30.s64 + 13540;
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8211c9b0
	if (ctx.cr6.eq) goto loc_8211C9B0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8211C9B0:
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8211c9d8
	if (!ctx.cr6.eq) goto loc_8211C9D8;
loc_8211C9BC:
	// addi r31,r30,13540
	ctx.r31.s64 = ctx.r30.s64 + 13540;
	// li r5,924
	ctx.r5.s64 = 924;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259d300
	ctx.lr = 0x8211C9D0;
	sub_8259D300(ctx, base);
	// li r8,5
	ctx.r8.s64 = 5;
	// sth r8,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r8.u16);
loc_8211C9D8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8211c808
	ctx.lr = 0x8211C9E4;
	sub_8211C808(ctx, base);
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
PPC_FUNC_IMPL(__imp__sub_8211CA00) {
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
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// bl 0x82109620
	ctx.lr = 0x8211CA18;
	sub_82109620(ctx, base);
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r6,944(r8)
	PPC_STORE_U32(ctx.r8.u32 + 944, ctx.r6.u32);
	// addi r10,r4,12396
	ctx.r10.s64 = ctx.r4.s64 + 12396;
	// mulli r7,r11,184
	ctx.r7.s64 = ctx.r11.s64 * 184;
	// stw r5,940(r8)
	PPC_STORE_U32(ctx.r8.u32 + 940, ctx.r5.u32);
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// addi r11,r7,4
	ctx.r11.s64 = ctx.r7.s64 + 4;
	// li r9,9
	ctx.r9.s64 = 9;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// stw r6,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r6.u32);
	// stb r31,53(r11)
	PPC_STORE_U8(ctx.r11.u32 + 53, ctx.r31.u8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8211CA50:
	// lwz r3,0(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8211ca50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8211CA50;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// stw r4,1092(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1092, ctx.r4.u32);
	// lis r10,7
	ctx.r10.s64 = 458752;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// ori r9,r10,14715
	ctx.r9.u64 = ctx.r10.u64 | 14715;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lbzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// addis r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 458752;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// addi r9,r11,14538
	ctx.r9.s64 = ctx.r11.s64 + 14538;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r8,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bl 0x8211a0c0
	ctx.lr = 0x8211CAA8;
	sub_8211A0C0(ctx, base);
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
PPC_FUNC_IMPL(__imp__sub_8211CAC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bacc
	ctx.lr = 0x8211CAC8;
	__savegprlr_17(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,16424
	ctx.r11.s64 = ctx.r11.s64 + 16424;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r11.u32);
	// addi r3,r31,20444
	ctx.r3.s64 = ctx.r31.s64 + 20444;
	// stw r11,704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 704, ctx.r11.u32);
	// stw r11,924(r31)
	PPC_STORE_U32(ctx.r31.u32 + 924, ctx.r11.u32);
	// bl 0x82400230
	ctx.lr = 0x8211CB08;
	sub_82400230(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addis r29,r31,3
	ctx.r29.s64 = ctx.r31.s64 + 196608;
	// addi r11,r11,16444
	ctx.r11.s64 = ctx.r11.s64 + 16444;
	// addi r29,r29,-11424
	ctx.r29.s64 = ctx.r29.s64 + -11424;
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r11,21748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21748, ctx.r11.u32);
loc_8211CB20:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8211a750
	ctx.lr = 0x8211CB28;
	sub_8211A750(ctx, base);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r29,r29,11920
	ctx.r29.s64 = ctx.r29.s64 + 11920;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x8211cb20
	if (!ctx.cr6.lt) goto loc_8211CB20;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addis r6,r31,3
	ctx.r6.s64 = ctx.r31.s64 + 196608;
	// addi r26,r11,17980
	ctx.r26.s64 = ctx.r11.s64 + 17980;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addis r29,r31,3
	ctx.r29.s64 = ctx.r31.s64 + 196608;
	// addi r25,r11,17324
	ctx.r25.s64 = ctx.r11.s64 + 17324;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r6,r6,24760
	ctx.r6.s64 = ctx.r6.s64 + 24760;
	// addi r24,r11,16132
	ctx.r24.s64 = ctx.r11.s64 + 16132;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addis r28,r31,3
	ctx.r28.s64 = ctx.r31.s64 + 196608;
	// addi r23,r11,16168
	ctx.r23.s64 = ctx.r11.s64 + 16168;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r26,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r26.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r25,24(r6)
	PPC_STORE_U32(ctx.r6.u32 + 24, ctx.r25.u32);
	// addi r22,r11,16204
	ctx.r22.s64 = ctx.r11.s64 + 16204;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addis r27,r31,3
	ctx.r27.s64 = ctx.r31.s64 + 196608;
	// addi r29,r29,24840
	ctx.r29.s64 = ctx.r29.s64 + 24840;
	// addi r21,r11,18016
	ctx.r21.s64 = ctx.r11.s64 + 18016;
	// addis r5,r31,3
	ctx.r5.s64 = ctx.r31.s64 + 196608;
	// addi r28,r28,24860
	ctx.r28.s64 = ctx.r28.s64 + 24860;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r27,r27,24888
	ctx.r27.s64 = ctx.r27.s64 + 24888;
	// stw r24,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r24.u32);
	// addi r20,r10,18544
	ctx.r20.s64 = ctx.r10.s64 + 18544;
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// addis r4,r31,3
	ctx.r4.s64 = ctx.r31.s64 + 196608;
	// stw r23,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r23.u32);
	// addi r5,r5,24944
	ctx.r5.s64 = ctx.r5.s64 + 24944;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r22,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r22.u32);
	// addi r11,r11,17352
	ctx.r11.s64 = ctx.r11.s64 + 17352;
	// addis r9,r31,3
	ctx.r9.s64 = ctx.r31.s64 + 196608;
	// addi r4,r4,27936
	ctx.r4.s64 = ctx.r4.s64 + 27936;
	// addi r19,r3,19080
	ctx.r19.s64 = ctx.r3.s64 + 19080;
	// stw r21,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r21.u32);
	// lis r30,-32255
	ctx.r30.s64 = -2113863680;
	// addi r10,r10,17380
	ctx.r10.s64 = ctx.r10.s64 + 17380;
	// stw r11,2444(r5)
	PPC_STORE_U32(ctx.r5.u32 + 2444, ctx.r11.u32);
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// addi r9,r9,31424
	ctx.r9.s64 = ctx.r9.s64 + 31424;
	// stw r20,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r20.u32);
	// addis r8,r31,4
	ctx.r8.s64 = ctx.r31.s64 + 262144;
	// addi r18,r30,19616
	ctx.r18.s64 = ctx.r30.s64 + 19616;
	// addi r3,r3,17408
	ctx.r3.s64 = ctx.r3.s64 + 17408;
	// stw r10,2736(r4)
	PPC_STORE_U32(ctx.r4.u32 + 2736, ctx.r10.u32);
	// lis r30,-32255
	ctx.r30.s64 = -2113863680;
	// addi r8,r8,-31056
	ctx.r8.s64 = ctx.r8.s64 + -31056;
	// stw r11,2444(r9)
	PPC_STORE_U32(ctx.r9.u32 + 2444, ctx.r11.u32);
	// addis r7,r31,4
	ctx.r7.s64 = ctx.r31.s64 + 262144;
	// stw r19,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r19.u32);
	// addi r30,r30,17436
	ctx.r30.s64 = ctx.r30.s64 + 17436;
	// lis r17,-32255
	ctx.r17.s64 = -2113863680;
	// stw r3,3004(r9)
	PPC_STORE_U32(ctx.r9.u32 + 3004, ctx.r3.u32);
	// addi r7,r7,-27920
	ctx.r7.s64 = ctx.r7.s64 + -27920;
	// stw r11,2444(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2444, ctx.r11.u32);
	// addi r17,r17,20152
	ctx.r17.s64 = ctx.r17.s64 + 20152;
	// stw r18,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r18.u32);
	// addis r6,r31,4
	ctx.r6.s64 = ctx.r31.s64 + 262144;
	// stw r30,2992(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2992, ctx.r30.u32);
	// addis r9,r31,4
	ctx.r9.s64 = ctx.r31.s64 + 262144;
	// addis r5,r31,4
	ctx.r5.s64 = ctx.r31.s64 + 262144;
	// addis r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 262144;
	// stw r11,2444(r7)
	PPC_STORE_U32(ctx.r7.u32 + 2444, ctx.r11.u32);
	// addis r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 262144;
	// stw r17,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r17.u32);
	// addis r28,r31,4
	ctx.r28.s64 = ctx.r31.s64 + 262144;
	// addis r8,r31,4
	ctx.r8.s64 = ctx.r31.s64 + 262144;
	// addis r27,r31,4
	ctx.r27.s64 = ctx.r31.s64 + 262144;
	// lis r26,-32255
	ctx.r26.s64 = -2113863680;
	// addi r6,r6,-24816
	ctx.r6.s64 = ctx.r6.s64 + -24816;
	// addi r9,r9,-21792
	ctx.r9.s64 = ctx.r9.s64 + -21792;
	// addi r5,r5,-18752
	ctx.r5.s64 = ctx.r5.s64 + -18752;
	// addi r4,r4,-15264
	ctx.r4.s64 = ctx.r4.s64 + -15264;
	// addi r29,r29,-11776
	ctx.r29.s64 = ctx.r29.s64 + -11776;
	// addi r28,r28,-8288
	ctx.r28.s64 = ctx.r28.s64 + -8288;
	// addi r8,r8,-1728
	ctx.r8.s64 = ctx.r8.s64 + -1728;
	// addi r27,r27,1344
	ctx.r27.s64 = ctx.r27.s64 + 1344;
	// addi r26,r26,20688
	ctx.r26.s64 = ctx.r26.s64 + 20688;
	// lis r25,-32255
	ctx.r25.s64 = -2113863680;
	// stw r30,2992(r7)
	PPC_STORE_U32(ctx.r7.u32 + 2992, ctx.r30.u32);
	// lis r24,-32255
	ctx.r24.s64 = -2113863680;
	// stw r11,2444(r6)
	PPC_STORE_U32(ctx.r6.u32 + 2444, ctx.r11.u32);
	// addi r25,r25,21216
	ctx.r25.s64 = ctx.r25.s64 + 21216;
	// stw r26,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r26.u32);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// stw r11,2444(r9)
	PPC_STORE_U32(ctx.r9.u32 + 2444, ctx.r11.u32);
	// addi r24,r24,17464
	ctx.r24.s64 = ctx.r24.s64 + 17464;
	// lis r30,-32255
	ctx.r30.s64 = -2113863680;
	// addi r7,r7,21744
	ctx.r7.s64 = ctx.r7.s64 + 21744;
	// lis r23,-32255
	ctx.r23.s64 = -2113863680;
	// stw r25,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r25.u32);
	// addi r30,r30,22280
	ctx.r30.s64 = ctx.r30.s64 + 22280;
	// lis r22,-32255
	ctx.r22.s64 = -2113863680;
	// stw r24,2992(r9)
	PPC_STORE_U32(ctx.r9.u32 + 2992, ctx.r24.u32);
	// addi r23,r23,22816
	ctx.r23.s64 = ctx.r23.s64 + 22816;
	// stw r10,2736(r5)
	PPC_STORE_U32(ctx.r5.u32 + 2736, ctx.r10.u32);
	// stw r7,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r7.u32);
	// addi r22,r22,23352
	ctx.r22.s64 = ctx.r22.s64 + 23352;
	// lis r21,-32255
	ctx.r21.s64 = -2113863680;
	// stw r10,2736(r4)
	PPC_STORE_U32(ctx.r4.u32 + 2736, ctx.r10.u32);
	// stw r30,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r30.u32);
	// lis r20,-32255
	ctx.r20.s64 = -2113863680;
	// stw r10,2736(r29)
	PPC_STORE_U32(ctx.r29.u32 + 2736, ctx.r10.u32);
	// addi r21,r21,23880
	ctx.r21.s64 = ctx.r21.s64 + 23880;
	// stw r23,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r23.u32);
	// addi r20,r20,24416
	ctx.r20.s64 = ctx.r20.s64 + 24416;
	// stw r11,2444(r28)
	PPC_STORE_U32(ctx.r28.u32 + 2444, ctx.r11.u32);
	// addis r9,r31,4
	ctx.r9.s64 = ctx.r31.s64 + 262144;
	// stw r22,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r22.u32);
	// addis r7,r31,4
	ctx.r7.s64 = ctx.r31.s64 + 262144;
	// stw r11,2444(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2444, ctx.r11.u32);
	// addi r9,r9,7088
	ctx.r9.s64 = ctx.r9.s64 + 7088;
	// stw r3,3004(r8)
	PPC_STORE_U32(ctx.r8.u32 + 3004, ctx.r3.u32);
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// stw r21,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r21.u32);
	// addis r8,r31,4
	ctx.r8.s64 = ctx.r31.s64 + 262144;
	// stw r11,2444(r27)
	PPC_STORE_U32(ctx.r27.u32 + 2444, ctx.r11.u32);
	// addis r6,r31,4
	ctx.r6.s64 = ctx.r31.s64 + 262144;
	// stw r20,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r20.u32);
	// addi r27,r3,27472
	ctx.r27.s64 = ctx.r3.s64 + 27472;
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// stw r10,2736(r9)
	PPC_STORE_U32(ctx.r9.u32 + 2736, ctx.r10.u32);
	// addi r8,r8,12704
	ctx.r8.s64 = ctx.r8.s64 + 12704;
	// addi r26,r3,28008
	ctx.r26.s64 = ctx.r3.s64 + 28008;
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// addi r7,r7,18064
	ctx.r7.s64 = ctx.r7.s64 + 18064;
	// stw r27,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r27.u32);
	// addi r25,r3,28544
	ctx.r25.s64 = ctx.r3.s64 + 28544;
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// stw r10,2736(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2736, ctx.r10.u32);
	// addis r5,r31,4
	ctx.r5.s64 = ctx.r31.s64 + 262144;
	// stw r26,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r26.u32);
	// addi r24,r3,24944
	ctx.r24.s64 = ctx.r3.s64 + 24944;
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// stw r10,2736(r7)
	PPC_STORE_U32(ctx.r7.u32 + 2736, ctx.r10.u32);
	// addi r6,r6,23424
	ctx.r6.s64 = ctx.r6.s64 + 23424;
	// stw r25,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r25.u32);
	// addi r23,r3,16240
	ctx.r23.s64 = ctx.r3.s64 + 16240;
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// addi r5,r5,25856
	ctx.r5.s64 = ctx.r5.s64 + 25856;
	// addi r22,r3,16276
	ctx.r22.s64 = ctx.r3.s64 + 16276;
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// stw r24,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r24.u32);
	// addis r4,r31,5
	ctx.r4.s64 = ctx.r31.s64 + 327680;
	// stw r11,2388(r6)
	PPC_STORE_U32(ctx.r6.u32 + 2388, ctx.r11.u32);
	// addi r21,r3,16312
	ctx.r21.s64 = ctx.r3.s64 + 16312;
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// stw r23,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r23.u32);
	// addis r30,r31,6
	ctx.r30.s64 = ctx.r31.s64 + 393216;
	// addi r20,r3,16356
	ctx.r20.s64 = ctx.r3.s64 + 16356;
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// addis r29,r31,7
	ctx.r29.s64 = ctx.r31.s64 + 458752;
	// addis r28,r31,7
	ctx.r28.s64 = ctx.r31.s64 + 458752;
	// addi r19,r3,16400
	ctx.r19.s64 = ctx.r3.s64 + 16400;
	// addi r4,r4,6600
	ctx.r4.s64 = ctx.r4.s64 + 6600;
	// addi r30,r30,-12656
	ctx.r30.s64 = ctx.r30.s64 + -12656;
	// addi r29,r29,-31896
	ctx.r29.s64 = ctx.r29.s64 + -31896;
	// addi r28,r28,14496
	ctx.r28.s64 = ctx.r28.s64 + 14496;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r22,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r22.u32);
	// stw r21,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r21.u32);
	// stw r20,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r20.u32);
	// stw r19,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r19.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8259bb1c
	__restgprlr_17(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_8211CDD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae0
	ctx.lr = 0x8211CDE0;
	__savegprlr_22(ctx, base);
	// stwu r1,-736(r1)
	ea = -736 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 31, ctx.xer);
	// bgt cr6,0x8211e2fc
	if (ctx.cr6.gt) goto loc_8211E2FC;
	// lis r12,-32238
	ctx.r12.s64 = -2112749568;
	// addi r12,r12,-12788
	ctx.r12.s64 = ctx.r12.s64 + -12788;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8211CE8C;
	case 1:
		goto loc_8211CE9C;
	case 2:
		goto loc_8211CEEC;
	case 3:
		goto loc_8211CF0C;
	case 4:
		goto loc_8211D02C;
	case 5:
		goto loc_8211D09C;
	case 6:
		goto loc_8211D0F4;
	case 7:
		goto loc_8211D1D8;
	case 8:
		goto loc_8211D460;
	case 9:
		goto loc_8211D55C;
	case 10:
		goto loc_8211D608;
	case 11:
		goto loc_8211D644;
	case 12:
		goto loc_8211D67C;
	case 13:
		goto loc_8211D918;
	case 14:
		goto loc_8211D9C8;
	case 15:
		goto loc_8211D9E4;
	case 16:
		goto loc_8211E2FC;
	case 17:
		goto loc_8211DC1C;
	case 18:
		goto loc_8211E154;
	case 19:
		goto loc_8211DA08;
	case 20:
		goto loc_8211DAF0;
	case 21:
		goto loc_8211DC48;
	case 22:
		goto loc_8211DCFC;
	case 23:
		goto loc_8211DD38;
	case 24:
		goto loc_8211DD98;
	case 25:
		goto loc_8211DEF8;
	case 26:
		goto loc_8211DFE8;
	case 27:
		goto loc_8211E110;
	case 28:
		goto loc_8211E18C;
	case 29:
		goto loc_8211E1C0;
	case 30:
		goto loc_8211E22C;
	case 31:
		goto loc_8211E2C4;
	default:
		__builtin_unreachable();
	}
	// lwz r16,-12660(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -12660);
	// lwz r16,-12644(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -12644);
	// lwz r16,-12564(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -12564);
	// lwz r16,-12532(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -12532);
	// lwz r16,-12244(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -12244);
	// lwz r16,-12132(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -12132);
	// lwz r16,-12044(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -12044);
	// lwz r16,-11816(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -11816);
	// lwz r16,-11168(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -11168);
	// lwz r16,-10916(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -10916);
	// lwz r16,-10744(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -10744);
	// lwz r16,-10684(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -10684);
	// lwz r16,-10628(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -10628);
	// lwz r16,-9960(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -9960);
	// lwz r16,-9784(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -9784);
	// lwz r16,-9756(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -9756);
	// lwz r16,-7428(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -7428);
	// lwz r16,-9188(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -9188);
	// lwz r16,-7852(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -7852);
	// lwz r16,-9720(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -9720);
	// lwz r16,-9488(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -9488);
	// lwz r16,-9144(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -9144);
	// lwz r16,-8964(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -8964);
	// lwz r16,-8904(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -8904);
	// lwz r16,-8808(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -8808);
	// lwz r16,-8456(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -8456);
	// lwz r16,-8216(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -8216);
	// lwz r16,-7920(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -7920);
	// lwz r16,-7796(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -7796);
	// lwz r16,-7744(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -7744);
	// lwz r16,-7636(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -7636);
	// lwz r16,-7484(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -7484);
loc_8211CE8C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8211CE9C:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-24936
	ctx.r11.s64 = ctx.r11.s64 + -24936;
	// addi r3,r11,8376
	ctx.r3.s64 = ctx.r11.s64 + 8376;
	// stw r10,1076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1076, ctx.r10.u32);
	// bl 0x82208310
	ctx.lr = 0x8211CEB4;
	sub_82208310(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8211cedc
	if (ctx.cr6.eq) goto loc_8211CEDC;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,22532
	ctx.r3.s64 = ctx.r31.s64 + 22532;
	// bl 0x82360620
	ctx.lr = 0x8211CECC;
	sub_82360620(ctx, base);
	// li r8,6
	ctx.r8.s64 = 6;
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8211CEDC:
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r7,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8211CEEC:
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r3,r31,22532
	ctx.r3.s64 = ctx.r31.s64 + 22532;
	// stw r6,1076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1076, ctx.r6.u32);
	// bl 0x82363178
	ctx.lr = 0x8211CEFC;
	sub_82363178(ctx, base);
	// li r5,3
	ctx.r5.s64 = 3;
	// stw r5,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r5.u32);
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8211CF0C:
	// addi r30,r31,22532
	ctx.r30.s64 = ctx.r31.s64 + 22532;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82362fc0
	ctx.lr = 0x8211CF18;
	sub_82362FC0(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8211cf2c
	if (ctx.cr6.eq) goto loc_8211CF2C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82105e78
	ctx.lr = 0x8211CF2C;
	sub_82105E78(ctx, base);
loc_8211CF2C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82362f20
	ctx.lr = 0x8211CF34;
	sub_82362F20(ctx, base);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8211e304
	if (ctx.cr6.eq) goto loc_8211E304;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r11,22548(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22548);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// stw r27,1076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1076, ctx.r27.u32);
	// bgt cr6,0x8211e304
	if (ctx.cr6.gt) goto loc_8211E304;
	// lis r12,-32238
	ctx.r12.s64 = -2112749568;
	// addi r12,r12,-12436
	ctx.r12.s64 = ctx.r12.s64 + -12436;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8211CFF8;
	case 1:
		goto loc_8211CFE8;
	case 2:
		goto loc_8211CFF8;
	case 3:
		goto loc_8211CFF8;
	case 4:
		goto loc_8211CF80;
	default:
		__builtin_unreachable();
	}
	// lwz r16,-12296(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -12296);
	// lwz r16,-12312(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -12312);
	// lwz r16,-12296(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -12296);
	// lwz r16,-12296(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -12296);
	// lwz r16,-12416(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -12416);
loc_8211CF80:
	// addis r26,r31,1
	ctx.r26.s64 = ctx.r31.s64 + 65536;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// addi r26,r26,9416
	ctx.r26.s64 = ctx.r26.s64 + 9416;
	// addi r29,r31,1612
	ctx.r29.s64 = ctx.r31.s64 + 1612;
	// addi r28,r31,1624
	ctx.r28.s64 = ctx.r31.s64 + 1624;
	// addi r25,r31,2264
	ctx.r25.s64 = ctx.r31.s64 + 2264;
	// addi r24,r11,3672
	ctx.r24.s64 = ctx.r11.s64 + 3672;
loc_8211CFA0:
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8259d2a0
	ctx.lr = 0x8211CFB0;
	sub_8259D2A0(ctx, base);
	// li r5,64
	ctx.r5.s64 = 64;
	// stbx r27,r25,r30
	PPC_STORE_U8(ctx.r25.u32 + ctx.r30.u32, ctx.r27.u8);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// bl 0x82361bd8
	ctx.lr = 0x8211CFC4;
	sub_82361BD8(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r28,r28,64
	ctx.r28.s64 = ctx.r28.s64 + 64;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// blt cr6,0x8211cfa0
	if (ctx.cr6.lt) goto loc_8211CFA0;
	// li r11,13
	ctx.r11.s64 = 13;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8211CFE8:
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8211CFF8:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r11,r11,-24936
	ctx.r11.s64 = ctx.r11.s64 + -24936;
	// addi r3,r11,8376
	ctx.r3.s64 = ctx.r11.s64 + 8376;
	// bl 0x82208310
	ctx.lr = 0x8211D008;
	sub_82208310(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8211d01c
	if (ctx.cr6.eq) goto loc_8211D01C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82360680
	ctx.lr = 0x8211D01C;
	sub_82360680(ctx, base);
loc_8211D01C:
	// li r8,6
	ctx.r8.s64 = 6;
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8211D02C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82105d30
	ctx.lr = 0x8211D034;
	sub_82105D30(ctx, base);
	// lis r7,1
	ctx.r7.s64 = 65536;
	// addi r4,r31,52
	ctx.r4.s64 = ctx.r31.s64 + 52;
	// ori r6,r7,9556
	ctx.r6.u64 = ctx.r7.u64 | 9556;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwzx r3,r31,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// stb r5,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r5.u8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8211d05c
	if (ctx.cr6.eq) goto loc_8211D05C;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// bl 0x82361bd8
	ctx.lr = 0x8211D05C;
	sub_82361BD8(ctx, base);
loc_8211D05C:
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
	ctx.lr = 0x8211D08C;
	sub_82105B30(ctx, base);
	// li r8,5
	ctx.r8.s64 = 5;
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8211D09C:
	// lbz r7,1414(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1414);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8211d0b0
	if (ctx.cr6.eq) goto loc_8211D0B0;
	// li r11,-1
	ctx.r11.s64 = -1;
	// b 0x8211d0bc
	goto loc_8211D0BC;
loc_8211D0B0:
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r11,1432(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1432);
	// stw r6,1432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1432, ctx.r6.u32);
loc_8211D0BC:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8211d0d8
	if (ctx.cr6.lt) goto loc_8211D0D8;
	// bne cr6,0x8211e304
	if (!ctx.cr6.eq) goto loc_8211E304;
	// li r5,29
	ctx.r5.s64 = 29;
	// stw r5,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r5.u32);
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8211D0D8:
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,22532
	ctx.r3.s64 = ctx.r31.s64 + 22532;
	// bl 0x82360620
	ctx.lr = 0x8211D0E4;
	sub_82360620(ctx, base);
	// li r4,6
	ctx.r4.s64 = 6;
	// stw r4,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r4.u32);
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8211D0F4:
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r3,7
	ctx.r3.s64 = 458752;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// ori r10,r3,14718
	ctx.r10.u64 = ctx.r3.u64 | 14718;
	// lbzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// beq cr6,0x8211e304
	if (ctx.cr6.eq) goto loc_8211E304;
	// lbz r8,1412(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1412);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8211d1a4
	if (ctx.cr6.eq) goto loc_8211D1A4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82105d30
	ctx.lr = 0x8211D124;
	sub_82105D30(ctx, base);
	// lis r7,1
	ctx.r7.s64 = 65536;
	// addi r6,r31,1408
	ctx.r6.s64 = ctx.r31.s64 + 1408;
	// ori r5,r7,9520
	ctx.r5.u64 = ctx.r7.u64 | 9520;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// li r3,256
	ctx.r3.s64 = 256;
	// lwzx r5,r31,r5
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// bl 0x8210d9f8
	ctx.lr = 0x8211D140;
	sub_8210D9F8(ctx, base);
	// addi r4,r31,52
	ctx.r4.s64 = ctx.r31.s64 + 52;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// bl 0x82361bd8
	ctx.lr = 0x8211D158;
	sub_82361BD8(ctx, base);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r4,r7,9524
	ctx.r4.u64 = ctx.r7.u64 | 9524;
	// ori r8,r9,9464
	ctx.r8.u64 = ctx.r9.u64 | 9464;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r10,1413(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1413, ctx.r10.u8);
	// lwzx r4,r31,r4
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	// lwzx r5,r31,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// bl 0x82105b30
	ctx.lr = 0x8211D188;
	sub_82105B30(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,22532
	ctx.r3.s64 = ctx.r31.s64 + 22532;
	// bl 0x82360620
	ctx.lr = 0x8211D194;
	sub_82360620(ctx, base);
	// li r3,9
	ctx.r3.s64 = 9;
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8211D1A4:
	// addi r3,r31,22532
	ctx.r3.s64 = ctx.r31.s64 + 22532;
	// lwz r11,1480(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1480);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,84(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8211D1C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r8,7
	ctx.r8.s64 = 7;
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8211D1D8:
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r7,7
	ctx.r7.s64 = 458752;
	// addi r30,r11,26080
	ctx.r30.s64 = ctx.r11.s64 + 26080;
	// ori r6,r7,14718
	ctx.r6.u64 = ctx.r7.u64 | 14718;
	// addi r23,r31,22532
	ctx.r23.s64 = ctx.r31.s64 + 22532;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lbzx r5,r30,r6
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r6.u32);
	// cntlzw r4,r5
	ctx.r4.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// rlwinm r11,r4,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// stw r11,1076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1076, ctx.r11.u32);
	// bl 0x82362fc0
	ctx.lr = 0x8211D204;
	sub_82362FC0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8211d218
	if (ctx.cr6.eq) goto loc_8211D218;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82105e78
	ctx.lr = 0x8211D218;
	sub_82105E78(ctx, base);
loc_8211D218:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82362f20
	ctx.lr = 0x8211D220;
	sub_82362F20(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8211e304
	if (ctx.cr6.eq) goto loc_8211E304;
	// lis r8,7
	ctx.r8.s64 = 458752;
	// ori r7,r8,14718
	ctx.r7.u64 = ctx.r8.u64 | 14718;
	// lbzx r6,r30,r7
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r7.u32);
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// beq cr6,0x8211e304
	if (ctx.cr6.eq) goto loc_8211E304;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stw r27,1076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1076, ctx.r27.u32);
	// bl 0x82360698
	ctx.lr = 0x8211D250;
	sub_82360698(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8211d280
	if (ctx.cr6.eq) goto loc_8211D280;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82360620
	ctx.lr = 0x8211D268;
	sub_82360620(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82363b30
	ctx.lr = 0x8211D274;
	sub_82363B30(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82363b20
	ctx.lr = 0x8211D280;
	sub_82363B20(ctx, base);
loc_8211D280:
	// lwz r4,22552(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22552);
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x8211d2b0
	if (!ctx.cr6.eq) goto loc_8211D2B0;
	// lwz r11,22548(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22548);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8211d2a0
	if (ctx.cr6.eq) goto loc_8211D2A0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8211d2b0
	if (!ctx.cr6.eq) goto loc_8211D2B0;
loc_8211D2A0:
	// li r3,28
	ctx.r3.s64 = 28;
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8211D2B0:
	// lwz r11,22548(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22548);
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bgt cr6,0x8211e304
	if (ctx.cr6.gt) goto loc_8211E304;
	// lis r12,-32238
	ctx.r12.s64 = -2112749568;
	// addi r12,r12,-11564
	ctx.r12.s64 = ctx.r12.s64 + -11564;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8211D450;
	case 1:
		goto loc_8211E17C;
	case 2:
		goto loc_8211E17C;
	case 3:
		goto loc_8211D37C;
	case 4:
		goto loc_8211E304;
	case 5:
		goto loc_8211E304;
	case 6:
		goto loc_8211E304;
	case 7:
		goto loc_8211E17C;
	case 8:
		goto loc_8211E304;
	case 9:
		goto loc_8211D304;
	case 10:
		goto loc_8211E304;
	case 11:
		goto loc_8211E17C;
	default:
		__builtin_unreachable();
	}
	// lwz r16,-11184(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -11184);
	// lwz r16,-7812(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -7812);
	// lwz r16,-7812(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -7812);
	// lwz r16,-11396(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -11396);
	// lwz r16,-7420(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -7420);
	// lwz r16,-7420(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -7420);
	// lwz r16,-7420(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -7420);
	// lwz r16,-7812(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -7812);
	// lwz r16,-7420(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -7420);
	// lwz r16,-11516(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -11516);
	// lwz r16,-7420(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -7420);
	// lwz r16,-7812(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -7812);
loc_8211D304:
	// addis r26,r31,1
	ctx.r26.s64 = ctx.r31.s64 + 65536;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// addi r26,r26,9416
	ctx.r26.s64 = ctx.r26.s64 + 9416;
	// addi r29,r31,1612
	ctx.r29.s64 = ctx.r31.s64 + 1612;
	// addi r28,r31,1624
	ctx.r28.s64 = ctx.r31.s64 + 1624;
	// addi r25,r31,2264
	ctx.r25.s64 = ctx.r31.s64 + 2264;
	// addi r24,r11,3672
	ctx.r24.s64 = ctx.r11.s64 + 3672;
loc_8211D324:
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8259d2a0
	ctx.lr = 0x8211D334;
	sub_8259D2A0(ctx, base);
	// li r5,64
	ctx.r5.s64 = 64;
	// stbx r27,r25,r30
	PPC_STORE_U8(ctx.r25.u32 + ctx.r30.u32, ctx.r27.u8);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// bl 0x82361bd8
	ctx.lr = 0x8211D348;
	sub_82361BD8(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r28,r28,64
	ctx.r28.s64 = ctx.r28.s64 + 64;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// blt cr6,0x8211d324
	if (ctx.cr6.lt) goto loc_8211D324;
	// lwz r11,1480(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1480);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x823632e8
	ctx.lr = 0x8211D36C;
	sub_823632E8(ctx, base);
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8211D37C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82105d30
	ctx.lr = 0x8211D384;
	sub_82105D30(ctx, base);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// addi r4,r31,52
	ctx.r4.s64 = ctx.r31.s64 + 52;
	// ori r8,r9,9568
	ctx.r8.u64 = ctx.r9.u64 | 9568;
	// stb r27,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r27.u8);
	// lwzx r3,r31,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8211d3a8
	if (ctx.cr6.eq) goto loc_8211D3A8;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// bl 0x82361bd8
	ctx.lr = 0x8211D3A8;
	sub_82361BD8(ctx, base);
loc_8211D3A8:
	// lis r7,1
	ctx.r7.s64 = 65536;
	// stw r27,1400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1400, ctx.r27.u32);
	// li r23,1
	ctx.r23.s64 = 1;
	// ori r6,r7,9428
	ctx.r6.u64 = ctx.r7.u64 | 9428;
	// addi r30,r31,1080
	ctx.r30.s64 = ctx.r31.s64 + 1080;
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stb r23,1413(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1413, ctx.r23.u8);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lwzx r3,r31,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
loc_8211D3D0:
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
	// bne cr6,0x8211d3d0
	if (!ctx.cr6.eq) goto loc_8211D3D0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8211d408
	if (ctx.cr6.eq) goto loc_8211D408;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82361bd8
	ctx.lr = 0x8211D3FC;
	sub_82361BD8(ctx, base);
	// lwz r11,1400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1400);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stw r5,1400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1400, ctx.r5.u32);
loc_8211D408:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8211D410:
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8211d410
	if (!ctx.cr6.eq) goto loc_8211D410;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r3,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211d438
	if (ctx.cr6.eq) goto loc_8211D438;
	// stb r23,1414(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1414, ctx.r23.u8);
loc_8211D438:
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,18
	ctx.r10.s64 = 18;
	// stw r11,1432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1432, ctx.r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8211D450:
	// li r8,11
	ctx.r8.s64 = 11;
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8211D460:
	// addi r30,r31,22532
	ctx.r30.s64 = ctx.r31.s64 + 22532;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82362fc0
	ctx.lr = 0x8211D46C;
	sub_82362FC0(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8211d480
	if (ctx.cr6.eq) goto loc_8211D480;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82105e78
	ctx.lr = 0x8211D480;
	sub_82105E78(ctx, base);
loc_8211D480:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82362f20
	ctx.lr = 0x8211D488;
	sub_82362F20(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8211e304
	if (ctx.cr6.eq) goto loc_8211E304;
	// lwz r11,22548(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22548);
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bgt cr6,0x8211e304
	if (ctx.cr6.gt) goto loc_8211E304;
	// lis r12,-32238
	ctx.r12.s64 = -2112749568;
	// addi r12,r12,-11080
	ctx.r12.s64 = ctx.r12.s64 + -11080;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8211D4E8;
	case 1:
		goto loc_8211D530;
	case 2:
		goto loc_8211D530;
	case 3:
		goto loc_8211D530;
	case 4:
		goto loc_8211E304;
	case 5:
		goto loc_8211E304;
	case 6:
		goto loc_8211E304;
	case 7:
		goto loc_8211E304;
	case 8:
		goto loc_8211E304;
	case 9:
		goto loc_8211E304;
	case 10:
		goto loc_8211E304;
	case 11:
		goto loc_8211D4F8;
	default:
		__builtin_unreachable();
	}
	// lwz r16,-11032(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -11032);
	// lwz r16,-10960(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -10960);
	// lwz r16,-10960(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -10960);
	// lwz r16,-10960(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -10960);
	// lwz r16,-7420(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -7420);
	// lwz r16,-7420(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -7420);
	// lwz r16,-7420(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -7420);
	// lwz r16,-7420(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -7420);
	// lwz r16,-7420(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -7420);
	// lwz r16,-7420(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -7420);
	// lwz r16,-7420(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -7420);
	// lwz r16,-11016(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -11016);
loc_8211D4E8:
	// li r5,13
	ctx.r5.s64 = 13;
	// stw r5,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r5.u32);
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8211D4F8:
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// li r4,29
	ctx.r4.s64 = 29;
	// stb r27,1420(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1420, ctx.r27.u8);
	// stb r27,58(r11)
	PPC_STORE_U8(ctx.r11.u32 + 58, ctx.r27.u8);
	// lwz r3,22552(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22552);
	// stw r4,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r4.u32);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x8211e304
	if (!ctx.cr6.eq) goto loc_8211E304;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8211D530:
	// lwz r10,22552(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22552);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8211d54c
	if (!ctx.cr6.eq) goto loc_8211D54C;
	// li r9,29
	ctx.r9.s64 = 29;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8211D54C:
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8211D55C:
	// lbz r7,1414(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1414);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8211d570
	if (ctx.cr6.eq) goto loc_8211D570;
	// li r11,-1
	ctx.r11.s64 = -1;
	// b 0x8211d57c
	goto loc_8211D57C;
loc_8211D570:
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r11,1432(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1432);
	// stw r6,1432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1432, ctx.r6.u32);
loc_8211D57C:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8211d598
	if (ctx.cr6.lt) goto loc_8211D598;
	// bne cr6,0x8211e304
	if (!ctx.cr6.eq) goto loc_8211E304;
	// li r5,28
	ctx.r5.s64 = 28;
	// stw r5,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r5.u32);
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8211D598:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82105d30
	ctx.lr = 0x8211D5A0;
	sub_82105D30(ctx, base);
	// lis r4,1
	ctx.r4.s64 = 65536;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r3,r4,9552
	ctx.r3.u64 = ctx.r4.u64 | 9552;
	// addi r4,r31,52
	ctx.r4.s64 = ctx.r31.s64 + 52;
	// lwzx r3,r31,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8211d5c8
	if (ctx.cr6.eq) goto loc_8211D5C8;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// bl 0x82361bd8
	ctx.lr = 0x8211D5C8;
	sub_82361BD8(ctx, base);
loc_8211D5C8:
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r4,r7,9436
	ctx.r4.u64 = ctx.r7.u64 | 9436;
	// ori r8,r9,9464
	ctx.r8.u64 = ctx.r9.u64 | 9464;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r10,1413(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1413, ctx.r10.u8);
	// lwzx r4,r31,r4
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	// lwzx r5,r31,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// bl 0x82105b30
	ctx.lr = 0x8211D5F8;
	sub_82105B30(ctx, base);
	// li r3,10
	ctx.r3.s64 = 10;
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8211D608:
	// lbz r11,1414(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1414);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211d61c
	if (ctx.cr6.eq) goto loc_8211D61C;
	// li r11,-1
	ctx.r11.s64 = -1;
	// b 0x8211d628
	goto loc_8211D628;
loc_8211D61C:
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r11,1432(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1432);
	// stw r10,1432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1432, ctx.r10.u32);
loc_8211D628:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8211dfd8
	if (ctx.cr6.lt) goto loc_8211DFD8;
	// bne cr6,0x8211e304
	if (!ctx.cr6.eq) goto loc_8211E304;
	// li r9,28
	ctx.r9.s64 = 28;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8211D644:
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r4,1480(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1480);
	// addis r5,r31,1
	ctx.r5.s64 = ctx.r31.s64 + 65536;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r5,9744
	ctx.r5.s64 = ctx.r5.s64 + 9744;
	// addi r3,r31,22532
	ctx.r3.s64 = ctx.r31.s64 + 22532;
	// stw r8,1076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1076, ctx.r8.u32);
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x82363248
	ctx.lr = 0x8211D66C;
	sub_82363248(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8211D67C:
	// addi r30,r31,22532
	ctx.r30.s64 = ctx.r31.s64 + 22532;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82362fc0
	ctx.lr = 0x8211D688;
	sub_82362FC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211d69c
	if (ctx.cr6.eq) goto loc_8211D69C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82105e78
	ctx.lr = 0x8211D69C;
	sub_82105E78(ctx, base);
loc_8211D69C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82362f20
	ctx.lr = 0x8211D6A4;
	sub_82362F20(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8211e304
	if (ctx.cr6.eq) goto loc_8211E304;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r9,22552(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22552);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// stw r27,1076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1076, ctx.r27.u32);
	// bne cr6,0x8211d840
	if (!ctx.cr6.eq) goto loc_8211D840;
	// lwz r11,22548(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22548);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x8211e304
	if (ctx.cr6.gt) goto loc_8211E304;
	// lis r12,-32238
	ctx.r12.s64 = -2112749568;
	// addi r12,r12,-10516
	ctx.r12.s64 = ctx.r12.s64 + -10516;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8211D710;
	case 1:
		goto loc_8211DA94;
	case 2:
		goto loc_8211D710;
	case 3:
		goto loc_8211E304;
	case 4:
		goto loc_8211E304;
	case 5:
		goto loc_8211E304;
	case 6:
		goto loc_8211E304;
	case 7:
		goto loc_8211D7E4;
	case 8:
		goto loc_8211DA94;
	default:
		__builtin_unreachable();
	}
	// lwz r16,-10480(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -10480);
	// lwz r16,-9580(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -9580);
	// lwz r16,-10480(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -10480);
	// lwz r16,-7420(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -7420);
	// lwz r16,-7420(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -7420);
	// lwz r16,-7420(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -7420);
	// lwz r16,-7420(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -7420);
	// lwz r16,-10268(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -10268);
	// lwz r16,-9580(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -9580);
loc_8211D710:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82105d30
	ctx.lr = 0x8211D718;
	sub_82105D30(ctx, base);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// addi r4,r31,52
	ctx.r4.s64 = ctx.r31.s64 + 52;
	// ori r7,r8,9568
	ctx.r7.u64 = ctx.r8.u64 | 9568;
	// stb r27,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r27.u8);
	// lwzx r3,r31,r7
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8211d73c
	if (ctx.cr6.eq) goto loc_8211D73C;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// bl 0x82361bd8
	ctx.lr = 0x8211D73C;
	sub_82361BD8(ctx, base);
loc_8211D73C:
	// lis r6,1
	ctx.r6.s64 = 65536;
	// stw r27,1400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1400, ctx.r27.u32);
	// li r23,1
	ctx.r23.s64 = 1;
	// ori r5,r6,9428
	ctx.r5.u64 = ctx.r6.u64 | 9428;
	// addi r30,r31,1080
	ctx.r30.s64 = ctx.r31.s64 + 1080;
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stb r23,1413(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1413, ctx.r23.u8);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lwzx r3,r31,r5
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
loc_8211D764:
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
	// bne cr6,0x8211d764
	if (!ctx.cr6.eq) goto loc_8211D764;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8211d79c
	if (ctx.cr6.eq) goto loc_8211D79C;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82361bd8
	ctx.lr = 0x8211D790;
	sub_82361BD8(ctx, base);
	// lwz r11,1400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1400);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stw r4,1400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1400, ctx.r4.u32);
loc_8211D79C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8211D7A4:
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8211d7a4
	if (!ctx.cr6.eq) goto loc_8211D7A4;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211d7cc
	if (ctx.cr6.eq) goto loc_8211D7CC;
	// stb r23,1414(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1414, ctx.r23.u8);
loc_8211D7CC:
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,18
	ctx.r9.s64 = 18;
	// stw r10,1432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1432, ctx.r10.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8211D7E4:
	// addis r26,r31,1
	ctx.r26.s64 = ctx.r31.s64 + 65536;
	// stw r27,1452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1452, ctx.r27.u32);
	// addi r30,r31,2267
	ctx.r30.s64 = ctx.r31.s64 + 2267;
	// stw r27,1456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1456, ctx.r27.u32);
	// addi r26,r26,9416
	ctx.r26.s64 = ctx.r26.s64 + 9416;
	// addi r28,r31,1612
	ctx.r28.s64 = ctx.r31.s64 + 1612;
	// li r29,3
	ctx.r29.s64 = 3;
	// li r23,1
	ctx.r23.s64 = 1;
loc_8211D804:
	// li r5,64
	ctx.r5.s64 = 64;
	// stb r23,-3(r30)
	PPC_STORE_U8(ctx.r30.u32 + -3, ctx.r23.u8);
	// stb r23,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r23.u8);
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// bl 0x82361bd8
	ctx.lr = 0x8211D81C;
	sub_82361BD8(ctx, base);
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8211d804
	if (!ctx.cr6.eq) goto loc_8211D804;
	// li r7,13
	ctx.r7.s64 = 13;
	// stw r7,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8211D840:
	// addis r25,r31,1
	ctx.r25.s64 = ctx.r31.s64 + 65536;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// addi r28,r31,1612
	ctx.r28.s64 = ctx.r31.s64 + 1612;
	// addi r25,r25,9744
	ctx.r25.s64 = ctx.r25.s64 + 9744;
	// addi r24,r31,1624
	ctx.r24.s64 = ctx.r31.s64 + 1624;
	// addi r26,r31,2264
	ctx.r26.s64 = ctx.r31.s64 + 2264;
	// li r23,1
	ctx.r23.s64 = 1;
	// ori r22,r6,9416
	ctx.r22.u64 = ctx.r6.u64 | 9416;
loc_8211D864:
	// li r5,64
	ctx.r5.s64 = 64;
	// stbx r27,r26,r30
	PPC_STORE_U8(ctx.r26.u32 + ctx.r30.u32, ctx.r27.u8);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8259d2a0
	ctx.lr = 0x8211D878;
	sub_8259D2A0(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8211D880:
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8211d880
	if (!ctx.cr6.eq) goto loc_8211D880;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r4,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211d8d4
	if (ctx.cr6.eq) goto loc_8211D8D4;
	// add r29,r30,r31
	ctx.r29.u64 = ctx.r30.u64 + ctx.r31.u64;
	// stbx r23,r26,r30
	PPC_STORE_U8(ctx.r26.u32 + ctx.r30.u32, ctx.r23.u8);
	// stb r23,2267(r29)
	PPC_STORE_U8(ctx.r29.u32 + 2267, ctx.r23.u8);
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmpwi cr6,r3,31
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 31, ctx.xer);
	// bne cr6,0x8211d8d4
	if (!ctx.cr6.eq) goto loc_8211D8D4;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x821136b0
	ctx.lr = 0x8211D8C4;
	sub_821136B0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211d8d4
	if (ctx.cr6.eq) goto loc_8211D8D4;
	// stb r27,2267(r29)
	PPC_STORE_U8(ctx.r29.u32 + 2267, ctx.r27.u8);
loc_8211D8D4:
	// lbzx r10,r26,r30
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r26.u32 + ctx.r30.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8211d8f0
	if (!ctx.cr6.eq) goto loc_8211D8F0;
	// li r5,64
	ctx.r5.s64 = 64;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwzx r3,r31,r22
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r22.u32);
	// bl 0x82361bd8
	ctx.lr = 0x8211D8F0;
	sub_82361BD8(ctx, base);
loc_8211D8F0:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r24,r24,64
	ctx.r24.s64 = ctx.r24.s64 + 64;
	// addi r25,r25,7032
	ctx.r25.s64 = ctx.r25.s64 + 7032;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// blt cr6,0x8211d864
	if (ctx.cr6.lt) goto loc_8211D864;
	// li r9,13
	ctx.r9.s64 = 13;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8211D918:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82106068
	ctx.lr = 0x8211D920;
	sub_82106068(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r4,1448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1448, ctx.r4.u32);
	// bl 0x8211bee0
	ctx.lr = 0x8211D930;
	sub_8211BEE0(ctx, base);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// lis r3,1
	ctx.r3.s64 = 65536;
	// ori r4,r5,9596
	ctx.r4.u64 = ctx.r5.u64 | 9596;
	// ori r11,r3,9592
	ctx.r11.u64 = ctx.r3.u64 | 9592;
	// ori r6,r8,9600
	ctx.r6.u64 = ctx.r8.u64 | 9600;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r5,r31,r4
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	// lwzx r4,r31,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwzx r6,r31,r6
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// bl 0x82105b30
	ctx.lr = 0x8211D960;
	sub_82105B30(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r10,16
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16, ctx.xer);
	// beq cr6,0x8211d9a0
	if (ctx.cr6.eq) goto loc_8211D9A0;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r9,5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 5, ctx.xer);
	// beq cr6,0x8211d9a0
	if (ctx.cr6.eq) goto loc_8211D9A0;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// li r4,3
	ctx.r4.s64 = 3;
	// ori r7,r8,9432
	ctx.r7.u64 = ctx.r8.u64 | 9432;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r5,r31,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// bl 0x82105c68
	ctx.lr = 0x8211D990;
	sub_82105C68(ctx, base);
	// li r4,14
	ctx.r4.s64 = 14;
	// stw r4,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r4.u32);
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8211D9A0:
	// lis r6,1
	ctx.r6.s64 = 65536;
	// li r4,3
	ctx.r4.s64 = 3;
	// ori r5,r6,9464
	ctx.r5.u64 = ctx.r6.u64 | 9464;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r5,r31,r5
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// bl 0x82105c68
	ctx.lr = 0x8211D9B8;
	sub_82105C68(ctx, base);
	// li r4,14
	ctx.r4.s64 = 14;
	// stw r4,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r4.u32);
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8211D9C8:
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,22532
	ctx.r3.s64 = ctx.r31.s64 + 22532;
	// bl 0x823633f8
	ctx.lr = 0x8211D9D4;
	sub_823633F8(ctx, base);
	// li r3,15
	ctx.r3.s64 = 15;
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8211D9E4:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,55520
	ctx.r10.u64 = ctx.r11.u64 | 55520;
	// lwzx r9,r31,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,256
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 256, ctx.xer);
	// bne cr6,0x8211e304
	if (!ctx.cr6.eq) goto loc_8211E304;
	// li r8,19
	ctx.r8.s64 = 19;
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8211DA08:
	// lbz r7,1413(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1413);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8211e304
	if (!ctx.cr6.eq) goto loc_8211E304;
	// li r6,1
	ctx.r6.s64 = 1;
	// lbz r5,22625(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 22625);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stb r6,1421(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1421, ctx.r6.u8);
	// beq cr6,0x8211da54
	if (ctx.cr6.eq) goto loc_8211DA54;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r4,1421(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1421, ctx.r4.u8);
	// bl 0x82105d30
	ctx.lr = 0x8211DA38;
	sub_82105D30(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,22532
	ctx.r3.s64 = ctx.r31.s64 + 22532;
	// bl 0x823633f8
	ctx.lr = 0x8211DA44;
	sub_823633F8(ctx, base);
	// li r3,17
	ctx.r3.s64 = 17;
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8211DA54:
	// lbz r11,1414(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1414);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211da68
	if (ctx.cr6.eq) goto loc_8211DA68;
	// li r11,-1
	ctx.r11.s64 = -1;
	// b 0x8211da74
	goto loc_8211DA74;
loc_8211DA68:
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r11,1432(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1432);
	// stw r10,1432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1432, ctx.r10.u32);
loc_8211DA74:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x8211daa4
	if (ctx.cr6.lt) goto loc_8211DAA4;
	// bne cr6,0x8211e304
	if (!ctx.cr6.eq) goto loc_8211E304;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,22532
	ctx.r3.s64 = ctx.r31.s64 + 22532;
	// stb r9,1421(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1421, ctx.r9.u8);
	// bl 0x823633f8
	ctx.lr = 0x8211DA94;
	sub_823633F8(ctx, base);
loc_8211DA94:
	// li r8,28
	ctx.r8.s64 = 28;
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8211DAA4:
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,1436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1436, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r7,1421(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1421, ctx.r7.u8);
	// bl 0x82105d30
	ctx.lr = 0x8211DAB8;
	sub_82105D30(ctx, base);
	// lwz r6,1440(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1440);
	// cmpwi cr6,r6,-1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -1, ctx.xer);
	// bne cr6,0x8211dae0
	if (!ctx.cr6.eq) goto loc_8211DAE0;
	// li r5,22
	ctx.r5.s64 = 22;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,22532
	ctx.r3.s64 = ctx.r31.s64 + 22532;
	// stw r5,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r5.u32);
	// bl 0x823633f8
	ctx.lr = 0x8211DAD8;
	sub_823633F8(ctx, base);
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8211DAE0:
	// li r4,20
	ctx.r4.s64 = 20;
	// stw r4,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r4.u32);
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8211DAF0:
	// lbz r3,1413(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1413);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8211e304
	if (!ctx.cr6.eq) goto loc_8211E304;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r9,1436(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1436);
	// addi r10,r11,3672
	ctx.r10.s64 = ctx.r11.s64 + 3672;
	// rlwinm r11,r9,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,1624
	ctx.r3.s64 = ctx.r11.s64 + 1624;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8211DB18:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x8211db3c
	if (ctx.cr6.eq) goto loc_8211DB3C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8211db18
	if (ctx.cr6.eq) goto loc_8211DB18;
loc_8211DB3C:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8211db90
	if (!ctx.cr6.eq) goto loc_8211DB90;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r11,12328
	ctx.r30.s64 = ctx.r11.s64 + 12328;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r4,r30,-32
	ctx.r4.s64 = ctx.r30.s64 + -32;
	// addi r29,r11,23504
	ctx.r29.s64 = ctx.r11.s64 + 23504;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8210fcf8
	ctx.lr = 0x8211DB60;
	sub_8210FCF8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r30,-60
	ctx.r4.s64 = ctx.r30.s64 + -60;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8210fcf8
	ctx.lr = 0x8211DB70;
	sub_8210FCF8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8210fcf8
	ctx.lr = 0x8211DB80;
	sub_8210FCF8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// b 0x8211dbd8
	goto loc_8211DBD8;
loc_8211DB90:
	// addi r30,r31,1484
	ctx.r30.s64 = ctx.r31.s64 + 1484;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82361d08
	ctx.lr = 0x8211DBA0;
	sub_82361D08(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r29,r11,12328
	ctx.r29.s64 = ctx.r11.s64 + 12328;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r4,r29,-32
	ctx.r4.s64 = ctx.r29.s64 + -32;
	// addi r28,r11,23504
	ctx.r28.s64 = ctx.r11.s64 + 23504;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8210fcf8
	ctx.lr = 0x8211DBBC;
	sub_8210FCF8(ctx, base);
	// addi r4,r29,-60
	ctx.r4.s64 = ctx.r29.s64 + -60;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8210fcf8
	ctx.lr = 0x8211DBCC;
	sub_8210FCF8(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
loc_8211DBD8:
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// lis r4,12288
	ctx.r4.s64 = 805306368;
	// addis r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 458752;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// addi r9,r9,24928
	ctx.r9.s64 = ctx.r9.s64 + 24928;
	// li r5,9
	ctx.r5.s64 = 9;
	// ori r4,r4,100
	ctx.r4.u64 = ctx.r4.u64 | 100;
	// addi r3,r11,15320
	ctx.r3.s64 = ctx.r11.s64 + 15320;
	// bl 0x8210d978
	ctx.lr = 0x8211DC04;
	sub_8210D978(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,21
	ctx.r6.s64 = 21;
	// stb r7,1423(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1423, ctx.r7.u8);
	// stw r6,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r6.u32);
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8211DC1C:
	// addi r3,r31,22532
	ctx.r3.s64 = ctx.r31.s64 + 22532;
	// bl 0x82362f20
	ctx.lr = 0x8211DC24;
	sub_82362F20(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8211e304
	if (ctx.cr6.eq) goto loc_8211E304;
loc_8211DC30:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82105d30
	ctx.lr = 0x8211DC38;
	sub_82105D30(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r4,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r4.u32);
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8211DC48:
	// lbz r11,1417(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1417);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211dc60
	if (ctx.cr6.eq) goto loc_8211DC60;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r27,1417(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1417, ctx.r27.u8);
loc_8211DC60:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211e304
	if (ctx.cr6.eq) goto loc_8211E304;
	// lbz r10,22625(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 22625);
	// stb r27,1423(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1423, ctx.r27.u8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8211dca4
	if (ctx.cr6.eq) goto loc_8211DCA4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r27,1421(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1421, ctx.r27.u8);
	// bl 0x82105d30
	ctx.lr = 0x8211DC88;
	sub_82105D30(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,22532
	ctx.r3.s64 = ctx.r31.s64 + 22532;
	// bl 0x823633f8
	ctx.lr = 0x8211DC94;
	sub_823633F8(ctx, base);
	// li r9,17
	ctx.r9.s64 = 17;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8211DCA4:
	// addi r11,r31,2008
	ctx.r11.s64 = ctx.r31.s64 + 2008;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8211DCAC:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8211dcac
	if (!ctx.cr6.eq) goto loc_8211DCAC;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r7,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8211dce0
	if (!ctx.cr6.eq) goto loc_8211DCE0;
	// li r6,13
	ctx.r6.s64 = 13;
	// stw r6,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r6.u32);
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8211DCE0:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,22532
	ctx.r3.s64 = ctx.r31.s64 + 22532;
	// bl 0x823633f8
	ctx.lr = 0x8211DCEC;
	sub_823633F8(ctx, base);
	// li r5,22
	ctx.r5.s64 = 22;
	// stw r5,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r5.u32);
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8211DCFC:
	// addi r30,r31,22532
	ctx.r30.s64 = ctx.r31.s64 + 22532;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82362f20
	ctx.lr = 0x8211DD08;
	sub_82362F20(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8211e304
	if (ctx.cr6.eq) goto loc_8211E304;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82363348
	ctx.lr = 0x8211DD28;
	sub_82363348(ctx, base);
	// li r3,23
	ctx.r3.s64 = 23;
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8211DD38:
	// addi r3,r31,22532
	ctx.r3.s64 = ctx.r31.s64 + 22532;
	// bl 0x82362f20
	ctx.lr = 0x8211DD40;
	sub_82362F20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211e304
	if (ctx.cr6.eq) goto loc_8211E304;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// stw r27,1452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1452, ctx.r27.u32);
	// stw r27,1456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1456, ctx.r27.u32);
	// lbz r11,58(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 58);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211dd84
	if (ctx.cr6.eq) goto loc_8211DD84;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,24
	ctx.r8.s64 = 24;
	// stb r9,1420(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1420, ctx.r9.u8);
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8211DD84:
	// li r8,24
	ctx.r8.s64 = 24;
	// stb r27,1420(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1420, ctx.r27.u8);
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8211DD98:
	// addi r22,r31,22532
	ctx.r22.s64 = ctx.r31.s64 + 22532;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82362f20
	ctx.lr = 0x8211DDA4;
	sub_82362F20(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8211e304
	if (ctx.cr6.eq) goto loc_8211E304;
	// addi r30,r31,2008
	ctx.r30.s64 = ctx.r31.s64 + 2008;
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82361dd0
	ctx.lr = 0x8211DDC4;
	sub_82361DD0(ctx, base);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lwz r6,1436(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1436);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r29,r11,6040
	ctx.r29.s64 = ctx.r11.s64 + 6040;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r6,1444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1444, ctx.r6.u32);
	// bl 0x821133e8
	ctx.lr = 0x8211DDE4;
	sub_821133E8(ctx, base);
	// lwz r5,1436(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1436);
	// lis r4,1
	ctx.r4.s64 = 65536;
	// mulli r11,r5,7032
	ctx.r11.s64 = ctx.r5.s64 * 7032;
	// ori r25,r4,9744
	ctx.r25.u64 = ctx.r4.u64 | 9744;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r5,7032
	ctx.r5.s64 = 7032;
	// addi r4,r29,24
	ctx.r4.s64 = ctx.r29.s64 + 24;
	// add r3,r3,r25
	ctx.r3.u64 = ctx.r3.u64 + ctx.r25.u64;
	// bl 0x8259d3a0
	ctx.lr = 0x8211DE08;
	sub_8259D3A0(ctx, base);
	// lwz r11,1436(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1436);
	// li r5,64
	ctx.r5.s64 = 64;
	// rlwinm r10,r11,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,1624
	ctx.r3.s64 = ctx.r11.s64 + 1624;
	// lbz r23,2264(r9)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2264);
	// bl 0x8259d2a0
	ctx.lr = 0x8211DE2C;
	sub_8259D2A0(ctx, base);
	// lwz r11,1436(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1436);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r26,r31,1612
	ctx.r26.s64 = ctx.r31.s64 + 1612;
	// add r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r29,r31,1624
	ctx.r29.s64 = ctx.r31.s64 + 1624;
	// addi r24,r31,2264
	ctx.r24.s64 = ctx.r31.s64 + 2264;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// stb r8,2264(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2264, ctx.r8.u8);
	// lis r27,-32255
	ctx.r27.s64 = -2113863680;
loc_8211DE54:
	// lbzx r6,r24,r28
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r24.u32 + ctx.r28.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8211de74
	if (ctx.cr6.eq) goto loc_8211DE74;
	// li r5,64
	ctx.r5.s64 = 64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8259d2a0
	ctx.lr = 0x8211DE70;
	sub_8259D2A0(ctx, base);
	// b 0x8211de88
	goto loc_8211DE88;
loc_8211DE74:
	// lbz r11,3672(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 3672);
	// stb r11,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r11.u8);
	// lbz r11,3672(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 3672);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
loc_8211DE88:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r29,r29,64
	ctx.r29.s64 = ctx.r29.s64 + 64;
	// cmpwi cr6,r28,3
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 3, ctx.xer);
	// blt cr6,0x8211de54
	if (ctx.cr6.lt) goto loc_8211DE54;
	// addi r28,r31,1816
	ctx.r28.s64 = ctx.r31.s64 + 1816;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// li r30,3
	ctx.r30.s64 = 3;
loc_8211DEA8:
	// li r5,64
	ctx.r5.s64 = 64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8259d2a0
	ctx.lr = 0x8211DEB8;
	sub_8259D2A0(ctx, base);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r28,r28,64
	ctx.r28.s64 = ctx.r28.s64 + 64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8211dea8
	if (!ctx.cr6.eq) goto loc_8211DEA8;
	// lwz r4,1480(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1480);
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// add r5,r31,r25
	ctx.r5.u64 = ctx.r31.u64 + ctx.r25.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x823631c0
	ctx.lr = 0x8211DEE8;
	sub_823631C0(ctx, base);
	// li r3,25
	ctx.r3.s64 = 25;
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8211DEF8:
	// addi r30,r31,22532
	ctx.r30.s64 = ctx.r31.s64 + 22532;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82362fc0
	ctx.lr = 0x8211DF04;
	sub_82362FC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211df18
	if (ctx.cr6.eq) goto loc_8211DF18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82105e78
	ctx.lr = 0x8211DF18;
	sub_82105E78(ctx, base);
loc_8211DF18:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82362f20
	ctx.lr = 0x8211DF20;
	sub_82362F20(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8211e304
	if (ctx.cr6.eq) goto loc_8211E304;
	// lwz r11,22552(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22552);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bgt cr6,0x8211df88
	if (ctx.cr6.gt) goto loc_8211DF88;
	// lwz r8,22548(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22548);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8211df58
	if (!ctx.cr6.eq) goto loc_8211DF58;
	// li r7,29
	ctx.r7.s64 = 29;
	// stw r7,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8211DF58:
	// bl 0x82362fa8
	ctx.lr = 0x8211DF5C;
	sub_82362FA8(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8211df78
	if (ctx.cr6.eq) goto loc_8211DF78;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r5,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r5.u32);
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8211DF78:
	// li r4,29
	ctx.r4.s64 = 29;
	// stw r4,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r4.u32);
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8211DF88:
	// lwz r3,1436(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1436);
	// lbz r11,1420(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1420);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r3,1440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1440, ctx.r3.u32);
	// beq cr6,0x8211dfd0
	if (ctx.cr6.eq) goto loc_8211DFD0;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,1076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1076, ctx.r10.u32);
	// bl 0x82363348
	ctx.lr = 0x8211DFB8;
	sub_82363348(ctx, base);
	// li r9,26
	ctx.r9.s64 = 26;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// bl 0x82105d30
	ctx.lr = 0x8211DFC8;
	sub_82105D30(ctx, base);
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8211DFD0:
	// li r8,31
	ctx.r8.s64 = 31;
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
loc_8211DFD8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82105d30
	ctx.lr = 0x8211DFE0;
	sub_82105D30(ctx, base);
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8211DFE8:
	// addi r30,r31,22532
	ctx.r30.s64 = ctx.r31.s64 + 22532;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82362fc0
	ctx.lr = 0x8211DFF4;
	sub_82362FC0(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8211e008
	if (ctx.cr6.eq) goto loc_8211E008;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82105e78
	ctx.lr = 0x8211E008;
	sub_82105E78(ctx, base);
loc_8211E008:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82362f20
	ctx.lr = 0x8211E010;
	sub_82362F20(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8211e304
	if (ctx.cr6.eq) goto loc_8211E304;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r10,22552(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22552);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// stw r27,1076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1076, ctx.r27.u32);
	// bne cr6,0x8211e0c4
	if (!ctx.cr6.eq) goto loc_8211E0C4;
	// lwz r11,22548(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22548);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8211e044
	if (ctx.cr6.eq) goto loc_8211E044;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8211e0c4
	if (!ctx.cr6.eq) goto loc_8211E0C4;
loc_8211E044:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82105d30
	ctx.lr = 0x8211E04C;
	sub_82105D30(ctx, base);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// addi r4,r31,52
	ctx.r4.s64 = ctx.r31.s64 + 52;
	// ori r3,r5,9576
	ctx.r3.u64 = ctx.r5.u64 | 9576;
	// stb r27,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r27.u8);
	// lwzx r3,r31,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8211e070
	if (ctx.cr6.eq) goto loc_8211E070;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// bl 0x82361bd8
	ctx.lr = 0x8211E070;
	sub_82361BD8(ctx, base);
loc_8211E070:
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
	ctx.lr = 0x8211E0A0;
	sub_82105B30(ctx, base);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// li r3,27
	ctx.r3.s64 = 27;
	// stb r10,58(r11)
	PPC_STORE_U8(ctx.r11.u32 + 58, ctx.r10.u8);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// stb r27,1420(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1420, ctx.r27.u8);
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8211E0C4:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8211e104
	if (!ctx.cr6.eq) goto loc_8211E104;
	// lwz r11,22556(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22556);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8211e104
	if (!ctx.cr6.eq) goto loc_8211E104;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82363b18
	ctx.lr = 0x8211E0E0;
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
	ctx.lr = 0x8211E0F4;
	sub_82363B18(ctx, base);
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r9,31
	ctx.r9.s64 = 31;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// stw r8,1456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1456, ctx.r8.u32);
loc_8211E104:
	// stb r27,1420(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1420, ctx.r27.u8);
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8211E110:
	// lbz r7,1414(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1414);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8211e124
	if (ctx.cr6.eq) goto loc_8211E124;
	// li r11,-1
	ctx.r11.s64 = -1;
	// b 0x8211e130
	goto loc_8211E130;
loc_8211E124:
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r11,1432(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1432);
	// stw r6,1432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1432, ctx.r6.u32);
loc_8211E130:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8211dc30
	if (ctx.cr6.lt) goto loc_8211DC30;
	// bne cr6,0x8211e304
	if (!ctx.cr6.eq) goto loc_8211E304;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82105d30
	ctx.lr = 0x8211E144;
	sub_82105D30(ctx, base);
	// li r5,31
	ctx.r5.s64 = 31;
	// stw r5,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r5.u32);
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8211E154:
	// lbz r3,1414(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1414);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8211e304
	if (!ctx.cr6.eq) goto loc_8211E304;
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r11,1432(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1432);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// stw r10,1432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1432, ctx.r10.u32);
	// beq cr6,0x8211e304
	if (ctx.cr6.eq) goto loc_8211E304;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82105d30
	ctx.lr = 0x8211E17C;
	sub_82105D30(ctx, base);
loc_8211E17C:
	// li r9,28
	ctx.r9.s64 = 28;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8211E18C:
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r8,16
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 16, ctx.xer);
	// beq cr6,0x8211df78
	if (ctx.cr6.eq) goto loc_8211DF78;
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r7,5
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 5, ctx.xer);
	// beq cr6,0x8211df78
	if (ctx.cr6.eq) goto loc_8211DF78;
	// lwz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r6,15
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 15, ctx.xer);
	// beq cr6,0x8211df78
	if (ctx.cr6.eq) goto loc_8211DF78;
	// li r5,31
	ctx.r5.s64 = 31;
	// stw r5,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r5.u32);
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8211E1C0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82105d30
	ctx.lr = 0x8211E1C8;
	sub_82105D30(ctx, base);
	// lis r3,1
	ctx.r3.s64 = 65536;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r11,r3,9512
	ctx.r11.u64 = ctx.r3.u64 | 9512;
	// ori r9,r10,9580
	ctx.r9.u64 = ctx.r10.u64 | 9580;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r5,r31,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwzx r4,r31,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// bl 0x82105918
	ctx.lr = 0x8211E1EC;
	sub_82105918(ctx, base);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// ori r5,r8,9440
	ctx.r5.u64 = ctx.r8.u64 | 9440;
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
	ctx.lr = 0x8211E214;
	sub_82105B30(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,30
	ctx.r9.s64 = 30;
	// stw r10,1448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1448, ctx.r10.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8211E22C:
	// lbz r8,1414(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1414);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8211e240
	if (ctx.cr6.eq) goto loc_8211E240;
	// li r11,-1
	ctx.r11.s64 = -1;
	// b 0x8211e24c
	goto loc_8211E24C;
loc_8211E240:
	// li r7,-1
	ctx.r7.s64 = -1;
	// lwz r11,1432(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1432);
	// stw r7,1432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1432, ctx.r7.u32);
loc_8211E24C:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8211e270
	if (ctx.cr6.lt) goto loc_8211E270;
	// bne cr6,0x8211e304
	if (!ctx.cr6.eq) goto loc_8211E304;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82105d30
	ctx.lr = 0x8211E260;
	sub_82105D30(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r6,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r6.u32);
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8211E270:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82105d30
	ctx.lr = 0x8211E278;
	sub_82105D30(ctx, base);
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r5,16
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 16, ctx.xer);
	// beq cr6,0x8211e29c
	if (ctx.cr6.eq) goto loc_8211E29C;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// beq cr6,0x8211e29c
	if (ctx.cr6.eq) goto loc_8211E29C;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r3,15
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 15, ctx.xer);
	// bne cr6,0x8211e2b4
	if (!ctx.cr6.eq) goto loc_8211E2B4;
loc_8211E29C:
	// li r27,0
	ctx.r27.s64 = 0;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// stb r10,58(r11)
	PPC_STORE_U8(ctx.r11.u32 + 58, ctx.r10.u8);
	// stb r27,1420(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1420, ctx.r27.u8);
loc_8211E2B4:
	// li r11,31
	ctx.r11.s64 = 31;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8211E2C4:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,17
	ctx.r9.s64 = 17;
	// li r8,3
	ctx.r8.s64 = 3;
	// li r7,6
	ctx.r7.s64 = 6;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r10,1076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1076, ctx.r10.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stw r8,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r8.u32);
	// stw r7,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r7.u32);
	// stw r6,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r6.u32);
	// stb r5,1416(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1416, ctx.r5.u8);
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8211E2FC:
	// li r4,31
	ctx.r4.s64 = 31;
	// stw r4,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r4.u32);
loc_8211E304:
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_8211E310) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae0
	ctx.lr = 0x8211E318;
	__savegprlr_22(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 21, ctx.xer);
	// bgt cr6,0x8211f308
	if (ctx.cr6.gt) goto loc_8211F308;
	// lis r12,-32238
	ctx.r12.s64 = -2112749568;
	// addi r12,r12,-7356
	ctx.r12.s64 = ctx.r12.s64 + -7356;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8211E39C;
	case 1:
		goto loc_8211E424;
	case 2:
		goto loc_8211E480;
	case 3:
		goto loc_8211E480;
	case 4:
		goto loc_8211E4A0;
	case 5:
		goto loc_8211E61C;
	case 6:
		goto loc_8211E68C;
	case 7:
		goto loc_8211E6F4;
	case 8:
		goto loc_8211E750;
	case 9:
		goto loc_8211EA24;
	case 10:
		goto loc_8211EAAC;
	case 11:
		goto loc_8211EAE4;
	case 12:
		goto loc_8211ED8C;
	case 13:
		goto loc_8211EDEC;
	case 14:
		goto loc_8211F110;
	case 15:
		goto loc_8211F154;
	case 16:
		goto loc_8211F228;
	case 17:
		goto loc_8211F0D8;
	case 18:
		goto loc_8211F260;
	case 19:
		goto loc_8211F298;
	case 20:
		goto loc_8211F2D0;
	case 21:
		goto loc_8211F2F0;
	default:
		__builtin_unreachable();
	}
	// lwz r16,-7268(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -7268);
	// lwz r16,-7132(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -7132);
	// lwz r16,-7040(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -7040);
	// lwz r16,-7040(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -7040);
	// lwz r16,-7008(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -7008);
	// lwz r16,-6628(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -6628);
	// lwz r16,-6516(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -6516);
	// lwz r16,-6412(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -6412);
	// lwz r16,-6320(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -6320);
	// lwz r16,-5596(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -5596);
	// lwz r16,-5460(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -5460);
	// lwz r16,-5404(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -5404);
	// lwz r16,-4724(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -4724);
	// lwz r16,-4628(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -4628);
	// lwz r16,-3824(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -3824);
	// lwz r16,-3756(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -3756);
	// lwz r16,-3544(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -3544);
	// lwz r16,-3880(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -3880);
	// lwz r16,-3488(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -3488);
	// lwz r16,-3432(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -3432);
	// lwz r16,-3376(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -3376);
	// lwz r16,-3344(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -3344);
loc_8211E39C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8211e3b8
	if (!ctx.cr6.eq) goto loc_8211E3B8;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8211E3B8:
	// lis r9,1
	ctx.r9.s64 = 65536;
	// addi r4,r31,52
	ctx.r4.s64 = ctx.r31.s64 + 52;
	// ori r8,r9,9528
	ctx.r8.u64 = ctx.r9.u64 | 9528;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwzx r3,r31,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// stb r30,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r30.u8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8211e3e0
	if (ctx.cr6.eq) goto loc_8211E3E0;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// bl 0x82361bd8
	ctx.lr = 0x8211E3E0;
	sub_82361BD8(ctx, base);
loc_8211E3E0:
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// ori r5,r7,9440
	ctx.r5.u64 = ctx.r7.u64 | 9440;
	// ori r11,r4,9436
	ctx.r11.u64 = ctx.r4.u64 | 9436;
	// li r23,1
	ctx.r23.s64 = 1;
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
	// stb r23,1413(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1413, ctx.r23.u8);
	// bl 0x82105b30
	ctx.lr = 0x8211E410;
	sub_82105B30(ctx, base);
	// stw r30,1076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1076, ctx.r30.u32);
	// stw r23,1448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1448, ctx.r23.u32);
	// stw r23,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r23.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8211E424:
	// lbz r10,1414(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1414);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8211e438
	if (ctx.cr6.eq) goto loc_8211E438;
	// li r11,-1
	ctx.r11.s64 = -1;
	// b 0x8211e444
	goto loc_8211E444;
loc_8211E438:
	// li r9,-1
	ctx.r9.s64 = -1;
	// lwz r11,1432(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1432);
	// stw r9,1432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1432, ctx.r9.u32);
loc_8211E444:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8211e468
	if (ctx.cr6.lt) goto loc_8211E468;
	// bne cr6,0x8211f310
	if (!ctx.cr6.eq) goto loc_8211F310;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82105d30
	ctx.lr = 0x8211E458;
	sub_82105D30(ctx, base);
	// li r8,20
	ctx.r8.s64 = 20;
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8211E468:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82105d30
	ctx.lr = 0x8211E470;
	sub_82105D30(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r7,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8211E480:
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r3,r31,22532
	ctx.r3.s64 = ctx.r31.s64 + 22532;
	// stw r6,1076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1076, ctx.r6.u32);
	// bl 0x82363178
	ctx.lr = 0x8211E490;
	sub_82363178(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r5,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r5.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8211E4A0:
	// addi r29,r31,22532
	ctx.r29.s64 = ctx.r31.s64 + 22532;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82362fc0
	ctx.lr = 0x8211E4AC;
	sub_82362FC0(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8211e4c0
	if (ctx.cr6.eq) goto loc_8211E4C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82105e78
	ctx.lr = 0x8211E4C0;
	sub_82105E78(ctx, base);
loc_8211E4C0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82362f20
	ctx.lr = 0x8211E4C8;
	sub_82362F20(ctx, base);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8211f310
	if (ctx.cr6.eq) goto loc_8211F310;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,22548(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22548);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// stw r30,1076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1076, ctx.r30.u32);
	// bgt cr6,0x8211f310
	if (ctx.cr6.gt) goto loc_8211F310;
	// lis r12,-32238
	ctx.r12.s64 = -2112749568;
	// addi r12,r12,-6912
	ctx.r12.s64 = ctx.r12.s64 + -6912;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8211E5E0;
	case 1:
		goto loc_8211E5D0;
	case 2:
		goto loc_8211E5E0;
	case 3:
		goto loc_8211E5D0;
	case 4:
		goto loc_8211E514;
	default:
		__builtin_unreachable();
	}
	// lwz r16,-6688(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -6688);
	// lwz r16,-6704(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -6704);
	// lwz r16,-6688(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -6688);
	// lwz r16,-6704(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -6704);
	// lwz r16,-6892(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -6892);
loc_8211E514:
	// addis r26,r31,1
	ctx.r26.s64 = ctx.r31.s64 + 65536;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// addi r26,r26,9416
	ctx.r26.s64 = ctx.r26.s64 + 9416;
	// addi r28,r31,1612
	ctx.r28.s64 = ctx.r31.s64 + 1612;
	// addi r27,r31,1624
	ctx.r27.s64 = ctx.r31.s64 + 1624;
	// addi r25,r31,2264
	ctx.r25.s64 = ctx.r31.s64 + 2264;
	// addi r24,r11,3672
	ctx.r24.s64 = ctx.r11.s64 + 3672;
loc_8211E534:
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8259d2a0
	ctx.lr = 0x8211E544;
	sub_8259D2A0(ctx, base);
	// li r5,64
	ctx.r5.s64 = 64;
	// stbx r30,r25,r29
	PPC_STORE_U8(ctx.r25.u32 + ctx.r29.u32, ctx.r30.u8);
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// bl 0x82361bd8
	ctx.lr = 0x8211E558;
	sub_82361BD8(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r27,r27,64
	ctx.r27.s64 = ctx.r27.s64 + 64;
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 3, ctx.xer);
	// blt cr6,0x8211e534
	if (ctx.cr6.lt) goto loc_8211E534;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// addi r4,r31,52
	ctx.r4.s64 = ctx.r31.s64 + 52;
	// ori r10,r11,9460
	ctx.r10.u64 = ctx.r11.u64 | 9460;
	// stb r30,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r30.u8);
	// lwzx r3,r31,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8211e590
	if (ctx.cr6.eq) goto loc_8211E590;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// bl 0x82361bd8
	ctx.lr = 0x8211E590;
	sub_82361BD8(ctx, base);
loc_8211E590:
	// lis r8,1
	ctx.r8.s64 = 65536;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// li r9,1
	ctx.r9.s64 = 1;
	// ori r5,r8,9660
	ctx.r5.u64 = ctx.r8.u64 | 9660;
	// ori r11,r4,9444
	ctx.r11.u64 = ctx.r4.u64 | 9444;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r9,1413(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1413, ctx.r9.u8);
	// lwzx r5,r31,r5
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// lwzx r4,r31,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// bl 0x82105b30
	ctx.lr = 0x8211E5C0;
	sub_82105B30(ctx, base);
	// li r10,9
	ctx.r10.s64 = 9;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8211E5D0:
	// li r9,5
	ctx.r9.s64 = 5;
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8211E5E0:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r11,r11,-24936
	ctx.r11.s64 = ctx.r11.s64 + -24936;
	// addi r3,r11,8376
	ctx.r3.s64 = ctx.r11.s64 + 8376;
	// stw r8,1076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1076, ctx.r8.u32);
	// bl 0x82208310
	ctx.lr = 0x8211E5F8;
	sub_82208310(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8211e60c
	if (ctx.cr6.eq) goto loc_8211E60C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82360680
	ctx.lr = 0x8211E60C;
	sub_82360680(ctx, base);
loc_8211E60C:
	// li r6,7
	ctx.r6.s64 = 7;
	// stw r6,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r6.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8211E61C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82105d30
	ctx.lr = 0x8211E624;
	sub_82105D30(ctx, base);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// addi r4,r31,52
	ctx.r4.s64 = ctx.r31.s64 + 52;
	// ori r3,r5,9556
	ctx.r3.u64 = ctx.r5.u64 | 9556;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwzx r3,r31,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8211e64c
	if (ctx.cr6.eq) goto loc_8211E64C;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// bl 0x82361bd8
	ctx.lr = 0x8211E64C;
	sub_82361BD8(ctx, base);
loc_8211E64C:
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r4,r7,9660
	ctx.r4.u64 = ctx.r7.u64 | 9660;
	// ori r8,r9,9432
	ctx.r8.u64 = ctx.r9.u64 | 9432;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r10,1413(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1413, ctx.r10.u8);
	// lwzx r4,r31,r4
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	// lwzx r5,r31,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// bl 0x82105b30
	ctx.lr = 0x8211E67C;
	sub_82105B30(ctx, base);
	// li r3,6
	ctx.r3.s64 = 6;
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8211E68C:
	// lbz r11,1414(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1414);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211e6a0
	if (ctx.cr6.eq) goto loc_8211E6A0;
	// li r11,-1
	ctx.r11.s64 = -1;
	// b 0x8211e6ac
	goto loc_8211E6AC;
loc_8211E6A0:
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r11,1432(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1432);
	// stw r10,1432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1432, ctx.r10.u32);
loc_8211E6AC:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8211e6d0
	if (ctx.cr6.lt) goto loc_8211E6D0;
	// bne cr6,0x8211f310
	if (!ctx.cr6.eq) goto loc_8211F310;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82105d30
	ctx.lr = 0x8211E6C0;
	sub_82105D30(ctx, base);
	// li r9,19
	ctx.r9.s64 = 19;
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8211E6D0:
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,22532
	ctx.r3.s64 = ctx.r31.s64 + 22532;
	// bl 0x82360620
	ctx.lr = 0x8211E6DC;
	sub_82360620(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82105d30
	ctx.lr = 0x8211E6E4;
	sub_82105D30(ctx, base);
	// li r8,7
	ctx.r8.s64 = 7;
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8211E6F4:
	// addi r30,r31,22532
	ctx.r30.s64 = ctx.r31.s64 + 22532;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82363b30
	ctx.lr = 0x8211E704;
	sub_82363B30(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82090830
	ctx.lr = 0x8211E70C;
	sub_82090830(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// lwz r4,1480(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1480);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,84(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 84);
	// stb r10,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r10.u8);
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8211E740;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r8,8
	ctx.r8.s64 = 8;
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8211E750:
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r7,7
	ctx.r7.s64 = 458752;
	// addi r30,r11,26080
	ctx.r30.s64 = ctx.r11.s64 + 26080;
	// ori r6,r7,14718
	ctx.r6.u64 = ctx.r7.u64 | 14718;
	// addi r29,r31,22532
	ctx.r29.s64 = ctx.r31.s64 + 22532;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lbzx r5,r30,r6
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r6.u32);
	// cntlzw r4,r5
	ctx.r4.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// rlwinm r11,r4,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// stw r11,1076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1076, ctx.r11.u32);
	// bl 0x82362fc0
	ctx.lr = 0x8211E77C;
	sub_82362FC0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8211e790
	if (ctx.cr6.eq) goto loc_8211E790;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82105e78
	ctx.lr = 0x8211E790;
	sub_82105E78(ctx, base);
loc_8211E790:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82362f20
	ctx.lr = 0x8211E798;
	sub_82362F20(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8211f310
	if (ctx.cr6.eq) goto loc_8211F310;
	// lis r8,7
	ctx.r8.s64 = 458752;
	// ori r7,r8,14718
	ctx.r7.u64 = ctx.r8.u64 | 14718;
	// lbzx r6,r30,r7
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r7.u32);
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// beq cr6,0x8211f310
	if (ctx.cr6.eq) goto loc_8211F310;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,1076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1076, ctx.r30.u32);
	// bl 0x82360698
	ctx.lr = 0x8211E7C8;
	sub_82360698(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8211e7f8
	if (ctx.cr6.eq) goto loc_8211E7F8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82360620
	ctx.lr = 0x8211E7E0;
	sub_82360620(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82363b30
	ctx.lr = 0x8211E7EC;
	sub_82363B30(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82363b20
	ctx.lr = 0x8211E7F8;
	sub_82363B20(ctx, base);
loc_8211E7F8:
	// lwz r11,22548(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22548);
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bgt cr6,0x8211f310
	if (ctx.cr6.gt) goto loc_8211F310;
	// lis r12,-32238
	ctx.r12.s64 = -2112749568;
	// addi r12,r12,-6116
	ctx.r12.s64 = ctx.r12.s64 + -6116;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8211E9F0;
	case 1:
		goto loc_8211E9D8;
	case 2:
		goto loc_8211E9D8;
	case 3:
		goto loc_8211E908;
	case 4:
		goto loc_8211F310;
	case 5:
		goto loc_8211F310;
	case 6:
		goto loc_8211F310;
	case 7:
		goto loc_8211E9D8;
	case 8:
		goto loc_8211F310;
	case 9:
		goto loc_8211E84C;
	case 10:
		goto loc_8211F310;
	case 11:
		goto loc_8211E9D8;
	default:
		__builtin_unreachable();
	}
	// lwz r16,-5648(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -5648);
	// lwz r16,-5672(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -5672);
	// lwz r16,-5672(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -5672);
	// lwz r16,-5880(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -5880);
	// lwz r16,-3312(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -3312);
	// lwz r16,-3312(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -3312);
	// lwz r16,-3312(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -3312);
	// lwz r16,-5672(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -5672);
	// lwz r16,-3312(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -3312);
	// lwz r16,-6068(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -6068);
	// lwz r16,-3312(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -3312);
	// lwz r16,-5672(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -5672);
loc_8211E84C:
	// addis r26,r31,1
	ctx.r26.s64 = ctx.r31.s64 + 65536;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// addi r26,r26,9416
	ctx.r26.s64 = ctx.r26.s64 + 9416;
	// addi r28,r31,1612
	ctx.r28.s64 = ctx.r31.s64 + 1612;
	// addi r27,r31,1624
	ctx.r27.s64 = ctx.r31.s64 + 1624;
	// addi r25,r31,2264
	ctx.r25.s64 = ctx.r31.s64 + 2264;
	// addi r24,r11,3672
	ctx.r24.s64 = ctx.r11.s64 + 3672;
loc_8211E86C:
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8259d2a0
	ctx.lr = 0x8211E87C;
	sub_8259D2A0(ctx, base);
	// li r5,64
	ctx.r5.s64 = 64;
	// stbx r30,r25,r29
	PPC_STORE_U8(ctx.r25.u32 + ctx.r29.u32, ctx.r30.u8);
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// bl 0x82361bd8
	ctx.lr = 0x8211E890;
	sub_82361BD8(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r27,r27,64
	ctx.r27.s64 = ctx.r27.s64 + 64;
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 3, ctx.xer);
	// blt cr6,0x8211e86c
	if (ctx.cr6.lt) goto loc_8211E86C;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// ori r3,r4,9460
	ctx.r3.u64 = ctx.r4.u64 | 9460;
	// addi r4,r31,52
	ctx.r4.s64 = ctx.r31.s64 + 52;
	// lwzx r3,r31,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	// stb r30,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r30.u8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8211e8c8
	if (ctx.cr6.eq) goto loc_8211E8C8;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// bl 0x82361bd8
	ctx.lr = 0x8211E8C8;
	sub_82361BD8(ctx, base);
loc_8211E8C8:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// li r11,1
	ctx.r11.s64 = 1;
	// ori r9,r10,9660
	ctx.r9.u64 = ctx.r10.u64 | 9660;
	// ori r4,r8,9428
	ctx.r4.u64 = ctx.r8.u64 | 9428;
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
	ctx.lr = 0x8211E8F8;
	sub_82105B30(ctx, base);
	// li r3,9
	ctx.r3.s64 = 9;
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8211E908:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82105d30
	ctx.lr = 0x8211E910;
	sub_82105D30(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// addi r4,r31,52
	ctx.r4.s64 = ctx.r31.s64 + 52;
	// ori r10,r11,9568
	ctx.r10.u64 = ctx.r11.u64 | 9568;
	// stb r30,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r30.u8);
	// lwzx r3,r31,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8211e934
	if (ctx.cr6.eq) goto loc_8211E934;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// bl 0x82361bd8
	ctx.lr = 0x8211E934;
	sub_82361BD8(ctx, base);
loc_8211E934:
	// li r23,1
	ctx.r23.s64 = 1;
	// stw r30,1400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1400, ctx.r30.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// addi r29,r31,1080
	ctx.r29.s64 = ctx.r31.s64 + 1080;
	// ori r8,r9,9428
	ctx.r8.u64 = ctx.r9.u64 | 9428;
	// stb r23,1413(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1413, ctx.r23.u8);
	// lbz r10,3672(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3672);
	// lwzx r3,r31,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
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
	// beq cr6,0x8211e994
	if (ctx.cr6.eq) goto loc_8211E994;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82361bd8
	ctx.lr = 0x8211E988;
	sub_82361BD8(ctx, base);
	// lwz r11,1400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1400);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,1400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1400, ctx.r7.u32);
loc_8211E994:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8211E998:
	// lbz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8211e998
	if (!ctx.cr6.eq) goto loc_8211E998;
	// subf r11,r11,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r11.s64;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211e9c0
	if (ctx.cr6.eq) goto loc_8211E9C0;
	// stb r23,1414(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1414, ctx.r23.u8);
loc_8211E9C0:
	// li r4,-1
	ctx.r4.s64 = -1;
	// li r3,18
	ctx.r3.s64 = 18;
	// stw r4,1432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1432, ctx.r4.u32);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8211E9D8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82105d30
	ctx.lr = 0x8211E9E0;
	sub_82105D30(ctx, base);
	// li r11,19
	ctx.r11.s64 = 19;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8211E9F0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82363b18
	ctx.lr = 0x8211E9F8;
	sub_82363B18(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r10,1452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1452, ctx.r10.u32);
	// bl 0x82363b18
	ctx.lr = 0x8211EA0C;
	sub_82363B18(ctx, base);
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r9,10
	ctx.r9.s64 = 10;
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// stw r8,1456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1456, ctx.r8.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8211EA24:
	// lbz r7,1414(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1414);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8211ea38
	if (ctx.cr6.eq) goto loc_8211EA38;
	// li r11,-1
	ctx.r11.s64 = -1;
	// b 0x8211ea44
	goto loc_8211EA44;
loc_8211EA38:
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r11,1432(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1432);
	// stw r6,1432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1432, ctx.r6.u32);
loc_8211EA44:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8211ea74
	if (ctx.cr6.lt) goto loc_8211EA74;
	// bne cr6,0x8211f310
	if (!ctx.cr6.eq) goto loc_8211F310;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,22532
	ctx.r3.s64 = ctx.r31.s64 + 22532;
	// bl 0x82360620
	ctx.lr = 0x8211EA5C;
	sub_82360620(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82105d30
	ctx.lr = 0x8211EA64;
	sub_82105D30(ctx, base);
	// li r5,7
	ctx.r5.s64 = 7;
	// stw r5,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r5.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8211EA74:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82105d30
	ctx.lr = 0x8211EA7C;
	sub_82105D30(ctx, base);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// stw r4,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r4.u32);
	// bne cr6,0x8211f310
	if (!ctx.cr6.eq) goto loc_8211F310;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stb r30,1416(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1416, ctx.r30.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8211EAAC:
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,1480(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1480);
	// addis r5,r31,1
	ctx.r5.s64 = ctx.r31.s64 + 65536;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r5,9744
	ctx.r5.s64 = ctx.r5.s64 + 9744;
	// addi r3,r31,22532
	ctx.r3.s64 = ctx.r31.s64 + 22532;
	// stw r10,1076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1076, ctx.r10.u32);
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x82363248
	ctx.lr = 0x8211EAD4;
	sub_82363248(ctx, base);
	// li r8,11
	ctx.r8.s64 = 11;
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8211EAE4:
	// addi r30,r31,22532
	ctx.r30.s64 = ctx.r31.s64 + 22532;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82362fc0
	ctx.lr = 0x8211EAF0;
	sub_82362FC0(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8211eb04
	if (ctx.cr6.eq) goto loc_8211EB04;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82105e78
	ctx.lr = 0x8211EB04;
	sub_82105E78(ctx, base);
loc_8211EB04:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82362f20
	ctx.lr = 0x8211EB0C;
	sub_82362F20(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8211f310
	if (ctx.cr6.eq) goto loc_8211F310;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r5,22552(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22552);
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// stw r30,1076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1076, ctx.r30.u32);
	// bne cr6,0x8211ecb4
	if (!ctx.cr6.eq) goto loc_8211ECB4;
	// lwz r11,22548(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22548);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x8211f310
	if (ctx.cr6.gt) goto loc_8211F310;
	// lis r12,-32238
	ctx.r12.s64 = -2112749568;
	// addi r12,r12,-5292
	ctx.r12.s64 = ctx.r12.s64 + -5292;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8211EB78;
	case 1:
		goto loc_8211EC48;
	case 2:
		goto loc_8211EB78;
	case 3:
		goto loc_8211F310;
	case 4:
		goto loc_8211F310;
	case 5:
		goto loc_8211F310;
	case 6:
		goto loc_8211EC58;
	case 7:
		goto loc_8211EC58;
	case 8:
		goto loc_8211EC48;
	default:
		__builtin_unreachable();
	}
	// lwz r16,-5256(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -5256);
	// lwz r16,-5048(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -5048);
	// lwz r16,-5256(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -5256);
	// lwz r16,-3312(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -3312);
	// lwz r16,-3312(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -3312);
	// lwz r16,-3312(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -3312);
	// lwz r16,-5032(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -5032);
	// lwz r16,-5032(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -5032);
	// lwz r16,-5048(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -5048);
loc_8211EB78:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82105d30
	ctx.lr = 0x8211EB80;
	sub_82105D30(ctx, base);
	// lis r4,1
	ctx.r4.s64 = 65536;
	// ori r3,r4,9568
	ctx.r3.u64 = ctx.r4.u64 | 9568;
	// addi r4,r31,52
	ctx.r4.s64 = ctx.r31.s64 + 52;
	// lwzx r3,r31,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	// stb r30,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r30.u8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8211eba4
	if (ctx.cr6.eq) goto loc_8211EBA4;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// bl 0x82361bd8
	ctx.lr = 0x8211EBA4;
	sub_82361BD8(ctx, base);
loc_8211EBA4:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// stw r30,1400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1400, ctx.r30.u32);
	// li r23,1
	ctx.r23.s64 = 1;
	// ori r10,r11,9428
	ctx.r10.u64 = ctx.r11.u64 | 9428;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r29,r31,1080
	ctx.r29.s64 = ctx.r31.s64 + 1080;
	// stb r23,1413(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1413, ctx.r23.u8);
	// lwzx r3,r31,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// lbz r10,3672(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3672);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stb r10,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r10.u8);
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
	// beq cr6,0x8211ec04
	if (ctx.cr6.eq) goto loc_8211EC04;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82361bd8
	ctx.lr = 0x8211EBF8;
	sub_82361BD8(ctx, base);
	// lwz r11,1400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1400);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,1400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1400, ctx.r9.u32);
loc_8211EC04:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8211EC08:
	// lbz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8211ec08
	if (!ctx.cr6.eq) goto loc_8211EC08;
	// subf r11,r11,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r11.s64;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r7,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211ec30
	if (ctx.cr6.eq) goto loc_8211EC30;
	// stb r23,1414(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1414, ctx.r23.u8);
loc_8211EC30:
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,18
	ctx.r5.s64 = 18;
	// stw r6,1432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1432, ctx.r6.u32);
	// stw r5,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r5.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8211EC48:
	// li r4,19
	ctx.r4.s64 = 19;
	// stw r4,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r4.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8211EC58:
	// addis r27,r31,1
	ctx.r27.s64 = ctx.r31.s64 + 65536;
	// stw r30,1452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1452, ctx.r30.u32);
	// stw r30,1456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1456, ctx.r30.u32);
	// addi r29,r31,2267
	ctx.r29.s64 = ctx.r31.s64 + 2267;
	// addi r27,r27,9416
	ctx.r27.s64 = ctx.r27.s64 + 9416;
	// addi r28,r31,1612
	ctx.r28.s64 = ctx.r31.s64 + 1612;
	// li r30,3
	ctx.r30.s64 = 3;
	// li r23,1
	ctx.r23.s64 = 1;
loc_8211EC78:
	// li r5,64
	ctx.r5.s64 = 64;
	// stb r23,-3(r29)
	PPC_STORE_U8(ctx.r29.u32 + -3, ctx.r23.u8);
	// stb r23,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r23.u8);
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x82361bd8
	ctx.lr = 0x8211EC90;
	sub_82361BD8(ctx, base);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8211ec78
	if (!ctx.cr6.eq) goto loc_8211EC78;
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8211ECB4:
	// addis r25,r31,1
	ctx.r25.s64 = ctx.r31.s64 + 65536;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// addi r27,r31,1612
	ctx.r27.s64 = ctx.r31.s64 + 1612;
	// addi r25,r25,9744
	ctx.r25.s64 = ctx.r25.s64 + 9744;
	// addi r24,r31,1624
	ctx.r24.s64 = ctx.r31.s64 + 1624;
	// addi r26,r31,2264
	ctx.r26.s64 = ctx.r31.s64 + 2264;
	// li r23,1
	ctx.r23.s64 = 1;
	// ori r22,r11,9416
	ctx.r22.u64 = ctx.r11.u64 | 9416;
loc_8211ECD8:
	// li r5,64
	ctx.r5.s64 = 64;
	// stbx r30,r26,r29
	PPC_STORE_U8(ctx.r26.u32 + ctx.r29.u32, ctx.r30.u8);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x8259d2a0
	ctx.lr = 0x8211ECEC;
	sub_8259D2A0(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8211ECF4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8211ecf4
	if (!ctx.cr6.eq) goto loc_8211ECF4;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r8,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211ed48
	if (ctx.cr6.eq) goto loc_8211ED48;
	// add r28,r29,r31
	ctx.r28.u64 = ctx.r29.u64 + ctx.r31.u64;
	// stbx r23,r26,r29
	PPC_STORE_U8(ctx.r26.u32 + ctx.r29.u32, ctx.r23.u8);
	// stb r23,2267(r28)
	PPC_STORE_U8(ctx.r28.u32 + 2267, ctx.r23.u8);
	// lwz r7,0(r25)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmpwi cr6,r7,31
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 31, ctx.xer);
	// bne cr6,0x8211ed48
	if (!ctx.cr6.eq) goto loc_8211ED48;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x821136b0
	ctx.lr = 0x8211ED38;
	sub_821136B0(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8211ed48
	if (ctx.cr6.eq) goto loc_8211ED48;
	// stb r30,2267(r28)
	PPC_STORE_U8(ctx.r28.u32 + 2267, ctx.r30.u8);
loc_8211ED48:
	// lbzx r5,r26,r29
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r26.u32 + ctx.r29.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8211ed64
	if (!ctx.cr6.eq) goto loc_8211ED64;
	// li r5,64
	ctx.r5.s64 = 64;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwzx r3,r31,r22
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r22.u32);
	// bl 0x82361bd8
	ctx.lr = 0x8211ED64;
	sub_82361BD8(ctx, base);
loc_8211ED64:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// addi r24,r24,64
	ctx.r24.s64 = ctx.r24.s64 + 64;
	// addi r25,r25,7032
	ctx.r25.s64 = ctx.r25.s64 + 7032;
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 3, ctx.xer);
	// blt cr6,0x8211ecd8
	if (ctx.cr6.lt) goto loc_8211ECD8;
	// li r4,12
	ctx.r4.s64 = 12;
	// stw r4,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r4.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8211ED8C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82106068
	ctx.lr = 0x8211ED94;
	sub_82106068(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r4,1448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1448, ctx.r4.u32);
	// bl 0x8211bee0
	ctx.lr = 0x8211EDA4;
	sub_8211BEE0(ctx, base);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r3,1
	ctx.r3.s64 = 65536;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// ori r9,r10,9600
	ctx.r9.u64 = ctx.r10.u64 | 9600;
	// ori r11,r3,9432
	ctx.r11.u64 = ctx.r3.u64 | 9432;
	// ori r5,r8,9596
	ctx.r5.u64 = ctx.r8.u64 | 9596;
	// ori r10,r4,9592
	ctx.r10.u64 = ctx.r4.u64 | 9592;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r6,r31,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// lwzx r7,r31,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwzx r5,r31,r5
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// lwzx r4,r31,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// bl 0x82105b30
	ctx.lr = 0x8211EDDC;
	sub_82105B30(ctx, base);
	// li r9,13
	ctx.r9.s64 = 13;
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8211EDEC:
	// lbz r8,1413(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1413);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8211f310
	if (!ctx.cr6.eq) goto loc_8211F310;
	// li r23,1
	ctx.r23.s64 = 1;
	// lbz r7,1414(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1414);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// stb r23,1421(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1421, ctx.r23.u8);
	// bne cr6,0x8211f310
	if (!ctx.cr6.eq) goto loc_8211F310;
	// li r28,-1
	ctx.r28.s64 = -1;
	// lwz r29,1432(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1432);
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// stw r28,1432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1432, ctx.r28.u32);
	// beq cr6,0x8211f310
	if (ctx.cr6.eq) goto loc_8211F310;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82105d30
	ctx.lr = 0x8211EE28;
	sub_82105D30(ctx, base);
	// cmplwi cr6,r29,3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 3, ctx.xer);
	// blt cr6,0x8211ee4c
	if (ctx.cr6.lt) goto loc_8211EE4C;
	// bne cr6,0x8211f310
	if (!ctx.cr6.eq) goto loc_8211F310;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,19
	ctx.r5.s64 = 19;
	// stb r6,1421(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1421, ctx.r6.u8);
	// stw r5,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r5.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8211EE4C:
	// li r30,0
	ctx.r30.s64 = 0;
	// add r11,r29,r31
	ctx.r11.u64 = ctx.r29.u64 + ctx.r31.u64;
	// stb r30,1421(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1421, ctx.r30.u8);
	// lbz r4,2264(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2264);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8211ef24
	if (!ctx.cr6.eq) goto loc_8211EF24;
	// lis r3,1
	ctx.r3.s64 = 65536;
	// addi r4,r31,52
	ctx.r4.s64 = ctx.r31.s64 + 52;
	// ori r11,r3,9608
	ctx.r11.u64 = ctx.r3.u64 | 9608;
	// stb r30,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r30.u8);
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8211ee88
	if (ctx.cr6.eq) goto loc_8211EE88;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// bl 0x82361bd8
	ctx.lr = 0x8211EE88;
	sub_82361BD8(ctx, base);
loc_8211EE88:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stb r23,1413(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1413, ctx.r23.u8);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// stw r30,1400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1400, ctx.r30.u32);
	// addi r29,r31,1080
	ctx.r29.s64 = ctx.r31.s64 + 1080;
	// ori r9,r10,9428
	ctx.r9.u64 = ctx.r10.u64 | 9428;
	// lbz r10,3672(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3672);
	// lwzx r3,r31,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
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
	// beq cr6,0x8211eee4
	if (ctx.cr6.eq) goto loc_8211EEE4;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82361bd8
	ctx.lr = 0x8211EED8;
	sub_82361BD8(ctx, base);
	// lwz r11,1400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1400);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,1400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1400, ctx.r8.u32);
loc_8211EEE4:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8211EEE8:
	// lbz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8211eee8
	if (!ctx.cr6.eq) goto loc_8211EEE8;
	// subf r11,r11,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r11.s64;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r6,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211ef10
	if (ctx.cr6.eq) goto loc_8211EF10;
	// stb r23,1414(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1414, ctx.r23.u8);
loc_8211EF10:
	// li r5,17
	ctx.r5.s64 = 17;
	// stw r28,1432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1432, ctx.r28.u32);
	// stw r5,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r5.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8211EF24:
	// lbz r4,2267(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2267);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8211eff0
	if (ctx.cr6.eq) goto loc_8211EFF0;
	// lis r3,1
	ctx.r3.s64 = 65536;
	// addi r4,r31,52
	ctx.r4.s64 = ctx.r31.s64 + 52;
	// ori r11,r3,9468
	ctx.r11.u64 = ctx.r3.u64 | 9468;
	// stb r30,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r30.u8);
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8211ef54
	if (ctx.cr6.eq) goto loc_8211EF54;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// bl 0x82361bd8
	ctx.lr = 0x8211EF54;
	sub_82361BD8(ctx, base);
loc_8211EF54:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stb r23,1413(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1413, ctx.r23.u8);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// stw r30,1400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1400, ctx.r30.u32);
	// addi r29,r31,1080
	ctx.r29.s64 = ctx.r31.s64 + 1080;
	// ori r9,r10,9428
	ctx.r9.u64 = ctx.r10.u64 | 9428;
	// lbz r10,3672(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3672);
	// lwzx r3,r31,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
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
	// beq cr6,0x8211efb0
	if (ctx.cr6.eq) goto loc_8211EFB0;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82361bd8
	ctx.lr = 0x8211EFA4;
	sub_82361BD8(ctx, base);
	// lwz r11,1400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1400);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,1400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1400, ctx.r8.u32);
loc_8211EFB0:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8211EFB4:
	// lbz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8211efb4
	if (!ctx.cr6.eq) goto loc_8211EFB4;
	// subf r11,r11,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r11.s64;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r6,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211ef10
	if (ctx.cr6.eq) goto loc_8211EF10;
	// li r5,17
	ctx.r5.s64 = 17;
	// stb r23,1414(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1414, ctx.r23.u8);
	// stw r28,1432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1432, ctx.r28.u32);
	// stw r5,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r5.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8211EFF0:
	// addi r4,r29,403
	ctx.r4.s64 = ctx.r29.s64 + 403;
	// stw r29,1440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1440, ctx.r29.u32);
	// li r5,64
	ctx.r5.s64 = 64;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r31,2008
	ctx.r3.s64 = ctx.r31.s64 + 2008;
	// lwzx r4,r11,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x8259d2a0
	ctx.lr = 0x8211F00C;
	sub_8259D2A0(ctx, base);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lwz r10,1440(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1440);
	// li r5,7032
	ctx.r5.s64 = 7032;
	// addi r29,r11,6040
	ctx.r29.s64 = ctx.r11.s64 + 6040;
	// mulli r11,r10,7032
	ctx.r11.s64 = ctx.r10.s64 * 7032;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r29,24
	ctx.r3.s64 = ctx.r29.s64 + 24;
	// addis r4,r9,1
	ctx.r4.s64 = ctx.r9.s64 + 65536;
	// addi r4,r4,9744
	ctx.r4.s64 = ctx.r4.s64 + 9744;
	// bl 0x8259d3a0
	ctx.lr = 0x8211F034;
	sub_8259D3A0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821134e8
	ctx.lr = 0x8211F03C;
	sub_821134E8(ctx, base);
	// addi r29,r31,1816
	ctx.r29.s64 = ctx.r31.s64 + 1816;
	// addi r28,r31,1612
	ctx.r28.s64 = ctx.r31.s64 + 1612;
	// addi r27,r31,2264
	ctx.r27.s64 = ctx.r31.s64 + 2264;
	// lis r26,-32255
	ctx.r26.s64 = -2113863680;
loc_8211F04C:
	// lbzx r8,r27,r30
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r30.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8211f06c
	if (ctx.cr6.eq) goto loc_8211F06C;
	// li r5,64
	ctx.r5.s64 = 64;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8259d2a0
	ctx.lr = 0x8211F068;
	sub_8259D2A0(ctx, base);
	// b 0x8211f074
	goto loc_8211F074;
loc_8211F06C:
	// lbz r11,3672(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 3672);
	// stb r11,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r11.u8);
loc_8211F074:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r29,r29,64
	ctx.r29.s64 = ctx.r29.s64 + 64;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// blt cr6,0x8211f04c
	if (ctx.cr6.lt) goto loc_8211F04C;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lwz r7,1440(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1440);
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// stw r7,1444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1444, ctx.r7.u32);
	// lbz r11,58(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 58);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211f0c8
	if (ctx.cr6.eq) goto loc_8211F0C8;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,22532
	ctx.r3.s64 = ctx.r31.s64 + 22532;
	// bl 0x82363348
	ctx.lr = 0x8211F0B8;
	sub_82363348(ctx, base);
	// li r5,14
	ctx.r5.s64 = 14;
	// stw r5,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r5.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8211F0C8:
	// li r4,15
	ctx.r4.s64 = 15;
	// stw r4,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r4.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8211F0D8:
	// lbz r3,1414(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1414);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8211f310
	if (!ctx.cr6.eq) goto loc_8211F310;
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r11,1432(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1432);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// stw r10,1432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1432, ctx.r10.u32);
	// beq cr6,0x8211f310
	if (ctx.cr6.eq) goto loc_8211F310;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82105d30
	ctx.lr = 0x8211F100;
	sub_82105D30(ctx, base);
	// li r9,12
	ctx.r9.s64 = 12;
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8211F110:
	// addi r30,r31,22532
	ctx.r30.s64 = ctx.r31.s64 + 22532;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82362fc0
	ctx.lr = 0x8211F11C;
	sub_82362FC0(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8211f130
	if (ctx.cr6.eq) goto loc_8211F130;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82105e78
	ctx.lr = 0x8211F130;
	sub_82105E78(ctx, base);
loc_8211F130:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82362f20
	ctx.lr = 0x8211F138;
	sub_82362F20(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8211f310
	if (ctx.cr6.eq) goto loc_8211F310;
	// li r6,15
	ctx.r6.s64 = 15;
	// stw r6,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r6.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8211F154:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82105d30
	ctx.lr = 0x8211F15C;
	sub_82105D30(ctx, base);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// addi r4,r31,52
	ctx.r4.s64 = ctx.r31.s64 + 52;
	// ori r3,r5,9424
	ctx.r3.u64 = ctx.r5.u64 | 9424;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwzx r3,r31,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	// stb r30,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r30.u8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8211f184
	if (ctx.cr6.eq) goto loc_8211F184;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// bl 0x82361bd8
	ctx.lr = 0x8211F184;
	sub_82361BD8(ctx, base);
loc_8211F184:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// stw r30,1400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1400, ctx.r30.u32);
	// li r23,1
	ctx.r23.s64 = 1;
	// ori r10,r11,9428
	ctx.r10.u64 = ctx.r11.u64 | 9428;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r29,r31,1080
	ctx.r29.s64 = ctx.r31.s64 + 1080;
	// stb r23,1413(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1413, ctx.r23.u8);
	// lwzx r3,r31,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// lbz r10,3672(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3672);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stb r10,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r10.u8);
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
	// beq cr6,0x8211f1e4
	if (ctx.cr6.eq) goto loc_8211F1E4;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82361bd8
	ctx.lr = 0x8211F1D8;
	sub_82361BD8(ctx, base);
	// lwz r11,1400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1400);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,1400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1400, ctx.r9.u32);
loc_8211F1E4:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8211F1E8:
	// lbz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8211f1e8
	if (!ctx.cr6.eq) goto loc_8211F1E8;
	// subf r11,r11,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r11.s64;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r7,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211f210
	if (ctx.cr6.eq) goto loc_8211F210;
	// stb r23,1414(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1414, ctx.r23.u8);
loc_8211F210:
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r6,1432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1432, ctx.r6.u32);
	// stw r5,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r5.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8211F228:
	// lbz r4,1414(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1414);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8211f310
	if (!ctx.cr6.eq) goto loc_8211F310;
	// li r3,-1
	ctx.r3.s64 = -1;
	// lwz r11,1432(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1432);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// stw r3,1432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1432, ctx.r3.u32);
	// beq cr6,0x8211f310
	if (ctx.cr6.eq) goto loc_8211F310;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82105d30
	ctx.lr = 0x8211F250;
	sub_82105D30(ctx, base);
	// li r11,20
	ctx.r11.s64 = 20;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8211F260:
	// lbz r10,1414(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1414);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8211f310
	if (!ctx.cr6.eq) goto loc_8211F310;
	// li r9,-1
	ctx.r9.s64 = -1;
	// lwz r11,1432(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1432);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// stw r9,1432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1432, ctx.r9.u32);
	// beq cr6,0x8211f310
	if (ctx.cr6.eq) goto loc_8211F310;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82105d30
	ctx.lr = 0x8211F288;
	sub_82105D30(ctx, base);
	// li r8,19
	ctx.r8.s64 = 19;
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8211F298:
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// bne cr6,0x8211f2c0
	if (!ctx.cr6.eq) goto loc_8211F2C0;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// stb r30,1416(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1416, ctx.r30.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8211F2C0:
	// li r5,20
	ctx.r5.s64 = 20;
	// stw r5,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r5.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8211F2D0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82118f68
	ctx.lr = 0x8211F2D8;
	sub_82118F68(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8211f310
	if (ctx.cr6.eq) goto loc_8211F310;
	// li r4,21
	ctx.r4.s64 = 21;
	// stw r4,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r4.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8211F2F0:
	// li r3,17
	ctx.r3.s64 = 17;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// stb r11,1416(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1416, ctx.r11.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8211F308:
	// li r10,20
	ctx.r10.s64 = 20;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_8211F310:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_8211F330) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x8211F338;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,13524(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13524);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211f360
	if (ctx.cr6.eq) goto loc_8211F360;
	// lwz r4,13528(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13528);
	// li r3,2
	ctx.r3.s64 = 2;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8211F360;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8211F360:
	// addi r30,r31,11504
	ctx.r30.s64 = ctx.r31.s64 + 11504;
	// li r5,128
	ctx.r5.s64 = 128;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259d2a0
	ctx.lr = 0x8211F374;
	sub_8259D2A0(ctx, base);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r6,r9,13280
	ctx.r6.s64 = ctx.r9.s64 + 13280;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// addi r8,r10,-15072
	ctx.r8.s64 = ctx.r10.s64 + -15072;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r31,11648
	ctx.r4.s64 = ctx.r31.s64 + 11648;
	// addi r3,r11,25864
	ctx.r3.s64 = ctx.r11.s64 + 25864;
	// bl 0x822299a0
	ctx.lr = 0x8211F3A8;
	sub_822299A0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12140, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_8211F3B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x8211F3C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211f3e8
	if (ctx.cr6.eq) goto loc_8211F3E8;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r30,r31,14464
	ctx.r30.s64 = ctx.r31.s64 + 14464;
	// addi r29,r11,-26144
	ctx.r29.s64 = ctx.r11.s64 + -26144;
	// b 0x8211f3f4
	goto loc_8211F3F4;
loc_8211F3E8:
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r30,r31,13540
	ctx.r30.s64 = ctx.r31.s64 + 13540;
	// addi r29,r11,-13960
	ctx.r29.s64 = ctx.r11.s64 + -13960;
loc_8211F3F4:
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r31,12040
	ctx.r3.s64 = ctx.r31.s64 + 12040;
	// bl 0x8259d2a0
	ctx.lr = 0x8211F404;
	sub_8259D2A0(ctx, base);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// addi r5,r10,13316
	ctx.r5.s64 = ctx.r10.s64 + 13316;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r4,r10,13304
	ctx.r4.s64 = ctx.r10.s64 + 13304;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// li r7,924
	ctx.r7.s64 = 924;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r3,r11,25864
	ctx.r3.s64 = ctx.r11.s64 + 25864;
	// bl 0x8222c9f8
	ctx.lr = 0x8211F43C;
	sub_8222C9F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_8211F448) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// stw r6,13536(r3)
	PPC_STORE_U32(ctx.r3.u32 + 13536, ctx.r6.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r11,13532(r3)
	PPC_STORE_U32(ctx.r3.u32 + 13532, ctx.r11.u32);
	// b 0x8211f3b8
	sub_8211F3B8(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_8211F460) {
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
	ctx.lr = 0x8211F488;
	sub_820FA120(ctx, base);
	// lwz r11,13524(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13524);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211f4a8
	if (ctx.cr6.eq) goto loc_8211F4A8;
	// lwz r4,13528(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13528);
	// li r3,6
	ctx.r3.s64 = 6;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8211F4A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8211F4A8:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,-27592
	ctx.r5.s64 = ctx.r11.s64 + -27592;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,12344
	ctx.r3.s64 = ctx.r31.s64 + 12344;
	// bl 0x8211ca00
	ctx.lr = 0x8211F4C0;
	sub_8211CA00(ctx, base);
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
PPC_FUNC_IMPL(__imp__sub_8211F4D8) {
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
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8211f604
	if (ctx.cr6.eq) goto loc_8211F604;
	// addi r30,r31,22532
	ctx.r30.s64 = ctx.r31.s64 + 22532;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236bdb0
	ctx.lr = 0x8211F508;
	sub_8236BDB0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82362f20
	ctx.lr = 0x8211F510;
	sub_82362F20(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// stb r8,1415(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1415, ctx.r8.u8);
	// bgt cr6,0x8211f604
	if (ctx.cr6.gt) goto loc_8211F604;
	// lis r12,-32238
	ctx.r12.s64 = -2112749568;
	// addi r12,r12,-2744
	ctx.r12.s64 = ctx.r12.s64 + -2744;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8211F578;
	case 1:
		goto loc_8211F584;
	case 2:
		goto loc_8211F590;
	case 3:
		goto loc_8211F5A8;
	case 4:
		goto loc_8211F5B4;
	case 5:
		goto loc_8211F5C0;
	case 6:
		goto loc_8211F5CC;
	case 7:
		goto loc_8211F59C;
	case 8:
		goto loc_8211F5D8;
	case 9:
		goto loc_8211F5E4;
	case 10:
		goto loc_8211F5F0;
	case 11:
		goto loc_8211F5FC;
	default:
		__builtin_unreachable();
	}
	// lwz r16,-2696(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -2696);
	// lwz r16,-2684(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -2684);
	// lwz r16,-2672(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -2672);
	// lwz r16,-2648(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -2648);
	// lwz r16,-2636(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -2636);
	// lwz r16,-2624(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -2624);
	// lwz r16,-2612(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -2612);
	// lwz r16,-2660(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -2660);
	// lwz r16,-2600(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -2600);
	// lwz r16,-2588(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -2588);
	// lwz r16,-2576(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -2576);
	// lwz r16,-2564(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -2564);
loc_8211F578:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8210ffd0
	ctx.lr = 0x8211F580;
	sub_8210FFD0(ctx, base);
	// b 0x8211f604
	goto loc_8211F604;
loc_8211F584:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8211b8c8
	ctx.lr = 0x8211F58C;
	sub_8211B8C8(ctx, base);
	// b 0x8211f604
	goto loc_8211F604;
loc_8211F590:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8211cdd8
	ctx.lr = 0x8211F598;
	sub_8211CDD8(ctx, base);
	// b 0x8211f604
	goto loc_8211F604;
loc_8211F59C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82110c28
	ctx.lr = 0x8211F5A4;
	sub_82110C28(ctx, base);
	// b 0x8211f604
	goto loc_8211F604;
loc_8211F5A8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8211e310
	ctx.lr = 0x8211F5B0;
	sub_8211E310(ctx, base);
	// b 0x8211f604
	goto loc_8211F604;
loc_8211F5B4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82110e48
	ctx.lr = 0x8211F5BC;
	sub_82110E48(ctx, base);
	// b 0x8211f604
	goto loc_8211F604;
loc_8211F5C0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821181e8
	ctx.lr = 0x8211F5C8;
	sub_821181E8(ctx, base);
	// b 0x8211f604
	goto loc_8211F604;
loc_8211F5CC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821110f0
	ctx.lr = 0x8211F5D4;
	sub_821110F0(ctx, base);
	// b 0x8211f604
	goto loc_8211F604;
loc_8211F5D8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821173d8
	ctx.lr = 0x8211F5E0;
	sub_821173D8(ctx, base);
	// b 0x8211f604
	goto loc_8211F604;
loc_8211F5E4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82110540
	ctx.lr = 0x8211F5EC;
	sub_82110540(ctx, base);
	// b 0x8211f604
	goto loc_8211F604;
loc_8211F5F0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821102c0
	ctx.lr = 0x8211F5F8;
	sub_821102C0(ctx, base);
	// b 0x8211f604
	goto loc_8211F604;
loc_8211F5FC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82110aa0
	ctx.lr = 0x8211F604;
	sub_82110AA0(ctx, base);
loc_8211F604:
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
PPC_FUNC_IMPL(__imp__sub_8211F620) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baec
	ctx.lr = 0x8211F628;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lbz r11,13449(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 13449);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211f828
	if (ctx.cr6.eq) goto loc_8211F828;
	// lbz r10,13448(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 13448);
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8211f72c
	if (ctx.cr6.eq) goto loc_8211F72C;
	// lwz r9,12140(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12140);
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// stb r25,13448(r30)
	PPC_STORE_U8(ctx.r30.u32 + 13448, ctx.r25.u8);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8211f70c
	if (!ctx.cr6.gt) goto loc_8211F70C;
	// addi r27,r30,14464
	ctx.r27.s64 = ctx.r30.s64 + 14464;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
loc_8211F668:
	// lwz r11,12136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12136);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// add r29,r11,r28
	ctx.r29.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r31,r29,12396
	ctx.r31.s64 = ctx.r29.s64 + 12396;
	// addi r4,r29,12460
	ctx.r4.s64 = ctx.r29.s64 + 12460;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lbz r5,12554(r29)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r29.u32 + 12554);
	// bl 0x821099b0
	ctx.lr = 0x8211F688;
	sub_821099B0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8211f69c
	if (!ctx.cr6.eq) goto loc_8211F69C;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// b 0x8211f6d0
	goto loc_8211F6D0;
loc_8211F69C:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_8211F6A0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x8211f6c4
	if (ctx.cr6.eq) goto loc_8211F6C4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8211f6a0
	if (ctx.cr6.eq) goto loc_8211F6A0;
loc_8211F6C4:
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
loc_8211F6D0:
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8211f6ec
	if (ctx.cr6.eq) goto loc_8211F6EC;
	// lbz r4,12555(r29)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r29.u32 + 12555);
	// ori r3,r4,1
	ctx.r3.u64 = ctx.r4.u64 | 1;
	// stb r3,12555(r29)
	PPC_STORE_U8(ctx.r29.u32 + 12555, ctx.r3.u8);
	// b 0x8211f6f8
	goto loc_8211F6F8;
loc_8211F6EC:
	// lbz r11,12555(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 12555);
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r10,12555(r29)
	PPC_STORE_U8(ctx.r29.u32 + 12555, ctx.r10.u8);
loc_8211F6F8:
	// lwz r9,12140(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12140);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r28,r28,16384
	ctx.r28.s64 = ctx.r28.s64 + 16384;
	// cmpw cr6,r26,r9
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8211f668
	if (ctx.cr6.lt) goto loc_8211F668;
loc_8211F70C:
	// lwz r11,13516(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13516);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211f72c
	if (ctx.cr6.eq) goto loc_8211F72C;
	// lwz r5,13520(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13520);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8211F72C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8211F72C:
	// lbz r8,13450(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 13450);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8211f768
	if (ctx.cr6.eq) goto loc_8211F768;
	// lwz r11,13508(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13508);
	// stb r25,13450(r30)
	PPC_STORE_U8(ctx.r30.u32 + 13450, ctx.r25.u8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211f768
	if (ctx.cr6.eq) goto loc_8211F768;
	// lwz r7,13456(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13456);
	// lwz r5,13512(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13512);
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// lwz r3,12144(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12144);
	// stw r25,13508(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13508, ctx.r25.u32);
	// rlwinm r4,r6,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8211F768;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8211F768:
	// lwz r11,11480(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11480);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8211f784
	if (ctx.cr6.eq) goto loc_8211F784;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x8211f784
	if (!ctx.cr6.eq) goto loc_8211F784;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8211c620
	ctx.lr = 0x8211F784;
	sub_8211C620(ctx, base);
loc_8211F784:
	// lbz r5,13453(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 13453);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8211f7ac
	if (ctx.cr6.eq) goto loc_8211F7AC;
	// lwz r11,12144(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12144);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8211f7a4
	if (ctx.cr6.eq) goto loc_8211F7A4;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x8211f7ac
	if (!ctx.cr6.eq) goto loc_8211F7AC;
loc_8211F7A4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8211bfe8
	ctx.lr = 0x8211F7AC;
	sub_8211BFE8(ctx, base);
loc_8211F7AC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8222df00
	ctx.lr = 0x8211F7B4;
	sub_8222DF00(ctx, base);
	// lwz r4,12336(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12336);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8211f828
	if (ctx.cr6.eq) goto loc_8211F828;
	// lwz r3,12336(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12336);
	// lwz r11,12144(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12144);
	// stw r25,12336(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12336, ctx.r25.u32);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// stw r3,12340(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12340, ctx.r3.u32);
	// bgt cr6,0x8211f828
	if (ctx.cr6.gt) goto loc_8211F828;
	// lis r12,-32238
	ctx.r12.s64 = -2112749568;
	// addi r12,r12,-2064
	ctx.r12.s64 = ctx.r12.s64 + -2064;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8211F810;
	case 1:
		goto loc_8211F828;
	case 2:
		goto loc_8211F828;
	case 3:
		goto loc_8211F828;
	case 4:
		goto loc_8211F820;
	case 5:
		goto loc_8211F828;
	case 6:
		goto loc_8211F820;
	case 7:
		goto loc_8211F810;
	default:
		__builtin_unreachable();
	}
	// lwz r16,-2032(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -2032);
	// lwz r16,-2008(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -2008);
	// lwz r16,-2008(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -2008);
	// lwz r16,-2008(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -2008);
	// lwz r16,-2016(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -2016);
	// lwz r16,-2008(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -2008);
	// lwz r16,-2016(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -2016);
	// lwz r16,-2032(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -2032);
loc_8211F810:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8211f460
	ctx.lr = 0x8211F818;
	sub_8211F460(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
loc_8211F820:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82112c38
	ctx.lr = 0x8211F828;
	sub_82112C38(ctx, base);
loc_8211F828:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_8211F830) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x8211F838;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,32352
	ctx.r11.s64 = ctx.r11.s64 + 32352;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r4,8
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 8, ctx.xer);
	// stw r5,13516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13516, ctx.r5.u32);
	// stw r6,13520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13520, ctx.r6.u32);
	// stw r4,11480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11480, ctx.r4.u32);
	// stb r8,13452(r31)
	PPC_STORE_U8(ctx.r31.u32 + 13452, ctx.r8.u8);
	// stw r30,13464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13464, ctx.r30.u32);
	// stw r30,12140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12140, ctx.r30.u32);
	// stw r11,13460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13460, ctx.r11.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,11484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11484, ctx.r10.u32);
	// bgt cr6,0x8211fa20
	if (ctx.cr6.gt) goto loc_8211FA20;
	// lis r12,-32238
	ctx.r12.s64 = -2112749568;
	// addi r12,r12,-1888
	ctx.r12.s64 = ctx.r12.s64 + -1888;
	// rlwinm r0,r4,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r4.u64) {
	case 0:
		goto loc_8211F8C4;
	case 1:
		goto loc_8211F8C4;
	case 2:
		goto loc_8211F928;
	case 3:
		goto loc_8211F968;
	case 4:
		goto loc_8211F968;
	case 5:
		goto loc_8211F97C;
	case 6:
		goto loc_8211F9B0;
	case 7:
		goto loc_8211F9B0;
	case 8:
		goto loc_8211F9E4;
	default:
		__builtin_unreachable();
	}
	// lwz r16,-1852(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -1852);
	// lwz r16,-1852(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -1852);
	// lwz r16,-1752(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -1752);
	// lwz r16,-1688(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -1688);
	// lwz r16,-1688(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -1688);
	// lwz r16,-1668(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -1668);
	// lwz r16,-1616(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -1616);
	// lwz r16,-1616(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -1616);
	// lwz r16,-1564(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -1564);
loc_8211F8C4:
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// li r29,1
	ctx.r29.s64 = 1;
	// beq cr6,0x8211f8d4
	if (ctx.cr6.eq) goto loc_8211F8D4;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_8211F8D4:
	// lwz r11,13524(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13524);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211f8f0
	if (ctx.cr6.eq) goto loc_8211F8F0;
	// lwz r4,13528(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13528);
	// li r3,1
	ctx.r3.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8211F8F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8211F8F0:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lwz r4,12136(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12136);
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r11,r11,-24936
	ctx.r11.s64 = ctx.r11.s64 + -24936;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// addi r8,r10,11768
	ctx.r8.s64 = ctx.r10.s64 + 11768;
	// li r7,20
	ctx.r7.s64 = 20;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,16384
	ctx.r5.s64 = 16384;
	// addi r3,r11,8376
	ctx.r3.s64 = ctx.r11.s64 + 8376;
	// bl 0x82208250
	ctx.lr = 0x8211F91C;
	sub_82208250(ctx, base);
	// stw r30,11476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11476, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_8211F928:
	// lis r9,7
	ctx.r9.s64 = 458752;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// ori r8,r9,14715
	ctx.r8.u64 = ctx.r9.u64 | 14715;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r10,r11,r8
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// addis r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 458752;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// addi r9,r11,14538
	ctx.r9.s64 = ctx.r11.s64 + 14538;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r7,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bl 0x8211f330
	ctx.lr = 0x8211F960;
	sub_8211F330(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_8211F968:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8211f330
	ctx.lr = 0x8211F974;
	sub_8211F330(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_8211F97C:
	// lwz r11,13524(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13524);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211f998
	if (ctx.cr6.eq) goto loc_8211F998;
	// lwz r4,13528(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13528);
	// li r3,2
	ctx.r3.s64 = 2;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8211F998;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8211F998:
	// addi r4,r31,14464
	ctx.r4.s64 = ctx.r31.s64 + 14464;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8211c808
	ctx.lr = 0x8211F9A4;
	sub_8211C808(ctx, base);
	// stw r30,12140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12140, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_8211F9B0:
	// lwz r11,13524(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13524);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211f9cc
	if (ctx.cr6.eq) goto loc_8211F9CC;
	// lwz r4,13528(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13528);
	// li r3,2
	ctx.r3.s64 = 2;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8211F9CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8211F9CC:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8211f3b8
	ctx.lr = 0x8211F9DC;
	sub_8211F3B8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_8211F9E4:
	// lwz r11,13524(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13524);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211fa00
	if (ctx.cr6.eq) goto loc_8211FA00;
	// lwz r4,13528(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13528);
	// li r3,2
	ctx.r3.s64 = 2;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8211FA00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8211FA00:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// addi r4,r10,13296
	ctx.r4.s64 = ctx.r10.s64 + 13296;
	// addi r3,r11,2896
	ctx.r3.s64 = ctx.r11.s64 + 2896;
	// bl 0x8236e9a0
	ctx.lr = 0x8211FA18;
	sub_8236E9A0(ctx, base);
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r6,11476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11476, ctx.r6.u32);
loc_8211FA20:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_8211FA28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bac0
	ctx.lr = 0x8211FA30;
	__savegprlr_14(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r20,r11,-32560
	ctx.r20.s64 = ctx.r11.s64 + -32560;
	// addis r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 196608;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// addi r11,r11,12424
	ctx.r11.s64 = ctx.r11.s64 + 12424;
	// stw r20,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r20.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm r9,r10,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// bl 0x82101d08
	ctx.lr = 0x8211FA7C;
	sub_82101D08(ctx, base);
	// addis r10,r31,7
	ctx.r10.s64 = ctx.r31.s64 + 458752;
	// lis r5,7
	ctx.r5.s64 = 458752;
	// addi r10,r10,16293
	ctx.r10.s64 = ctx.r10.s64 + 16293;
	// lis r4,7
	ctx.r4.s64 = 458752;
	// ori r9,r5,16292
	ctx.r9.u64 = ctx.r5.u64 | 16292;
	// li r14,0
	ctx.r14.s64 = 0;
	// li r22,1
	ctx.r22.s64 = 1;
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// ori r11,r4,16294
	ctx.r11.u64 = ctx.r4.u64 | 16294;
	// stw r10,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r10.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8211fab4
	if (ctx.cr6.eq) goto loc_8211FAB4;
	// stbx r14,r31,r9
	PPC_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r14.u8);
	// b 0x8211fac4
	goto loc_8211FAC4;
loc_8211FAB4:
	// lbzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8211fac4
	if (ctx.cr6.eq) goto loc_8211FAC4;
	// stbx r22,r31,r9
	PPC_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r22.u8);
loc_8211FAC4:
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stb r14,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r14.u8);
	// stb r14,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r14.u8);
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r17,r11,26080
	ctx.r17.s64 = ctx.r11.s64 + 26080;
	// lis r11,7
	ctx.r11.s64 = 458752;
	// ori r10,r11,16292
	ctx.r10.u64 = ctx.r11.u64 | 16292;
	// stw r17,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r17.u32);
	// lbzx r9,r17,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r17.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8211fb04
	if (ctx.cr6.eq) goto loc_8211FB04;
	// lbz r8,0(r20)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r20.u32 + 0);
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8211fb08
	if (!ctx.cr6.eq) goto loc_8211FB08;
loc_8211FB04:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_8211FB08:
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// lis r5,7
	ctx.r5.s64 = 458752;
	// lis r4,7
	ctx.r4.s64 = 458752;
	// ori r30,r5,16288
	ctx.r30.u64 = ctx.r5.u64 | 16288;
	// ori r21,r4,16284
	ctx.r21.u64 = ctx.r4.u64 | 16284;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8211fb3c
	if (!ctx.cr6.eq) goto loc_8211FB3C;
	// add r11,r31,r30
	ctx.r11.u64 = ctx.r31.u64 + ctx.r30.u64;
	// lwzx r10,r31,r21
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r21.u32);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8211fb3c
	if (ctx.cr6.eq) goto loc_8211FB3C;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8211FB3C:
	// addi r3,r31,2736
	ctx.r3.s64 = ctx.r31.s64 + 2736;
	// bl 0x8210de48
	ctx.lr = 0x8211FB44;
	sub_8210DE48(ctx, base);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// addi r3,r11,-21272
	ctx.r3.s64 = ctx.r11.s64 + -21272;
	// bl 0x8210ce60
	ctx.lr = 0x8211FB50;
	sub_8210CE60(ctx, base);
	// lis r11,-32110
	ctx.r11.s64 = -2104360960;
	// addi r19,r11,12656
	ctx.r19.s64 = ctx.r11.s64 + 12656;
	// lwz r3,3328(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 3328);
	// stw r19,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r19.u32);
	// bl 0x82361090
	ctx.lr = 0x8211FB64;
	sub_82361090(ctx, base);
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// bl 0x8210b3c8
	ctx.lr = 0x8211FB6C;
	sub_8210B3C8(ctx, base);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// add r30,r31,r30
	ctx.r30.u64 = ctx.r31.u64 + ctx.r30.u64;
	// addi r11,r11,6040
	ctx.r11.s64 = ctx.r11.s64 + 6040;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// ori r26,r10,16276
	ctx.r26.u64 = ctx.r10.u64 | 16276;
	// lfs f0,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x8211fb9c
	if (ctx.cr6.eq) goto loc_8211FB9C;
	// stwx r22,r31,r26
	PPC_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r22.u32);
loc_8211FB9C:
	// addis r29,r31,7
	ctx.r29.s64 = ctx.r31.s64 + 458752;
	// addi r29,r29,14496
	ctx.r29.s64 = ctx.r29.s64 + 14496;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82361ab8
	ctx.lr = 0x8211FBAC;
	sub_82361AB8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8210d660
	ctx.lr = 0x8211FBB4;
	sub_8210D660(ctx, base);
	// lbz r9,223(r29)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + 223);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8211fbc8
	if (ctx.cr6.eq) goto loc_8211FBC8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8211a6b8
	ctx.lr = 0x8211FBC8;
	sub_8211A6B8(ctx, base);
loc_8211FBC8:
	// addis r3,r31,7
	ctx.r3.s64 = ctx.r31.s64 + 458752;
	// addi r3,r3,15320
	ctx.r3.s64 = ctx.r3.s64 + 15320;
	// bl 0x8210d8f8
	ctx.lr = 0x8211FBD4;
	sub_8210D8F8(ctx, base);
	// addis r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 524288;
	// addi r3,r3,24504
	ctx.r3.s64 = ctx.r3.s64 + 24504;
	// bl 0x820fc018
	ctx.lr = 0x8211FBE0;
	sub_820FC018(ctx, base);
	// addi r3,r31,4964
	ctx.r3.s64 = ctx.r31.s64 + 4964;
	// bl 0x8211f620
	ctx.lr = 0x8211FBE8;
	sub_8211F620(ctx, base);
	// addi r3,r31,20352
	ctx.r3.s64 = ctx.r31.s64 + 20352;
	// bl 0x82222878
	ctx.lr = 0x8211FBF0;
	sub_82222878(ctx, base);
	// addis r23,r31,7
	ctx.r23.s64 = ctx.r31.s64 + 458752;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r23,r23,16244
	ctx.r23.s64 = ctx.r23.s64 + 16244;
	// addi r18,r11,14528
	ctx.r18.s64 = ctx.r11.s64 + 14528;
	// lbz r8,0(r23)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r23.u32 + 0);
	// stw r23,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r23.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r18,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r18.u32);
	// beq cr6,0x8211fc20
	if (ctx.cr6.eq) goto loc_8211FC20;
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r7,7
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 7, ctx.xer);
	// bne cr6,0x8211fc2c
	if (!ctx.cr6.eq) goto loc_8211FC2C;
loc_8211FC20:
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// bne cr6,0x8211fc38
	if (!ctx.cr6.eq) goto loc_8211FC38;
loc_8211FC2C:
	// lbz r5,22397(r18)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r18.u32 + 22397);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8211fc40
	if (ctx.cr6.eq) goto loc_8211FC40;
loc_8211FC38:
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x821508c0
	ctx.lr = 0x8211FC40;
	sub_821508C0(ctx, base);
loc_8211FC40:
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r10,12976
	ctx.r4.s64 = ctx.r10.s64 + 12976;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// stw r4,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r4.u32);
	// bgt cr6,0x82120840
	if (ctx.cr6.gt) goto loc_82120840;
	// lis r10,-32085
	ctx.r10.s64 = -2102722560;
	// lis r3,7
	ctx.r3.s64 = 458752;
	// addi r28,r10,28544
	ctx.r28.s64 = ctx.r10.s64 + 28544;
	// lis r10,-32090
	ctx.r10.s64 = -2103050240;
	// ori r25,r3,16216
	ctx.r25.u64 = ctx.r3.u64 | 16216;
	// addi r24,r10,-24936
	ctx.r24.s64 = ctx.r10.s64 + -24936;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// ori r27,r10,15904
	ctx.r27.u64 = ctx.r10.u64 | 15904;
	// stw r24,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r24.u32);
	// lis r12,-32238
	ctx.r12.s64 = -2112749568;
	// addi r12,r12,-872
	ctx.r12.s64 = ctx.r12.s64 + -872;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8211FCC8;
	case 1:
		goto loc_82120840;
	case 2:
		goto loc_82120840;
	case 3:
		goto loc_8211FF70;
	case 4:
		goto loc_82120074;
	case 5:
		goto loc_8211FD1C;
	case 6:
		goto loc_8211FE7C;
	case 7:
		goto loc_8211FEA0;
	case 8:
		goto loc_8211FF2C;
	case 9:
		goto loc_8211FDF0;
	case 10:
		goto loc_8211FE58;
	case 11:
		goto loc_8211FF50;
	default:
		__builtin_unreachable();
	}
	// lwz r16,-824(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -824);
	// lwz r16,2112(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + 2112);
	// lwz r16,2112(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + 2112);
	// lwz r16,-144(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -144);
	// lwz r16,116(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + 116);
	// lwz r16,-740(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -740);
	// lwz r16,-388(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -388);
	// lwz r16,-352(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -352);
	// lwz r16,-212(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -212);
	// lwz r16,-528(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -528);
	// lwz r16,-424(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -424);
	// lwz r16,-176(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -176);
loc_8211FCC8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82104260
	ctx.lr = 0x8211FCD0;
	sub_82104260(ctx, base);
	// addis r11,r31,7
	ctx.r11.s64 = ctx.r31.s64 + 458752;
	// lis r9,7
	ctx.r9.s64 = 458752;
	// addi r11,r11,16220
	ctx.r11.s64 = ctx.r11.s64 + 16220;
	// lis r10,-32090
	ctx.r10.s64 = -2103050240;
	// ori r8,r9,16216
	ctx.r8.u64 = ctx.r9.u64 | 16216;
	// addi r30,r10,26752
	ctx.r30.s64 = ctx.r10.s64 + 26752;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r14,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r14.u32);
	// stwx r7,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r7.u32);
	// bl 0x82231138
	ctx.lr = 0x8211FCFC;
	sub_82231138(ctx, base);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// bl 0x82362aa0
	ctx.lr = 0x8211FD08;
	sub_82362AA0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8222fd48
	ctx.lr = 0x8211FD10;
	sub_8222FD48(ctx, base);
	// li r6,7
	ctx.r6.s64 = 7;
	// stwx r6,r31,r21
	PPC_STORE_U32(ctx.r31.u32 + ctx.r21.u32, ctx.r6.u32);
	// b 0x82120840
	goto loc_82120840;
loc_8211FD1C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82104260
	ctx.lr = 0x8211FD24;
	sub_82104260(ctx, base);
	// lis r5,7
	ctx.r5.s64 = 458752;
	// lis r3,7
	ctx.r3.s64 = 458752;
	// lis r9,7
	ctx.r9.s64 = 458752;
	// li r11,-1
	ctx.r11.s64 = -1;
	// ori r4,r5,16228
	ctx.r4.u64 = ctx.r5.u64 | 16228;
	// ori r10,r3,16232
	ctx.r10.u64 = ctx.r3.u64 | 16232;
	// ori r8,r9,16236
	ctx.r8.u64 = ctx.r9.u64 | 16236;
	// lis r7,3
	ctx.r7.s64 = 196608;
	// stwx r11,r31,r4
	PPC_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r11.u32);
	// ori r6,r7,51953
	ctx.r6.u64 = ctx.r7.u64 | 51953;
	// stwx r11,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// stwx r11,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r11.u32);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r29,r11,26752
	ctx.r29.s64 = ctx.r11.s64 + 26752;
	// lbzx r5,r29,r6
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r6.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8211fd7c
	if (!ctx.cr6.eq) goto loc_8211FD7C;
	// addi r30,r31,144
	ctx.r30.s64 = ctx.r31.s64 + 144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82115650
	ctx.lr = 0x8211FD74;
	sub_82115650(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8211a280
	ctx.lr = 0x8211FD7C;
	sub_8211A280(ctx, base);
loc_8211FD7C:
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// addi r3,r11,28544
	ctx.r3.s64 = ctx.r11.s64 + 28544;
	// bl 0x8233cb58
	ctx.lr = 0x8211FD88;
	sub_8233CB58(ctx, base);
	// addis r30,r31,7
	ctx.r30.s64 = ctx.r31.s64 + 458752;
	// stb r14,0(r23)
	PPC_STORE_U8(ctx.r23.u32 + 0, ctx.r14.u8);
	// addi r30,r30,16216
	ctx.r30.s64 = ctx.r30.s64 + 16216;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8211FDA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addis r11,r31,7
	ctx.r11.s64 = ctx.r31.s64 + 458752;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// addi r11,r11,16220
	ctx.r11.s64 = ctx.r11.s64 + 16220;
	// ori r9,r10,16247
	ctx.r9.u64 = ctx.r10.u64 | 16247;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stbx r14,r31,r9
	PPC_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r14.u8);
	// stw r14,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r14.u32);
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// bl 0x82231138
	ctx.lr = 0x8211FDD0;
	sub_82231138(ctx, base);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// bl 0x82362aa0
	ctx.lr = 0x8211FDDC;
	sub_82362AA0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8222fd48
	ctx.lr = 0x8211FDE4;
	sub_8222FD48(ctx, base);
	// li r7,7
	ctx.r7.s64 = 7;
	// stwx r7,r31,r21
	PPC_STORE_U32(ctx.r31.u32 + ctx.r21.u32, ctx.r7.u32);
	// b 0x82120840
	goto loc_82120840;
loc_8211FDF0:
	// lis r6,7
	ctx.r6.s64 = 458752;
	// lis r4,7
	ctx.r4.s64 = 458752;
	// lis r9,7
	ctx.r9.s64 = 458752;
	// li r11,-1
	ctx.r11.s64 = -1;
	// ori r5,r6,16228
	ctx.r5.u64 = ctx.r6.u64 | 16228;
	// ori r10,r4,16232
	ctx.r10.u64 = ctx.r4.u64 | 16232;
	// ori r8,r9,16236
	ctx.r8.u64 = ctx.r9.u64 | 16236;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// stwx r11,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r11.u32);
	// stwx r11,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// stwx r11,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r11.u32);
	// bl 0x82115650
	ctx.lr = 0x8211FE20;
	sub_82115650(ctx, base);
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r3,r11,-18560
	ctx.r3.s64 = ctx.r11.s64 + -18560;
	// bl 0x822a0118
	ctx.lr = 0x8211FE2C;
	sub_822A0118(ctx, base);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// addi r3,r11,28544
	ctx.r3.s64 = ctx.r11.s64 + 28544;
	// bl 0x8233cb58
	ctx.lr = 0x8211FE38;
	sub_8233CB58(ctx, base);
	// lis r7,7
	ctx.r7.s64 = 458752;
	// li r11,11
	ctx.r11.s64 = 11;
	// stb r14,0(r23)
	PPC_STORE_U8(ctx.r23.u32 + 0, ctx.r14.u8);
	// ori r6,r7,16216
	ctx.r6.u64 = ctx.r7.u64 | 16216;
	// lwzx r5,r31,r6
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// stb r22,12(r5)
	PPC_STORE_U8(ctx.r5.u32 + 12, ctx.r22.u8);
	// stwx r11,r31,r21
	PPC_STORE_U32(ctx.r31.u32 + ctx.r21.u32, ctx.r11.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_8211FE58:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8210ef60
	ctx.lr = 0x8211FE60;
	sub_8210EF60(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82120840
	if (ctx.cr6.eq) goto loc_82120840;
	// li r11,12
	ctx.r11.s64 = 12;
	// stwx r11,r31,r21
	PPC_STORE_U32(ctx.r31.u32 + ctx.r21.u32, ctx.r11.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x82120840
	goto loc_82120840;
loc_8211FE7C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8210ef60
	ctx.lr = 0x8211FE84;
	sub_8210EF60(ctx, base);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82120840
	if (ctx.cr6.eq) goto loc_82120840;
	// li r11,4
	ctx.r11.s64 = 4;
	// stwx r11,r31,r21
	PPC_STORE_U32(ctx.r31.u32 + ctx.r21.u32, ctx.r11.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x82120840
	goto loc_82120840;
loc_8211FEA0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82104260
	ctx.lr = 0x8211FEA8;
	sub_82104260(ctx, base);
	// lis r11,7
	ctx.r11.s64 = 458752;
	// lis r9,7
	ctx.r9.s64 = 458752;
	// lis r7,7
	ctx.r7.s64 = 458752;
	// ori r10,r11,16228
	ctx.r10.u64 = ctx.r11.u64 | 16228;
	// li r11,-1
	ctx.r11.s64 = -1;
	// ori r8,r9,16232
	ctx.r8.u64 = ctx.r9.u64 | 16232;
	// ori r6,r7,16236
	ctx.r6.u64 = ctx.r7.u64 | 16236;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// stwx r11,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// stwx r11,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r11.u32);
	// stwx r11,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r11.u32);
	// bl 0x82115650
	ctx.lr = 0x8211FED8;
	sub_82115650(ctx, base);
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r3,r11,-18560
	ctx.r3.s64 = ctx.r11.s64 + -18560;
	// bl 0x822a0118
	ctx.lr = 0x8211FEE4;
	sub_822A0118(ctx, base);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// addi r3,r11,28544
	ctx.r3.s64 = ctx.r11.s64 + 28544;
	// bl 0x8233cb58
	ctx.lr = 0x8211FEF0;
	sub_8233CB58(ctx, base);
	// lis r5,7
	ctx.r5.s64 = 458752;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// stb r14,0(r23)
	PPC_STORE_U8(ctx.r23.u32 + 0, ctx.r14.u8);
	// ori r4,r5,16216
	ctx.r4.u64 = ctx.r5.u64 | 16216;
	// addi r29,r11,26752
	ctx.r29.s64 = ctx.r11.s64 + 26752;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r11,r31,r4
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	// stb r22,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r22.u8);
	// bl 0x82231138
	ctx.lr = 0x8211FF14;
	sub_82231138(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8222fd48
	ctx.lr = 0x8211FF1C;
	sub_8222FD48(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// stwx r11,r31,r21
	PPC_STORE_U32(ctx.r31.u32 + ctx.r21.u32, ctx.r11.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x82120840
	goto loc_82120840;
loc_8211FF2C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8210ef60
	ctx.lr = 0x8211FF34;
	sub_8210EF60(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82120840
	if (ctx.cr6.eq) goto loc_82120840;
	// li r11,4
	ctx.r11.s64 = 4;
	// stwx r11,r31,r21
	PPC_STORE_U32(ctx.r31.u32 + ctx.r21.u32, ctx.r11.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x82120840
	goto loc_82120840;
loc_8211FF50:
	// lwzx r3,r31,r25
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r25.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8211FF64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,4
	ctx.r11.s64 = 4;
	// stwx r11,r31,r21
	PPC_STORE_U32(ctx.r31.u32 + ctx.r21.u32, ctx.r11.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_8211FF70:
	// addis r29,r31,7
	ctx.r29.s64 = ctx.r31.s64 + 458752;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r29,r29,16245
	ctx.r29.s64 = ctx.r29.s64 + 16245;
	// lbz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// bl 0x82344708
	ctx.lr = 0x8211FF84;
	sub_82344708(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// stb r3,0(r23)
	PPC_STORE_U8(ctx.r23.u32 + 0, ctx.r3.u8);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8211fff8
	if (!ctx.cr6.eq) goto loc_8211FFF8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82104260
	ctx.lr = 0x8211FF9C;
	sub_82104260(ctx, base);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// bl 0x82362aa0
	ctx.lr = 0x8211FFA8;
	sub_82362AA0(ctx, base);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r6,3
	ctx.r6.s64 = 196608;
	// addi r30,r11,26752
	ctx.r30.s64 = ctx.r11.s64 + 26752;
	// ori r5,r6,51953
	ctx.r5.u64 = ctx.r6.u64 | 51953;
	// lbzx r4,r30,r5
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r5.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8211ffd8
	if (!ctx.cr6.eq) goto loc_8211FFD8;
	// addi r29,r31,144
	ctx.r29.s64 = ctx.r31.s64 + 144;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82115650
	ctx.lr = 0x8211FFD0;
	sub_82115650(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8211a280
	ctx.lr = 0x8211FFD8;
	sub_8211A280(ctx, base);
loc_8211FFD8:
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r3,r11,-18560
	ctx.r3.s64 = ctx.r11.s64 + -18560;
	// bl 0x822ae800
	ctx.lr = 0x8211FFE4;
	sub_822AE800(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82231138
	ctx.lr = 0x8211FFEC;
	sub_82231138(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8222fd48
	ctx.lr = 0x8211FFF4;
	sub_8222FD48(ctx, base);
	// b 0x82120840
	goto loc_82120840;
loc_8211FFF8:
	// lis r3,7
	ctx.r3.s64 = 458752;
	// lwzx r11,r31,r25
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r25.u32);
	// stb r14,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r14.u8);
	// ori r10,r3,16246
	ctx.r10.u64 = ctx.r3.u64 | 16246;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stbx r14,r31,r10
	PPC_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r14.u8);
	// beq cr6,0x82120030
	if (ctx.cr6.eq) goto loc_82120030;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82120030
	if (ctx.cr6.eq) goto loc_82120030;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,252(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 252);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82120030;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82120030:
	// add r3,r31,r27
	ctx.r3.u64 = ctx.r31.u64 + ctx.r27.u64;
	// bl 0x82363e38
	ctx.lr = 0x82120038;
	sub_82363E38(ctx, base);
	// lis r7,37
	ctx.r7.s64 = 2424832;
	// li r11,5
	ctx.r11.s64 = 5;
	// ori r6,r7,49147
	ctx.r6.u64 = ctx.r7.u64 | 49147;
	// stwx r11,r31,r21
	PPC_STORE_U32(ctx.r31.u32 + ctx.r21.u32, ctx.r11.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lbzx r5,r28,r6
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r6.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82120074
	if (!ctx.cr6.eq) goto loc_82120074;
	// lis r4,37
	ctx.r4.s64 = 2424832;
	// ori r3,r4,49146
	ctx.r3.u64 = ctx.r4.u64 | 49146;
	// lbzx r11,r28,r3
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82120074
	if (!ctx.cr6.eq) goto loc_82120074;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82203880
	ctx.lr = 0x82120074;
	sub_82203880(ctx, base);
loc_82120074:
	// lis r10,4
	ctx.r10.s64 = 262144;
	// ori r9,r10,30448
	ctx.r9.u64 = ctx.r10.u64 | 30448;
	// lbzx r8,r28,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x821200a0
	if (!ctx.cr6.eq) goto loc_821200A0;
	// lis r7,4
	ctx.r7.s64 = 262144;
	// ori r6,r7,30452
	ctx.r6.u64 = ctx.r7.u64 | 30452;
	// lwzx r11,r28,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r6.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
	// beq cr6,0x821200a4
	if (ctx.cr6.eq) goto loc_821200A4;
loc_821200A0:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_821200A4:
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821200c0
	if (ctx.cr6.eq) goto loc_821200C0;
	// addis r11,r28,4
	ctx.r11.s64 = ctx.r28.s64 + 262144;
	// addi r3,r11,29888
	ctx.r3.s64 = ctx.r11.s64 + 29888;
	// bl 0x82346c68
	ctx.lr = 0x821200BC;
	sub_82346C68(ctx, base);
	// b 0x82120840
	goto loc_82120840;
loc_821200C0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821152d0
	ctx.lr = 0x821200C8;
	sub_821152D0(ctx, base);
	// lis r3,7
	ctx.r3.s64 = 458752;
	// ori r11,r3,16256
	ctx.r11.u64 = ctx.r3.u64 | 16256;
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x821200ec
	if (!ctx.cr6.eq) goto loc_821200EC;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// ori r9,r10,16252
	ctx.r9.u64 = ctx.r10.u64 | 16252;
	// lwzx r4,r31,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// b 0x821200f0
	goto loc_821200F0;
loc_821200EC:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
loc_821200F0:
	// addis r11,r31,7
	ctx.r11.s64 = ctx.r31.s64 + 458752;
	// addi r11,r11,16228
	ctx.r11.s64 = ctx.r11.s64 + 16228;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// bne cr6,0x82120140
	if (!ctx.cr6.eq) goto loc_82120140;
	// lis r7,7
	ctx.r7.s64 = 458752;
	// ori r6,r7,16292
	ctx.r6.u64 = ctx.r7.u64 | 16292;
	// lbzx r5,r17,r6
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r17.u32 + ctx.r6.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8212012c
	if (ctx.cr6.eq) goto loc_8212012C;
	// lbz r3,0(r20)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r20.u32 + 0);
	// mr r10,r14
	ctx.r10.u64 = ctx.r14.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82120130
	if (!ctx.cr6.eq) goto loc_82120130;
loc_8212012C:
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
loc_82120130:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82120144
	if (ctx.cr6.eq) goto loc_82120144;
loc_82120140:
	// li r5,1
	ctx.r5.s64 = 1;
loc_82120144:
	// add r3,r31,r27
	ctx.r3.u64 = ctx.r31.u64 + ctx.r27.u64;
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// bl 0x82363e58
	ctx.lr = 0x82120150;
	sub_82363E58(ctx, base);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-1452
	ctx.r3.s64 = ctx.r11.s64 + -1452;
	// bl 0x820f9cb0
	ctx.lr = 0x8212015C;
	sub_820F9CB0(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8212018c
	if (ctx.cr6.eq) goto loc_8212018C;
	// lis r8,37
	ctx.r8.s64 = 2424832;
	// ori r7,r8,49147
	ctx.r7.u64 = ctx.r8.u64 | 49147;
	// lbzx r6,r28,r7
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r7.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8212018c
	if (ctx.cr6.eq) goto loc_8212018C;
	// add r11,r31,r26
	ctx.r11.u64 = ctx.r31.u64 + ctx.r26.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r5,r10,2
	ctx.r5.s64 = ctx.r10.s64 + 2;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
loc_8212018C:
	// add r11,r31,r26
	ctx.r11.u64 = ctx.r31.u64 + ctx.r26.u64;
	// stw r14,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r14.u32);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x821207c8
	if (!ctx.cr6.gt) goto loc_821207C8;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// lwz r30,136(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// addis r3,r31,7
	ctx.r3.s64 = ctx.r31.s64 + 458752;
	// lwz r29,140(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// addi r27,r11,-18560
	ctx.r27.s64 = ctx.r11.s64 + -18560;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r3,r3,16232
	ctx.r3.s64 = ctx.r3.s64 + 16232;
	// addi r26,r11,26752
	ctx.r26.s64 = ctx.r11.s64 + 26752;
	// lis r11,-21846
	ctx.r11.s64 = -1431699456;
	// lis r10,30785
	ctx.r10.s64 = 2017525760;
	// lis r9,-27576
	ctx.r9.s64 = -1807220736;
	// stw r3,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r3.u32);
	// ori r18,r11,43691
	ctx.r18.u64 = ctx.r11.u64 | 43691;
	// ori r23,r10,1617
	ctx.r23.u64 = ctx.r10.u64 | 1617;
	// ori r8,r9,14885
	ctx.r8.u64 = ctx.r9.u64 | 14885;
	// lis r7,7
	ctx.r7.s64 = 458752;
	// lis r6,7
	ctx.r6.s64 = 458752;
	// lis r5,7
	ctx.r5.s64 = 458752;
	// lis r4,7
	ctx.r4.s64 = 458752;
	// lis r3,2
	ctx.r3.s64 = 131072;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r22,-32045
	ctx.r22.s64 = -2100101120;
	// lis r16,-32126
	ctx.r16.s64 = -2105409536;
	// rldimi r23,r8,32,0
	ctx.r23.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r23.u64 & 0xFFFFFFFF);
	// ori r24,r7,15873
	ctx.r24.u64 = ctx.r7.u64 | 15873;
	// ori r15,r6,14718
	ctx.r15.u64 = ctx.r6.u64 | 14718;
	// ori r25,r5,16296
	ctx.r25.u64 = ctx.r5.u64 | 16296;
	// ori r17,r4,16297
	ctx.r17.u64 = ctx.r4.u64 | 16297;
	// ori r19,r3,54032
	ctx.r19.u64 = ctx.r3.u64 | 54032;
	// ori r20,r11,54068
	ctx.r20.u64 = ctx.r11.u64 | 54068;
loc_8212021C:
	// lwz r10,176(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// bne cr6,0x821207b8
	if (!ctx.cr6.eq) goto loc_821207B8;
	// addi r8,r1,236
	ctx.r8.s64 = ctx.r1.s64 + 236;
	// addi r7,r1,232
	ctx.r7.s64 = ctx.r1.s64 + 232;
	// addi r6,r1,228
	ctx.r6.s64 = ctx.r1.s64 + 228;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// addi r4,r1,220
	ctx.r4.s64 = ctx.r1.s64 + 220;
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// addi r10,r1,216
	ctx.r10.s64 = ctx.r1.s64 + 216;
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// addi r9,r1,212
	ctx.r9.s64 = ctx.r1.s64 + 212;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// addi r8,r1,208
	ctx.r8.s64 = ctx.r1.s64 + 208;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r7,r1,204
	ctx.r7.s64 = ctx.r1.s64 + 204;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// addi r6,r1,200
	ctx.r6.s64 = ctx.r1.s64 + 200;
	// addi r5,r1,196
	ctx.r5.s64 = ctx.r1.s64 + 196;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8210dc70
	ctx.lr = 0x82120278;
	sub_8210DC70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82104260
	ctx.lr = 0x82120280;
	sub_82104260(ctx, base);
	// lis r3,4
	ctx.r3.s64 = 262144;
	// ori r11,r3,30436
	ctx.r11.u64 = ctx.r3.u64 | 30436;
	// lbzx r10,r28,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821202ac
	if (ctx.cr6.eq) goto loc_821202AC;
	// lis r9,4
	ctx.r9.s64 = 262144;
	// li r11,1
	ctx.r11.s64 = 1;
	// ori r8,r9,30437
	ctx.r8.u64 = ctx.r9.u64 | 30437;
	// lbzx r7,r28,r8
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r8.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x821202b0
	if (!ctx.cr6.eq) goto loc_821202B0;
loc_821202AC:
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
loc_821202B0:
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8212036c
	if (ctx.cr6.eq) goto loc_8212036C;
	// lbz r11,6036(r16)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r16.u32 + 6036);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8212036c
	if (!ctx.cr6.eq) goto loc_8212036C;
	// lis r3,4
	ctx.r3.s64 = 262144;
	// ori r11,r3,29992
	ctx.r11.u64 = ctx.r3.u64 | 29992;
	// lwzx r11,r28,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8212036c
	if (ctx.cr6.eq) goto loc_8212036C;
	// lwz r11,-20920(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + -20920);
	// mulhwu r10,r11,r18
	ctx.r10.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r18.u32)) >> 32;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// subf. r7,r8,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r8.s64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x8212036c
	if (!ctx.cr0.eq) goto loc_8212036C;
	// lwz r6,192(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// lfs f0,220(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 32, temp.u32);
	// lwz r5,212(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// subf r10,r6,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r6.s64;
	// lfs f0,224(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 36, temp.u32);
	// subf r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,232(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// stw r10,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r10.u32);
	// lwz r10,196(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// stw r10,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r10.u32);
	// lwz r10,200(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// stw r10,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r10.u32);
	// lwz r10,204(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// stw r10,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r10.u32);
	// lwz r10,208(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// stw r10,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r10.u32);
	// stw r11,24(r28)
	PPC_STORE_U32(ctx.r28.u32 + 24, ctx.r11.u32);
	// lwz r11,216(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// stw r11,28(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28, ctx.r11.u32);
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// stw r11,40(r28)
	PPC_STORE_U32(ctx.r28.u32 + 40, ctx.r11.u32);
	// lbz r11,236(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 236);
	// stb r11,44(r28)
	PPC_STORE_U8(ctx.r28.u32 + 44, ctx.r11.u8);
	// bl 0x82363b90
	ctx.lr = 0x82120368;
	sub_82363B90(ctx, base);
	// b 0x82120798
	goto loc_82120798;
loc_8212036C:
	// lis r4,3
	ctx.r4.s64 = 196608;
	// ori r3,r4,51953
	ctx.r3.u64 = ctx.r4.u64 | 51953;
	// lbzx r11,r26,r3
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821206d8
	if (!ctx.cr6.eq) goto loc_821206D8;
	// addi r29,r31,144
	ctx.r29.s64 = ctx.r31.s64 + 144;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8211a280
	ctx.lr = 0x8212038C;
	sub_8211A280(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8210efe8
	ctx.lr = 0x82120398;
	sub_8210EFE8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821204dc
	if (!ctx.cr6.eq) goto loc_821204DC;
	// lis r9,7
	ctx.r9.s64 = 458752;
	// ori r8,r9,16228
	ctx.r8.u64 = ctx.r9.u64 | 16228;
	// lwz r9,132(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwzx r11,r9,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x821203c4
	if (!ctx.cr6.eq) goto loc_821203C4;
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
loc_821203C4:
	// lis r5,3
	ctx.r5.s64 = 196608;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// ori r4,r5,51969
	ctx.r4.u64 = ctx.r5.u64 | 51969;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// lbzx r10,r26,r4
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r26.u32 + ctx.r4.u32);
	// bne cr6,0x82120488
	if (!ctx.cr6.eq) goto loc_82120488;
	// clrlwi r3,r10,24
	ctx.r3.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82120488
	if (!ctx.cr6.eq) goto loc_82120488;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82120488
	if (ctx.cr6.eq) goto loc_82120488;
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// cmpld cr6,r11,r23
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r23.u64, ctx.xer);
	// bne cr6,0x82120488
	if (!ctx.cr6.eq) goto loc_82120488;
	// lis r11,37
	ctx.r11.s64 = 2424832;
	// ori r8,r11,49145
	ctx.r8.u64 = ctx.r11.u64 | 49145;
	// lbzx r7,r28,r8
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r8.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8212042c
	if (!ctx.cr6.eq) goto loc_8212042C;
	// lis r6,37
	ctx.r6.s64 = 2424832;
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
	// ori r5,r6,49144
	ctx.r5.u64 = ctx.r6.u64 | 49144;
	// lbzx r4,r28,r5
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r5.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82120430
	if (ctx.cr6.eq) goto loc_82120430;
loc_8212042C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82120430:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82120488
	if (!ctx.cr6.eq) goto loc_82120488;
	// lis r8,7
	ctx.r8.s64 = 458752;
	// ori r7,r8,16216
	ctx.r7.u64 = ctx.r8.u64 | 16216;
	// lwzx r11,r9,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82120488
	if (ctx.cr6.eq) goto loc_82120488;
	// lbz r6,316(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 316);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82120488
	if (ctx.cr6.eq) goto loc_82120488;
	// lbz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 128);
	// lis r4,7
	ctx.r4.s64 = 458752;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// extsb r11,r5
	ctx.r11.s64 = ctx.r5.s8;
	// ori r3,r4,16232
	ctx.r3.u64 = ctx.r4.u64 | 16232;
	// ori r8,r10,16297
	ctx.r8.u64 = ctx.r10.u64 | 16297;
	// stwx r11,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r11.u32);
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
	// stbx r11,r9,r8
	PPC_STORE_U8(ctx.r9.u32 + ctx.r8.u32, ctx.r11.u8);
	// b 0x821206b8
	goto loc_821206B8;
loc_82120488:
	// clrlwi r7,r10,24
	ctx.r7.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x821206b8
	if (ctx.cr6.eq) goto loc_821206B8;
	// add r30,r31,r24
	ctx.r30.u64 = ctx.r31.u64 + ctx.r24.u64;
	// lbz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x821206b8
	if (!ctx.cr6.eq) goto loc_821206B8;
	// addis r11,r27,9
	ctx.r11.s64 = ctx.r27.s64 + 589824;
	// addi r3,r11,-16248
	ctx.r3.s64 = ctx.r11.s64 + -16248;
	// bl 0x822aca88
	ctx.lr = 0x821204B0;
	sub_822ACA88(ctx, base);
	// lis r5,34
	ctx.r5.s64 = 2228224;
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
	// ori r3,r5,52521
	ctx.r3.u64 = ctx.r5.u64 | 52521;
	// li r4,1
	ctx.r4.s64 = 1;
	// stbx r11,r28,r3
	PPC_STORE_U8(ctx.r28.u32 + ctx.r3.u32, ctx.r11.u8);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r3,r11,144
	ctx.r3.s64 = ctx.r11.s64 + 144;
	// bl 0x82114700
	ctx.lr = 0x821204D0;
	sub_82114700(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// b 0x821206b8
	goto loc_821206B8;
loc_821204DC:
	// lbzx r9,r31,r15
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r15.u32);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x8212062c
	if (!ctx.cr6.eq) goto loc_8212062C;
	// add r10,r31,r25
	ctx.r10.u64 = ctx.r31.u64 + ctx.r25.u64;
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8212062c
	if (!ctx.cr6.eq) goto loc_8212062C;
	// lis r7,7
	ctx.r7.s64 = 458752;
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// ori r6,r7,16228
	ctx.r6.u64 = ctx.r7.u64 | 16228;
	// lwzx r11,r8,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82120518
	if (!ctx.cr6.eq) goto loc_82120518;
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
loc_82120518:
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8212062c
	if (!ctx.cr6.eq) goto loc_8212062C;
	// lis r3,7
	ctx.r3.s64 = 458752;
	// ori r11,r3,16232
	ctx.r11.u64 = ctx.r3.u64 | 16232;
	// lwzx r11,r8,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82120540
	if (!ctx.cr6.eq) goto loc_82120540;
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
loc_82120540:
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8212062c
	if (!ctx.cr6.eq) goto loc_8212062C;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8212062c
	if (ctx.cr6.eq) goto loc_8212062C;
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// cmpld cr6,r11,r23
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r23.u64, ctx.xer);
	// bne cr6,0x8212062c
	if (!ctx.cr6.eq) goto loc_8212062C;
	// lis r5,37
	ctx.r5.s64 = 2424832;
	// ori r4,r5,49145
	ctx.r4.u64 = ctx.r5.u64 | 49145;
	// lbzx r3,r28,r4
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r4.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82120590
	if (!ctx.cr6.eq) goto loc_82120590;
	// lis r11,37
	ctx.r11.s64 = 2424832;
	// ori r7,r11,49144
	ctx.r7.u64 = ctx.r11.u64 | 49144;
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
	// lbzx r6,r28,r7
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r7.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82120594
	if (ctx.cr6.eq) goto loc_82120594;
loc_82120590:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82120594:
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8212062c
	if (!ctx.cr6.eq) goto loc_8212062C;
	// lis r3,7
	ctx.r3.s64 = 458752;
	// ori r11,r3,16216
	ctx.r11.u64 = ctx.r3.u64 | 16216;
	// lwzx r11,r8,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8212062c
	if (ctx.cr6.eq) goto loc_8212062C;
	// lbz r7,200(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 200);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x821205cc
	if (ctx.cr6.eq) goto loc_821205CC;
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
	// b 0x821205e0
	goto loc_821205E0;
loc_821205CC:
	// lbz r6,316(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 316);
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x821205e0
	if (ctx.cr6.eq) goto loc_821205E0;
	// li r11,1
	ctx.r11.s64 = 1;
loc_821205E0:
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8212062c
	if (ctx.cr6.eq) goto loc_8212062C;
	// lis r4,3
	ctx.r4.s64 = 196608;
	// ori r3,r4,51969
	ctx.r3.u64 = ctx.r4.u64 | 51969;
	// lbzx r11,r26,r3
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8212061c
	if (!ctx.cr6.eq) goto loc_8212061C;
	// lis r9,7
	ctx.r9.s64 = 458752;
	// lis r6,7
	ctx.r6.s64 = 458752;
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
	// ori r7,r9,16232
	ctx.r7.u64 = ctx.r9.u64 | 16232;
	// ori r5,r6,16297
	ctx.r5.u64 = ctx.r6.u64 | 16297;
	// stwx r11,r8,r7
	PPC_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r11.u32);
	// stbx r11,r8,r5
	PPC_STORE_U8(ctx.r8.u32 + ctx.r5.u32, ctx.r11.u8);
loc_8212061C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stbx r11,r31,r17
	PPC_STORE_U8(ctx.r31.u32 + ctx.r17.u32, ctx.r11.u8);
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// b 0x821206b8
	goto loc_821206B8;
loc_8212062C:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8212064c
	if (!ctx.cr6.eq) goto loc_8212064C;
	// add r11,r31,r25
	ctx.r11.u64 = ctx.r31.u64 + ctx.r25.u64;
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8212064c
	if (ctx.cr6.eq) goto loc_8212064C;
	// stb r14,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r14.u8);
	// b 0x821206b8
	goto loc_821206B8;
loc_8212064C:
	// add r30,r31,r24
	ctx.r30.u64 = ctx.r31.u64 + ctx.r24.u64;
	// lbz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821206b8
	if (ctx.cr6.eq) goto loc_821206B8;
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r11,2812(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2812);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82120678
	if (ctx.cr6.eq) goto loc_82120678;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
	// bne cr6,0x8212067c
	if (!ctx.cr6.eq) goto loc_8212067C;
loc_82120678:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8212067C:
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821206a4
	if (!ctx.cr6.eq) goto loc_821206A4;
	// addis r11,r27,9
	ctx.r11.s64 = ctx.r27.s64 + 589824;
	// addi r3,r11,-16248
	ctx.r3.s64 = ctx.r11.s64 + -16248;
	// bl 0x822aca98
	ctx.lr = 0x82120694;
	sub_822ACA98(ctx, base);
	// lis r8,34
	ctx.r8.s64 = 2228224;
	// li r11,1
	ctx.r11.s64 = 1;
	// ori r7,r8,52521
	ctx.r7.u64 = ctx.r8.u64 | 52521;
	// stbx r11,r28,r7
	PPC_STORE_U8(ctx.r28.u32 + ctx.r7.u32, ctx.r11.u8);
loc_821206A4:
	// lwz r6,132(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r6,144
	ctx.r3.s64 = ctx.r6.s64 + 144;
	// bl 0x82114700
	ctx.lr = 0x821206B4;
	sub_82114700(ctx, base);
	// stb r14,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r14.u8);
loc_821206B8:
	// lwz r5,164(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lbz r4,22397(r5)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r5.u32 + 22397);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x821206d0
	if (!ctx.cr6.eq) goto loc_821206D0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821155f8
	ctx.lr = 0x821206D0;
	sub_821155F8(ctx, base);
loc_821206D0:
	// lwz r29,140(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r30,136(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
loc_821206D8:
	// add r3,r31,r19
	ctx.r3.u64 = ctx.r31.u64 + ctx.r19.u64;
	// bl 0x821124d0
	ctx.lr = 0x821206E0;
	sub_821124D0(ctx, base);
	// add r3,r31,r20
	ctx.r3.u64 = ctx.r31.u64 + ctx.r20.u64;
	// bl 0x821124d0
	ctx.lr = 0x821206E8;
	sub_821124D0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82101e18
	ctx.lr = 0x821206F0;
	sub_82101E18(ctx, base);
	// lwz r3,180(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8212070c
	if (!ctx.cr6.eq) goto loc_8212070C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8210ecf0
	ctx.lr = 0x82120708;
	sub_8210ECF0(ctx, base);
	// b 0x82120728
	goto loc_82120728;
loc_8212070C:
	// lbz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82120728
	if (ctx.cr6.eq) goto loc_82120728;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82231138
	ctx.lr = 0x82120720;
	sub_82231138(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8222fd48
	ctx.lr = 0x82120728;
	sub_8222FD48(ctx, base);
loc_82120728:
	// lbz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8212073c
	if (ctx.cr6.eq) goto loc_8212073C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82362aa0
	ctx.lr = 0x8212073C;
	sub_82362AA0(ctx, base);
loc_8212073C:
	// lwz r3,172(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// bl 0x821f92a0
	ctx.lr = 0x82120744;
	sub_821F92A0(ctx, base);
	// lis r6,7
	ctx.r6.s64 = 458752;
	// ori r5,r6,16292
	ctx.r5.u64 = ctx.r6.u64 | 16292;
	// lbzx r4,r31,r5
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r5.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82120764
	if (!ctx.cr6.eq) goto loc_82120764;
	// lwz r3,152(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stb r14,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r14.u8);
	// b 0x8212076c
	goto loc_8212076C;
loc_82120764:
	// lwz r11,156(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// stb r14,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r14.u8);
loc_8212076C:
	// lwzx r10,r31,r21
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r21.u32);
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// bne cr6,0x821207c8
	if (!ctx.cr6.eq) goto loc_821207C8;
	// lwz r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x821207c8
	if (!ctx.cr6.eq) goto loc_821207C8;
	// lwz r7,156(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lbz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x821207c8
	if (!ctx.cr6.eq) goto loc_821207C8;
loc_82120798:
	// lwz r5,144(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// addi r11,r5,1
	ctx.r11.s64 = ctx.r5.s64 + 1;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x8212021c
	if (ctx.cr6.lt) goto loc_8212021C;
	// b 0x821207c8
	goto loc_821207C8;
loc_821207B8:
	// lis r11,7
	ctx.r11.s64 = 458752;
	// lwz r9,144(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// ori r10,r11,15944
	ctx.r10.u64 = ctx.r11.u64 | 15944;
	// stwx r9,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r9.u32);
loc_821207C8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82104038
	ctx.lr = 0x821207D0;
	sub_82104038(ctx, base);
	// lis r8,7
	ctx.r8.s64 = 458752;
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// ori r7,r8,16248
	ctx.r7.u64 = ctx.r8.u64 | 16248;
	// lbzx r6,r31,r7
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r7.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x821207f4
	if (ctx.cr6.eq) goto loc_821207F4;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x821207fc
	goto loc_821207FC;
loc_821207F4:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
loc_821207FC:
	// bl 0x82363e68
	ctx.lr = 0x82120800;
	sub_82363E68(ctx, base);
	// lwz r5,160(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// bl 0x82142a90
	ctx.lr = 0x82120814;
	sub_82142A90(ctx, base);
	// lis r4,7
	ctx.r4.s64 = 458752;
	// ori r3,r4,16216
	ctx.r3.u64 = ctx.r4.u64 | 16216;
	// lwzx r3,r31,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82120830;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r18,164(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r19,168(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r17,132(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r23,184(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
loc_82120840:
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82150a38
	ctx.lr = 0x82120848;
	sub_82150A38(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x8217ea50
	ctx.lr = 0x82120854;
	sub_8217EA50(ctx, base);
	// lbz r9,0(r23)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r23.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8212088c
	if (!ctx.cr6.eq) goto loc_8212088C;
	// lis r8,7
	ctx.r8.s64 = 458752;
	// ori r7,r8,16246
	ctx.r7.u64 = ctx.r8.u64 | 16246;
	// lbzx r6,r31,r7
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r7.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8212088c
	if (ctx.cr6.eq) goto loc_8212088C;
	// addis r4,r31,7
	ctx.r4.s64 = ctx.r31.s64 + 458752;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r4,15888
	ctx.r4.s64 = ctx.r4.s64 + 15888;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82142cd8
	ctx.lr = 0x82120888;
	sub_82142CD8(ctx, base);
	// b 0x821208b0
	goto loc_821208B0;
loc_8212088C:
	// lwz r3,172(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// bl 0x821f9320
	ctx.lr = 0x82120894;
	sub_821F9320(ctx, base);
	// addi r3,r17,92
	ctx.r3.s64 = ctx.r17.s64 + 92;
	// bl 0x8210b3c8
	ctx.lr = 0x8212089C;
	sub_8210B3C8(ctx, base);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x821ff308
	ctx.lr = 0x821208A4;
	sub_821FF308(ctx, base);
	// lis r11,-32110
	ctx.r11.s64 = -2104360960;
	// addi r3,r11,3336
	ctx.r3.s64 = ctx.r11.s64 + 3336;
	// bl 0x8215c0e8
	ctx.lr = 0x821208B0;
	sub_8215C0E8(ctx, base);
loc_821208B0:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x8210efe8
	ctx.lr = 0x821208BC;
	sub_8210EFE8(ctx, base);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82150858
	ctx.lr = 0x821208C4;
	sub_82150858(ctx, base);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82223a58
	ctx.lr = 0x821208CC;
	sub_82223A58(ctx, base);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x821508a0
	ctx.lr = 0x821208D4;
	sub_821508A0(ctx, base);
	// lis r5,3
	ctx.r5.s64 = 196608;
	// lis r3,3
	ctx.r3.s64 = 196608;
	// ori r4,r5,489
	ctx.r4.u64 = ctx.r5.u64 | 489;
	// ori r11,r3,12409
	ctx.r11.u64 = ctx.r3.u64 | 12409;
	// stbx r14,r31,r4
	PPC_STORE_U8(ctx.r31.u32 + ctx.r4.u32, ctx.r14.u8);
	// stbx r14,r31,r11
	PPC_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r14.u8);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x8259bb10
	__restgprlr_14(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_82120AA0) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,488(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 488);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}
PPC_FUNC_IMPL(__imp__sub_82120AC0) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,487(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 487);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82120b28
	if (ctx.cr6.eq) goto loc_82120B28;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x82120b28
	if (ctx.cr6.eq) goto loc_82120B28;
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// beq cr6,0x82120b28
	if (ctx.cr6.eq) goto loc_82120B28;
	// lbz r10,488(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 488);
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82120af8
	if (!ctx.cr6.eq) goto loc_82120AF8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82120AF8:
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82120b28
	if (!ctx.cr6.eq) goto loc_82120B28;
	// rlwinm r7,r10,0,28,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82120b18
	if (!ctx.cr6.eq) goto loc_82120B18;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82120B18:
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82120b2c
	if (ctx.cr6.eq) goto loc_82120B2C;
loc_82120B28:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82120B2C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}
PPC_FUNC_IMPL(__imp__sub_82120BB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r10,60(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82120bf4
	if (!ctx.cr6.eq) goto loc_82120BF4;
	// lwz r9,52(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r8,68(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82120bf4
	if (!ctx.cr6.eq) goto loc_82120BF4;
	// lwz r7,40(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r6,56(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x82120bf4
	if (!ctx.cr6.eq) goto loc_82120BF4;
	// lwz r5,48(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r4,64(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmpw cr6,r5,r4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x82120bf8
	if (ctx.cr6.eq) goto loc_82120BF8;
loc_82120BF4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82120BF8:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}
PPC_FUNC_IMPL(__imp__sub_82120CA8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// blr 
	return;
}
PPC_FUNC_IMPL(__imp__sub_82121768) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,26080
	ctx.r3.s64 = ctx.r11.s64 + 26080;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x821041d8
	ctx.lr = 0x82121790;
	sub_821041D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821217d4
	if (!ctx.cr6.eq) goto loc_821217D4;
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
	// bne cr6,0x821217d4
	if (!ctx.cr6.eq) goto loc_821217D4;
	// rlwinm r10,r30,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// add r7,r10,r31
	ctx.r7.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r11,r11,30544
	ctx.r11.s64 = ctx.r11.s64 + 30544;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r6,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// b 0x821217d8
	goto loc_821217D8;
loc_821217D4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821217D8:
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
PPC_FUNC_IMPL(__imp__sub_82123618) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x82123620;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r30,r11,-16856
	ctx.r30.s64 = ctx.r11.s64 + -16856;
	// lis r11,-32114
	ctx.r11.s64 = -2104623104;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// addi r29,r11,18248
	ctx.r29.s64 = ctx.r11.s64 + 18248;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r27,-32047
	ctx.r27.s64 = -2100232192;
	// addi r28,r11,-31692
	ctx.r28.s64 = ctx.r11.s64 + -31692;
loc_82123648:
	// lwz r11,20160(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20160);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwzx r5,r31,r30
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,48(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// add r4,r31,r29
	ctx.r4.u64 = ctx.r31.u64 + ctx.r29.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823514f8
	ctx.lr = 0x82123674;
	sub_823514F8(ctx, base);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpwi cr6,r31,48
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 48, ctx.xer);
	// blt cr6,0x82123648
	if (ctx.cr6.lt) goto loc_82123648;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_82123688) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82123690;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32114
	ctx.r11.s64 = -2104623104;
	// lis r29,-32047
	ctx.r29.s64 = -2100232192;
	// addi r30,r11,18248
	ctx.r30.s64 = ctx.r11.s64 + 18248;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_821236A4:
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82350c88
	ctx.lr = 0x821236B4;
	sub_82350C88(ctx, base);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r11,r30,48
	ctx.r11.s64 = ctx.r30.s64 + 48;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821236a4
	if (ctx.cr6.lt) goto loc_821236A4;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_82124158) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,34(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 34);
	// blr 
	return;
}
PPC_FUNC_IMPL(__imp__sub_82124160) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,33(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 33);
	// blr 
	return;
}
PPC_FUNC_IMPL(__imp__sub_82126DB8) {
	PPC_FUNC_PROLOGUE();
	// ld r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// ld r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// std r10,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r10.u64);
	// blr 
	return;
}

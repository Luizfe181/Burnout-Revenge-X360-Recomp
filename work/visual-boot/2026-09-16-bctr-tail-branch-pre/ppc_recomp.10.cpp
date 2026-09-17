#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8211B8C8"))) PPC_WEAK_FUNC(sub_8211B8C8);
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

__attribute__((alias("__imp__sub_8211BEE0"))) PPC_WEAK_FUNC(sub_8211BEE0);
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

__attribute__((alias("__imp__sub_8211BFE8"))) PPC_WEAK_FUNC(sub_8211BFE8);
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

__attribute__((alias("__imp__sub_8211C090"))) PPC_WEAK_FUNC(sub_8211C090);
PPC_FUNC_IMPL(__imp__sub_8211C090) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x8211C098;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,3014
	ctx.r11.s64 = ctx.r4.s64 + 3014;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r29,8
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 8, ctx.xer);
	// lwz r9,12136(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12136);
	// lwzx r11,r10,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// stw r7,13512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13512, ctx.r7.u32);
	// rlwinm r10,r11,14,0,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0xFFFFC000;
	// stw r29,12144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12144, ctx.r29.u32);
	// stw r6,13508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13508, ctx.r6.u32);
	// add r30,r10,r9
	ctx.r30.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,13440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13440, ctx.r11.u32);
	// bgt cr6,0x8211c514
	if (ctx.cr6.gt) goto loc_8211C514;
	// lis r12,-32238
	ctx.r12.s64 = -2112749568;
	// addi r12,r12,-16148
	ctx.r12.s64 = ctx.r12.s64 + -16148;
	// rlwinm r0,r29,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r29.u64) {
	case 0:
		goto loc_8211C110;
	case 1:
		goto loc_8211C1C8;
	case 2:
		goto loc_8211C210;
	case 3:
		goto loc_8211C2E8;
	case 4:
		goto loc_8211C374;
	case 5:
		goto loc_8211C424;
	case 6:
		goto loc_8211C460;
	case 7:
		goto loc_8211C1C8;
	case 8:
		goto loc_8211C2E8;
	default:
		__builtin_unreachable();
	}
	// lwz r16,-16112(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -16112);
	// lwz r16,-15928(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -15928);
	// lwz r16,-15856(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -15856);
	// lwz r16,-15640(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -15640);
	// lwz r16,-15500(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -15500);
	// lwz r16,-15324(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -15324);
	// lwz r16,-15264(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -15264);
	// lwz r16,-15928(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -15928);
	// lwz r16,-15640(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -15640);
loc_8211C110:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821094c0
	ctx.lr = 0x8211C11C;
	sub_821094C0(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8211c18c
	if (ctx.cr6.eq) goto loc_8211C18C;
	// lwz r8,12344(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12344);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// blt cr6,0x8211c13c
	if (ctx.cr6.lt) goto loc_8211C13C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8211C13C:
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8211c15c
	if (ctx.cr6.eq) goto loc_8211C15C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82113070
	ctx.lr = 0x8211C150;
	sub_82113070(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8211C15C:
	// lwz r11,13524(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13524);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211c178
	if (ctx.cr6.eq) goto loc_8211C178;
	// lwz r4,13528(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13528);
	// li r3,8
	ctx.r3.s64 = 8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8211C178;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8211C178:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r5,13508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13508, ctx.r5.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8211C18C:
	// lwz r11,13524(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13524);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211c1a8
	if (ctx.cr6.eq) goto loc_8211C1A8;
	// lwz r4,13528(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13528);
	// li r3,1
	ctx.r3.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8211C1A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8211C1A8:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r4,r30,12688
	ctx.r4.s64 = ctx.r30.s64 + 12688;
	// addi r11,r11,-24936
	ctx.r11.s64 = ctx.r11.s64 + -24936;
	// addi r3,r11,8376
	ctx.r3.s64 = ctx.r11.s64 + 8376;
	// bl 0x822082a0
	ctx.lr = 0x8211C1BC;
	sub_822082A0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8211C1C8:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lbz r5,12554(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 12554);
	// addi r4,r30,12460
	ctx.r4.s64 = ctx.r30.s64 + 12460;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// addi r3,r11,2896
	ctx.r3.s64 = ctx.r11.s64 + 2896;
	// bl 0x823703d0
	ctx.lr = 0x8211C1E0;
	sub_823703D0(ctx, base);
	// lwz r11,13524(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13524);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211c1fc
	if (ctx.cr6.eq) goto loc_8211C1FC;
	// lwz r4,13528(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13528);
	// li r3,7
	ctx.r3.s64 = 7;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8211C1FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8211C1FC:
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r4,13453(r31)
	PPC_STORE_U8(ctx.r31.u32 + 13453, ctx.r4.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8211C210:
	// lbz r3,14466(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 14466);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r3,5
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 5, ctx.xer);
	// blt cr6,0x8211c224
	if (ctx.cr6.lt) goto loc_8211C224;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8211C224:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// lwz r11,13524(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13524);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8211c280
	if (ctx.cr6.eq) goto loc_8211C280;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211c24c
	if (ctx.cr6.eq) goto loc_8211C24C;
	// lwz r4,13528(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13528);
	// li r3,4
	ctx.r3.s64 = 4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8211C24C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8211C24C:
	// addi r6,r30,12396
	ctx.r6.s64 = ctx.r30.s64 + 12396;
	// lbz r5,12554(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 12554);
	// addi r4,r30,12460
	ctx.r4.s64 = ctx.r30.s64 + 12460;
	// addi r3,r31,14464
	ctx.r3.s64 = ctx.r31.s64 + 14464;
	// bl 0x82109938
	ctx.lr = 0x8211C260;
	sub_82109938(ctx, base);
	// lbz r9,12555(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 12555);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r8,r9,1
	ctx.r8.u64 = ctx.r9.u64 | 1;
	// stb r8,12555(r30)
	PPC_STORE_U8(ctx.r30.u32 + 12555, ctx.r8.u8);
	// bl 0x82119db8
	ctx.lr = 0x8211C274;
	sub_82119DB8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8211C280:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211c298
	if (ctx.cr6.eq) goto loc_8211C298;
	// lwz r4,13528(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13528);
	// li r3,9
	ctx.r3.s64 = 9;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8211C298;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8211C298:
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r30,12396
	ctx.r11.s64 = ctx.r30.s64 + 12396;
	// addi r10,r31,12148
	ctx.r10.s64 = ctx.r31.s64 + 12148;
	// li r9,9
	ctx.r9.s64 = 9;
	// stw r7,13508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13508, ctx.r7.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8211C2B0:
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8211c2b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8211C2B0;
	// lbz r11,12554(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 12554);
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r30,12460
	ctx.r4.s64 = ctx.r30.s64 + 12460;
	// addi r3,r31,12184
	ctx.r3.s64 = ctx.r31.s64 + 12184;
	// stb r11,12201(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12201, ctx.r11.u8);
	// bl 0x8259d2a0
	ctx.lr = 0x8211C2DC;
	sub_8259D2A0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8211C2E8:
	// lwz r11,13524(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13524);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211c304
	if (ctx.cr6.eq) goto loc_8211C304;
	// lwz r4,13528(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13528);
	// li r3,5
	ctx.r3.s64 = 5;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8211C304;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8211C304:
	// addi r28,r31,14464
	ctx.r28.s64 = ctx.r31.s64 + 14464;
	// lbz r5,12554(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 12554);
	// addi r6,r30,12396
	ctx.r6.s64 = ctx.r30.s64 + 12396;
	// addi r4,r30,12460
	ctx.r4.s64 = ctx.r30.s64 + 12460;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82113340
	ctx.lr = 0x8211C31C;
	sub_82113340(ctx, base);
	// lbz r10,12555(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 12555);
	// rlwinm r9,r10,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r9,12555(r30)
	PPC_STORE_U8(ctx.r30.u32 + 12555, ctx.r9.u8);
	// lwz r8,11480(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11480);
	// cmpwi cr6,r8,5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 5, ctx.xer);
	// bne cr6,0x8211c340
	if (!ctx.cr6.eq) goto loc_8211C340;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,13440(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13440);
	// bl 0x82113100
	ctx.lr = 0x8211C340;
	sub_82113100(ctx, base);
loc_8211C340:
	// cmpwi cr6,r29,8
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 8, ctx.xer);
	// bne cr6,0x8211c360
	if (!ctx.cr6.eq) goto loc_8211C360;
	// lbz r7,12201(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12201);
	// addi r6,r31,12148
	ctx.r6.s64 = ctx.r31.s64 + 12148;
	// addi r4,r31,12184
	ctx.r4.s64 = ctx.r31.s64 + 12184;
	// extsb r5,r7
	ctx.r5.s64 = ctx.r7.s8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82109938
	ctx.lr = 0x8211C360;
	sub_82109938(ctx, base);
loc_8211C360:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82119db8
	ctx.lr = 0x8211C368;
	sub_82119DB8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8211C374:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821094c0
	ctx.lr = 0x8211C380;
	sub_821094C0(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8211c3a0
	if (ctx.cr6.eq) goto loc_8211C3A0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82109548
	ctx.lr = 0x8211C394;
	sub_82109548(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8211C3A0:
	// lwz r11,11480(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11480);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x8211c514
	if (ctx.cr6.gt) goto loc_8211C514;
	// lis r12,-32238
	ctx.r12.s64 = -2112749568;
	// addi r12,r12,-15420
	ctx.r12.s64 = ctx.r12.s64 + -15420;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8211C3E8;
	case 1:
		goto loc_8211C3E8;
	case 2:
		goto loc_8211C4D0;
	case 3:
		goto loc_8211C4D0;
	case 4:
		goto loc_8211C4D0;
	case 5:
		goto loc_8211C4D0;
	case 6:
		goto loc_8211C4D0;
	case 7:
		goto loc_8211C4D0;
	case 8:
		goto loc_8211C4D0;
	default:
		__builtin_unreachable();
	}
	// lwz r16,-15384(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -15384);
	// lwz r16,-15384(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -15384);
	// lwz r16,-15152(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -15152);
	// lwz r16,-15152(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -15152);
	// lwz r16,-15152(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -15152);
	// lwz r16,-15152(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -15152);
	// lwz r16,-15152(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -15152);
	// lwz r16,-15152(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -15152);
	// lwz r16,-15152(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -15152);
loc_8211C3E8:
	// lwz r11,13524(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13524);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211c404
	if (ctx.cr6.eq) goto loc_8211C404;
	// lwz r4,13528(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13528);
	// li r3,1
	ctx.r3.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8211C404;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8211C404:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r4,r30,12688
	ctx.r4.s64 = ctx.r30.s64 + 12688;
	// addi r11,r11,-24936
	ctx.r11.s64 = ctx.r11.s64 + -24936;
	// addi r3,r11,8376
	ctx.r3.s64 = ctx.r11.s64 + 8376;
	// bl 0x822082a0
	ctx.lr = 0x8211C418;
	sub_822082A0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8211C424:
	// lwz r11,13524(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13524);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211c440
	if (ctx.cr6.eq) goto loc_8211C440;
	// lwz r4,13528(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13528);
	// li r3,1
	ctx.r3.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8211C440;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8211C440:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r4,r30,12688
	ctx.r4.s64 = ctx.r30.s64 + 12688;
	// addi r11,r11,-24936
	ctx.r11.s64 = ctx.r11.s64 + -24936;
	// addi r3,r11,8376
	ctx.r3.s64 = ctx.r11.s64 + 8376;
	// bl 0x822082d8
	ctx.lr = 0x8211C454;
	sub_822082D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8211C460:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821094c0
	ctx.lr = 0x8211C46C;
	sub_821094C0(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8211c4d0
	if (ctx.cr6.eq) goto loc_8211C4D0;
	// lwz r11,13524(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13524);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211c494
	if (ctx.cr6.eq) goto loc_8211C494;
	// lwz r4,13528(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13528);
	// li r3,1
	ctx.r3.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8211C494;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8211C494:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r4,-6216
	ctx.r4.s64 = -407371776;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// lis r11,-27105
	ctx.r11.s64 = -1776353280;
	// ori r4,r4,63999
	ctx.r4.u64 = ctx.r4.u64 | 63999;
	// ori r10,r11,28614
	ctx.r10.u64 = ctx.r11.u64 | 28614;
	// li r11,8
	ctx.r11.s64 = 8;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// rldimi r4,r10,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// stw r11,8400(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8400, ctx.r11.u32);
	// bl 0x820a38e8
	ctx.lr = 0x8211C4C4;
	sub_820A38E8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8211C4D0:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lwz r7,12332(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12332);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// lbz r5,12554(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 12554);
	// addi r9,r11,-27976
	ctx.r9.s64 = ctx.r11.s64 + -27976;
	// lis r8,48
	ctx.r8.s64 = 3145728;
	// addi r6,r30,12396
	ctx.r6.s64 = ctx.r30.s64 + 12396;
	// addi r4,r30,12460
	ctx.r4.s64 = ctx.r30.s64 + 12460;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222de10
	ctx.lr = 0x8211C4F8;
	sub_8222DE10(ctx, base);
	// lwz r11,13524(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13524);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211c514
	if (ctx.cr6.eq) goto loc_8211C514;
	// lwz r4,13528(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13528);
	// li r3,3
	ctx.r3.s64 = 3;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8211C514;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8211C514:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8211C520"))) PPC_WEAK_FUNC(sub_8211C520);
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

__attribute__((alias("__imp__sub_8211C61C"))) PPC_WEAK_FUNC(sub_8211C61C);
PPC_FUNC_IMPL(__imp__sub_8211C61C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8211C620"))) PPC_WEAK_FUNC(sub_8211C620);
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

__attribute__((alias("__imp__sub_8211C808"))) PPC_WEAK_FUNC(sub_8211C808);
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

__attribute__((alias("__imp__sub_8211C978"))) PPC_WEAK_FUNC(sub_8211C978);
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

__attribute__((alias("__imp__sub_8211C9FC"))) PPC_WEAK_FUNC(sub_8211C9FC);
PPC_FUNC_IMPL(__imp__sub_8211C9FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8211CA00"))) PPC_WEAK_FUNC(sub_8211CA00);
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

__attribute__((alias("__imp__sub_8211CAC0"))) PPC_WEAK_FUNC(sub_8211CAC0);
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

__attribute__((alias("__imp__sub_8211CDD8"))) PPC_WEAK_FUNC(sub_8211CDD8);
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

__attribute__((alias("__imp__sub_8211E30C"))) PPC_WEAK_FUNC(sub_8211E30C);
PPC_FUNC_IMPL(__imp__sub_8211E30C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8211E310"))) PPC_WEAK_FUNC(sub_8211E310);
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

__attribute__((alias("__imp__sub_8211F318"))) PPC_WEAK_FUNC(sub_8211F318);
PPC_FUNC_IMPL(__imp__sub_8211F318) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,1421(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1421);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x8211bee0
	sub_8211BEE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8211F328"))) PPC_WEAK_FUNC(sub_8211F328);
PPC_FUNC_IMPL(__imp__sub_8211F328) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8211F32C"))) PPC_WEAK_FUNC(sub_8211F32C);
PPC_FUNC_IMPL(__imp__sub_8211F32C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8211F330"))) PPC_WEAK_FUNC(sub_8211F330);
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

__attribute__((alias("__imp__sub_8211F3B8"))) PPC_WEAK_FUNC(sub_8211F3B8);
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

__attribute__((alias("__imp__sub_8211F444"))) PPC_WEAK_FUNC(sub_8211F444);
PPC_FUNC_IMPL(__imp__sub_8211F444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8211F448"))) PPC_WEAK_FUNC(sub_8211F448);
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

__attribute__((alias("__imp__sub_8211F45C"))) PPC_WEAK_FUNC(sub_8211F45C);
PPC_FUNC_IMPL(__imp__sub_8211F45C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8211F460"))) PPC_WEAK_FUNC(sub_8211F460);
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

__attribute__((alias("__imp__sub_8211F4D8"))) PPC_WEAK_FUNC(sub_8211F4D8);
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

__attribute__((alias("__imp__sub_8211F61C"))) PPC_WEAK_FUNC(sub_8211F61C);
PPC_FUNC_IMPL(__imp__sub_8211F61C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8211F620"))) PPC_WEAK_FUNC(sub_8211F620);
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

__attribute__((alias("__imp__sub_8211F830"))) PPC_WEAK_FUNC(sub_8211F830);
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

__attribute__((alias("__imp__sub_8211FA28"))) PPC_WEAK_FUNC(sub_8211FA28);
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

__attribute__((alias("__imp__sub_821208F4"))) PPC_WEAK_FUNC(sub_821208F4);
PPC_FUNC_IMPL(__imp__sub_821208F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821208F8"))) PPC_WEAK_FUNC(sub_821208F8);
PPC_FUNC_IMPL(__imp__sub_821208F8) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,0
	ctx.r9.s64 = 0;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_8212090C:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// neg r11,r5
	ctx.r11.s64 = -ctx.r5.s64;
	// blt cr6,0x8212091c
	if (ctx.cr6.lt) goto loc_8212091C;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_8212091C:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82120938
	if (ctx.cr6.lt) goto loc_82120938;
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8212093c
	if (!ctx.cr6.gt) goto loc_8212093C;
loc_82120938:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8212093C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82120960
	if (!ctx.cr6.eq) goto loc_82120960;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmpwi cr6,r9,5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 5, ctx.xer);
	// blt cr6,0x8212090c
	if (ctx.cr6.lt) goto loc_8212090C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82120960:
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r3,8(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8212097C"))) PPC_WEAK_FUNC(sub_8212097C);
PPC_FUNC_IMPL(__imp__sub_8212097C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82120980"))) PPC_WEAK_FUNC(sub_82120980);
PPC_FUNC_IMPL(__imp__sub_82120980) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x82120998
	if (ctx.cr6.gt) goto loc_82120998;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82120998:
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821209ac
	if (ctx.cr6.eq) goto loc_821209AC;
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_821209AC:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x821209bc
	if (ctx.cr6.lt) goto loc_821209BC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821209BC:
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821209D4"))) PPC_WEAK_FUNC(sub_821209D4);
PPC_FUNC_IMPL(__imp__sub_821209D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821209D8"))) PPC_WEAK_FUNC(sub_821209D8);
PPC_FUNC_IMPL(__imp__sub_821209D8) {
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
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// li r31,14
	ctx.r31.s64 = 14;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821209fc
	if (!ctx.cr6.eq) goto loc_821209FC;
	// li r31,0
	ctx.r31.s64 = 0;
loc_821209FC:
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x82120a84
	if (ctx.cr6.gt) goto loc_82120A84;
	// lis r12,-32238
	ctx.r12.s64 = -2112749568;
	// addi r12,r12,2592
	ctx.r12.s64 = ctx.r12.s64 + 2592;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82120A84;
	case 1:
		goto loc_82120A60;
	case 2:
		goto loc_82120A60;
	case 3:
		goto loc_82120A60;
	case 4:
		goto loc_82120A40;
	case 5:
		goto loc_82120A40;
	case 6:
		goto loc_82120A40;
	case 7:
		goto loc_82120A40;
	default:
		__builtin_unreachable();
	}
	// lwz r16,2692(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + 2692);
	// lwz r16,2656(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + 2656);
	// lwz r16,2656(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + 2656);
	// lwz r16,2656(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + 2656);
	// lwz r16,2624(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + 2624);
	// lwz r16,2624(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + 2624);
	// lwz r16,2624(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + 2624);
	// lwz r16,2624(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + 2624);
loc_82120A40:
	// addis r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 65536;
	// addi r3,r3,12432
	ctx.r3.s64 = ctx.r3.s64 + 12432;
	// bl 0x821208f8
	ctx.lr = 0x82120A4C;
	sub_821208F8(ctx, base);
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
loc_82120A60:
	// addis r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 65536;
	// addi r3,r3,12432
	ctx.r3.s64 = ctx.r3.s64 + 12432;
	// bl 0x821208f8
	ctx.lr = 0x82120A6C;
	sub_821208F8(ctx, base);
	// add r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 + ctx.r31.u64;
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
loc_82120A84:
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

__attribute__((alias("__imp__sub_82120A9C"))) PPC_WEAK_FUNC(sub_82120A9C);
PPC_FUNC_IMPL(__imp__sub_82120A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82120AA0"))) PPC_WEAK_FUNC(sub_82120AA0);
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

__attribute__((alias("__imp__sub_82120ABC"))) PPC_WEAK_FUNC(sub_82120ABC);
PPC_FUNC_IMPL(__imp__sub_82120ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82120AC0"))) PPC_WEAK_FUNC(sub_82120AC0);
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

__attribute__((alias("__imp__sub_82120B34"))) PPC_WEAK_FUNC(sub_82120B34);
PPC_FUNC_IMPL(__imp__sub_82120B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82120B38"))) PPC_WEAK_FUNC(sub_82120B38);
PPC_FUNC_IMPL(__imp__sub_82120B38) {
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
	// bl 0x822ec298
	ctx.lr = 0x82120B50;
	sub_822EC298(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82120b78
	if (!ctx.cr6.eq) goto loc_82120B78;
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
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82120B78:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r11,r10,-2
	ctx.r11.s64 = ctx.r10.s64 + -2;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 + ctx.r11.u64;
	// bl 0x822d4dc0
	ctx.lr = 0x82120B94;
	sub_822D4DC0(ctx, base);
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f0,f1
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
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

__attribute__((alias("__imp__sub_82120BB0"))) PPC_WEAK_FUNC(sub_82120BB0);
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

__attribute__((alias("__imp__sub_82120C00"))) PPC_WEAK_FUNC(sub_82120C00);
PPC_FUNC_IMPL(__imp__sub_82120C00) {
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
	// lis r11,37
	ctx.r11.s64 = 2424832;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r11,49144
	ctx.r10.u64 = ctx.r11.u64 | 49144;
	// clrlwi r9,r4,24
	ctx.r9.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stbx r4,r31,r10
	PPC_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r4.u8);
	// beq cr6,0x82120c54
	if (ctx.cr6.eq) goto loc_82120C54;
	// lis r8,37
	ctx.r8.s64 = 2424832;
	// li r6,-1
	ctx.r6.s64 = -1;
	// ori r7,r8,49152
	ctx.r7.u64 = ctx.r8.u64 | 49152;
	// stwx r6,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r6.u32);
	// bl 0x82370cc0
	ctx.lr = 0x82120C40;
	sub_82370CC0(ctx, base);
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
loc_82120C54:
	// lis r5,37
	ctx.r5.s64 = 2424832;
	// ori r4,r5,49145
	ctx.r4.u64 = ctx.r5.u64 | 49145;
	// lbzx r3,r31,r4
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r4.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82120c94
	if (!ctx.cr6.eq) goto loc_82120C94;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82370c88
	ctx.lr = 0x82120C70;
	sub_82370C88(ctx, base);
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lis r8,37
	ctx.r8.s64 = 2424832;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// ori r7,r8,49152
	ctx.r7.u64 = ctx.r8.u64 | 49152;
	// lwz r11,-20920(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20920);
	// subf r6,r10,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subf r5,r9,r6
	ctx.r5.s64 = ctx.r6.s64 - ctx.r9.s64;
	// stwx r5,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r5.u32);
loc_82120C94:
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

__attribute__((alias("__imp__sub_82120CA8"))) PPC_WEAK_FUNC(sub_82120CA8);
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

__attribute__((alias("__imp__sub_82120CC0"))) PPC_WEAK_FUNC(sub_82120CC0);
PPC_FUNC_IMPL(__imp__sub_82120CC0) {
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
	// addi r30,r11,26080
	ctx.r30.s64 = ctx.r11.s64 + 26080;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821041d8
	ctx.lr = 0x82120CE8;
	sub_821041D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82120dc0
	if (!ctx.cr6.eq) goto loc_82120DC0;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lis r9,37
	ctx.r9.s64 = 2424832;
	// addi r10,r11,28544
	ctx.r10.s64 = ctx.r11.s64 + 28544;
	// ori r8,r9,49147
	ctx.r8.u64 = ctx.r9.u64 | 49147;
	// lbzx r7,r10,r8
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r8.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82120dc0
	if (!ctx.cr6.eq) goto loc_82120DC0;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lis r4,34
	ctx.r4.s64 = 2228224;
	// addi r11,r11,-1416
	ctx.r11.s64 = ctx.r11.s64 + -1416;
	// addi r6,r11,272
	ctx.r6.s64 = ctx.r11.s64 + 272;
	// addi r5,r11,345
	ctx.r5.s64 = ctx.r11.s64 + 345;
	// addis r11,r30,3
	ctx.r11.s64 = ctx.r30.s64 + 196608;
	// addi r3,r11,20656
	ctx.r3.s64 = ctx.r11.s64 + 20656;
	// ori r11,r4,36952
	ctx.r11.u64 = ctx.r4.u64 | 36952;
	// stw r6,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r6.u32);
	// stw r5,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r5.u32);
	// ldx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x822d2c68
	ctx.lr = 0x82120D40;
	sub_822D2C68(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,11600
	ctx.r11.s64 = ctx.r11.s64 + 11600;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// lwz r11,316(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 316);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82120d70
	if (!ctx.cr6.eq) goto loc_82120D70;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x820fbce0
	ctx.lr = 0x82120D68;
	sub_820FBCE0(ctx, base);
	// stb r3,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r3.u8);
	// b 0x82120d74
	goto loc_82120D74;
loc_82120D70:
	// stb r30,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r30.u8);
loc_82120D74:
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// addi r10,r31,20
	ctx.r10.s64 = ctx.r31.s64 + 20;
	// stb r30,81(r31)
	PPC_STORE_U8(ctx.r31.u32 + 81, ctx.r30.u8);
	// li r8,8
	ctx.r8.s64 = 8;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r9,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r9.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82120DB4:
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82120db4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82120DB4;
loc_82120DC0:
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

__attribute__((alias("__imp__sub_82120DDC"))) PPC_WEAK_FUNC(sub_82120DDC);
PPC_FUNC_IMPL(__imp__sub_82120DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82120DE0"))) PPC_WEAK_FUNC(sub_82120DE0);
PPC_FUNC_IMPL(__imp__sub_82120DE0) {
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
	ctx.lr = 0x82120E08;
	sub_821041D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82120e8c
	if (!ctx.cr6.eq) goto loc_82120E8C;
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
	// bne cr6,0x82120e8c
	if (!ctx.cr6.eq) goto loc_82120E8C;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x820fe5a8
	ctx.lr = 0x82120E48;
	sub_820FE5A8(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r7,r11,5
	ctx.r7.s64 = ctx.r11.s64 + 5;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r6,r31
	PPC_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r30.u32);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stw r5,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r5.u32);
	// beq cr6,0x82120e7c
	if (ctx.cr6.eq) goto loc_82120E7C;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// ble cr6,0x82120e8c
	if (!ctx.cr6.gt) goto loc_82120E8C;
	// cmpwi cr6,r30,6
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 6, ctx.xer);
	// bgt cr6,0x82120e8c
	if (ctx.cr6.gt) goto loc_82120E8C;
loc_82120E7C:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// li r10,5
	ctx.r10.s64 = 5;
	// addi r11,r11,4864
	ctx.r11.s64 = ctx.r11.s64 + 4864;
	// stw r10,632(r11)
	PPC_STORE_U32(ctx.r11.u32 + 632, ctx.r10.u32);
loc_82120E8C:
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

__attribute__((alias("__imp__sub_82120EA4"))) PPC_WEAK_FUNC(sub_82120EA4);
PPC_FUNC_IMPL(__imp__sub_82120EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82120EA8"))) PPC_WEAK_FUNC(sub_82120EA8);
PPC_FUNC_IMPL(__imp__sub_82120EA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82120EB0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,26080
	ctx.r30.s64 = ctx.r11.s64 + 26080;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821041d8
	ctx.lr = 0x82120EC8;
	sub_821041D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82120fb4
	if (!ctx.cr6.eq) goto loc_82120FB4;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lis r10,37
	ctx.r10.s64 = 2424832;
	// addi r29,r11,28544
	ctx.r29.s64 = ctx.r11.s64 + 28544;
	// ori r9,r10,49147
	ctx.r9.u64 = ctx.r10.u64 | 49147;
	// lbzx r8,r29,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82120fb4
	if (!ctx.cr6.eq) goto loc_82120FB4;
	// lbz r7,80(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82120fb4
	if (ctx.cr6.eq) goto loc_82120FB4;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x820fe568
	ctx.lr = 0x82120F0C;
	sub_820FE568(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82120fb4
	if (!ctx.cr6.eq) goto loc_82120FB4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,30544
	ctx.r11.s64 = ctx.r11.s64 + 30544;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r11,64
	ctx.r3.s64 = ctx.r11.s64 + 64;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// lwzx r10,r4,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r3.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82120fb4
	if (ctx.cr6.lt) goto loc_82120FB4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821041d8
	ctx.lr = 0x82120F4C;
	sub_821041D8(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82120fb4
	if (!ctx.cr6.eq) goto loc_82120FB4;
	// lis r8,37
	ctx.r8.s64 = 2424832;
	// ori r7,r8,49147
	ctx.r7.u64 = ctx.r8.u64 | 49147;
	// lbzx r6,r29,r7
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r7.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82120fb4
	if (!ctx.cr6.eq) goto loc_82120FB4;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x820fe5a8
	ctx.lr = 0x82120F84;
	sub_820FE5A8(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r11,5
	ctx.r4.s64 = ctx.r11.s64 + 5;
	// li r10,5
	ctx.r10.s64 = 5;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r3,r31
	PPC_STORE_U32(ctx.r3.u32 + ctx.r31.u32, ctx.r5.u32);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r11,r11,4864
	ctx.r11.s64 = ctx.r11.s64 + 4864;
	// stw r10,632(r11)
	PPC_STORE_U32(ctx.r11.u32 + 632, ctx.r10.u32);
loc_82120FB4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82120FBC"))) PPC_WEAK_FUNC(sub_82120FBC);
PPC_FUNC_IMPL(__imp__sub_82120FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82120FC0"))) PPC_WEAK_FUNC(sub_82120FC0);
PPC_FUNC_IMPL(__imp__sub_82120FC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82120FC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,26080
	ctx.r30.s64 = ctx.r11.s64 + 26080;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821041d8
	ctx.lr = 0x82120FE0;
	sub_821041D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821210cc
	if (!ctx.cr6.eq) goto loc_821210CC;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lis r10,37
	ctx.r10.s64 = 2424832;
	// addi r29,r11,28544
	ctx.r29.s64 = ctx.r11.s64 + 28544;
	// ori r9,r10,49147
	ctx.r9.u64 = ctx.r10.u64 | 49147;
	// lbzx r8,r29,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x821210cc
	if (!ctx.cr6.eq) goto loc_821210CC;
	// lbz r7,80(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x821210cc
	if (ctx.cr6.eq) goto loc_821210CC;
	// li r5,3
	ctx.r5.s64 = 3;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x820fe568
	ctx.lr = 0x82121024;
	sub_820FE568(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x821210cc
	if (!ctx.cr6.eq) goto loc_821210CC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,30544
	ctx.r11.s64 = ctx.r11.s64 + 30544;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// lwzx r10,r4,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r3.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x821210cc
	if (ctx.cr6.lt) goto loc_821210CC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821041d8
	ctx.lr = 0x82121064;
	sub_821041D8(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821210cc
	if (!ctx.cr6.eq) goto loc_821210CC;
	// lis r8,37
	ctx.r8.s64 = 2424832;
	// ori r7,r8,49147
	ctx.r7.u64 = ctx.r8.u64 | 49147;
	// lbzx r6,r29,r7
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r7.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x821210cc
	if (!ctx.cr6.eq) goto loc_821210CC;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r5,3
	ctx.r5.s64 = 3;
	// bl 0x820fe5a8
	ctx.lr = 0x8212109C;
	sub_820FE5A8(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r11,5
	ctx.r4.s64 = ctx.r11.s64 + 5;
	// li r10,5
	ctx.r10.s64 = 5;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r3,r31
	PPC_STORE_U32(ctx.r3.u32 + ctx.r31.u32, ctx.r5.u32);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r11,r11,4864
	ctx.r11.s64 = ctx.r11.s64 + 4864;
	// stw r10,632(r11)
	PPC_STORE_U32(ctx.r11.u32 + 632, ctx.r10.u32);
loc_821210CC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821210D4"))) PPC_WEAK_FUNC(sub_821210D4);
PPC_FUNC_IMPL(__imp__sub_821210D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821210D8"))) PPC_WEAK_FUNC(sub_821210D8);
PPC_FUNC_IMPL(__imp__sub_821210D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x821210E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,26080
	ctx.r30.s64 = ctx.r11.s64 + 26080;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821041d8
	ctx.lr = 0x821210F8;
	sub_821041D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821211b8
	if (!ctx.cr6.eq) goto loc_821211B8;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lis r10,37
	ctx.r10.s64 = 2424832;
	// addi r29,r11,28544
	ctx.r29.s64 = ctx.r11.s64 + 28544;
	// ori r9,r10,49147
	ctx.r9.u64 = ctx.r10.u64 | 49147;
	// lbzx r8,r29,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x821211b8
	if (!ctx.cr6.eq) goto loc_821211B8;
	// lbz r7,80(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x821211b8
	if (ctx.cr6.eq) goto loc_821211B8;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x820fe568
	ctx.lr = 0x8212113C;
	sub_820FE568(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x821211b8
	if (!ctx.cr6.eq) goto loc_821211B8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821041d8
	ctx.lr = 0x82121150;
	sub_821041D8(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x821211b8
	if (!ctx.cr6.eq) goto loc_821211B8;
	// lis r4,37
	ctx.r4.s64 = 2424832;
	// ori r3,r4,49147
	ctx.r3.u64 = ctx.r4.u64 | 49147;
	// lbzx r11,r29,r3
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821211b8
	if (!ctx.cr6.eq) goto loc_821211B8;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x820fe5a8
	ctx.lr = 0x82121188;
	sub_820FE5A8(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r9,r11,5
	ctx.r9.s64 = ctx.r11.s64 + 5;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r10.u32);
	// li r10,5
	ctx.r10.s64 = 5;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r11,r11,4864
	ctx.r11.s64 = ctx.r11.s64 + 4864;
	// stw r7,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r7.u32);
	// stw r10,632(r11)
	PPC_STORE_U32(ctx.r11.u32 + 632, ctx.r10.u32);
loc_821211B8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821211C0"))) PPC_WEAK_FUNC(sub_821211C0);
PPC_FUNC_IMPL(__imp__sub_821211C0) {
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
	// addi r3,r11,26080
	ctx.r3.s64 = ctx.r11.s64 + 26080;
	// bl 0x821041d8
	ctx.lr = 0x821211E0;
	sub_821041D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82121264
	if (!ctx.cr6.eq) goto loc_82121264;
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
	// bne cr6,0x82121264
	if (!ctx.cr6.eq) goto loc_82121264;
	// lbz r7,80(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82121264
	if (ctx.cr6.eq) goto loc_82121264;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x820fe568
	ctx.lr = 0x82121224;
	sub_820FE568(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82121264
	if (!ctx.cr6.eq) goto loc_82121264;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,30544
	ctx.r11.s64 = ctx.r11.s64 + 30544;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r4,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r11,r11,4864
	ctx.r11.s64 = ctx.r11.s64 + 4864;
	// lwz r11,592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 592);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x82121264
	if (ctx.cr6.lt) goto loc_82121264;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82120de0
	ctx.lr = 0x82121264;
	sub_82120DE0(ctx, base);
loc_82121264:
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

__attribute__((alias("__imp__sub_82121278"))) PPC_WEAK_FUNC(sub_82121278);
PPC_FUNC_IMPL(__imp__sub_82121278) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82121280;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,26080
	ctx.r30.s64 = ctx.r11.s64 + 26080;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821041d8
	ctx.lr = 0x82121298;
	sub_821041D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82121380
	if (!ctx.cr6.eq) goto loc_82121380;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lis r10,37
	ctx.r10.s64 = 2424832;
	// addi r29,r11,28544
	ctx.r29.s64 = ctx.r11.s64 + 28544;
	// ori r9,r10,49147
	ctx.r9.u64 = ctx.r10.u64 | 49147;
	// lbzx r8,r29,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82121380
	if (!ctx.cr6.eq) goto loc_82121380;
	// lbz r7,80(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82121380
	if (ctx.cr6.eq) goto loc_82121380;
	// li r5,5
	ctx.r5.s64 = 5;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x820fe568
	ctx.lr = 0x821212DC;
	sub_820FE568(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82121380
	if (!ctx.cr6.eq) goto loc_82121380;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,30544
	ctx.r11.s64 = ctx.r11.s64 + 30544;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r11,160
	ctx.r3.s64 = ctx.r11.s64 + 160;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// lwzx r10,r4,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r3.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82121380
	if (ctx.cr6.lt) goto loc_82121380;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821041d8
	ctx.lr = 0x8212131C;
	sub_821041D8(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82121380
	if (!ctx.cr6.eq) goto loc_82121380;
	// lis r8,37
	ctx.r8.s64 = 2424832;
	// ori r7,r8,49147
	ctx.r7.u64 = ctx.r8.u64 | 49147;
	// lbzx r6,r29,r7
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r7.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82121380
	if (!ctx.cr6.eq) goto loc_82121380;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r5,5
	ctx.r5.s64 = 5;
	// bl 0x820fe5a8
	ctx.lr = 0x82121354;
	sub_820FE5A8(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r10,5
	ctx.r10.s64 = 5;
	// addi r5,r11,5
	ctx.r5.s64 = ctx.r11.s64 + 5;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r4,r31
	PPC_STORE_U32(ctx.r4.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r11,r11,4864
	ctx.r11.s64 = ctx.r11.s64 + 4864;
	// stw r3,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r3.u32);
	// stw r10,632(r11)
	PPC_STORE_U32(ctx.r11.u32 + 632, ctx.r10.u32);
loc_82121380:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82121388"))) PPC_WEAK_FUNC(sub_82121388);
PPC_FUNC_IMPL(__imp__sub_82121388) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82121390;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,26080
	ctx.r30.s64 = ctx.r11.s64 + 26080;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821041d8
	ctx.lr = 0x821213A8;
	sub_821041D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82121494
	if (!ctx.cr6.eq) goto loc_82121494;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lis r10,37
	ctx.r10.s64 = 2424832;
	// addi r29,r11,28544
	ctx.r29.s64 = ctx.r11.s64 + 28544;
	// ori r9,r10,49147
	ctx.r9.u64 = ctx.r10.u64 | 49147;
	// lbzx r8,r29,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82121494
	if (!ctx.cr6.eq) goto loc_82121494;
	// lbz r7,80(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82121494
	if (ctx.cr6.eq) goto loc_82121494;
	// li r5,6
	ctx.r5.s64 = 6;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x820fe568
	ctx.lr = 0x821213EC;
	sub_820FE568(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82121494
	if (!ctx.cr6.eq) goto loc_82121494;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,30544
	ctx.r11.s64 = ctx.r11.s64 + 30544;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r11,192
	ctx.r3.s64 = ctx.r11.s64 + 192;
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// lwzx r10,r4,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r3.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82121494
	if (ctx.cr6.lt) goto loc_82121494;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821041d8
	ctx.lr = 0x8212142C;
	sub_821041D8(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82121494
	if (!ctx.cr6.eq) goto loc_82121494;
	// lis r8,37
	ctx.r8.s64 = 2424832;
	// ori r7,r8,49147
	ctx.r7.u64 = ctx.r8.u64 | 49147;
	// lbzx r6,r29,r7
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r7.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82121494
	if (!ctx.cr6.eq) goto loc_82121494;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r5,6
	ctx.r5.s64 = 6;
	// bl 0x820fe5a8
	ctx.lr = 0x82121464;
	sub_820FE5A8(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r4,r11,5
	ctx.r4.s64 = ctx.r11.s64 + 5;
	// li r10,5
	ctx.r10.s64 = 5;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r3,r31
	PPC_STORE_U32(ctx.r3.u32 + ctx.r31.u32, ctx.r5.u32);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r11,r11,4864
	ctx.r11.s64 = ctx.r11.s64 + 4864;
	// stw r10,632(r11)
	PPC_STORE_U32(ctx.r11.u32 + 632, ctx.r10.u32);
loc_82121494:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8212149C"))) PPC_WEAK_FUNC(sub_8212149C);
PPC_FUNC_IMPL(__imp__sub_8212149C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821214A0"))) PPC_WEAK_FUNC(sub_821214A0);
PPC_FUNC_IMPL(__imp__sub_821214A0) {
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
	// addi r3,r11,26080
	ctx.r3.s64 = ctx.r11.s64 + 26080;
	// bl 0x821041d8
	ctx.lr = 0x821214C0;
	sub_821041D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821214f0
	if (!ctx.cr6.eq) goto loc_821214F0;
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
	// bne cr6,0x821214f0
	if (!ctx.cr6.eq) goto loc_821214F0;
	// li r7,1
	ctx.r7.s64 = 1;
	// stb r7,81(r31)
	PPC_STORE_U8(ctx.r31.u32 + 81, ctx.r7.u8);
loc_821214F0:
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

__attribute__((alias("__imp__sub_82121504"))) PPC_WEAK_FUNC(sub_82121504);
PPC_FUNC_IMPL(__imp__sub_82121504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82121508"))) PPC_WEAK_FUNC(sub_82121508);
PPC_FUNC_IMPL(__imp__sub_82121508) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x82121510;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,26080
	ctx.r30.s64 = ctx.r11.s64 + 26080;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821041d8
	ctx.lr = 0x82121528;
	sub_821041D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821216a8
	if (!ctx.cr6.eq) goto loc_821216A8;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lis r10,37
	ctx.r10.s64 = 2424832;
	// addi r28,r11,28544
	ctx.r28.s64 = ctx.r11.s64 + 28544;
	// ori r9,r10,49147
	ctx.r9.u64 = ctx.r10.u64 | 49147;
	// lbzx r8,r28,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x821216a8
	if (!ctx.cr6.eq) goto loc_821216A8;
	// lbz r7,80(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x821216a8
	if (ctx.cr6.eq) goto loc_821216A8;
	// lis r6,7
	ctx.r6.s64 = 458752;
	// lis r3,34
	ctx.r3.s64 = 2228224;
	// ori r5,r6,16271
	ctx.r5.u64 = ctx.r6.u64 | 16271;
	// ori r11,r3,52520
	ctx.r11.u64 = ctx.r3.u64 | 52520;
	// lbzx r4,r30,r5
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r5.u32);
	// lbzx r11,r28,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r11.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// extsb r29,r11
	ctx.r29.s64 = ctx.r11.s8;
	// beq cr6,0x82121638
	if (ctx.cr6.eq) goto loc_82121638;
	// li r5,7
	ctx.r5.s64 = 7;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x820fe568
	ctx.lr = 0x82121590;
	sub_820FE568(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821216a8
	if (!ctx.cr6.eq) goto loc_821216A8;
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r9,r29,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,8544
	ctx.r11.s64 = ctx.r11.s64 + 8544;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,30544
	ctx.r10.s64 = ctx.r10.s64 + 30544;
	// lwzx r6,r9,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// addi r5,r10,224
	ctx.r5.s64 = ctx.r10.s64 + 224;
	// lwz r4,16(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// lwzx r3,r7,r5
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r5.u32);
	// cmpw cr6,r4,r3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x821216a8
	if (ctx.cr6.lt) goto loc_821216A8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821041d8
	ctx.lr = 0x821215D8;
	sub_821041D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821216a8
	if (!ctx.cr6.eq) goto loc_821216A8;
	// lis r10,37
	ctx.r10.s64 = 2424832;
	// ori r9,r10,49147
	ctx.r9.u64 = ctx.r10.u64 | 49147;
	// lbzx r8,r28,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x821216a8
	if (!ctx.cr6.eq) goto loc_821216A8;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r5,7
	ctx.r5.s64 = 7;
	// bl 0x820fe5a8
	ctx.lr = 0x82121610;
	sub_820FE5A8(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r7,7
	ctx.r7.s64 = 7;
	// addi r6,r11,5
	ctx.r6.s64 = ctx.r11.s64 + 5;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r7,r5,r31
	PPC_STORE_U32(ctx.r5.u32 + ctx.r31.u32, ctx.r7.u32);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stw r4,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r4.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_82121638:
	// lis r3,7
	ctx.r3.s64 = 458752;
	// ori r11,r3,16216
	ctx.r11.u64 = ctx.r3.u64 | 16216;
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addis r11,r30,3
	ctx.r11.s64 = ctx.r30.s64 + 196608;
	// addi r9,r11,24944
	ctx.r9.s64 = ctx.r11.s64 + 24944;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x821216a8
	if (!ctx.cr6.eq) goto loc_821216A8;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x820fe568
	ctx.lr = 0x82121668;
	sub_820FE568(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x821216a8
	if (!ctx.cr6.eq) goto loc_821216A8;
	// lbz r7,81(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 81);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x821216a8
	if (!ctx.cr6.eq) goto loc_821216A8;
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// rlwinm r6,r29,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-1264
	ctx.r11.s64 = ctx.r11.s64 + -1264;
	// lwzx r5,r6,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bgt cr6,0x821216a8
	if (ctx.cr6.gt) goto loc_821216A8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82120de0
	ctx.lr = 0x821216A8;
	sub_82120DE0(ctx, base);
loc_821216A8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821216B0"))) PPC_WEAK_FUNC(sub_821216B0);
PPC_FUNC_IMPL(__imp__sub_821216B0) {
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
	ctx.lr = 0x821216D8;
	sub_821041D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8212174c
	if (!ctx.cr6.eq) goto loc_8212174C;
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
	// bne cr6,0x8212174c
	if (!ctx.cr6.eq) goto loc_8212174C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// bl 0x820fbfc0
	ctx.lr = 0x82121710;
	sub_820FBFC0(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8212174c
	if (!ctx.cr6.eq) goto loc_8212174C;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// bl 0x820fbfe8
	ctx.lr = 0x82121730;
	sub_820FBFE8(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r5,r31
	PPC_STORE_U32(ctx.r5.u32 + ctx.r31.u32, ctx.r30.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stw r4,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r4.u32);
loc_8212174C:
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

__attribute__((alias("__imp__sub_82121764"))) PPC_WEAK_FUNC(sub_82121764);
PPC_FUNC_IMPL(__imp__sub_82121764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82121768"))) PPC_WEAK_FUNC(sub_82121768);
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

__attribute__((alias("__imp__sub_821217F0"))) PPC_WEAK_FUNC(sub_821217F0);
PPC_FUNC_IMPL(__imp__sub_821217F0) {
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
	// addi r3,r11,26080
	ctx.r3.s64 = ctx.r11.s64 + 26080;
	// bl 0x821041d8
	ctx.lr = 0x82121810;
	sub_821041D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8212185c
	if (!ctx.cr6.eq) goto loc_8212185C;
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
	// bne cr6,0x8212185c
	if (!ctx.cr6.eq) goto loc_8212185C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// rlwinm r7,r31,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,30800
	ctx.r11.s64 = ctx.r11.s64 + 30800;
	// lwzx r3,r7,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
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
loc_8212185C:
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

__attribute__((alias("__imp__sub_82121874"))) PPC_WEAK_FUNC(sub_82121874);
PPC_FUNC_IMPL(__imp__sub_82121874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82121878"))) PPC_WEAK_FUNC(sub_82121878);
PPC_FUNC_IMPL(__imp__sub_82121878) {
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
	// lis r7,-32222
	ctx.r7.s64 = -2111700992;
	// addi r10,r11,26752
	ctx.r10.s64 = ctx.r11.s64 + 26752;
	// lis r11,3
	ctx.r11.s64 = 196608;
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r9,r11,51969
	ctx.r9.u64 = ctx.r11.u64 | 51969;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r7,9944
	ctx.r7.s64 = ctx.r7.s64 + 9944;
	// lbzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// li r9,12
	ctx.r9.s64 = 12;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// addis r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 65536;
	// addi r8,r8,30604
	ctx.r8.s64 = ctx.r8.s64 + 30604;
	// beq cr6,0x821218f0
	if (ctx.cr6.eq) goto loc_821218F0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r5,r10,-31728
	ctx.r5.s64 = ctx.r10.s64 + -31728;
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
	ctx.lr = 0x821218EC;
	sub_821E6928(ctx, base);
	// b 0x82121938
	goto loc_82121938;
loc_821218F0:
	// lis r31,-32124
	ctx.r31.s64 = -2105278464;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lis r30,7
	ctx.r30.s64 = 458752;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r31,r31,26080
	ctx.r31.s64 = ctx.r31.s64 + 26080;
	// ori r30,r30,16232
	ctx.r30.u64 = ctx.r30.u64 | 16232;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r10,-31764
	ctx.r5.s64 = ctx.r10.s64 + -31764;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stwx r11,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r11.u32);
	// lis r30,7
	ctx.r30.s64 = 458752;
	// addi r4,r10,3672
	ctx.r4.s64 = ctx.r10.s64 + 3672;
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// ori r30,r30,16297
	ctx.r30.u64 = ctx.r30.u64 | 16297;
	// addi r3,r10,10416
	ctx.r3.s64 = ctx.r10.s64 + 10416;
	// li r10,0
	ctx.r10.s64 = 0;
	// stbx r11,r31,r30
	PPC_STORE_U8(ctx.r31.u32 + ctx.r30.u32, ctx.r11.u8);
	// bl 0x821e6928
	ctx.lr = 0x82121938;
	sub_821E6928(ctx, base);
loc_82121938:
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

__attribute__((alias("__imp__sub_82121950"))) PPC_WEAK_FUNC(sub_82121950);
PPC_FUNC_IMPL(__imp__sub_82121950) {
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
	// lwz r11,15328(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 15328);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r31,r11,4864
	ctx.r31.s64 = ctx.r11.s64 + 4864;
	// bne cr6,0x82121994
	if (!ctx.cr6.eq) goto loc_82121994;
	// lwz r10,19168(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 19168);
	// li r4,2
	ctx.r4.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// mulli r11,r10,1104
	ctx.r11.s64 = ctx.r10.s64 * 1104;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82188300
	ctx.lr = 0x82121994;
	sub_82188300(ctx, base);
loc_82121994:
	// lwz r9,15328(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15328);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x821219b8
	if (!ctx.cr6.eq) goto loc_821219B8;
	// lwz r8,19168(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 19168);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mulli r11,r8,1104
	ctx.r11.s64 = ctx.r8.s64 * 1104;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82188300
	ctx.lr = 0x821219B8;
	sub_82188300(ctx, base);
loc_821219B8:
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

__attribute__((alias("__imp__sub_821219D0"))) PPC_WEAK_FUNC(sub_821219D0);
PPC_FUNC_IMPL(__imp__sub_821219D0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r3,r11,13696
	ctx.r3.s64 = ctx.r11.s64 + 13696;
	// b 0x820ba400
	sub_820BA400(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821219E0"))) PPC_WEAK_FUNC(sub_821219E0);
PPC_FUNC_IMPL(__imp__sub_821219E0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r3,r11,13696
	ctx.r3.s64 = ctx.r11.s64 + 13696;
	// b 0x820ba400
	sub_820BA400(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821219F0"))) PPC_WEAK_FUNC(sub_821219F0);
PPC_FUNC_IMPL(__imp__sub_821219F0) {
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
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// addi r3,r11,-1264
	ctx.r3.s64 = ctx.r11.s64 + -1264;
	// bl 0x820be948
	ctx.lr = 0x82121A08;
	sub_820BE948(ctx, base);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r3,r11,26080
	ctx.r3.s64 = ctx.r11.s64 + 26080;
	// bl 0x821041a8
	ctx.lr = 0x82121A14;
	sub_821041A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82121a48
	if (!ctx.cr6.eq) goto loc_82121A48;
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
	// bne cr6,0x82121a48
	if (!ctx.cr6.eq) goto loc_82121A48;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-6648
	ctx.r3.s64 = ctx.r11.s64 + -6648;
	// bl 0x820fb448
	ctx.lr = 0x82121A48;
	sub_820FB448(ctx, base);
loc_82121A48:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82121A58"))) PPC_WEAK_FUNC(sub_82121A58);
PPC_FUNC_IMPL(__imp__sub_82121A58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82121A60;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lbz r11,624(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 624);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82121a8c
	if (ctx.cr6.eq) goto loc_82121A8C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82121a8c
	if (ctx.cr6.eq) goto loc_82121A8C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82121b0c
	if (!ctx.cr6.eq) goto loc_82121B0C;
loc_82121A8C:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,520(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 520);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82121AA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r8,7
	ctx.r8.s64 = 458752;
	// addi r29,r11,26080
	ctx.r29.s64 = ctx.r11.s64 + 26080;
	// ori r7,r8,16271
	ctx.r7.u64 = ctx.r8.u64 | 16271;
	// lbzx r6,r29,r7
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r7.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82121af4
	if (!ctx.cr6.eq) goto loc_82121AF4;
	// lbz r5,624(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 624);
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// bne cr6,0x82121af4
	if (!ctx.cr6.eq) goto loc_82121AF4;
	// lbz r4,157(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 157);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82121af4
	if (ctx.cr6.eq) goto loc_82121AF4;
	// lwz r11,6912(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6912);
	// addi r3,r11,13280
	ctx.r3.s64 = ctx.r11.s64 + 13280;
	// bl 0x820ac908
	ctx.lr = 0x82121AE4;
	sub_820AC908(ctx, base);
	// cmpwi cr6,r3,10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10, ctx.xer);
	// beq cr6,0x82121af4
	if (ctx.cr6.eq) goto loc_82121AF4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822418f8
	ctx.lr = 0x82121AF4;
	sub_822418F8(ctx, base);
loc_82121AF4:
	// lbz r3,624(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 624);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82121b0c
	if (!ctx.cr6.eq) goto loc_82121B0C;
	// addis r11,r29,7
	ctx.r11.s64 = ctx.r29.s64 + 458752;
	// addi r3,r11,14408
	ctx.r3.s64 = ctx.r11.s64 + 14408;
	// bl 0x821214a0
	ctx.lr = 0x82121B0C;
	sub_821214A0(ctx, base);
loc_82121B0C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82121B14"))) PPC_WEAK_FUNC(sub_82121B14);
PPC_FUNC_IMPL(__imp__sub_82121B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82121B18"))) PPC_WEAK_FUNC(sub_82121B18);
PPC_FUNC_IMPL(__imp__sub_82121B18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82121B20;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r11,26080
	ctx.r30.s64 = ctx.r11.s64 + 26080;
	// addis r11,r30,3
	ctx.r11.s64 = ctx.r30.s64 + 196608;
	// addi r31,r11,-11424
	ctx.r31.s64 = ctx.r11.s64 + -11424;
loc_82121B38:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,40
	ctx.r4.s64 = 40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82121B54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addis r11,r30,3
	ctx.r11.s64 = ctx.r30.s64 + 196608;
	// addi r31,r31,11920
	ctx.r31.s64 = ctx.r31.s64 + 11920;
	// addi r9,r11,12416
	ctx.r9.s64 = ctx.r11.s64 + 12416;
	// cmpw cr6,r31,r9
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82121b38
	if (ctx.cr6.lt) goto loc_82121B38;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82121B70"))) PPC_WEAK_FUNC(sub_82121B70);
PPC_FUNC_IMPL(__imp__sub_82121B70) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,15328(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 15328);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// b 0x8232da30
	sub_8232DA30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82121B80"))) PPC_WEAK_FUNC(sub_82121B80);
PPC_FUNC_IMPL(__imp__sub_82121B80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82121B84"))) PPC_WEAK_FUNC(sub_82121B84);
PPC_FUNC_IMPL(__imp__sub_82121B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82121B88"))) PPC_WEAK_FUNC(sub_82121B88);
PPC_FUNC_IMPL(__imp__sub_82121B88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x82121B90;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820d39c8
	ctx.lr = 0x82121BAC;
	sub_820D39C8(ctx, base);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// addi r30,r11,28544
	ctx.r30.s64 = ctx.r11.s64 + 28544;
	// lis r11,37
	ctx.r11.s64 = 2424832;
	// ori r10,r11,49147
	ctx.r10.u64 = ctx.r11.u64 | 49147;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r26,r11,26080
	ctx.r26.s64 = ctx.r11.s64 + 26080;
	// lbzx r9,r30,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82121cb4
	if (!ctx.cr6.eq) goto loc_82121CB4;
	// lwz r8,15328(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 15328);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82121c6c
	if (!ctx.cr6.eq) goto loc_82121C6C;
	// addis r11,r26,7
	ctx.r11.s64 = ctx.r26.s64 + 458752;
	// addi r3,r11,14408
	ctx.r3.s64 = ctx.r11.s64 + 14408;
	// bl 0x82121508
	ctx.lr = 0x82121BE8;
	sub_82121508(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821041d8
	ctx.lr = 0x82121BF0;
	sub_821041D8(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82121c6c
	if (!ctx.cr6.eq) goto loc_82121C6C;
	// lis r6,34
	ctx.r6.s64 = 2228224;
	// li r31,0
	ctx.r31.s64 = 0;
	// ori r5,r6,36968
	ctx.r5.u64 = ctx.r6.u64 | 36968;
	// lwzx r11,r30,r5
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r5.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82121c6c
	if (!ctx.cr6.gt) goto loc_82121C6C;
loc_82121C14:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8232da90
	ctx.lr = 0x82121C20;
	sub_8232DA90(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,15328(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 15328);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82121c54
	if (!ctx.cr6.eq) goto loc_82121C54;
	// lwz r11,13496(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 13496);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82121c54
	if (!ctx.cr6.eq) goto loc_82121C54;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,11
	ctx.r5.s64 = 11;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r9,184(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 184);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82121C54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82121C54:
	// lis r8,34
	ctx.r8.s64 = 2228224;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// ori r7,r8,36968
	ctx.r7.u64 = ctx.r8.u64 | 36968;
	// lwzx r11,r30,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r7.u32);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82121c14
	if (ctx.cr6.lt) goto loc_82121C14;
loc_82121C6C:
	// cmpwi cr6,r27,2
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 2, ctx.xer);
	// li r5,1
	ctx.r5.s64 = 1;
	// beq cr6,0x82121c7c
	if (ctx.cr6.eq) goto loc_82121C7C;
	// li r5,0
	ctx.r5.s64 = 0;
loc_82121C7C:
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,496(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 496);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82121C94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,15328(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 15328);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82121cb4
	if (!ctx.cr6.eq) goto loc_82121CB4;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r8,516(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 516);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82121CB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82121CB4:
	// addis r11,r30,35
	ctx.r11.s64 = ctx.r30.s64 + 2293760;
	// addi r7,r11,-28496
	ctx.r7.s64 = ctx.r11.s64 + -28496;
	// cmplw cr6,r28,r7
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82121ce4
	if (!ctx.cr6.eq) goto loc_82121CE4;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bl 0x82365698
	ctx.lr = 0x82121CD4;
	sub_82365698(ctx, base);
	// addi r6,r3,21
	ctx.r6.s64 = ctx.r3.s64 + 21;
	// lfs f0,128(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r5,r29
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r29.u32, temp.u32);
loc_82121CE4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82121CEC"))) PPC_WEAK_FUNC(sub_82121CEC);
PPC_FUNC_IMPL(__imp__sub_82121CEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82121CF0"))) PPC_WEAK_FUNC(sub_82121CF0);
PPC_FUNC_IMPL(__imp__sub_82121CF0) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,16448
	ctx.r11.s64 = ctx.r11.s64 + 16448;
	// stb r10,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82121D0C"))) PPC_WEAK_FUNC(sub_82121D0C);
PPC_FUNC_IMPL(__imp__sub_82121D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82121D10"))) PPC_WEAK_FUNC(sub_82121D10);
PPC_FUNC_IMPL(__imp__sub_82121D10) {
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
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// addi r3,r11,-1264
	ctx.r3.s64 = ctx.r11.s64 + -1264;
	// bl 0x820be8d8
	ctx.lr = 0x82121D28;
	sub_820BE8D8(ctx, base);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r3,r11,26080
	ctx.r3.s64 = ctx.r11.s64 + 26080;
	// bl 0x821041a8
	ctx.lr = 0x82121D34;
	sub_821041A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82121d68
	if (!ctx.cr6.eq) goto loc_82121D68;
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
	// bne cr6,0x82121d68
	if (!ctx.cr6.eq) goto loc_82121D68;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-6648
	ctx.r3.s64 = ctx.r11.s64 + -6648;
	// bl 0x820fb428
	ctx.lr = 0x82121D68;
	sub_820FB428(ctx, base);
loc_82121D68:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82121D78"))) PPC_WEAK_FUNC(sub_82121D78);
PPC_FUNC_IMPL(__imp__sub_82121D78) {
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
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// addi r3,r11,-1264
	ctx.r3.s64 = ctx.r11.s64 + -1264;
	// bl 0x820be910
	ctx.lr = 0x82121D90;
	sub_820BE910(ctx, base);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r3,r11,26080
	ctx.r3.s64 = ctx.r11.s64 + 26080;
	// bl 0x821041a8
	ctx.lr = 0x82121D9C;
	sub_821041A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82121dd0
	if (!ctx.cr6.eq) goto loc_82121DD0;
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
	// bne cr6,0x82121dd0
	if (!ctx.cr6.eq) goto loc_82121DD0;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-6648
	ctx.r3.s64 = ctx.r11.s64 + -6648;
	// bl 0x820fb438
	ctx.lr = 0x82121DD0;
	sub_820FB438(ctx, base);
loc_82121DD0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82121DE0"))) PPC_WEAK_FUNC(sub_82121DE0);
PPC_FUNC_IMPL(__imp__sub_82121DE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// mulli r8,r4,19200
	ctx.r8.s64 = ctx.r4.s64 * 19200;
	// lwz r7,228(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 228);
	// lfs f0,2864(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// addis r11,r11,35
	ctx.r11.s64 = ctx.r11.s64 + 2293760;
	// li r4,29
	ctx.r4.s64 = 29;
	// addi r6,r11,-15120
	ctx.r6.s64 = ctx.r11.s64 + -15120;
	// stfsx f0,r8,r6
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r6.u32, temp.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82121E14"))) PPC_WEAK_FUNC(sub_82121E14);
PPC_FUNC_IMPL(__imp__sub_82121E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82121E18"))) PPC_WEAK_FUNC(sub_82121E18);
PPC_FUNC_IMPL(__imp__sub_82121E18) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r3,r11,26080
	ctx.r3.s64 = ctx.r11.s64 + 26080;
	// bl 0x821041a8
	ctx.lr = 0x82121E38;
	sub_821041A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82121e5c
	if (!ctx.cr6.eq) goto loc_82121E5C;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// addis r11,r11,35
	ctx.r11.s64 = ctx.r11.s64 + 2293760;
	// addi r3,r11,-10192
	ctx.r3.s64 = ctx.r11.s64 + -10192;
	// bl 0x8212bb98
	ctx.lr = 0x82121E5C;
	sub_8212BB98(ctx, base);
loc_82121E5C:
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

__attribute__((alias("__imp__sub_82121E70"))) PPC_WEAK_FUNC(sub_82121E70);
PPC_FUNC_IMPL(__imp__sub_82121E70) {
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
	// addi r31,r11,26080
	ctx.r31.s64 = ctx.r11.s64 + 26080;
	// addis r11,r31,7
	ctx.r11.s64 = ctx.r31.s64 + 458752;
	// addi r3,r11,14496
	ctx.r3.s64 = ctx.r11.s64 + 14496;
	// bl 0x8210d8d8
	ctx.lr = 0x82121E94;
	sub_8210D8D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82121eac
	if (ctx.cr6.eq) goto loc_82121EAC;
	// addis r11,r31,7
	ctx.r11.s64 = ctx.r31.s64 + 458752;
	// addi r3,r11,14496
	ctx.r3.s64 = ctx.r11.s64 + 14496;
	// bl 0x821149c0
	ctx.lr = 0x82121EAC;
	sub_821149C0(ctx, base);
loc_82121EAC:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r10,3
	ctx.r10.s64 = 196608;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// ori r9,r10,51969
	ctx.r9.u64 = ctx.r10.u64 | 51969;
	// lbzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82121ed8
	if (ctx.cr6.eq) goto loc_82121ED8;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r11,r11,-24936
	ctx.r11.s64 = ctx.r11.s64 + -24936;
	// addi r3,r11,2696
	ctx.r3.s64 = ctx.r11.s64 + 2696;
	// bl 0x822054d0
	ctx.lr = 0x82121ED8;
	sub_822054D0(ctx, base);
loc_82121ED8:
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

__attribute__((alias("__imp__sub_82121EEC"))) PPC_WEAK_FUNC(sub_82121EEC);
PPC_FUNC_IMPL(__imp__sub_82121EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82121EF0"))) PPC_WEAK_FUNC(sub_82121EF0);
PPC_FUNC_IMPL(__imp__sub_82121EF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x82121EF8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r30,r11,26752
	ctx.r30.s64 = ctx.r11.s64 + 26752;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82121f60
	if (!ctx.cr6.gt) goto loc_82121F60;
loc_82121F1C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x82365758
	ctx.lr = 0x82121F28;
	sub_82365758(ctx, base);
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82121f48
	if (ctx.cr6.eq) goto loc_82121F48;
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82121f1c
	if (ctx.cr6.lt) goto loc_82121F1C;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_82121F48:
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r10,r31,21
	ctx.r10.s64 = ctx.r31.s64 + 21;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,128(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r9,r28
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r28.u32, temp.u32);
loc_82121F60:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82121F68"))) PPC_WEAK_FUNC(sub_82121F68);
PPC_FUNC_IMPL(__imp__sub_82121F68) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// lwz r10,352(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 352);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82121F94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// and r9,r3,r31
	ctx.r9.u64 = ctx.r3.u64 & ctx.r31.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82121fb0
	if (ctx.cr6.eq) goto loc_82121FB0;
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r3,r11,16448
	ctx.r3.s64 = ctx.r11.s64 + 16448;
	// bl 0x820b7a68
	ctx.lr = 0x82121FB0;
	sub_820B7A68(ctx, base);
loc_82121FB0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
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

__attribute__((alias("__imp__sub_82121FC8"))) PPC_WEAK_FUNC(sub_82121FC8);
PPC_FUNC_IMPL(__imp__sub_82121FC8) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,13680(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 13680);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82121FD8"))) PPC_WEAK_FUNC(sub_82121FD8);
PPC_FUNC_IMPL(__imp__sub_82121FD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lis r10,34
	ctx.r10.s64 = 2228224;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// ori r9,r10,37004
	ctx.r9.u64 = ctx.r10.u64 | 37004;
	// lwzx r3,r11,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82121FF0"))) PPC_WEAK_FUNC(sub_82121FF0);
PPC_FUNC_IMPL(__imp__sub_82121FF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// addis r11,r11,33
	ctx.r11.s64 = ctx.r11.s64 + 2162688;
	// addi r3,r11,6592
	ctx.r3.s64 = ctx.r11.s64 + 6592;
	// b 0x820b75f0
	sub_820B75F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82122004"))) PPC_WEAK_FUNC(sub_82122004);
PPC_FUNC_IMPL(__imp__sub_82122004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82122008"))) PPC_WEAK_FUNC(sub_82122008);
PPC_FUNC_IMPL(__imp__sub_82122008) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,108
	ctx.r3.s64 = ctx.r3.s64 + 108;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82122010"))) PPC_WEAK_FUNC(sub_82122010);
PPC_FUNC_IMPL(__imp__sub_82122010) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bad4
	ctx.lr = 0x82122018;
	__savegprlr_19(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r27,r11,26752
	ctx.r27.s64 = ctx.r11.s64 + 26752;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r5,7
	ctx.r5.s64 = 458752;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lis r8,3
	ctx.r8.s64 = 196608;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// ori r4,r5,16216
	ctx.r4.u64 = ctx.r5.u64 | 16216;
	// ori r7,r8,51969
	ctx.r7.u64 = ctx.r8.u64 | 51969;
	// lbz r9,15480(r28)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r28.u32 + 15480);
	// extsb r30,r9
	ctx.r30.s64 = ctx.r9.s8;
	// lwzx r10,r11,r4
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// lbzx r6,r27,r7
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r7.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// lwz r31,8(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// beq cr6,0x82122078
	if (ctx.cr6.eq) goto loc_82122078;
	// addi r3,r27,24
	ctx.r3.s64 = ctx.r27.s64 + 24;
	// bl 0x82365698
	ctx.lr = 0x82122068;
	sub_82365698(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mulli r10,r3,5956
	ctx.r10.s64 = ctx.r3.s64 * 5956;
	// mulli r11,r11,328
	ctx.r11.s64 = ctx.r11.s64 * 328;
	// b 0x821220c4
	goto loc_821220C4;
loc_82122078:
	// addis r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 262144;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r9,r9,-15264
	ctx.r9.s64 = ctx.r9.s64 + -15264;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x821220ac
	if (ctx.cr6.eq) goto loc_821220AC;
	// addis r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 262144;
	// addi r8,r11,-11776
	ctx.r8.s64 = ctx.r11.s64 + -11776;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x821220ac
	if (ctx.cr6.eq) goto loc_821220AC;
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mulli r10,r30,5956
	ctx.r10.s64 = ctx.r30.s64 * 5956;
	// mulli r11,r7,328
	ctx.r11.s64 = ctx.r7.s64 * 328;
	// b 0x821220c4
	goto loc_821220C4;
loc_821220AC:
	// lis r6,0
	ctx.r6.s64 = 0;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// ori r5,r6,46280
	ctx.r5.u64 = ctx.r6.u64 | 46280;
	// mulli r10,r4,328
	ctx.r10.s64 = ctx.r4.s64 * 328;
	// lwzx r3,r31,r5
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// mulli r11,r3,5956
	ctx.r11.s64 = ctx.r3.s64 * 5956;
loc_821220C4:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lis r10,-32137
	ctx.r10.s64 = -2106130432;
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,-1264
	ctx.r10.s64 = ctx.r10.s64 + -1264;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,10580
	ctx.r11.s64 = ctx.r11.s64 + 10580;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stb r29,92(r11)
	PPC_STORE_U8(ctx.r11.u32 + 92, ctx.r29.u8);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// lwz r6,15328(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 15328);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x8212234c
	if (!ctx.cr6.eq) goto loc_8212234C;
	// lwz r6,19168(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 19168);
	// addi r5,r10,120
	ctx.r5.s64 = ctx.r10.s64 + 120;
	// addi r4,r10,124
	ctx.r4.s64 = ctx.r10.s64 + 124;
	// mulli r9,r6,200
	ctx.r9.s64 = ctx.r6.s64 * 200;
	// lwzx r5,r9,r5
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	// addi r3,r10,128
	ctx.r3.s64 = ctx.r10.s64 + 128;
	// addi r8,r10,148
	ctx.r8.s64 = ctx.r10.s64 + 148;
	// addi r7,r10,108
	ctx.r7.s64 = ctx.r10.s64 + 108;
	// stw r5,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r5.u32);
	// addi r31,r10,112
	ctx.r31.s64 = ctx.r10.s64 + 112;
	// lwzx r4,r9,r4
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r4.u32);
	// addi r30,r10,116
	ctx.r30.s64 = ctx.r10.s64 + 116;
	// addi r29,r10,160
	ctx.r29.s64 = ctx.r10.s64 + 160;
	// addi r26,r10,172
	ctx.r26.s64 = ctx.r10.s64 + 172;
	// addi r25,r10,168
	ctx.r25.s64 = ctx.r10.s64 + 168;
	// addi r24,r10,188
	ctx.r24.s64 = ctx.r10.s64 + 188;
	// stw r4,116(r11)
	PPC_STORE_U32(ctx.r11.u32 + 116, ctx.r4.u32);
	// addi r23,r10,192
	ctx.r23.s64 = ctx.r10.s64 + 192;
	// lwzx r3,r9,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// addi r22,r10,180
	ctx.r22.s64 = ctx.r10.s64 + 180;
	// addi r21,r10,164
	ctx.r21.s64 = ctx.r10.s64 + 164;
	// addi r20,r10,184
	ctx.r20.s64 = ctx.r10.s64 + 184;
	// addi r19,r10,132
	ctx.r19.s64 = ctx.r10.s64 + 132;
	// stw r3,120(r11)
	PPC_STORE_U32(ctx.r11.u32 + 120, ctx.r3.u32);
	// lwzx r8,r9,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// stw r8,124(r11)
	PPC_STORE_U32(ctx.r11.u32 + 124, ctx.r8.u32);
	// lwzx r7,r9,r7
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// stw r7,128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 128, ctx.r7.u32);
	// lwzx r5,r9,r31
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// stw r5,132(r11)
	PPC_STORE_U32(ctx.r11.u32 + 132, ctx.r5.u32);
	// lwzx r4,r9,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	// stw r4,136(r11)
	PPC_STORE_U32(ctx.r11.u32 + 136, ctx.r4.u32);
	// lwzx r3,r9,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r29.u32);
	// stw r3,140(r11)
	PPC_STORE_U32(ctx.r11.u32 + 140, ctx.r3.u32);
	// lwzx r8,r9,r26
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r26.u32);
	// stw r8,144(r11)
	PPC_STORE_U32(ctx.r11.u32 + 144, ctx.r8.u32);
	// lwzx r7,r9,r25
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r25.u32);
	// stw r7,148(r11)
	PPC_STORE_U32(ctx.r11.u32 + 148, ctx.r7.u32);
	// lwzx r5,r9,r24
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r24.u32);
	// stw r5,152(r11)
	PPC_STORE_U32(ctx.r11.u32 + 152, ctx.r5.u32);
	// lwzx r4,r9,r23
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r23.u32);
	// stw r4,156(r11)
	PPC_STORE_U32(ctx.r11.u32 + 156, ctx.r4.u32);
	// addi r4,r10,136
	ctx.r4.s64 = ctx.r10.s64 + 136;
	// lwzx r3,r9,r22
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r22.u32);
	// stw r3,160(r11)
	PPC_STORE_U32(ctx.r11.u32 + 160, ctx.r3.u32);
	// addi r3,r10,140
	ctx.r3.s64 = ctx.r10.s64 + 140;
	// lwzx r8,r9,r21
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r21.u32);
	// stw r8,164(r11)
	PPC_STORE_U32(ctx.r11.u32 + 164, ctx.r8.u32);
	// lwzx r7,r9,r20
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r20.u32);
	// stw r7,168(r11)
	PPC_STORE_U32(ctx.r11.u32 + 168, ctx.r7.u32);
	// addi r7,r10,144
	ctx.r7.s64 = ctx.r10.s64 + 144;
	// lwzx r5,r9,r19
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r19.u32);
	// stw r5,172(r11)
	PPC_STORE_U32(ctx.r11.u32 + 172, ctx.r5.u32);
	// lwzx r8,r9,r4
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r4.u32);
	// addi r4,r10,60
	ctx.r4.s64 = ctx.r10.s64 + 60;
	// stw r8,176(r11)
	PPC_STORE_U32(ctx.r11.u32 + 176, ctx.r8.u32);
	// lwzx r5,r9,r3
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// addi r3,r10,64
	ctx.r3.s64 = ctx.r10.s64 + 64;
	// stw r5,180(r11)
	PPC_STORE_U32(ctx.r11.u32 + 180, ctx.r5.u32);
	// addi r5,r10,72
	ctx.r5.s64 = ctx.r10.s64 + 72;
	// lwzx r8,r9,r7
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// addi r7,r10,68
	ctx.r7.s64 = ctx.r10.s64 + 68;
	// stw r8,184(r11)
	PPC_STORE_U32(ctx.r11.u32 + 184, ctx.r8.u32);
	// lfsx f0,r9,r4
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r4.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,188(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 188, temp.u32);
	// addi r4,r10,76
	ctx.r4.s64 = ctx.r10.s64 + 76;
	// lfsx f13,r9,r3
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r10,80
	ctx.r3.s64 = ctx.r10.s64 + 80;
	// stfs f13,192(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 192, temp.u32);
	// addi r8,r10,84
	ctx.r8.s64 = ctx.r10.s64 + 84;
	// lfsx f12,r9,r7
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	ctx.f12.f64 = double(temp.f32);
	// addi r7,r10,100
	ctx.r7.s64 = ctx.r10.s64 + 100;
	// stfs f12,196(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 196, temp.u32);
	// lfsx f11,r9,r5
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,200(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 200, temp.u32);
	// lfsx f10,r9,r4
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r4.u32);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,204(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 204, temp.u32);
	// lfsx f9,r9,r3
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,208(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 208, temp.u32);
	// lfsx f8,r9,r8
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,212(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 212, temp.u32);
	// lwzx r5,r9,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// addi r4,r10,104
	ctx.r4.s64 = ctx.r10.s64 + 104;
	// stw r5,216(r11)
	PPC_STORE_U32(ctx.r11.u32 + 216, ctx.r5.u32);
	// lwzx r3,r9,r4
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r4.u32);
	// stw r3,220(r11)
	PPC_STORE_U32(ctx.r11.u32 + 220, ctx.r3.u32);
	// lwz r8,13496(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13496);
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// bne cr6,0x82122264
	if (!ctx.cr6.eq) goto loc_82122264;
	// lfs f0,13500(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 13500);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82122268
	goto loc_82122268;
loc_82122264:
	// lfs f0,13644(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 13644);
	ctx.f0.f64 = double(temp.f32);
loc_82122268:
	// lis r8,-32149
	ctx.r8.s64 = -2106916864;
	// stfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// addi r7,r10,56
	ctx.r7.s64 = ctx.r10.s64 + 56;
	// addi r8,r8,16448
	ctx.r8.s64 = ctx.r8.s64 + 16448;
	// lfsx f7,r9,r7
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,12(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// cmpwi cr6,r7,-1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -1, ctx.xer);
	// bgt cr6,0x82122290
	if (ctx.cr6.gt) goto loc_82122290;
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
loc_82122290:
	// mulli r8,r6,136
	ctx.r8.s64 = ctx.r6.s64 * 136;
	// stw r7,108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 108, ctx.r7.u32);
	// addi r6,r10,212
	ctx.r6.s64 = ctx.r10.s64 + 212;
	// addi r5,r10,220
	ctx.r5.s64 = ctx.r10.s64 + 220;
	// addi r4,r10,152
	ctx.r4.s64 = ctx.r10.s64 + 152;
	// lis r7,-32149
	ctx.r7.s64 = -2106916864;
	// lwzx r3,r9,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// addi r7,r7,8544
	ctx.r7.s64 = ctx.r7.s64 + 8544;
	// addi r6,r11,280
	ctx.r6.s64 = ctx.r11.s64 + 280;
	// addi r31,r7,156
	ctx.r31.s64 = ctx.r7.s64 + 156;
	// addi r10,r7,100
	ctx.r10.s64 = ctx.r7.s64 + 100;
	// stw r3,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r3.u32);
	// addi r3,r7,148
	ctx.r3.s64 = ctx.r7.s64 + 148;
	// lwzx r5,r9,r5
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// li r7,12
	ctx.r7.s64 = 12;
	// stw r5,104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 104, ctx.r5.u32);
	// lwzx r4,r9,r4
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r4.u32);
	// stw r4,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r4.u32);
	// lwzx r9,r8,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// stw r9,224(r11)
	PPC_STORE_U32(ctx.r11.u32 + 224, ctx.r9.u32);
	// lwzx r8,r8,r3
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// stw r8,228(r11)
	PPC_STORE_U32(ctx.r11.u32 + 228, ctx.r8.u32);
loc_821222EC:
	// lwz r5,-48(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + -48);
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// stw r5,-48(r6)
	PPC_STORE_U32(ctx.r6.u32 + -48, ctx.r5.u32);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r4,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r4.u32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// bne cr6,0x821222ec
	if (!ctx.cr6.eq) goto loc_821222EC;
	// lis r3,3
	ctx.r3.s64 = 196608;
	// ori r11,r3,51969
	ctx.r11.u64 = ctx.r3.u64 | 51969;
	// lbzx r10,r27,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8212234c
	if (ctx.cr6.eq) goto loc_8212234C;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// addis r11,r11,35
	ctx.r11.s64 = ctx.r11.s64 + 2293760;
	// addi r9,r11,-28496
	ctx.r9.s64 = ctx.r11.s64 + -28496;
	// cmplw cr6,r28,r9
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8212234c
	if (!ctx.cr6.eq) goto loc_8212234C;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-6648
	ctx.r3.s64 = ctx.r11.s64 + -6648;
	// bl 0x820fe130
	ctx.lr = 0x8212234C;
	sub_820FE130(ctx, base);
loc_8212234C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8259bb24
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82122354"))) PPC_WEAK_FUNC(sub_82122354);
PPC_FUNC_IMPL(__imp__sub_82122354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82122358"))) PPC_WEAK_FUNC(sub_82122358);
PPC_FUNC_IMPL(__imp__sub_82122358) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r11,r11,13096
	ctx.r11.s64 = ctx.r11.s64 + 13096;
	// lwz r3,6936(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6936);
	// b 0x821015f8
	sub_821015F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8212236C"))) PPC_WEAK_FUNC(sub_8212236C);
PPC_FUNC_IMPL(__imp__sub_8212236C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82122370"))) PPC_WEAK_FUNC(sub_82122370);
PPC_FUNC_IMPL(__imp__sub_82122370) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x82122378;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,26752
	ctx.r31.s64 = ctx.r11.s64 + 26752;
	// lis r11,3
	ctx.r11.s64 = 196608;
	// li r28,0
	ctx.r28.s64 = 0;
	// ori r10,r11,51988
	ctx.r10.u64 = ctx.r11.u64 | 51988;
	// lbzx r9,r31,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821223c4
	if (ctx.cr6.eq) goto loc_821223C4;
	// lis r8,3
	ctx.r8.s64 = 196608;
	// lis r6,3
	ctx.r6.s64 = 196608;
	// ori r7,r8,51984
	ctx.r7.u64 = ctx.r8.u64 | 51984;
	// ori r5,r6,51980
	ctx.r5.u64 = ctx.r6.u64 | 51980;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwzx r30,r31,r7
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// lfsx f31,r31,r5
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	ctx.f31.f64 = double(temp.f32);
	// b 0x821223d4
	goto loc_821223D4;
loc_821223C4:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r30,-1
	ctx.r30.s64 = -1;
	// lfs f31,-12136(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12136);
	ctx.f31.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
loc_821223D4:
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8212240c
	if (ctx.cr6.eq) goto loc_8212240C;
	// lwz r4,220(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 220);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x82122404
	if (ctx.cr6.eq) goto loc_82122404;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8221cd88
	ctx.lr = 0x821223F8;
	sub_8221CD88(ctx, base);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8212240c
	if (ctx.cr6.eq) goto loc_8212240C;
loc_82122404:
	// stfs f31,216(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 216, temp.u32);
	// stw r30,220(r29)
	PPC_STORE_U32(ctx.r29.u32 + 220, ctx.r30.u32);
loc_8212240C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,216(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 216);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82122424
	if (!ctx.cr6.gt) goto loc_82122424;
	// li r28,1
	ctx.r28.s64 = 1;
loc_82122424:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82122448
	if (ctx.cr6.eq) goto loc_82122448;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82360f70
	ctx.lr = 0x82122438;
	sub_82360F70(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_82122448:
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lfs f12,232(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 232);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// lfs f0,128(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fsubs f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f0,30932(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 30932);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// ble cr6,0x821224b0
	if (!ctx.cr6.gt) goto loc_821224B0;
	// lis r10,3
	ctx.r10.s64 = 196608;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// ori r9,r10,51912
	ctx.r9.u64 = ctx.r10.u64 | 51912;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// lfs f13,-1608(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1608);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f0,r31,r9
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// fadds f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f10,216(r29)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r29.u32 + 216, temp.u32);
	// bl 0x823656e8
	ctx.lr = 0x82122490;
	sub_823656E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,220(r29)
	PPC_STORE_U32(ctx.r29.u32 + 220, ctx.r11.u32);
	// bl 0x82360f70
	ctx.lr = 0x821224A0;
	sub_82360F70(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_821224B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821224C0"))) PPC_WEAK_FUNC(sub_821224C0);
PPC_FUNC_IMPL(__imp__sub_821224C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x821224C8;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,26752
	ctx.r31.s64 = ctx.r11.s64 + 26752;
	// lis r11,3
	ctx.r11.s64 = 196608;
	// ori r10,r11,51988
	ctx.r10.u64 = ctx.r11.u64 | 51988;
	// lbzx r9,r31,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82122510
	if (ctx.cr6.eq) goto loc_82122510;
	// lis r8,3
	ctx.r8.s64 = 196608;
	// lis r6,3
	ctx.r6.s64 = 196608;
	// ori r7,r8,51984
	ctx.r7.u64 = ctx.r8.u64 | 51984;
	// ori r5,r6,51980
	ctx.r5.u64 = ctx.r6.u64 | 51980;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwzx r30,r31,r7
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// lfsx f31,r31,r5
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	ctx.f31.f64 = double(temp.f32);
	// b 0x82122520
	goto loc_82122520;
loc_82122510:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r30,-1
	ctx.r30.s64 = -1;
	// lfs f31,-12136(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12136);
	ctx.f31.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
loc_82122520:
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82122560
	if (ctx.cr6.eq) goto loc_82122560;
	// lwz r4,220(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 220);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x82122550
	if (ctx.cr6.eq) goto loc_82122550;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8221cd88
	ctx.lr = 0x82122544;
	sub_8221CD88(ctx, base);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82122560
	if (ctx.cr6.eq) goto loc_82122560;
loc_82122550:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f31,216(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 216, temp.u32);
	// stw r30,220(r29)
	PPC_STORE_U32(ctx.r29.u32 + 220, ctx.r30.u32);
	// bl 0x82360f70
	ctx.lr = 0x82122560;
	sub_82360F70(ctx, base);
loc_82122560:
	// lis r11,3
	ctx.r11.s64 = 196608;
	// lfs f13,216(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 216);
	ctx.f13.f64 = double(temp.f32);
	// ori r10,r11,51912
	ctx.r10.u64 = ctx.r11.u64 | 51912;
	// lfsx f0,r31,r10
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82122594
	if (ctx.cr6.lt) goto loc_82122594;
	// bso cr6,0x82122594
	if (ctx.cr6.so) goto loc_82122594;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82360f70
	ctx.lr = 0x82122584;
	sub_82360F70(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82122594:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821225A4"))) PPC_WEAK_FUNC(sub_821225A4);
PPC_FUNC_IMPL(__imp__sub_821225A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821225A8"))) PPC_WEAK_FUNC(sub_821225A8);
PPC_FUNC_IMPL(__imp__sub_821225A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baec
	ctx.lr = 0x821225B0;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// ori r9,r10,54112
	ctx.r9.u64 = ctx.r10.u64 | 54112;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,17
	ctx.r4.s64 = 17;
	// lwzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// addis r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 196608;
	// addi r3,r11,-11424
	ctx.r3.s64 = ctx.r11.s64 + -11424;
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x821225EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r11,r11,-18560
	ctx.r11.s64 = ctx.r11.s64 + -18560;
	// addis r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 524288;
	// addi r3,r11,28688
	ctx.r3.s64 = ctx.r11.s64 + 28688;
	// bl 0x822a5308
	ctx.lr = 0x82122600;
	sub_822A5308(ctx, base);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lis r7,34
	ctx.r7.s64 = 2228224;
	// addi r29,r11,28544
	ctx.r29.s64 = ctx.r11.s64 + 28544;
	// ori r6,r7,36968
	ctx.r6.u64 = ctx.r7.u64 | 36968;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwzx r11,r29,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r6.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821226b0
	if (!ctx.cr6.gt) goto loc_821226B0;
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// lis r26,-32255
	ctx.r26.s64 = -2113863680;
	// addi r28,r11,-1264
	ctx.r28.s64 = ctx.r11.s64 + -1264;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r27,-32255
	ctx.r27.s64 = -2113863680;
	// lfs f31,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f31.f64 = double(temp.f32);
loc_82122638:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8232da90
	ctx.lr = 0x82122644;
	sub_8232DA90(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lfs f0,13524(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 13524);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82122674
	if (!ctx.cr6.lt) goto loc_82122674;
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lbz r4,20(r5)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r5.u32 + 20);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8212266c
	if (ctx.cr6.eq) goto loc_8212266C;
	// lfs f0,-1608(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + -1608);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82122670
	goto loc_82122670;
loc_8212266C:
	// lfs f0,30384(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 30384);
	ctx.f0.f64 = double(temp.f32);
loc_82122670:
	// stfs f0,13524(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 13524, temp.u32);
loc_82122674:
	// lbz r3,174(r25)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r25.u32 + 174);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8212268c
	if (ctx.cr6.eq) goto loc_8212268C;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,13696
	ctx.r3.s64 = ctx.r30.s64 + 13696;
	// bl 0x820bb220
	ctx.lr = 0x8212268C;
	sub_820BB220(ctx, base);
loc_8212268C:
	// addi r3,r30,13488
	ctx.r3.s64 = ctx.r30.s64 + 13488;
	// bl 0x820ebcb0
	ctx.lr = 0x82122694;
	sub_820EBCB0(ctx, base);
	// lis r11,34
	ctx.r11.s64 = 2228224;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// ori r10,r11,36968
	ctx.r10.u64 = ctx.r11.u64 | 36968;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// lwzx r11,r29,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82122638
	if (ctx.cr6.lt) goto loc_82122638;
loc_821226B0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821226BC"))) PPC_WEAK_FUNC(sub_821226BC);
PPC_FUNC_IMPL(__imp__sub_821226BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821226C0"))) PPC_WEAK_FUNC(sub_821226C0);
PPC_FUNC_IMPL(__imp__sub_821226C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r10,r11,28544
	ctx.r10.s64 = ctx.r11.s64 + 28544;
	// lis r11,34
	ctx.r11.s64 = 2228224;
	// ori r9,r11,37004
	ctx.r9.u64 = ctx.r11.u64 | 37004;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwzx r9,r10,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82122710
	if (!ctx.cr6.gt) goto loc_82122710;
	// addis r10,r10,35
	ctx.r10.s64 = ctx.r10.s64 + 2293760;
	// addi r10,r10,-14976
	ctx.r10.s64 = ctx.r10.s64 + -14976;
loc_821226EC:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// bne cr6,0x8212270c
	if (!ctx.cr6.eq) goto loc_8212270C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,19200
	ctx.r10.s64 = ctx.r10.s64 + 19200;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x821226ec
	if (ctx.cr6.lt) goto loc_821226EC;
	// b 0x82122710
	goto loc_82122710;
loc_8212270C:
	// li r8,0
	ctx.r8.s64 = 0;
loc_82122710:
	// clrlwi r6,r8,24
	ctx.r6.u64 = ctx.r8.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82122728"))) PPC_WEAK_FUNC(sub_82122728);
PPC_FUNC_IMPL(__imp__sub_82122728) {
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// lfs f31,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x82365698
	ctx.lr = 0x8212275C;
	sub_82365698(ctx, base);
	// addi r10,r3,21
	ctx.r10.s64 = ctx.r3.s64 + 21;
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lfsx f13,r8,r30
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r30.u32);
	ctx.f13.f64 = double(temp.f32);
	// ble cr6,0x821227d4
	if (!ctx.cr6.gt) goto loc_821227D4;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r10,r30,84
	ctx.r10.s64 = ctx.r30.s64 + 84;
	// lfs f12,30392(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 30392);
	ctx.f12.f64 = double(temp.f32);
	// lfd f11,-1560(r7)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r7.u32 + -1560);
	// lfs f10,-12136(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -12136);
	ctx.f10.f64 = double(temp.f32);
loc_82122794:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// beq cr6,0x821227c4
	if (ctx.cr6.eq) goto loc_821227C4;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bso cr6,0x821227ac
	if (ctx.cr6.so) goto loc_821227AC;
	// ble cr6,0x821227c4
	if (!ctx.cr6.gt) goto loc_821227C4;
loc_821227AC:
	// fsubs f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fsubs f9,f0,f12
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fsel f0,f9,f11,f0
	ctx.f0.f64 = ctx.f9.f64 >= 0.0 ? ctx.f11.f64 : ctx.f0.f64;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x821227c4
	if (!ctx.cr6.gt) goto loc_821227C4;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
loc_821227C4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82122794
	if (ctx.cr6.lt) goto loc_82122794;
loc_821227D4:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821227F4"))) PPC_WEAK_FUNC(sub_821227F4);
PPC_FUNC_IMPL(__imp__sub_821227F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821227F8"))) PPC_WEAK_FUNC(sub_821227F8);
PPC_FUNC_IMPL(__imp__sub_821227F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,188(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82122800"))) PPC_WEAK_FUNC(sub_82122800);
PPC_FUNC_IMPL(__imp__sub_82122800) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f13,2864(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2864);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f0,2868(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stfs f0,108(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// stb r11,186(r3)
	PPC_STORE_U8(ctx.r3.u32 + 186, ctx.r11.u8);
	// stfs f0,112(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// stw r11,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r11.u32);
	// stfs f0,116(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// stw r11,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r11.u32);
	// lfs f12,-4736(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -4736);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stfs f13,120(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// stb r10,158(r3)
	PPC_STORE_U8(ctx.r3.u32 + 158, ctx.r10.u8);
	// stfs f0,132(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 132, temp.u32);
	// stb r10,152(r3)
	PPC_STORE_U8(ctx.r3.u32 + 152, ctx.r10.u8);
	// stfs f0,136(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 136, temp.u32);
	// stb r10,153(r3)
	PPC_STORE_U8(ctx.r3.u32 + 153, ctx.r10.u8);
	// stfs f12,140(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 140, temp.u32);
	// stb r11,154(r3)
	PPC_STORE_U8(ctx.r3.u32 + 154, ctx.r11.u8);
	// lfs f11,17976(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 17976);
	ctx.f11.f64 = double(temp.f32);
	// stb r10,155(r3)
	PPC_STORE_U8(ctx.r3.u32 + 155, ctx.r10.u8);
	// stfs f11,144(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 144, temp.u32);
	// stb r10,156(r3)
	PPC_STORE_U8(ctx.r3.u32 + 156, ctx.r10.u8);
	// stfs f13,148(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 148, temp.u32);
	// stb r10,157(r3)
	PPC_STORE_U8(ctx.r3.u32 + 157, ctx.r10.u8);
	// stb r11,159(r3)
	PPC_STORE_U8(ctx.r3.u32 + 159, ctx.r11.u8);
	// stb r10,160(r3)
	PPC_STORE_U8(ctx.r3.u32 + 160, ctx.r10.u8);
	// stb r11,164(r3)
	PPC_STORE_U8(ctx.r3.u32 + 164, ctx.r11.u8);
	// stb r11,161(r3)
	PPC_STORE_U8(ctx.r3.u32 + 161, ctx.r11.u8);
	// stb r11,162(r3)
	PPC_STORE_U8(ctx.r3.u32 + 162, ctx.r11.u8);
	// stb r11,163(r3)
	PPC_STORE_U8(ctx.r3.u32 + 163, ctx.r11.u8);
	// stb r11,165(r3)
	PPC_STORE_U8(ctx.r3.u32 + 165, ctx.r11.u8);
	// stb r11,166(r3)
	PPC_STORE_U8(ctx.r3.u32 + 166, ctx.r11.u8);
	// stb r11,167(r3)
	PPC_STORE_U8(ctx.r3.u32 + 167, ctx.r11.u8);
	// stb r11,168(r3)
	PPC_STORE_U8(ctx.r3.u32 + 168, ctx.r11.u8);
	// stb r11,169(r3)
	PPC_STORE_U8(ctx.r3.u32 + 169, ctx.r11.u8);
	// stb r11,170(r3)
	PPC_STORE_U8(ctx.r3.u32 + 170, ctx.r11.u8);
	// stb r11,171(r3)
	PPC_STORE_U8(ctx.r3.u32 + 171, ctx.r11.u8);
	// stb r11,173(r3)
	PPC_STORE_U8(ctx.r3.u32 + 173, ctx.r11.u8);
	// stb r11,174(r3)
	PPC_STORE_U8(ctx.r3.u32 + 174, ctx.r11.u8);
	// stb r11,175(r3)
	PPC_STORE_U8(ctx.r3.u32 + 175, ctx.r11.u8);
	// stb r11,176(r3)
	PPC_STORE_U8(ctx.r3.u32 + 176, ctx.r11.u8);
	// stb r11,177(r3)
	PPC_STORE_U8(ctx.r3.u32 + 177, ctx.r11.u8);
	// stb r10,178(r3)
	PPC_STORE_U8(ctx.r3.u32 + 178, ctx.r10.u8);
	// stb r11,179(r3)
	PPC_STORE_U8(ctx.r3.u32 + 179, ctx.r11.u8);
	// stb r11,181(r3)
	PPC_STORE_U8(ctx.r3.u32 + 181, ctx.r11.u8);
	// stb r11,180(r3)
	PPC_STORE_U8(ctx.r3.u32 + 180, ctx.r11.u8);
	// stb r11,172(r3)
	PPC_STORE_U8(ctx.r3.u32 + 172, ctx.r11.u8);
	// stb r11,182(r3)
	PPC_STORE_U8(ctx.r3.u32 + 182, ctx.r11.u8);
	// stb r10,183(r3)
	PPC_STORE_U8(ctx.r3.u32 + 183, ctx.r10.u8);
	// stb r11,184(r3)
	PPC_STORE_U8(ctx.r3.u32 + 184, ctx.r11.u8);
	// stb r10,185(r3)
	PPC_STORE_U8(ctx.r3.u32 + 185, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821228E4"))) PPC_WEAK_FUNC(sub_821228E4);
PPC_FUNC_IMPL(__imp__sub_821228E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821228E8"))) PPC_WEAK_FUNC(sub_821228E8);
PPC_FUNC_IMPL(__imp__sub_821228E8) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8212291c
	if (ctx.cr6.eq) goto loc_8212291C;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r9,7
	ctx.r9.s64 = 458752;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// ori r8,r9,16216
	ctx.r8.u64 = ctx.r9.u64 | 16216;
	// lis r6,0
	ctx.r6.s64 = 0;
	// ori r5,r6,46272
	ctx.r5.u64 = ctx.r6.u64 | 46272;
	// lwzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stbx r10,r7,r5
	PPC_STORE_U8(ctx.r7.u32 + ctx.r5.u32, ctx.r10.u8);
loc_8212291C:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r11,r11,14528
	ctx.r11.s64 = ctx.r11.s64 + 14528;
	// stb r10,22402(r11)
	PPC_STORE_U8(ctx.r11.u32 + 22402, ctx.r10.u8);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// stb r10,68(r3)
	PPC_STORE_U8(ctx.r3.u32 + 68, ctx.r10.u8);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,11600
	ctx.r11.s64 = ctx.r11.s64 + 11600;
	// stb r10,644(r11)
	PPC_STORE_U8(ctx.r11.u32 + 644, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82122940"))) PPC_WEAK_FUNC(sub_82122940);
PPC_FUNC_IMPL(__imp__sub_82122940) {
	PPC_FUNC_PROLOGUE();
	// lis r10,7
	ctx.r10.s64 = 458752;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// ori r9,r10,16216
	ctx.r9.u64 = ctx.r10.u64 | 16216;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// lis r7,0
	ctx.r7.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r6,r7,46273
	ctx.r6.u64 = ctx.r7.u64 | 46273;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r11,r11,14528
	ctx.r11.s64 = ctx.r11.s64 + 14528;
	// stbx r10,r8,r6
	PPC_STORE_U8(ctx.r8.u32 + ctx.r6.u32, ctx.r10.u8);
	// stb r10,22402(r11)
	PPC_STORE_U8(ctx.r11.u32 + 22402, ctx.r10.u8);
	// stb r10,68(r3)
	PPC_STORE_U8(ctx.r3.u32 + 68, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8212297C"))) PPC_WEAK_FUNC(sub_8212297C);
PPC_FUNC_IMPL(__imp__sub_8212297C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82122980"))) PPC_WEAK_FUNC(sub_82122980);
PPC_FUNC_IMPL(__imp__sub_82122980) {
	PPC_FUNC_PROLOGUE();
	// lis r10,7
	ctx.r10.s64 = 458752;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// ori r9,r10,16216
	ctx.r9.u64 = ctx.r10.u64 | 16216;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// lis r7,0
	ctx.r7.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r6,r7,46274
	ctx.r6.u64 = ctx.r7.u64 | 46274;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r11,r11,14528
	ctx.r11.s64 = ctx.r11.s64 + 14528;
	// stbx r10,r8,r6
	PPC_STORE_U8(ctx.r8.u32 + ctx.r6.u32, ctx.r10.u8);
	// stb r10,22402(r11)
	PPC_STORE_U8(ctx.r11.u32 + 22402, ctx.r10.u8);
	// stb r10,68(r3)
	PPC_STORE_U8(ctx.r3.u32 + 68, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821229BC"))) PPC_WEAK_FUNC(sub_821229BC);
PPC_FUNC_IMPL(__imp__sub_821229BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821229C0"))) PPC_WEAK_FUNC(sub_821229C0);
PPC_FUNC_IMPL(__imp__sub_821229C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x821229C8;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// mulli r9,r30,19200
	ctx.r9.s64 = ctx.r30.s64 * 19200;
	// addis r10,r11,35
	ctx.r10.s64 = ctx.r11.s64 + 2293760;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r8,r10,-13277
	ctx.r8.s64 = ctx.r10.s64 + -13277;
	// lbzx r7,r9,r8
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82122a98
	if (!ctx.cr6.eq) goto loc_82122A98;
	// add r29,r30,r31
	ctx.r29.u64 = ctx.r30.u64 + ctx.r31.u64;
	// lfs f31,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f31.f64 = double(temp.f32);
	// lbz r6,66(r29)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r29.u32 + 66);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82122a80
	if (!ctx.cr6.eq) goto loc_82122A80;
	// lbz r5,64(r29)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r29.u32 + 64);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82122a48
	if (!ctx.cr6.eq) goto loc_82122A48;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,316(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 316);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82122A28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r9,r30,14
	ctx.r9.s64 = ctx.r30.s64 + 14;
	// li r8,1
	ctx.r8.s64 = 1;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f31,r7,r31
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, temp.u32);
	// stb r8,64(r29)
	PPC_STORE_U8(ctx.r29.u32 + 64, ctx.r8.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82122A48:
	// addi r6,r30,14
	ctx.r6.s64 = ctx.r30.s64 + 14;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r5,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r31.u32);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f31,f0
	ctx.f13.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// lfs f0,30916(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 30916);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82122a98
	if (ctx.cr6.lt) goto loc_82122A98;
	// bso cr6,0x82122a98
	if (ctx.cr6.so) goto loc_82122A98;
	// li r4,1
	ctx.r4.s64 = 1;
	// stb r4,66(r29)
	PPC_STORE_U8(ctx.r29.u32 + 66, ctx.r4.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82122A80:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,320(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 320);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82122A98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82122A98:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82122AA4"))) PPC_WEAK_FUNC(sub_82122AA4);
PPC_FUNC_IMPL(__imp__sub_82122AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82122AA8"))) PPC_WEAK_FUNC(sub_82122AA8);
PPC_FUNC_IMPL(__imp__sub_82122AA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82122AB0;
	__savegprlr_29(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r9,33
	ctx.r9.s64 = 2162688;
	// addi r10,r11,26080
	ctx.r10.s64 = ctx.r11.s64 + 26080;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// ori r7,r9,4416
	ctx.r7.u64 = ctx.r9.u64 | 4416;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// addis r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 196608;
	// mulli r8,r4,11920
	ctx.r8.s64 = ctx.r4.s64 * 11920;
	// lwzx r9,r11,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// addi r10,r10,-11424
	ctx.r10.s64 = ctx.r10.s64 + -11424;
	// cmpw cr6,r4,r9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r9.s32, ctx.xer);
	// add r30,r8,r10
	ctx.r30.u64 = ctx.r8.u64 + ctx.r10.u64;
	// bge cr6,0x82122b04
	if (!ctx.cr6.lt) goto loc_82122B04;
	// lis r6,0
	ctx.r6.s64 = 0;
	// addis r11,r11,10
	ctx.r11.s64 = ctx.r11.s64 + 655360;
	// ori r5,r6,37344
	ctx.r5.u64 = ctx.r6.u64 | 37344;
	// addi r11,r11,-7344
	ctx.r11.s64 = ctx.r11.s64 + -7344;
	// mullw r10,r4,r5
	ctx.r10.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r5.s32);
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82122b08
	goto loc_82122B08;
loc_82122B04:
	// li r29,0
	ctx.r29.s64 = 0;
loc_82122B08:
	// lwz r10,516(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 516);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// ld r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// bl 0x823048e0
	ctx.lr = 0x82122B34;
	sub_823048E0(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// lfs f9,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f9.f64 = double(temp.f32);
	// addi r31,r10,30392
	ctx.r31.s64 = ctx.r10.s64 + 30392;
	// lfs f7,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f7.f64 = double(temp.f32);
	// addi r11,r11,-6624
	ctx.r11.s64 = ctx.r11.s64 + -6624;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lfs f0,528(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f11,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f13,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// stfs f10,112(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fadds f8,f9,f12
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// stfs f8,116(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fadds f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f0.f64));
	// stfs f6,120(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x822ee688
	ctx.lr = 0x82122B98;
	sub_822EE688(ctx, base);
	// lwz r11,516(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 516);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lfs f8,492(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	ctx.f8.f64 = double(temp.f32);
	// addi r5,r11,48
	ctx.r5.s64 = ctx.r11.s64 + 48;
	// lfs f5,512(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 512);
	ctx.f5.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f4,508(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	ctx.f4.f64 = double(temp.f32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lfs f3,504(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	ctx.f3.f64 = double(temp.f32);
	// addi r3,r30,4768
	ctx.r3.s64 = ctx.r30.s64 + 4768;
	// lfs f2,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f7,17976(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17976);
	ctx.f7.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f6,-1608(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1608);
	ctx.f6.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e28d8
	ctx.lr = 0x82122BDC;
	sub_822E28D8(ctx, base);
	// ld r7,11856(r30)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r30.u32 + 11856);
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r6,r7,0,24,24
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x80;
	// cmpldi cr6,r6,0
	ctx.cr6.compare<uint64_t>(ctx.r6.u64, 0, ctx.xer);
	// bne cr6,0x82122bf4
	if (!ctx.cr6.eq) goto loc_82122BF4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82122BF4:
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82122c0c
	if (!ctx.cr6.eq) goto loc_82122C0C;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822efbc0
	ctx.lr = 0x82122C0C;
	sub_822EFBC0(ctx, base);
loc_82122C0C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82122C14"))) PPC_WEAK_FUNC(sub_82122C14);
PPC_FUNC_IMPL(__imp__sub_82122C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82122C18"))) PPC_WEAK_FUNC(sub_82122C18);
PPC_FUNC_IMPL(__imp__sub_82122C18) {
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
	// mulli r10,r4,11920
	ctx.r10.s64 = ctx.r4.s64 * 11920;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// li r12,1
	ctx.r12.s64 = 1;
	// addis r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 196608;
	// rldicr r12,r12,35,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 35) & 0xFFFFFFFFFFFFFFFF;
	// addi r11,r11,-11424
	ctx.r11.s64 = ctx.r11.s64 + -11424;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ld r11,11856(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 11856);
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// bne cr6,0x82122c60
	if (!ctx.cr6.eq) goto loc_82122C60;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82122C60:
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82122ca8
	if (!ctx.cr6.eq) goto loc_82122CA8;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// mulli r4,r4,19200
	ctx.r4.s64 = ctx.r4.s64 * 19200;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addis r11,r11,35
	ctx.r11.s64 = ctx.r11.s64 + 2293760;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r11,-13016
	ctx.r11.s64 = ctx.r11.s64 + -13016;
	// addi r3,r31,10048
	ctx.r3.s64 = ctx.r31.s64 + 10048;
	// lbzx r10,r4,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// extsb r4,r10
	ctx.r4.s64 = ctx.r10.s8;
	// bl 0x822e74f8
	ctx.lr = 0x82122C9C;
	sub_822E74F8(ctx, base);
	// li r4,35
	ctx.r4.s64 = 35;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822efbc0
	ctx.lr = 0x82122CA8;
	sub_822EFBC0(ctx, base);
loc_82122CA8:
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

__attribute__((alias("__imp__sub_82122CBC"))) PPC_WEAK_FUNC(sub_82122CBC);
PPC_FUNC_IMPL(__imp__sub_82122CBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82122CC0"))) PPC_WEAK_FUNC(sub_82122CC0);
PPC_FUNC_IMPL(__imp__sub_82122CC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x82122CC8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r27,r11,26080
	ctx.r27.s64 = ctx.r11.s64 + 26080;
	// lis r11,7
	ctx.r11.s64 = 458752;
	// ori r10,r11,16271
	ctx.r10.u64 = ctx.r11.u64 | 16271;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// addi r29,r11,28544
	ctx.r29.s64 = ctx.r11.s64 + 28544;
	// lbzx r9,r27,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82122d60
	if (ctx.cr6.eq) goto loc_82122D60;
	// lis r8,37
	ctx.r8.s64 = 2424832;
	// ori r7,r8,49146
	ctx.r7.u64 = ctx.r8.u64 | 49146;
	// lbzx r6,r29,r7
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r7.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82122d60
	if (!ctx.cr6.eq) goto loc_82122D60;
	// lis r5,7
	ctx.r5.s64 = 458752;
	// ori r4,r5,16216
	ctx.r4.u64 = ctx.r5.u64 | 16216;
	// lwzx r11,r27,r4
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r4.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82122d60
	if (ctx.cr6.eq) goto loc_82122D60;
	// lis r3,34
	ctx.r3.s64 = 2228224;
	// li r30,0
	ctx.r30.s64 = 0;
	// ori r11,r3,36968
	ctx.r11.u64 = ctx.r3.u64 | 36968;
	// lwzx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82122d60
	if (!ctx.cr6.gt) goto loc_82122D60;
	// addi r31,r10,10528
	ctx.r31.s64 = ctx.r10.s64 + 10528;
loc_82122D3C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820fa748
	ctx.lr = 0x82122D44;
	sub_820FA748(ctx, base);
	// lis r10,34
	ctx.r10.s64 = 2228224;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// ori r9,r10,36968
	ctx.r9.u64 = ctx.r10.u64 | 36968;
	// addi r31,r31,5956
	ctx.r31.s64 = ctx.r31.s64 + 5956;
	// lwzx r11,r29,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r9.u32);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82122d3c
	if (ctx.cr6.lt) goto loc_82122D3C;
loc_82122D60:
	// lwz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r7,288(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 288);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82122D74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r6,37
	ctx.r6.s64 = 2424832;
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// ori r5,r6,49146
	ctx.r5.u64 = ctx.r6.u64 | 49146;
	// addi r31,r10,10416
	ctx.r31.s64 = ctx.r10.s64 + 10416;
	// lbzx r11,r29,r5
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r5.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82122da4
	if (!ctx.cr6.eq) goto loc_82122DA4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f6a20
	ctx.lr = 0x82122D98;
	sub_821F6A20(ctx, base);
	// lis r3,37
	ctx.r3.s64 = 2424832;
	// ori r11,r3,49146
	ctx.r11.u64 = ctx.r3.u64 | 49146;
	// lbzx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
loc_82122DA4:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82122e64
	if (!ctx.cr6.eq) goto loc_82122E64;
	// lis r9,7
	ctx.r9.s64 = 458752;
	// ori r8,r9,16271
	ctx.r8.u64 = ctx.r9.u64 | 16271;
	// lbzx r7,r27,r8
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r8.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82122df4
	if (ctx.cr6.eq) goto loc_82122DF4;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r6,3
	ctx.r6.s64 = 196608;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// ori r5,r6,51969
	ctx.r5.u64 = ctx.r6.u64 | 51969;
	// lbzx r4,r11,r5
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82122df4
	if (!ctx.cr6.eq) goto loc_82122DF4;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821041d8
	ctx.lr = 0x82122DE8;
	sub_821041D8(ctx, base);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82122e64
	if (ctx.cr6.eq) goto loc_82122E64;
loc_82122DF4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f6898
	ctx.lr = 0x82122DFC;
	sub_821F6898(ctx, base);
	// lis r11,7
	ctx.r11.s64 = 458752;
	// ori r10,r11,16216
	ctx.r10.u64 = ctx.r11.u64 | 16216;
	// lwzx r11,r27,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82122e30
	if (ctx.cr6.eq) goto loc_82122E30;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82122e30
	if (ctx.cr6.eq) goto loc_82122E30;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,28(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82122E2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82122e3c
	goto loc_82122E3C;
loc_82122E30:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r3,r11,11600
	ctx.r3.s64 = ctx.r11.s64 + 11600;
	// bl 0x82203578
	ctx.lr = 0x82122E3C;
	sub_82203578(ctx, base);
loc_82122E3C:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r7,30785
	ctx.r7.s64 = 2017525760;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// lis r11,-27576
	ctx.r11.s64 = -1807220736;
	// ori r4,r7,1617
	ctx.r4.u64 = ctx.r7.u64 | 1617;
	// ori r10,r11,14885
	ctx.r10.u64 = ctx.r11.u64 | 14885;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// rldimi r4,r10,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x820a38e8
	ctx.lr = 0x82122E64;
	sub_820A38E8(ctx, base);
loc_82122E64:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82122E6C"))) PPC_WEAK_FUNC(sub_82122E6C);
PPC_FUNC_IMPL(__imp__sub_82122E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82122E70"))) PPC_WEAK_FUNC(sub_82122E70);
PPC_FUNC_IMPL(__imp__sub_82122E70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x82122E78;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r31,r11,28544
	ctx.r31.s64 = ctx.r11.s64 + 28544;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8232dc88
	ctx.lr = 0x82122E94;
	sub_8232DC88(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82122eac
	if (!ctx.cr6.eq) goto loc_82122EAC;
loc_82122EA0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_82122EAC:
	// lis r10,-32114
	ctx.r10.s64 = -2104623104;
	// li r26,1
	ctx.r26.s64 = 1;
	// lwz r11,18444(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18444);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82122ed8
	if (!ctx.cr6.gt) goto loc_82122ED8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,18444(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18444, ctx.r11.u32);
	// bne cr6,0x82122f30
	if (!ctx.cr6.eq) goto loc_82122F30;
	// stw r26,192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 192, ctx.r26.u32);
	// stw r26,196(r28)
	PPC_STORE_U32(ctx.r28.u32 + 196, ctx.r26.u32);
loc_82122ED8:
	// lwz r11,192(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 192);
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bgt cr6,0x82122f30
	if (ctx.cr6.gt) goto loc_82122F30;
	// lis r12,-32238
	ctx.r12.s64 = -2112749568;
	// addi r12,r12,12028
	ctx.r12.s64 = ctx.r12.s64 + 12028;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82122F18;
	case 1:
		goto loc_82122F54;
	case 2:
		goto loc_82122F68;
	case 3:
		goto loc_82122F94;
	case 4:
		goto loc_8212310C;
	case 5:
		goto loc_821231C8;
	case 6:
		goto loc_821232AC;
	default:
		__builtin_unreachable();
	}
	// lwz r16,12056(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + 12056);
	// lwz r16,12116(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + 12116);
	// lwz r16,12136(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + 12136);
	// lwz r16,12180(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + 12180);
	// lwz r16,12556(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + 12556);
	// lwz r16,12744(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + 12744);
	// lwz r16,12972(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + 12972);
loc_82122F18:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82122ea0
	if (ctx.cr6.eq) goto loc_82122EA0;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// bne cr6,0x82122f3c
	if (!ctx.cr6.eq) goto loc_82122F3C;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,18444(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18444, ctx.r11.u32);
loc_82122F30:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_82122F3C:
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r30,196(r28)
	PPC_STORE_U32(ctx.r28.u32 + 196, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 192, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_82122F54:
	// li r9,2
	ctx.r9.s64 = 2;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 192, ctx.r9.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_82122F68:
	// addi r3,r31,20464
	ctx.r3.s64 = ctx.r31.s64 + 20464;
	// bl 0x82345738
	ctx.lr = 0x82122F70;
	sub_82345738(ctx, base);
	// lis r7,4
	ctx.r7.s64 = 262144;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r6,r7,28813
	ctx.r6.u64 = ctx.r7.u64 | 28813;
	// li r8,3
	ctx.r8.s64 = 3;
	// li r3,0
	ctx.r3.s64 = 0;
	// stbx r11,r31,r6
	PPC_STORE_U8(ctx.r31.u32 + ctx.r6.u32, ctx.r11.u8);
	// stw r8,192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 192, ctx.r8.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_82122F94:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82363c80
	ctx.lr = 0x82122F9C;
	sub_82363C80(ctx, base);
	// lis r5,34
	ctx.r5.s64 = 2228224;
	// li r27,0
	ctx.r27.s64 = 0;
	// ori r3,r5,36832
	ctx.r3.u64 = ctx.r5.u64 | 36832;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// lwzx r11,r31,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82122fec
	if (!ctx.cr6.gt) goto loc_82122FEC;
	// addi r29,r31,1076
	ctx.r29.s64 = ctx.r31.s64 + 1076;
loc_82122FC0:
	// clrlwi r5,r30,24
	ctx.r5.u64 = ctx.r30.u32 & 0xFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82327f50
	ctx.lr = 0x82122FCC;
	sub_82327F50(ctx, base);
	// lis r11,34
	ctx.r11.s64 = 2228224;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// ori r10,r11,36832
	ctx.r10.u64 = ctx.r11.u64 | 36832;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r29,r29,76
	ctx.r29.s64 = ctx.r29.s64 + 76;
	// lwzx r11,r31,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82122fc0
	if (ctx.cr6.lt) goto loc_82122FC0;
loc_82122FEC:
	// addi r3,r31,20464
	ctx.r3.s64 = ctx.r31.s64 + 20464;
	// bl 0x82343238
	ctx.lr = 0x82122FF4;
	sub_82343238(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82122fec
	if (ctx.cr6.eq) goto loc_82122FEC;
loc_82123000:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8232cf58
	ctx.lr = 0x82123008;
	sub_8232CF58(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82123000
	if (ctx.cr6.eq) goto loc_82123000;
loc_82123014:
	// addis r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 262144;
	// addi r3,r11,30560
	ctx.r3.s64 = ctx.r11.s64 + 30560;
	// bl 0x8229b8b8
	ctx.lr = 0x82123020;
	sub_8229B8B8(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82123014
	if (ctx.cr6.eq) goto loc_82123014;
	// lis r6,34
	ctx.r6.s64 = 2228224;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// ori r5,r6,37004
	ctx.r5.u64 = ctx.r6.u64 | 37004;
	// lwzx r11,r31,r5
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82123078
	if (!ctx.cr6.gt) goto loc_82123078;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// addis r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 196608;
	// addi r30,r11,-11424
	ctx.r30.s64 = ctx.r11.s64 + -11424;
loc_82123054:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822d9f08
	ctx.lr = 0x8212305C;
	sub_822D9F08(ctx, base);
	// lis r4,34
	ctx.r4.s64 = 2228224;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// ori r3,r4,37004
	ctx.r3.u64 = ctx.r4.u64 | 37004;
	// addi r30,r30,11920
	ctx.r30.s64 = ctx.r30.s64 + 11920;
	// lwzx r11,r31,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82123054
	if (ctx.cr6.lt) goto loc_82123054;
loc_82123078:
	// addis r11,r31,33
	ctx.r11.s64 = ctx.r31.s64 + 2162688;
	// addi r3,r11,16944
	ctx.r3.s64 = ctx.r11.s64 + 16944;
	// bl 0x820d31e0
	ctx.lr = 0x82123084;
	sub_820D31E0(ctx, base);
	// addis r11,r31,33
	ctx.r11.s64 = ctx.r31.s64 + 2162688;
	// addi r3,r11,6592
	ctx.r3.s64 = ctx.r11.s64 + 6592;
	// bl 0x820b7590
	ctx.lr = 0x82123090;
	sub_820B7590(ctx, base);
	// addis r11,r31,33
	ctx.r11.s64 = ctx.r31.s64 + 2162688;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r31,20464
	ctx.r3.s64 = ctx.r31.s64 + 20464;
	// addi r4,r11,7656
	ctx.r4.s64 = ctx.r11.s64 + 7656;
	// bl 0x82344000
	ctx.lr = 0x821230A4;
	sub_82344000(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82370c88
	ctx.lr = 0x821230AC;
	sub_82370C88(ctx, base);
	// lbz r11,160(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 160);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821230cc
	if (!ctx.cr6.eq) goto loc_821230CC;
	// lis r10,34
	ctx.r10.s64 = 2228224;
	// ori r9,r10,37012
	ctx.r9.u64 = ctx.r10.u64 | 37012;
	// lwzx r11,r31,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821230f8
	if (!ctx.cr6.eq) goto loc_821230F8;
loc_821230CC:
	// lis r8,4
	ctx.r8.s64 = 262144;
	// lfs f0,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lis r6,4
	ctx.r6.s64 = 262144;
	// ori r7,r8,28776
	ctx.r7.u64 = ctx.r8.u64 | 28776;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// ori r5,r6,28813
	ctx.r5.u64 = ctx.r6.u64 | 28813;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfsx f0,r31,r7
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, temp.u32);
	// stbx r11,r31,r5
	PPC_STORE_U8(ctx.r31.u32 + ctx.r5.u32, ctx.r11.u8);
	// bl 0x82120c00
	ctx.lr = 0x821230F8;
	sub_82120C00(ctx, base);
loc_821230F8:
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r27,192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 192, ctx.r27.u32);
	// stw r27,196(r28)
	PPC_STORE_U32(ctx.r28.u32 + 196, ctx.r27.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_8212310C:
	// lis r4,37
	ctx.r4.s64 = 2424832;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// ori r3,r4,49146
	ctx.r3.u64 = ctx.r4.u64 | 49146;
	// stbx r11,r31,r3
	PPC_STORE_U8(ctx.r31.u32 + ctx.r3.u32, ctx.r11.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82123130;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,7
	ctx.r8.s64 = 458752;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// ori r7,r8,16284
	ctx.r7.u64 = ctx.r8.u64 | 16284;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// lfs f0,2868(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// li r9,4
	ctx.r9.s64 = 4;
	// lis r6,7
	ctx.r6.s64 = 458752;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addis r8,r11,7
	ctx.r8.s64 = ctx.r11.s64 + 458752;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ori r5,r6,16244
	ctx.r5.u64 = ctx.r6.u64 | 16244;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lis r3,7
	ctx.r3.s64 = 458752;
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stwx r9,r11,r7
	PPC_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r9.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r8,15888
	ctx.r4.s64 = ctx.r8.s64 + 15888;
	// ori r8,r3,16245
	ctx.r8.u64 = ctx.r3.u64 | 16245;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lis r7,7
	ctx.r7.s64 = 458752;
	// stbx r9,r11,r5
	PPC_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r9.u8);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// ori r6,r7,16246
	ctx.r6.u64 = ctx.r7.u64 | 16246;
	// ld r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// stbx r9,r11,r8
	PPC_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u8);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// ld r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// stbx r8,r11,r6
	PPC_STORE_U8(ctx.r11.u32 + ctx.r6.u32, ctx.r8.u8);
	// std r5,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r5.u64);
	// std r4,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r4.u64);
	// bl 0x822d9c98
	ctx.lr = 0x821231B4;
	sub_822D9C98(ctx, base);
	// li r3,5
	ctx.r3.s64 = 5;
	// stw r3,192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 192, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_821231C8:
	// lis r11,34
	ctx.r11.s64 = 2228224;
	// li r27,0
	ctx.r27.s64 = 0;
	// ori r10,r11,36968
	ctx.r10.u64 = ctx.r11.u64 | 36968;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// lwzx r11,r31,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82123210
	if (!ctx.cr6.gt) goto loc_82123210;
loc_821231E4:
	// addis r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 262144;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,30560
	ctx.r3.s64 = ctx.r11.s64 + 30560;
	// bl 0x8223d0b0
	ctx.lr = 0x821231F4;
	sub_8223D0B0(ctx, base);
	// lis r9,34
	ctx.r9.s64 = 2228224;
	// stb r26,597(r3)
	PPC_STORE_U8(ctx.r3.u32 + 597, ctx.r26.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// ori r8,r9,36968
	ctx.r8.u64 = ctx.r9.u64 | 36968;
	// lwzx r11,r31,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821231e4
	if (ctx.cr6.lt) goto loc_821231E4;
loc_82123210:
	// lwz r7,0(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82123224;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r31,20464
	ctx.r3.s64 = ctx.r31.s64 + 20464;
	// bl 0x82345738
	ctx.lr = 0x8212322C;
	sub_82345738(ctx, base);
	// lis r5,4
	ctx.r5.s64 = 262144;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// ori r3,r5,28813
	ctx.r3.u64 = ctx.r5.u64 | 28813;
	// li r4,0
	ctx.r4.s64 = 0;
	// stbx r11,r31,r3
	PPC_STORE_U8(ctx.r31.u32 + ctx.r3.u32, ctx.r11.u8);
	// addis r11,r31,35
	ctx.r11.s64 = ctx.r31.s64 + 2293760;
	// addi r3,r11,-28496
	ctx.r3.s64 = ctx.r11.s64 + -28496;
	// bl 0x820ed7a0
	ctx.lr = 0x8212324C;
	sub_820ED7A0(ctx, base);
	// lis r10,33
	ctx.r10.s64 = 2162688;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// ori r9,r10,4441
	ctx.r9.u64 = ctx.r10.u64 | 4441;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stbx r11,r31,r9
	PPC_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u8);
	// bl 0x82120c00
	ctx.lr = 0x82123268;
	sub_82120C00(ctx, base);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r8,-22828
	ctx.r8.s64 = -1496055808;
	// lis r7,-17864
	ctx.r7.s64 = -1170735104;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// ori r3,r7,59100
	ctx.r3.u64 = ctx.r7.u64 | 59100;
	// ori r4,r8,10879
	ctx.r4.u64 = ctx.r8.u64 | 10879;
	// addis r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 196608;
	// rldimi r4,r3,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-11424
	ctx.r3.s64 = ctx.r11.s64 + -11424;
	// bl 0x820a38e8
	ctx.lr = 0x82123298;
	sub_820A38E8(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 192, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_821232AC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82363c80
	ctx.lr = 0x821232B4;
	sub_82363C80(ctx, base);
	// lis r10,34
	ctx.r10.s64 = 2228224;
	// li r27,0
	ctx.r27.s64 = 0;
	// ori r9,r10,36832
	ctx.r9.u64 = ctx.r10.u64 | 36832;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// lwzx r11,r31,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82123304
	if (!ctx.cr6.gt) goto loc_82123304;
	// addi r29,r31,1076
	ctx.r29.s64 = ctx.r31.s64 + 1076;
loc_821232D8:
	// clrlwi r5,r30,24
	ctx.r5.u64 = ctx.r30.u32 & 0xFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82327f50
	ctx.lr = 0x821232E4;
	sub_82327F50(ctx, base);
	// lis r8,34
	ctx.r8.s64 = 2228224;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// ori r7,r8,36832
	ctx.r7.u64 = ctx.r8.u64 | 36832;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r29,r29,76
	ctx.r29.s64 = ctx.r29.s64 + 76;
	// lwzx r11,r31,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821232d8
	if (ctx.cr6.lt) goto loc_821232D8;
loc_82123304:
	// addi r3,r31,20464
	ctx.r3.s64 = ctx.r31.s64 + 20464;
	// bl 0x82343238
	ctx.lr = 0x8212330C;
	sub_82343238(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82123304
	if (ctx.cr6.eq) goto loc_82123304;
loc_82123318:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8232cf58
	ctx.lr = 0x82123320;
	sub_8232CF58(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82123318
	if (ctx.cr6.eq) goto loc_82123318;
loc_8212332C:
	// addis r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 262144;
	// addi r3,r11,30560
	ctx.r3.s64 = ctx.r11.s64 + 30560;
	// bl 0x8229b8b8
	ctx.lr = 0x82123338;
	sub_8229B8B8(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8212332c
	if (ctx.cr6.eq) goto loc_8212332C;
	// lis r3,34
	ctx.r3.s64 = 2228224;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// ori r11,r3,37004
	ctx.r11.u64 = ctx.r3.u64 | 37004;
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82123390
	if (!ctx.cr6.gt) goto loc_82123390;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// addis r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 196608;
	// addi r30,r11,-11424
	ctx.r30.s64 = ctx.r11.s64 + -11424;
loc_8212336C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822d9f08
	ctx.lr = 0x82123374;
	sub_822D9F08(ctx, base);
	// lis r10,34
	ctx.r10.s64 = 2228224;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// ori r9,r10,37004
	ctx.r9.u64 = ctx.r10.u64 | 37004;
	// addi r30,r30,11920
	ctx.r30.s64 = ctx.r30.s64 + 11920;
	// lwzx r11,r31,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8212336c
	if (ctx.cr6.lt) goto loc_8212336C;
loc_82123390:
	// addis r11,r31,33
	ctx.r11.s64 = ctx.r31.s64 + 2162688;
	// addi r3,r11,16944
	ctx.r3.s64 = ctx.r11.s64 + 16944;
	// bl 0x820d31e0
	ctx.lr = 0x8212339C;
	sub_820D31E0(ctx, base);
	// addis r11,r31,33
	ctx.r11.s64 = ctx.r31.s64 + 2162688;
	// addi r3,r11,6592
	ctx.r3.s64 = ctx.r11.s64 + 6592;
	// bl 0x820b7590
	ctx.lr = 0x821233A8;
	sub_820B7590(ctx, base);
	// addis r11,r31,33
	ctx.r11.s64 = ctx.r31.s64 + 2162688;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r31,20464
	ctx.r3.s64 = ctx.r31.s64 + 20464;
	// addi r4,r11,7656
	ctx.r4.s64 = ctx.r11.s64 + 7656;
	// bl 0x82344000
	ctx.lr = 0x821233BC;
	sub_82344000(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82370c88
	ctx.lr = 0x821233C4;
	sub_82370C88(ctx, base);
	// lis r8,34
	ctx.r8.s64 = 2228224;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// ori r7,r8,36968
	ctx.r7.u64 = ctx.r8.u64 | 36968;
	// lwzx r11,r31,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82123408
	if (!ctx.cr6.gt) goto loc_82123408;
loc_821233DC:
	// addis r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 262144;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,30560
	ctx.r3.s64 = ctx.r11.s64 + 30560;
	// bl 0x8223d0b0
	ctx.lr = 0x821233EC;
	sub_8223D0B0(ctx, base);
	// bl 0x82297d78
	ctx.lr = 0x821233F0;
	sub_82297D78(ctx, base);
	// lis r6,34
	ctx.r6.s64 = 2228224;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// ori r5,r6,36968
	ctx.r5.u64 = ctx.r6.u64 | 36968;
	// lwzx r11,r31,r5
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821233dc
	if (ctx.cr6.lt) goto loc_821233DC;
loc_82123408:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,4864
	ctx.r3.s64 = ctx.r11.s64 + 4864;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82188300
	ctx.lr = 0x8212341C;
	sub_82188300(ctx, base);
	// lbz r4,160(r28)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r28.u32 + 160);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8212343c
	if (!ctx.cr6.eq) goto loc_8212343C;
	// lis r3,34
	ctx.r3.s64 = 2228224;
	// ori r11,r3,37012
	ctx.r11.u64 = ctx.r3.u64 | 37012;
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82123468
	if (!ctx.cr6.eq) goto loc_82123468;
loc_8212343C:
	// lis r10,4
	ctx.r10.s64 = 262144;
	// lfs f0,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lis r8,4
	ctx.r8.s64 = 262144;
	// ori r9,r10,28776
	ctx.r9.u64 = ctx.r10.u64 | 28776;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// ori r7,r8,28813
	ctx.r7.u64 = ctx.r8.u64 | 28813;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfsx f0,r31,r9
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, temp.u32);
	// stbx r11,r31,r7
	PPC_STORE_U8(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u8);
	// bl 0x82120c00
	ctx.lr = 0x82123468;
	sub_82120C00(ctx, base);
loc_82123468:
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r27,192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 192, ctx.r27.u32);
	// stw r27,196(r28)
	PPC_STORE_U32(ctx.r28.u32 + 196, ctx.r27.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8212347C"))) PPC_WEAK_FUNC(sub_8212347C);
PPC_FUNC_IMPL(__imp__sub_8212347C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82123480"))) PPC_WEAK_FUNC(sub_82123480);
PPC_FUNC_IMPL(__imp__sub_82123480) {
	PPC_FUNC_PROLOGUE();
	// li r3,23
	ctx.r3.s64 = 23;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82123488"))) PPC_WEAK_FUNC(sub_82123488);
PPC_FUNC_IMPL(__imp__sub_82123488) {
	PPC_FUNC_PROLOGUE();
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82123490"))) PPC_WEAK_FUNC(sub_82123490);
PPC_FUNC_IMPL(__imp__sub_82123490) {
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
	// addi r30,r11,26080
	ctx.r30.s64 = ctx.r11.s64 + 26080;
	// lis r11,7
	ctx.r11.s64 = 458752;
	// ori r10,r11,16228
	ctx.r10.u64 = ctx.r11.u64 | 16228;
	// lwzx r11,r30,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x821234c8
	if (!ctx.cr6.eq) goto loc_821234C8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821234C8:
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x821235a4
	if (!ctx.cr6.eq) goto loc_821235A4;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lis r7,37
	ctx.r7.s64 = 2424832;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// ori r6,r7,49147
	ctx.r6.u64 = ctx.r7.u64 | 49147;
	// lbzx r5,r11,r6
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x821235a4
	if (!ctx.cr6.eq) goto loc_821235A4;
	// lwz r4,196(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x821235a4
	if (!ctx.cr6.eq) goto loc_821235A4;
	// lis r3,4
	ctx.r3.s64 = 262144;
	// ori r10,r3,30448
	ctx.r10.u64 = ctx.r3.u64 | 30448;
	// lbzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82123528
	if (!ctx.cr6.eq) goto loc_82123528;
	// lis r8,4
	ctx.r8.s64 = 262144;
	// ori r7,r8,30452
	ctx.r7.u64 = ctx.r8.u64 | 30452;
	// lwzx r11,r11,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x8212352c
	if (ctx.cr6.eq) goto loc_8212352C;
loc_82123528:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8212352C:
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x821235a4
	if (!ctx.cr6.eq) goto loc_821235A4;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8212353C:
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r31,r11
	ctx.r4.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addis r11,r30,3
	ctx.r11.s64 = ctx.r30.s64 + 196608;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-11472
	ctx.r11.s64 = ctx.r11.s64 + -11472;
	// lbzx r10,r3,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82123590
	if (ctx.cr6.eq) goto loc_82123590;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r30,144
	ctx.r3.s64 = ctx.r30.s64 + 144;
	// bl 0x821154b0
	ctx.lr = 0x82123568;
	sub_821154B0(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82123590
	if (ctx.cr6.eq) goto loc_82123590;
	// lis r8,7
	ctx.r8.s64 = 458752;
	// lis r6,7
	ctx.r6.s64 = 458752;
	// ori r7,r8,16232
	ctx.r7.u64 = ctx.r8.u64 | 16232;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r5,r6,16297
	ctx.r5.u64 = ctx.r6.u64 | 16297;
	// stwx r31,r30,r7
	PPC_STORE_U32(ctx.r30.u32 + ctx.r7.u32, ctx.r31.u32);
	// stbx r11,r30,r5
	PPC_STORE_U8(ctx.r30.u32 + ctx.r5.u32, ctx.r11.u8);
loc_82123590:
	// addi r4,r31,1
	ctx.r4.s64 = ctx.r31.s64 + 1;
	// extsb r5,r4
	ctx.r5.s64 = ctx.r4.s8;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// blt cr6,0x8212353c
	if (ctx.cr6.lt) goto loc_8212353C;
loc_821235A4:
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

__attribute__((alias("__imp__sub_821235BC"))) PPC_WEAK_FUNC(sub_821235BC);
PPC_FUNC_IMPL(__imp__sub_821235BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821235C0"))) PPC_WEAK_FUNC(sub_821235C0);
PPC_FUNC_IMPL(__imp__sub_821235C0) {
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
	// lis r10,-32085
	ctx.r10.s64 = -2102722560;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r10,r10,28544
	ctx.r10.s64 = ctx.r10.s64 + 28544;
	// mulli r11,r11,19200
	ctx.r11.s64 = ctx.r11.s64 * 19200;
	// addis r10,r10,35
	ctx.r10.s64 = ctx.r10.s64 + 2293760;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r10,r10,-14800
	ctx.r10.s64 = ctx.r10.s64 + -14800;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x820bb2d8
	ctx.lr = 0x821235F0;
	sub_820BB2D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,2
	ctx.r3.s64 = 2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82123604
	if (!ctx.cr6.eq) goto loc_82123604;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82123604:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82123614"))) PPC_WEAK_FUNC(sub_82123614);
PPC_FUNC_IMPL(__imp__sub_82123614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82123618"))) PPC_WEAK_FUNC(sub_82123618);
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

__attribute__((alias("__imp__sub_82123688"))) PPC_WEAK_FUNC(sub_82123688);
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

__attribute__((alias("__imp__sub_821236CC"))) PPC_WEAK_FUNC(sub_821236CC);
PPC_FUNC_IMPL(__imp__sub_821236CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821236D0"))) PPC_WEAK_FUNC(sub_821236D0);
PPC_FUNC_IMPL(__imp__sub_821236D0) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,228(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82123708
	if (!ctx.cr6.lt) goto loc_82123708;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f1,-12136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12136);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82123744
	goto loc_82123744;
loc_82123708:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r11,r11,-18560
	ctx.r11.s64 = ctx.r11.s64 + -18560;
	// lfs f2,-31680(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -31680);
	ctx.f2.f64 = double(temp.f32);
	// lis r10,-32124
	ctx.r10.s64 = -2105278464;
	// addis r11,r11,9
	ctx.r11.s64 = ctx.r11.s64 + 589824;
	// addi r31,r10,26080
	ctx.r31.s64 = ctx.r10.s64 + 26080;
	// addi r3,r11,-19376
	ctx.r3.s64 = ctx.r11.s64 + -19376;
	// lfs f0,128(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// bl 0x822b1b38
	ctx.lr = 0x82123738;
	sub_822B1B38(ctx, base);
	// lfs f13,228(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,128(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
loc_82123744:
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

__attribute__((alias("__imp__sub_8212375C"))) PPC_WEAK_FUNC(sub_8212375C);
PPC_FUNC_IMPL(__imp__sub_8212375C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82123760"))) PPC_WEAK_FUNC(sub_82123760);
PPC_FUNC_IMPL(__imp__sub_82123760) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82123768;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r11,14528
	ctx.r30.s64 = ctx.r11.s64 + 14528;
	// li r4,20
	ctx.r4.s64 = 20;
	// addi r3,r30,7432
	ctx.r3.s64 = ctx.r30.s64 + 7432;
	// bl 0x821fbf68
	ctx.lr = 0x82123784;
	sub_821FBF68(ctx, base);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r31,r11,26752
	ctx.r31.s64 = ctx.r11.s64 + 26752;
	// addis r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 196608;
	// addi r3,r11,15896
	ctx.r3.s64 = ctx.r11.s64 + 15896;
	// bl 0x821aa558
	ctx.lr = 0x82123798;
	sub_821AA558(ctx, base);
	// addis r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 262144;
	// addi r3,r11,-14008
	ctx.r3.s64 = ctx.r11.s64 + -14008;
	// bl 0x821e7ed0
	ctx.lr = 0x821237A4;
	sub_821E7ED0(ctx, base);
	// li r4,25
	ctx.r4.s64 = 25;
	// addi r3,r30,7432
	ctx.r3.s64 = ctx.r30.s64 + 7432;
	// bl 0x821fbf68
	ctx.lr = 0x821237B0;
	sub_821FBF68(ctx, base);
	// addis r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 262144;
	// addi r3,r11,-14008
	ctx.r3.s64 = ctx.r11.s64 + -14008;
	// bl 0x821aa478
	ctx.lr = 0x821237BC;
	sub_821AA478(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,10416
	ctx.r3.s64 = ctx.r11.s64 + 10416;
	// li r4,39
	ctx.r4.s64 = 39;
	// bl 0x821fd498
	ctx.lr = 0x821237D0;
	sub_821FD498(ctx, base);
	// addis r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 262144;
	// addi r3,r11,-14008
	ctx.r3.s64 = ctx.r11.s64 + -14008;
	// bl 0x821e7f08
	ctx.lr = 0x821237DC;
	sub_821E7F08(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,4864
	ctx.r3.s64 = ctx.r11.s64 + 4864;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82188300
	ctx.lr = 0x821237F0;
	sub_82188300(ctx, base);
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r11,r11,-18560
	ctx.r11.s64 = ctx.r11.s64 + -18560;
	// addis r11,r11,9
	ctx.r11.s64 = ctx.r11.s64 + 589824;
	// addi r3,r11,-16248
	ctx.r3.s64 = ctx.r11.s64 + -16248;
	// bl 0x822acd10
	ctx.lr = 0x82123808;
	sub_822ACD10(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,200(r29)
	PPC_STORE_U8(ctx.r29.u32 + 200, ctx.r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82123818"))) PPC_WEAK_FUNC(sub_82123818);
PPC_FUNC_IMPL(__imp__sub_82123818) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baec
	ctx.lr = 0x82123820;
	__savegprlr_25(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r5,63
	ctx.r5.s64 = 63;
	// lbz r31,3672(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3672);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,161
	ctx.r3.s64 = ctx.r1.s64 + 161;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// bl 0x8259d300
	ctx.lr = 0x82123858;
	sub_8259D300(ctx, base);
	// li r5,63
	ctx.r5.s64 = 63;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,97
	ctx.r3.s64 = ctx.r1.s64 + 97;
	// bl 0x8259d300
	ctx.lr = 0x8212386C;
	sub_8259D300(ctx, base);
	// li r5,63
	ctx.r5.s64 = 63;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// addi r3,r1,225
	ctx.r3.s64 = ctx.r1.s64 + 225;
	// bl 0x8259d300
	ctx.lr = 0x82123880;
	sub_8259D300(ctx, base);
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r31,r11,-776
	ctx.r31.s64 = ctx.r11.s64 + -776;
	// beq cr6,0x8212389c
	if (ctx.cr6.eq) goto loc_8212389C;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// b 0x821238a4
	goto loc_821238A4;
loc_8212389C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r11,-784
	ctx.r30.s64 = ctx.r11.s64 + -784;
loc_821238A4:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x821238bc
	if (ctx.cr6.eq) goto loc_821238BC;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82361bd8
	ctx.lr = 0x821238BC;
	sub_82361BD8(ctx, base);
loc_821238BC:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x821238d4
	if (ctx.cr6.eq) goto loc_821238D4;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82361bd8
	ctx.lr = 0x821238D4;
	sub_82361BD8(ctx, base);
loc_821238D4:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x821238ec
	if (ctx.cr6.eq) goto loc_821238EC;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82361bd8
	ctx.lr = 0x821238EC;
	sub_82361BD8(ctx, base);
loc_821238EC:
	// addi r7,r1,224
	ctx.r7.s64 = ctx.r1.s64 + 224;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r5,r11,-812
	ctx.r5.s64 = ctx.r11.s64 + -812;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// addi r3,r11,29996
	ctx.r3.s64 = ctx.r11.s64 + 29996;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r6,6
	ctx.r6.s64 = 6;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// bl 0x82427c40
	ctx.lr = 0x82123924;
	sub_82427C40(ctx, base);
	// addi r11,r1,288
	ctx.r11.s64 = ctx.r1.s64 + 288;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_8212392C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r6,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r6.s64;
	// beq cr6,0x82123950
	if (ctx.cr6.eq) goto loc_82123950;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8212392c
	if (ctx.cr6.eq) goto loc_8212392C;
loc_82123950:
	// cntlzw r5,r8
	ctx.r5.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r3,r5,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82123960"))) PPC_WEAK_FUNC(sub_82123960);
PPC_FUNC_IMPL(__imp__sub_82123960) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259badc
	ctx.lr = 0x82123968;
	__savegprlr_21(ctx, base);
	// stwu r1,-1024(r1)
	ea = -1024 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// lwz r11,320(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 320);
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x82123af4
	if (ctx.cr6.gt) goto loc_82123AF4;
	// lis r10,-32124
	ctx.r10.s64 = -2105278464;
	// li r21,1
	ctx.r21.s64 = 1;
	// addi r23,r10,26080
	ctx.r23.s64 = ctx.r10.s64 + 26080;
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// addi r22,r10,10416
	ctx.r22.s64 = ctx.r10.s64 + 10416;
	// lis r12,-32238
	ctx.r12.s64 = -2112749568;
	// addi r12,r12,14788
	ctx.r12.s64 = ctx.r12.s64 + 14788;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_821239D4;
	case 1:
		goto loc_82123A0C;
	case 2:
		goto loc_82123B4C;
	case 3:
		goto loc_82123C24;
	default:
		__builtin_unreachable();
	}
	// lwz r16,14804(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + 14804);
	// lwz r16,14860(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + 14860);
	// lwz r16,15180(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + 15180);
	// lwz r16,15396(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + 15396);
loc_821239D4:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x821041d8
	ctx.lr = 0x821239DC;
	sub_821041D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// li r4,31
	ctx.r4.s64 = 31;
	// addi r22,r11,10416
	ctx.r22.s64 = ctx.r11.s64 + 10416;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// beq cr6,0x82123a00
	if (ctx.cr6.eq) goto loc_82123A00;
	// li r4,32
	ctx.r4.s64 = 32;
loc_82123A00:
	// bl 0x821fd498
	ctx.lr = 0x82123A04;
	sub_821FD498(ctx, base);
	// li r21,1
	ctx.r21.s64 = 1;
	// stw r21,320(r24)
	PPC_STORE_U32(ctx.r24.u32 + 320, ctx.r21.u32);
loc_82123A0C:
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82123aa8
	if (ctx.cr6.eq) goto loc_82123AA8;
	// lwz r9,0(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r8,432(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 432);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82123A2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r7,49(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 49);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82123aa8
	if (ctx.cr6.eq) goto loc_82123AA8;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r4,r30,1
	ctx.r4.s64 = ctx.r30.s64 + 1;
	// addi r31,r11,23504
	ctx.r31.s64 = ctx.r11.s64 + 23504;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8210fcf8
	ctx.lr = 0x82123A4C;
	sub_8210FCF8(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r11,-31668
	ctx.r4.s64 = ctx.r11.s64 + -31668;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8210fcf8
	ctx.lr = 0x82123A60;
	sub_8210FCF8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82361bd8
	ctx.lr = 0x82123A74;
	sub_82361BD8(ctx, base);
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82361bd8
	ctx.lr = 0x82123A84;
	sub_82361BD8(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,-31676
	ctx.r5.s64 = ctx.r11.s64 + -31676;
	// addi r6,r1,272
	ctx.r6.s64 = ctx.r1.s64 + 272;
	// li r4,386
	ctx.r4.s64 = 386;
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// bl 0x8259da78
	ctx.lr = 0x82123AA0;
	sub_8259DA78(ctx, base);
	// addi r4,r1,528
	ctx.r4.s64 = ctx.r1.s64 + 528;
	// b 0x82123aac
	goto loc_82123AAC;
loc_82123AA8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82123AAC:
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82123818
	ctx.lr = 0x82123AC4;
	sub_82123818(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82123b14
	if (!ctx.cr6.eq) goto loc_82123B14;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x821041d8
	ctx.lr = 0x82123AD8;
	sub_821041D8(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// li r5,1
	ctx.r5.s64 = 1;
	// bne cr6,0x82123b00
	if (!ctx.cr6.eq) goto loc_82123B00;
	// li r4,31
	ctx.r4.s64 = 31;
	// bl 0x821fd498
	ctx.lr = 0x82123AF4;
	sub_821FD498(ctx, base);
loc_82123AF4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,1024
	ctx.r1.s64 = ctx.r1.s64 + 1024;
	// b 0x8259bb2c
	__restgprlr_21(ctx, base);
	return;
loc_82123B00:
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x821fd498
	ctx.lr = 0x82123B08;
	sub_821FD498(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,1024
	ctx.r1.s64 = ctx.r1.s64 + 1024;
	// b 0x8259bb2c
	__restgprlr_21(ctx, base);
	return;
loc_82123B14:
	// clrlwi r4,r25,24
	ctx.r4.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82123b34
	if (ctx.cr6.eq) goto loc_82123B34;
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r3,320(r24)
	PPC_STORE_U32(ctx.r24.u32 + 320, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,1024
	ctx.r1.s64 = ctx.r1.s64 + 1024;
	// b 0x8259bb2c
	__restgprlr_21(ctx, base);
	return;
loc_82123B34:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r21,316(r24)
	PPC_STORE_U8(ctx.r24.u32 + 316, ctx.r21.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,320(r24)
	PPC_STORE_U32(ctx.r24.u32 + 320, ctx.r11.u32);
	// addi r1,r1,1024
	ctx.r1.s64 = ctx.r1.s64 + 1024;
	// b 0x8259bb2c
	__restgprlr_21(ctx, base);
	return;
loc_82123B4C:
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r29,r11,26080
	ctx.r29.s64 = ctx.r11.s64 + 26080;
	// addis r11,r29,7
	ctx.r11.s64 = ctx.r29.s64 + 458752;
	// addi r3,r11,14496
	ctx.r3.s64 = ctx.r11.s64 + 14496;
	// bl 0x8210d8d8
	ctx.lr = 0x82123B60;
	sub_8210D8D8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82123af4
	if (!ctx.cr6.eq) goto loc_82123AF4;
	// lwz r11,520(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 520);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// bne cr6,0x82123b80
	if (!ctx.cr6.eq) goto loc_82123B80;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82123B80:
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82123af4
	if (!ctx.cr6.eq) goto loc_82123AF4;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lis r7,34
	ctx.r7.s64 = 2228224;
	// addi r28,r11,28544
	ctx.r28.s64 = ctx.r11.s64 + 28544;
	// ori r6,r7,37004
	ctx.r6.u64 = ctx.r7.u64 | 37004;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwzx r11,r28,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r6.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82123c10
	if (!ctx.cr6.gt) goto loc_82123C10;
loc_82123BB0:
	// extsb r3,r31
	ctx.r3.s64 = ctx.r31.s8;
	// addi r11,r29,2585
	ctx.r11.s64 = ctx.r29.s64 + 2585;
	// addi r10,r29,1144
	ctx.r10.s64 = ctx.r29.s64 + 1144;
	// li r4,7
	ctx.r4.s64 = 7;
	// lbzx r9,r3,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// mulli r11,r8,360
	ctx.r11.s64 = ctx.r8.s64 * 360;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// bl 0x821118d0
	ctx.lr = 0x82123BD8;
	sub_821118D0(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82123c00
	if (!ctx.cr6.eq) goto loc_82123C00;
	// lis r6,34
	ctx.r6.s64 = 2228224;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// ori r5,r6,37004
	ctx.r5.u64 = ctx.r6.u64 | 37004;
	// lwzx r11,r28,r5
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r5.u32);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82123bb0
	if (ctx.cr6.lt) goto loc_82123BB0;
	// b 0x82123c10
	goto loc_82123C10;
loc_82123C00:
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// bl 0x82108a60
	ctx.lr = 0x82123C0C;
	sub_82108A60(ctx, base);
	// mr r27,r21
	ctx.r27.u64 = ctx.r21.u64;
loc_82123C10:
	// clrlwi r4,r27,24
	ctx.r4.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82123af4
	if (ctx.cr6.eq) goto loc_82123AF4;
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r3,320(r24)
	PPC_STORE_U32(ctx.r24.u32 + 320, ctx.r3.u32);
loc_82123C24:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-812
	ctx.r5.s64 = ctx.r11.s64 + -812;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r11,29984
	ctx.r3.s64 = ctx.r11.s64 + 29984;
	// bl 0x82427c40
	ctx.lr = 0x82123C40;
	sub_82427C40(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x821f6a20
	ctx.lr = 0x82123C48;
	sub_821F6A20(ctx, base);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r10,512(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 512);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82123C5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r21,316(r24)
	PPC_STORE_U8(ctx.r24.u32 + 316, ctx.r21.u8);
	// stw r9,320(r24)
	PPC_STORE_U32(ctx.r24.u32 + 320, ctx.r9.u32);
	// addi r1,r1,1024
	ctx.r1.s64 = ctx.r1.s64 + 1024;
	// b 0x8259bb2c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82123C74"))) PPC_WEAK_FUNC(sub_82123C74);
PPC_FUNC_IMPL(__imp__sub_82123C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82123C78"))) PPC_WEAK_FUNC(sub_82123C78);
PPC_FUNC_IMPL(__imp__sub_82123C78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x82123C80;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r28,r11,28544
	ctx.r28.s64 = ctx.r11.s64 + 28544;
	// lis r11,34
	ctx.r11.s64 = 2228224;
	// li r29,0
	ctx.r29.s64 = 0;
	// ori r10,r11,37004
	ctx.r10.u64 = ctx.r11.u64 | 37004;
	// lwzx r11,r28,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82123d08
	if (!ctx.cr6.gt) goto loc_82123D08;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r30,r11,26080
	ctx.r30.s64 = ctx.r11.s64 + 26080;
loc_82123CB0:
	// lbz r11,2585(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2585);
	// addi r10,r30,1144
	ctx.r10.s64 = ctx.r30.s64 + 1144;
	// li r4,7
	ctx.r4.s64 = 7;
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// mulli r11,r9,360
	ctx.r11.s64 = ctx.r9.s64 * 360;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r31,r11,12
	ctx.r31.s64 = ctx.r11.s64 + 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821118d0
	ctx.lr = 0x82123CD4;
	sub_821118D0(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82123cf0
	if (ctx.cr6.eq) goto loc_82123CF0;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82108a60
	ctx.lr = 0x82123CEC;
	sub_82108A60(ctx, base);
	// li r27,1
	ctx.r27.s64 = 1;
loc_82123CF0:
	// lis r7,34
	ctx.r7.s64 = 2228224;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// ori r6,r7,37004
	ctx.r6.u64 = ctx.r7.u64 | 37004;
	// lwzx r11,r28,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r6.u32);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82123cb0
	if (ctx.cr6.lt) goto loc_82123CB0;
loc_82123D08:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82123D14"))) PPC_WEAK_FUNC(sub_82123D14);
PPC_FUNC_IMPL(__imp__sub_82123D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82123D18"))) PPC_WEAK_FUNC(sub_82123D18);
PPC_FUNC_IMPL(__imp__sub_82123D18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82123D20;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r11,28544
	ctx.r29.s64 = ctx.r11.s64 + 28544;
	// lis r11,34
	ctx.r11.s64 = 2228224;
	// ori r10,r11,37004
	ctx.r10.u64 = ctx.r11.u64 | 37004;
	// lwzx r11,r29,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82123d8c
	if (!ctx.cr6.gt) goto loc_82123D8C;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// addis r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 196608;
	// addi r31,r11,-10492
	ctx.r31.s64 = ctx.r11.s64 + -10492;
loc_82123D54:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822ec298
	ctx.lr = 0x82123D5C;
	sub_822EC298(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82123d70
	if (ctx.cr6.eq) goto loc_82123D70;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82316f78
	ctx.lr = 0x82123D70;
	sub_82316F78(ctx, base);
loc_82123D70:
	// lis r8,34
	ctx.r8.s64 = 2228224;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// ori r7,r8,37004
	ctx.r7.u64 = ctx.r8.u64 | 37004;
	// addi r31,r31,11920
	ctx.r31.s64 = ctx.r31.s64 + 11920;
	// lwzx r11,r29,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r7.u32);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82123d54
	if (ctx.cr6.lt) goto loc_82123D54;
loc_82123D8C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82123D94"))) PPC_WEAK_FUNC(sub_82123D94);
PPC_FUNC_IMPL(__imp__sub_82123D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82123D98"))) PPC_WEAK_FUNC(sub_82123D98);
PPC_FUNC_IMPL(__imp__sub_82123D98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82123DA0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r11,28544
	ctx.r29.s64 = ctx.r11.s64 + 28544;
	// lis r11,34
	ctx.r11.s64 = 2228224;
	// ori r10,r11,37004
	ctx.r10.u64 = ctx.r11.u64 | 37004;
	// lwzx r11,r29,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82123df8
	if (!ctx.cr6.gt) goto loc_82123DF8;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r30,r11,4864
	ctx.r30.s64 = ctx.r11.s64 + 4864;
loc_82123DCC:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82188300
	ctx.lr = 0x82123DDC;
	sub_82188300(ctx, base);
	// lis r9,34
	ctx.r9.s64 = 2228224;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// ori r8,r9,37004
	ctx.r8.u64 = ctx.r9.u64 | 37004;
	// addi r30,r30,1104
	ctx.r30.s64 = ctx.r30.s64 + 1104;
	// lwzx r11,r29,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r8.u32);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82123dcc
	if (ctx.cr6.lt) goto loc_82123DCC;
loc_82123DF8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82123E00"))) PPC_WEAK_FUNC(sub_82123E00);
PPC_FUNC_IMPL(__imp__sub_82123E00) {
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
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
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
	// beq cr6,0x82123e5c
	if (ctx.cr6.eq) goto loc_82123E5C;
	// addis r10,r10,7
	ctx.r10.s64 = ctx.r10.s64 + 458752;
	// addi r5,r10,14520
	ctx.r5.s64 = ctx.r10.s64 + 14520;
	// lwzx r3,r11,r5
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82123e60
	if (ctx.cr6.eq) goto loc_82123E60;
loc_82123E5C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82123E60:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r5,0
	ctx.r5.s64 = 0;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// li r6,13
	ctx.r6.s64 = 13;
	// ori r5,r5,32769
	ctx.r5.u64 = ctx.r5.u64 | 32769;
	// addi r3,r11,2896
	ctx.r3.s64 = ctx.r11.s64 + 2896;
	// b 0x82361460
	sub_82361460(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82123E88"))) PPC_WEAK_FUNC(sub_82123E88);
PPC_FUNC_IMPL(__imp__sub_82123E88) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82123E8C"))) PPC_WEAK_FUNC(sub_82123E8C);
PPC_FUNC_IMPL(__imp__sub_82123E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82123E90"))) PPC_WEAK_FUNC(sub_82123E90);
PPC_FUNC_IMPL(__imp__sub_82123E90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82123E98;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r30,r11,26752
	ctx.r30.s64 = ctx.r11.s64 + 26752;
	// lis r11,3
	ctx.r11.s64 = 196608;
	// ori r10,r11,51969
	ctx.r10.u64 = ctx.r11.u64 | 51969;
	// lbzx r9,r30,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82123f24
	if (ctx.cr6.eq) goto loc_82123F24;
	// lwz r8,15328(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 15328);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82123f24
	if (!ctx.cr6.eq) goto loc_82123F24;
	// lwz r31,15724(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 15724);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222dbc8
	ctx.lr = 0x82123ED0;
	sub_8222DBC8(ctx, base);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// addi r29,r11,-6648
	ctx.r29.s64 = ctx.r11.s64 + -6648;
	// blt cr6,0x82123eec
	if (ctx.cr6.lt) goto loc_82123EEC;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820fe130
	ctx.lr = 0x82123EEC;
	sub_820FE130(ctx, base);
loc_82123EEC:
	// addi r4,r31,23108
	ctx.r4.s64 = ctx.r31.s64 + 23108;
	// addi r3,r30,8840
	ctx.r3.s64 = ctx.r30.s64 + 8840;
	// bl 0x8222c200
	ctx.lr = 0x82123EF8;
	sub_8222C200(ctx, base);
	// clrlwi r31,r3,16
	ctx.r31.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82123f10
	if (ctx.cr6.eq) goto loc_82123F10;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820fe130
	ctx.lr = 0x82123F10;
	sub_820FE130(ctx, base);
loc_82123F10:
	// cmplwi cr6,r31,101
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 101, ctx.xer);
	// blt cr6,0x82123f24
	if (ctx.cr6.lt) goto loc_82123F24;
	// li r4,22
	ctx.r4.s64 = 22;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820fe130
	ctx.lr = 0x82123F24;
	sub_820FE130(ctx, base);
loc_82123F24:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82123F2C"))) PPC_WEAK_FUNC(sub_82123F2C);
PPC_FUNC_IMPL(__imp__sub_82123F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82123F30"))) PPC_WEAK_FUNC(sub_82123F30);
PPC_FUNC_IMPL(__imp__sub_82123F30) {
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
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// extsb r7,r4
	ctx.r7.s64 = ctx.r4.s8;
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// add r6,r5,r3
	ctx.r6.u64 = ctx.r5.u64 + ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r5,75(r6)
	PPC_STORE_U8(ctx.r6.u32 + 75, ctx.r5.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82123F70"))) PPC_WEAK_FUNC(sub_82123F70);
PPC_FUNC_IMPL(__imp__sub_82123F70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x82123F78;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r11,34(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 34);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82124098
	if (!ctx.cr6.eq) goto loc_82124098;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r11,28544
	ctx.r30.s64 = ctx.r11.s64 + 28544;
	// addis r11,r30,35
	ctx.r11.s64 = ctx.r30.s64 + 2293760;
	// addi r9,r11,-28496
	ctx.r9.s64 = ctx.r11.s64 + -28496;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mulli r10,r11,19200
	ctx.r10.s64 = ctx.r11.s64 * 19200;
	// add r27,r10,r9
	ctx.r27.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lis r10,33
	ctx.r10.s64 = 2162688;
	// ori r9,r10,4416
	ctx.r9.u64 = ctx.r10.u64 | 4416;
	// lwzx r10,r30,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82123fdc
	if (!ctx.cr6.lt) goto loc_82123FDC;
	// lis r8,0
	ctx.r8.s64 = 0;
	// addis r10,r30,10
	ctx.r10.s64 = ctx.r30.s64 + 655360;
	// ori r7,r8,37344
	ctx.r7.u64 = ctx.r8.u64 | 37344;
	// addi r10,r10,-7344
	ctx.r10.s64 = ctx.r10.s64 + -7344;
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r26,r11,r10
	ctx.r26.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82123fe0
	goto loc_82123FE0;
loc_82123FDC:
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
loc_82123FE0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// li r28,1
	ctx.r28.s64 = 1;
	// addi r3,r27,13280
	ctx.r3.s64 = ctx.r27.s64 + 13280;
	// lfs f0,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stb r28,34(r31)
	PPC_STORE_U8(ctx.r31.u32 + 34, ctx.r28.u8);
	// stb r28,33(r31)
	PPC_STORE_U8(ctx.r31.u32 + 33, ctx.r28.u8);
	// bl 0x820acc20
	ctx.lr = 0x82124004;
	sub_820ACC20(ctx, base);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addis r10,r30,35
	ctx.r10.s64 = ctx.r30.s64 + 2293760;
	// stb r3,35(r31)
	PPC_STORE_U8(ctx.r31.u32 + 35, ctx.r3.u8);
	// addi r5,r31,20
	ctx.r5.s64 = ctx.r31.s64 + 20;
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
	// addi r4,r10,-13721
	ctx.r4.s64 = ctx.r10.s64 + -13721;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// lbz r9,15480(r6)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r6.u32 + 15480);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// mulli r10,r11,19200
	ctx.r10.s64 = ctx.r11.s64 * 19200;
	// stw r8,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
	// lbzx r10,r10,r4
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// mulli r11,r11,11920
	ctx.r11.s64 = ctx.r11.s64 * 11920;
	// stb r10,36(r31)
	PPC_STORE_U8(ctx.r31.u32 + 36, ctx.r10.u8);
	// lis r10,-32124
	ctx.r10.s64 = -2105278464;
	// addi r10,r10,26080
	ctx.r10.s64 = ctx.r10.s64 + 26080;
	// addis r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 196608;
	// addi r10,r10,-11424
	ctx.r10.s64 = ctx.r10.s64 + -11424;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// beq cr6,0x82124074
	if (ctx.cr6.eq) goto loc_82124074;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,12
	ctx.r4.s64 = 12;
	// lwz r11,12(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// b 0x82124084
	goto loc_82124084;
loc_82124074:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,9
	ctx.r4.s64 = 9;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82124084:
	// bctrl 
	ctx.lr = 0x82124088;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stb r28,18269(r27)
	PPC_STORE_U8(ctx.r27.u32 + 18269, ctx.r28.u8);
	// lbz r8,6336(r26)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r26.u32 + 6336);
	// ori r7,r8,56
	ctx.r7.u64 = ctx.r8.u64 | 56;
	// stb r7,6336(r26)
	PPC_STORE_U8(ctx.r26.u32 + 6336, ctx.r7.u8);
loc_82124098:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821240A0"))) PPC_WEAK_FUNC(sub_821240A0);
PPC_FUNC_IMPL(__imp__sub_821240A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x821240A8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r29,r11,28544
	ctx.r29.s64 = ctx.r11.s64 + 28544;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addis r10,r29,35
	ctx.r10.s64 = ctx.r29.s64 + 2293760;
	// mulli r11,r11,19200
	ctx.r11.s64 = ctx.r11.s64 * 19200;
	// addi r10,r10,-28496
	ctx.r10.s64 = ctx.r10.s64 + -28496;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r28,18269(r31)
	PPC_STORE_U8(ctx.r31.u32 + 18269, ctx.r28.u8);
	// bl 0x820ed7a0
	ctx.lr = 0x821240E0;
	sub_820ED7A0(ctx, base);
	// lbz r10,15480(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 15480);
	// addis r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 262144;
	// extsb r4,r10
	ctx.r4.s64 = ctx.r10.s8;
	// addi r3,r11,30560
	ctx.r3.s64 = ctx.r11.s64 + 30560;
	// bl 0x8223d0b0
	ctx.lr = 0x821240F4;
	sub_8223D0B0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8212410c
	if (ctx.cr6.eq) goto loc_8212410C;
	// lwz r9,6820(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6820);
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// bne cr6,0x8212410c
	if (!ctx.cr6.eq) goto loc_8212410C;
	// stw r28,6820(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6820, ctx.r28.u32);
loc_8212410C:
	// lbz r8,49(r29)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r29.u32 + 49);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82124124
	if (!ctx.cr6.eq) goto loc_82124124;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82363ce0
	ctx.lr = 0x82124124;
	sub_82363CE0(ctx, base);
loc_82124124:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stb r28,33(r30)
	PPC_STORE_U8(ctx.r30.u32 + 33, ctx.r28.u8);
	// li r7,-1
	ctx.r7.s64 = -1;
	// stb r28,34(r30)
	PPC_STORE_U8(ctx.r30.u32 + 34, ctx.r28.u8);
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// stw r28,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r28.u32);
	// stw r28,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r28.u32);
	// lfs f0,-12136(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12136);
	ctx.f0.f64 = double(temp.f32);
	// stw r28,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r28.u32);
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stw r7,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r7.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82124158"))) PPC_WEAK_FUNC(sub_82124158);
PPC_FUNC_IMPL(__imp__sub_82124158) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,34(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 34);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82124160"))) PPC_WEAK_FUNC(sub_82124160);
PPC_FUNC_IMPL(__imp__sub_82124160) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,33(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 33);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82124168"))) PPC_WEAK_FUNC(sub_82124168);
PPC_FUNC_IMPL(__imp__sub_82124168) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,37(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 37);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821241c0
	if (ctx.cr6.eq) goto loc_821241C0;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r10,3
	ctx.r10.s64 = 196608;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// ori r9,r10,51969
	ctx.r9.u64 = ctx.r10.u64 | 51969;
	// lbzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x821241c0
	if (!ctx.cr6.eq) goto loc_821241C0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821241c0
	if (ctx.cr6.eq) goto loc_821241C0;
	// lbz r7,15219(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 15219);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x821241c0
	if (ctx.cr6.eq) goto loc_821241C0;
	// lbz r6,34(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 34);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x821241c0
	if (!ctx.cr6.eq) goto loc_821241C0;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_821241C0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821241C8"))) PPC_WEAK_FUNC(sub_821241C8);
PPC_FUNC_IMPL(__imp__sub_821241C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae4
	ctx.lr = 0x821241D0;
	__savegprlr_23(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,26080
	ctx.r30.s64 = ctx.r11.s64 + 26080;
	// lis r11,7
	ctx.r11.s64 = 458752;
	// ori r10,r11,16216
	ctx.r10.u64 = ctx.r11.u64 | 16216;
	// lwzx r11,r30,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,432(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 432);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82124204;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r29,3
	ctx.r29.s64 = 3;
	// lbz r7,34(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 34);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// beq cr6,0x82124564
	if (ctx.cr6.eq) goto loc_82124564;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lis r6,4
	ctx.r6.s64 = 262144;
	// addi r28,r11,28544
	ctx.r28.s64 = ctx.r11.s64 + 28544;
	// ori r5,r6,30438
	ctx.r5.u64 = ctx.r6.u64 | 30438;
	// lbzx r4,r28,r5
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r5.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82124564
	if (!ctx.cr6.eq) goto loc_82124564;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8210b3c8
	ctx.lr = 0x82124240;
	sub_8210B3C8(ctx, base);
	// addis r10,r28,35
	ctx.r10.s64 = ctx.r28.s64 + 2293760;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lis r3,33
	ctx.r3.s64 = 2162688;
	// addi r9,r10,-28496
	ctx.r9.s64 = ctx.r10.s64 + -28496;
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// mulli r10,r11,19200
	ctx.r10.s64 = ctx.r11.s64 * 19200;
	// fadds f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// stfs f13,12(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// add r23,r10,r9
	ctx.r23.u64 = ctx.r10.u64 + ctx.r9.u64;
	// ori r10,r3,4416
	ctx.r10.u64 = ctx.r3.u64 | 4416;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwzx r10,r28,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82124294
	if (!ctx.cr6.lt) goto loc_82124294;
	// lis r9,0
	ctx.r9.s64 = 0;
	// addis r10,r28,10
	ctx.r10.s64 = ctx.r28.s64 + 655360;
	// ori r8,r9,37344
	ctx.r8.u64 = ctx.r9.u64 | 37344;
	// addi r10,r10,-7344
	ctx.r10.s64 = ctx.r10.s64 + -7344;
	// mullw r11,r11,r8
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// add r25,r11,r10
	ctx.r25.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82124298
	goto loc_82124298;
loc_82124294:
	// mr r25,r27
	ctx.r25.u64 = ctx.r27.u64;
loc_82124298:
	// lwz r7,13520(r23)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r23.u32 + 13520);
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// beq cr6,0x82124338
	if (ctx.cr6.eq) goto loc_82124338;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r26,1
	ctx.r26.s64 = 1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x821243dc
	if (ctx.cr6.lt) goto loc_821243DC;
	// beq cr6,0x8212434c
	if (ctx.cr6.eq) goto loc_8212434C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x821244b4
	if (!ctx.cr6.lt) goto loc_821244B4;
	// lbz r6,36(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 36);
	// stw r26,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r26.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// stb r27,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r27.u8);
	// beq cr6,0x821242e4
	if (ctx.cr6.eq) goto loc_821242E4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,30884
	ctx.r11.s64 = ctx.r11.s64 + 30884;
	// lfs f31,64(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f31.f64 = double(temp.f32);
	// b 0x8212432c
	goto loc_8212432C;
loc_821242E4:
	// lis r5,7
	ctx.r5.s64 = 458752;
	// ori r4,r5,16274
	ctx.r4.u64 = ctx.r5.u64 | 16274;
	// lbzx r3,r30,r4
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r4.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82124324
	if (ctx.cr6.eq) goto loc_82124324;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,30884
	ctx.r11.s64 = ctx.r11.s64 + 30884;
	// lfs f31,76(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x821041a8
	ctx.lr = 0x8212430C;
	sub_821041A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8212432c
	if (ctx.cr6.eq) goto loc_8212432C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,2872(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2872);
	ctx.f31.f64 = double(temp.f32);
	// b 0x8212432c
	goto loc_8212432C;
loc_82124324:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f31,-31644(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -31644);
	ctx.f31.f64 = double(temp.f32);
loc_8212432C:
	// lfs f12,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f31
	ctx.cr6.compare(ctx.f12.f64, ctx.f31.f64);
	// ble cr6,0x821244b4
	if (!ctx.cr6.gt) goto loc_821244B4;
loc_82124338:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821240a0
	ctx.lr = 0x82124340;
	sub_821240A0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x8259bb34
	__restgprlr_23(ctx, base);
	return;
loc_8212434C:
	// lbz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 36);
	// stw r26,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r26.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stb r26,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r26.u8);
	// beq cr6,0x82124370
	if (ctx.cr6.eq) goto loc_82124370;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,30884
	ctx.r11.s64 = ctx.r11.s64 + 30884;
	// lfs f31,36(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f31.f64 = double(temp.f32);
	// b 0x821243b4
	goto loc_821243B4;
loc_82124370:
	// lis r9,7
	ctx.r9.s64 = 458752;
	// ori r8,r9,16274
	ctx.r8.u64 = ctx.r9.u64 | 16274;
	// lbzx r7,r30,r8
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r8.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x821243ac
	if (ctx.cr6.eq) goto loc_821243AC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f31,2868(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x821041a8
	ctx.lr = 0x82124394;
	sub_821041A8(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x821243b4
	if (ctx.cr6.eq) goto loc_821243B4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f31,6152(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6152);
	ctx.f31.f64 = double(temp.f32);
	// b 0x821243b4
	goto loc_821243B4;
loc_821243AC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f31,-31648(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -31648);
	ctx.f31.f64 = double(temp.f32);
loc_821243B4:
	// lfs f11,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f11,f31
	ctx.cr6.compare(ctx.f11.f64, ctx.f31.f64);
	// ble cr6,0x821244b4
	if (!ctx.cr6.gt) goto loc_821244B4;
	// lwz r5,6820(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 6820);
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// bne cr6,0x821243d0
	if (!ctx.cr6.eq) goto loc_821243D0;
	// stw r27,6820(r25)
	PPC_STORE_U32(ctx.r25.u32 + 6820, ctx.r27.u32);
loc_821243D0:
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r4,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r4.u32);
	// b 0x821244b4
	goto loc_821244B4;
loc_821243DC:
	// lbz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 36);
	// stb r26,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r26.u8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// beq cr6,0x82124400
	if (ctx.cr6.eq) goto loc_82124400;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,30884
	ctx.r11.s64 = ctx.r11.s64 + 30884;
	// lfs f31,76(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	ctx.f31.f64 = double(temp.f32);
	// b 0x82124444
	goto loc_82124444;
loc_82124400:
	// lis r11,7
	ctx.r11.s64 = 458752;
	// ori r10,r11,16274
	ctx.r10.u64 = ctx.r11.u64 | 16274;
	// lbzx r9,r30,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8212443c
	if (ctx.cr6.eq) goto loc_8212443C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f31,30884(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 30884);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x821041a8
	ctx.lr = 0x82124424;
	sub_821041A8(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82124444
	if (ctx.cr6.eq) goto loc_82124444;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f31,3260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3260);
	ctx.f31.f64 = double(temp.f32);
	// b 0x82124444
	goto loc_82124444;
loc_8212443C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f31,25512(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25512);
	ctx.f31.f64 = double(temp.f32);
loc_82124444:
	// lfs f10,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f10,f31
	ctx.cr6.compare(ctx.f10.f64, ctx.f31.f64);
	// ble cr6,0x821244b4
	if (!ctx.cr6.gt) goto loc_821244B4;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82124488
	if (ctx.cr6.eq) goto loc_82124488;
	// lwz r5,14432(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 14432);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82124488
	if (ctx.cr6.eq) goto loc_82124488;
	// lis r7,7
	ctx.r7.s64 = 458752;
	// ori r6,r7,16216
	ctx.r6.u64 = ctx.r7.u64 | 16216;
	// lwzx r11,r30,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r6.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82124488;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82124488:
	// stw r26,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r26.u32);
	// lbz r9,599(r25)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r25.u32 + 599);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821244b0
	if (ctx.cr6.eq) goto loc_821244B0;
	// addis r11,r28,4
	ctx.r11.s64 = ctx.r28.s64 + 262144;
	// lbz r4,627(r25)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r25.u32 + 627);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,28824
	ctx.r3.s64 = ctx.r11.s64 + 28824;
	// bl 0x8228abb8
	ctx.lr = 0x821244B0;
	sub_8228ABB8(ctx, base);
loc_821244B0:
	// stb r27,33(r31)
	PPC_STORE_U8(ctx.r31.u32 + 33, ctx.r27.u8);
loc_821244B4:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lbz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 32);
	// bl 0x820ed7a0
	ctx.lr = 0x821244C0;
	sub_820ED7A0(ctx, base);
	// lbz r8,52(r24)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r24.u32 + 52);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82124538
	if (ctx.cr6.eq) goto loc_82124538;
	// lbz r7,56(r24)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r24.u32 + 56);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x821244f4
	if (!ctx.cr6.eq) goto loc_821244F4;
	// lbz r6,49(r28)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r28.u32 + 49);
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82124538
	if (!ctx.cr6.eq) goto loc_82124538;
	// lbz r5,48(r28)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r28.u32 + 48);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// b 0x82124524
	goto loc_82124524;
loc_821244F4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82124538
	if (ctx.cr6.eq) goto loc_82124538;
	// lwz r4,15328(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15328);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x82124538
	if (!ctx.cr6.eq) goto loc_82124538;
	// lbz r3,49(r28)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r28.u32 + 49);
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82124538
	if (!ctx.cr6.eq) goto loc_82124538;
	// lbz r11,48(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
loc_82124524:
	// bne cr6,0x82124530
	if (!ctx.cr6.eq) goto loc_82124530;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x82124538
	if (!ctx.cr6.eq) goto loc_82124538;
loc_82124530:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82363ce0
	ctx.lr = 0x82124538;
	sub_82363CE0(ctx, base);
loc_82124538:
	// lbz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82124554
	if (ctx.cr6.eq) goto loc_82124554;
	// lbz r9,35(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 35);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82124554
	if (ctx.cr6.eq) goto loc_82124554;
	// stb r26,18195(r23)
	PPC_STORE_U8(ctx.r23.u32 + 18195, ctx.r26.u8);
loc_82124554:
	// stb r26,18269(r23)
	PPC_STORE_U8(ctx.r23.u32 + 18269, ctx.r26.u8);
	// lbz r8,6336(r25)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r25.u32 + 6336);
	// ori r7,r8,56
	ctx.r7.u64 = ctx.r8.u64 | 56;
	// stb r7,6336(r25)
	PPC_STORE_U8(ctx.r25.u32 + 6336, ctx.r7.u8);
loc_82124564:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x8259bb34
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82124570"))) PPC_WEAK_FUNC(sub_82124570);
PPC_FUNC_IMPL(__imp__sub_82124570) {
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
	// lwz r11,644(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 644);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821245a4
	if (ctx.cr6.eq) goto loc_821245A4;
	// cmpwi cr6,r11,28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 28, ctx.xer);
	// beq cr6,0x821245bc
	if (ctx.cr6.eq) goto loc_821245BC;
	// cmpwi cr6,r11,56
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 56, ctx.xer);
	// bne cr6,0x821247e4
	if (!ctx.cr6.eq) goto loc_821247E4;
loc_821245A4:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,28
	ctx.r10.s64 = 28;
	// stb r11,589(r30)
	PPC_STORE_U8(ctx.r30.u32 + 589, ctx.r11.u8);
	// stb r11,590(r30)
	PPC_STORE_U8(ctx.r30.u32 + 590, ctx.r11.u8);
	// stb r11,588(r30)
	PPC_STORE_U8(ctx.r30.u32 + 588, ctx.r11.u8);
	// stw r10,644(r30)
	PPC_STORE_U32(ctx.r30.u32 + 644, ctx.r10.u32);
loc_821245BC:
	// addi r31,r30,10
	ctx.r31.s64 = ctx.r30.s64 + 10;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,287
	ctx.r3.s64 = 287;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821896e8
	ctx.lr = 0x821245D0;
	sub_821896E8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,289
	ctx.r3.s64 = 289;
	// bl 0x821896e8
	ctx.lr = 0x821245E0;
	sub_821896E8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,291
	ctx.r3.s64 = 291;
	// bl 0x821896e8
	ctx.lr = 0x821245F0;
	sub_821896E8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,292
	ctx.r3.s64 = 292;
	// bl 0x821896e8
	ctx.lr = 0x82124600;
	sub_821896E8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,285
	ctx.r3.s64 = 285;
	// bl 0x821896e8
	ctx.lr = 0x82124610;
	sub_821896E8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,286
	ctx.r3.s64 = 286;
	// bl 0x821896e8
	ctx.lr = 0x82124620;
	sub_821896E8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,288
	ctx.r3.s64 = 288;
	// bl 0x821896e8
	ctx.lr = 0x82124630;
	sub_821896E8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,290
	ctx.r3.s64 = 290;
	// bl 0x821896e8
	ctx.lr = 0x82124640;
	sub_821896E8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,280
	ctx.r3.s64 = 280;
	// bl 0x821896e8
	ctx.lr = 0x82124650;
	sub_821896E8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,281
	ctx.r3.s64 = 281;
	// bl 0x821896e8
	ctx.lr = 0x82124660;
	sub_821896E8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,282
	ctx.r3.s64 = 282;
	// bl 0x821896e8
	ctx.lr = 0x82124670;
	sub_821896E8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,283
	ctx.r3.s64 = 283;
	// bl 0x821896e8
	ctx.lr = 0x82124680;
	sub_821896E8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,284
	ctx.r3.s64 = 284;
	// bl 0x821896e8
	ctx.lr = 0x82124690;
	sub_821896E8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,278
	ctx.r3.s64 = 278;
	// bl 0x821896e8
	ctx.lr = 0x821246A0;
	sub_821896E8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,276
	ctx.r3.s64 = 276;
	// bl 0x821896e8
	ctx.lr = 0x821246B0;
	sub_821896E8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,279
	ctx.r3.s64 = 279;
	// bl 0x821896e8
	ctx.lr = 0x821246C0;
	sub_821896E8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,277
	ctx.r3.s64 = 277;
	// bl 0x821896e8
	ctx.lr = 0x821246D0;
	sub_821896E8(ctx, base);
	// addi r31,r30,266
	ctx.r31.s64 = ctx.r30.s64 + 266;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r3,287
	ctx.r3.s64 = 287;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821896e8
	ctx.lr = 0x821246E4;
	sub_821896E8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,289
	ctx.r3.s64 = 289;
	// bl 0x821896e8
	ctx.lr = 0x821246F4;
	sub_821896E8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,291
	ctx.r3.s64 = 291;
	// bl 0x821896e8
	ctx.lr = 0x82124704;
	sub_821896E8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,292
	ctx.r3.s64 = 292;
	// bl 0x821896e8
	ctx.lr = 0x82124714;
	sub_821896E8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,285
	ctx.r3.s64 = 285;
	// bl 0x821896e8
	ctx.lr = 0x82124724;
	sub_821896E8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,286
	ctx.r3.s64 = 286;
	// bl 0x821896e8
	ctx.lr = 0x82124734;
	sub_821896E8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,288
	ctx.r3.s64 = 288;
	// bl 0x821896e8
	ctx.lr = 0x82124744;
	sub_821896E8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,290
	ctx.r3.s64 = 290;
	// bl 0x821896e8
	ctx.lr = 0x82124754;
	sub_821896E8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,280
	ctx.r3.s64 = 280;
	// bl 0x821896e8
	ctx.lr = 0x82124764;
	sub_821896E8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,281
	ctx.r3.s64 = 281;
	// bl 0x821896e8
	ctx.lr = 0x82124774;
	sub_821896E8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,282
	ctx.r3.s64 = 282;
	// bl 0x821896e8
	ctx.lr = 0x82124784;
	sub_821896E8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,283
	ctx.r3.s64 = 283;
	// bl 0x821896e8
	ctx.lr = 0x82124794;
	sub_821896E8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,284
	ctx.r3.s64 = 284;
	// bl 0x821896e8
	ctx.lr = 0x821247A4;
	sub_821896E8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,278
	ctx.r3.s64 = 278;
	// bl 0x821896e8
	ctx.lr = 0x821247B4;
	sub_821896E8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,276
	ctx.r3.s64 = 276;
	// bl 0x821896e8
	ctx.lr = 0x821247C4;
	sub_821896E8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,279
	ctx.r3.s64 = 279;
	// bl 0x821896e8
	ctx.lr = 0x821247D4;
	sub_821896E8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,277
	ctx.r3.s64 = 277;
	// bl 0x821896e8
	ctx.lr = 0x821247E4;
	sub_821896E8(ctx, base);
loc_821247E4:
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

__attribute__((alias("__imp__sub_821247FC"))) PPC_WEAK_FUNC(sub_821247FC);
PPC_FUNC_IMPL(__imp__sub_821247FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82124800"))) PPC_WEAK_FUNC(sub_82124800);
PPC_FUNC_IMPL(__imp__sub_82124800) {
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
	// lis r8,2
	ctx.r8.s64 = 131072;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r31,r11,26080
	ctx.r31.s64 = ctx.r11.s64 + 26080;
	// ori r7,r8,54112
	ctx.r7.u64 = ctx.r8.u64 | 54112;
	// addis r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 196608;
	// stb r10,589(r3)
	PPC_STORE_U8(ctx.r3.u32 + 589, ctx.r10.u8);
	// addi r5,r3,592
	ctx.r5.s64 = ctx.r3.s64 + 592;
	// stb r9,590(r3)
	PPC_STORE_U8(ctx.r3.u32 + 590, ctx.r9.u8);
	// addi r3,r11,-11424
	ctx.r3.s64 = ctx.r11.s64 + -11424;
	// li r4,47
	ctx.r4.s64 = 47;
	// lwzx r11,r31,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82124854;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// addi r30,r11,4864
	ctx.r30.s64 = ctx.r11.s64 + 4864;
	// li r11,1
	ctx.r11.s64 = 1;
	// ori r9,r10,16293
	ctx.r9.u64 = ctx.r10.u64 | 16293;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stbx r11,r31,r9
	PPC_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u8);
	// bl 0x82188300
	ctx.lr = 0x8212487C;
	sub_82188300(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82188578
	ctx.lr = 0x82124884;
	sub_82188578(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82197528
	ctx.lr = 0x8212488C;
	sub_82197528(ctx, base);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lis r8,33
	ctx.r8.s64 = 2162688;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r7,r8,8456
	ctx.r7.u64 = ctx.r8.u64 | 8456;
	// stwx r10,r11,r7
	PPC_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_821248BC"))) PPC_WEAK_FUNC(sub_821248BC);
PPC_FUNC_IMPL(__imp__sub_821248BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821248C0"))) PPC_WEAK_FUNC(sub_821248C0);
PPC_FUNC_IMPL(__imp__sub_821248C0) {
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
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,4864
	ctx.r3.s64 = ctx.r11.s64 + 4864;
	// bl 0x821939a0
	ctx.lr = 0x821248E0;
	sub_821939A0(ctx, base);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r31,r11,26080
	ctx.r31.s64 = ctx.r11.s64 + 26080;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// li r4,10
	ctx.r4.s64 = 10;
	// ori r10,r11,54112
	ctx.r10.u64 = ctx.r11.u64 | 54112;
	// lwzx r11,r31,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addis r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 196608;
	// addi r3,r11,-11424
	ctx.r3.s64 = ctx.r11.s64 + -11424;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82124910;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r8,7
	ctx.r8.s64 = 458752;
	// ori r7,r8,16216
	ctx.r7.u64 = ctx.r8.u64 | 16216;
	// lwzx r11,r31,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,332(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 332);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82124930;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lis r4,33
	ctx.r4.s64 = 2162688;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// ori r10,r4,8456
	ctx.r10.u64 = ctx.r4.u64 | 8456;
	// stwx r3,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_82124958"))) PPC_WEAK_FUNC(sub_82124958);
PPC_FUNC_IMPL(__imp__sub_82124958) {
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
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// addi r3,r11,28544
	ctx.r3.s64 = ctx.r11.s64 + 28544;
	// bl 0x8232da90
	ctx.lr = 0x82124970;
	sub_8232DA90(ctx, base);
	// lwz r11,15332(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15332);
	// lwz r11,1136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1136);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82124990
	if (ctx.cr6.eq) goto loc_82124990;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x821249b0
	if (!ctx.cr6.eq) goto loc_821249B0;
	// li r4,97
	ctx.r4.s64 = 97;
	// b 0x82124994
	goto loc_82124994;
loc_82124990:
	// li r4,96
	ctx.r4.s64 = 96;
loc_82124994:
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r11,-18560
	ctx.r11.s64 = ctx.r11.s64 + -18560;
	// addis r11,r11,9
	ctx.r11.s64 = ctx.r11.s64 + 589824;
	// addi r3,r11,-19376
	ctx.r3.s64 = ctx.r11.s64 + -19376;
	// lfs f1,30896(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 30896);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822c5960
	ctx.lr = 0x821249B0;
	sub_822C5960(ctx, base);
loc_821249B0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821249C0"))) PPC_WEAK_FUNC(sub_821249C0);
PPC_FUNC_IMPL(__imp__sub_821249C0) {
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
	// lbz r11,588(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 588);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821249ec
	if (!ctx.cr6.eq) goto loc_821249EC;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r3,r11,4864
	ctx.r3.s64 = ctx.r11.s64 + 4864;
	// bl 0x82188578
	ctx.lr = 0x821249E4;
	sub_82188578(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82197528
	ctx.lr = 0x821249EC;
	sub_82197528(ctx, base);
loc_821249EC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821249FC"))) PPC_WEAK_FUNC(sub_821249FC);
PPC_FUNC_IMPL(__imp__sub_821249FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82124A00"))) PPC_WEAK_FUNC(sub_82124A00);
PPC_FUNC_IMPL(__imp__sub_82124A00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x82124A08;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r11,588(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 588);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82124b74
	if (!ctx.cr6.eq) goto loc_82124B74;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r30,r31,556
	ctx.r30.s64 = ctx.r31.s64 + 556;
	// addi r29,r11,26752
	ctx.r29.s64 = ctx.r11.s64 + 26752;
	// addi r6,r31,266
	ctx.r6.s64 = ctx.r31.s64 + 266;
	// addi r5,r31,10
	ctx.r5.s64 = ctx.r31.s64 + 10;
	// addi r3,r29,8840
	ctx.r3.s64 = ctx.r29.s64 + 8840;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8222c480
	ctx.lr = 0x82124A40;
	sub_8222C480(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,572(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// bl 0x82124958
	ctx.lr = 0x82124A4C;
	sub_82124958(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,568(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	// addi r28,r11,4864
	ctx.r28.s64 = ctx.r11.s64 + 4864;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// lfs f1,30956(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 30956);
	ctx.f1.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8219c750
	ctx.lr = 0x82124A88;
	sub_8219C750(ctx, base);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// addi r3,r29,8840
	ctx.r3.s64 = ctx.r29.s64 + 8840;
	// lwz r4,560(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 560);
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// lfs f31,36(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x82222cd8
	ctx.lr = 0x82124AA0;
	sub_82222CD8(ctx, base);
	// lis r11,-32110
	ctx.r11.s64 = -2104360960;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,12656
	ctx.r3.s64 = ctx.r11.s64 + 12656;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82173a78
	ctx.lr = 0x82124AB8;
	sub_82173A78(ctx, base);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// addi r10,r11,-2944
	ctx.r10.s64 = ctx.r11.s64 + -2944;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r3,r10,992
	ctx.r3.s64 = ctx.r10.s64 + 992;
	// addi r11,r11,-26064
	ctx.r11.s64 = ctx.r11.s64 + -26064;
	// lfs f0,36(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 112, temp.u32);
	// lfs f0,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,108(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 108, temp.u32);
	// lfs f0,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,116(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 116, temp.u32);
	// lfs f0,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,120(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 120, temp.u32);
	// bl 0x8215b018
	ctx.lr = 0x82124AF0;
	sub_8215B018(ctx, base);
	// lis r11,-32134
	ctx.r11.s64 = -2105933824;
	// addi r3,r11,32208
	ctx.r3.s64 = ctx.r11.s64 + 32208;
	// bl 0x820b4b78
	ctx.lr = 0x82124AFC;
	sub_820B4B78(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82188578
	ctx.lr = 0x82124B04;
	sub_82188578(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82124b68
	if (ctx.cr6.eq) goto loc_82124B68;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x822237e0
	ctx.lr = 0x82124B20;
	sub_822237E0(ctx, base);
	// addi r31,r31,612
	ctx.r31.s64 = ctx.r31.s64 + 612;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82361d08
	ctx.lr = 0x82124B34;
	sub_82361D08(ctx, base);
	// li r5,38
	ctx.r5.s64 = 38;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82197578
	ctx.lr = 0x82124B44;
	sub_82197578(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82197528
	ctx.lr = 0x82124B50;
	sub_82197528(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82191150
	ctx.lr = 0x82124B5C;
	sub_82191150(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_82124B68:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82197528
	ctx.lr = 0x82124B74;
	sub_82197528(ctx, base);
loc_82124B74:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82124B80"))) PPC_WEAK_FUNC(sub_82124B80);
PPC_FUNC_IMPL(__imp__sub_82124B80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82124B88;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,4864
	ctx.r30.s64 = ctx.r11.s64 + 4864;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82188300
	ctx.lr = 0x82124BA8;
	sub_82188300(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82188578
	ctx.lr = 0x82124BB0;
	sub_82188578(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821939a0
	ctx.lr = 0x82124BC0;
	sub_821939A0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82197528
	ctx.lr = 0x82124BCC;
	sub_82197528(ctx, base);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r8,7
	ctx.r8.s64 = 458752;
	// lis r6,7
	ctx.r6.s64 = 458752;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r7,r8,16294
	ctx.r7.u64 = ctx.r8.u64 | 16294;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r5,r6,16216
	ctx.r5.u64 = ctx.r6.u64 | 16216;
	// stbx r10,r11,r7
	PPC_STORE_U8(ctx.r11.u32 + ctx.r7.u32, ctx.r10.u8);
	// stb r10,590(r31)
	PPC_STORE_U8(ctx.r31.u32 + 590, ctx.r10.u8);
	// stb r9,589(r31)
	PPC_STORE_U8(ctx.r31.u32 + 589, ctx.r9.u8);
	// stb r9,588(r31)
	PPC_STORE_U8(ctx.r31.u32 + 588, ctx.r9.u8);
	// lwzx r11,r11,r5
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,332(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 332);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82124C14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lis r10,33
	ctx.r10.s64 = 2162688;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// ori r9,r10,8456
	ctx.r9.u64 = ctx.r10.u64 | 8456;
	// stwx r3,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82124C30"))) PPC_WEAK_FUNC(sub_82124C30);
PPC_FUNC_IMPL(__imp__sub_82124C30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f11,32(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,-12136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12136);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// bne cr6,0x82124c4c
	if (!ctx.cr6.eq) goto loc_82124C4C;
loc_82124C44:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82124C4C:
	// lfs f12,32(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bne cr6,0x82124c60
	if (!ctx.cr6.eq) goto loc_82124C60;
loc_82124C58:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82124C60:
	// lbz r11,296(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 296);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82124c80
	if (!ctx.cr6.eq) goto loc_82124C80;
	// lbz r10,296(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 296);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82124c44
	if (!ctx.cr6.eq) goto loc_82124C44;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82124cb8
	if (ctx.cr6.eq) goto loc_82124CB8;
loc_82124C80:
	// lbz r9,296(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 296);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82124c58
	if (ctx.cr6.eq) goto loc_82124C58;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82124cb8
	if (ctx.cr6.eq) goto loc_82124CB8;
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82124cb8
	if (ctx.cr6.eq) goto loc_82124CB8;
	// lfs f0,36(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82124c44
	if (ctx.cr6.lt) goto loc_82124C44;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82124c58
	if (ctx.cr6.gt) goto loc_82124C58;
loc_82124CB8:
	// fcmpu cr6,f12,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// blt cr6,0x82124c44
	if (ctx.cr6.lt) goto loc_82124C44;
	// fcmpu cr6,f11,f12
	ctx.cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// li r3,1
	ctx.r3.s64 = 1;
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82124CD4"))) PPC_WEAK_FUNC(sub_82124CD4);
PPC_FUNC_IMPL(__imp__sub_82124CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82124CD8"))) PPC_WEAK_FUNC(sub_82124CD8);
PPC_FUNC_IMPL(__imp__sub_82124CD8) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82121a58
	ctx.lr = 0x82124CF8;
	sub_82121A58(ctx, base);
	// lbz r11,624(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 624);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82124d0c
	if (!ctx.cr6.eq) goto loc_82124D0C;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,3053(r30)
	PPC_STORE_U8(ctx.r30.u32 + 3053, ctx.r10.u8);
loc_82124D0C:
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

__attribute__((alias("__imp__sub_82124D24"))) PPC_WEAK_FUNC(sub_82124D24);
PPC_FUNC_IMPL(__imp__sub_82124D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82124D28"))) PPC_WEAK_FUNC(sub_82124D28);
PPC_FUNC_IMPL(__imp__sub_82124D28) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,2992(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2992);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x82124e28
	if (ctx.cr6.eq) goto loc_82124E28;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x82124dc4
	if (ctx.cr6.eq) goto loc_82124DC4;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x82124e48
	if (!ctx.cr6.eq) goto loc_82124E48;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r3,r11,26752
	ctx.r3.s64 = ctx.r11.s64 + 26752;
	// bl 0x8221c328
	ctx.lr = 0x82124D64;
	sub_8221C328(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// lfs f0,128(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,212(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 212, temp.u32);
	// beq cr6,0x82124da4
	if (ctx.cr6.eq) goto loc_82124DA4;
	// bl 0x82360f70
	ctx.lr = 0x82124D88;
	sub_82360F70(ctx, base);
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r10,2992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2992, ctx.r10.u32);
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
loc_82124DA4:
	// bl 0x82360f70
	ctx.lr = 0x82124DA8;
	sub_82360F70(ctx, base);
	// li r9,6
	ctx.r9.s64 = 6;
	// stw r9,2992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2992, ctx.r9.u32);
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
loc_82124DC4:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r3,r11,26752
	ctx.r3.s64 = ctx.r11.s64 + 26752;
	// bl 0x8221c328
	ctx.lr = 0x82124DD0;
	sub_8221C328(ctx, base);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f0,128(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,212(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 212, temp.u32);
	// beq cr6,0x82124e10
	if (ctx.cr6.eq) goto loc_82124E10;
	// bl 0x82360f70
	ctx.lr = 0x82124DF4;
	sub_82360F70(ctx, base);
	// li r7,5
	ctx.r7.s64 = 5;
	// stw r7,2992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2992, ctx.r7.u32);
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
loc_82124E10:
	// bl 0x82360f70
	ctx.lr = 0x82124E14;
	sub_82360F70(ctx, base);
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
loc_82124E28:
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// lfs f0,128(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,212(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 212, temp.u32);
	// bl 0x82360f70
	ctx.lr = 0x82124E40;
	sub_82360F70(ctx, base);
	// li r6,6
	ctx.r6.s64 = 6;
	// stw r6,2992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2992, ctx.r6.u32);
loc_82124E48:
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

__attribute__((alias("__imp__sub_82124E5C"))) PPC_WEAK_FUNC(sub_82124E5C);
PPC_FUNC_IMPL(__imp__sub_82124E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82124E60"))) PPC_WEAK_FUNC(sub_82124E60);
PPC_FUNC_IMPL(__imp__sub_82124E60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x82124E68;
	__savegprlr_27(ctx, base);
	// stwu r1,-1952(r1)
	ea = -1952 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// ori r9,r10,16216
	ctx.r9.u64 = ctx.r10.u64 | 16216;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r31,56(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// blt cr6,0x82124f6c
	if (ctx.cr6.lt) goto loc_82124F6C;
	// addi r5,r31,-3
	ctx.r5.s64 = ctx.r31.s64 + -3;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,2
	ctx.r7.s64 = 2;
	// addi r11,r1,100
	ctx.r11.s64 = ctx.r1.s64 + 100;
loc_82124EB4:
	// lwz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// addi r3,r7,-1
	ctx.r3.s64 = ctx.r7.s64 + -1;
	// mulli r6,r6,328
	ctx.r6.s64 = ctx.r6.s64 * 328;
	// add r6,r6,r8
	ctx.r6.u64 = ctx.r6.u64 + ctx.r8.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// addi r27,r7,1
	ctx.r27.s64 = ctx.r7.s64 + 1;
	// add r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 + ctx.r10.u64;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// lfs f0,10588(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 10588);
	ctx.f0.f64 = double(temp.f32);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lbz r6,10672(r6)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r6.u32 + 10672);
	// stb r6,276(r11)
	PPC_STORE_U8(ctx.r11.u32 + 276, ctx.r6.u8);
	// lwz r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mulli r6,r4,328
	ctx.r6.s64 = ctx.r4.s64 * 328;
	// add r6,r6,r8
	ctx.r6.u64 = ctx.r6.u64 + ctx.r8.u64;
	// add r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 + ctx.r10.u64;
	// lfs f13,16544(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 16544);
	ctx.f13.f64 = double(temp.f32);
	// stw r3,304(r11)
	PPC_STORE_U32(ctx.r11.u32 + 304, ctx.r3.u32);
	// stfs f13,316(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 316, temp.u32);
	// lbz r3,16628(r6)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r6.u32 + 16628);
	// stb r3,580(r11)
	PPC_STORE_U8(ctx.r11.u32 + 580, ctx.r3.u8);
	// lwz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mulli r6,r6,328
	ctx.r6.s64 = ctx.r6.s64 * 328;
	// add r6,r6,r8
	ctx.r6.u64 = ctx.r6.u64 + ctx.r8.u64;
	// add r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 + ctx.r10.u64;
	// lfs f12,22500(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 22500);
	ctx.f12.f64 = double(temp.f32);
	// stw r28,608(r11)
	PPC_STORE_U32(ctx.r11.u32 + 608, ctx.r28.u32);
	// stfs f12,620(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 620, temp.u32);
	// lbz r4,22584(r6)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r6.u32 + 22584);
	// stb r4,884(r11)
	PPC_STORE_U8(ctx.r11.u32 + 884, ctx.r4.u8);
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mulli r6,r3,328
	ctx.r6.s64 = ctx.r3.s64 * 328;
	// add r6,r6,r8
	ctx.r6.u64 = ctx.r6.u64 + ctx.r8.u64;
	// addi r8,r8,23824
	ctx.r8.s64 = ctx.r8.s64 + 23824;
	// add r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 + ctx.r10.u64;
	// lfs f11,28456(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 28456);
	ctx.f11.f64 = double(temp.f32);
	// stw r27,912(r11)
	PPC_STORE_U32(ctx.r11.u32 + 912, ctx.r27.u32);
	// stfs f11,924(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 924, temp.u32);
	// lbz r6,28540(r6)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r6.u32 + 28540);
	// stb r6,1188(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1188, ctx.r6.u8);
	// addi r11,r11,1216
	ctx.r11.s64 = ctx.r11.s64 + 1216;
	// blt cr6,0x82124eb4
	if (ctx.cr6.lt) goto loc_82124EB4;
loc_82124F6C:
	// cmpw cr6,r9,r31
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r31.s32, ctx.xer);
	// bge cr6,0x82124fc0
	if (!ctx.cr6.lt) goto loc_82124FC0;
	// mulli r11,r9,304
	ctx.r11.s64 = ctx.r9.s64 * 304;
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// mulli r8,r9,5956
	ctx.r8.s64 = ctx.r9.s64 * 5956;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
loc_82124F84:
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mulli r7,r5,328
	ctx.r7.s64 = ctx.r5.s64 * 328;
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// addi r8,r8,5956
	ctx.r8.s64 = ctx.r8.s64 + 5956;
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// cmpw cr6,r9,r31
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r31.s32, ctx.xer);
	// lfs f10,10588(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 10588);
	ctx.f10.f64 = double(temp.f32);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stfs f10,12(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lbz r3,10672(r7)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r7.u32 + 10672);
	// stb r3,276(r11)
	PPC_STORE_U8(ctx.r11.u32 + 276, ctx.r3.u8);
	// addi r11,r11,304
	ctx.r11.s64 = ctx.r11.s64 + 304;
	// blt cr6,0x82124f84
	if (ctx.cr6.lt) goto loc_82124F84;
loc_82124FC0:
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// li r5,304
	ctx.r5.s64 = 304;
	// addi r6,r11,19504
	ctx.r6.s64 = ctx.r11.s64 + 19504;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259cd88
	ctx.lr = 0x82124FD8;
	sub_8259CD88(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x82125014
	if (!ctx.cr6.gt) goto loc_82125014;
	// addi r11,r1,100
	ctx.r11.s64 = ctx.r1.s64 + 100;
loc_82124FE8:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpw cr6,r10,r31
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r31.s32, ctx.xer);
	// stwx r10,r8,r30
	PPC_STORE_U32(ctx.r8.u32 + ctx.r30.u32, ctx.r10.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r6,276(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 276);
	// addi r11,r11,304
	ctx.r11.s64 = ctx.r11.s64 + 304;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r6,r5,r29
	PPC_STORE_U32(ctx.r5.u32 + ctx.r29.u32, ctx.r6.u32);
	// blt cr6,0x82124fe8
	if (ctx.cr6.lt) goto loc_82124FE8;
loc_82125014:
	// addi r1,r1,1952
	ctx.r1.s64 = ctx.r1.s64 + 1952;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8212501C"))) PPC_WEAK_FUNC(sub_8212501C);
PPC_FUNC_IMPL(__imp__sub_8212501C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82125020"))) PPC_WEAK_FUNC(sub_82125020);
PPC_FUNC_IMPL(__imp__sub_82125020) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823475c0
	ctx.lr = 0x82125044;
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
	ctx.lr = 0x82125058;
	sub_82365B88(ctx, base);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// addi r10,r3,756
	ctx.r10.s64 = ctx.r3.s64 + 756;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,36(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r9,r31
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, temp.u32);
	// lfs f13,3016(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3016);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-12136(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -12136);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x821250c4
	if (!ctx.cr6.eq) goto loc_821250C4;
	// lis r8,34
	ctx.r8.s64 = 2228224;
	// lfs f0,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stfs f0,3016(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3016, temp.u32);
	// ori r7,r8,50540
	ctx.r7.u64 = ctx.r8.u64 | 50540;
	// lis r6,34
	ctx.r6.s64 = 2228224;
	// lis r4,34
	ctx.r4.s64 = 2228224;
	// ori r5,r6,50688
	ctx.r5.u64 = ctx.r6.u64 | 50688;
	// lfs f13,31000(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 31000);
	ctx.f13.f64 = double(temp.f32);
	// ori r3,r4,50688
	ctx.r3.u64 = ctx.r4.u64 | 50688;
	// lfsx f0,r11,r7
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfsx f13,r11,r5
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fsel f0,f12,f0,f13
	ctx.f0.f64 = ctx.f12.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// stfsx f0,r11,r3
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, temp.u32);
loc_821250C4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82121ef0
	ctx.lr = 0x821250D0;
	sub_82121EF0(ctx, base);
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

__attribute__((alias("__imp__sub_821250E8"))) PPC_WEAK_FUNC(sub_821250E8);
PPC_FUNC_IMPL(__imp__sub_821250E8) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,3016(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 3016);
	ctx.f0.f64 = double(temp.f32);
	// lfs f1,-12136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12136);
	ctx.f1.f64 = double(temp.f32);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// bne cr6,0x82125160
	if (!ctx.cr6.eq) goto loc_82125160;
	// lis r10,34
	ctx.r10.s64 = 2228224;
	// lis r8,34
	ctx.r8.s64 = 2228224;
	// ori r9,r10,50688
	ctx.r9.u64 = ctx.r10.u64 | 50688;
	// ori r7,r8,50540
	ctx.r7.u64 = ctx.r8.u64 | 50540;
	// lfsx f0,r11,r9
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r11,r7
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fsubs f31,f0,f13
	ctx.f31.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,31000(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 31000);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x821251b8
	if (!ctx.cr6.lt) goto loc_821251B8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// blt cr6,0x821251b4
	if (ctx.cr6.lt) goto loc_821251B4;
	// bso cr6,0x821251b4
	if (ctx.cr6.so) goto loc_821251B4;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f2,-31636(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -31636);
	ctx.f2.f64 = double(temp.f32);
	// b 0x82125198
	goto loc_82125198;
loc_82125160:
	// lis r6,34
	ctx.r6.s64 = 2228224;
	// lis r4,34
	ctx.r4.s64 = 2228224;
	// ori r5,r6,50688
	ctx.r5.u64 = ctx.r6.u64 | 50688;
	// ori r3,r4,50540
	ctx.r3.u64 = ctx.r4.u64 | 50540;
	// lfsx f0,r11,r5
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r11,r3
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f31,f0,f13
	ctx.f31.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// blt cr6,0x821251b4
	if (ctx.cr6.lt) goto loc_821251B4;
	// bso cr6,0x821251b4
	if (ctx.cr6.so) goto loc_821251B4;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f2,-31640(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -31640);
	ctx.f2.f64 = double(temp.f32);
loc_82125198:
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r11,r11,-18560
	ctx.r11.s64 = ctx.r11.s64 + -18560;
	// addis r11,r11,9
	ctx.r11.s64 = ctx.r11.s64 + 589824;
	// addi r3,r11,-19376
	ctx.r3.s64 = ctx.r11.s64 + -19376;
	// bl 0x822b19c0
	ctx.lr = 0x821251B4;
	sub_822B19C0(ctx, base);
loc_821251B4:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
loc_821251B8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
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

__attribute__((alias("__imp__sub_821251CC"))) PPC_WEAK_FUNC(sub_821251CC);
PPC_FUNC_IMPL(__imp__sub_821251CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821251D0"))) PPC_WEAK_FUNC(sub_821251D0);
PPC_FUNC_IMPL(__imp__sub_821251D0) {
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
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r11,31004
	ctx.r5.s64 = ctx.r11.s64 + 31004;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r11,-31632
	ctx.r4.s64 = ctx.r11.s64 + -31632;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82123960
	ctx.lr = 0x8212520C;
	sub_82123960(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82125234
	if (!ctx.cr6.eq) goto loc_82125234;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,3054(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3054, ctx.r10.u8);
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
loc_82125234:
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r9,3054(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3054, ctx.r9.u8);
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

__attribute__((alias("__imp__sub_82125250"))) PPC_WEAK_FUNC(sub_82125250);
PPC_FUNC_IMPL(__imp__sub_82125250) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82125258;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bl 0x82365698
	ctx.lr = 0x82125270;
	sub_82365698(ctx, base);
	// lis r10,7
	ctx.r10.s64 = 458752;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// ori r9,r10,16216
	ctx.r9.u64 = ctx.r10.u64 | 16216;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,5
	ctx.r4.s64 = 5;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lis r9,-32091
	ctx.r9.s64 = -2103115776;
	// addi r31,r9,4864
	ctx.r31.s64 = ctx.r9.s64 + 4864;
	// mulli r9,r10,5956
	ctx.r9.s64 = ctx.r10.s64 * 5956;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mulli r10,r8,328
	ctx.r10.s64 = ctx.r8.s64 * 328;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82188300
	ctx.lr = 0x821252B8;
	sub_82188300(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lbz r7,10672(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 10672);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// lfs f31,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x821252fc
	if (ctx.cr6.eq) goto loc_821252FC;
	// li r10,1
	ctx.r10.s64 = 1;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,258
	ctx.r4.s64 = 258;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8219c750
	ctx.lr = 0x821252FC;
	sub_8219C750(ctx, base);
loc_821252FC:
	// lwz r11,10584(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10584);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82125368
	if (ctx.cr6.eq) goto loc_82125368;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82125358
	if (ctx.cr6.eq) goto loc_82125358;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82125348
	if (ctx.cr6.eq) goto loc_82125348;
	// li r4,256
	ctx.r4.s64 = 256;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// bl 0x8219c750
	ctx.lr = 0x82125344;
	sub_8219C750(ctx, base);
	// b 0x82125374
	goto loc_82125374;
loc_82125348:
	// li r4,265
	ctx.r4.s64 = 265;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// bl 0x8219c750
	ctx.lr = 0x82125354;
	sub_8219C750(ctx, base);
	// b 0x82125374
	goto loc_82125374;
loc_82125358:
	// li r4,264
	ctx.r4.s64 = 264;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// bl 0x8219c750
	ctx.lr = 0x82125364;
	sub_8219C750(ctx, base);
	// b 0x82125374
	goto loc_82125374;
loc_82125368:
	// li r4,263
	ctx.r4.s64 = 263;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// bl 0x8219c750
	ctx.lr = 0x82125374;
	sub_8219C750(ctx, base);
loc_82125374:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821939a0
	ctx.lr = 0x82125380;
	sub_821939A0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8212538C"))) PPC_WEAK_FUNC(sub_8212538C);
PPC_FUNC_IMPL(__imp__sub_8212538C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82125390"))) PPC_WEAK_FUNC(sub_82125390);
PPC_FUNC_IMPL(__imp__sub_82125390) {
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
	// lis r10,7
	ctx.r10.s64 = 458752;
	// addi r31,r11,26080
	ctx.r31.s64 = ctx.r11.s64 + 26080;
	// ori r9,r10,16252
	ctx.r9.u64 = ctx.r10.u64 | 16252;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r8,7
	ctx.r8.s64 = 458752;
	// lis r6,7
	ctx.r6.s64 = 458752;
	// ori r7,r8,16247
	ctx.r7.u64 = ctx.r8.u64 | 16247;
	// li r10,0
	ctx.r10.s64 = 0;
	// stwx r11,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r5,r6,57728
	ctx.r5.u64 = ctx.r6.u64 | 57728;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stbx r11,r31,r7
	PPC_STORE_U8(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u8);
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r11,r11,-18560
	ctx.r11.s64 = ctx.r11.s64 + -18560;
	// stwx r10,r11,r5
	PPC_STORE_U32(ctx.r11.u32 + ctx.r5.u32, ctx.r10.u32);
	// bl 0x821041a8
	ctx.lr = 0x821253E8;
	sub_821041A8(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82125400
	if (ctx.cr6.eq) goto loc_82125400;
	// addis r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 196608;
	// addi r3,r11,24760
	ctx.r3.s64 = ctx.r11.s64 + 24760;
	// bl 0x8210e8e0
	ctx.lr = 0x82125400;
	sub_8210E8E0(ctx, base);
loc_82125400:
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

__attribute__((alias("__imp__sub_82125414"))) PPC_WEAK_FUNC(sub_82125414);
PPC_FUNC_IMPL(__imp__sub_82125414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82125418"))) PPC_WEAK_FUNC(sub_82125418);
PPC_FUNC_IMPL(__imp__sub_82125418) {
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
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// lbz r11,21(r6)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + 21);
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x82125458
	if (ctx.cr6.eq) goto loc_82125458;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x82125450
	if (ctx.cr6.eq) goto loc_82125450;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// bne cr6,0x82125460
	if (!ctx.cr6.eq) goto loc_82125460;
	// li r8,94
	ctx.r8.s64 = 94;
	// b 0x82125464
	goto loc_82125464;
loc_82125450:
	// li r8,89
	ctx.r8.s64 = 89;
	// b 0x82125464
	goto loc_82125464;
loc_82125458:
	// li r8,84
	ctx.r8.s64 = 84;
	// b 0x82125464
	goto loc_82125464;
loc_82125460:
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82125464:
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,8880
	ctx.r11.s64 = ctx.r11.s64 + 8880;
	// mulli r9,r5,1104
	ctx.r9.s64 = ctx.r5.s64 * 1104;
	// lwzx r5,r7,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// addi r10,r10,4864
	ctx.r10.s64 = ctx.r10.s64 + 4864;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// bl 0x8219ca18
	ctx.lr = 0x8212548C;
	sub_8219CA18(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8212549C"))) PPC_WEAK_FUNC(sub_8212549C);
PPC_FUNC_IMPL(__imp__sub_8212549C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821254A0"))) PPC_WEAK_FUNC(sub_821254A0);
PPC_FUNC_IMPL(__imp__sub_821254A0) {
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
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// lbz r11,21(r6)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + 21);
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x821254e0
	if (ctx.cr6.eq) goto loc_821254E0;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x821254d8
	if (ctx.cr6.eq) goto loc_821254D8;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// bne cr6,0x821254e8
	if (!ctx.cr6.eq) goto loc_821254E8;
	// li r8,96
	ctx.r8.s64 = 96;
	// b 0x821254ec
	goto loc_821254EC;
loc_821254D8:
	// li r8,91
	ctx.r8.s64 = 91;
	// b 0x821254ec
	goto loc_821254EC;
loc_821254E0:
	// li r8,86
	ctx.r8.s64 = 86;
	// b 0x821254ec
	goto loc_821254EC;
loc_821254E8:
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_821254EC:
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,8864
	ctx.r11.s64 = ctx.r11.s64 + 8864;
	// mulli r9,r5,1104
	ctx.r9.s64 = ctx.r5.s64 * 1104;
	// lwzx r5,r7,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// addi r10,r10,4864
	ctx.r10.s64 = ctx.r10.s64 + 4864;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// bl 0x8219ca18
	ctx.lr = 0x82125514;
	sub_8219CA18(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82125524"))) PPC_WEAK_FUNC(sub_82125524);
PPC_FUNC_IMPL(__imp__sub_82125524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82125528"))) PPC_WEAK_FUNC(sub_82125528);
PPC_FUNC_IMPL(__imp__sub_82125528) {
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
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// lbz r11,21(r6)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + 21);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82125568
	if (ctx.cr6.eq) goto loc_82125568;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82125560
	if (ctx.cr6.eq) goto loc_82125560;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82125570
	if (!ctx.cr6.eq) goto loc_82125570;
	// li r9,95
	ctx.r9.s64 = 95;
	// b 0x82125574
	goto loc_82125574;
loc_82125560:
	// li r9,90
	ctx.r9.s64 = 90;
	// b 0x82125574
	goto loc_82125574;
loc_82125568:
	// li r9,85
	ctx.r9.s64 = 85;
	// b 0x82125574
	goto loc_82125574;
loc_82125570:
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82125574:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mulli r10,r5,1104
	ctx.r10.s64 = ctx.r5.s64 * 1104;
	// addi r11,r11,4864
	ctx.r11.s64 = ctx.r11.s64 + 4864;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8219ca18
	ctx.lr = 0x82125590;
	sub_8219CA18(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821255A0"))) PPC_WEAK_FUNC(sub_821255A0);
PPC_FUNC_IMPL(__imp__sub_821255A0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// mulli r11,r11,1104
	ctx.r11.s64 = ctx.r11.s64 * 1104;
	// addi r10,r10,4864
	ctx.r10.s64 = ctx.r10.s64 + 4864;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x821a4d58
	sub_821A4D58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821255C0"))) PPC_WEAK_FUNC(sub_821255C0);
PPC_FUNC_IMPL(__imp__sub_821255C0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// mulli r11,r11,1104
	ctx.r11.s64 = ctx.r11.s64 * 1104;
	// addi r10,r10,4864
	ctx.r10.s64 = ctx.r10.s64 + 4864;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x821a4d28
	sub_821A4D28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821255E0"))) PPC_WEAK_FUNC(sub_821255E0);
PPC_FUNC_IMPL(__imp__sub_821255E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baec
	ctx.lr = 0x821255E8;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r31,r11,28544
	ctx.r31.s64 = ctx.r11.s64 + 28544;
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// addis r10,r31,35
	ctx.r10.s64 = ctx.r31.s64 + 2293760;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r3,r11,-1264
	ctx.r3.s64 = ctx.r11.s64 + -1264;
	// mulli r11,r30,19200
	ctx.r11.s64 = ctx.r30.s64 * 19200;
	// addi r10,r10,-28496
	ctx.r10.s64 = ctx.r10.s64 + -28496;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r29,7
	ctx.r29.s64 = 7;
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r26,25
	ctx.r26.s64 = 25;
	// bl 0x820be948
	ctx.lr = 0x82125624;
	sub_820BE948(ctx, base);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r3,r11,26080
	ctx.r3.s64 = ctx.r11.s64 + 26080;
	// bl 0x821041a8
	ctx.lr = 0x82125630;
	sub_821041A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8212565c
	if (!ctx.cr6.eq) goto loc_8212565C;
	// lis r10,37
	ctx.r10.s64 = 2424832;
	// ori r9,r10,49147
	ctx.r9.u64 = ctx.r10.u64 | 49147;
	// lbzx r8,r31,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8212565c
	if (!ctx.cr6.eq) goto loc_8212565C;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-6648
	ctx.r3.s64 = ctx.r11.s64 + -6648;
	// bl 0x820fb448
	ctx.lr = 0x8212565C;
	sub_820FB448(ctx, base);
loc_8212565C:
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r7,r11,3556
	ctx.r7.s64 = ctx.r11.s64 + 3556;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f13,-31608(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -31608);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f0,r6,r28
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r28.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x821256a8
	if (ctx.cr6.gt) goto loc_821256A8;
	// bso cr6,0x821256a8
	if (ctx.cr6.so) goto loc_821256A8;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f13,-1608(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -1608);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x821256a0
	if (ctx.cr6.gt) goto loc_821256A0;
	// bso cr6,0x821256a0
	if (ctx.cr6.so) goto loc_821256A0;
	// li r29,9
	ctx.r29.s64 = 9;
	// li r26,100
	ctx.r26.s64 = 100;
	// b 0x821256a8
	goto loc_821256A8;
loc_821256A0:
	// li r29,8
	ctx.r29.s64 = 8;
	// li r26,50
	ctx.r26.s64 = 50;
loc_821256A8:
	// addi r5,r11,3541
	ctx.r5.s64 = ctx.r11.s64 + 3541;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,-12136(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -12136);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r4,r28
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r28.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82125778
	if (ctx.cr6.eq) goto loc_82125778;
	// addi r3,r11,3526
	ctx.r3.s64 = ctx.r11.s64 + 3526;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bgt cr6,0x82125774
	if (ctx.cr6.gt) goto loc_82125774;
	// lis r12,-32238
	ctx.r12.s64 = -2112749568;
	// addi r12,r12,22260
	ctx.r12.s64 = ctx.r12.s64 + 22260;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82125724;
	case 1:
		goto loc_8212572C;
	case 2:
		goto loc_82125734;
	case 3:
		goto loc_8212573C;
	case 4:
		goto loc_82125744;
	case 5:
		goto loc_82125774;
	case 6:
		goto loc_8212574C;
	case 7:
		goto loc_82125754;
	case 8:
		goto loc_8212575C;
	case 9:
		goto loc_82125774;
	case 10:
		goto loc_82125764;
	case 11:
		goto loc_8212576C;
	default:
		__builtin_unreachable();
	}
	// lwz r16,22308(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + 22308);
	// lwz r16,22316(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + 22316);
	// lwz r16,22324(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + 22324);
	// lwz r16,22332(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + 22332);
	// lwz r16,22340(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + 22340);
	// lwz r16,22388(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + 22388);
	// lwz r16,22348(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + 22348);
	// lwz r16,22356(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + 22356);
	// lwz r16,22364(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + 22364);
	// lwz r16,22388(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + 22388);
	// lwz r16,22372(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + 22372);
	// lwz r16,22380(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + 22380);
loc_82125724:
	// li r29,11
	ctx.r29.s64 = 11;
	// b 0x82125778
	goto loc_82125778;
loc_8212572C:
	// li r29,12
	ctx.r29.s64 = 12;
	// b 0x82125778
	goto loc_82125778;
loc_82125734:
	// li r29,13
	ctx.r29.s64 = 13;
	// b 0x82125778
	goto loc_82125778;
loc_8212573C:
	// li r29,14
	ctx.r29.s64 = 14;
	// b 0x82125778
	goto loc_82125778;
loc_82125744:
	// li r29,15
	ctx.r29.s64 = 15;
	// b 0x82125778
	goto loc_82125778;
loc_8212574C:
	// li r29,16
	ctx.r29.s64 = 16;
	// b 0x82125778
	goto loc_82125778;
loc_82125754:
	// li r29,17
	ctx.r29.s64 = 17;
	// b 0x82125778
	goto loc_82125778;
loc_8212575C:
	// li r29,18
	ctx.r29.s64 = 18;
	// b 0x82125778
	goto loc_82125778;
loc_82125764:
	// li r29,19
	ctx.r29.s64 = 19;
	// b 0x82125778
	goto loc_82125778;
loc_8212576C:
	// li r29,10
	ctx.r29.s64 = 10;
	// b 0x82125778
	goto loc_82125778;
loc_82125774:
	// li r29,0
	ctx.r29.s64 = 0;
loc_82125778:
	// extsw r10,r26
	ctx.r10.s64 = ctx.r26.s32;
	// lwz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r6,380(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 380);
	// lfd f12,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f1,f11
	ctx.f1.f64 = double(float(ctx.f11.f64));
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x821257B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mulli r10,r30,1104
	ctx.r10.s64 = ctx.r30.s64 * 1104;
	// addi r11,r11,4864
	ctx.r11.s64 = ctx.r11.s64 + 4864;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8219d5f0
	ctx.lr = 0x821257CC;
	sub_8219D5F0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821257D4"))) PPC_WEAK_FUNC(sub_821257D4);
PPC_FUNC_IMPL(__imp__sub_821257D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821257D8"))) PPC_WEAK_FUNC(sub_821257D8);
PPC_FUNC_IMPL(__imp__sub_821257D8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// mulli r11,r11,1104
	ctx.r11.s64 = ctx.r11.s64 * 1104;
	// addi r10,r10,4864
	ctx.r10.s64 = ctx.r10.s64 + 4864;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8219cc18
	sub_8219CC18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821257F8"))) PPC_WEAK_FUNC(sub_821257F8);
PPC_FUNC_IMPL(__imp__sub_821257F8) {
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
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lbz r11,21(r6)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + 21);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821258b4
	if (!ctx.cr6.gt) goto loc_821258B4;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82125850
	if (ctx.cr6.eq) goto loc_82125850;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82125848
	if (ctx.cr6.eq) goto loc_82125848;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82125858
	if (!ctx.cr6.eq) goto loc_82125858;
	// li r4,93
	ctx.r4.s64 = 93;
	// b 0x8212585c
	goto loc_8212585C;
loc_82125848:
	// li r4,88
	ctx.r4.s64 = 88;
	// b 0x8212585c
	goto loc_8212585C;
loc_82125850:
	// li r4,83
	ctx.r4.s64 = 83;
	// b 0x8212585c
	goto loc_8212585C;
loc_82125858:
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8212585C:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mulli r10,r30,1104
	ctx.r10.s64 = ctx.r30.s64 * 1104;
	// addi r11,r11,4864
	ctx.r11.s64 = ctx.r11.s64 + 4864;
	// li r5,0
	ctx.r5.s64 = 0;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8219ca18
	ctx.lr = 0x82125874;
	sub_8219CA18(ctx, base);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,8860(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8860);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,380(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 380);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x821258B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821258B4:
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

__attribute__((alias("__imp__sub_821258CC"))) PPC_WEAK_FUNC(sub_821258CC);
PPC_FUNC_IMPL(__imp__sub_821258CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821258D0"))) PPC_WEAK_FUNC(sub_821258D0);
PPC_FUNC_IMPL(__imp__sub_821258D0) {
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
	// lwz r11,6912(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6912);
	// lwz r4,6912(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6912);
	// addi r3,r11,13696
	ctx.r3.s64 = ctx.r11.s64 + 13696;
	// bl 0x820ba888
	ctx.lr = 0x821258FC;
	sub_820BA888(ctx, base);
	// lwz r11,6912(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6912);
	// lwz r4,6912(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6912);
	// addi r3,r11,13696
	ctx.r3.s64 = ctx.r11.s64 + 13696;
	// bl 0x820ba888
	ctx.lr = 0x8212590C;
	sub_820BA888(ctx, base);
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

__attribute__((alias("__imp__sub_82125924"))) PPC_WEAK_FUNC(sub_82125924);
PPC_FUNC_IMPL(__imp__sub_82125924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82125928"))) PPC_WEAK_FUNC(sub_82125928);
PPC_FUNC_IMPL(__imp__sub_82125928) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x82125930;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// addi r3,r11,28544
	ctx.r3.s64 = ctx.r11.s64 + 28544;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x8232da90
	ctx.lr = 0x82125948;
	sub_8232DA90(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82125a90
	if (ctx.cr6.eq) goto loc_82125A90;
	// lwz r11,15328(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15328);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82125a90
	if (!ctx.cr6.eq) goto loc_82125A90;
	// lfs f13,148(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// lwz r30,19168(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19168);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f12,152(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f11.f64 = double(temp.f32);
	// li r28,1
	ctx.r28.s64 = 1;
	// lfs f10,144(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	ctx.f10.f64 = double(temp.f32);
	// li r29,0
	ctx.r29.s64 = 0;
	// lfs f9,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f13,f11,f12,f0
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 + ctx.f0.f64));
	// lfs f0,30884(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 30884);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f12,f9,f10,f13
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f10.f64 + ctx.f13.f64));
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bgt cr6,0x821259c0
	if (ctx.cr6.gt) goto loc_821259C0;
	// lbz r10,492(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 492);
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821259b4
	if (!ctx.cr6.eq) goto loc_821259B4;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_821259B4:
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821259c4
	if (ctx.cr6.eq) goto loc_821259C4;
loc_821259C0:
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
loc_821259C4:
	// lbz r7,15219(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 15219);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82125a90
	if (!ctx.cr6.eq) goto loc_82125A90;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82120ac0
	ctx.lr = 0x821259D8;
	sub_82120AC0(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82125a48
	if (ctx.cr6.eq) goto loc_82125A48;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// clrlwi r5,r28,24
	ctx.r5.u64 = ctx.r28.u32 & 0xFF;
	// mulli r3,r30,1104
	ctx.r3.s64 = ctx.r30.s64 * 1104;
	// lfs f1,2864(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2864);
	ctx.f1.f64 = double(temp.f32);
	// addi r11,r11,4864
	ctx.r11.s64 = ctx.r11.s64 + 4864;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// beq cr6,0x82125a34
	if (ctx.cr6.eq) goto loc_82125A34;
	// li r4,252
	ctx.r4.s64 = 252;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// bl 0x8219c750
	ctx.lr = 0x82125A2C;
	sub_8219C750(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_82125A34:
	// li r4,251
	ctx.r4.s64 = 251;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// bl 0x8219c750
	ctx.lr = 0x82125A40;
	sub_8219C750(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_82125A48:
	// clrlwi r4,r28,24
	ctx.r4.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82125a90
	if (ctx.cr6.eq) goto loc_82125A90;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mulli r3,r30,1104
	ctx.r3.s64 = ctx.r30.s64 * 1104;
	// lfs f1,2864(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2864);
	ctx.f1.f64 = double(temp.f32);
	// addi r11,r11,4864
	ctx.r11.s64 = ctx.r11.s64 + 4864;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,250
	ctx.r4.s64 = 250;
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
	// bl 0x8219c750
	ctx.lr = 0x82125A90;
	sub_8219C750(ctx, base);
loc_82125A90:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82125A98"))) PPC_WEAK_FUNC(sub_82125A98);
PPC_FUNC_IMPL(__imp__sub_82125A98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82125AA0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mulli r10,r30,1104
	ctx.r10.s64 = ctx.r30.s64 * 1104;
	// addi r11,r11,4864
	ctx.r11.s64 = ctx.r11.s64 + 4864;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8219d690
	ctx.lr = 0x82125AC4;
	sub_8219D690(ctx, base);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r8,1
	ctx.r8.s64 = 1;
	// lbz r9,15480(r29)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + 15480);
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// extsb r5,r9
	ctx.r5.s64 = ctx.r9.s8;
	// lwz r11,8852(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8852);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,380(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 380);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82125B08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82125B10"))) PPC_WEAK_FUNC(sub_82125B10);
PPC_FUNC_IMPL(__imp__sub_82125B10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mulli r10,r4,1104
	ctx.r10.s64 = ctx.r4.s64 * 1104;
	// addi r11,r11,4864
	ctx.r11.s64 = ctx.r11.s64 + 4864;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8219d640
	sub_8219D640(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82125B24"))) PPC_WEAK_FUNC(sub_82125B24);
PPC_FUNC_IMPL(__imp__sub_82125B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82125B28"))) PPC_WEAK_FUNC(sub_82125B28);
PPC_FUNC_IMPL(__imp__sub_82125B28) {
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
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// stfs f1,164(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82125b84
	if (ctx.cr6.eq) goto loc_82125B84;
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r5,-1
	ctx.r5.s64 = -1;
	// lwz r11,8776(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8776);
	// lwz r6,380(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 380);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82125B84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82125B84:
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// mulli r10,r31,11920
	ctx.r10.s64 = ctx.r31.s64 * 11920;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// addi r5,r1,164
	ctx.r5.s64 = ctx.r1.s64 + 164;
	// li r4,23
	ctx.r4.s64 = 23;
	// addis r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 196608;
	// addi r11,r11,-11424
	ctx.r11.s64 = ctx.r11.s64 + -11424;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82125BB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_82125BC8"))) PPC_WEAK_FUNC(sub_82125BC8);
PPC_FUNC_IMPL(__imp__sub_82125BC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82125BD0;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r29,-32162
	ctx.r29.s64 = -2107768832;
	// lfs f1,2864(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2864);
	ctx.f1.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,4864
	ctx.r11.s64 = ctx.r11.s64 + 4864;
	// mulli r3,r30,1104
	ctx.r3.s64 = ctx.r30.s64 * 1104;
	// lwz r5,8788(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8788);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,104
	ctx.r4.s64 = 104;
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
	// bl 0x8219c750
	ctx.lr = 0x82125C20;
	sub_8219C750(ctx, base);
	// lwz r11,8788(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8788);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r8,2
	ctx.r8.s64 = 2;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,380(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 380);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82125C5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82125C64"))) PPC_WEAK_FUNC(sub_82125C64);
PPC_FUNC_IMPL(__imp__sub_82125C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82125C68"))) PPC_WEAK_FUNC(sub_82125C68);
PPC_FUNC_IMPL(__imp__sub_82125C68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82125C70;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,5
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 5, ctx.xer);
	// bne cr6,0x82125c8c
	if (!ctx.cr6.eq) goto loc_82125C8C;
	// li r4,105
	ctx.r4.s64 = 105;
	// b 0x82125cc8
	goto loc_82125CC8;
loc_82125C8C:
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// bne cr6,0x82125c9c
	if (!ctx.cr6.eq) goto loc_82125C9C;
	// li r4,106
	ctx.r4.s64 = 106;
	// b 0x82125cc8
	goto loc_82125CC8;
loc_82125C9C:
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// bne cr6,0x82125cac
	if (!ctx.cr6.eq) goto loc_82125CAC;
	// li r4,107
	ctx.r4.s64 = 107;
	// b 0x82125cc8
	goto loc_82125CC8;
loc_82125CAC:
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// bne cr6,0x82125cbc
	if (!ctx.cr6.eq) goto loc_82125CBC;
	// li r4,108
	ctx.r4.s64 = 108;
	// b 0x82125cc8
	goto loc_82125CC8;
loc_82125CBC:
	// li r4,109
	ctx.r4.s64 = 109;
	// cmpwi cr6,r5,5
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 5, ctx.xer);
	// bgt cr6,0x82125d50
	if (ctx.cr6.gt) goto loc_82125D50;
loc_82125CC8:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// lis r9,-32091
	ctx.r9.s64 = -2103115776;
	// addi r11,r11,8596
	ctx.r11.s64 = ctx.r11.s64 + 8596;
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f1,2864(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2864);
	ctx.f1.f64 = double(temp.f32);
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r9,4864
	ctx.r5.s64 = ctx.r9.s64 + 4864;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mulli r11,r29,1104
	ctx.r11.s64 = ctx.r29.s64 * 1104;
	// lwz r31,-4(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// add r3,r11,r5
	ctx.r3.u64 = ctx.r11.u64 + ctx.r5.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8219c750
	ctx.lr = 0x82125D18;
	sub_8219C750(ctx, base);
	// extsw r6,r31
	ctx.r6.s64 = ctx.r31.s32;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// std r6,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r6.u64);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,380(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 380);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82125D50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82125D50:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82125D58"))) PPC_WEAK_FUNC(sub_82125D58);
PPC_FUNC_IMPL(__imp__sub_82125D58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82125D60;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r11,-1264
	ctx.r3.s64 = ctx.r11.s64 + -1264;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x820be8d8
	ctx.lr = 0x82125D78;
	sub_820BE8D8(ctx, base);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r3,r11,26080
	ctx.r3.s64 = ctx.r11.s64 + 26080;
	// bl 0x821041a8
	ctx.lr = 0x82125D84;
	sub_821041A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82125db8
	if (!ctx.cr6.eq) goto loc_82125DB8;
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
	// bne cr6,0x82125db8
	if (!ctx.cr6.eq) goto loc_82125DB8;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-6648
	ctx.r3.s64 = ctx.r11.s64 + -6648;
	// bl 0x820fb428
	ctx.lr = 0x82125DB8;
	sub_820FB428(ctx, base);
loc_82125DB8:
	// lis r30,-32162
	ctx.r30.s64 = -2107768832;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,8584(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8584);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// extsw r6,r11
	ctx.r6.s64 = ctx.r11.s32;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// std r6,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r6.u64);
	// lwz r10,380(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 380);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82125DF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r5,8584(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8584);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mulli r3,r31,1104
	ctx.r3.s64 = ctx.r31.s64 * 1104;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// lfs f1,2864(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2864);
	ctx.f1.f64 = double(temp.f32);
	// addi r11,r11,4864
	ctx.r11.s64 = ctx.r11.s64 + 4864;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,102
	ctx.r4.s64 = 102;
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
	// bl 0x8219c750
	ctx.lr = 0x82125E38;
	sub_8219C750(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82125E40"))) PPC_WEAK_FUNC(sub_82125E40);
PPC_FUNC_IMPL(__imp__sub_82125E40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82125E48;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r11,-1264
	ctx.r3.s64 = ctx.r11.s64 + -1264;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x820be910
	ctx.lr = 0x82125E60;
	sub_820BE910(ctx, base);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r3,r11,26080
	ctx.r3.s64 = ctx.r11.s64 + 26080;
	// bl 0x821041a8
	ctx.lr = 0x82125E6C;
	sub_821041A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82125ea0
	if (!ctx.cr6.eq) goto loc_82125EA0;
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
	// bne cr6,0x82125ea0
	if (!ctx.cr6.eq) goto loc_82125EA0;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-6648
	ctx.r3.s64 = ctx.r11.s64 + -6648;
	// bl 0x820fb438
	ctx.lr = 0x82125EA0;
	sub_820FB438(ctx, base);
loc_82125EA0:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// li r7,0
	ctx.r7.s64 = 0;
	// lis r30,-32162
	ctx.r30.s64 = -2107768832;
	// addi r11,r11,4864
	ctx.r11.s64 = ctx.r11.s64 + 4864;
	// mulli r3,r31,1104
	ctx.r3.s64 = ctx.r31.s64 * 1104;
	// lfs f1,2864(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2864);
	ctx.f1.f64 = double(temp.f32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// lwz r5,8588(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8588);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,103
	ctx.r4.s64 = 103;
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
	// bl 0x8219c750
	ctx.lr = 0x82125EE0;
	sub_8219C750(ctx, base);
	// lwz r11,8588(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8588);
	// li r8,2
	ctx.r8.s64 = 2;
	// extsw r6,r11
	ctx.r6.s64 = ctx.r11.s32;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// std r6,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r6.u64);
	// lwz r10,380(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 380);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82125F1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82125F24"))) PPC_WEAK_FUNC(sub_82125F24);
PPC_FUNC_IMPL(__imp__sub_82125F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82125F28"))) PPC_WEAK_FUNC(sub_82125F28);
PPC_FUNC_IMPL(__imp__sub_82125F28) {
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
	// lwz r11,6912(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6912);
	// lwz r3,14768(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14768);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82125f58
	if (ctx.cr6.eq) goto loc_82125F58;
	// bl 0x820add18
	ctx.lr = 0x82125F58;
	sub_820ADD18(ctx, base);
loc_82125F58:
	// lbz r11,624(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 624);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82125fa8
	if (!ctx.cr6.eq) goto loc_82125FA8;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-18560
	ctx.r11.s64 = ctx.r11.s64 + -18560;
	// addis r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 524288;
	// addi r3,r11,10528
	ctx.r3.s64 = ctx.r11.s64 + 10528;
	// bl 0x822ce950
	ctx.lr = 0x82125F7C;
	sub_822CE950(ctx, base);
	// lwz r10,6912(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6912);
	// lwz r9,14432(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14432);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82125fa8
	if (ctx.cr6.eq) goto loc_82125FA8;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rotlwi r4,r10,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r7,80(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 80);
	// lwz r5,14432(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 14432);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82125FA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82125FA8:
	// lwz r11,6912(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6912);
	// lwz r6,15328(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15328);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x82125fec
	if (!ctx.cr6.eq) goto loc_82125FEC;
	// lwz r11,19168(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19168);
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// addi r10,r10,4864
	ctx.r10.s64 = ctx.r10.s64 + 4864;
	// mulli r11,r11,1104
	ctx.r11.s64 = ctx.r11.s64 * 1104;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82188f90
	ctx.lr = 0x82125FD4;
	sub_82188F90(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82188300
	ctx.lr = 0x82125FE4;
	sub_82188300(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82241970
	ctx.lr = 0x82125FEC;
	sub_82241970(ctx, base);
loc_82125FEC:
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

__attribute__((alias("__imp__sub_82126004"))) PPC_WEAK_FUNC(sub_82126004);
PPC_FUNC_IMPL(__imp__sub_82126004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82126008"))) PPC_WEAK_FUNC(sub_82126008);
PPC_FUNC_IMPL(__imp__sub_82126008) {
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
	// lwz r11,6912(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6912);
	// addi r3,r11,13696
	ctx.r3.s64 = ctx.r11.s64 + 13696;
	// bl 0x820ba188
	ctx.lr = 0x82126028;
	sub_820BA188(ctx, base);
	// lwz r3,6912(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6912);
	// lwz r11,13496(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13496);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82126040
	if (!ctx.cr6.eq) goto loc_82126040;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x820bd6d0
	ctx.lr = 0x82126040;
	sub_820BD6D0(ctx, base);
loc_82126040:
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

__attribute__((alias("__imp__sub_82126054"))) PPC_WEAK_FUNC(sub_82126054);
PPC_FUNC_IMPL(__imp__sub_82126054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82126058"))) PPC_WEAK_FUNC(sub_82126058);
PPC_FUNC_IMPL(__imp__sub_82126058) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,2384(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2384);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8212606c
	if (ctx.cr6.eq) goto loc_8212606C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8212606C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82126074"))) PPC_WEAK_FUNC(sub_82126074);
PPC_FUNC_IMPL(__imp__sub_82126074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82126078"))) PPC_WEAK_FUNC(sub_82126078);
PPC_FUNC_IMPL(__imp__sub_82126078) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82126080;
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// bl 0x820f0ae8
	ctx.lr = 0x821260B4;
	sub_820F0AE8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,18240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18240);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x822589b0
	ctx.lr = 0x821260C4;
	sub_822589B0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lbz r10,15480(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 15480);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,-1608(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1608);
	ctx.f0.f64 = double(temp.f32);
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// fadds f0,f30,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 + ctx.f0.f64));
	// addi r9,r11,603
	ctx.r9.s64 = ctx.r11.s64 + 603;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r8,r30
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r30.u32, temp.u32);
	// bl 0x820bd6d0
	ctx.lr = 0x821260F0;
	sub_820BD6D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,15552
	ctx.r3.s64 = ctx.r31.s64 + 15552;
	// bl 0x820d7918
	ctx.lr = 0x821260FC;
	sub_820D7918(ctx, base);
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

__attribute__((alias("__imp__sub_8212610C"))) PPC_WEAK_FUNC(sub_8212610C);
PPC_FUNC_IMPL(__imp__sub_8212610C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82126110"))) PPC_WEAK_FUNC(sub_82126110);
PPC_FUNC_IMPL(__imp__sub_82126110) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,31036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 31036);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x8212615c
	if (!ctx.cr6.gt) goto loc_8212615C;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lis r10,34
	ctx.r10.s64 = 2228224;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// ori r9,r10,37024
	ctx.r9.u64 = ctx.r10.u64 | 37024;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8212615c
	if (!ctx.cr6.gt) goto loc_8212615C;
	// lwz r8,18240(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 18240);
	// lwz r7,14668(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 14668);
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// bne cr6,0x8212615c
	if (!ctx.cr6.eq) goto loc_8212615C;
	// lbz r6,15219(r5)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r5.u32 + 15219);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_8212615C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82126164"))) PPC_WEAK_FUNC(sub_82126164);
PPC_FUNC_IMPL(__imp__sub_82126164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82126168"))) PPC_WEAK_FUNC(sub_82126168);
PPC_FUNC_IMPL(__imp__sub_82126168) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,-31604(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -31604);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x821261d4
	if (!ctx.cr6.lt) goto loc_821261D4;
	// lis r10,34
	ctx.r10.s64 = 2228224;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lis r8,34
	ctx.r8.s64 = 2228224;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// ori r9,r10,36968
	ctx.r9.u64 = ctx.r10.u64 | 36968;
	// ori r7,r8,37020
	ctx.r7.u64 = ctx.r8.u64 | 37020;
	// lis r4,34
	ctx.r4.s64 = 2228224;
	// ori r3,r4,37024
	ctx.r3.u64 = ctx.r4.u64 | 37024;
	// lwzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwzx r9,r11,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// lwzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x821261d4
	if (!ctx.cr6.lt) goto loc_821261D4;
	// lwz r11,18240(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 18240);
	// lwz r10,14668(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14668);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x821261d4
	if (!ctx.cr6.eq) goto loc_821261D4;
	// lbz r9,15219(r5)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r5.u32 + 15219);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_821261D4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821261DC"))) PPC_WEAK_FUNC(sub_821261DC);
PPC_FUNC_IMPL(__imp__sub_821261DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821261E0"))) PPC_WEAK_FUNC(sub_821261E0);
PPC_FUNC_IMPL(__imp__sub_821261E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// ori r9,r10,16216
	ctx.r9.u64 = ctx.r10.u64 | 16216;
	// li r3,6
	ctx.r3.s64 = 6;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82126210"))) PPC_WEAK_FUNC(sub_82126210);
PPC_FUNC_IMPL(__imp__sub_82126210) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae0
	ctx.lr = 0x82126218;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r9,7
	ctx.r9.s64 = 458752;
	// addi r25,r11,26080
	ctx.r25.s64 = ctx.r11.s64 + 26080;
	// ori r8,r9,16216
	ctx.r8.u64 = ctx.r9.u64 | 16216;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// lwzx r11,r25,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r8.u32);
	// lbz r10,15480(r24)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r24.u32 + 15480);
	// lwz r7,15328(r24)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r24.u32 + 15328);
	// extsb r31,r10
	ctx.r31.s64 = ctx.r10.s8;
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// beq cr6,0x82126458
	if (ctx.cr6.eq) goto loc_82126458;
	// mulli r27,r31,5956
	ctx.r27.s64 = ctx.r31.s64 * 5956;
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// add r11,r27,r30
	ctx.r11.u64 = ctx.r27.u64 + ctx.r30.u64;
	// addi r29,r11,10528
	ctx.r29.s64 = ctx.r11.s64 + 10528;
	// lhz r5,16(r29)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r29.u32 + 16);
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// beq cr6,0x82126458
	if (ctx.cr6.eq) goto loc_82126458;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820fa560
	ctx.lr = 0x82126280;
	sub_820FA560(ctx, base);
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// rlwinm r26,r31,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r11,-1264
	ctx.r28.s64 = ctx.r11.s64 + -1264;
	// lis r6,7
	ctx.r6.s64 = 458752;
	// sth r4,16(r29)
	PPC_STORE_U16(ctx.r29.u32 + 16, ctx.r4.u16);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// ori r5,r6,16216
	ctx.r5.u64 = ctx.r6.u64 | 16216;
	// mulli r11,r11,328
	ctx.r11.s64 = ctx.r11.s64 * 328;
	// lwzx r10,r26,r28
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r28.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r31,r11,10580
	ctx.r31.s64 = ctx.r11.s64 + 10580;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// lwzx r8,r26,r28
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r28.u32);
	// lbz r7,20(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 20);
	// stb r7,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r7.u8);
	// lwzx r11,r25,r5
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r5.u32);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x820fa500
	ctx.lr = 0x821262D4;
	sub_820FA500(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82126300
	if (ctx.cr6.eq) goto loc_82126300;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,31052
	ctx.r11.s64 = ctx.r11.s64 + 31052;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// b 0x8212630c
	goto loc_8212630C;
loc_82126300:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subfic r8,r9,7
	ctx.xer.ca = ctx.r9.u32 <= 7;
	ctx.r8.s64 = 7 - ctx.r9.s64;
	// stw r8,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r8.u32);
loc_8212630C:
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82122010
	ctx.lr = 0x8212631C;
	sub_82122010(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x820fa830
	ctx.lr = 0x82126328;
	sub_820FA830(ctx, base);
	// lwz r7,15328(r24)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r24.u32 + 15328);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x82126458
	if (!ctx.cr6.eq) goto loc_82126458;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpw cr6,r6,r10
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82126350
	if (ctx.cr6.eq) goto loc_82126350;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82126350:
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82126458
	if (ctx.cr6.eq) goto loc_82126458;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// ble cr6,0x82126410
	if (!ctx.cr6.gt) goto loc_82126410;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lis r3,34
	ctx.r3.s64 = 2228224;
	// addi r29,r11,28544
	ctx.r29.s64 = ctx.r11.s64 + 28544;
	// ori r11,r3,36968
	ctx.r11.u64 = ctx.r3.u64 | 36968;
	// li r27,1
	ctx.r27.s64 = 1;
	// li r28,-1
	ctx.r28.s64 = -1;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwzx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82126408
	if (!ctx.cr6.gt) goto loc_82126408;
loc_8212638C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8232da90
	ctx.lr = 0x82126398;
	sub_8232DA90(ctx, base);
	// mulli r11,r31,5956
	ctx.r11.s64 = ctx.r31.s64 * 5956;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r9,10568(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10568);
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// bne cr6,0x821263b8
	if (!ctx.cr6.eq) goto loc_821263B8;
	// clrlwi r28,r11,24
	ctx.r28.u64 = ctx.r11.u32 & 0xFF;
	// b 0x821263c8
	goto loc_821263C8;
loc_821263B8:
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// cmpw cr6,r8,r28
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r28.s32, ctx.xer);
	// ble cr6,0x821263c8
	if (!ctx.cr6.gt) goto loc_821263C8;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
loc_821263C8:
	// lis r7,34
	ctx.r7.s64 = 2228224;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// ori r6,r7,36968
	ctx.r6.u64 = ctx.r7.u64 | 36968;
	// lwzx r11,r29,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r6.u32);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8212638c
	if (ctx.cr6.lt) goto loc_8212638C;
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// beq cr6,0x82126408
	if (ctx.cr6.eq) goto loc_82126408;
	// cmpwi cr6,r27,2
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 2, ctx.xer);
	// beq cr6,0x82126400
	if (ctx.cr6.eq) goto loc_82126400;
	// cmpwi cr6,r27,3
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 3, ctx.xer);
	// bne cr6,0x82126424
	if (!ctx.cr6.eq) goto loc_82126424;
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x82126428
	goto loc_82126428;
loc_82126400:
	// li r5,2
	ctx.r5.s64 = 2;
	// b 0x82126428
	goto loc_82126428;
loc_82126408:
	// li r5,3
	ctx.r5.s64 = 3;
	// b 0x82126428
	goto loc_82126428;
loc_82126410:
	// lwzx r5,r26,r28
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r28.u32);
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// subfic r5,r4,4
	ctx.xer.ca = ctx.r4.u32 <= 4;
	ctx.r5.s64 = 4 - ctx.r4.s64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bge cr6,0x82126428
	if (!ctx.cr6.lt) goto loc_82126428;
loc_82126424:
	// li r5,0
	ctx.r5.s64 = 0;
loc_82126428:
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// addi r11,r11,16448
	ctx.r11.s64 = ctx.r11.s64 + 16448;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bgt cr6,0x82126440
	if (ctx.cr6.gt) goto loc_82126440;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_82126440:
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r10,500(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 500);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82126458;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82126458:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82126460"))) PPC_WEAK_FUNC(sub_82126460);
PPC_FUNC_IMPL(__imp__sub_82126460) {
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
	// lis r10,7
	ctx.r10.s64 = 458752;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// ori r9,r10,16216
	ctx.r9.u64 = ctx.r10.u64 | 16216;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x820fa500
	ctx.lr = 0x82126490;
	sub_820FA500(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x821264c8
	if (ctx.cr6.eq) goto loc_821264C8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,-31556
	ctx.r5.s64 = ctx.r11.s64 + -31556;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-31568
	ctx.r4.s64 = ctx.r11.s64 + -31568;
	// b 0x821264d8
	goto loc_821264D8;
loc_821264C8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,-31584
	ctx.r5.s64 = ctx.r11.s64 + -31584;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-31600
	ctx.r4.s64 = ctx.r11.s64 + -31600;
loc_821264D8:
	// bl 0x82123960
	ctx.lr = 0x821264DC;
	sub_82123960(ctx, base);
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

__attribute__((alias("__imp__sub_821264F0"))) PPC_WEAK_FUNC(sub_821264F0);
PPC_FUNC_IMPL(__imp__sub_821264F0) {
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
	// addi r3,r11,26080
	ctx.r3.s64 = ctx.r11.s64 + 26080;
	// bl 0x821041a8
	ctx.lr = 0x82126510;
	sub_821041A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// stw r11,2436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2436, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8212652C"))) PPC_WEAK_FUNC(sub_8212652C);
PPC_FUNC_IMPL(__imp__sub_8212652C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82126530"))) PPC_WEAK_FUNC(sub_82126530);
PPC_FUNC_IMPL(__imp__sub_82126530) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,2436(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2436, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8212653C"))) PPC_WEAK_FUNC(sub_8212653C);
PPC_FUNC_IMPL(__imp__sub_8212653C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82126540"))) PPC_WEAK_FUNC(sub_82126540);
PPC_FUNC_IMPL(__imp__sub_82126540) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r31,r11,13348
	ctx.r31.s64 = ctx.r11.s64 + 13348;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259d1b0
	ctx.lr = 0x82126570;
	sub_8259D1B0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259d1b0
	ctx.lr = 0x82126580;
	sub_8259D1B0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,-812
	ctx.r5.s64 = ctx.r11.s64 + -812;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r3,r11,-31528
	ctx.r3.s64 = ctx.r11.s64 + -31528;
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x82427c40
	ctx.lr = 0x821265A4;
	sub_82427C40(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,-776
	ctx.r4.s64 = ctx.r11.s64 + -776;
	// bl 0x8259cce0
	ctx.lr = 0x821265B4;
	sub_8259CCE0(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// clrlwi r3,r10,24
	ctx.r3.u64 = ctx.r10.u32 & 0xFF;
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

__attribute__((alias("__imp__sub_821265D8"))) PPC_WEAK_FUNC(sub_821265D8);
PPC_FUNC_IMPL(__imp__sub_821265D8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,6
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 6, ctx.xer);
	// bgt cr6,0x8212663c
	if (ctx.cr6.gt) {
		sub_8212663C(ctx, base);
		return;
	}
	// lis r12,-32238
	ctx.r12.s64 = -2112749568;
	// addi r12,r12,26104
	ctx.r12.s64 = ctx.r12.s64 + 26104;
	// rlwinm r0,r4,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r4.u64) {
	case 0:
		// ERROR: 0x8212663C
		return;
	case 1:
		// ERROR: 0x8212663C
		return;
	case 2:
		// ERROR: 0x82126614
		return;
	case 3:
		// ERROR: 0x8212661C
		return;
	case 4:
		// ERROR: 0x82126624
		return;
	case 5:
		// ERROR: 0x8212662C
		return;
	case 6:
		// ERROR: 0x82126634
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_821265F8"))) PPC_WEAK_FUNC(sub_821265F8);
PPC_FUNC_IMPL(__imp__sub_821265F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r16,26172(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + 26172);
	// lwz r16,26172(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + 26172);
	// lwz r16,26132(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + 26132);
	// lwz r16,26140(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + 26140);
	// lwz r16,26148(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + 26148);
	// lwz r16,26156(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + 26156);
	// lwz r16,26164(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + 26164);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8212661C"))) PPC_WEAK_FUNC(sub_8212661C);
PPC_FUNC_IMPL(__imp__sub_8212661C) {
	PPC_FUNC_PROLOGUE();
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82126624"))) PPC_WEAK_FUNC(sub_82126624);
PPC_FUNC_IMPL(__imp__sub_82126624) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8212662C"))) PPC_WEAK_FUNC(sub_8212662C);
PPC_FUNC_IMPL(__imp__sub_8212662C) {
	PPC_FUNC_PROLOGUE();
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82126634"))) PPC_WEAK_FUNC(sub_82126634);
PPC_FUNC_IMPL(__imp__sub_82126634) {
	PPC_FUNC_PROLOGUE();
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8212663C"))) PPC_WEAK_FUNC(sub_8212663C);
PPC_FUNC_IMPL(__imp__sub_8212663C) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82126644"))) PPC_WEAK_FUNC(sub_82126644);
PPC_FUNC_IMPL(__imp__sub_82126644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82126648"))) PPC_WEAK_FUNC(sub_82126648);
PPC_FUNC_IMPL(__imp__sub_82126648) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x822d6298
	ctx.lr = 0x8212665C;
	sub_822D6298(ctx, base);
	// cmplwi cr6,r3,25
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 25, ctx.xer);
	// bgt cr6,0x821268ec
	if (ctx.cr6.gt) goto loc_821268EC;
	// lis r12,-32238
	ctx.r12.s64 = -2112749568;
	// addi r12,r12,26236
	ctx.r12.s64 = ctx.r12.s64 + 26236;
	// rlwinm r0,r3,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r3.u64) {
	case 0:
		goto loc_821266E4;
	case 1:
		goto loc_821266F8;
	case 2:
		goto loc_8212670C;
	case 3:
		goto loc_82126720;
	case 4:
		goto loc_82126734;
	case 5:
		goto loc_82126748;
	case 6:
		goto loc_8212675C;
	case 7:
		goto loc_82126770;
	case 8:
		goto loc_82126784;
	case 9:
		goto loc_82126798;
	case 10:
		goto loc_821267AC;
	case 11:
		goto loc_821267C0;
	case 12:
		goto loc_821267D4;
	case 13:
		goto loc_821267E8;
	case 14:
		goto loc_821267FC;
	case 15:
		goto loc_82126810;
	case 16:
		goto loc_82126824;
	case 17:
		goto loc_82126838;
	case 18:
		goto loc_8212684C;
	case 19:
		goto loc_82126860;
	case 20:
		goto loc_82126874;
	case 21:
		goto loc_82126888;
	case 22:
		goto loc_8212689C;
	case 23:
		goto loc_821268B0;
	case 24:
		goto loc_821268C4;
	case 25:
		goto loc_821268D8;
	default:
		__builtin_unreachable();
	}
	// lwz r16,26340(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + 26340);
	// lwz r16,26360(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + 26360);
	// lwz r16,26380(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + 26380);
	// lwz r16,26400(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + 26400);
	// lwz r16,26420(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + 26420);
	// lwz r16,26440(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + 26440);
	// lwz r16,26460(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + 26460);
	// lwz r16,26480(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + 26480);
	// lwz r16,26500(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + 26500);
	// lwz r16,26520(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + 26520);
	// lwz r16,26540(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + 26540);
	// lwz r16,26560(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + 26560);
	// lwz r16,26580(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + 26580);
	// lwz r16,26600(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + 26600);
	// lwz r16,26620(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + 26620);
	// lwz r16,26640(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + 26640);
	// lwz r16,26660(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + 26660);
	// lwz r16,26680(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + 26680);
	// lwz r16,26700(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + 26700);
	// lwz r16,26720(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + 26720);
	// lwz r16,26740(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + 26740);
	// lwz r16,26760(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + 26760);
	// lwz r16,26780(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + 26780);
	// lwz r16,26800(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + 26800);
	// lwz r16,26820(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + 26820);
	// lwz r16,26840(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + 26840);
loc_821266E4:
	// li r3,24
	ctx.r3.s64 = 24;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_821266F8:
	// li r3,25
	ctx.r3.s64 = 25;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8212670C:
	// li r3,22
	ctx.r3.s64 = 22;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82126720:
	// li r3,23
	ctx.r3.s64 = 23;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82126734:
	// li r3,7
	ctx.r3.s64 = 7;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82126748:
	// li r3,6
	ctx.r3.s64 = 6;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8212675C:
	// li r3,8
	ctx.r3.s64 = 8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82126770:
	// li r3,9
	ctx.r3.s64 = 9;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82126784:
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82126798:
	// li r3,5
	ctx.r3.s64 = 5;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_821267AC:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_821267C0:
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_821267D4:
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
loc_821267E8:
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
loc_821267FC:
	// li r3,10
	ctx.r3.s64 = 10;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82126810:
	// li r3,11
	ctx.r3.s64 = 11;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82126824:
	// li r3,14
	ctx.r3.s64 = 14;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82126838:
	// li r3,15
	ctx.r3.s64 = 15;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8212684C:
	// li r3,12
	ctx.r3.s64 = 12;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82126860:
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82126874:
	// li r3,18
	ctx.r3.s64 = 18;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82126888:
	// li r3,19
	ctx.r3.s64 = 19;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8212689C:
	// li r3,20
	ctx.r3.s64 = 20;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_821268B0:
	// li r3,21
	ctx.r3.s64 = 21;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_821268C4:
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_821268D8:
	// li r3,17
	ctx.r3.s64 = 17;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_821268EC:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82126900"))) PPC_WEAK_FUNC(sub_82126900);
PPC_FUNC_IMPL(__imp__sub_82126900) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stw r8,2988(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2988, ctx.r8.u32);
	// bne cr6,0x82126950
	if (!ctx.cr6.eq) goto loc_82126950;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x82126920
	if (!ctx.cr6.gt) goto loc_82126920;
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,2984(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2984, ctx.r11.u32);
	// blr 
	return;
loc_82126920:
	// bne cr6,0x82126944
	if (!ctx.cr6.eq) goto loc_82126944;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// bne cr6,0x82126938
	if (!ctx.cr6.eq) goto loc_82126938;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,2984(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2984, ctx.r10.u32);
	// blr 
	return;
loc_82126938:
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r9,2984(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2984, ctx.r9.u32);
	// blr 
	return;
loc_82126944:
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r8,2984(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2984, ctx.r8.u32);
	// blr 
	return;
loc_82126950:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bge cr6,0x82126964
	if (!ctx.cr6.lt) goto loc_82126964;
	// li r7,6
	ctx.r7.s64 = 6;
	// stw r7,2984(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2984, ctx.r7.u32);
	// blr 
	return;
loc_82126964:
	// bne cr6,0x82126984
	if (!ctx.cr6.eq) goto loc_82126984;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// bne cr6,0x82126978
	if (!ctx.cr6.eq) goto loc_82126978;
	// stw r6,2984(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2984, ctx.r6.u32);
	// blr 
	return;
loc_82126978:
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r5,2984(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2984, ctx.r5.u32);
	// blr 
	return;
loc_82126984:
	// li r4,5
	ctx.r4.s64 = 5;
	// stw r4,2984(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2984, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82126990"))) PPC_WEAK_FUNC(sub_82126990);
PPC_FUNC_IMPL(__imp__sub_82126990) {
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
	// beq cr6,0x82126a2c
	if (ctx.cr6.eq) goto loc_82126A2C;
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
	// beq cr6,0x82126a08
	if (ctx.cr6.eq) goto loc_82126A08;
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
	// beq cr6,0x82126a0c
	if (ctx.cr6.eq) goto loc_82126A0C;
loc_82126A08:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82126A0C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82126a2c
	if (ctx.cr6.eq) goto loc_82126A2C;
	// lis r5,0
	ctx.r5.s64 = 0;
	// li r6,6
	ctx.r6.s64 = 6;
	// ori r5,r5,32769
	ctx.r5.u64 = ctx.r5.u64 | 32769;
	// addi r3,r30,2896
	ctx.r3.s64 = ctx.r30.s64 + 2896;
	// bl 0x82361460
	ctx.lr = 0x82126A2C;
	sub_82361460(ctx, base);
loc_82126A2C:
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x82104600
	ctx.lr = 0x82126A38;
	sub_82104600(ctx, base);
	// extsb r4,r3
	ctx.r4.s64 = ctx.r3.s8;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x82126aa4
	if (ctx.cr6.eq) goto loc_82126AA4;
	// addis r10,r31,7
	ctx.r10.s64 = ctx.r31.s64 + 458752;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
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
	// beq cr6,0x82126a80
	if (ctx.cr6.eq) goto loc_82126A80;
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
	// beq cr6,0x82126a84
	if (ctx.cr6.eq) goto loc_82126A84;
loc_82126A80:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82126A84:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82126aa4
	if (ctx.cr6.eq) goto loc_82126AA4;
	// lis r5,0
	ctx.r5.s64 = 0;
	// li r6,6
	ctx.r6.s64 = 6;
	// ori r5,r5,32769
	ctx.r5.u64 = ctx.r5.u64 | 32769;
	// addi r3,r30,2896
	ctx.r3.s64 = ctx.r30.s64 + 2896;
	// bl 0x82361460
	ctx.lr = 0x82126AA4;
	sub_82361460(ctx, base);
loc_82126AA4:
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

__attribute__((alias("__imp__sub_82126ABC"))) PPC_WEAK_FUNC(sub_82126ABC);
PPC_FUNC_IMPL(__imp__sub_82126ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82126AC0"))) PPC_WEAK_FUNC(sub_82126AC0);
PPC_FUNC_IMPL(__imp__sub_82126AC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x8259bba8
	ctx.lr = 0x82126AD4;
	__savefpr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addis r11,r11,33
	ctx.r11.s64 = ctx.r11.s64 + 2162688;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r11,6592
	ctx.r3.s64 = ctx.r11.s64 + 6592;
	// bl 0x820b7668
	ctx.lr = 0x82126AFC;
	sub_820B7668(ctx, base);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f12,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// addi r10,r11,-15552
	ctx.r10.s64 = ctx.r11.s64 + -15552;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// lfs f0,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-1068(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1068);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fsubs f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// addi r11,r11,-15568
	ctx.r11.s64 = ctx.r11.s64 + -15568;
	// lfs f0,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f0,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lfs f13,30208(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 30208);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f0,f0
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// ld r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// ld r6,8(r8)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// fmuls f28,f11,f13
	ctx.f28.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// std r7,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r7.u64);
	// std r6,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r6.u64);
	// lfd f11,-4832(r11)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r11.u32 + -4832);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmadds f9,f13,f13,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// lfd f10,-4840(r11)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r11.u32 + -4840);
	// fmadds f12,f0,f0,f9
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f9.f64));
	// frsqrte f0,f12
	ctx.f0.f64 = double(1.0f / sqrtf(float(ctx.f12.f64)));
	// fmul f8,f12,f0
	ctx.f8.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fmul f7,f0,f11
	ctx.f7.f64 = ctx.f0.f64 * ctx.f11.f64;
	// fnmsub f6,f8,f0,f10
	ctx.f6.f64 = -(ctx.f8.f64 * ctx.f0.f64 - ctx.f10.f64);
	// fmadd f0,f6,f7,f0
	ctx.f0.f64 = ctx.f6.f64 * ctx.f7.f64 + ctx.f0.f64;
	// fmul f5,f12,f0
	ctx.f5.f64 = ctx.f12.f64 * ctx.f0.f64;
	// lfs f12,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f12.f64 = double(temp.f32);
	// fmul f4,f0,f11
	ctx.f4.f64 = ctx.f0.f64 * ctx.f11.f64;
	// fnmsub f3,f5,f0,f10
	ctx.f3.f64 = -(ctx.f5.f64 * ctx.f0.f64 - ctx.f10.f64);
	// fmadd f2,f3,f4,f0
	ctx.f2.f64 = ctx.f3.f64 * ctx.f4.f64 + ctx.f0.f64;
	// frsp f0,f2
	ctx.f0.f64 = double(float(ctx.f2.f64));
	// fmuls f31,f0,f13
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f13,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f30,f13,f0
	ctx.f30.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f29,f12,f0
	ctx.f29.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// bl 0x8259c328
	ctx.lr = 0x82126BC4;
	sub_8259C328(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// frsp f28,f0
	ctx.f28.f64 = double(float(ctx.f0.f64));
	// bl 0x8259c400
	ctx.lr = 0x82126BD4;
	sub_8259C400(ctx, base);
	// fmuls f0,f31,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f31.f64));
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// fmuls f13,f30,f30
	ctx.f13.f64 = double(float(ctx.f30.f64 * ctx.f30.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f12,f29,f29
	ctx.f12.f64 = double(float(ctx.f29.f64 * ctx.f29.f64));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// frsp f8,f1
	ctx.f8.f64 = double(float(ctx.f1.f64));
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// fneg f11,f0
	ctx.f11.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f11,112(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fneg f10,f13
	ctx.f10.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f10,116(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fneg f9,f12
	ctx.f9.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f9,120(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// fmuls f10,f29,f31
	ctx.f10.f64 = double(float(ctx.f29.f64 * ctx.f31.f64));
	// ld r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// fmuls f6,f29,f28
	ctx.f6.f64 = double(float(ctx.f29.f64 * ctx.f28.f64));
	// ld r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// fmuls f7,f30,f28
	ctx.f7.f64 = double(float(ctx.f30.f64 * ctx.f28.f64));
	// ld r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// lfs f12,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// std r5,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r5.u64);
	// lis r7,7
	ctx.r7.s64 = 458752;
	// std r4,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r4.u64);
	// std r3,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r3.u64);
	// ori r6,r7,16216
	ctx.r6.u64 = ctx.r7.u64 | 16216;
	// std r11,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r11.u64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// fsubs f13,f0,f8
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// fadds f5,f11,f0
	ctx.f5.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// lfs f11,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f8,f30,f31
	ctx.f8.f64 = double(float(ctx.f30.f64 * ctx.f31.f64));
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f10,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f5,f5,f13
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// fmuls f8,f8,f13
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fsubs f3,f9,f7
	ctx.f3.f64 = double(float(ctx.f9.f64 - ctx.f7.f64));
	// fsubs f5,f0,f5
	ctx.f5.f64 = double(float(ctx.f0.f64 - ctx.f5.f64));
	// fadds f4,f6,f8
	ctx.f4.f64 = double(float(ctx.f6.f64 + ctx.f8.f64));
	// fsubs f8,f8,f6
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f6.f64));
	// fadds f9,f7,f9
	ctx.f9.f64 = double(float(ctx.f7.f64 + ctx.f9.f64));
	// fmuls f2,f12,f5
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f5.f64));
	// stfs f2,112(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f5,f4,f12
	ctx.f5.f64 = double(float(ctx.f4.f64 * ctx.f12.f64));
	// stfs f5,116(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmuls f4,f3,f12
	ctx.f4.f64 = double(float(ctx.f3.f64 * ctx.f12.f64));
	// lfs f3,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f3.f64 = double(temp.f32);
	// stfs f4,120(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fadds f4,f3,f0
	ctx.f4.f64 = double(float(ctx.f3.f64 + ctx.f0.f64));
	// fmuls f12,f29,f30
	ctx.f12.f64 = double(float(ctx.f29.f64 * ctx.f30.f64));
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// fadds f3,f1,f0
	ctx.f3.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// ld r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// fmuls f5,f31,f28
	ctx.f5.f64 = double(float(ctx.f31.f64 * ctx.f28.f64));
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// fmuls f9,f10,f9
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r8,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r8.u64);
	// fmuls f4,f4,f13
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f13,f3,f13
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// fsubs f6,f0,f4
	ctx.f6.f64 = double(float(ctx.f0.f64 - ctx.f4.f64));
	// fadds f4,f5,f12
	ctx.f4.f64 = double(float(ctx.f5.f64 + ctx.f12.f64));
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fsubs f12,f12,f5
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f5.f64));
	// fmuls f13,f11,f8
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f8.f64));
	// fmuls f8,f6,f11
	ctx.f8.f64 = double(float(ctx.f6.f64 * ctx.f11.f64));
	// fmuls f11,f4,f11
	ctx.f11.f64 = double(float(ctx.f4.f64 * ctx.f11.f64));
	// fmuls f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// fmuls f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// lfs f10,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f10.f64 = double(temp.f32);
	// fadds f13,f13,f2
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f2.f64));
	// fadds f10,f10,f8
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f8.f64));
	// lfs f8,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f8.f64 = double(temp.f32);
	// fadds f11,f8,f11
	ctx.f11.f64 = double(float(ctx.f8.f64 + ctx.f11.f64));
	// fadds f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// stfs f13,0(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fadds f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// stfs f12,4(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fadds f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
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
	ctx.lr = 0x82126D54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r3,52(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 52);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82126d7c
	if (!ctx.cr6.eq) goto loc_82126D7C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f7,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f7.f64 = double(temp.f32);
	// lfs f0,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f7,f0
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// bl 0x8259d868
	ctx.lr = 0x82126D74;
	sub_8259D868(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// b 0x82126d80
	goto loc_82126D80;
loc_82126D7C:
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
loc_82126D80:
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r11,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r11.u8);
	// stb r10,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r10.u8);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x8259bbf4
	ctx.lr = 0x82126DA0;
	__restfpr_28(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82126DB0"))) PPC_WEAK_FUNC(sub_82126DB0);
PPC_FUNC_IMPL(__imp__sub_82126DB0) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82126DB8"))) PPC_WEAK_FUNC(sub_82126DB8);
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

__attribute__((alias("__imp__sub_82126DCC"))) PPC_WEAK_FUNC(sub_82126DCC);
PPC_FUNC_IMPL(__imp__sub_82126DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82126DD0"))) PPC_WEAK_FUNC(sub_82126DD0);
PPC_FUNC_IMPL(__imp__sub_82126DD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baec
	ctx.lr = 0x82126DD8;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,2400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2400);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8212709c
	if (!ctx.cr6.eq) goto loc_8212709C;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// addis r11,r11,35
	ctx.r11.s64 = ctx.r11.s64 + 2293760;
	// addi r3,r11,-31704
	ctx.r3.s64 = ctx.r11.s64 + -31704;
	// bl 0x820c8348
	ctx.lr = 0x82126E08;
	sub_820C8348(ctx, base);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// addi r29,r11,26080
	ctx.r29.s64 = ctx.r11.s64 + 26080;
	// ori r9,r10,16216
	ctx.r9.u64 = ctx.r10.u64 | 16216;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwzx r11,r29,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r9.u32);
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820fa4b0
	ctx.lr = 0x82126E2C;
	sub_820FA4B0(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82126f00
	if (ctx.cr6.eq) goto loc_82126F00;
	// lis r7,0
	ctx.r7.s64 = 0;
	// ori r6,r7,46280
	ctx.r6.u64 = ctx.r7.u64 | 46280;
	// lwzx r10,r30,r6
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r6.u32);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// beq cr6,0x8212709c
	if (ctx.cr6.eq) goto loc_8212709C;
	// lbz r5,2911(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2911);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8212709c
	if (!ctx.cr6.eq) goto loc_8212709C;
	// lis r4,7
	ctx.r4.s64 = 458752;
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mulli r9,r10,5956
	ctx.r9.s64 = ctx.r10.s64 * 5956;
	// ori r3,r4,16216
	ctx.r3.u64 = ctx.r4.u64 | 16216;
	// mulli r10,r8,328
	ctx.r10.s64 = ctx.r8.s64 * 328;
	// lwzx r11,r29,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r3.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r7,r10,r30
	ctx.r7.u64 = ctx.r10.u64 + ctx.r30.u64;
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,10636(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 10636);
	// add r6,r10,r25
	ctx.r6.u64 = ctx.r10.u64 + ctx.r25.u64;
	// mulli r10,r5,584
	ctx.r10.s64 = ctx.r5.s64 * 584;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,324(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 324);
	// cmpw cr6,r6,r3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x8212709c
	if (ctx.cr6.lt) goto loc_8212709C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,-1
	ctx.r9.s64 = -1;
	// lfs f1,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f1.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r30,r11,4864
	ctx.r30.s64 = ctx.r11.s64 + 4864;
	// stb r7,2911(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2911, ctx.r7.u8);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,210
	ctx.r4.s64 = 210;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8219c750
	ctx.lr = 0x82126EDC;
	sub_8219C750(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821939a0
	ctx.lr = 0x82126EE8;
	sub_821939A0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,30392(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 30392);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2912(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2912, temp.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
loc_82126F00:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821041d8
	ctx.lr = 0x82126F08;
	sub_821041D8(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8212709c
	if (!ctx.cr6.eq) goto loc_8212709C;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// lbz r4,2910(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2910);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r28,r11,-18560
	ctx.r28.s64 = ctx.r11.s64 + -18560;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// li r29,1
	ctx.r29.s64 = 1;
	// li r26,0
	ctx.r26.s64 = 0;
	// lfs f31,2864(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2864);
	ctx.f31.f64 = double(temp.f32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// lis r27,-32255
	ctx.r27.s64 = -2113863680;
	// addi r30,r11,4864
	ctx.r30.s64 = ctx.r11.s64 + 4864;
	// bne cr6,0x82126fb8
	if (!ctx.cr6.eq) goto loc_82126FB8;
	// lwz r3,2904(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2904);
	// cmpw cr6,r25,r3
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x82126fb8
	if (ctx.cr6.lt) goto loc_82126FB8;
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// addi r11,r11,16448
	ctx.r11.s64 = ctx.r11.s64 + 16448;
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r4,225
	ctx.r4.s64 = 225;
	// stb r29,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r29.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8219c750
	ctx.lr = 0x82126F84;
	sub_8219C750(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f0,30392(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 30392);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2912(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2912, temp.u32);
	// bl 0x821939a0
	ctx.lr = 0x82126F98;
	sub_821939A0(ctx, base);
	// addis r11,r28,8
	ctx.r11.s64 = ctx.r28.s64 + 524288;
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r29,2910(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2910, ctx.r29.u8);
	// li r4,22
	ctx.r4.s64 = 22;
	// stb r29,2909(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2909, ctx.r29.u8);
	// addi r3,r11,27808
	ctx.r3.s64 = ctx.r11.s64 + 27808;
	// stb r29,2908(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2908, ctx.r29.u8);
	// bl 0x822c9a28
	ctx.lr = 0x82126FB8;
	sub_822C9A28(ctx, base);
loc_82126FB8:
	// lbz r11,2909(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2909);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8212702c
	if (!ctx.cr6.eq) goto loc_8212702C;
	// lwz r10,2900(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2900);
	// cmpw cr6,r25,r10
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8212702c
	if (ctx.cr6.lt) goto loc_8212702C;
	// li r10,1
	ctx.r10.s64 = 1;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,224
	ctx.r4.s64 = 224;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8219c750
	ctx.lr = 0x82126FFC;
	sub_8219C750(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f0,30392(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 30392);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2912(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2912, temp.u32);
	// bl 0x821939a0
	ctx.lr = 0x82127010;
	sub_821939A0(ctx, base);
	// addis r11,r28,8
	ctx.r11.s64 = ctx.r28.s64 + 524288;
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r29,2909(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2909, ctx.r29.u8);
	// li r4,21
	ctx.r4.s64 = 21;
	// stb r29,2908(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2908, ctx.r29.u8);
	// addi r3,r11,27808
	ctx.r3.s64 = ctx.r11.s64 + 27808;
	// bl 0x822c9a28
	ctx.lr = 0x8212702C;
	sub_822C9A28(ctx, base);
loc_8212702C:
	// lbz r9,2908(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2908);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8212709c
	if (!ctx.cr6.eq) goto loc_8212709C;
	// lwz r8,2896(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2896);
	// cmpw cr6,r25,r8
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8212709c
	if (ctx.cr6.lt) goto loc_8212709C;
	// li r10,1
	ctx.r10.s64 = 1;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,223
	ctx.r4.s64 = 223;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8219c750
	ctx.lr = 0x82127070;
	sub_8219C750(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f0,30392(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 30392);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2912(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2912, temp.u32);
	// bl 0x821939a0
	ctx.lr = 0x82127084;
	sub_821939A0(ctx, base);
	// addis r11,r28,8
	ctx.r11.s64 = ctx.r28.s64 + 524288;
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r29,2908(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2908, ctx.r29.u8);
	// li r4,20
	ctx.r4.s64 = 20;
	// addi r3,r11,27808
	ctx.r3.s64 = ctx.r11.s64 + 27808;
	// bl 0x822c9a28
	ctx.lr = 0x8212709C;
	sub_822C9A28(ctx, base);
loc_8212709C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821270A8"))) PPC_WEAK_FUNC(sub_821270A8);
PPC_FUNC_IMPL(__imp__sub_821270A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,25
	ctx.r4.s64 = 25;
	// lwz r10,228(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_821270BC"))) PPC_WEAK_FUNC(sub_821270BC);
PPC_FUNC_IMPL(__imp__sub_821270BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821270C0"))) PPC_WEAK_FUNC(sub_821270C0);
PPC_FUNC_IMPL(__imp__sub_821270C0) {
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
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// stfs f1,164(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82127140
	if (ctx.cr6.eq) goto loc_82127140;
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,4
	ctx.r7.s64 = 4;
	// li r5,-1
	ctx.r5.s64 = -1;
	// lwz r11,8776(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8776);
	// lwz r6,380(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 380);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82127124;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lfs f1,172(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	ctx.f1.f64 = double(temp.f32);
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// addis r11,r11,35
	ctx.r11.s64 = ctx.r11.s64 + 2293760;
	// addi r3,r11,-31704
	ctx.r3.s64 = ctx.r11.s64 + -31704;
	// bl 0x820c84b0
	ctx.lr = 0x82127140;
	sub_820C84B0(ctx, base);
loc_82127140:
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// mulli r10,r31,11920
	ctx.r10.s64 = ctx.r31.s64 * 11920;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// addi r5,r1,164
	ctx.r5.s64 = ctx.r1.s64 + 164;
	// li r4,23
	ctx.r4.s64 = 23;
	// addis r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 196608;
	// addi r11,r11,-11424
	ctx.r11.s64 = ctx.r11.s64 + -11424;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82127170;
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

__attribute__((alias("__imp__sub_82127188"))) PPC_WEAK_FUNC(sub_82127188);
PPC_FUNC_IMPL(__imp__sub_82127188) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x82127190;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lbz r11,2892(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 2892);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821272c8
	if (!ctx.cr6.eq) goto loc_821272C8;
	// lbz r10,624(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 624);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x821272b0
	if (!ctx.cr6.eq) goto loc_821272B0;
	// lwz r11,6912(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 6912);
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r10,r10,4864
	ctx.r10.s64 = ctx.r10.s64 + 4864;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r30,19168(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19168);
	// lbz r9,15480(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 15480);
	// mulli r11,r30,1104
	ctx.r11.s64 = ctx.r30.s64 * 1104;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsb r31,r9
	ctx.r31.s64 = ctx.r9.s8;
	// bl 0x82188300
	ctx.lr = 0x821271E8;
	sub_82188300(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82127268
	if (ctx.cr6.eq) goto loc_82127268;
	// lwz r8,16(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// cmpwi cr6,r8,40
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 40, ctx.xer);
	// bne cr6,0x82127268
	if (!ctx.cr6.eq) goto loc_82127268;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// mulli r10,r30,11920
	ctx.r10.s64 = ctx.r30.s64 * 11920;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,32
	ctx.r4.s64 = 32;
	// addis r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 196608;
	// addi r11,r11,-11424
	ctx.r11.s64 = ctx.r11.s64 + -11424;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,12(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8212722C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r11,r11,-18560
	ctx.r11.s64 = ctx.r11.s64 + -18560;
	// li r4,5
	ctx.r4.s64 = 5;
	// addis r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 524288;
	// addi r3,r11,27808
	ctx.r3.s64 = ctx.r11.s64 + 27808;
	// bl 0x822c9a28
	ctx.lr = 0x82127248;
	sub_822C9A28(ctx, base);
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// li r5,1
	ctx.r5.s64 = 1;
	// add r4,r31,r11
	ctx.r4.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r11,r11,2388
	ctx.r11.s64 = ctx.r11.s64 + 2388;
	// stb r5,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r5.u8);
	// b 0x82127284
	goto loc_82127284;
loc_82127268:
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// li r3,1
	ctx.r3.s64 = 1;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r11,r11,2388
	ctx.r11.s64 = ctx.r11.s64 + 2388;
	// stb r3,18(r11)
	PPC_STORE_U8(ctx.r11.u32 + 18, ctx.r3.u8);
loc_82127284:
	// lbz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821272a8
	if (!ctx.cr6.eq) goto loc_821272A8;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// addis r11,r11,35
	ctx.r11.s64 = ctx.r11.s64 + 2293760;
	// addi r3,r11,-31704
	ctx.r3.s64 = ctx.r11.s64 + -31704;
	// bl 0x820c7bc8
	ctx.lr = 0x821272A8;
	sub_820C7BC8(ctx, base);
loc_821272A8:
	// add r9,r30,r29
	ctx.r9.u64 = ctx.r30.u64 + ctx.r29.u64;
	// stb r26,2880(r9)
	PPC_STORE_U8(ctx.r9.u32 + 2880, ctx.r26.u8);
loc_821272B0:
	// lwz r11,6912(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 6912);
	// stb r26,13470(r11)
	PPC_STORE_U8(ctx.r11.u32 + 13470, ctx.r26.u8);
	// stb r26,13471(r11)
	PPC_STORE_U8(ctx.r11.u32 + 13471, ctx.r26.u8);
	// lwz r11,6912(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 6912);
	// addi r3,r11,13280
	ctx.r3.s64 = ctx.r11.s64 + 13280;
	// bl 0x820ac8c8
	ctx.lr = 0x821272C8;
	sub_820AC8C8(ctx, base);
loc_821272C8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821272D0"))) PPC_WEAK_FUNC(sub_821272D0);
PPC_FUNC_IMPL(__imp__sub_821272D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,6912(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 6912);
	// lwz r3,14768(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14768);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x820add18
	sub_820ADD18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821272E4"))) PPC_WEAK_FUNC(sub_821272E4);
PPC_FUNC_IMPL(__imp__sub_821272E4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821272E8"))) PPC_WEAK_FUNC(sub_821272E8);
PPC_FUNC_IMPL(__imp__sub_821272E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// addis r11,r11,35
	ctx.r11.s64 = ctx.r11.s64 + 2293760;
	// addi r3,r11,-31704
	ctx.r3.s64 = ctx.r11.s64 + -31704;
	// b 0x820c7f40
	sub_820C7F40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821272FC"))) PPC_WEAK_FUNC(sub_821272FC);
PPC_FUNC_IMPL(__imp__sub_821272FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82127300"))) PPC_WEAK_FUNC(sub_82127300);
PPC_FUNC_IMPL(__imp__sub_82127300) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x82127308;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lbz r11,624(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 624);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r28,r11,26080
	ctx.r28.s64 = ctx.r11.s64 + 26080;
	// bne cr6,0x82127474
	if (!ctx.cr6.eq) goto loc_82127474;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lbz r10,627(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 627);
	// addi r31,r11,28544
	ctx.r31.s64 = ctx.r11.s64 + 28544;
	// addis r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 262144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r9,r11,28848
	ctx.r9.s64 = ctx.r11.s64 + 28848;
	// lbzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// extsb r4,r8
	ctx.r4.s64 = ctx.r8.s8;
	// bl 0x8232da90
	ctx.lr = 0x8212734C;
	sub_8232DA90(ctx, base);
	// lwz r7,15328(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15328);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x8212736c
	if (!ctx.cr6.eq) goto loc_8212736C;
	// addis r11,r31,35
	ctx.r11.s64 = ctx.r31.s64 + 2293760;
	// lwz r4,19168(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19168);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r11,-31704
	ctx.r3.s64 = ctx.r11.s64 + -31704;
	// bl 0x820c8550
	ctx.lr = 0x8212736C;
	sub_820C8550(ctx, base);
loc_8212736C:
	// addis r11,r28,7
	ctx.r11.s64 = ctx.r28.s64 + 458752;
	// addi r3,r11,14408
	ctx.r3.s64 = ctx.r11.s64 + 14408;
	// bl 0x82121388
	ctx.lr = 0x82127378;
	sub_82121388(ctx, base);
	// lwz r11,19632(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 19632);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bgt cr6,0x82127474
	if (ctx.cr6.gt) goto loc_82127474;
	// lis r12,-32238
	ctx.r12.s64 = -2112749568;
	// addi r12,r12,29600
	ctx.r12.s64 = ctx.r12.s64 + 29600;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_821273CC;
	case 1:
		goto loc_821273E4;
	case 2:
		goto loc_821273FC;
	case 3:
		goto loc_82127414;
	case 4:
		goto loc_8212742C;
	case 5:
		goto loc_82127474;
	case 6:
		goto loc_82127474;
	case 7:
		goto loc_82127444;
	case 8:
		goto loc_82127474;
	case 9:
		goto loc_82127474;
	case 10:
		goto loc_8212745C;
	default:
		__builtin_unreachable();
	}
	// lwz r16,29644(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + 29644);
	// lwz r16,29668(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + 29668);
	// lwz r16,29692(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + 29692);
	// lwz r16,29716(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + 29716);
	// lwz r16,29740(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + 29740);
	// lwz r16,29812(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + 29812);
	// lwz r16,29812(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + 29812);
	// lwz r16,29764(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + 29764);
	// lwz r16,29812(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + 29812);
	// lwz r16,29812(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + 29812);
	// lwz r16,29788(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + 29788);
loc_821273CC:
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r4,31
	ctx.r4.s64 = 31;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,228(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 228);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// b 0x82127470
	goto loc_82127470;
loc_821273E4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,228(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// b 0x82127470
	goto loc_82127470;
loc_821273FC:
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r4,33
	ctx.r4.s64 = 33;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r8,228(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 228);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// b 0x82127470
	goto loc_82127470;
loc_82127414:
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r4,36
	ctx.r4.s64 = 36;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r6,228(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 228);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// b 0x82127470
	goto loc_82127470;
loc_8212742C:
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r4,34
	ctx.r4.s64 = 34;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,228(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 228);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// b 0x82127470
	goto loc_82127470;
loc_82127444:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r4,35
	ctx.r4.s64 = 35;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r9,228(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 228);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// b 0x82127470
	goto loc_82127470;
loc_8212745C:
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r4,37
	ctx.r4.s64 = 37;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r7,228(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 228);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_82127470:
	// bctrl 
	ctx.lr = 0x82127474;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82127474:
	// addis r11,r28,3
	ctx.r11.s64 = ctx.r28.s64 + 196608;
	// addi r31,r11,-11424
	ctx.r31.s64 = ctx.r11.s64 + -11424;
loc_8212747C:
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,35
	ctx.r4.s64 = 35;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82127498;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addis r11,r28,3
	ctx.r11.s64 = ctx.r28.s64 + 196608;
	// addi r31,r31,11920
	ctx.r31.s64 = ctx.r31.s64 + 11920;
	// addi r10,r11,12416
	ctx.r10.s64 = ctx.r11.s64 + 12416;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8212747c
	if (ctx.cr6.lt) goto loc_8212747C;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821274B4"))) PPC_WEAK_FUNC(sub_821274B4);
PPC_FUNC_IMPL(__imp__sub_821274B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821274B8"))) PPC_WEAK_FUNC(sub_821274B8);
PPC_FUNC_IMPL(__imp__sub_821274B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r11,r11,-18560
	ctx.r11.s64 = ctx.r11.s64 + -18560;
	// li r4,1
	ctx.r4.s64 = 1;
	// addis r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 524288;
	// addi r3,r11,27808
	ctx.r3.s64 = ctx.r11.s64 + 27808;
	// b 0x822c9a28
	sub_822C9A28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821274D4"))) PPC_WEAK_FUNC(sub_821274D4);
PPC_FUNC_IMPL(__imp__sub_821274D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}


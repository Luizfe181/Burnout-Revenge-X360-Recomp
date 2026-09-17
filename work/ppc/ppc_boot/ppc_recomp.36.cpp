#include "graphics_dispatch.h"
#include "ppc_recomp_shared.h"
__attribute__((alias("__imp__sub_822BD5A8"))) PPC_WEAK_FUNC(sub_822BD5A8);
__attribute__((alias("__imp__sub_822BD928"))) PPC_WEAK_FUNC(sub_822BD928);
__attribute__((alias("__imp__sub_822BDF08"))) PPC_WEAK_FUNC(sub_822BDF08);
__attribute__((alias("__imp__sub_822BEFC0"))) PPC_WEAK_FUNC(sub_822BEFC0);
__attribute__((alias("__imp__sub_822BF560"))) PPC_WEAK_FUNC(sub_822BF560);
__attribute__((alias("__imp__sub_822BF618"))) PPC_WEAK_FUNC(sub_822BF618);
__attribute__((alias("__imp__sub_822C0EF0"))) PPC_WEAK_FUNC(sub_822C0EF0);
__attribute__((alias("__imp__sub_822C0FC0"))) PPC_WEAK_FUNC(sub_822C0FC0);
__attribute__((alias("__imp__sub_822C1060"))) PPC_WEAK_FUNC(sub_822C1060);
__attribute__((alias("__imp__sub_822C1388"))) PPC_WEAK_FUNC(sub_822C1388);
__attribute__((alias("__imp__sub_822C2058"))) PPC_WEAK_FUNC(sub_822C2058);
__attribute__((alias("__imp__sub_822C3AB0"))) PPC_WEAK_FUNC(sub_822C3AB0);
__attribute__((alias("__imp__sub_822C4BA0"))) PPC_WEAK_FUNC(sub_822C4BA0);
__attribute__((alias("__imp__sub_822C5960"))) PPC_WEAK_FUNC(sub_822C5960);
__attribute__((alias("__imp__sub_822C5988"))) PPC_WEAK_FUNC(sub_822C5988);
__attribute__((alias("__imp__sub_822C8238"))) PPC_WEAK_FUNC(sub_822C8238);
__attribute__((alias("__imp__sub_822C85D0"))) PPC_WEAK_FUNC(sub_822C85D0);
__attribute__((alias("__imp__sub_822C8678"))) PPC_WEAK_FUNC(sub_822C8678);
__attribute__((alias("__imp__sub_822C86C0"))) PPC_WEAK_FUNC(sub_822C86C0);
__attribute__((alias("__imp__sub_822C8720"))) PPC_WEAK_FUNC(sub_822C8720);
__attribute__((alias("__imp__sub_822C8768"))) PPC_WEAK_FUNC(sub_822C8768);
__attribute__((alias("__imp__sub_822C87A8"))) PPC_WEAK_FUNC(sub_822C87A8);
__attribute__((alias("__imp__sub_822C8870"))) PPC_WEAK_FUNC(sub_822C8870);
__attribute__((alias("__imp__sub_822C9A28"))) PPC_WEAK_FUNC(sub_822C9A28);
__attribute__((alias("__imp__sub_822CABE8"))) PPC_WEAK_FUNC(sub_822CABE8);
__attribute__((alias("__imp__sub_822CB2E0"))) PPC_WEAK_FUNC(sub_822CB2E0);
__attribute__((alias("__imp__sub_822CB3E0"))) PPC_WEAK_FUNC(sub_822CB3E0);
__attribute__((alias("__imp__sub_822CB488"))) PPC_WEAK_FUNC(sub_822CB488);
__attribute__((alias("__imp__sub_822CB4F0"))) PPC_WEAK_FUNC(sub_822CB4F0);
__attribute__((alias("__imp__sub_822CBB50"))) PPC_WEAK_FUNC(sub_822CBB50);
__attribute__((alias("__imp__sub_822CBBE0"))) PPC_WEAK_FUNC(sub_822CBBE0);
__attribute__((alias("__imp__sub_822CBD90"))) PPC_WEAK_FUNC(sub_822CBD90);
__attribute__((alias("__imp__sub_822CBE40"))) PPC_WEAK_FUNC(sub_822CBE40);
__attribute__((alias("__imp__sub_822CBEB8"))) PPC_WEAK_FUNC(sub_822CBEB8);
__attribute__((alias("__imp__sub_822CC288"))) PPC_WEAK_FUNC(sub_822CC288);
__attribute__((alias("__imp__sub_822CE270"))) PPC_WEAK_FUNC(sub_822CE270);
__attribute__((alias("__imp__sub_822D0138"))) PPC_WEAK_FUNC(sub_822D0138);
__attribute__((alias("__imp__sub_822D08B0"))) PPC_WEAK_FUNC(sub_822D08B0);
__attribute__((alias("__imp__sub_822D0960"))) PPC_WEAK_FUNC(sub_822D0960);
__attribute__((alias("__imp__sub_822D0A28"))) PPC_WEAK_FUNC(sub_822D0A28);
PPC_FUNC_IMPL(__imp__sub_822BD5A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r8,-32085
	ctx.r8.s64 = -2102722560;
	// lis r9,-32160
	ctx.r9.s64 = -2107637760;
	// lis r10,-32160
	ctx.r10.s64 = -2107637760;
	// addi r11,r11,6756
	ctx.r11.s64 = ctx.r11.s64 + 6756;
	// lfs f0,2864(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// li r6,5
	ctx.r6.s64 = 5;
	// lfs f12,-1756(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -1756);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// lfs f13,-25940(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -25940);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,-25944(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25944);
	ctx.f11.f64 = double(temp.f32);
loc_822BD5D8:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x822bd620
	if (!ctx.cr6.eq) goto loc_822BD620;
	// stfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// stfs f11,-4(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// ble cr6,0x822bd614
	if (!ctx.cr6.gt) goto loc_822BD614;
	// fmr f10,f11
	ctx.f10.f64 = ctx.f11.f64;
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fmr f8,f13
	ctx.f8.f64 = ctx.f13.f64;
	// fsubs f9,f12,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// fdivs f7,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 / ctx.f8.f64));
	// stfs f7,4(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// b 0x822bd620
	goto loc_822BD620;
loc_822BD614:
	// stfs f12,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
loc_822BD620:
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// addi r11,r11,68
	ctx.r11.s64 = ctx.r11.s64 + 68;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x822bd5d8
	if (!ctx.cr6.eq) goto loc_822BD5D8;
	// blr 
	return;
}
PPC_FUNC_IMPL(__imp__sub_822BD928) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bac0
	ctx.lr = 0x822BD930;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x8259bba0
	ctx.lr = 0x822BD938;
	__savefpr_26(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822BD950;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r20,56
	ctx.r3.s64 = ctx.r20.s64 + 56;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822BD964;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r20,112
	ctx.r3.s64 = ctx.r20.s64 + 112;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x822BD978;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32160
	ctx.r10.s64 = -2107637760;
	// lis r5,697
	ctx.r5.s64 = 45678592;
	// addi r26,r10,-19308
	ctx.r26.s64 = ctx.r10.s64 + -19308;
	// lis r9,-698
	ctx.r9.s64 = -45744128;
	// lfs f0,-27244(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27244);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r27,r20,224
	ctx.r27.s64 = ctx.r20.s64 + 224;
	// lwz r10,-4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4);
	// addi r4,r20,232
	ctx.r4.s64 = ctx.r20.s64 + 232;
	// ori r3,r5,55032
	ctx.r3.u64 = ctx.r5.u64 | 55032;
	// stw r26,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// lfs f13,-1604(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1604);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// ori r8,r9,10503
	ctx.r8.u64 = ctx.r9.u64 | 10503;
	// stb r30,229(r20)
	PPC_STORE_U8(ctx.r20.u32 + 229, ctx.r30.u8);
	// addi r11,r11,-18560
	ctx.r11.s64 = ctx.r11.s64 + -18560;
	// stw r30,308(r20)
	PPC_STORE_U32(ctx.r20.u32 + 308, ctx.r30.u32);
	// li r7,4
	ctx.r7.s64 = 4;
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// addis r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 524288;
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// stw r3,316(r20)
	PPC_STORE_U32(ctx.r20.u32 + 316, ctx.r3.u32);
	// addi r6,r11,11888
	ctx.r6.s64 = ctx.r11.s64 + 11888;
	// stw r8,312(r20)
	PPC_STORE_U32(ctx.r20.u32 + 312, ctx.r8.u32);
	// lbz r5,236(r20)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r20.u32 + 236);
	// stfs f13,324(r20)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r20.u32 + 324, temp.u32);
	// stw r7,240(r20)
	PPC_STORE_U32(ctx.r20.u32 + 240, ctx.r7.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stb r30,320(r20)
	PPC_STORE_U8(ctx.r20.u32 + 320, ctx.r30.u8);
	// stb r30,321(r20)
	PPC_STORE_U8(ctx.r20.u32 + 321, ctx.r30.u8);
	// stw r6,216(r20)
	PPC_STORE_U32(ctx.r20.u32 + 216, ctx.r6.u32);
	// stb r30,322(r20)
	PPC_STORE_U8(ctx.r20.u32 + 322, ctx.r30.u8);
	// bne cr6,0x822bdd20
	if (!ctx.cr6.eq) goto loc_822BDD20;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// lis r28,-32047
	ctx.r28.s64 = -2100232192;
	// addi r29,r11,12004
	ctx.r29.s64 = ctx.r11.s64 + 12004;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lfs f31,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f31.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// addi r31,r11,12288
	ctx.r31.s64 = ctx.r11.s64 + 12288;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,12268
	ctx.r5.s64 = ctx.r11.s64 + 12268;
	// lwz r11,20160(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x822BDA4C;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r5,r11,12252
	ctx.r5.s64 = ctx.r11.s64 + 12252;
	// lwz r11,20160(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20160);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823514f8
	ctx.lr = 0x822BDA7C;
	sub_823514F8(ctx, base);
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r31,r26,40
	ctx.r31.s64 = ctx.r26.s64 + 40;
	// addi r11,r11,-19304
	ctx.r11.s64 = ctx.r11.s64 + -19304;
	// lis r10,-32085
	ctx.r10.s64 = -2102722560;
	// addi r26,r11,4
	ctx.r26.s64 = ctx.r11.s64 + 4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r10,r10,-1744
	ctx.r10.s64 = ctx.r10.s64 + -1744;
	// addi r19,r11,12232
	ctx.r19.s64 = ctx.r11.s64 + 12232;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r27,r10,4
	ctx.r27.s64 = ctx.r10.s64 + 4;
	// addi r18,r11,12212
	ctx.r18.s64 = ctx.r11.s64 + 12212;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// addi r17,r11,12192
	ctx.r17.s64 = ctx.r11.s64 + 12192;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r16,r11,12168
	ctx.r16.s64 = ctx.r11.s64 + 12168;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f26,1940(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 1940);
	ctx.f26.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r15,r11,12144
	ctx.r15.s64 = ctx.r11.s64 + 12144;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f27,25560(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 25560);
	ctx.f27.f64 = double(temp.f32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r14,r11,12124
	ctx.r14.s64 = ctx.r11.s64 + 12124;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f30,25556(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 25556);
	ctx.f30.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r4,r11,12112
	ctx.r4.s64 = ctx.r11.s64 + 12112;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f28,-1528(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -1528);
	ctx.f28.f64 = double(temp.f32);
	// li r25,3
	ctx.r25.s64 = 3;
	// addi r3,r11,12096
	ctx.r3.s64 = ctx.r11.s64 + 12096;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f29,2868(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2868);
	ctx.f29.f64 = double(temp.f32);
	// stw r4,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r4.u32);
	// addi r11,r11,12076
	ctx.r11.s64 = ctx.r11.s64 + 12076;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
loc_822BDB18:
	// lwz r11,20160(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r26,-4
	ctx.r4.s64 = ctx.r26.s64 + -4;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bl 0x82351720
	ctx.lr = 0x822BDB44;
	sub_82351720(ctx, base);
	// lwz r11,20160(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bl 0x82351720
	ctx.lr = 0x822BDB70;
	sub_82351720(ctx, base);
	// lwz r11,20160(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r4,r26,4
	ctx.r4.s64 = ctx.r26.s64 + 4;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bl 0x82351720
	ctx.lr = 0x822BDB9C;
	sub_82351720(ctx, base);
	// addi r4,r27,16
	ctx.r4.s64 = ctx.r27.s64 + 16;
	// addi r24,r27,-4
	ctx.r24.s64 = ctx.r27.s64 + -4;
	// lwz r11,20160(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20160);
	// addi r23,r27,4
	ctx.r23.s64 = ctx.r27.s64 + 4;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r22,r27,8
	ctx.r22.s64 = ctx.r27.s64 + 8;
	// stfs f30,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// addi r21,r27,12
	ctx.r21.s64 = ctx.r27.s64 + 12;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// li r8,0
	ctx.r8.s64 = 0;
	// stfs f29,0(r4)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// stfs f28,0(r24)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r24.u32 + 0, temp.u32);
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
	// stfs f27,0(r23)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r23.u32 + 0, temp.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stfs f26,0(r22)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r22.u32 + 0, temp.u32);
	// stfs f30,0(r21)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r21.u32 + 0, temp.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82351720
	ctx.lr = 0x822BDBF0;
	sub_82351720(ctx, base);
	// lwz r11,20160(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bl 0x82351720
	ctx.lr = 0x822BDC1C;
	sub_82351720(ctx, base);
	// lwz r11,20160(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x822BDC48;
	sub_82351720(ctx, base);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lwz r11,20160(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20160);
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x822BDC74;
	sub_82351720(ctx, base);
	// lwz r11,20160(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x822BDCA0;
	sub_82351720(ctx, base);
	// lwz r11,20160(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x822BDCCC;
	sub_82351720(ctx, base);
	// addi r25,r25,-1
	ctx.r25.s64 = ctx.r25.s64 + -1;
	// addi r26,r26,12
	ctx.r26.s64 = ctx.r26.s64 + 12;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r27,r27,24
	ctx.r27.s64 = ctx.r27.s64 + 24;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x822bdb18
	if (!ctx.cr6.eq) goto loc_822BDB18;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r4,108(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r6,r11,-1824
	ctx.r6.s64 = ctx.r11.s64 + -1824;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r5,r11,12056
	ctx.r5.s64 = ctx.r11.s64 + 12056;
	// lwz r11,20160(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x822BDD18;
	sub_82351720(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,236(r20)
	PPC_STORE_U8(ctx.r20.u32 + 236, ctx.r10.u8);
loc_822BDD20:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x8259bbec
	ctx.lr = 0x822BDD2C;
	__restfpr_26(ctx, base);
	// b 0x8259bb10
	__restgprlr_14(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_822BDF08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x822BDF10;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822acd18
	ctx.lr = 0x822BDF20;
	sub_822ACD18(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r27,-32047
	ctx.r27.s64 = -2100232192;
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f31,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f31.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stfs f31,20(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stb r29,25548(r31)
	PPC_STORE_U8(ctx.r31.u32 + 25548, ctx.r29.u8);
	// addi r28,r11,968
	ctx.r28.s64 = ctx.r11.s64 + 968;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r6,r11,12452
	ctx.r6.s64 = ctx.r11.s64 + 12452;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r5,r11,12428
	ctx.r5.s64 = ctx.r11.s64 + 12428;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r30,r11,-19160
	ctx.r30.s64 = ctx.r11.s64 + -19160;
	// lwz r11,20160(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20160);
	// addi r4,r30,188
	ctx.r4.s64 = ctx.r30.s64 + 188;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x822BDF7C;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r30,92
	ctx.r4.s64 = ctx.r30.s64 + 92;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r6,r11,12396
	ctx.r6.s64 = ctx.r11.s64 + 12396;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r11,12368
	ctx.r5.s64 = ctx.r11.s64 + 12368;
	// lwz r11,20160(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20160);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x822BDFB0;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r28,r31,24076
	ctx.r28.s64 = ctx.r31.s64 + 24076;
	// addi r27,r11,12320
	ctx.r27.s64 = ctx.r11.s64 + 12320;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r26,r11,12300
	ctx.r26.s64 = ctx.r11.s64 + 12300;
loc_822BDFC4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x8259d1b0
	ctx.lr = 0x822BDFD4;
	sub_8259D1B0(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822ace48
	ctx.lr = 0x822BDFE8;
	sub_822ACE48(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r28,r28,64
	ctx.r28.s64 = ctx.r28.s64 + 64;
	// cmpwi cr6,r29,23
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 23, ctx.xer);
	// blt cr6,0x822bdfc4
	if (ctx.cr6.lt) goto loc_822BDFC4;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_822BEFC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x822BEFC8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32047
	ctx.r30.s64 = -2100232192;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r31,r11,-13400
	ctx.r31.s64 = ctx.r11.s64 + -13400;
	// mulli r29,r28,552
	ctx.r29.s64 = ctx.r28.s64 * 552;
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// add r4,r29,r31
	ctx.r4.u64 = ctx.r29.u64 + ctx.r31.u64;
	// bl 0x82350c88
	ctx.lr = 0x822BEFF0;
	sub_82350C88(ctx, base);
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82350c88
	ctx.lr = 0x822BF004;
	sub_82350C88(ctx, base);
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// addi r11,r31,20
	ctx.r11.s64 = ctx.r31.s64 + 20;
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82350c88
	ctx.lr = 0x822BF018;
	sub_82350C88(ctx, base);
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82350c88
	ctx.lr = 0x822BF02C;
	sub_82350C88(ctx, base);
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// addi r11,r31,28
	ctx.r11.s64 = ctx.r31.s64 + 28;
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82350c88
	ctx.lr = 0x822BF040;
	sub_82350C88(ctx, base);
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// addi r11,r31,44
	ctx.r11.s64 = ctx.r31.s64 + 44;
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82350c88
	ctx.lr = 0x822BF054;
	sub_82350C88(ctx, base);
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// addi r11,r31,48
	ctx.r11.s64 = ctx.r31.s64 + 48;
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82350c88
	ctx.lr = 0x822BF068;
	sub_82350C88(ctx, base);
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// addi r11,r31,52
	ctx.r11.s64 = ctx.r31.s64 + 52;
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82350c88
	ctx.lr = 0x822BF07C;
	sub_82350C88(ctx, base);
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// addi r11,r31,68
	ctx.r11.s64 = ctx.r31.s64 + 68;
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82350c88
	ctx.lr = 0x822BF090;
	sub_82350C88(ctx, base);
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// addi r11,r31,72
	ctx.r11.s64 = ctx.r31.s64 + 72;
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82350c88
	ctx.lr = 0x822BF0A4;
	sub_82350C88(ctx, base);
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// addi r11,r31,76
	ctx.r11.s64 = ctx.r31.s64 + 76;
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82350c88
	ctx.lr = 0x822BF0B8;
	sub_82350C88(ctx, base);
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// addi r11,r31,92
	ctx.r11.s64 = ctx.r31.s64 + 92;
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82350c88
	ctx.lr = 0x822BF0CC;
	sub_82350C88(ctx, base);
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// addi r11,r31,96
	ctx.r11.s64 = ctx.r31.s64 + 96;
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82350c88
	ctx.lr = 0x822BF0E0;
	sub_82350C88(ctx, base);
	// addi r11,r31,100
	ctx.r11.s64 = ctx.r31.s64 + 100;
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82350c88
	ctx.lr = 0x822BF0F4;
	sub_82350C88(ctx, base);
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// addi r11,r31,116
	ctx.r11.s64 = ctx.r31.s64 + 116;
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82350c88
	ctx.lr = 0x822BF108;
	sub_82350C88(ctx, base);
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// addi r11,r31,120
	ctx.r11.s64 = ctx.r31.s64 + 120;
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82350c88
	ctx.lr = 0x822BF11C;
	sub_82350C88(ctx, base);
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// addi r11,r31,124
	ctx.r11.s64 = ctx.r31.s64 + 124;
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82350c88
	ctx.lr = 0x822BF130;
	sub_82350C88(ctx, base);
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// addi r11,r31,140
	ctx.r11.s64 = ctx.r31.s64 + 140;
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82350c88
	ctx.lr = 0x822BF144;
	sub_82350C88(ctx, base);
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// addi r11,r31,144
	ctx.r11.s64 = ctx.r31.s64 + 144;
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82350c88
	ctx.lr = 0x822BF158;
	sub_82350C88(ctx, base);
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// addi r11,r31,148
	ctx.r11.s64 = ctx.r31.s64 + 148;
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82350c88
	ctx.lr = 0x822BF16C;
	sub_82350C88(ctx, base);
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// addi r11,r31,164
	ctx.r11.s64 = ctx.r31.s64 + 164;
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82350c88
	ctx.lr = 0x822BF180;
	sub_82350C88(ctx, base);
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// addi r11,r31,168
	ctx.r11.s64 = ctx.r31.s64 + 168;
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82350c88
	ctx.lr = 0x822BF194;
	sub_82350C88(ctx, base);
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// addi r11,r31,172
	ctx.r11.s64 = ctx.r31.s64 + 172;
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82350c88
	ctx.lr = 0x822BF1A8;
	sub_82350C88(ctx, base);
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// addi r11,r31,188
	ctx.r11.s64 = ctx.r31.s64 + 188;
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82350c88
	ctx.lr = 0x822BF1BC;
	sub_82350C88(ctx, base);
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// addi r11,r31,192
	ctx.r11.s64 = ctx.r31.s64 + 192;
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82350c88
	ctx.lr = 0x822BF1D0;
	sub_82350C88(ctx, base);
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// addi r11,r31,196
	ctx.r11.s64 = ctx.r31.s64 + 196;
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82350c88
	ctx.lr = 0x822BF1E4;
	sub_82350C88(ctx, base);
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// addi r11,r31,212
	ctx.r11.s64 = ctx.r31.s64 + 212;
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82350c88
	ctx.lr = 0x822BF1F8;
	sub_82350C88(ctx, base);
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// addi r11,r31,216
	ctx.r11.s64 = ctx.r31.s64 + 216;
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82350c88
	ctx.lr = 0x822BF20C;
	sub_82350C88(ctx, base);
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// addi r11,r31,220
	ctx.r11.s64 = ctx.r31.s64 + 220;
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82350c88
	ctx.lr = 0x822BF220;
	sub_82350C88(ctx, base);
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// addi r11,r31,236
	ctx.r11.s64 = ctx.r31.s64 + 236;
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82350c88
	ctx.lr = 0x822BF234;
	sub_82350C88(ctx, base);
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// addi r11,r31,240
	ctx.r11.s64 = ctx.r31.s64 + 240;
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82350c88
	ctx.lr = 0x822BF248;
	sub_82350C88(ctx, base);
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// addi r11,r31,244
	ctx.r11.s64 = ctx.r31.s64 + 244;
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82350c88
	ctx.lr = 0x822BF25C;
	sub_82350C88(ctx, base);
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// addi r11,r31,260
	ctx.r11.s64 = ctx.r31.s64 + 260;
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82350c88
	ctx.lr = 0x822BF270;
	sub_82350C88(ctx, base);
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// addi r11,r31,264
	ctx.r11.s64 = ctx.r31.s64 + 264;
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82350c88
	ctx.lr = 0x822BF284;
	sub_82350C88(ctx, base);
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// addi r11,r31,268
	ctx.r11.s64 = ctx.r31.s64 + 268;
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82350c88
	ctx.lr = 0x822BF298;
	sub_82350C88(ctx, base);
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// addi r11,r31,284
	ctx.r11.s64 = ctx.r31.s64 + 284;
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82350c88
	ctx.lr = 0x822BF2AC;
	sub_82350C88(ctx, base);
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// addi r11,r31,288
	ctx.r11.s64 = ctx.r31.s64 + 288;
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82350c88
	ctx.lr = 0x822BF2C0;
	sub_82350C88(ctx, base);
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// addi r11,r31,292
	ctx.r11.s64 = ctx.r31.s64 + 292;
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82350c88
	ctx.lr = 0x822BF2D4;
	sub_82350C88(ctx, base);
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// addi r11,r31,308
	ctx.r11.s64 = ctx.r31.s64 + 308;
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82350c88
	ctx.lr = 0x822BF2E8;
	sub_82350C88(ctx, base);
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// addi r11,r31,312
	ctx.r11.s64 = ctx.r31.s64 + 312;
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82350c88
	ctx.lr = 0x822BF2FC;
	sub_82350C88(ctx, base);
	// addi r11,r31,316
	ctx.r11.s64 = ctx.r31.s64 + 316;
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82350c88
	ctx.lr = 0x822BF310;
	sub_82350C88(ctx, base);
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// addi r11,r31,332
	ctx.r11.s64 = ctx.r31.s64 + 332;
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82350c88
	ctx.lr = 0x822BF324;
	sub_82350C88(ctx, base);
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// addi r11,r31,336
	ctx.r11.s64 = ctx.r31.s64 + 336;
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82350c88
	ctx.lr = 0x822BF338;
	sub_82350C88(ctx, base);
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// addi r11,r31,340
	ctx.r11.s64 = ctx.r31.s64 + 340;
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82350c88
	ctx.lr = 0x822BF34C;
	sub_82350C88(ctx, base);
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// addi r11,r31,356
	ctx.r11.s64 = ctx.r31.s64 + 356;
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82350c88
	ctx.lr = 0x822BF360;
	sub_82350C88(ctx, base);
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// addi r11,r31,360
	ctx.r11.s64 = ctx.r31.s64 + 360;
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82350c88
	ctx.lr = 0x822BF374;
	sub_82350C88(ctx, base);
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// addi r11,r31,364
	ctx.r11.s64 = ctx.r31.s64 + 364;
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82350c88
	ctx.lr = 0x822BF388;
	sub_82350C88(ctx, base);
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// addi r11,r31,380
	ctx.r11.s64 = ctx.r31.s64 + 380;
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82350c88
	ctx.lr = 0x822BF39C;
	sub_82350C88(ctx, base);
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// addi r11,r31,384
	ctx.r11.s64 = ctx.r31.s64 + 384;
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82350c88
	ctx.lr = 0x822BF3B0;
	sub_82350C88(ctx, base);
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// addi r11,r31,388
	ctx.r11.s64 = ctx.r31.s64 + 388;
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82350c88
	ctx.lr = 0x822BF3C4;
	sub_82350C88(ctx, base);
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// addi r11,r31,404
	ctx.r11.s64 = ctx.r31.s64 + 404;
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82350c88
	ctx.lr = 0x822BF3D8;
	sub_82350C88(ctx, base);
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// addi r11,r31,408
	ctx.r11.s64 = ctx.r31.s64 + 408;
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82350c88
	ctx.lr = 0x822BF3EC;
	sub_82350C88(ctx, base);
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// addi r11,r31,412
	ctx.r11.s64 = ctx.r31.s64 + 412;
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82350c88
	ctx.lr = 0x822BF400;
	sub_82350C88(ctx, base);
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// addi r11,r31,428
	ctx.r11.s64 = ctx.r31.s64 + 428;
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82350c88
	ctx.lr = 0x822BF414;
	sub_82350C88(ctx, base);
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// addi r11,r31,432
	ctx.r11.s64 = ctx.r31.s64 + 432;
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82350c88
	ctx.lr = 0x822BF428;
	sub_82350C88(ctx, base);
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// addi r11,r31,436
	ctx.r11.s64 = ctx.r31.s64 + 436;
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82350c88
	ctx.lr = 0x822BF43C;
	sub_82350C88(ctx, base);
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// addi r11,r31,452
	ctx.r11.s64 = ctx.r31.s64 + 452;
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82350c88
	ctx.lr = 0x822BF450;
	sub_82350C88(ctx, base);
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// addi r11,r31,456
	ctx.r11.s64 = ctx.r31.s64 + 456;
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82350c88
	ctx.lr = 0x822BF464;
	sub_82350C88(ctx, base);
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// addi r11,r31,460
	ctx.r11.s64 = ctx.r31.s64 + 460;
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82350c88
	ctx.lr = 0x822BF478;
	sub_82350C88(ctx, base);
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// addi r11,r31,476
	ctx.r11.s64 = ctx.r31.s64 + 476;
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82350c88
	ctx.lr = 0x822BF48C;
	sub_82350C88(ctx, base);
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// addi r11,r31,480
	ctx.r11.s64 = ctx.r31.s64 + 480;
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82350c88
	ctx.lr = 0x822BF4A0;
	sub_82350C88(ctx, base);
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// addi r11,r31,484
	ctx.r11.s64 = ctx.r31.s64 + 484;
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82350c88
	ctx.lr = 0x822BF4B4;
	sub_82350C88(ctx, base);
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// addi r11,r31,500
	ctx.r11.s64 = ctx.r31.s64 + 500;
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82350c88
	ctx.lr = 0x822BF4C8;
	sub_82350C88(ctx, base);
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// addi r11,r31,504
	ctx.r11.s64 = ctx.r31.s64 + 504;
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82350c88
	ctx.lr = 0x822BF4DC;
	sub_82350C88(ctx, base);
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// addi r11,r31,508
	ctx.r11.s64 = ctx.r31.s64 + 508;
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82350c88
	ctx.lr = 0x822BF4F0;
	sub_82350C88(ctx, base);
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// addi r11,r31,524
	ctx.r11.s64 = ctx.r31.s64 + 524;
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82350c88
	ctx.lr = 0x822BF504;
	sub_82350C88(ctx, base);
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// addi r11,r31,528
	ctx.r11.s64 = ctx.r31.s64 + 528;
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82350c88
	ctx.lr = 0x822BF518;
	sub_82350C88(ctx, base);
	// addi r11,r31,532
	ctx.r11.s64 = ctx.r31.s64 + 532;
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82350c88
	ctx.lr = 0x822BF52C;
	sub_82350C88(ctx, base);
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// addi r11,r31,548
	ctx.r11.s64 = ctx.r31.s64 + 548;
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82350c88
	ctx.lr = 0x822BF540;
	sub_82350C88(ctx, base);
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r9,r31,8832
	ctx.r9.s64 = ctx.r31.s64 + 8832;
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// bl 0x82350c88
	ctx.lr = 0x822BF558;
	sub_82350C88(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_822BF560) {
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
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x822bf590
	if (!ctx.cr6.eq) goto loc_822BF590;
	// lwz r30,744(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 744);
	// b 0x822bf5b4
	goto loc_822BF5B4;
loc_822BF590:
	// lwz r10,736(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 736);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// bne cr6,0x822bf5a4
	if (!ctx.cr6.eq) goto loc_822BF5A4;
	// li r10,0
	ctx.r10.s64 = 0;
loc_822BF5A4:
	// lwz r11,740(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 740);
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbz r30,192(r9)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r9.u32 + 192);
loc_822BF5B4:
	// addi r8,r30,7
	ctx.r8.s64 = ctx.r30.s64 + 7;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r7,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822bf5fc
	if (ctx.cr6.eq) goto loc_822BF5FC;
	// clrlwi r6,r10,24
	ctx.r6.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x822bf5fc
	if (ctx.cr6.eq) goto loc_822BF5FC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8259b748
	ctx.lr = 0x822BF5DC;
	sub_8259B748(ctx, base);
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r30,748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 748, ctx.r30.u32);
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x822bf5f4
	if (ctx.cr6.eq) goto loc_822BF5F4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822ae5c0
	ctx.lr = 0x822BF5F4;
	sub_822AE5C0(ctx, base);
loc_822BF5F4:
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r4,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r4.u32);
loc_822BF5FC:
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
PPC_FUNC_IMPL(__imp__sub_822BF618) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x822BF620;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,732(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r29,r11,26080
	ctx.r29.s64 = ctx.r11.s64 + 26080;
	// bne cr6,0x822bf6ac
	if (!ctx.cr6.eq) goto loc_822BF6AC;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_822BF644:
	// lwz r11,732(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 732);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r4,r11,236
	ctx.r4.s64 = ctx.r11.s64 + 236;
	// bl 0x822ad928
	ctx.lr = 0x822BF664;
	sub_822AD928(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822bf6a0
	if (ctx.cr6.eq) goto loc_822BF6A0;
	// lwz r11,732(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 732);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// stw r11,732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 732, ctx.r11.u32);
	// bge cr6,0x822bf6a0
	if (!ctx.cr6.lt) goto loc_822BF6A0;
	// lbzx r8,r30,r29
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r29.u32);
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x822bf6a0
	if (ctx.cr6.eq) goto loc_822BF6A0;
	// lwz r11,736(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 736);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 736, ctx.r6.u32);
loc_822BF6A0:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,41
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 41, ctx.xer);
	// blt cr6,0x822bf644
	if (ctx.cr6.lt) goto loc_822BF644;
loc_822BF6AC:
	// lwz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x822bf6c0
	if (!ctx.cr6.eq) goto loc_822BF6C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822ad9f8
	ctx.lr = 0x822BF6C0;
	sub_822AD9F8(ctx, base);
loc_822BF6C0:
	// lwz r4,732(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 732);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r28,736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 736, ctx.r28.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// ble cr6,0x822bf718
	if (!ctx.cr6.gt) goto loc_822BF718;
loc_822BF6D4:
	// lwz r3,732(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 732);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x822bf708
	if (!ctx.cr6.lt) goto loc_822BF708;
	// lbzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822bf708
	if (ctx.cr6.eq) goto loc_822BF708;
	// lwz r10,736(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 736);
	// add r7,r10,r31
	ctx.r7.u64 = ctx.r10.u64 + ctx.r31.u64;
	// stb r11,192(r7)
	PPC_STORE_U8(ctx.r7.u32 + 192, ctx.r11.u8);
	// lwz r10,736(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 736);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// stw r6,736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 736, ctx.r6.u32);
loc_822BF708:
	// lwz r5,732(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 732);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x822bf6d4
	if (ctx.cr6.lt) goto loc_822BF6D4;
loc_822BF718:
	// lwz r4,736(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 736);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x822bf738
	if (!ctx.cr6.eq) goto loc_822BF738;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822bf738
	if (ctx.cr6.eq) goto loc_822BF738;
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// bl 0x8259b798
	ctx.lr = 0x822BF738;
	sub_8259B798(ctx, base);
loc_822BF738:
	// lbz r11,53(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 53);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822bf7a4
	if (ctx.cr6.eq) goto loc_822BF7A4;
	// lwz r4,736(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 736);
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// ble cr6,0x822bf7a4
	if (!ctx.cr6.gt) goto loc_822BF7A4;
	// lwz r11,740(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 740);
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x822bf764
	if (!ctx.cr6.gt) goto loc_822BF764;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_822BF764:
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r30,r31,192
	ctx.r30.s64 = ctx.r31.s64 + 192;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r29,192(r10)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r10.u32 + 192);
	// bl 0x822ae210
	ctx.lr = 0x822BF778;
	sub_822AE210(ctx, base);
	// lwz r11,736(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 736);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// ble cr6,0x822bf7a4
	if (!ctx.cr6.gt) goto loc_822BF7A4;
	// lbz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// clrlwi r8,r29,24
	ctx.r8.u64 = ctx.r29.u32 & 0xFF;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x822bf7a4
	if (!ctx.cr6.eq) goto loc_822BF7A4;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbz r7,190(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 190);
	// stb r7,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r7.u8);
	// stb r29,190(r11)
	PPC_STORE_U8(ctx.r11.u32 + 190, ctx.r29.u8);
loc_822BF7A4:
	// stw r28,740(r31)
	PPC_STORE_U32(ctx.r31.u32 + 740, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_822C0EF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-4756
	ctx.r11.s64 = ctx.r11.s64 + -4756;
	// addi r10,r3,432
	ctx.r10.s64 = ctx.r3.s64 + 432;
	// li r8,15
	ctx.r8.s64 = 15;
	// addi r10,r10,220
	ctx.r10.s64 = ctx.r10.s64 + 220;
	// stb r9,292(r3)
	PPC_STORE_U8(ctx.r3.u32 + 292, ctx.r9.u8);
	// stw r11,280(r3)
	PPC_STORE_U32(ctx.r3.u32 + 280, ctx.r11.u32);
	// stw r11,300(r3)
	PPC_STORE_U32(ctx.r3.u32 + 300, ctx.r11.u32);
	// stb r9,312(r3)
	PPC_STORE_U8(ctx.r3.u32 + 312, ctx.r9.u8);
	// stw r11,316(r3)
	PPC_STORE_U32(ctx.r3.u32 + 316, ctx.r11.u32);
	// stb r9,328(r3)
	PPC_STORE_U8(ctx.r3.u32 + 328, ctx.r9.u8);
loc_822C0F20:
	// stw r11,-204(r10)
	PPC_STORE_U32(ctx.r10.u32 + -204, ctx.r11.u32);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// stb r9,-192(r10)
	PPC_STORE_U8(ctx.r10.u32 + -192, ctx.r9.u8);
	// stw r11,-12(r10)
	PPC_STORE_U32(ctx.r10.u32 + -12, ctx.r11.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stb r9,16(r10)
	PPC_STORE_U8(ctx.r10.u32 + 16, ctx.r9.u8);
	// stw r11,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r11.u32);
	// stb r9,32(r10)
	PPC_STORE_U8(ctx.r10.u32 + 32, ctx.r9.u8);
	// addi r10,r10,368
	ctx.r10.s64 = ctx.r10.s64 + 368;
	// bge cr6,0x822c0f20
	if (!ctx.cr6.lt) goto loc_822C0F20;
	// addi r10,r3,6320
	ctx.r10.s64 = ctx.r3.s64 + 6320;
	// li r8,47
	ctx.r8.s64 = 47;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
loc_822C0F5C:
	// stw r11,-28(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28, ctx.r11.u32);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// stb r9,-16(r10)
	PPC_STORE_U8(ctx.r10.u32 + -16, ctx.r9.u8);
	// stw r11,-12(r10)
	PPC_STORE_U32(ctx.r10.u32 + -12, ctx.r11.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stb r9,20(r10)
	PPC_STORE_U8(ctx.r10.u32 + 20, ctx.r9.u8);
	// stw r11,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r11.u32);
	// stb r9,36(r10)
	PPC_STORE_U8(ctx.r10.u32 + 36, ctx.r9.u8);
	// stw r11,44(r10)
	PPC_STORE_U32(ctx.r10.u32 + 44, ctx.r11.u32);
	// stb r9,56(r10)
	PPC_STORE_U8(ctx.r10.u32 + 56, ctx.r9.u8);
	// addi r10,r10,188
	ctx.r10.s64 = ctx.r10.s64 + 188;
	// bge cr6,0x822c0f5c
	if (!ctx.cr6.lt) goto loc_822C0F5C;
	// addi r10,r3,15344
	ctx.r10.s64 = ctx.r3.s64 + 15344;
	// li r8,15
	ctx.r8.s64 = 15;
	// addi r10,r10,68
	ctx.r10.s64 = ctx.r10.s64 + 68;
loc_822C0FA0:
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// stb r9,12(r10)
	PPC_STORE_U8(ctx.r10.u32 + 12, ctx.r9.u8);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r10,r10,132
	ctx.r10.s64 = ctx.r10.s64 + 132;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bge cr6,0x822c0fa0
	if (!ctx.cr6.lt) goto loc_822C0FA0;
	// blr 
	return;
}
PPC_FUNC_IMPL(__imp__sub_822C0FC0) {
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
	// bl 0x822ae728
	ctx.lr = 0x822C0FD8;
	sub_822AE728(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,12824
	ctx.r9.s64 = ctx.r11.s64 + 12824;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-4756
	ctx.r11.s64 = ctx.r11.s64 + -4756;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stb r10,1176(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1176, ctx.r10.u8);
	// stb r10,1192(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1192, ctx.r10.u8);
	// stw r11,1164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1164, ctx.r11.u32);
	// stw r11,1180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1180, ctx.r11.u32);
	// stw r11,1196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1196, ctx.r11.u32);
	// stb r10,1208(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1208, ctx.r10.u8);
	// stw r11,1212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1212, ctx.r11.u32);
	// stb r10,1224(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1224, ctx.r10.u8);
	// stw r11,1256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1256, ctx.r11.u32);
	// stb r10,1268(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1268, ctx.r10.u8);
	// stw r11,1272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1272, ctx.r11.u32);
	// stb r10,1284(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1284, ctx.r10.u8);
	// stw r11,1292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1292, ctx.r11.u32);
	// stb r10,1304(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1304, ctx.r10.u8);
	// stw r11,1316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1316, ctx.r11.u32);
	// stb r10,1328(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1328, ctx.r10.u8);
	// stw r11,1332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1332, ctx.r11.u32);
	// stb r10,1344(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1344, ctx.r10.u8);
	// stw r11,1348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1348, ctx.r11.u32);
	// stb r10,1360(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1360, ctx.r10.u8);
	// stw r11,1368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1368, ctx.r11.u32);
	// stb r10,1380(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1380, ctx.r10.u8);
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
PPC_FUNC_IMPL(__imp__sub_822C1060) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae0
	ctx.lr = 0x822C1068;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// addi r31,r11,-680
	ctx.r31.s64 = ctx.r11.s64 + -680;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// li r29,29
	ctx.r29.s64 = 29;
	// addi r23,r11,-572
	ctx.r23.s64 = ctx.r11.s64 + -572;
loc_822C1088:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r6,r11,24392
	ctx.r6.s64 = ctx.r11.s64 + 24392;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// bl 0x82097220
	ctx.lr = 0x822C10A4;
	sub_82097220(ctx, base);
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// stw r23,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r23.u32);
	// addi r30,r30,112
	ctx.r30.s64 = ctx.r30.s64 + 112;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge cr6,0x822c1088
	if (!ctx.cr6.lt) goto loc_822C1088;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r30,r22,3360
	ctx.r30.s64 = ctx.r22.s64 + 3360;
	// li r29,4
	ctx.r29.s64 = 4;
	// addi r24,r11,-6024
	ctx.r24.s64 = ctx.r11.s64 + -6024;
loc_822C10C8:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r6,r11,24392
	ctx.r6.s64 = ctx.r11.s64 + 24392;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// bl 0x82097220
	ctx.lr = 0x822C10E4;
	sub_82097220(ctx, base);
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// stw r24,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r24.u32);
	// addi r30,r30,112
	ctx.r30.s64 = ctx.r30.s64 + 112;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge cr6,0x822c10c8
	if (!ctx.cr6.lt) goto loc_822C10C8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r22,3920
	ctx.r30.s64 = ctx.r22.s64 + 3920;
	// li r29,4
	ctx.r29.s64 = 4;
	// addi r25,r11,3200
	ctx.r25.s64 = ctx.r11.s64 + 3200;
loc_822C1108:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r6,r11,24392
	ctx.r6.s64 = ctx.r11.s64 + 24392;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// bl 0x82097220
	ctx.lr = 0x822C1124;
	sub_82097220(ctx, base);
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// stw r25,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r25.u32);
	// addi r30,r30,96
	ctx.r30.s64 = ctx.r30.s64 + 96;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge cr6,0x822c1108
	if (!ctx.cr6.lt) goto loc_822C1108;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r30,r22,4400
	ctx.r30.s64 = ctx.r22.s64 + 4400;
	// li r29,4
	ctx.r29.s64 = 4;
	// addi r26,r11,-6836
	ctx.r26.s64 = ctx.r11.s64 + -6836;
loc_822C1148:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r6,r11,24392
	ctx.r6.s64 = ctx.r11.s64 + 24392;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// bl 0x82097220
	ctx.lr = 0x822C1164;
	sub_82097220(ctx, base);
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// stw r26,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r26.u32);
	// addi r30,r30,96
	ctx.r30.s64 = ctx.r30.s64 + 96;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge cr6,0x822c1148
	if (!ctx.cr6.lt) goto loc_822C1148;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r22,4880
	ctx.r30.s64 = ctx.r22.s64 + 4880;
	// li r29,13
	ctx.r29.s64 = 13;
	// addi r27,r11,-552
	ctx.r27.s64 = ctx.r11.s64 + -552;
loc_822C1188:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r6,r11,24392
	ctx.r6.s64 = ctx.r11.s64 + 24392;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// bl 0x82097220
	ctx.lr = 0x822C11A4;
	sub_82097220(ctx, base);
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// stw r27,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r27.u32);
	// addi r30,r30,112
	ctx.r30.s64 = ctx.r30.s64 + 112;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge cr6,0x822c1188
	if (!ctx.cr6.lt) goto loc_822C1188;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r22,6448
	ctx.r30.s64 = ctx.r22.s64 + 6448;
	// li r29,4
	ctx.r29.s64 = 4;
	// addi r28,r11,-660
	ctx.r28.s64 = ctx.r11.s64 + -660;
loc_822C11C8:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r6,r11,24392
	ctx.r6.s64 = ctx.r11.s64 + 24392;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// bl 0x82097220
	ctx.lr = 0x822C11E4;
	sub_82097220(ctx, base);
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// addi r30,r30,96
	ctx.r30.s64 = ctx.r30.s64 + 96;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge cr6,0x822c11c8
	if (!ctx.cr6.lt) goto loc_822C11C8;
	// addi r30,r22,6960
	ctx.r30.s64 = ctx.r22.s64 + 6960;
	// li r29,29
	ctx.r29.s64 = 29;
loc_822C1200:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r6,r11,24392
	ctx.r6.s64 = ctx.r11.s64 + 24392;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// bl 0x82097220
	ctx.lr = 0x822C121C;
	sub_82097220(ctx, base);
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// stw r23,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r23.u32);
	// addi r30,r30,112
	ctx.r30.s64 = ctx.r30.s64 + 112;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge cr6,0x822c1200
	if (!ctx.cr6.lt) goto loc_822C1200;
	// addi r30,r22,10320
	ctx.r30.s64 = ctx.r22.s64 + 10320;
	// li r29,4
	ctx.r29.s64 = 4;
loc_822C1238:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r6,r11,24392
	ctx.r6.s64 = ctx.r11.s64 + 24392;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// bl 0x82097220
	ctx.lr = 0x822C1254;
	sub_82097220(ctx, base);
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// stw r24,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r24.u32);
	// addi r30,r30,112
	ctx.r30.s64 = ctx.r30.s64 + 112;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge cr6,0x822c1238
	if (!ctx.cr6.lt) goto loc_822C1238;
	// addi r30,r22,10880
	ctx.r30.s64 = ctx.r22.s64 + 10880;
	// li r29,9
	ctx.r29.s64 = 9;
loc_822C1270:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r6,r11,24392
	ctx.r6.s64 = ctx.r11.s64 + 24392;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// bl 0x82097220
	ctx.lr = 0x822C128C;
	sub_82097220(ctx, base);
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// stw r25,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r25.u32);
	// addi r30,r30,96
	ctx.r30.s64 = ctx.r30.s64 + 96;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge cr6,0x822c1270
	if (!ctx.cr6.lt) goto loc_822C1270;
	// addi r30,r22,11840
	ctx.r30.s64 = ctx.r22.s64 + 11840;
	// li r29,4
	ctx.r29.s64 = 4;
loc_822C12A8:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r6,r11,24392
	ctx.r6.s64 = ctx.r11.s64 + 24392;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// bl 0x82097220
	ctx.lr = 0x822C12C4;
	sub_82097220(ctx, base);
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// stw r26,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r26.u32);
	// addi r30,r30,96
	ctx.r30.s64 = ctx.r30.s64 + 96;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge cr6,0x822c12a8
	if (!ctx.cr6.lt) goto loc_822C12A8;
	// addi r30,r22,12320
	ctx.r30.s64 = ctx.r22.s64 + 12320;
	// li r29,14
	ctx.r29.s64 = 14;
loc_822C12E0:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r6,r11,24392
	ctx.r6.s64 = ctx.r11.s64 + 24392;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// bl 0x82097220
	ctx.lr = 0x822C12FC;
	sub_82097220(ctx, base);
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// stw r27,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r27.u32);
	// addi r30,r30,112
	ctx.r30.s64 = ctx.r30.s64 + 112;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge cr6,0x822c12e0
	if (!ctx.cr6.lt) goto loc_822C12E0;
	// addi r30,r22,14000
	ctx.r30.s64 = ctx.r22.s64 + 14000;
	// li r29,9
	ctx.r29.s64 = 9;
loc_822C1318:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r6,r11,24392
	ctx.r6.s64 = ctx.r11.s64 + 24392;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// bl 0x82097220
	ctx.lr = 0x822C1334;
	sub_82097220(ctx, base);
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// addi r30,r30,96
	ctx.r30.s64 = ctx.r30.s64 + 96;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge cr6,0x822c1318
	if (!ctx.cr6.lt) goto loc_822C1318;
	// addi r30,r22,15296
	ctx.r30.s64 = ctx.r22.s64 + 15296;
	// li r31,7
	ctx.r31.s64 = 7;
loc_822C1350:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r6,r11,24392
	ctx.r6.s64 = ctx.r11.s64 + 24392;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82097220
	ctx.lr = 0x822C1368;
	sub_82097220(ctx, base);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r30,r30,64
	ctx.r30.s64 = ctx.r30.s64 + 64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge cr6,0x822c1350
	if (!ctx.cr6.lt) goto loc_822C1350;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_822C1388) {
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
	// lbz r11,47(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 47);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,-27212(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27212);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// bl 0x822a0120
	ctx.lr = 0x822C13C4;
	sub_822A0120(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r8,9
	ctx.r8.s64 = 589824;
	// ori r7,r8,9420
	ctx.r7.u64 = ctx.r8.u64 | 9420;
	// lfs f0,-4804(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4804);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f1,f0
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fctidz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f11.f64));
	// stfd f10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// lbz r6,87(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// stbx r6,r31,r7
	PPC_STORE_U8(ctx.r31.u32 + ctx.r7.u32, ctx.r6.u8);
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
PPC_FUNC_IMPL(__imp__sub_822C2058) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259badc
	ctx.lr = 0x822C2060;
	__savegprlr_21(ctx, base);
	// stfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r31,r30,1728
	ctx.r31.s64 = ctx.r30.s64 + 1728;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// li r21,1
	ctx.r21.s64 = 1;
loc_822C207C:
	// addi r3,r31,-1152
	ctx.r3.s64 = ctx.r31.s64 + -1152;
	// bl 0x822af9b0
	ctx.lr = 0x822C2084;
	sub_822AF9B0(ctx, base);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stb r21,-150(r31)
	PPC_STORE_U8(ctx.r31.u32 + -150, ctx.r21.u8);
	// stw r21,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r21.u32);
	// stb r21,264(r31)
	PPC_STORE_U8(ctx.r31.u32 + 264, ctx.r21.u8);
	// cmplwi cr6,r29,2
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 2, ctx.xer);
	// stw r11,-156(r31)
	PPC_STORE_U32(ctx.r31.u32 + -156, ctx.r11.u32);
	// addi r31,r31,1424
	ctx.r31.s64 = ctx.r31.s64 + 1424;
	// blt cr6,0x822c207c
	if (ctx.cr6.lt) goto loc_822C207C;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// addi r31,r30,3424
	ctx.r31.s64 = ctx.r30.s64 + 3424;
loc_822C20B0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822af9b0
	ctx.lr = 0x822C20B8;
	sub_822AF9B0(ctx, base);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stw r28,1156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1156, ctx.r28.u32);
	// cmplwi cr6,r29,5
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 5, ctx.xer);
	// stw r10,996(r31)
	PPC_STORE_U32(ctx.r31.u32 + 996, ctx.r10.u32);
	// addi r31,r31,1200
	ctx.r31.s64 = ctx.r31.s64 + 1200;
	// blt cr6,0x822c20b0
	if (ctx.cr6.lt) goto loc_822C20B0;
	// lis r9,5
	ctx.r9.s64 = 327680;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// ori r8,r9,7176
	ctx.r8.u64 = ctx.r9.u64 | 7176;
	// addi r11,r11,-18560
	ctx.r11.s64 = ctx.r11.s64 + -18560;
	// li r5,0
	ctx.r5.s64 = 0;
	// lis r4,48
	ctx.r4.s64 = 3145728;
	// lwzx r3,r11,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// bl 0x82349388
	ctx.lr = 0x822C20F4;
	sub_82349388(ctx, base);
	// addi r31,r30,540
	ctx.r31.s64 = ctx.r30.s64 + 540;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234b6a8
	ctx.lr = 0x822C2104;
	sub_8234B6A8(ctx, base);
	// lis r5,48
	ctx.r5.s64 = 3145728;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234b6c0
	ctx.lr = 0x822C2114;
	sub_8234B6C0(ctx, base);
	// li r4,2048
	ctx.r4.s64 = 2048;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823477a8
	ctx.lr = 0x822C2120;
	sub_823477A8(ctx, base);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r25,r30,44
	ctx.r25.s64 = ctx.r30.s64 + 44;
	// lfs f12,25556(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 25556);
	ctx.f12.f64 = double(temp.f32);
	// li r10,10
	ctx.r10.s64 = 10;
	// lfs f0,2868(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// lfs f13,13360(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 13360);
	ctx.f13.f64 = double(temp.f32);
	// lfs f31,2864(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2864);
	ctx.f31.f64 = double(temp.f32);
loc_822C214C:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stfs f31,-40(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + -40, temp.u32);
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f31,40(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stfs f0,80(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 80, temp.u32);
	// stfs f12,120(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 120, temp.u32);
	// stfs f0,160(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 160, temp.u32);
	// stfs f31,200(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 200, temp.u32);
	// stfs f13,240(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 240, temp.u32);
	// stfs f31,280(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 280, temp.u32);
	// stfs f0,320(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 320, temp.u32);
	// stfs f12,360(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 360, temp.u32);
	// stfs f0,400(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 400, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne cr6,0x822c214c
	if (!ctx.cr6.eq) goto loc_822C214C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r29,-32047
	ctx.r29.s64 = -2100232192;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r5,r11,13368
	ctx.r5.s64 = ctx.r11.s64 + 13368;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r31,r11,-26980
	ctx.r31.s64 = ctx.r11.s64 + -26980;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// addi r4,r31,20
	ctx.r4.s64 = ctx.r31.s64 + 20;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r7,-44(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -44);
	// lwz r6,-40(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -40);
	// bl 0x82351720
	ctx.lr = 0x822C21C8;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r27,r11,13348
	ctx.r27.s64 = ctx.r11.s64 + 13348;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r6,-32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82351720
	ctx.lr = 0x822C220C;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// addi r26,r11,13328
	ctx.r26.s64 = ctx.r11.s64 + 13328;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r6,-32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82351720
	ctx.lr = 0x822C2240;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// addi r25,r11,13312
	ctx.r25.s64 = ctx.r11.s64 + 13312;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// addi r4,r30,84
	ctx.r4.s64 = ctx.r30.s64 + 84;
	// lwz r6,-32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82351720
	ctx.lr = 0x822C2274;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// addi r24,r11,13296
	ctx.r24.s64 = ctx.r11.s64 + 13296;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// addi r4,r30,124
	ctx.r4.s64 = ctx.r30.s64 + 124;
	// lwz r6,-32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82351720
	ctx.lr = 0x822C22A8;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r23,r11,13276
	ctx.r23.s64 = ctx.r11.s64 + 13276;
	// lwz r6,-32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r4,r30,164
	ctx.r4.s64 = ctx.r30.s64 + 164;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x822C22DC;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// addi r22,r11,13256
	ctx.r22.s64 = ctx.r11.s64 + 13256;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// addi r4,r30,204
	ctx.r4.s64 = ctx.r30.s64 + 204;
	// lwz r6,-32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82351720
	ctx.lr = 0x822C2310;
	sub_82351720(ctx, base);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r6,-28(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28);
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82351720
	ctx.lr = 0x822C233C;
	sub_82351720(ctx, base);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r6,-28(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28);
	// addi r4,r30,48
	ctx.r4.s64 = ctx.r30.s64 + 48;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82351720
	ctx.lr = 0x822C2368;
	sub_82351720(ctx, base);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r6,-28(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28);
	// addi r4,r30,88
	ctx.r4.s64 = ctx.r30.s64 + 88;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82351720
	ctx.lr = 0x822C2394;
	sub_82351720(ctx, base);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r6,-28(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28);
	// addi r4,r30,128
	ctx.r4.s64 = ctx.r30.s64 + 128;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82351720
	ctx.lr = 0x822C23C0;
	sub_82351720(ctx, base);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// lwz r6,-28(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28);
	// addi r4,r30,168
	ctx.r4.s64 = ctx.r30.s64 + 168;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82351720
	ctx.lr = 0x822C23EC;
	sub_82351720(ctx, base);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lwz r6,-28(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28);
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r4,r30,208
	ctx.r4.s64 = ctx.r30.s64 + 208;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x822C2418;
	sub_82351720(ctx, base);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r30,12
	ctx.r4.s64 = ctx.r30.s64 + 12;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82351720
	ctx.lr = 0x822C2444;
	sub_82351720(ctx, base);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r30,52
	ctx.r4.s64 = ctx.r30.s64 + 52;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82351720
	ctx.lr = 0x822C2470;
	sub_82351720(ctx, base);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r30,92
	ctx.r4.s64 = ctx.r30.s64 + 92;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82351720
	ctx.lr = 0x822C249C;
	sub_82351720(ctx, base);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r30,132
	ctx.r4.s64 = ctx.r30.s64 + 132;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82351720
	ctx.lr = 0x822C24C8;
	sub_82351720(ctx, base);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r30,172
	ctx.r4.s64 = ctx.r30.s64 + 172;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82351720
	ctx.lr = 0x822C24F4;
	sub_82351720(ctx, base);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r30,212
	ctx.r4.s64 = ctx.r30.s64 + 212;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82351720
	ctx.lr = 0x822C2520;
	sub_82351720(ctx, base);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r6,-24(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82351720
	ctx.lr = 0x822C254C;
	sub_82351720(ctx, base);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r30,56
	ctx.r4.s64 = ctx.r30.s64 + 56;
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r6,-24(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82351720
	ctx.lr = 0x822C2578;
	sub_82351720(ctx, base);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r6,-24(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// addi r4,r30,96
	ctx.r4.s64 = ctx.r30.s64 + 96;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82351720
	ctx.lr = 0x822C25A4;
	sub_82351720(ctx, base);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r6,-24(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// addi r4,r30,136
	ctx.r4.s64 = ctx.r30.s64 + 136;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82351720
	ctx.lr = 0x822C25D0;
	sub_82351720(ctx, base);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// lwz r6,-24(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// addi r4,r30,176
	ctx.r4.s64 = ctx.r30.s64 + 176;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82351720
	ctx.lr = 0x822C25FC;
	sub_82351720(ctx, base);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// lwz r6,-24(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// addi r4,r30,216
	ctx.r4.s64 = ctx.r30.s64 + 216;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82351720
	ctx.lr = 0x822C2628;
	sub_82351720(ctx, base);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r6,-20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20);
	// addi r4,r30,20
	ctx.r4.s64 = ctx.r30.s64 + 20;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82351720
	ctx.lr = 0x822C2654;
	sub_82351720(ctx, base);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r6,-20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20);
	// addi r4,r30,60
	ctx.r4.s64 = ctx.r30.s64 + 60;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82351720
	ctx.lr = 0x822C2680;
	sub_82351720(ctx, base);
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// lwz r6,-20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// addi r4,r30,100
	ctx.r4.s64 = ctx.r30.s64 + 100;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x822C26AC;
	sub_82351720(ctx, base);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r6,-20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20);
	// addi r4,r30,140
	ctx.r4.s64 = ctx.r30.s64 + 140;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82351720
	ctx.lr = 0x822C26D8;
	sub_82351720(ctx, base);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// lwz r6,-20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20);
	// addi r4,r30,180
	ctx.r4.s64 = ctx.r30.s64 + 180;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82351720
	ctx.lr = 0x822C2704;
	sub_82351720(ctx, base);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// lwz r6,-20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20);
	// addi r4,r30,220
	ctx.r4.s64 = ctx.r30.s64 + 220;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82351720
	ctx.lr = 0x822C2730;
	sub_82351720(ctx, base);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r6,-8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82351720
	ctx.lr = 0x822C275C;
	sub_82351720(ctx, base);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r6,-8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// addi r4,r30,72
	ctx.r4.s64 = ctx.r30.s64 + 72;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82351720
	ctx.lr = 0x822C2788;
	sub_82351720(ctx, base);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r6,-8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// addi r4,r30,112
	ctx.r4.s64 = ctx.r30.s64 + 112;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82351720
	ctx.lr = 0x822C27B4;
	sub_82351720(ctx, base);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r6,-8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// addi r4,r30,152
	ctx.r4.s64 = ctx.r30.s64 + 152;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82351720
	ctx.lr = 0x822C27E0;
	sub_82351720(ctx, base);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// addi r4,r30,192
	ctx.r4.s64 = ctx.r30.s64 + 192;
	// lwz r6,-8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82351720
	ctx.lr = 0x822C280C;
	sub_82351720(ctx, base);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// lwz r6,-8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// addi r4,r30,232
	ctx.r4.s64 = ctx.r30.s64 + 232;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82351720
	ctx.lr = 0x822C2838;
	sub_82351720(ctx, base);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r6,-16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	// addi r4,r30,24
	ctx.r4.s64 = ctx.r30.s64 + 24;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82351720
	ctx.lr = 0x822C2864;
	sub_82351720(ctx, base);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r6,-16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	// addi r4,r30,64
	ctx.r4.s64 = ctx.r30.s64 + 64;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82351720
	ctx.lr = 0x822C2890;
	sub_82351720(ctx, base);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r6,-16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	// addi r4,r30,104
	ctx.r4.s64 = ctx.r30.s64 + 104;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82351720
	ctx.lr = 0x822C28BC;
	sub_82351720(ctx, base);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r6,-16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	// addi r4,r30,144
	ctx.r4.s64 = ctx.r30.s64 + 144;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82351720
	ctx.lr = 0x822C28E8;
	sub_82351720(ctx, base);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// lwz r6,-16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	// addi r4,r30,184
	ctx.r4.s64 = ctx.r30.s64 + 184;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82351720
	ctx.lr = 0x822C2914;
	sub_82351720(ctx, base);
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// addi r4,r30,224
	ctx.r4.s64 = ctx.r30.s64 + 224;
	// lwz r6,-16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82351720
	ctx.lr = 0x822C2940;
	sub_82351720(ctx, base);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r6,-12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// addi r4,r30,28
	ctx.r4.s64 = ctx.r30.s64 + 28;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82351720
	ctx.lr = 0x822C296C;
	sub_82351720(ctx, base);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r6,-12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// addi r4,r30,68
	ctx.r4.s64 = ctx.r30.s64 + 68;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82351720
	ctx.lr = 0x822C2998;
	sub_82351720(ctx, base);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r6,-12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// addi r4,r30,108
	ctx.r4.s64 = ctx.r30.s64 + 108;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82351720
	ctx.lr = 0x822C29C4;
	sub_82351720(ctx, base);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r6,-12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// addi r4,r30,148
	ctx.r4.s64 = ctx.r30.s64 + 148;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82351720
	ctx.lr = 0x822C29F0;
	sub_82351720(ctx, base);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// lwz r6,-12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// addi r4,r30,188
	ctx.r4.s64 = ctx.r30.s64 + 188;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82351720
	ctx.lr = 0x822C2A1C;
	sub_82351720(ctx, base);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// lwz r6,-12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// addi r4,r30,228
	ctx.r4.s64 = ctx.r30.s64 + 228;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82351720
	ctx.lr = 0x822C2A48;
	sub_82351720(ctx, base);
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// lwz r6,-4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r4,r30,36
	ctx.r4.s64 = ctx.r30.s64 + 36;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x822C2A74;
	sub_82351720(ctx, base);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r6,-4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// addi r4,r30,76
	ctx.r4.s64 = ctx.r30.s64 + 76;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82351720
	ctx.lr = 0x822C2AA0;
	sub_82351720(ctx, base);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r6,-4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// addi r4,r30,116
	ctx.r4.s64 = ctx.r30.s64 + 116;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82351720
	ctx.lr = 0x822C2ACC;
	sub_82351720(ctx, base);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r6,-4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// addi r4,r30,156
	ctx.r4.s64 = ctx.r30.s64 + 156;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82351720
	ctx.lr = 0x822C2AF8;
	sub_82351720(ctx, base);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// lwz r6,-4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// addi r4,r30,196
	ctx.r4.s64 = ctx.r30.s64 + 196;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82351720
	ctx.lr = 0x822C2B24;
	sub_82351720(ctx, base);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// lwz r6,-4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// addi r4,r30,236
	ctx.r4.s64 = ctx.r30.s64 + 236;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82351720
	ctx.lr = 0x822C2B50;
	sub_82351720(ctx, base);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r30,40
	ctx.r4.s64 = ctx.r30.s64 + 40;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82351720
	ctx.lr = 0x822C2B7C;
	sub_82351720(ctx, base);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r30,80
	ctx.r4.s64 = ctx.r30.s64 + 80;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82351720
	ctx.lr = 0x822C2BA8;
	sub_82351720(ctx, base);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// addi r4,r30,120
	ctx.r4.s64 = ctx.r30.s64 + 120;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82351720
	ctx.lr = 0x822C2BD4;
	sub_82351720(ctx, base);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r30,160
	ctx.r4.s64 = ctx.r30.s64 + 160;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82351720
	ctx.lr = 0x822C2C00;
	sub_82351720(ctx, base);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r30,200
	ctx.r4.s64 = ctx.r30.s64 + 200;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82351720
	ctx.lr = 0x822C2C2C;
	sub_82351720(ctx, base);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r30,240
	ctx.r4.s64 = ctx.r30.s64 + 240;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82351720
	ctx.lr = 0x822C2C58;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// addi r27,r11,8072
	ctx.r27.s64 = ctx.r11.s64 + 8072;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// addi r4,r30,244
	ctx.r4.s64 = ctx.r30.s64 + 244;
	// lwz r6,-32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82351720
	ctx.lr = 0x822C2C8C;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// addi r26,r11,8084
	ctx.r26.s64 = ctx.r11.s64 + 8084;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// addi r4,r30,284
	ctx.r4.s64 = ctx.r30.s64 + 284;
	// lwz r6,-32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82351720
	ctx.lr = 0x822C2CC0;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r25,r11,13248
	ctx.r25.s64 = ctx.r11.s64 + 13248;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// lwz r6,-32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r4,r30,324
	ctx.r4.s64 = ctx.r30.s64 + 324;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x822C2CF4;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// addi r24,r11,13240
	ctx.r24.s64 = ctx.r11.s64 + 13240;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// addi r4,r30,364
	ctx.r4.s64 = ctx.r30.s64 + 364;
	// lwz r6,-32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82351720
	ctx.lr = 0x822C2D28;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// addi r23,r11,7504
	ctx.r23.s64 = ctx.r11.s64 + 7504;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// addi r4,r30,404
	ctx.r4.s64 = ctx.r30.s64 + 404;
	// lwz r6,-32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82351720
	ctx.lr = 0x822C2D5C;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// addi r22,r11,7492
	ctx.r22.s64 = ctx.r11.s64 + 7492;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// addi r4,r30,444
	ctx.r4.s64 = ctx.r30.s64 + 444;
	// lwz r6,-32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82351720
	ctx.lr = 0x822C2D90;
	sub_82351720(ctx, base);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r6,-28(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28);
	// addi r4,r30,248
	ctx.r4.s64 = ctx.r30.s64 + 248;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82351720
	ctx.lr = 0x822C2DBC;
	sub_82351720(ctx, base);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r6,-28(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28);
	// addi r4,r30,288
	ctx.r4.s64 = ctx.r30.s64 + 288;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82351720
	ctx.lr = 0x822C2DE8;
	sub_82351720(ctx, base);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r6,-28(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28);
	// addi r4,r30,328
	ctx.r4.s64 = ctx.r30.s64 + 328;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82351720
	ctx.lr = 0x822C2E14;
	sub_82351720(ctx, base);
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// lwz r6,-28(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r4,r30,368
	ctx.r4.s64 = ctx.r30.s64 + 368;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x822C2E40;
	sub_82351720(ctx, base);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// lwz r6,-28(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28);
	// addi r4,r30,408
	ctx.r4.s64 = ctx.r30.s64 + 408;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82351720
	ctx.lr = 0x822C2E6C;
	sub_82351720(ctx, base);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// lwz r6,-28(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28);
	// addi r4,r30,448
	ctx.r4.s64 = ctx.r30.s64 + 448;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82351720
	ctx.lr = 0x822C2E98;
	sub_82351720(ctx, base);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r30,252
	ctx.r4.s64 = ctx.r30.s64 + 252;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82351720
	ctx.lr = 0x822C2EC4;
	sub_82351720(ctx, base);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r30,292
	ctx.r4.s64 = ctx.r30.s64 + 292;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82351720
	ctx.lr = 0x822C2EF0;
	sub_82351720(ctx, base);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r30,332
	ctx.r4.s64 = ctx.r30.s64 + 332;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82351720
	ctx.lr = 0x822C2F1C;
	sub_82351720(ctx, base);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r30,372
	ctx.r4.s64 = ctx.r30.s64 + 372;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82351720
	ctx.lr = 0x822C2F48;
	sub_82351720(ctx, base);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r30,412
	ctx.r4.s64 = ctx.r30.s64 + 412;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82351720
	ctx.lr = 0x822C2F74;
	sub_82351720(ctx, base);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// addi r4,r30,452
	ctx.r4.s64 = ctx.r30.s64 + 452;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82351720
	ctx.lr = 0x822C2FA0;
	sub_82351720(ctx, base);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r6,-24(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// addi r4,r30,256
	ctx.r4.s64 = ctx.r30.s64 + 256;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82351720
	ctx.lr = 0x822C2FCC;
	sub_82351720(ctx, base);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r6,-24(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// addi r4,r30,296
	ctx.r4.s64 = ctx.r30.s64 + 296;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82351720
	ctx.lr = 0x822C2FF8;
	sub_82351720(ctx, base);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r6,-24(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// addi r4,r30,336
	ctx.r4.s64 = ctx.r30.s64 + 336;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82351720
	ctx.lr = 0x822C3024;
	sub_82351720(ctx, base);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r6,-24(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// addi r4,r30,376
	ctx.r4.s64 = ctx.r30.s64 + 376;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82351720
	ctx.lr = 0x822C3050;
	sub_82351720(ctx, base);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// lwz r6,-24(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// addi r4,r30,416
	ctx.r4.s64 = ctx.r30.s64 + 416;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82351720
	ctx.lr = 0x822C307C;
	sub_82351720(ctx, base);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// lwz r6,-24(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// addi r4,r30,456
	ctx.r4.s64 = ctx.r30.s64 + 456;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82351720
	ctx.lr = 0x822C30A8;
	sub_82351720(ctx, base);
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// lwz r6,-20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r30,260
	ctx.r4.s64 = ctx.r30.s64 + 260;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x822C30D4;
	sub_82351720(ctx, base);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r6,-20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20);
	// addi r4,r30,300
	ctx.r4.s64 = ctx.r30.s64 + 300;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82351720
	ctx.lr = 0x822C3100;
	sub_82351720(ctx, base);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r6,-20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20);
	// addi r4,r30,340
	ctx.r4.s64 = ctx.r30.s64 + 340;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82351720
	ctx.lr = 0x822C312C;
	sub_82351720(ctx, base);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r6,-20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20);
	// addi r4,r30,380
	ctx.r4.s64 = ctx.r30.s64 + 380;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82351720
	ctx.lr = 0x822C3158;
	sub_82351720(ctx, base);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// lwz r6,-20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20);
	// addi r4,r30,420
	ctx.r4.s64 = ctx.r30.s64 + 420;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82351720
	ctx.lr = 0x822C3184;
	sub_82351720(ctx, base);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// lwz r6,-20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20);
	// addi r4,r30,460
	ctx.r4.s64 = ctx.r30.s64 + 460;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82351720
	ctx.lr = 0x822C31B0;
	sub_82351720(ctx, base);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r6,-8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// addi r4,r30,272
	ctx.r4.s64 = ctx.r30.s64 + 272;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82351720
	ctx.lr = 0x822C31DC;
	sub_82351720(ctx, base);
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// lwz r6,-8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r4,r30,312
	ctx.r4.s64 = ctx.r30.s64 + 312;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x822C3208;
	sub_82351720(ctx, base);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r6,-8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// addi r4,r30,352
	ctx.r4.s64 = ctx.r30.s64 + 352;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82351720
	ctx.lr = 0x822C3234;
	sub_82351720(ctx, base);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r6,-8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// addi r4,r30,392
	ctx.r4.s64 = ctx.r30.s64 + 392;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82351720
	ctx.lr = 0x822C3260;
	sub_82351720(ctx, base);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// lwz r6,-8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// addi r4,r30,432
	ctx.r4.s64 = ctx.r30.s64 + 432;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82351720
	ctx.lr = 0x822C328C;
	sub_82351720(ctx, base);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// lwz r6,-8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// addi r4,r30,472
	ctx.r4.s64 = ctx.r30.s64 + 472;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82351720
	ctx.lr = 0x822C32B8;
	sub_82351720(ctx, base);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r6,-16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	// addi r4,r30,264
	ctx.r4.s64 = ctx.r30.s64 + 264;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82351720
	ctx.lr = 0x822C32E4;
	sub_82351720(ctx, base);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r6,-16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	// addi r4,r30,304
	ctx.r4.s64 = ctx.r30.s64 + 304;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82351720
	ctx.lr = 0x822C3310;
	sub_82351720(ctx, base);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r6,-16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	// addi r4,r30,344
	ctx.r4.s64 = ctx.r30.s64 + 344;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82351720
	ctx.lr = 0x822C333C;
	sub_82351720(ctx, base);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// addi r4,r30,384
	ctx.r4.s64 = ctx.r30.s64 + 384;
	// lwz r6,-16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82351720
	ctx.lr = 0x822C3368;
	sub_82351720(ctx, base);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// lwz r6,-16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	// addi r4,r30,424
	ctx.r4.s64 = ctx.r30.s64 + 424;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82351720
	ctx.lr = 0x822C3394;
	sub_82351720(ctx, base);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// lwz r6,-16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	// addi r4,r30,464
	ctx.r4.s64 = ctx.r30.s64 + 464;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82351720
	ctx.lr = 0x822C33C0;
	sub_82351720(ctx, base);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r6,-12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// addi r4,r30,268
	ctx.r4.s64 = ctx.r30.s64 + 268;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82351720
	ctx.lr = 0x822C33EC;
	sub_82351720(ctx, base);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r6,-12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// addi r4,r30,308
	ctx.r4.s64 = ctx.r30.s64 + 308;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82351720
	ctx.lr = 0x822C3418;
	sub_82351720(ctx, base);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r6,-12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// addi r4,r30,348
	ctx.r4.s64 = ctx.r30.s64 + 348;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82351720
	ctx.lr = 0x822C3444;
	sub_82351720(ctx, base);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r6,-12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// addi r4,r30,388
	ctx.r4.s64 = ctx.r30.s64 + 388;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82351720
	ctx.lr = 0x822C3470;
	sub_82351720(ctx, base);
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// lwz r6,-12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// addi r4,r30,428
	ctx.r4.s64 = ctx.r30.s64 + 428;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x822C349C;
	sub_82351720(ctx, base);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// lwz r6,-12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// addi r4,r30,468
	ctx.r4.s64 = ctx.r30.s64 + 468;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82351720
	ctx.lr = 0x822C34C8;
	sub_82351720(ctx, base);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r6,-4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// addi r4,r30,276
	ctx.r4.s64 = ctx.r30.s64 + 276;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82351720
	ctx.lr = 0x822C34F4;
	sub_82351720(ctx, base);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r6,-4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// addi r4,r30,316
	ctx.r4.s64 = ctx.r30.s64 + 316;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82351720
	ctx.lr = 0x822C3520;
	sub_82351720(ctx, base);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r6,-4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// addi r4,r30,356
	ctx.r4.s64 = ctx.r30.s64 + 356;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82351720
	ctx.lr = 0x822C354C;
	sub_82351720(ctx, base);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r6,-4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// addi r4,r30,396
	ctx.r4.s64 = ctx.r30.s64 + 396;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82351720
	ctx.lr = 0x822C3578;
	sub_82351720(ctx, base);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// lwz r6,-4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// addi r4,r30,436
	ctx.r4.s64 = ctx.r30.s64 + 436;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82351720
	ctx.lr = 0x822C35A4;
	sub_82351720(ctx, base);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lwz r6,-4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// addi r4,r30,476
	ctx.r4.s64 = ctx.r30.s64 + 476;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x822C35D0;
	sub_82351720(ctx, base);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r30,280
	ctx.r4.s64 = ctx.r30.s64 + 280;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82351720
	ctx.lr = 0x822C35FC;
	sub_82351720(ctx, base);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r30,320
	ctx.r4.s64 = ctx.r30.s64 + 320;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82351720
	ctx.lr = 0x822C3628;
	sub_82351720(ctx, base);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r30,360
	ctx.r4.s64 = ctx.r30.s64 + 360;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82351720
	ctx.lr = 0x822C3654;
	sub_82351720(ctx, base);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r30,400
	ctx.r4.s64 = ctx.r30.s64 + 400;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82351720
	ctx.lr = 0x822C3680;
	sub_82351720(ctx, base);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r30,440
	ctx.r4.s64 = ctx.r30.s64 + 440;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82351720
	ctx.lr = 0x822C36AC;
	sub_82351720(ctx, base);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r30,480
	ctx.r4.s64 = ctx.r30.s64 + 480;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82351720
	ctx.lr = 0x822C36D8;
	sub_82351720(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r28,492(r30)
	PPC_STORE_U8(ctx.r30.u32 + 492, ctx.r28.u8);
	// stb r21,493(r30)
	PPC_STORE_U8(ctx.r30.u32 + 493, ctx.r21.u8);
	// li r8,5
	ctx.r8.s64 = 5;
	// stb r21,495(r30)
	PPC_STORE_U8(ctx.r30.u32 + 495, ctx.r21.u8);
	// li r9,6
	ctx.r9.s64 = 6;
	// stb r21,504(r30)
	PPC_STORE_U8(ctx.r30.u32 + 504, ctx.r21.u8);
	// stb r11,496(r30)
	PPC_STORE_U8(ctx.r30.u32 + 496, ctx.r11.u8);
	// stb r11,497(r30)
	PPC_STORE_U8(ctx.r30.u32 + 497, ctx.r11.u8);
	// stb r10,494(r30)
	PPC_STORE_U8(ctx.r30.u32 + 494, ctx.r10.u8);
	// stb r10,505(r30)
	PPC_STORE_U8(ctx.r30.u32 + 505, ctx.r10.u8);
	// stb r11,506(r30)
	PPC_STORE_U8(ctx.r30.u32 + 506, ctx.r11.u8);
	// stb r11,507(r30)
	PPC_STORE_U8(ctx.r30.u32 + 507, ctx.r11.u8);
	// li r10,9
	ctx.r10.s64 = 9;
	// stb r11,508(r30)
	PPC_STORE_U8(ctx.r30.u32 + 508, ctx.r11.u8);
	// li r7,8
	ctx.r7.s64 = 8;
	// stb r11,529(r30)
	PPC_STORE_U8(ctx.r30.u32 + 529, ctx.r11.u8);
	// stb r8,500(r30)
	PPC_STORE_U8(ctx.r30.u32 + 500, ctx.r8.u8);
	// stb r8,509(r30)
	PPC_STORE_U8(ctx.r30.u32 + 509, ctx.r8.u8);
	// stb r9,503(r30)
	PPC_STORE_U8(ctx.r30.u32 + 503, ctx.r9.u8);
	// stb r9,511(r30)
	PPC_STORE_U8(ctx.r30.u32 + 511, ctx.r9.u8);
	// stb r10,498(r30)
	PPC_STORE_U8(ctx.r30.u32 + 498, ctx.r10.u8);
	// stb r10,499(r30)
	PPC_STORE_U8(ctx.r30.u32 + 499, ctx.r10.u8);
	// stb r10,501(r30)
	PPC_STORE_U8(ctx.r30.u32 + 501, ctx.r10.u8);
	// stb r10,512(r30)
	PPC_STORE_U8(ctx.r30.u32 + 512, ctx.r10.u8);
	// stb r7,502(r30)
	PPC_STORE_U8(ctx.r30.u32 + 502, ctx.r7.u8);
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-104(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x8259bb2c
	__restgprlr_21(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_822C3AB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x822C3AB8;
	__savegprlr_26(ctx, base);
	// stfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f29.u64);
	// stfd f30,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f29,f1
	ctx.f29.f64 = ctx.f1.f64;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// li r30,18
	ctx.r30.s64 = 18;
	// lfs f31,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f31.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// std r29,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r29.u64);
	// fmr f30,f31
	ctx.f30.f64 = ctx.f31.f64;
	// stb r29,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r29.u8);
	// cmplwi cr6,r4,78
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 78, ctx.xer);
	// addi r26,r11,2024
	ctx.r26.s64 = ctx.r11.s64 + 2024;
	// bgt cr6,0x822c4afc
	if (ctx.cr6.gt) goto loc_822C4AFC;
	// lis r12,-32212
	ctx.r12.s64 = -2111045632;
	// addi r12,r12,15128
	ctx.r12.s64 = ctx.r12.s64 + 15128;
	// rlwinm r0,r4,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r4.u64) {
	case 0:
		goto loc_822C3C54;
	case 1:
		goto loc_822C3C7C;
	case 2:
		goto loc_822C3CA8;
	case 3:
		goto loc_822C4AFC;
	case 4:
		goto loc_822C4AFC;
	case 5:
		goto loc_822C4AFC;
	case 6:
		goto loc_822C4AFC;
	case 7:
		goto loc_822C4AFC;
	case 8:
		goto loc_822C3CD0;
	case 9:
		goto loc_822C4B88;
	case 10:
		goto loc_822C3D28;
	case 11:
		goto loc_822C3D80;
	case 12:
		goto loc_822C3DD0;
	case 13:
		goto loc_822C3E24;
	case 14:
		goto loc_822C3E70;
	case 15:
		goto loc_822C3EFC;
	case 16:
		goto loc_822C3F50;
	case 17:
		goto loc_822C3FA4;
	case 18:
		goto loc_822C3FF8;
	case 19:
		goto loc_822C404C;
	case 20:
		goto loc_822C40A0;
	case 21:
		goto loc_822C4B88;
	case 22:
		goto loc_822C4B88;
	case 23:
		goto loc_822C4B88;
	case 24:
		goto loc_822C4B88;
	case 25:
		goto loc_822C40B4;
	case 26:
		goto loc_822C4110;
	case 27:
		goto loc_822C41A4;
	case 28:
		goto loc_822C4238;
	case 29:
		goto loc_822C42F4;
	case 30:
		goto loc_822C434C;
	case 31:
		goto loc_822C437C;
	case 32:
		goto loc_822C43A0;
	case 33:
		goto loc_822C43C0;
	case 34:
		goto loc_822C4484;
	case 35:
		goto loc_822C4B88;
	case 36:
		goto loc_822C4B88;
	case 37:
		goto loc_822C4B88;
	case 38:
		goto loc_822C454C;
	case 39:
		goto loc_822C4624;
	case 40:
		goto loc_822C4700;
	case 41:
		goto loc_822C472C;
	case 42:
		goto loc_822C4760;
	case 43:
		goto loc_822C4700;
	case 44:
		goto loc_822C472C;
	case 45:
		goto loc_822C4760;
	case 46:
		goto loc_822C4798;
	case 47:
		goto loc_822C47C0;
	case 48:
		goto loc_822C42CC;
	case 49:
		goto loc_822C4AFC;
	case 50:
		goto loc_822C4AFC;
	case 51:
		goto loc_822C3CA8;
	case 52:
		goto loc_822C4AFC;
	case 53:
		goto loc_822C4AFC;
	case 54:
		goto loc_822C4AFC;
	case 55:
		goto loc_822C3C54;
	case 56:
		goto loc_822C4AFC;
	case 57:
		goto loc_822C4AFC;
	case 58:
		goto loc_822C4AFC;
	case 59:
		goto loc_822C4AFC;
	case 60:
		goto loc_822C4AFC;
	case 61:
		goto loc_822C4AFC;
	case 62:
		goto loc_822C482C;
	case 63:
		goto loc_822C48EC;
	case 64:
		goto loc_822C4B88;
	case 65:
		goto loc_822C4AFC;
	case 66:
		goto loc_822C4AFC;
	case 67:
		goto loc_822C4914;
	case 68:
		goto loc_822C4928;
	case 69:
		goto loc_822C4978;
	case 70:
		goto loc_822C4994;
	case 71:
		goto loc_822C49B0;
	case 72:
		goto loc_822C4A04;
	case 73:
		goto loc_822C4A20;
	case 74:
		goto loc_822C4A3C;
	case 75:
		goto loc_822C4A54;
	case 76:
		goto loc_822C4AFC;
	case 77:
		goto loc_822C4ACC;
	case 78:
		goto loc_822C4AE4;
	default:
		__builtin_unreachable();
	}
	// lwz r17,15444(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 15444);
	// lwz r17,15484(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 15484);
	// lwz r17,15528(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 15528);
	// lwz r17,19196(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 19196);
	// lwz r17,19196(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 19196);
	// lwz r17,19196(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 19196);
	// lwz r17,19196(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 19196);
	// lwz r17,19196(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 19196);
	// lwz r17,15568(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 15568);
	// lwz r17,19336(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 19336);
	// lwz r17,15656(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 15656);
	// lwz r17,15744(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 15744);
	// lwz r17,15824(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 15824);
	// lwz r17,15908(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 15908);
	// lwz r17,15984(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 15984);
	// lwz r17,16124(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 16124);
	// lwz r17,16208(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 16208);
	// lwz r17,16292(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 16292);
	// lwz r17,16376(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 16376);
	// lwz r17,16460(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 16460);
	// lwz r17,16544(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 16544);
	// lwz r17,19336(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 19336);
	// lwz r17,19336(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 19336);
	// lwz r17,19336(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 19336);
	// lwz r17,19336(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 19336);
	// lwz r17,16564(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 16564);
	// lwz r17,16656(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 16656);
	// lwz r17,16804(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 16804);
	// lwz r17,16952(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 16952);
	// lwz r17,17140(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 17140);
	// lwz r17,17228(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 17228);
	// lwz r17,17276(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 17276);
	// lwz r17,17312(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 17312);
	// lwz r17,17344(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 17344);
	// lwz r17,17540(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 17540);
	// lwz r17,19336(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 19336);
	// lwz r17,19336(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 19336);
	// lwz r17,19336(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 19336);
	// lwz r17,17740(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 17740);
	// lwz r17,17956(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 17956);
	// lwz r17,18176(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 18176);
	// lwz r17,18220(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 18220);
	// lwz r17,18272(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 18272);
	// lwz r17,18176(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 18176);
	// lwz r17,18220(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 18220);
	// lwz r17,18272(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 18272);
	// lwz r17,18328(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 18328);
	// lwz r17,18368(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 18368);
	// lwz r17,17100(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 17100);
	// lwz r17,19196(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 19196);
	// lwz r17,19196(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 19196);
	// lwz r17,15528(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 15528);
	// lwz r17,19196(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 19196);
	// lwz r17,19196(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 19196);
	// lwz r17,19196(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 19196);
	// lwz r17,15444(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 15444);
	// lwz r17,19196(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 19196);
	// lwz r17,19196(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 19196);
	// lwz r17,19196(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 19196);
	// lwz r17,19196(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 19196);
	// lwz r17,19196(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 19196);
	// lwz r17,19196(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 19196);
	// lwz r17,18476(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 18476);
	// lwz r17,18668(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 18668);
	// lwz r17,19336(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 19336);
	// lwz r17,19196(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 19196);
	// lwz r17,19196(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 19196);
	// lwz r17,18708(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 18708);
	// lwz r17,18728(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 18728);
	// lwz r17,18808(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 18808);
	// lwz r17,18836(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 18836);
	// lwz r17,18864(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 18864);
	// lwz r17,18948(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 18948);
	// lwz r17,18976(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 18976);
	// lwz r17,19004(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 19004);
	// lwz r17,19028(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 19028);
	// lwz r17,19196(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 19196);
	// lwz r17,19148(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 19148);
	// lwz r17,19172(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 19172);
loc_822C3C54:
	// lbz r11,1228(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 1228);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822c4b88
	if (!ctx.cr6.eq) goto loc_822C4B88;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,24887
	ctx.r9.s64 = 1630994432;
	// lis r5,-1024
	ctx.r5.s64 = -67108864;
	// ori r8,r9,54151
	ctx.r8.u64 = ctx.r9.u64 | 54151;
	// rldimi r5,r8,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// stb r10,1228(r28)
	PPC_STORE_U8(ctx.r28.u32 + 1228, ctx.r10.u8);
	// b 0x822c4b5c
	goto loc_822C4B5C;
loc_822C3C7C:
	// lbz r7,1229(r28)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r28.u32 + 1229);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x822c4b88
	if (!ctx.cr6.eq) goto loc_822C4B88;
	// li r6,1
	ctx.r6.s64 = 1;
	// lis r5,24351
	ctx.r5.s64 = 1595867136;
	// lis r4,-18687
	ctx.r4.s64 = -1224671232;
	// ori r5,r5,40100
	ctx.r5.u64 = ctx.r5.u64 | 40100;
	// ori r3,r4,21204
	ctx.r3.u64 = ctx.r4.u64 | 21204;
	// stb r6,1229(r28)
	PPC_STORE_U8(ctx.r28.u32 + 1229, ctx.r6.u8);
	// rldimi r5,r3,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// b 0x822c4b5c
	goto loc_822C4B5C;
loc_822C3CA8:
	// lbz r11,1230(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 1230);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822c4b88
	if (!ctx.cr6.eq) goto loc_822C4B88;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-23299
	ctx.r9.s64 = -1526923264;
	// lis r5,14944
	ctx.r5.s64 = 979369984;
	// ori r8,r9,8664
	ctx.r8.u64 = ctx.r9.u64 | 8664;
	// rldimi r5,r8,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// stb r10,1230(r28)
	PPC_STORE_U8(ctx.r28.u32 + 1230, ctx.r10.u8);
	// b 0x822c4b5c
	goto loc_822C4B5C;
loc_822C3CD0:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r11,r11,-24936
	ctx.r11.s64 = ctx.r11.s64 + -24936;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c3d04
	if (ctx.cr6.eq) goto loc_822C3D04;
	// lis r7,13034
	ctx.r7.s64 = 854196224;
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// lis r5,-27092
	ctx.r5.s64 = -1775501312;
	// ori r6,r7,4136
	ctx.r6.u64 = ctx.r7.u64 | 4136;
	// ori r4,r5,48193
	ctx.r4.u64 = ctx.r5.u64 | 48193;
	// rldimi r6,r4,32,0
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r6.u64 & 0xFFFFFFFF);
	// cmpld cr6,r11,r6
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r6.u64, ctx.xer);
	// beq cr6,0x822c4b88
	if (ctx.cr6.eq) goto loc_822C4B88;
loc_822C3D04:
	// lis r11,-18138
	ctx.r11.s64 = -1188691968;
	// lis r3,14652
	ctx.r3.s64 = 960233472;
	// ori r10,r11,36523
	ctx.r10.u64 = ctx.r11.u64 | 36523;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// ori r5,r3,55232
	ctx.r5.u64 = ctx.r3.u64 | 55232;
	// li r29,1
	ctx.r29.s64 = 1;
	// rldimi r5,r10,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// lfs f30,3260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3260);
	ctx.f30.f64 = double(temp.f32);
	// b 0x822c4b5c
	goto loc_822C4B5C;
loc_822C3D28:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r11,r11,-24936
	ctx.r11.s64 = ctx.r11.s64 + -24936;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c3d5c
	if (ctx.cr6.eq) goto loc_822C3D5C;
	// lis r9,13034
	ctx.r9.s64 = 854196224;
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// lis r7,-27092
	ctx.r7.s64 = -1775501312;
	// ori r8,r9,4136
	ctx.r8.u64 = ctx.r9.u64 | 4136;
	// ori r6,r7,48193
	ctx.r6.u64 = ctx.r7.u64 | 48193;
	// rldimi r8,r6,32,0
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r8.u64 & 0xFFFFFFFF);
	// cmpld cr6,r11,r8
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r8.u64, ctx.xer);
	// beq cr6,0x822c4b88
	if (ctx.cr6.eq) goto loc_822C4B88;
loc_822C3D5C:
	// lis r5,11039
	ctx.r5.s64 = 723451904;
	// fmr f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f31.f64;
	// lis r4,-18399
	ctx.r4.s64 = -1205796864;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// ori r5,r5,46592
	ctx.r5.u64 = ctx.r5.u64 | 46592;
	// ori r3,r4,39492
	ctx.r3.u64 = ctx.r4.u64 | 39492;
	// rldimi r5,r3,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// lfs f31,13412(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 13412);
	ctx.f31.f64 = double(temp.f32);
	// b 0x822c4b5c
	goto loc_822C4B5C;
loc_822C3D80:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r11,r11,-24936
	ctx.r11.s64 = ctx.r11.s64 + -24936;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c3db4
	if (ctx.cr6.eq) goto loc_822C3DB4;
	// lis r10,13034
	ctx.r10.s64 = 854196224;
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// lis r8,-27092
	ctx.r8.s64 = -1775501312;
	// ori r9,r10,4136
	ctx.r9.u64 = ctx.r10.u64 | 4136;
	// ori r7,r8,48193
	ctx.r7.u64 = ctx.r8.u64 | 48193;
	// rldimi r9,r7,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// cmpld cr6,r11,r9
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r9.u64, ctx.xer);
	// beq cr6,0x822c4b88
	if (ctx.cr6.eq) goto loc_822C4B88;
loc_822C3DB4:
	// lis r6,11039
	ctx.r6.s64 = 723451904;
	// fmr f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f31.f64;
	// lis r4,-18399
	ctx.r4.s64 = -1205796864;
	// ori r5,r6,46592
	ctx.r5.u64 = ctx.r6.u64 | 46592;
	// ori r3,r4,39492
	ctx.r3.u64 = ctx.r4.u64 | 39492;
	// rldimi r5,r3,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// b 0x822c4b5c
	goto loc_822C4B5C;
loc_822C3DD0:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r11,r11,-24936
	ctx.r11.s64 = ctx.r11.s64 + -24936;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c3e04
	if (ctx.cr6.eq) goto loc_822C3E04;
	// lis r10,13034
	ctx.r10.s64 = 854196224;
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// lis r8,-27092
	ctx.r8.s64 = -1775501312;
	// ori r9,r10,4136
	ctx.r9.u64 = ctx.r10.u64 | 4136;
	// ori r7,r8,48193
	ctx.r7.u64 = ctx.r8.u64 | 48193;
	// rldimi r9,r7,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// cmpld cr6,r11,r9
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r9.u64, ctx.xer);
	// beq cr6,0x822c4b88
	if (ctx.cr6.eq) goto loc_822C4B88;
loc_822C3E04:
	// lis r6,-17230
	ctx.r6.s64 = -1129185280;
	// fmr f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f31.f64;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r5,-22176
	ctx.r5.s64 = -1453326336;
	// ori r4,r6,31849
	ctx.r4.u64 = ctx.r6.u64 | 31849;
	// rldimi r5,r4,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// lfs f31,13408(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 13408);
	ctx.f31.f64 = double(temp.f32);
	// b 0x822c4b5c
	goto loc_822C4B5C;
loc_822C3E24:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r11,r11,-24936
	ctx.r11.s64 = ctx.r11.s64 + -24936;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c3e58
	if (ctx.cr6.eq) goto loc_822C3E58;
	// lis r3,13034
	ctx.r3.s64 = 854196224;
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// lis r9,-27092
	ctx.r9.s64 = -1775501312;
	// ori r10,r3,4136
	ctx.r10.u64 = ctx.r3.u64 | 4136;
	// ori r8,r9,48193
	ctx.r8.u64 = ctx.r9.u64 | 48193;
	// rldimi r10,r8,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// beq cr6,0x822c4b88
	if (ctx.cr6.eq) goto loc_822C4B88;
loc_822C3E58:
	// lis r7,-17230
	ctx.r7.s64 = -1129185280;
	// fmr f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f31.f64;
	// lis r5,-22176
	ctx.r5.s64 = -1453326336;
	// ori r6,r7,31849
	ctx.r6.u64 = ctx.r7.u64 | 31849;
	// rldimi r5,r6,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// b 0x822c4b5c
	goto loc_822C4B5C;
loc_822C3E70:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r11,r11,-24936
	ctx.r11.s64 = ctx.r11.s64 + -24936;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c3ea4
	if (ctx.cr6.eq) goto loc_822C3EA4;
	// lis r5,13034
	ctx.r5.s64 = 854196224;
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// lis r3,-27092
	ctx.r3.s64 = -1775501312;
	// ori r4,r5,4136
	ctx.r4.u64 = ctx.r5.u64 | 4136;
	// ori r10,r3,48193
	ctx.r10.u64 = ctx.r3.u64 | 48193;
	// rldimi r4,r10,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// cmpld cr6,r11,r4
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r4.u64, ctx.xer);
	// beq cr6,0x822c4b88
	if (ctx.cr6.eq) goto loc_822C4B88;
loc_822C3EA4:
	// lis r8,-17230
	ctx.r8.s64 = -1129185280;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// ori r7,r8,31849
	ctx.r7.u64 = ctx.r8.u64 | 31849;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// lis r5,-22176
	ctx.r5.s64 = -1453326336;
	// stb r29,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r29.u8);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r5,r7,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// lfs f2,13404(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 13404);
	ctx.f2.f64 = double(temp.f32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822b1238
	ctx.lr = 0x822C3EE0;
	sub_822B1238(ctx, base);
	// lis r6,-14211
	ctx.r6.s64 = -931332096;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r5,1600
	ctx.r5.s64 = 104857600;
	// ori r4,r6,62325
	ctx.r4.u64 = ctx.r6.u64 | 62325;
	// rldimi r5,r4,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// lfs f30,-15120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f30.f64 = double(temp.f32);
	// b 0x822c4b5c
	goto loc_822C4B5C;
loc_822C3EFC:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r11,r11,-24936
	ctx.r11.s64 = ctx.r11.s64 + -24936;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c3f30
	if (ctx.cr6.eq) goto loc_822C3F30;
	// lis r3,13034
	ctx.r3.s64 = 854196224;
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// lis r9,-27092
	ctx.r9.s64 = -1775501312;
	// ori r10,r3,4136
	ctx.r10.u64 = ctx.r3.u64 | 4136;
	// ori r8,r9,48193
	ctx.r8.u64 = ctx.r9.u64 | 48193;
	// rldimi r10,r8,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// beq cr6,0x822c4b88
	if (ctx.cr6.eq) goto loc_822C4B88;
loc_822C3F30:
	// lis r7,-18138
	ctx.r7.s64 = -1188691968;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r5,26112
	ctx.r5.s64 = 1711276032;
	// ori r6,r7,32655
	ctx.r6.u64 = ctx.r7.u64 | 32655;
	// li r27,1
	ctx.r27.s64 = 1;
	// rldimi r5,r6,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// lfs f30,31828(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 31828);
	ctx.f30.f64 = double(temp.f32);
	// b 0x822c4b5c
	goto loc_822C4B5C;
loc_822C3F50:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r11,r11,-24936
	ctx.r11.s64 = ctx.r11.s64 + -24936;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c3f84
	if (ctx.cr6.eq) goto loc_822C3F84;
	// lis r5,13034
	ctx.r5.s64 = 854196224;
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// lis r3,-27092
	ctx.r3.s64 = -1775501312;
	// ori r4,r5,4136
	ctx.r4.u64 = ctx.r5.u64 | 4136;
	// ori r10,r3,48193
	ctx.r10.u64 = ctx.r3.u64 | 48193;
	// rldimi r4,r10,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// cmpld cr6,r11,r4
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r4.u64, ctx.xer);
	// beq cr6,0x822c4b88
	if (ctx.cr6.eq) goto loc_822C4B88;
loc_822C3F84:
	// lis r9,-18138
	ctx.r9.s64 = -1188691968;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r5,26112
	ctx.r5.s64 = 1711276032;
	// ori r8,r9,32655
	ctx.r8.u64 = ctx.r9.u64 | 32655;
	// li r27,1
	ctx.r27.s64 = 1;
	// rldimi r5,r8,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// lfs f30,3252(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3252);
	ctx.f30.f64 = double(temp.f32);
	// b 0x822c4b5c
	goto loc_822C4B5C;
loc_822C3FA4:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r11,r11,-24936
	ctx.r11.s64 = ctx.r11.s64 + -24936;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c3fd8
	if (ctx.cr6.eq) goto loc_822C3FD8;
	// lis r7,13034
	ctx.r7.s64 = 854196224;
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// lis r5,-27092
	ctx.r5.s64 = -1775501312;
	// ori r6,r7,4136
	ctx.r6.u64 = ctx.r7.u64 | 4136;
	// ori r4,r5,48193
	ctx.r4.u64 = ctx.r5.u64 | 48193;
	// rldimi r6,r4,32,0
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r6.u64 & 0xFFFFFFFF);
	// cmpld cr6,r11,r6
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r6.u64, ctx.xer);
	// beq cr6,0x822c4b88
	if (ctx.cr6.eq) goto loc_822C4B88;
loc_822C3FD8:
	// lis r3,-18138
	ctx.r3.s64 = -1188691968;
	// lis r5,26112
	ctx.r5.s64 = 1711276032;
	// ori r11,r3,32655
	ctx.r11.u64 = ctx.r3.u64 | 32655;
	// li r27,1
	ctx.r27.s64 = 1;
	// rldimi r5,r11,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f30,13400(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 13400);
	ctx.f30.f64 = double(temp.f32);
	// b 0x822c4b5c
	goto loc_822C4B5C;
loc_822C3FF8:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r11,r11,-24936
	ctx.r11.s64 = ctx.r11.s64 + -24936;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c402c
	if (ctx.cr6.eq) goto loc_822C402C;
	// lis r10,13034
	ctx.r10.s64 = 854196224;
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// lis r8,-27092
	ctx.r8.s64 = -1775501312;
	// ori r9,r10,4136
	ctx.r9.u64 = ctx.r10.u64 | 4136;
	// ori r7,r8,48193
	ctx.r7.u64 = ctx.r8.u64 | 48193;
	// rldimi r9,r7,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// cmpld cr6,r11,r9
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r9.u64, ctx.xer);
	// beq cr6,0x822c4b88
	if (ctx.cr6.eq) goto loc_822C4B88;
loc_822C402C:
	// lis r6,-18138
	ctx.r6.s64 = -1188691968;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r5,26112
	ctx.r5.s64 = 1711276032;
	// ori r4,r6,32655
	ctx.r4.u64 = ctx.r6.u64 | 32655;
	// li r27,1
	ctx.r27.s64 = 1;
	// rldimi r5,r4,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// lfs f30,13396(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 13396);
	ctx.f30.f64 = double(temp.f32);
	// b 0x822c4b5c
	goto loc_822C4B5C;
loc_822C404C:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r11,r11,-24936
	ctx.r11.s64 = ctx.r11.s64 + -24936;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c4080
	if (ctx.cr6.eq) goto loc_822C4080;
	// lis r3,13034
	ctx.r3.s64 = 854196224;
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// lis r9,-27092
	ctx.r9.s64 = -1775501312;
	// ori r10,r3,4136
	ctx.r10.u64 = ctx.r3.u64 | 4136;
	// ori r8,r9,48193
	ctx.r8.u64 = ctx.r9.u64 | 48193;
	// rldimi r10,r8,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// beq cr6,0x822c4b88
	if (ctx.cr6.eq) goto loc_822C4B88;
loc_822C4080:
	// lis r7,-18138
	ctx.r7.s64 = -1188691968;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r5,26112
	ctx.r5.s64 = 1711276032;
	// ori r6,r7,32655
	ctx.r6.u64 = ctx.r7.u64 | 32655;
	// li r27,1
	ctx.r27.s64 = 1;
	// rldimi r5,r6,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// lfs f30,11268(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11268);
	ctx.f30.f64 = double(temp.f32);
	// b 0x822c4b5c
	goto loc_822C4B5C;
loc_822C40A0:
	// lis r4,27632
	ctx.r4.s64 = 1810890752;
	// lis r5,28304
	ctx.r5.s64 = 1854930944;
	// ori r3,r4,49559
	ctx.r3.u64 = ctx.r4.u64 | 49559;
	// rldimi r5,r3,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// b 0x822c4b5c
	goto loc_822C4B5C;
loc_822C40B4:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r11,r11,-24936
	ctx.r11.s64 = ctx.r11.s64 + -24936;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c40e8
	if (ctx.cr6.eq) goto loc_822C40E8;
	// lis r10,13034
	ctx.r10.s64 = 854196224;
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// lis r8,-27092
	ctx.r8.s64 = -1775501312;
	// ori r9,r10,4136
	ctx.r9.u64 = ctx.r10.u64 | 4136;
	// ori r7,r8,48193
	ctx.r7.u64 = ctx.r8.u64 | 48193;
	// rldimi r9,r7,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// cmpld cr6,r11,r9
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r9.u64, ctx.xer);
	// beq cr6,0x822c4b88
	if (ctx.cr6.eq) goto loc_822C4B88;
loc_822C40E8:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r6,11039
	ctx.r6.s64 = 723451904;
	// lis r4,-18399
	ctx.r4.s64 = -1205796864;
	// ori r5,r6,46592
	ctx.r5.u64 = ctx.r6.u64 | 46592;
	// ori r3,r4,39492
	ctx.r3.u64 = ctx.r4.u64 | 39492;
	// lfs f30,6080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6080);
	ctx.f30.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// rldimi r5,r3,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// lfs f31,13408(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 13408);
	ctx.f31.f64 = double(temp.f32);
	// b 0x822c4b5c
	goto loc_822C4B5C;
loc_822C4110:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r11,r11,-24936
	ctx.r11.s64 = ctx.r11.s64 + -24936;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c4144
	if (ctx.cr6.eq) goto loc_822C4144;
	// lis r10,13034
	ctx.r10.s64 = 854196224;
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// lis r8,-27092
	ctx.r8.s64 = -1775501312;
	// ori r9,r10,4136
	ctx.r9.u64 = ctx.r10.u64 | 4136;
	// ori r7,r8,48193
	ctx.r7.u64 = ctx.r8.u64 | 48193;
	// rldimi r9,r7,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// cmpld cr6,r11,r9
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r9.u64, ctx.xer);
	// beq cr6,0x822c4b88
	if (ctx.cr6.eq) goto loc_822C4B88;
loc_822C4144:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// li r3,19
	ctx.r3.s64 = 19;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lis r10,-27665
	ctx.r10.s64 = -1813053440;
	// stb r29,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r29.u8);
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r8,r10,24506
	ctx.r8.u64 = ctx.r10.u64 | 24506;
	// lfs f3,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f3.f64 = double(temp.f32);
	// lis r11,7967
	ctx.r11.s64 = 522125312;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r11,40100
	ctx.r5.u64 = ctx.r11.u64 | 40100;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// rldimi r5,r8,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822b1238
	ctx.lr = 0x822C4188;
	sub_822B1238(ctx, base);
	// li r7,3
	ctx.r7.s64 = 3;
	// stb r7,1331(r28)
	PPC_STORE_U8(ctx.r28.u32 + 1331, ctx.r7.u8);
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// lfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f30,-72(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_822C41A4:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r11,r11,-24936
	ctx.r11.s64 = ctx.r11.s64 + -24936;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c41d8
	if (ctx.cr6.eq) goto loc_822C41D8;
	// lis r6,13034
	ctx.r6.s64 = 854196224;
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// lis r4,-27092
	ctx.r4.s64 = -1775501312;
	// ori r5,r6,4136
	ctx.r5.u64 = ctx.r6.u64 | 4136;
	// ori r3,r4,48193
	ctx.r3.u64 = ctx.r4.u64 | 48193;
	// rldimi r5,r3,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// cmpld cr6,r11,r5
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r5.u64, ctx.xer);
	// beq cr6,0x822c4b88
	if (ctx.cr6.eq) goto loc_822C4B88;
loc_822C41D8:
	// lis r8,7967
	ctx.r8.s64 = 522125312;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r7,-27665
	ctx.r7.s64 = -1813053440;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// li r10,19
	ctx.r10.s64 = 19;
	// stb r29,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r29.u8);
	// ori r4,r7,24506
	ctx.r4.u64 = ctx.r7.u64 | 24506;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// ori r5,r8,40100
	ctx.r5.u64 = ctx.r8.u64 | 40100;
	// li r9,0
	ctx.r9.s64 = 0;
	// rldimi r5,r4,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lfs f3,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f3.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822b1238
	ctx.lr = 0x822C421C;
	sub_822B1238(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// stb r3,1331(r28)
	PPC_STORE_U8(ctx.r28.u32 + 1331, ctx.r3.u8);
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// lfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f30,-72(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_822C4238:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r11,r11,-24936
	ctx.r11.s64 = ctx.r11.s64 + -24936;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c426c
	if (ctx.cr6.eq) goto loc_822C426C;
	// lis r10,13034
	ctx.r10.s64 = 854196224;
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// lis r8,-27092
	ctx.r8.s64 = -1775501312;
	// ori r9,r10,4136
	ctx.r9.u64 = ctx.r10.u64 | 4136;
	// ori r7,r8,48193
	ctx.r7.u64 = ctx.r8.u64 | 48193;
	// rldimi r9,r7,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// cmpld cr6,r11,r9
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r9.u64, ctx.xer);
	// beq cr6,0x822c4b88
	if (ctx.cr6.eq) goto loc_822C4B88;
loc_822C426C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// li r3,19
	ctx.r3.s64 = 19;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lis r10,-27665
	ctx.r10.s64 = -1813053440;
	// stb r29,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r29.u8);
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r8,r10,24506
	ctx.r8.u64 = ctx.r10.u64 | 24506;
	// lfs f3,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f3.f64 = double(temp.f32);
	// lis r11,7967
	ctx.r11.s64 = 522125312;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r11,40100
	ctx.r5.u64 = ctx.r11.u64 | 40100;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// rldimi r5,r8,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822b1238
	ctx.lr = 0x822C42B0;
	sub_822B1238(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// stb r7,1331(r28)
	PPC_STORE_U8(ctx.r28.u32 + 1331, ctx.r7.u8);
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// lfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f30,-72(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_822C42CC:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r6,11039
	ctx.r6.s64 = 723451904;
	// lis r4,-18399
	ctx.r4.s64 = -1205796864;
	// ori r5,r6,46592
	ctx.r5.u64 = ctx.r6.u64 | 46592;
	// ori r3,r4,39492
	ctx.r3.u64 = ctx.r4.u64 | 39492;
	// lfs f30,3260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3260);
	ctx.f30.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// rldimi r5,r3,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// lfs f31,13408(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 13408);
	ctx.f31.f64 = double(temp.f32);
	// b 0x822c4b5c
	goto loc_822C4B5C;
loc_822C42F4:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r11,r11,-24936
	ctx.r11.s64 = ctx.r11.s64 + -24936;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c4328
	if (ctx.cr6.eq) goto loc_822C4328;
	// lis r10,13034
	ctx.r10.s64 = 854196224;
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// lis r8,-27092
	ctx.r8.s64 = -1775501312;
	// ori r9,r10,4136
	ctx.r9.u64 = ctx.r10.u64 | 4136;
	// ori r7,r8,48193
	ctx.r7.u64 = ctx.r8.u64 | 48193;
	// rldimi r9,r7,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// cmpld cr6,r11,r9
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r9.u64, ctx.xer);
	// beq cr6,0x822c4b88
	if (ctx.cr6.eq) goto loc_822C4B88;
loc_822C4328:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r6,-17230
	ctx.r6.s64 = -1129185280;
	// lis r5,-22176
	ctx.r5.s64 = -1453326336;
	// ori r4,r6,31849
	ctx.r4.u64 = ctx.r6.u64 | 31849;
	// lfs f30,11268(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11268);
	ctx.f30.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// rldimi r5,r4,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// lfs f31,13392(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 13392);
	ctx.f31.f64 = double(temp.f32);
	// b 0x822c4b5c
	goto loc_822C4B5C;
loc_822C434C:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r11,r11,-24936
	ctx.r11.s64 = ctx.r11.s64 + -24936;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c4b88
	if (ctx.cr6.eq) goto loc_822C4B88;
	// ld r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r3,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r3.u64);
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// lfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f30,-72(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_822C437C:
	// lis r11,9054
	ctx.r11.s64 = 593362944;
	// lis r10,-18138
	ctx.r10.s64 = -1188691968;
	// ori r5,r11,55360
	ctx.r5.u64 = ctx.r11.u64 | 55360;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// ori r9,r10,36523
	ctx.r9.u64 = ctx.r10.u64 | 36523;
	// li r29,1
	ctx.r29.s64 = 1;
	// rldimi r5,r9,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// lfs f30,3260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3260);
	ctx.f30.f64 = double(temp.f32);
	// b 0x822c4b5c
	goto loc_822C4B5C;
loc_822C43A0:
	// lis r8,14652
	ctx.r8.s64 = 960233472;
	// fmr f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f31.f64;
	// lis r7,-18138
	ctx.r7.s64 = -1188691968;
	// ori r5,r8,55232
	ctx.r5.u64 = ctx.r8.u64 | 55232;
	// ori r6,r7,36523
	ctx.r6.u64 = ctx.r7.u64 | 36523;
	// li r29,1
	ctx.r29.s64 = 1;
	// rldimi r5,r6,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// b 0x822c4b5c
	goto loc_822C4B5C;
loc_822C43C0:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r11,r11,-24936
	ctx.r11.s64 = ctx.r11.s64 + -24936;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c43f4
	if (ctx.cr6.eq) goto loc_822C43F4;
	// lis r5,13034
	ctx.r5.s64 = 854196224;
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// lis r3,-27092
	ctx.r3.s64 = -1775501312;
	// ori r4,r5,4136
	ctx.r4.u64 = ctx.r5.u64 | 4136;
	// ori r10,r3,48193
	ctx.r10.u64 = ctx.r3.u64 | 48193;
	// rldimi r4,r10,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// cmpld cr6,r11,r4
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r4.u64, ctx.xer);
	// beq cr6,0x822c4b88
	if (ctx.cr6.eq) goto loc_822C4B88;
loc_822C43F4:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r9,8
	ctx.r9.s64 = 524288;
	// stb r29,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r29.u8);
	// addi r10,r10,2024
	ctx.r10.s64 = ctx.r10.s64 + 2024;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// ori r8,r9,49800
	ctx.r8.u64 = ctx.r9.u64 | 49800;
	// addi r11,r11,-18560
	ctx.r11.s64 = ctx.r11.s64 + -18560;
	// lis r4,-20319
	ctx.r4.s64 = -1331625984;
	// lfs f13,-84(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -84);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// ori r3,r4,64819
	ctx.r3.u64 = ctx.r4.u64 | 64819;
	// li r7,19
	ctx.r7.s64 = 19;
	// lfsx f0,r11,r8
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// lis r5,-16752
	ctx.r5.s64 = -1097859072;
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// li r9,0
	ctx.r9.s64 = 0;
	// lfd f13,-5592(r10)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + -5592);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// rldimi r5,r3,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f3,-15176(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15176);
	ctx.f3.f64 = double(temp.f32);
	// lis r10,8
	ctx.r10.s64 = 524288;
	// ori r8,r10,49800
	ctx.r8.u64 = ctx.r10.u64 | 49800;
	// fsel f0,f12,f13,f0
	ctx.f0.f64 = ctx.f12.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// stfsx f0,r11,r8
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, temp.u32);
	// bl 0x822b1238
	ctx.lr = 0x822C4470;
	sub_822B1238(ctx, base);
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// lfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f30,-72(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_822C4484:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r11,r11,-24936
	ctx.r11.s64 = ctx.r11.s64 + -24936;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c44b8
	if (ctx.cr6.eq) goto loc_822C44B8;
	// lis r7,13034
	ctx.r7.s64 = 854196224;
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// lis r5,-27092
	ctx.r5.s64 = -1775501312;
	// ori r6,r7,4136
	ctx.r6.u64 = ctx.r7.u64 | 4136;
	// ori r4,r5,48193
	ctx.r4.u64 = ctx.r5.u64 | 48193;
	// rldimi r6,r4,32,0
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r6.u64 & 0xFFFFFFFF);
	// cmpld cr6,r11,r6
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r6.u64, ctx.xer);
	// beq cr6,0x822c4b88
	if (ctx.cr6.eq) goto loc_822C4B88;
loc_822C44B8:
	// lis r3,8
	ctx.r3.s64 = 524288;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// stb r29,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r29.u8);
	// ori r10,r3,49800
	ctx.r10.u64 = ctx.r3.u64 | 49800;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r11,r11,-18560
	ctx.r11.s64 = ctx.r11.s64 + -18560;
	// li r8,19
	ctx.r8.s64 = 19;
	// lis r7,-20737
	ctx.r7.s64 = -1359020032;
	// lis r4,32499
	ctx.r4.s64 = 2129854464;
	// ori r5,r7,40100
	ctx.r5.u64 = ctx.r7.u64 | 40100;
	// lfsx f0,r11,r10
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// ori r3,r4,51236
	ctx.r3.u64 = ctx.r4.u64 | 51236;
	// addi r10,r10,2024
	ctx.r10.s64 = ctx.r10.s64 + 2024;
	// rldimi r5,r3,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lfs f13,-84(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -84);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// fsubs f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfd f13,-5592(r10)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + -5592);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lfs f3,-15176(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15176);
	ctx.f3.f64 = double(temp.f32);
	// lis r10,8
	ctx.r10.s64 = 524288;
	// fsel f0,f11,f13,f0
	ctx.f0.f64 = ctx.f11.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// ori r8,r10,49800
	ctx.r8.u64 = ctx.r10.u64 | 49800;
	// stfsx f0,r11,r8
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, temp.u32);
	// bl 0x822b1238
	ctx.lr = 0x822C4538;
	sub_822B1238(ctx, base);
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// lfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f30,-72(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_822C454C:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r11,r11,-24936
	ctx.r11.s64 = ctx.r11.s64 + -24936;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c4580
	if (ctx.cr6.eq) goto loc_822C4580;
	// lis r7,13034
	ctx.r7.s64 = 854196224;
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// lis r5,-27092
	ctx.r5.s64 = -1775501312;
	// ori r6,r7,4136
	ctx.r6.u64 = ctx.r7.u64 | 4136;
	// ori r4,r5,48193
	ctx.r4.u64 = ctx.r5.u64 | 48193;
	// rldimi r6,r4,32,0
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r6.u64 & 0xFFFFFFFF);
	// cmpld cr6,r11,r6
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r6.u64, ctx.xer);
	// beq cr6,0x822c4b88
	if (ctx.cr6.eq) goto loc_822C4B88;
loc_822C4580:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r3,-31583
	ctx.r3.s64 = -2069823488;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r31,1
	ctx.r31.s64 = 1;
	// ori r5,r3,10752
	ctx.r5.u64 = ctx.r3.u64 | 10752;
	// li r9,1
	ctx.r9.s64 = 1;
	// lfs f30,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f30.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// addi r29,r11,2024
	ctx.r29.s64 = ctx.r11.s64 + 2024;
	// stb r31,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r31.u8);
	// lis r11,26699
	ctx.r11.s64 = 1749745664;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// ori r10,r11,47876
	ctx.r10.u64 = ctx.r11.u64 | 47876;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// rldimi r5,r10,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// lfs f1,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822b1238
	ctx.lr = 0x822C45D0;
	sub_822B1238(ctx, base);
	// lis r8,-31583
	ctx.r8.s64 = -2069823488;
	// lis r7,26699
	ctx.r7.s64 = 1749745664;
	// lfs f1,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// ori r4,r7,47876
	ctx.r4.u64 = ctx.r7.u64 | 47876;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// ori r5,r8,10752
	ctx.r5.u64 = ctx.r8.u64 | 10752;
	// stb r31,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r31.u8);
	// li r9,1
	ctx.r9.s64 = 1;
	// rldimi r5,r4,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f2,11268(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11268);
	ctx.f2.f64 = double(temp.f32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822b1238
	ctx.lr = 0x822C4610;
	sub_822B1238(ctx, base);
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// lfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f30,-72(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_822C4624:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r11,r11,-24936
	ctx.r11.s64 = ctx.r11.s64 + -24936;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c4658
	if (ctx.cr6.eq) goto loc_822C4658;
	// lis r3,13034
	ctx.r3.s64 = 854196224;
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// lis r9,-27092
	ctx.r9.s64 = -1775501312;
	// ori r10,r3,4136
	ctx.r10.u64 = ctx.r3.u64 | 4136;
	// ori r8,r9,48193
	ctx.r8.u64 = ctx.r9.u64 | 48193;
	// rldimi r10,r8,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// beq cr6,0x822c4b88
	if (ctx.cr6.eq) goto loc_822C4B88;
loc_822C4658:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f1,4(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lis r7,23634
	ctx.r7.s64 = 1548877824;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// lis r4,21893
	ctx.r4.s64 = 1434779648;
	// stb r29,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r29.u8);
	// ori r5,r7,13312
	ctx.r5.u64 = ctx.r7.u64 | 13312;
	// ori r3,r4,22311
	ctx.r3.u64 = ctx.r4.u64 | 22311;
	// lfs f3,3260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3260);
	ctx.f3.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// rldimi r5,r3,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f2,6080(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6080);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x822b1238
	ctx.lr = 0x822C469C;
	sub_822B1238(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-18138
	ctx.r10.s64 = -1188691968;
	// lfs f2,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lfs f1,4(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// ori r8,r10,36523
	ctx.r8.u64 = ctx.r10.u64 | 36523;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stb r29,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r29.u8);
	// lfs f3,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f3.f64 = double(temp.f32);
	// lis r11,9054
	ctx.r11.s64 = 593362944;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// ori r5,r11,55360
	ctx.r5.u64 = ctx.r11.u64 | 55360;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// rldimi r5,r8,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// bl 0x822b1238
	ctx.lr = 0x822C46DC;
	sub_822B1238(ctx, base);
	// lis r7,9054
	ctx.r7.s64 = 593362944;
	// lis r6,-18138
	ctx.r6.s64 = -1188691968;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// ori r5,r7,55360
	ctx.r5.u64 = ctx.r7.u64 | 55360;
	// ori r4,r6,36523
	ctx.r4.u64 = ctx.r6.u64 | 36523;
	// li r29,1
	ctx.r29.s64 = 1;
	// rldimi r5,r4,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// lfs f31,25556(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25556);
	ctx.f31.f64 = double(temp.f32);
	// b 0x822c4b5c
	goto loc_822C4B5C;
loc_822C4700:
	// lis r11,-18138
	ctx.r11.s64 = -1188691968;
	// lis r3,14652
	ctx.r3.s64 = 960233472;
	// ori r10,r11,36523
	ctx.r10.u64 = ctx.r11.u64 | 36523;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// ori r5,r3,55232
	ctx.r5.u64 = ctx.r3.u64 | 55232;
	// li r29,1
	ctx.r29.s64 = 1;
	// rldimi r5,r10,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// lfs f30,-15128(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15128);
	ctx.f30.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f31,7460(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7460);
	ctx.f31.f64 = double(temp.f32);
	// b 0x822c4b5c
	goto loc_822C4B5C;
loc_822C472C:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,14652
	ctx.r9.s64 = 960233472;
	// lis r8,-18138
	ctx.r8.s64 = -1188691968;
	// ori r5,r9,55232
	ctx.r5.u64 = ctx.r9.u64 | 55232;
	// ori r7,r8,36523
	ctx.r7.u64 = ctx.r8.u64 | 36523;
	// lfs f30,-15128(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15128);
	ctx.f30.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// rldimi r5,r7,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// li r29,1
	ctx.r29.s64 = 1;
	// lfs f31,7460(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7460);
	ctx.f31.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f29,-4736(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4736);
	ctx.f29.f64 = double(temp.f32);
	// b 0x822c4b5c
	goto loc_822C4B5C;
loc_822C4760:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r6,14652
	ctx.r6.s64 = 960233472;
	// lis r4,-18138
	ctx.r4.s64 = -1188691968;
	// ori r5,r6,55232
	ctx.r5.u64 = ctx.r6.u64 | 55232;
	// ori r3,r4,36523
	ctx.r3.u64 = ctx.r4.u64 | 36523;
	// lfs f30,-15128(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15128);
	ctx.f30.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// rldimi r5,r3,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// li r29,1
	ctx.r29.s64 = 1;
	// lfs f31,7460(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7460);
	ctx.f31.f64 = double(temp.f32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f0,-15112(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15112);
	ctx.f0.f64 = double(temp.f32);
	// fadds f29,f29,f0
	ctx.f29.f64 = double(float(ctx.f29.f64 + ctx.f0.f64));
	// b 0x822c4b5c
	goto loc_822C4B5C;
loc_822C4798:
	// lis r11,14652
	ctx.r11.s64 = 960233472;
	// fmr f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f31.f64;
	// lis r10,-18138
	ctx.r10.s64 = -1188691968;
	// ori r5,r11,55232
	ctx.r5.u64 = ctx.r11.u64 | 55232;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// ori r9,r10,36523
	ctx.r9.u64 = ctx.r10.u64 | 36523;
	// li r29,1
	ctx.r29.s64 = 1;
	// rldimi r5,r9,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// lfs f31,11268(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11268);
	ctx.f31.f64 = double(temp.f32);
	// b 0x822c4b5c
	goto loc_822C4B5C;
loc_822C47C0:
	// lis r8,7
	ctx.r8.s64 = 458752;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// ori r7,r8,16216
	ctx.r7.u64 = ctx.r8.u64 | 16216;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// lwzx r11,r11,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// lwz r31,8(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820fa500
	ctx.lr = 0x822C47E0;
	sub_820FA500(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x822c47f8
	if (ctx.cr6.eq) goto loc_822C47F8;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x822c4b88
	if (ctx.cr6.eq) goto loc_822C4B88;
loc_822C47F8:
	// lbz r4,1228(r28)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r28.u32 + 1228);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x822c4b88
	if (!ctx.cr6.eq) goto loc_822C4B88;
	// lis r11,20105
	ctx.r11.s64 = 1317601280;
	// li r3,1
	ctx.r3.s64 = 1;
	// ori r5,r11,4096
	ctx.r5.u64 = ctx.r11.u64 | 4096;
	// lis r10,-14211
	ctx.r10.s64 = -931332096;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// ori r9,r10,62069
	ctx.r9.u64 = ctx.r10.u64 | 62069;
	// stb r3,1228(r28)
	PPC_STORE_U8(ctx.r28.u32 + 1228, ctx.r3.u8);
	// rldimi r5,r9,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// lfs f31,-1616(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1616);
	ctx.f31.f64 = double(temp.f32);
	// b 0x822c4b5c
	goto loc_822C4B5C;
loc_822C482C:
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// stw r29,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r31,r11,-18560
	ctx.r31.s64 = ctx.r11.s64 + -18560;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// addi r11,r11,2024
	ctx.r11.s64 = ctx.r11.s64 + 2024;
	// addi r4,r11,88
	ctx.r4.s64 = ctx.r11.s64 + 88;
	// bl 0x8234c370
	ctx.lr = 0x822C4850;
	sub_8234C370(ctx, base);
	// lwz r8,300(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r3,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r3.u32);
	// ori r11,r8,4
	ctx.r11.u64 = ctx.r8.u64 | 4;
	// stfs f31,244(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// stb r30,304(r1)
	PPC_STORE_U8(ctx.r1.u32 + 304, ctx.r30.u8);
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// ori r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 16384;
	// lfs f0,-27244(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27244);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,260(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// ori r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 4096;
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// oris r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 2097152;
	// lfs f0,2864(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// addis r10,r31,5
	ctx.r10.s64 = ctx.r31.s64 + 327680;
	// stfs f0,248(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// oris r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 4194304;
	// li r31,1
	ctx.r31.s64 = 1;
	// ori r7,r11,16
	ctx.r7.u64 = ctx.r11.u64 | 16;
	// addi r4,r10,7240
	ctx.r4.s64 = ctx.r10.s64 + 7240;
	// stb r31,305(r1)
	PPC_STORE_U8(ctx.r1.u32 + 305, ctx.r31.u8);
	// stb r31,313(r1)
	PPC_STORE_U8(ctx.r1.u32 + 313, ctx.r31.u8);
	// stb r31,312(r1)
	PPC_STORE_U8(ctx.r1.u32 + 312, ctx.r31.u8);
	// stw r7,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r7.u32);
	// bl 0x82350920
	ctx.lr = 0x822C48C0;
	sub_82350920(ctx, base);
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r6,176(r28)
	PPC_STORE_U32(ctx.r28.u32 + 176, ctx.r6.u32);
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r5,180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 180, ctx.r5.u32);
	// lbz r4,12(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// stb r4,184(r28)
	PPC_STORE_U8(ctx.r28.u32 + 184, ctx.r4.u8);
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// lfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f30,-72(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_822C48EC:
	// addi r3,r28,172
	ctx.r3.s64 = ctx.r28.s64 + 172;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822C4900;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// lfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f30,-72(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_822C4914:
	// lis r9,24887
	ctx.r9.s64 = 1630994432;
	// lis r5,-1024
	ctx.r5.s64 = -67108864;
	// ori r8,r9,54151
	ctx.r8.u64 = ctx.r9.u64 | 54151;
	// rldimi r5,r8,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// b 0x822c4b5c
	goto loc_822C4B5C;
loc_822C4928:
	// addi r31,r28,252
	ctx.r31.s64 = ctx.r28.s64 + 252;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r6,12(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x822C4940;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822c4960
	if (ctx.cr6.eq) goto loc_822C4960;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822C4960;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822C4960:
	// lis r10,-11009
	ctx.r10.s64 = -721485824;
	// lis r9,-16795
	ctx.r9.s64 = -1100677120;
	// ori r5,r10,40100
	ctx.r5.u64 = ctx.r10.u64 | 40100;
	// ori r8,r9,28976
	ctx.r8.u64 = ctx.r9.u64 | 28976;
	// rldimi r5,r8,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// b 0x822c4b5c
	goto loc_822C4B5C;
loc_822C4978:
	// lis r7,19711
	ctx.r7.s64 = 1291780096;
	// fmr f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f31.f64;
	// lis r6,-16792
	ctx.r6.s64 = -1100480512;
	// ori r5,r7,40100
	ctx.r5.u64 = ctx.r7.u64 | 40100;
	// ori r4,r6,15474
	ctx.r4.u64 = ctx.r6.u64 | 15474;
	// rldimi r5,r4,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// b 0x822c4b5c
	goto loc_822C4B5C;
loc_822C4994:
	// lis r3,21503
	ctx.r3.s64 = 1409220608;
	// fmr f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f31.f64;
	// lis r11,-16781
	ctx.r11.s64 = -1099759616;
	// ori r5,r3,40100
	ctx.r5.u64 = ctx.r3.u64 | 40100;
	// ori r10,r11,37681
	ctx.r10.u64 = ctx.r11.u64 | 37681;
	// rldimi r5,r10,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// b 0x822c4b5c
	goto loc_822C4B5C;
loc_822C49B0:
	// addi r31,r28,252
	ctx.r31.s64 = ctx.r28.s64 + 252;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822C49C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x822c49e8
	if (ctx.cr6.eq) goto loc_822C49E8;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,8(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x822C49E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822C49E8:
	// lis r4,-8449
	ctx.r4.s64 = -553713664;
	// fmr f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f31.f64;
	// lis r3,-16793
	ctx.r3.s64 = -1100546048;
	// ori r5,r4,40100
	ctx.r5.u64 = ctx.r4.u64 | 40100;
	// ori r11,r3,10819
	ctx.r11.u64 = ctx.r3.u64 | 10819;
	// rldimi r5,r11,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// b 0x822c4b5c
	goto loc_822C4B5C;
loc_822C4A04:
	// lis r10,-30977
	ctx.r10.s64 = -2030108672;
	// fmr f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f31.f64;
	// lis r9,-16795
	ctx.r9.s64 = -1100677120;
	// ori r5,r10,40100
	ctx.r5.u64 = ctx.r10.u64 | 40100;
	// ori r8,r9,7614
	ctx.r8.u64 = ctx.r9.u64 | 7614;
	// rldimi r5,r8,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// b 0x822c4b5c
	goto loc_822C4B5C;
loc_822C4A20:
	// lis r7,-26881
	ctx.r7.s64 = -1761673216;
	// fmr f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f31.f64;
	// lis r6,-16795
	ctx.r6.s64 = -1100677120;
	// ori r5,r7,40100
	ctx.r5.u64 = ctx.r7.u64 | 40100;
	// ori r4,r6,32028
	ctx.r4.u64 = ctx.r6.u64 | 32028;
	// rldimi r5,r4,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// b 0x822c4b5c
	goto loc_822C4B5C;
loc_822C4A3C:
	// lis r3,26623
	ctx.r3.s64 = 1744764928;
	// lis r11,-16795
	ctx.r11.s64 = -1100677120;
	// ori r5,r3,40100
	ctx.r5.u64 = ctx.r3.u64 | 40100;
	// ori r10,r11,9140
	ctx.r10.u64 = ctx.r11.u64 | 9140;
	// rldimi r5,r10,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// b 0x822c4b5c
	goto loc_822C4B5C;
loc_822C4A54:
	// lwz r9,1712(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1712);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822c4b88
	if (ctx.cr6.eq) goto loc_822C4B88;
	// addi r31,r28,252
	ctx.r31.s64 = ctx.r28.s64 + 252;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x822C4A78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x822c4b88
	if (!ctx.cr6.eq) goto loc_822C4B88;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r5,r28,1536
	ctx.r5.s64 = ctx.r28.s64 + 1536;
	// addi r11,r11,-18560
	ctx.r11.s64 = ctx.r11.s64 + -18560;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addis r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 327680;
	// addi r4,r11,7240
	ctx.r4.s64 = ctx.r11.s64 + 7240;
	// bl 0x82350920
	ctx.lr = 0x822C4AA0;
	sub_82350920(ctx, base);
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r5,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r5.u32);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r4,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r4.u32);
	// lbz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// stb r3,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r3.u8);
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// lfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f30,-72(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_822C4ACC:
	// lis r11,6291
	ctx.r11.s64 = 412286976;
	// lis r10,-22781
	ctx.r10.s64 = -1492975616;
	// ori r5,r11,40100
	ctx.r5.u64 = ctx.r11.u64 | 40100;
	// ori r9,r10,63798
	ctx.r9.u64 = ctx.r10.u64 | 63798;
	// rldimi r5,r9,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// b 0x822c4b5c
	goto loc_822C4B5C;
loc_822C4AE4:
	// lis r8,3255
	ctx.r8.s64 = 213319680;
	// lis r7,-22781
	ctx.r7.s64 = -1492975616;
	// ori r5,r8,40100
	ctx.r5.u64 = ctx.r8.u64 | 40100;
	// ori r6,r7,63799
	ctx.r6.u64 = ctx.r7.u64 | 63799;
	// rldimi r5,r6,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// b 0x822c4b5c
	goto loc_822C4B5C;
loc_822C4AFC:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r5,8
	ctx.r5.s64 = 524288;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// ori r3,r5,49800
	ctx.r3.u64 = ctx.r5.u64 | 49800;
	// addi r11,r11,-18560
	ctx.r11.s64 = ctx.r11.s64 + -18560;
	// lfd f13,-1536(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + -1536);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lfsx f0,r11,r3
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lfs f12,-15148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15148);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,8
	ctx.r10.s64 = 524288;
	// fsubs f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// li r30,19
	ctx.r30.s64 = 19;
	// ori r9,r10,49800
	ctx.r9.u64 = ctx.r10.u64 | 49800;
	// fsel f0,f10,f13,f0
	ctx.f0.f64 = ctx.f10.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// stfsx f0,r11,r9
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, temp.u32);
	// bl 0x822a3cf8
	ctx.lr = 0x822C4B4C;
	sub_822A3CF8(ctx, base);
	// ld r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// cmpldi cr6,r5,0
	ctx.cr6.compare<uint64_t>(ctx.r5.u64, 0, ctx.xer);
	// beq cr6,0x822c4b88
	if (ctx.cr6.eq) goto loc_822C4B88;
	// lbz r29,96(r1)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
loc_822C4B5C:
	// lfs f0,4(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stb r29,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r29.u8);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmuls f1,f30,f0
	ctx.f1.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// bl 0x822b1238
	ctx.lr = 0x822C4B88;
	sub_822B1238(ctx, base);
loc_822C4B88:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// lfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f30,-72(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_822C4BA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x822C4BA8;
	__savegprlr_29(ctx, base);
	// stwu r1,-752(r1)
	ea = -752 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r4,99
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 99, ctx.xer);
	// lwz r6,1920(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1920);
	// std r30,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r30.u64);
	// std r30,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r30.u64);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bgt cr6,0x822c5908
	if (ctx.cr6.gt) goto loc_822C5908;
	// lis r12,-32212
	ctx.r12.s64 = -2111045632;
	// addi r12,r12,19428
	ctx.r12.s64 = ctx.r12.s64 + 19428;
	// rlwinm r0,r4,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r4.u64) {
	case 0:
		goto loc_822C4D74;
	case 1:
		goto loc_822C4DB0;
	case 2:
		goto loc_822C4DF4;
	case 3:
		goto loc_822C4E2C;
	case 4:
		goto loc_822C4E54;
	case 5:
		goto loc_822C4E7C;
	case 6:
		goto loc_822C4EA0;
	case 7:
		goto loc_822C4FEC;
	case 8:
		goto loc_822C5908;
	case 9:
		goto loc_822C5908;
	case 10:
		goto loc_822C5908;
	case 11:
		goto loc_822C5908;
	case 12:
		goto loc_822C5908;
	case 13:
		goto loc_822C5908;
	case 14:
		goto loc_822C5908;
	case 15:
		goto loc_822C5908;
	case 16:
		goto loc_822C5908;
	case 17:
		goto loc_822C5908;
	case 18:
		goto loc_822C5908;
	case 19:
		goto loc_822C5908;
	case 20:
		goto loc_822C5908;
	case 21:
		goto loc_822C5908;
	case 22:
		goto loc_822C5908;
	case 23:
		goto loc_822C5908;
	case 24:
		goto loc_822C5908;
	case 25:
		goto loc_822C5908;
	case 26:
		goto loc_822C5908;
	case 27:
		goto loc_822C5908;
	case 28:
		goto loc_822C5908;
	case 29:
		goto loc_822C5908;
	case 30:
		goto loc_822C5908;
	case 31:
		goto loc_822C5908;
	case 32:
		goto loc_822C5908;
	case 33:
		goto loc_822C539C;
	case 34:
		goto loc_822C5908;
	case 35:
		goto loc_822C5908;
	case 36:
		goto loc_822C5908;
	case 37:
		goto loc_822C5908;
	case 38:
		goto loc_822C5908;
	case 39:
		goto loc_822C5908;
	case 40:
		goto loc_822C5908;
	case 41:
		goto loc_822C5908;
	case 42:
		goto loc_822C5908;
	case 43:
		goto loc_822C5908;
	case 44:
		goto loc_822C5908;
	case 45:
		goto loc_822C5908;
	case 46:
		goto loc_822C5358;
	case 47:
		goto loc_822C5908;
	case 48:
		goto loc_822C5908;
	case 49:
		goto loc_822C50A8;
	case 50:
		goto loc_822C50F4;
	case 51:
		goto loc_822C5140;
	case 52:
		goto loc_822C518C;
	case 53:
		goto loc_822C4EC8;
	case 54:
		goto loc_822C4F6C;
	case 55:
		goto loc_822C4EF4;
	case 56:
		goto loc_822C4F30;
	case 57:
		goto loc_822C5958;
	case 58:
		goto loc_822C4F98;
	case 59:
		goto loc_822C5908;
	case 60:
		goto loc_822C5908;
	case 61:
		goto loc_822C4F48;
	case 62:
		goto loc_822C5420;
	case 63:
		goto loc_822C54D0;
	case 64:
		goto loc_822C5958;
	case 65:
		goto loc_822C51D8;
	case 66:
		goto loc_822C52BC;
	case 67:
		goto loc_822C54EC;
	case 68:
		goto loc_822C5514;
	case 69:
		goto loc_822C5544;
	case 70:
		goto loc_822C5574;
	case 71:
		goto loc_822C55A4;
	case 72:
		goto loc_822C55D4;
	case 73:
		goto loc_822C5604;
	case 74:
		goto loc_822C5634;
	case 75:
		goto loc_822C5664;
	case 76:
		goto loc_822C56D0;
	case 77:
		goto loc_822C5700;
	case 78:
		goto loc_822C5730;
	case 79:
		goto loc_822C5760;
	case 80:
		goto loc_822C578C;
	case 81:
		goto loc_822C57B8;
	case 82:
		goto loc_822C5908;
	case 83:
		goto loc_822C5908;
	case 84:
		goto loc_822C5908;
	case 85:
		goto loc_822C5908;
	case 86:
		goto loc_822C5908;
	case 87:
		goto loc_822C5908;
	case 88:
		goto loc_822C5908;
	case 89:
		goto loc_822C5908;
	case 90:
		goto loc_822C5908;
	case 91:
		goto loc_822C5908;
	case 92:
		goto loc_822C5908;
	case 93:
		goto loc_822C5908;
	case 94:
		goto loc_822C5908;
	case 95:
		goto loc_822C5908;
	case 96:
		goto loc_822C5908;
	case 97:
		goto loc_822C5908;
	case 98:
		goto loc_822C57E4;
	case 99:
		goto loc_822C58B8;
	default:
		__builtin_unreachable();
	}
	// lwz r17,19828(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 19828);
	// lwz r17,19888(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 19888);
	// lwz r17,19956(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 19956);
	// lwz r17,20012(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 20012);
	// lwz r17,20052(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 20052);
	// lwz r17,20092(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 20092);
	// lwz r17,20128(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 20128);
	// lwz r17,20460(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 20460);
	// lwz r17,22792(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 22792);
	// lwz r17,22792(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 22792);
	// lwz r17,22792(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 22792);
	// lwz r17,22792(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 22792);
	// lwz r17,22792(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 22792);
	// lwz r17,22792(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 22792);
	// lwz r17,22792(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 22792);
	// lwz r17,22792(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 22792);
	// lwz r17,22792(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 22792);
	// lwz r17,22792(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 22792);
	// lwz r17,22792(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 22792);
	// lwz r17,22792(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 22792);
	// lwz r17,22792(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 22792);
	// lwz r17,22792(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 22792);
	// lwz r17,22792(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 22792);
	// lwz r17,22792(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 22792);
	// lwz r17,22792(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 22792);
	// lwz r17,22792(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 22792);
	// lwz r17,22792(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 22792);
	// lwz r17,22792(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 22792);
	// lwz r17,22792(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 22792);
	// lwz r17,22792(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 22792);
	// lwz r17,22792(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 22792);
	// lwz r17,22792(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 22792);
	// lwz r17,22792(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 22792);
	// lwz r17,21404(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 21404);
	// lwz r17,22792(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 22792);
	// lwz r17,22792(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 22792);
	// lwz r17,22792(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 22792);
	// lwz r17,22792(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 22792);
	// lwz r17,22792(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 22792);
	// lwz r17,22792(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 22792);
	// lwz r17,22792(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 22792);
	// lwz r17,22792(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 22792);
	// lwz r17,22792(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 22792);
	// lwz r17,22792(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 22792);
	// lwz r17,22792(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 22792);
	// lwz r17,22792(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 22792);
	// lwz r17,21336(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 21336);
	// lwz r17,22792(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 22792);
	// lwz r17,22792(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 22792);
	// lwz r17,20648(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 20648);
	// lwz r17,20724(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 20724);
	// lwz r17,20800(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 20800);
	// lwz r17,20876(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 20876);
	// lwz r17,20168(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 20168);
	// lwz r17,20332(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 20332);
	// lwz r17,20212(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 20212);
	// lwz r17,20272(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 20272);
	// lwz r17,22872(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 22872);
	// lwz r17,20376(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 20376);
	// lwz r17,22792(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 22792);
	// lwz r17,22792(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 22792);
	// lwz r17,20296(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 20296);
	// lwz r17,21536(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 21536);
	// lwz r17,21712(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 21712);
	// lwz r17,22872(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 22872);
	// lwz r17,20952(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 20952);
	// lwz r17,21180(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 21180);
	// lwz r17,21740(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 21740);
	// lwz r17,21780(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 21780);
	// lwz r17,21828(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 21828);
	// lwz r17,21876(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 21876);
	// lwz r17,21924(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 21924);
	// lwz r17,21972(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 21972);
	// lwz r17,22020(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 22020);
	// lwz r17,22068(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 22068);
	// lwz r17,22116(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 22116);
	// lwz r17,22224(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 22224);
	// lwz r17,22272(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 22272);
	// lwz r17,22320(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 22320);
	// lwz r17,22368(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 22368);
	// lwz r17,22412(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 22412);
	// lwz r17,22456(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 22456);
	// lwz r17,22792(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 22792);
	// lwz r17,22792(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 22792);
	// lwz r17,22792(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 22792);
	// lwz r17,22792(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 22792);
	// lwz r17,22792(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 22792);
	// lwz r17,22792(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 22792);
	// lwz r17,22792(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 22792);
	// lwz r17,22792(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 22792);
	// lwz r17,22792(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 22792);
	// lwz r17,22792(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 22792);
	// lwz r17,22792(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 22792);
	// lwz r17,22792(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 22792);
	// lwz r17,22792(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 22792);
	// lwz r17,22792(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 22792);
	// lwz r17,22792(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 22792);
	// lwz r17,22792(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 22792);
	// lwz r17,22500(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 22500);
	// lwz r17,22712(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 22712);
loc_822C4D74:
	// lbz r11,1228(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1228);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822c5958
	if (!ctx.cr6.eq) goto loc_822C5958;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r29,1916(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1916);
	// lis r9,24887
	ctx.r9.s64 = 1630994432;
	// lis r7,24887
	ctx.r7.s64 = 1630994432;
	// lis r30,-1024
	ctx.r30.s64 = -67108864;
	// ori r8,r9,54151
	ctx.r8.u64 = ctx.r9.u64 | 54151;
	// lis r5,-1024
	ctx.r5.s64 = -67108864;
	// stb r10,1228(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1228, ctx.r10.u8);
	// ori r6,r7,54151
	ctx.r6.u64 = ctx.r7.u64 | 54151;
	// rldimi r30,r8,32,0
	ctx.r30.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r30.u64 & 0xFFFFFFFF);
	// rldimi r5,r6,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// b 0x822c5934
	goto loc_822C5934;
loc_822C4DB0:
	// lbz r5,1229(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1229);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x822c5958
	if (!ctx.cr6.eq) goto loc_822C5958;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r29,1916(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1916);
	// lis r3,24351
	ctx.r3.s64 = 1595867136;
	// lis r11,-18687
	ctx.r11.s64 = -1224671232;
	// lis r9,24351
	ctx.r9.s64 = 1595867136;
	// lis r8,-18687
	ctx.r8.s64 = -1224671232;
	// ori r30,r3,40100
	ctx.r30.u64 = ctx.r3.u64 | 40100;
	// stb r4,1229(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1229, ctx.r4.u8);
	// ori r10,r11,21204
	ctx.r10.u64 = ctx.r11.u64 | 21204;
	// ori r5,r9,49700
	ctx.r5.u64 = ctx.r9.u64 | 49700;
	// ori r7,r8,21204
	ctx.r7.u64 = ctx.r8.u64 | 21204;
	// rldimi r30,r10,32,0
	ctx.r30.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r30.u64 & 0xFFFFFFFF);
	// rldimi r5,r7,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// b 0x822c5934
	goto loc_822C5934;
loc_822C4DF4:
	// lbz r6,1230(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1230);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x822c5958
	if (!ctx.cr6.eq) goto loc_822C5958;
	// li r4,1
	ctx.r4.s64 = 1;
	// lis r3,-23299
	ctx.r3.s64 = -1526923264;
	// lis r10,-23299
	ctx.r10.s64 = -1526923264;
	// lis r30,14944
	ctx.r30.s64 = 979369984;
	// ori r11,r3,8664
	ctx.r11.u64 = ctx.r3.u64 | 8664;
	// lis r5,-3272
	ctx.r5.s64 = -214433792;
	// stb r4,1230(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1230, ctx.r4.u8);
	// ori r9,r10,8669
	ctx.r9.u64 = ctx.r10.u64 | 8669;
	// rldimi r30,r11,32,0
	ctx.r30.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r30.u64 & 0xFFFFFFFF);
	// rldimi r5,r9,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// b 0x822c5934
	goto loc_822C5934;
loc_822C4E2C:
	// lis r8,22860
	ctx.r8.s64 = 1498152960;
	// lis r6,-11107
	ctx.r6.s64 = -727908352;
	// lis r4,22860
	ctx.r4.s64 = 1498152960;
	// lis r30,-11341
	ctx.r30.s64 = -743243776;
	// ori r7,r8,39545
	ctx.r7.u64 = ctx.r8.u64 | 39545;
	// ori r5,r6,24576
	ctx.r5.u64 = ctx.r6.u64 | 24576;
	// ori r3,r4,39545
	ctx.r3.u64 = ctx.r4.u64 | 39545;
	// rldimi r30,r7,32,0
	ctx.r30.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r30.u64 & 0xFFFFFFFF);
	// rldimi r5,r3,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// b 0x822c5934
	goto loc_822C5934;
loc_822C4E54:
	// lis r11,19988
	ctx.r11.s64 = 1309933568;
	// lis r9,30333
	ctx.r9.s64 = 1987903488;
	// lis r8,19988
	ctx.r8.s64 = 1309933568;
	// lis r30,30099
	ctx.r30.s64 = 1972568064;
	// ori r10,r11,54523
	ctx.r10.u64 = ctx.r11.u64 | 54523;
	// ori r5,r9,24576
	ctx.r5.u64 = ctx.r9.u64 | 24576;
	// ori r7,r8,54523
	ctx.r7.u64 = ctx.r8.u64 | 54523;
	// rldimi r30,r10,32,0
	ctx.r30.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r30.u64 & 0xFFFFFFFF);
	// rldimi r5,r7,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// b 0x822c5934
	goto loc_822C5934;
loc_822C4E7C:
	// lis r6,-29265
	ctx.r6.s64 = -1917911040;
	// lis r30,-320
	ctx.r30.s64 = -20971520;
	// ori r5,r6,44863
	ctx.r5.u64 = ctx.r6.u64 | 44863;
	// lis r4,-29265
	ctx.r4.s64 = -1917911040;
	// rldimi r30,r5,32,0
	ctx.r30.u64 = (__builtin_rotateleft64(ctx.r5.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r30.u64 & 0xFFFFFFFF);
	// lis r5,-18536
	ctx.r5.s64 = -1214775296;
	// ori r3,r4,44869
	ctx.r3.u64 = ctx.r4.u64 | 44869;
	// rldimi r5,r3,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// b 0x822c5934
	goto loc_822C5934;
loc_822C4EA0:
	// lis r11,-28753
	ctx.r11.s64 = -1884356608;
	// lis r9,893
	ctx.r9.s64 = 58523648;
	// lis r8,-28753
	ctx.r8.s64 = -1884356608;
	// lis r30,659
	ctx.r30.s64 = 43188224;
	// ori r10,r11,8568
	ctx.r10.u64 = ctx.r11.u64 | 8568;
	// ori r5,r9,24576
	ctx.r5.u64 = ctx.r9.u64 | 24576;
	// ori r7,r8,8568
	ctx.r7.u64 = ctx.r8.u64 | 8568;
	// rldimi r30,r10,32,0
	ctx.r30.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r30.u64 & 0xFFFFFFFF);
	// rldimi r5,r7,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// b 0x822c5934
	goto loc_822C5934;
loc_822C4EC8:
	// lis r5,-18687
	ctx.r5.s64 = -1224671232;
	// lis r6,16545
	ctx.r6.s64 = 1084293120;
	// lis r3,16545
	ctx.r3.s64 = 1084293120;
	// lis r11,-18687
	ctx.r11.s64 = -1224671232;
	// ori r4,r5,42979
	ctx.r4.u64 = ctx.r5.u64 | 42979;
	// ori r30,r6,23552
	ctx.r30.u64 = ctx.r6.u64 | 23552;
	// ori r5,r3,33152
	ctx.r5.u64 = ctx.r3.u64 | 33152;
	// ori r10,r11,42979
	ctx.r10.u64 = ctx.r11.u64 | 42979;
	// rldimi r30,r4,32,0
	ctx.r30.u64 = (__builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r30.u64 & 0xFFFFFFFF);
	// rldimi r5,r10,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// b 0x822c5934
	goto loc_822C5934;
loc_822C4EF4:
	// lbz r9,1228(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1228);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822c5958
	if (!ctx.cr6.eq) goto loc_822C5958;
	// li r8,1
	ctx.r8.s64 = 1;
	// lis r7,19988
	ctx.r7.s64 = 1309933568;
	// lis r5,30333
	ctx.r5.s64 = 1987903488;
	// lis r4,19988
	ctx.r4.s64 = 1309933568;
	// lis r30,30099
	ctx.r30.s64 = 1972568064;
	// ori r6,r7,54523
	ctx.r6.u64 = ctx.r7.u64 | 54523;
	// stb r8,1228(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1228, ctx.r8.u8);
	// ori r5,r5,24576
	ctx.r5.u64 = ctx.r5.u64 | 24576;
	// ori r3,r4,54523
	ctx.r3.u64 = ctx.r4.u64 | 54523;
	// rldimi r30,r6,32,0
	ctx.r30.u64 = (__builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r30.u64 & 0xFFFFFFFF);
	// rldimi r5,r3,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// b 0x822c5934
	goto loc_822C5934;
loc_822C4F30:
	// lis r11,-23309
	ctx.r11.s64 = -1527578624;
	// lis r5,5632
	ctx.r5.s64 = 369098752;
	// ori r10,r11,47241
	ctx.r10.u64 = ctx.r11.u64 | 47241;
	// rldimi r5,r10,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// b 0x822c5934
	goto loc_822C5934;
loc_822C4F48:
	// lis r9,-20324
	ctx.r9.s64 = -1331953664;
	// lis r7,-20324
	ctx.r7.s64 = -1331953664;
	// lis r30,9664
	ctx.r30.s64 = 633339904;
	// ori r8,r9,35669
	ctx.r8.u64 = ctx.r9.u64 | 35669;
	// lis r5,-8552
	ctx.r5.s64 = -560463872;
	// ori r6,r7,35674
	ctx.r6.u64 = ctx.r7.u64 | 35674;
	// rldimi r30,r8,32,0
	ctx.r30.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r30.u64 & 0xFFFFFFFF);
	// rldimi r5,r6,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// b 0x822c5934
	goto loc_822C5934;
loc_822C4F6C:
	// lis r5,943
	ctx.r5.s64 = 61800448;
	// lis r4,23164
	ctx.r4.s64 = 1518075904;
	// lis r11,943
	ctx.r11.s64 = 61800448;
	// lis r10,23164
	ctx.r10.s64 = 1518075904;
	// ori r30,r5,48128
	ctx.r30.u64 = ctx.r5.u64 | 48128;
	// ori r3,r4,47940
	ctx.r3.u64 = ctx.r4.u64 | 47940;
	// ori r5,r11,57728
	ctx.r5.u64 = ctx.r11.u64 | 57728;
	// ori r9,r10,47940
	ctx.r9.u64 = ctx.r10.u64 | 47940;
	// rldimi r30,r3,32,0
	ctx.r30.u64 = (__builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r30.u64 & 0xFFFFFFFF);
	// rldimi r5,r9,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// b 0x822c5934
	goto loc_822C5934;
loc_822C4F98:
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r8,8192
	ctx.r8.s64 = 8192;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f0,25556(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25556);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,476(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 476, temp.u32);
	// stw r8,508(r1)
	PPC_STORE_U32(ctx.r1.u32 + 508, ctx.r8.u32);
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x822C4FC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822C4FDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stb r30,56(r31)
	PPC_STORE_U8(ctx.r31.u32 + 56, ctx.r30.u8);
	// stb r30,72(r31)
	PPC_STORE_U8(ctx.r31.u32 + 72, ctx.r30.u8);
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_822C4FEC:
	// lis r10,3
	ctx.r10.s64 = 196608;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// ori r9,r10,12424
	ctx.r9.u64 = ctx.r10.u64 | 12424;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// lis r8,3
	ctx.r8.s64 = 196608;
	// lis r4,3
	ctx.r4.s64 = 196608;
	// ori r7,r8,12424
	ctx.r7.u64 = ctx.r8.u64 | 12424;
	// ori r3,r4,12428
	ctx.r3.u64 = ctx.r4.u64 | 12428;
	// lwzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lis r8,3
	ctx.r8.s64 = 196608;
	// lis r6,-13108
	ctx.r6.s64 = -859045888;
	// rlwinm r9,r10,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// lhzx r10,r11,r7
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r7.u32);
	// ori r7,r8,12424
	ctx.r7.u64 = ctx.r8.u64 | 12424;
	// ori r5,r6,52429
	ctx.r5.u64 = ctx.r6.u64 | 52429;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwzx r9,r11,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// lis r6,3
	ctx.r6.s64 = 196608;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r4,r8,13432
	ctx.r4.s64 = ctx.r8.s64 + 13432;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// ori r8,r6,12428
	ctx.r8.u64 = ctx.r6.u64 | 12428;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stwx r10,r11,r7
	PPC_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r10.u32);
	// mulhwu r7,r10,r5
	ctx.r7.u64 = (uint64_t(ctx.r10.u32) * uint64_t(ctx.r5.u32)) >> 32;
	// stwx r9,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u32);
	// rlwinm r11,r7,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// subf r11,r6,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r6.s64;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x8259d1b0
	ctx.lr = 0x822C5078;
	sub_8259D1B0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,13416
	ctx.r4.s64 = ctx.r11.s64 + 13416;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259d1b0
	ctx.lr = 0x822C508C;
	sub_8259D1B0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823471d8
	ctx.lr = 0x822C5094;
	sub_823471D8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823471d8
	ctx.lr = 0x822C50A0;
	sub_823471D8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x822c5924
	goto loc_822C5924;
loc_822C50A8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stb r30,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r30.u8);
	// li r3,18
	ctx.r3.s64 = 18;
	// lis r10,-30595
	ctx.r10.s64 = -2005073920;
	// li r9,1
	ctx.r9.s64 = 1;
	// ori r8,r10,1790
	ctx.r8.u64 = ctx.r10.u64 | 1790;
	// lfs f3,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f3.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f2,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-12950
	ctx.r11.s64 = -848691200;
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// ori r5,r11,32768
	ctx.r5.u64 = ctx.r11.u64 | 32768;
	// rldimi r5,r8,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// bl 0x822b1238
	ctx.lr = 0x822C50EC;
	sub_822B1238(ctx, base);
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_822C50F4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stb r30,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r30.u8);
	// lis r4,-30595
	ctx.r4.s64 = -2005073920;
	// lis r5,5163
	ctx.r5.s64 = 338362368;
	// ori r3,r4,10555
	ctx.r3.u64 = ctx.r4.u64 | 10555;
	// li r7,18
	ctx.r7.s64 = 18;
	// lfs f3,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f3.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// ori r5,r5,45056
	ctx.r5.u64 = ctx.r5.u64 | 45056;
	// li r9,1
	ctx.r9.s64 = 1;
	// rldimi r5,r3,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// lfs f2,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f2.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x822b1238
	ctx.lr = 0x822C5138;
	sub_822B1238(ctx, base);
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_822C5140:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stb r30,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r30.u8);
	// lis r8,6557
	ctx.r8.s64 = 429719552;
	// lis r7,-30596
	ctx.r7.s64 = -2005139456;
	// li r10,18
	ctx.r10.s64 = 18;
	// ori r4,r7,49990
	ctx.r4.u64 = ctx.r7.u64 | 49990;
	// lfs f3,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f3.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// ori r5,r8,32768
	ctx.r5.u64 = ctx.r8.u64 | 32768;
	// li r9,1
	ctx.r9.s64 = 1;
	// rldimi r5,r4,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lfs f2,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f2.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x822b1238
	ctx.lr = 0x822C5184;
	sub_822B1238(ctx, base);
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_822C518C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stb r30,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r30.u8);
	// li r3,18
	ctx.r3.s64 = 18;
	// lis r10,-30596
	ctx.r10.s64 = -2005139456;
	// li r9,1
	ctx.r9.s64 = 1;
	// ori r8,r10,55079
	ctx.r8.u64 = ctx.r10.u64 | 55079;
	// lfs f3,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f3.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f2,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-17386
	ctx.r11.s64 = -1139408896;
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// ori r5,r11,24576
	ctx.r5.u64 = ctx.r11.u64 | 24576;
	// rldimi r5,r8,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// bl 0x822b1238
	ctx.lr = 0x822C51D0;
	sub_822B1238(ctx, base);
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_822C51D8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stb r30,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r30.u8);
	// lis r4,-18019
	ctx.r4.s64 = -1180893184;
	// li r7,18
	ctx.r7.s64 = 18;
	// ori r3,r4,50014
	ctx.r3.u64 = ctx.r4.u64 | 50014;
	// lis r5,28464
	ctx.r5.s64 = 1865416704;
	// lfs f3,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f3.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// rldimi r5,r3,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// stfs f3,1224(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1224, temp.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f2,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f1,3260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3260);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822b1238
	ctx.lr = 0x822C5220;
	sub_822B1238(ctx, base);
	// lis r11,27632
	ctx.r11.s64 = 1810890752;
	// lis r5,-7936
	ctx.r5.s64 = -520093696;
	// ori r10,r11,48273
	ctx.r10.u64 = ctx.r11.u64 | 48273;
	// li r4,0
	ctx.r4.s64 = 0;
	// rldimi r5,r10,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822b2960
	ctx.lr = 0x822C523C;
	sub_822B2960(ctx, base);
	// lis r9,27632
	ctx.r9.s64 = 1810890752;
	// lis r5,-7936
	ctx.r5.s64 = -520093696;
	// ori r8,r9,48273
	ctx.r8.u64 = ctx.r9.u64 | 48273;
	// li r4,1
	ctx.r4.s64 = 1;
	// rldimi r5,r8,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822b2960
	ctx.lr = 0x822C5258;
	sub_822B2960(ctx, base);
	// lis r7,30566
	ctx.r7.s64 = 2003173376;
	// lis r6,21893
	ctx.r6.s64 = 1434779648;
	// ori r5,r7,7680
	ctx.r5.u64 = ctx.r7.u64 | 7680;
	// ori r4,r6,22316
	ctx.r4.u64 = ctx.r6.u64 | 22316;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rldimi r5,r4,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x822b2960
	ctx.lr = 0x822C5278;
	sub_822B2960(ctx, base);
	// lis r3,30566
	ctx.r3.s64 = 2003173376;
	// lis r11,21893
	ctx.r11.s64 = 1434779648;
	// ori r5,r3,1280
	ctx.r5.u64 = ctx.r3.u64 | 1280;
	// ori r10,r11,22316
	ctx.r10.u64 = ctx.r11.u64 | 22316;
	// li r4,3
	ctx.r4.s64 = 3;
	// rldimi r5,r10,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822b2960
	ctx.lr = 0x822C5298;
	sub_822B2960(ctx, base);
	// lis r9,-20021
	ctx.r9.s64 = -1312096256;
	// lis r5,-26512
	ctx.r5.s64 = -1737490432;
	// ori r8,r9,25501
	ctx.r8.u64 = ctx.r9.u64 | 25501;
	// li r4,4
	ctx.r4.s64 = 4;
	// rldimi r5,r8,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822b2960
	ctx.lr = 0x822C52B4;
	sub_822B2960(ctx, base);
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_822C52BC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stb r30,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r30.u8);
	// lis r4,-18019
	ctx.r4.s64 = -1180893184;
	// stw r30,684(r1)
	PPC_STORE_U32(ctx.r1.u32 + 684, ctx.r30.u32);
	// lis r5,6435
	ctx.r5.s64 = 421724160;
	// ori r3,r4,50015
	ctx.r3.u64 = ctx.r4.u64 | 50015;
	// li r7,18
	ctx.r7.s64 = 18;
	// lfs f3,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f3.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// ori r5,r5,53248
	ctx.r5.u64 = ctx.r5.u64 | 53248;
	// li r9,1
	ctx.r9.s64 = 1;
	// rldimi r5,r3,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// lfs f2,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f1,25556(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25556);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822b1238
	ctx.lr = 0x822C5308;
	sub_822B1238(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r31,r31,1120
	ctx.r31.s64 = ctx.r31.s64 + 1120;
	// li r29,5
	ctx.r29.s64 = 5;
	// lfs f0,-15112(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15112);
	ctx.f0.f64 = double(temp.f32);
	// li r11,8192
	ctx.r11.s64 = 8192;
	// stfs f0,652(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 652, temp.u32);
	// stw r11,684(r1)
	PPC_STORE_U32(ctx.r1.u32 + 684, ctx.r11.u32);
loc_822C5324:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,544
	ctx.r4.s64 = ctx.r1.s64 + 544;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822C533C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// stb r30,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r30.u8);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x822c5324
	if (!ctx.cr6.eq) goto loc_822C5324;
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_822C5358:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r8,-29265
	ctx.r8.s64 = -1917911040;
	// lis r3,-29265
	ctx.r3.s64 = -1917911040;
	// ori r7,r8,44869
	ctx.r7.u64 = ctx.r8.u64 | 44869;
	// lis r5,-18536
	ctx.r5.s64 = -1214775296;
	// lfs f2,2868(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r4,-320
	ctx.r4.s64 = -20971520;
	// addi r11,r11,1940
	ctx.r11.s64 = ctx.r11.s64 + 1940;
	// rldimi r5,r7,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// lfs f1,84(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// ori r11,r3,44863
	ctx.r11.u64 = ctx.r3.u64 | 44863;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x822b1078
	ctx.lr = 0x822C5394;
	sub_822B1078(ctx, base);
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_822C539C:
	// lis r10,8
	ctx.r10.s64 = 524288;
	// stb r30,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r30.u8);
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// ori r9,r10,49800
	ctx.r9.u64 = ctx.r10.u64 | 49800;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,-18560
	ctx.r11.s64 = ctx.r11.s64 + -18560;
	// li r8,19
	ctx.r8.s64 = 19;
	// lis r7,-20319
	ctx.r7.s64 = -1331625984;
	// lis r5,-16752
	ctx.r5.s64 = -1097859072;
	// lfs f13,1940(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 1940);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lfsx f0,r11,r9
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// ori r4,r7,64819
	ctx.r4.u64 = ctx.r7.u64 | 64819;
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// rldimi r5,r4,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// li r9,0
	ctx.r9.s64 = 0;
	// lfd f13,-5592(r10)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + -5592);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f3,2864(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2864);
	ctx.f3.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fsel f0,f12,f13,f0
	ctx.f0.f64 = ctx.f12.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// lfs f2,2868(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2868);
	ctx.f2.f64 = double(temp.f32);
	// lis r10,8
	ctx.r10.s64 = 524288;
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// ori r8,r10,49800
	ctx.r8.u64 = ctx.r10.u64 | 49800;
	// stfsx f0,r11,r8
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, temp.u32);
	// bl 0x822b1238
	ctx.lr = 0x822C5418;
	sub_822B1238(ctx, base);
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_822C5420:
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// stw r30,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r29,r11,-18560
	ctx.r29.s64 = ctx.r11.s64 + -18560;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// addi r11,r11,1940
	ctx.r11.s64 = ctx.r11.s64 + 1940;
	// addi r4,r11,172
	ctx.r4.s64 = ctx.r11.s64 + 172;
	// bl 0x8234c370
	ctx.lr = 0x822C5444;
	sub_8234C370(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r7,332(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r3,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r3.u32);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// ori r11,r7,4
	ctx.r11.u64 = ctx.r7.u64 | 4;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lfs f0,2868(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stfs f0,276(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 276, temp.u32);
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stb r6,337(r1)
	PPC_STORE_U8(ctx.r1.u32 + 337, ctx.r6.u8);
	// ori r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 16384;
	// lfs f0,-27244(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27244);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,292(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 292, temp.u32);
	// ori r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 4096;
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// lfs f0,2864(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// addis r10,r29,5
	ctx.r10.s64 = ctx.r29.s64 + 327680;
	// ori r9,r11,16
	ctx.r9.u64 = ctx.r11.u64 | 16;
	// stfs f0,280(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 280, temp.u32);
	// addi r4,r10,7240
	ctx.r4.s64 = ctx.r10.s64 + 7240;
	// li r10,18
	ctx.r10.s64 = 18;
	// stw r9,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r9.u32);
	// stb r10,336(r1)
	PPC_STORE_U8(ctx.r1.u32 + 336, ctx.r10.u8);
	// bl 0x82350920
	ctx.lr = 0x822C54B0;
	sub_82350920(ctx, base);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r8,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r8.u32);
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r7,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r7.u32);
	// lbz r6,12(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// stb r6,184(r31)
	PPC_STORE_U8(ctx.r31.u32 + 184, ctx.r6.u8);
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_822C54D0:
	// addi r3,r31,172
	ctx.r3.s64 = ctx.r31.s64 + 172;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,8(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x822C54E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_822C54EC:
	// lis r3,24887
	ctx.r3.s64 = 1630994432;
	// lwz r29,1916(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1916);
	// lis r10,24887
	ctx.r10.s64 = 1630994432;
	// lis r30,-1024
	ctx.r30.s64 = -67108864;
	// ori r11,r3,54151
	ctx.r11.u64 = ctx.r3.u64 | 54151;
	// lis r5,-1024
	ctx.r5.s64 = -67108864;
	// ori r9,r10,54151
	ctx.r9.u64 = ctx.r10.u64 | 54151;
	// rldimi r30,r11,32,0
	ctx.r30.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r30.u64 & 0xFFFFFFFF);
	// rldimi r5,r9,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// b 0x822c5934
	goto loc_822C5934;
loc_822C5514:
	// lis r8,-11009
	ctx.r8.s64 = -721485824;
	// lwz r29,1916(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1916);
	// lis r7,-16795
	ctx.r7.s64 = -1100677120;
	// lis r5,-11009
	ctx.r5.s64 = -721485824;
	// lis r4,-16795
	ctx.r4.s64 = -1100677120;
	// ori r30,r8,40100
	ctx.r30.u64 = ctx.r8.u64 | 40100;
	// ori r6,r7,28976
	ctx.r6.u64 = ctx.r7.u64 | 28976;
	// ori r5,r5,49700
	ctx.r5.u64 = ctx.r5.u64 | 49700;
	// ori r3,r4,28976
	ctx.r3.u64 = ctx.r4.u64 | 28976;
	// rldimi r30,r6,32,0
	ctx.r30.u64 = (__builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r30.u64 & 0xFFFFFFFF);
	// rldimi r5,r3,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// b 0x822c5934
	goto loc_822C5934;
loc_822C5544:
	// lis r11,19711
	ctx.r11.s64 = 1291780096;
	// lwz r29,1916(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1916);
	// lis r10,-16792
	ctx.r10.s64 = -1100480512;
	// lis r8,19711
	ctx.r8.s64 = 1291780096;
	// lis r7,-16792
	ctx.r7.s64 = -1100480512;
	// ori r30,r11,40100
	ctx.r30.u64 = ctx.r11.u64 | 40100;
	// ori r9,r10,15474
	ctx.r9.u64 = ctx.r10.u64 | 15474;
	// ori r5,r8,49700
	ctx.r5.u64 = ctx.r8.u64 | 49700;
	// ori r6,r7,15474
	ctx.r6.u64 = ctx.r7.u64 | 15474;
	// rldimi r30,r9,32,0
	ctx.r30.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r30.u64 & 0xFFFFFFFF);
	// rldimi r5,r6,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// b 0x822c5934
	goto loc_822C5934;
loc_822C5574:
	// lis r5,21503
	ctx.r5.s64 = 1409220608;
	// lwz r29,1916(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1916);
	// lis r4,-16781
	ctx.r4.s64 = -1099759616;
	// lis r11,21503
	ctx.r11.s64 = 1409220608;
	// lis r10,-16781
	ctx.r10.s64 = -1099759616;
	// ori r30,r5,40100
	ctx.r30.u64 = ctx.r5.u64 | 40100;
	// ori r3,r4,37681
	ctx.r3.u64 = ctx.r4.u64 | 37681;
	// ori r5,r11,49700
	ctx.r5.u64 = ctx.r11.u64 | 49700;
	// ori r9,r10,37681
	ctx.r9.u64 = ctx.r10.u64 | 37681;
	// rldimi r30,r3,32,0
	ctx.r30.u64 = (__builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r30.u64 & 0xFFFFFFFF);
	// rldimi r5,r9,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// b 0x822c5934
	goto loc_822C5934;
loc_822C55A4:
	// lis r8,-8449
	ctx.r8.s64 = -553713664;
	// lwz r29,1916(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1916);
	// lis r7,-16793
	ctx.r7.s64 = -1100546048;
	// lis r5,-8449
	ctx.r5.s64 = -553713664;
	// lis r4,-16793
	ctx.r4.s64 = -1100546048;
	// ori r30,r8,40100
	ctx.r30.u64 = ctx.r8.u64 | 40100;
	// ori r6,r7,10819
	ctx.r6.u64 = ctx.r7.u64 | 10819;
	// ori r5,r5,49700
	ctx.r5.u64 = ctx.r5.u64 | 49700;
	// ori r3,r4,10819
	ctx.r3.u64 = ctx.r4.u64 | 10819;
	// rldimi r30,r6,32,0
	ctx.r30.u64 = (__builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r30.u64 & 0xFFFFFFFF);
	// rldimi r5,r3,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// b 0x822c5934
	goto loc_822C5934;
loc_822C55D4:
	// lis r11,-30977
	ctx.r11.s64 = -2030108672;
	// lwz r29,1916(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1916);
	// lis r10,-16795
	ctx.r10.s64 = -1100677120;
	// lis r8,-30977
	ctx.r8.s64 = -2030108672;
	// lis r7,-16795
	ctx.r7.s64 = -1100677120;
	// ori r30,r11,40100
	ctx.r30.u64 = ctx.r11.u64 | 40100;
	// ori r9,r10,7614
	ctx.r9.u64 = ctx.r10.u64 | 7614;
	// ori r5,r8,49700
	ctx.r5.u64 = ctx.r8.u64 | 49700;
	// ori r6,r7,7614
	ctx.r6.u64 = ctx.r7.u64 | 7614;
	// rldimi r30,r9,32,0
	ctx.r30.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r30.u64 & 0xFFFFFFFF);
	// rldimi r5,r6,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// b 0x822c5934
	goto loc_822C5934;
loc_822C5604:
	// lis r5,-26881
	ctx.r5.s64 = -1761673216;
	// lwz r29,1916(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1916);
	// lis r4,-16795
	ctx.r4.s64 = -1100677120;
	// lis r11,-26881
	ctx.r11.s64 = -1761673216;
	// lis r10,-16795
	ctx.r10.s64 = -1100677120;
	// ori r30,r5,40100
	ctx.r30.u64 = ctx.r5.u64 | 40100;
	// ori r3,r4,32028
	ctx.r3.u64 = ctx.r4.u64 | 32028;
	// ori r5,r11,49700
	ctx.r5.u64 = ctx.r11.u64 | 49700;
	// ori r9,r10,32028
	ctx.r9.u64 = ctx.r10.u64 | 32028;
	// rldimi r30,r3,32,0
	ctx.r30.u64 = (__builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r30.u64 & 0xFFFFFFFF);
	// rldimi r5,r9,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// b 0x822c5934
	goto loc_822C5934;
loc_822C5634:
	// lis r8,26623
	ctx.r8.s64 = 1744764928;
	// lwz r29,1916(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1916);
	// lis r7,-16795
	ctx.r7.s64 = -1100677120;
	// lis r5,26623
	ctx.r5.s64 = 1744764928;
	// lis r4,-16795
	ctx.r4.s64 = -1100677120;
	// ori r30,r8,40100
	ctx.r30.u64 = ctx.r8.u64 | 40100;
	// ori r6,r7,9140
	ctx.r6.u64 = ctx.r7.u64 | 9140;
	// ori r5,r5,49700
	ctx.r5.u64 = ctx.r5.u64 | 49700;
	// ori r3,r4,9140
	ctx.r3.u64 = ctx.r4.u64 | 9140;
	// rldimi r30,r6,32,0
	ctx.r30.u64 = (__builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r30.u64 & 0xFFFFFFFF);
	// rldimi r5,r3,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// b 0x822c5934
	goto loc_822C5934;
loc_822C5664:
	// lwz r11,1712(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1712);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c5958
	if (ctx.cr6.eq) goto loc_822C5958;
	// addi r30,r31,252
	ctx.r30.s64 = ctx.r31.s64 + 252;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822C5688;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x822c5958
	if (!ctx.cr6.eq) goto loc_822C5958;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r5,r31,1536
	ctx.r5.s64 = ctx.r31.s64 + 1536;
	// addi r11,r11,-18560
	ctx.r11.s64 = ctx.r11.s64 + -18560;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addis r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 327680;
	// addi r4,r11,7240
	ctx.r4.s64 = ctx.r11.s64 + 7240;
	// bl 0x82350920
	ctx.lr = 0x822C56B0;
	sub_82350920(ctx, base);
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r7,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r7.u32);
	// lwz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r6,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r6.u32);
	// lbz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// stb r5,12(r30)
	PPC_STORE_U8(ctx.r30.u32 + 12, ctx.r5.u8);
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_822C56D0:
	// lis r4,-32626
	ctx.r4.s64 = -2138177536;
	// lwz r29,1916(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1916);
	// lis r3,22864
	ctx.r3.s64 = 1498415104;
	// lis r10,-32626
	ctx.r10.s64 = -2138177536;
	// lis r9,22864
	ctx.r9.s64 = 1498415104;
	// ori r30,r4,44196
	ctx.r30.u64 = ctx.r4.u64 | 44196;
	// ori r11,r3,40469
	ctx.r11.u64 = ctx.r3.u64 | 40469;
	// ori r5,r10,53796
	ctx.r5.u64 = ctx.r10.u64 | 53796;
	// ori r8,r9,40469
	ctx.r8.u64 = ctx.r9.u64 | 40469;
	// rldimi r30,r11,32,0
	ctx.r30.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r30.u64 & 0xFFFFFFFF);
	// rldimi r5,r8,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// b 0x822c5934
	goto loc_822C5934;
loc_822C5700:
	// lis r7,6291
	ctx.r7.s64 = 412286976;
	// lwz r29,1916(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1916);
	// lis r6,-22781
	ctx.r6.s64 = -1492975616;
	// ori r30,r7,40100
	ctx.r30.u64 = ctx.r7.u64 | 40100;
	// ori r5,r6,63798
	ctx.r5.u64 = ctx.r6.u64 | 63798;
	// lis r4,6291
	ctx.r4.s64 = 412286976;
	// lis r3,-22781
	ctx.r3.s64 = -1492975616;
	// rldimi r30,r5,32,0
	ctx.r30.u64 = (__builtin_rotateleft64(ctx.r5.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r30.u64 & 0xFFFFFFFF);
	// ori r5,r4,49700
	ctx.r5.u64 = ctx.r4.u64 | 49700;
	// ori r11,r3,63798
	ctx.r11.u64 = ctx.r3.u64 | 63798;
	// rldimi r5,r11,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// b 0x822c5934
	goto loc_822C5934;
loc_822C5730:
	// lis r10,3255
	ctx.r10.s64 = 213319680;
	// lwz r29,1916(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1916);
	// lis r9,-22781
	ctx.r9.s64 = -1492975616;
	// lis r7,3255
	ctx.r7.s64 = 213319680;
	// lis r6,-22781
	ctx.r6.s64 = -1492975616;
	// ori r30,r10,40100
	ctx.r30.u64 = ctx.r10.u64 | 40100;
	// ori r8,r9,63799
	ctx.r8.u64 = ctx.r9.u64 | 63799;
	// ori r5,r7,49700
	ctx.r5.u64 = ctx.r7.u64 | 49700;
	// ori r4,r6,63799
	ctx.r4.u64 = ctx.r6.u64 | 63799;
	// rldimi r30,r8,32,0
	ctx.r30.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r30.u64 & 0xFFFFFFFF);
	// rldimi r5,r4,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// b 0x822c5934
	goto loc_822C5934;
loc_822C5760:
	// lis r3,10495
	ctx.r3.s64 = 687800320;
	// lis r11,-11342
	ctx.r11.s64 = -743309312;
	// lis r9,10495
	ctx.r9.s64 = 687800320;
	// lis r8,-11342
	ctx.r8.s64 = -743309312;
	// ori r30,r3,40100
	ctx.r30.u64 = ctx.r3.u64 | 40100;
	// ori r10,r11,15905
	ctx.r10.u64 = ctx.r11.u64 | 15905;
	// ori r5,r9,49700
	ctx.r5.u64 = ctx.r9.u64 | 49700;
	// ori r7,r8,15905
	ctx.r7.u64 = ctx.r8.u64 | 15905;
	// rldimi r30,r10,32,0
	ctx.r30.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r30.u64 & 0xFFFFFFFF);
	// rldimi r5,r7,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// b 0x822c5934
	goto loc_822C5934;
loc_822C578C:
	// lis r5,-9863
	ctx.r5.s64 = -646381568;
	// lis r6,-30721
	ctx.r6.s64 = -2013331456;
	// lis r3,-30721
	ctx.r3.s64 = -2013331456;
	// lis r11,-9863
	ctx.r11.s64 = -646381568;
	// ori r4,r5,59291
	ctx.r4.u64 = ctx.r5.u64 | 59291;
	// ori r30,r6,40100
	ctx.r30.u64 = ctx.r6.u64 | 40100;
	// ori r5,r3,49700
	ctx.r5.u64 = ctx.r3.u64 | 49700;
	// ori r10,r11,59291
	ctx.r10.u64 = ctx.r11.u64 | 59291;
	// rldimi r30,r4,32,0
	ctx.r30.u64 = (__builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r30.u64 & 0xFFFFFFFF);
	// rldimi r5,r10,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// b 0x822c5934
	goto loc_822C5934;
loc_822C57B8:
	// lis r9,-22017
	ctx.r9.s64 = -1442906112;
	// lis r8,23275
	ctx.r8.s64 = 1525350400;
	// lis r6,-22017
	ctx.r6.s64 = -1442906112;
	// lis r4,23275
	ctx.r4.s64 = 1525350400;
	// ori r30,r9,40100
	ctx.r30.u64 = ctx.r9.u64 | 40100;
	// ori r7,r8,6655
	ctx.r7.u64 = ctx.r8.u64 | 6655;
	// ori r5,r6,49700
	ctx.r5.u64 = ctx.r6.u64 | 49700;
	// ori r3,r4,6655
	ctx.r3.u64 = ctx.r4.u64 | 6655;
	// rldimi r30,r7,32,0
	ctx.r30.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r30.u64 & 0xFFFFFFFF);
	// rldimi r5,r3,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// b 0x822c5934
	goto loc_822C5934;
loc_822C57E4:
	// lwz r11,1520(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1520);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c5958
	if (ctx.cr6.eq) goto loc_822C5958;
	// addi r30,r31,188
	ctx.r30.s64 = ctx.r31.s64 + 188;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822C5808;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x822c5868
	if (!ctx.cr6.eq) goto loc_822C5868;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r3,r11,26080
	ctx.r3.s64 = ctx.r11.s64 + 26080;
	// bl 0x8210af88
	ctx.lr = 0x822C5820;
	sub_8210AF88(ctx, base);
	// extsb r7,r3
	ctx.r7.s64 = ctx.r3.s8;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x822c5958
	if (!ctx.cr6.eq) goto loc_822C5958;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r5,r31,1344
	ctx.r5.s64 = ctx.r31.s64 + 1344;
	// addi r11,r11,-18560
	ctx.r11.s64 = ctx.r11.s64 + -18560;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addis r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 327680;
	// addi r4,r11,7240
	ctx.r4.s64 = ctx.r11.s64 + 7240;
	// bl 0x82350920
	ctx.lr = 0x822C5848;
	sub_82350920(ctx, base);
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r6,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r6.u32);
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r5,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r5.u32);
	// lbz r4,12(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// stb r4,12(r30)
	PPC_STORE_U8(ctx.r30.u32 + 12, ctx.r4.u8);
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_822C5868:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1428(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1428);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x822c5958
	if (!ctx.cr6.lt) goto loc_822C5958;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r31,1344
	ctx.r4.s64 = ctx.r31.s64 + 1344;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f13,-492(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -492);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,140(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 140);
	// fadds f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f11,84(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 84, temp.u32);
	// ori r10,r11,8
	ctx.r10.u64 = ctx.r11.u64 | 8;
	// stw r10,140(r4)
	PPC_STORE_U32(ctx.r4.u32 + 140, ctx.r10.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822C58B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_822C58B8:
	// addi r30,r31,188
	ctx.r30.s64 = ctx.r31.s64 + 188;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8234df60
	ctx.lr = 0x822C58C4;
	sub_8234DF60(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x822c5958
	if (ctx.cr6.eq) goto loc_822C5958;
	// addi r11,r31,1344
	ctx.r11.s64 = ctx.r31.s64 + 1344;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,140(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// lfs f0,2864(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// ori r5,r6,8
	ctx.r5.u64 = ctx.r6.u64 | 8;
	// stfs f0,84(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 84, temp.u32);
	// stw r5,140(r11)
	PPC_STORE_U32(ctx.r11.u32 + 140, ctx.r5.u32);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822C5900;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_822C5908:
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a3cf8
	ctx.lr = 0x822C591C;
	sub_822A3CF8(ctx, base);
	// ld r30,128(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// ld r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
loc_822C5924:
	// cmpldi cr6,r30,0
	ctx.cr6.compare<uint64_t>(ctx.r30.u64, 0, ctx.xer);
	// bne cr6,0x822c5934
	if (!ctx.cr6.eq) goto loc_822C5934;
	// cmpldi cr6,r5,0
	ctx.cr6.compare<uint64_t>(ctx.r5.u64, 0, ctx.xer);
	// beq cr6,0x822c5958
	if (ctx.cr6.eq) goto loc_822C5958;
loc_822C5934:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f2,2868(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r11,r11,1940
	ctx.r11.s64 = ctx.r11.s64 + 1940;
	// lfs f1,84(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822b1078
	ctx.lr = 0x822C5958;
	sub_822B1078(ctx, base);
loc_822C5958:
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_822C5960) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lis r10,34
	ctx.r10.s64 = 2228224;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// ori r9,r10,36952
	ctx.r9.u64 = ctx.r10.u64 | 36952;
	// ldx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r9.u32);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x822c5980
	if (ctx.cr6.eq) goto loc_822C5980;
	// b 0x822c3ab0
	sub_822C3AB0(ctx, base);
	return;
loc_822C5980:
	// b 0x822c4ba0
	sub_822C4BA0(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_822C5988) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259badc
	ctx.lr = 0x822C5990;
	__savegprlr_21(ctx, base);
	// stfd f29,-120(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.f29.u64);
	// stfd f30,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f30.u64);
	// stfd f31,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f31.u64);
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r10,3
	ctx.r10.s64 = 196608;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// ori r9,r10,51969
	ctx.r9.u64 = ctx.r10.u64 | 51969;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// lis r26,-32256
	ctx.r26.s64 = -2113929216;
	// lbzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// lwz r22,1916(r29)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1916);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822c59d8
	if (ctx.cr6.eq) goto loc_822C59D8;
	// lfs f30,25556(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 25556);
	ctx.f30.f64 = double(temp.f32);
	// b 0x822c59e0
	goto loc_822C59E0;
loc_822C59D8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f30,17976(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17976);
	ctx.f30.f64 = double(temp.f32);
loc_822C59E0:
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// lis r7,8
	ctx.r7.s64 = 524288;
	// addi r31,r11,-18560
	ctx.r31.s64 = ctx.r11.s64 + -18560;
	// ori r6,r7,49304
	ctx.r6.u64 = ctx.r7.u64 | 49304;
	// li r25,1
	ctx.r25.s64 = 1;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwzx r11,r31,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// rlwinm r5,r11,0,20,20
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x822c5a10
	if (!ctx.cr6.eq) goto loc_822C5A10;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_822C5A10:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822c7110
	if (!ctx.cr6.eq) goto loc_822C7110;
	// cmpwi cr6,r21,1
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 1, ctx.xer);
	// beq cr6,0x822c5aec
	if (ctx.cr6.eq) goto loc_822C5AEC;
	// cmpwi cr6,r21,2
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 2, ctx.xer);
	// beq cr6,0x822c5aec
	if (ctx.cr6.eq) goto loc_822C5AEC;
	// cmpwi cr6,r21,3
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 3, ctx.xer);
	// beq cr6,0x822c5aec
	if (ctx.cr6.eq) goto loc_822C5AEC;
	// cmpwi cr6,r21,4
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 4, ctx.xer);
	// beq cr6,0x822c5aec
	if (ctx.cr6.eq) goto loc_822C5AEC;
	// cmpwi cr6,r21,5
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 5, ctx.xer);
	// beq cr6,0x822c5aec
	if (ctx.cr6.eq) goto loc_822C5AEC;
	// cmpwi cr6,r21,6
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 6, ctx.xer);
	// beq cr6,0x822c5aec
	if (ctx.cr6.eq) goto loc_822C5AEC;
	// lis r11,9
	ctx.r11.s64 = 589824;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// ori r10,r11,9404
	ctx.r10.u64 = ctx.r11.u64 | 9404;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// lwzx r30,r31,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// mr r22,r30
	ctx.r22.u64 = ctx.r30.u64;
	// ble cr6,0x822c5af8
	if (!ctx.cr6.gt) goto loc_822C5AF8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822a3c20
	ctx.lr = 0x822C5A74;
	sub_822A3C20(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// lis r30,-32253
	ctx.r30.s64 = -2113732608;
	// li r24,18
	ctx.r24.s64 = 18;
loc_822C5A80:
	// extsw r8,r27
	ctx.r8.s64 = ctx.r27.s32;
	// lfs f0,-15120(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// lis r7,-18138
	ctx.r7.s64 = -1188691968;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r5,26112
	ctx.r5.s64 = 1711276032;
	// stw r24,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r24.u32);
	// ori r4,r7,32655
	ctx.r4.u64 = ctx.r7.u64 | 32655;
	// stb r28,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r28.u8);
	// li r9,1
	ctx.r9.s64 = 1;
	// std r8,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r8.u64);
	// lfd f13,112(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// rldimi r5,r4,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// frsp f13,f12
	ctx.f13.f64 = double(float(ctx.f12.f64));
	// fmuls f3,f13,f0
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmadds f1,f13,f0,f30
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f30.f64));
	// bl 0x822b1238
	ctx.lr = 0x822C5AD0;
	sub_822B1238(ctx, base);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmpw cr6,r27,r23
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r23.s32, ctx.xer);
	// blt cr6,0x822c5a80
	if (ctx.cr6.lt) goto loc_822C5A80;
	// lis r3,9
	ctx.r3.s64 = 589824;
	// ori r11,r3,9404
	ctx.r11.u64 = ctx.r3.u64 | 9404;
	// lwzx r30,r31,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// b 0x822c5af8
	goto loc_822C5AF8;
loc_822C5AEC:
	// lis r10,9
	ctx.r10.s64 = 589824;
	// ori r9,r10,9404
	ctx.r9.u64 = ctx.r10.u64 | 9404;
	// lwzx r30,r31,r9
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
loc_822C5AF8:
	// addi r11,r21,-1
	ctx.r11.s64 = ctx.r21.s64 + -1;
	// cmplwi cr6,r11,295
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 295, ctx.xer);
	// bgt cr6,0x822c7110
	if (ctx.cr6.gt) goto loc_822C7110;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f29,2864(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2864);
	ctx.f29.f64 = double(temp.f32);
	// lfs f31,2868(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2868);
	ctx.f31.f64 = double(temp.f32);
	// lis r12,-32212
	ctx.r12.s64 = -2111045632;
	// addi r12,r12,23340
	ctx.r12.s64 = ctx.r12.s64 + 23340;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_822C637C;
	case 1:
		goto loc_822C637C;
	case 2:
		goto loc_822C637C;
	case 3:
		goto loc_822C6394;
	case 4:
		goto loc_822C6394;
	case 5:
		goto loc_822C6394;
	case 6:
		goto loc_822C7110;
	case 7:
		goto loc_822C7110;
	case 8:
		goto loc_822C7110;
	case 9:
		goto loc_822C7110;
	case 10:
		goto loc_822C7110;
	case 11:
		goto loc_822C7110;
	case 12:
		goto loc_822C7110;
	case 13:
		goto loc_822C7110;
	case 14:
		goto loc_822C7110;
	case 15:
		goto loc_822C7110;
	case 16:
		goto loc_822C7110;
	case 17:
		goto loc_822C7110;
	case 18:
		goto loc_822C7110;
	case 19:
		goto loc_822C7110;
	case 20:
		goto loc_822C7110;
	case 21:
		goto loc_822C7110;
	case 22:
		goto loc_822C7110;
	case 23:
		goto loc_822C7110;
	case 24:
		goto loc_822C7110;
	case 25:
		goto loc_822C7110;
	case 26:
		goto loc_822C7110;
	case 27:
		goto loc_822C7110;
	case 28:
		goto loc_822C7110;
	case 29:
		goto loc_822C7110;
	case 30:
		goto loc_822C7110;
	case 31:
		goto loc_822C7110;
	case 32:
		goto loc_822C7110;
	case 33:
		goto loc_822C7110;
	case 34:
		goto loc_822C7110;
	case 35:
		goto loc_822C7110;
	case 36:
		goto loc_822C7110;
	case 37:
		goto loc_822C7110;
	case 38:
		goto loc_822C7110;
	case 39:
		goto loc_822C7110;
	case 40:
		goto loc_822C7110;
	case 41:
		goto loc_822C7110;
	case 42:
		goto loc_822C7110;
	case 43:
		goto loc_822C7110;
	case 44:
		goto loc_822C7110;
	case 45:
		goto loc_822C7110;
	case 46:
		goto loc_822C7110;
	case 47:
		goto loc_822C7110;
	case 48:
		goto loc_822C7110;
	case 49:
		goto loc_822C7110;
	case 50:
		goto loc_822C7110;
	case 51:
		goto loc_822C7110;
	case 52:
		goto loc_822C7110;
	case 53:
		goto loc_822C7110;
	case 54:
		goto loc_822C7110;
	case 55:
		goto loc_822C7110;
	case 56:
		goto loc_822C7110;
	case 57:
		goto loc_822C7110;
	case 58:
		goto loc_822C7110;
	case 59:
		goto loc_822C7110;
	case 60:
		goto loc_822C7110;
	case 61:
		goto loc_822C7110;
	case 62:
		goto loc_822C7110;
	case 63:
		goto loc_822C7110;
	case 64:
		goto loc_822C7110;
	case 65:
		goto loc_822C7110;
	case 66:
		goto loc_822C7110;
	case 67:
		goto loc_822C7110;
	case 68:
		goto loc_822C7110;
	case 69:
		goto loc_822C7110;
	case 70:
		goto loc_822C7110;
	case 71:
		goto loc_822C7110;
	case 72:
		goto loc_822C7110;
	case 73:
		goto loc_822C7110;
	case 74:
		goto loc_822C7110;
	case 75:
		goto loc_822C7110;
	case 76:
		goto loc_822C7110;
	case 77:
		goto loc_822C7110;
	case 78:
		goto loc_822C7110;
	case 79:
		goto loc_822C7110;
	case 80:
		goto loc_822C7110;
	case 81:
		goto loc_822C7110;
	case 82:
		goto loc_822C7110;
	case 83:
		goto loc_822C7110;
	case 84:
		goto loc_822C7110;
	case 85:
		goto loc_822C7110;
	case 86:
		goto loc_822C7110;
	case 87:
		goto loc_822C7110;
	case 88:
		goto loc_822C7110;
	case 89:
		goto loc_822C7110;
	case 90:
		goto loc_822C7110;
	case 91:
		goto loc_822C7110;
	case 92:
		goto loc_822C7110;
	case 93:
		goto loc_822C7110;
	case 94:
		goto loc_822C7110;
	case 95:
		goto loc_822C7110;
	case 96:
		goto loc_822C7110;
	case 97:
		goto loc_822C7110;
	case 98:
		goto loc_822C7110;
	case 99:
		goto loc_822C7110;
	case 100:
		goto loc_822C7110;
	case 101:
		goto loc_822C7110;
	case 102:
		goto loc_822C7110;
	case 103:
		goto loc_822C7110;
	case 104:
		goto loc_822C7110;
	case 105:
		goto loc_822C7110;
	case 106:
		goto loc_822C7110;
	case 107:
		goto loc_822C7110;
	case 108:
		goto loc_822C7110;
	case 109:
		goto loc_822C7110;
	case 110:
		goto loc_822C7110;
	case 111:
		goto loc_822C7110;
	case 112:
		goto loc_822C7110;
	case 113:
		goto loc_822C7110;
	case 114:
		goto loc_822C7110;
	case 115:
		goto loc_822C7110;
	case 116:
		goto loc_822C7110;
	case 117:
		goto loc_822C7110;
	case 118:
		goto loc_822C7110;
	case 119:
		goto loc_822C7110;
	case 120:
		goto loc_822C7110;
	case 121:
		goto loc_822C7110;
	case 122:
		goto loc_822C7110;
	case 123:
		goto loc_822C64A4;
	case 124:
		goto loc_822C64A4;
	case 125:
		goto loc_822C64A4;
	case 126:
		goto loc_822C64A4;
	case 127:
		goto loc_822C64A4;
	case 128:
		goto loc_822C6084;
	case 129:
		goto loc_822C6084;
	case 130:
		goto loc_822C7110;
	case 131:
		goto loc_822C7110;
	case 132:
		goto loc_822C7110;
	case 133:
		goto loc_822C7110;
	case 134:
		goto loc_822C7110;
	case 135:
		goto loc_822C7110;
	case 136:
		goto loc_822C7110;
	case 137:
		goto loc_822C7110;
	case 138:
		goto loc_822C7110;
	case 139:
		goto loc_822C7110;
	case 140:
		goto loc_822C7110;
	case 141:
		goto loc_822C7110;
	case 142:
		goto loc_822C7110;
	case 143:
		goto loc_822C7110;
	case 144:
		goto loc_822C7110;
	case 145:
		goto loc_822C7110;
	case 146:
		goto loc_822C7110;
	case 147:
		goto loc_822C7110;
	case 148:
		goto loc_822C7110;
	case 149:
		goto loc_822C7110;
	case 150:
		goto loc_822C7110;
	case 151:
		goto loc_822C7110;
	case 152:
		goto loc_822C7110;
	case 153:
		goto loc_822C7110;
	case 154:
		goto loc_822C7110;
	case 155:
		goto loc_822C7110;
	case 156:
		goto loc_822C7110;
	case 157:
		goto loc_822C7110;
	case 158:
		goto loc_822C7110;
	case 159:
		goto loc_822C7110;
	case 160:
		goto loc_822C7110;
	case 161:
		goto loc_822C7110;
	case 162:
		goto loc_822C7110;
	case 163:
		goto loc_822C7110;
	case 164:
		goto loc_822C7110;
	case 165:
		goto loc_822C7110;
	case 166:
		goto loc_822C7110;
	case 167:
		goto loc_822C7110;
	case 168:
		goto loc_822C7110;
	case 169:
		goto loc_822C7110;
	case 170:
		goto loc_822C7110;
	case 171:
		goto loc_822C7110;
	case 172:
		goto loc_822C7110;
	case 173:
		goto loc_822C7110;
	case 174:
		goto loc_822C7110;
	case 175:
		goto loc_822C7110;
	case 176:
		goto loc_822C7110;
	case 177:
		goto loc_822C7110;
	case 178:
		goto loc_822C7110;
	case 179:
		goto loc_822C7110;
	case 180:
		goto loc_822C7110;
	case 181:
		goto loc_822C62F4;
	case 182:
		goto loc_822C7110;
	case 183:
		goto loc_822C7110;
	case 184:
		goto loc_822C7110;
	case 185:
		goto loc_822C7110;
	case 186:
		goto loc_822C7110;
	case 187:
		goto loc_822C7110;
	case 188:
		goto loc_822C7110;
	case 189:
		goto loc_822C7110;
	case 190:
		goto loc_822C7110;
	case 191:
		goto loc_822C7110;
	case 192:
		goto loc_822C7110;
	case 193:
		goto loc_822C7110;
	case 194:
		goto loc_822C7110;
	case 195:
		goto loc_822C7110;
	case 196:
		goto loc_822C7110;
	case 197:
		goto loc_822C7110;
	case 198:
		goto loc_822C7110;
	case 199:
		goto loc_822C7110;
	case 200:
		goto loc_822C7110;
	case 201:
		goto loc_822C7110;
	case 202:
		goto loc_822C7110;
	case 203:
		goto loc_822C7110;
	case 204:
		goto loc_822C7110;
	case 205:
		goto loc_822C7110;
	case 206:
		goto loc_822C7110;
	case 207:
		goto loc_822C613C;
	case 208:
		goto loc_822C7110;
	case 209:
		goto loc_822C60E0;
	case 210:
		goto loc_822C7110;
	case 211:
		goto loc_822C7110;
	case 212:
		goto loc_822C7110;
	case 213:
		goto loc_822C63C8;
	case 214:
		goto loc_822C7110;
	case 215:
		goto loc_822C7110;
	case 216:
		goto loc_822C7110;
	case 217:
		goto loc_822C7110;
	case 218:
		goto loc_822C63B0;
	case 219:
		goto loc_822C63B0;
	case 220:
		goto loc_822C63B0;
	case 221:
		goto loc_822C63B0;
	case 222:
		goto loc_822C5FCC;
	case 223:
		goto loc_822C6028;
	case 224:
		goto loc_822C6084;
	case 225:
		goto loc_822C7110;
	case 226:
		goto loc_822C7110;
	case 227:
		goto loc_822C7110;
	case 228:
		goto loc_822C7110;
	case 229:
		goto loc_822C7110;
	case 230:
		goto loc_822C7110;
	case 231:
		goto loc_822C7110;
	case 232:
		goto loc_822C7110;
	case 233:
		goto loc_822C7110;
	case 234:
		goto loc_822C7110;
	case 235:
		goto loc_822C7110;
	case 236:
		goto loc_822C7110;
	case 237:
		goto loc_822C7110;
	case 238:
		goto loc_822C7110;
	case 239:
		goto loc_822C7110;
	case 240:
		goto loc_822C7110;
	case 241:
		goto loc_822C7110;
	case 242:
		goto loc_822C7110;
	case 243:
		goto loc_822C7110;
	case 244:
		goto loc_822C7110;
	case 245:
		goto loc_822C7110;
	case 246:
		goto loc_822C7110;
	case 247:
		goto loc_822C7110;
	case 248:
		goto loc_822C7110;
	case 249:
		goto loc_822C7110;
	case 250:
		goto loc_822C7110;
	case 251:
		goto loc_822C7110;
	case 252:
		goto loc_822C7110;
	case 253:
		goto loc_822C7110;
	case 254:
		goto loc_822C7110;
	case 255:
		goto loc_822C62F4;
	case 256:
		goto loc_822C62F4;
	case 257:
		goto loc_822C6338;
	case 258:
		goto loc_822C7110;
	case 259:
		goto loc_822C7110;
	case 260:
		goto loc_822C62F4;
	case 261:
		goto loc_822C7110;
	case 262:
		goto loc_822C62F4;
	case 263:
		goto loc_822C62F4;
	case 264:
		goto loc_822C62F4;
	case 265:
		goto loc_822C7110;
	case 266:
		goto loc_822C6988;
	case 267:
		goto loc_822C6B40;
	case 268:
		goto loc_822C6C1C;
	case 269:
		goto loc_822C6CF8;
	case 270:
		goto loc_822C7110;
	case 271:
		goto loc_822C6A64;
	case 272:
		goto loc_822C6DD4;
	case 273:
		goto loc_822C6EB0;
	case 274:
		goto loc_822C6F8C;
	case 275:
		goto loc_822C67D0;
	case 276:
		goto loc_822C67D0;
	case 277:
		goto loc_822C68AC;
	case 278:
		goto loc_822C68AC;
	case 279:
		goto loc_822C653C;
	case 280:
		goto loc_822C653C;
	case 281:
		goto loc_822C653C;
	case 282:
		goto loc_822C653C;
	case 283:
		goto loc_822C653C;
	case 284:
		goto loc_822C66F4;
	case 285:
		goto loc_822C66F4;
	case 286:
		goto loc_822C6618;
	case 287:
		goto loc_822C66F4;
	case 288:
		goto loc_822C6618;
	case 289:
		goto loc_822C66F4;
	case 290:
		goto loc_822C6618;
	case 291:
		goto loc_822C6618;
	case 292:
		goto loc_822C7068;
	case 293:
		goto loc_822C7080;
	case 294:
		goto loc_822C7098;
	case 295:
		goto loc_822C7110;
	default:
		__builtin_unreachable();
	}
	// lwz r17,25468(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 25468);
	// lwz r17,25468(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 25468);
	// lwz r17,25468(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 25468);
	// lwz r17,25492(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 25492);
	// lwz r17,25492(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 25492);
	// lwz r17,25492(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 25492);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,25764(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 25764);
	// lwz r17,25764(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 25764);
	// lwz r17,25764(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 25764);
	// lwz r17,25764(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 25764);
	// lwz r17,25764(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 25764);
	// lwz r17,24708(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 24708);
	// lwz r17,24708(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 24708);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,25332(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 25332);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,24892(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 24892);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,24800(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 24800);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,25544(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 25544);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,25520(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 25520);
	// lwz r17,25520(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 25520);
	// lwz r17,25520(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 25520);
	// lwz r17,25520(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 25520);
	// lwz r17,24524(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 24524);
	// lwz r17,24616(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 24616);
	// lwz r17,24708(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 24708);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,25332(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 25332);
	// lwz r17,25332(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 25332);
	// lwz r17,25400(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 25400);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,25332(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 25332);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,25332(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 25332);
	// lwz r17,25332(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 25332);
	// lwz r17,25332(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 25332);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,27016(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 27016);
	// lwz r17,27456(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 27456);
	// lwz r17,27676(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 27676);
	// lwz r17,27896(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 27896);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
	// lwz r17,27236(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 27236);
	// lwz r17,28116(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28116);
	// lwz r17,28336(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28336);
	// lwz r17,28556(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28556);
	// lwz r17,26576(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 26576);
	// lwz r17,26576(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 26576);
	// lwz r17,26796(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 26796);
	// lwz r17,26796(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 26796);
	// lwz r17,25916(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 25916);
	// lwz r17,25916(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 25916);
	// lwz r17,25916(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 25916);
	// lwz r17,25916(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 25916);
	// lwz r17,25916(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 25916);
	// lwz r17,26356(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 26356);
	// lwz r17,26356(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 26356);
	// lwz r17,26136(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 26136);
	// lwz r17,26356(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 26356);
	// lwz r17,26136(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 26136);
	// lwz r17,26356(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 26356);
	// lwz r17,26136(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 26136);
	// lwz r17,26136(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 26136);
	// lwz r17,28776(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28776);
	// lwz r17,28800(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28800);
	// lwz r17,28824(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28824);
	// lwz r17,28944(r12)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28944);
loc_822C5FCC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stb r28,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r28.u8);
	// lis r7,7967
	ctx.r7.s64 = 522125312;
	// lis r4,-27665
	ctx.r4.s64 = -1813053440;
	// li r8,19
	ctx.r8.s64 = 19;
	// ori r3,r4,24506
	ctx.r3.u64 = ctx.r4.u64 | 24506;
	// lfs f3,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f3.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// ori r5,r7,40100
	ctx.r5.u64 = ctx.r7.u64 | 40100;
	// li r9,0
	ctx.r9.s64 = 0;
	// rldimi r5,r3,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f2,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f2.f64 = double(temp.f32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x822b1238
	ctx.lr = 0x822C6014;
	sub_822B1238(ctx, base);
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// lfd f29,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f30,-112(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f31,-104(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x8259bb2c
	__restgprlr_21(ctx, base);
	return;
loc_822C6028:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stb r28,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r28.u8);
	// lis r8,17599
	ctx.r8.s64 = 1153368064;
	// lis r7,-27665
	ctx.r7.s64 = -1813053440;
	// li r10,19
	ctx.r10.s64 = 19;
	// ori r4,r7,24544
	ctx.r4.u64 = ctx.r7.u64 | 24544;
	// lfs f3,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f3.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// ori r5,r8,40100
	ctx.r5.u64 = ctx.r8.u64 | 40100;
	// li r9,0
	ctx.r9.s64 = 0;
	// rldimi r5,r4,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f2,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f2.f64 = double(temp.f32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x822b1238
	ctx.lr = 0x822C6070;
	sub_822B1238(ctx, base);
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// lfd f29,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f30,-112(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f31,-104(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x8259bb2c
	__restgprlr_21(ctx, base);
	return;
loc_822C6084:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stb r28,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r28.u8);
	// li r3,19
	ctx.r3.s64 = 19;
	// lis r10,-27665
	ctx.r10.s64 = -1813053440;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r8,r10,24582
	ctx.r8.u64 = ctx.r10.u64 | 24582;
	// lfs f3,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f3.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f2,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,27231
	ctx.r11.s64 = 1784610816;
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// ori r5,r11,40100
	ctx.r5.u64 = ctx.r11.u64 | 40100;
	// rldimi r5,r8,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// bl 0x822b1238
	ctx.lr = 0x822C60CC;
	sub_822B1238(ctx, base);
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// lfd f29,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f30,-112(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f31,-104(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x8259bb2c
	__restgprlr_21(ctx, base);
	return;
loc_822C60E0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stb r28,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r28.u8);
	// lis r4,-27665
	ctx.r4.s64 = -1813053440;
	// lis r5,27231
	ctx.r5.s64 = 1784610816;
	// ori r3,r4,24582
	ctx.r3.u64 = ctx.r4.u64 | 24582;
	// li r7,19
	ctx.r7.s64 = 19;
	// lfs f3,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f3.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// ori r5,r5,40100
	ctx.r5.u64 = ctx.r5.u64 | 40100;
	// li r9,0
	ctx.r9.s64 = 0;
	// rldimi r5,r3,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// lfs f2,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f2.f64 = double(temp.f32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x822b1238
	ctx.lr = 0x822C6128;
	sub_822B1238(ctx, base);
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// lfd f29,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f30,-112(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f31,-104(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x8259bb2c
	__restgprlr_21(ctx, base);
	return;
loc_822C613C:
	// lbz r11,1325(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 1325);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822c7110
	if (!ctx.cr6.eq) goto loc_822C7110;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r28,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r28.u32);
	// lis r9,8
	ctx.r9.s64 = 524288;
	// lis r7,7
	ctx.r7.s64 = 458752;
	// ori r8,r9,27700
	ctx.r8.u64 = ctx.r9.u64 | 27700;
	// ori r6,r7,57744
	ctx.r6.u64 = ctx.r7.u64 | 57744;
	// lfs f30,-1608(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1608);
	ctx.f30.f64 = double(temp.f32);
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// li r10,10
	ctx.r10.s64 = 10;
	// lis r5,20187
	ctx.r5.s64 = 1322975232;
	// lis r3,26318
	ctx.r3.s64 = 1724776448;
	// stfsx f30,r31,r8
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, temp.u32);
	// ori r30,r5,47296
	ctx.r30.u64 = ctx.r5.u64 | 47296;
	// lfs f0,-26960(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26960);
	ctx.f0.f64 = double(temp.f32);
	// addis r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 524288;
	// ori r9,r3,49084
	ctx.r9.u64 = ctx.r3.u64 | 49084;
	// fmuls f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// li r4,0
	ctx.r4.s64 = 0;
	// stfsx f0,r31,r6
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, temp.u32);
	// addi r3,r11,-7996
	ctx.r3.s64 = ctx.r11.s64 + -7996;
	// stb r10,1325(r29)
	PPC_STORE_U8(ctx.r29.u32 + 1325, ctx.r10.u8);
	// rldimi r30,r9,32,0
	ctx.r30.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r30.u64 & 0xFFFFFFFF);
	// bl 0x823484f8
	ctx.lr = 0x822C61A4;
	sub_823484F8(ctx, base);
	// addi r8,r3,64
	ctx.r8.s64 = ctx.r3.s64 + 64;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// li r5,0
	ctx.r5.s64 = 0;
	// ld r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// ld r6,8(r8)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// std r7,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r7.u64);
	// li r7,3
	ctx.r7.s64 = 3;
	// std r6,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r6.u64);
	// lfs f11,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// lis r6,-8336
	ctx.r6.s64 = -546308096;
	// fadds f10,f11,f30
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f30.f64));
	// stfs f10,100(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// ld r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// lwz r10,268(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// stb r7,272(r1)
	PPC_STORE_U8(ctx.r1.u32 + 272, ctx.r7.u8);
	// ori r8,r10,2048
	ctx.r8.u64 = ctx.r10.u64 | 2048;
	// lis r10,22864
	ctx.r10.s64 = 1498415104;
	// stw r8,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r8.u32);
	// ori r8,r10,25321
	ctx.r8.u64 = ctx.r10.u64 | 25321;
	// std r3,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r3.u64);
	// lis r3,7
	ctx.r3.s64 = 458752;
	// rldimi r6,r8,32,0
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r6.u64 & 0xFFFFFFFF);
	// std r11,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r11.u64);
	// ori r11,r3,57728
	ctx.r11.u64 = ctx.r3.u64 | 57728;
	// lwz r7,268(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// std r6,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r6.u64);
	// ori r6,r7,1
	ctx.r6.u64 = ctx.r7.u64 | 1;
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// stw r6,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r6.u32);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x8234beb0
	ctx.lr = 0x822C6230;
	sub_8234BEB0(ctx, base);
	// lwz r10,268(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stfs f31,212(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// ori r10,r10,4
	ctx.r10.u64 = ctx.r10.u64 | 4;
	// stfs f31,216(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// stb r25,280(r1)
	PPC_STORE_U8(ctx.r1.u32 + 280, ctx.r25.u8);
	// ori r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 8;
	// lfs f0,-6872(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -6872);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// oris r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 | 4194304;
	// stfs f0,240(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// oris r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 | 2097152;
	// lfs f0,9924(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9924);
	ctx.f0.f64 = double(temp.f32);
	// ori r10,r10,512
	ctx.r10.u64 = ctx.r10.u64 | 512;
	// addis r9,r31,5
	ctx.r9.s64 = ctx.r31.s64 + 327680;
	// stfs f0,244(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// ori r10,r10,256
	ctx.r10.u64 = ctx.r10.u64 | 256;
	// addi r4,r9,7240
	ctx.r4.s64 = ctx.r9.s64 + 7240;
	// ori r9,r10,16
	ctx.r9.u64 = ctx.r10.u64 | 16;
	// stb r25,281(r1)
	PPC_STORE_U8(ctx.r1.u32 + 281, ctx.r25.u8);
	// stw r11,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r11.u32);
	// stw r9,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r9.u32);
	// bl 0x82350920
	ctx.lr = 0x822C6298;
	sub_82350920(ctx, base);
	// lis r3,7
	ctx.r3.s64 = 458752;
	// lis r7,-28740
	ctx.r7.s64 = -1883504640;
	// ori r11,r3,57728
	ctx.r11.u64 = ctx.r3.u64 | 57728;
	// ori r6,r7,63707
	ctx.r6.u64 = ctx.r7.u64 | 63707;
	// lis r8,24432
	ctx.r8.s64 = 1601175552;
	// li r5,0
	ctx.r5.s64 = 0;
	// rldimi r8,r6,32,0
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r8.u64 & 0xFFFFFFFF);
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// std r8,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r8.u64);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x8234beb0
	ctx.lr = 0x822C62C8;
	sub_8234BEB0(ctx, base);
	// lwz r9,268(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addis r10,r31,5
	ctx.r10.s64 = ctx.r31.s64 + 327680;
	// ori r8,r9,4
	ctx.r8.u64 = ctx.r9.u64 | 4;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// addi r4,r10,7240
	ctx.r4.s64 = ctx.r10.s64 + 7240;
	// stw r11,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r11.u32);
	// stw r8,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r8.u32);
	// bl 0x82350920
	ctx.lr = 0x822C62F0;
	sub_82350920(ctx, base);
	// b 0x822c70b0
	goto loc_822C70B0;
loc_822C62F4:
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r7,7
	ctx.r7.s64 = 458752;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// ori r6,r7,16271
	ctx.r6.u64 = ctx.r7.u64 | 16271;
	// lbzx r5,r11,r6
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x822c7110
	if (!ctx.cr6.eq) goto loc_822C7110;
	// lis r4,7
	ctx.r4.s64 = 458752;
	// ori r3,r4,16273
	ctx.r3.u64 = ctx.r4.u64 | 16273;
	// lbzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822c7110
	if (!ctx.cr6.eq) goto loc_822C7110;
	// lis r10,27629
	ctx.r10.s64 = 1810694144;
	// lis r30,26160
	ctx.r30.s64 = 1714421760;
	// ori r9,r10,8046
	ctx.r9.u64 = ctx.r10.u64 | 8046;
	// rldimi r30,r9,32,0
	ctx.r30.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r30.u64 & 0xFFFFFFFF);
	// b 0x822c70b0
	goto loc_822C70B0;
loc_822C6338:
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r8,7
	ctx.r8.s64 = 458752;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// ori r7,r8,16271
	ctx.r7.u64 = ctx.r8.u64 | 16271;
	// lbzx r6,r11,r7
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x822c7110
	if (!ctx.cr6.eq) goto loc_822C7110;
	// lis r5,7
	ctx.r5.s64 = 458752;
	// ori r4,r5,16273
	ctx.r4.u64 = ctx.r5.u64 | 16273;
	// lbzx r3,r11,r4
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822c7110
	if (!ctx.cr6.eq) goto loc_822C7110;
	// lis r11,-27665
	ctx.r11.s64 = -1813053440;
	// lis r30,-16384
	ctx.r30.s64 = -1073741824;
	// ori r10,r11,19737
	ctx.r10.u64 = ctx.r11.u64 | 19737;
	// rldimi r30,r10,32,0
	ctx.r30.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r30.u64 & 0xFFFFFFFF);
	// b 0x822c70b0
	goto loc_822C70B0;
loc_822C637C:
	// lis r9,-20319
	ctx.r9.s64 = -1331625984;
	// mr r22,r30
	ctx.r22.u64 = ctx.r30.u64;
	// lis r30,-16752
	ctx.r30.s64 = -1097859072;
	// ori r8,r9,64819
	ctx.r8.u64 = ctx.r9.u64 | 64819;
	// rldimi r30,r8,32,0
	ctx.r30.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r30.u64 & 0xFFFFFFFF);
	// b 0x822c70b0
	goto loc_822C70B0;
loc_822C6394:
	// lis r7,-20737
	ctx.r7.s64 = -1359020032;
	// lis r6,32499
	ctx.r6.s64 = 2129854464;
	// mr r22,r30
	ctx.r22.u64 = ctx.r30.u64;
	// ori r30,r7,40100
	ctx.r30.u64 = ctx.r7.u64 | 40100;
	// ori r5,r6,51236
	ctx.r5.u64 = ctx.r6.u64 | 51236;
	// rldimi r30,r5,32,0
	ctx.r30.u64 = (__builtin_rotateleft64(ctx.r5.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r30.u64 & 0xFFFFFFFF);
	// b 0x822c70b0
	goto loc_822C70B0;
loc_822C63B0:
	// lis r4,22865
	ctx.r4.s64 = 1498480640;
	// mr r22,r30
	ctx.r22.u64 = ctx.r30.u64;
	// lis r30,26786
	ctx.r30.s64 = 1755447296;
	// ori r3,r4,24984
	ctx.r3.u64 = ctx.r4.u64 | 24984;
	// rldimi r30,r3,32,0
	ctx.r30.u64 = (__builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r30.u64 & 0xFFFFFFFF);
	// b 0x822c70b0
	goto loc_822C70B0;
loc_822C63C8:
	// lis r11,8
	ctx.r11.s64 = 524288;
	// stb r28,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r28.u8);
	// lis r8,28927
	ctx.r8.s64 = 1895759872;
	// ori r10,r11,49800
	ctx.r10.u64 = ctx.r11.u64 | 49800;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r7,-16818
	ctx.r7.s64 = -1102184448;
	// ori r5,r8,40100
	ctx.r5.u64 = ctx.r8.u64 | 40100;
	// ori r6,r7,16529
	ctx.r6.u64 = ctx.r7.u64 | 16529;
	// lfsx f0,r31,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// li r27,19
	ctx.r27.s64 = 19;
	// lfs f13,1940(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1940);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fsubs f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// rldimi r5,r6,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// lfd f13,-5592(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + -5592);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lfs f12,-15724(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15724);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fsel f0,f9,f13,f0
	ctx.f0.f64 = ctx.f9.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// lfs f11,1628(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1628);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fadds f3,f12,f11
	ctx.f3.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// lfs f31,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f31.f64 = double(temp.f32);
	// lis r11,8
	ctx.r11.s64 = 524288;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// ori r10,r11,49800
	ctx.r10.u64 = ctx.r11.u64 | 49800;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stfsx f0,r31,r10
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, temp.u32);
	// bl 0x822b1238
	ctx.lr = 0x822C6450;
	sub_822B1238(ctx, base);
	// lis r8,-14611
	ctx.r8.s64 = -957546496;
	// lfs f1,25556(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 25556);
	ctx.f1.f64 = double(temp.f32);
	// lis r7,31047
	ctx.r7.s64 = 2034696192;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// ori r4,r7,20430
	ctx.r4.u64 = ctx.r7.u64 | 20430;
	// stb r28,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r28.u8);
	// ori r5,r8,25088
	ctx.r5.u64 = ctx.r8.u64 | 25088;
	// li r9,0
	ctx.r9.s64 = 0;
	// rldimi r5,r4,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lfs f3,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f3.f64 = double(temp.f32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822b1238
	ctx.lr = 0x822C6490;
	sub_822B1238(ctx, base);
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// lfd f29,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f30,-112(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f31,-104(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x8259bb2c
	__restgprlr_21(ctx, base);
	return;
loc_822C64A4:
	// lis r3,8
	ctx.r3.s64 = 524288;
	// stb r28,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r28.u8);
	// li r10,19
	ctx.r10.s64 = 19;
	// ori r11,r3,49800
	ctx.r11.u64 = ctx.r3.u64 | 49800;
	// lis r8,-12801
	ctx.r8.s64 = -838926336;
	// lis r7,-9254
	ctx.r7.s64 = -606470144;
	// ori r5,r8,40100
	ctx.r5.u64 = ctx.r8.u64 | 40100;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// ori r6,r7,772
	ctx.r6.u64 = ctx.r7.u64 | 772;
	// lfsx f0,r31,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// rldimi r5,r6,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f13,1940(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1940);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fsubs f8,f13,f0
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lfd f13,-5592(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + -5592);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f12,-15724(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15724);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fsel f0,f8,f13,f0
	ctx.f0.f64 = ctx.f8.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// lfs f11,1628(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1628);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fadds f3,f12,f11
	ctx.f3.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// lfs f2,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,8
	ctx.r11.s64 = 524288;
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// ori r10,r11,49800
	ctx.r10.u64 = ctx.r11.u64 | 49800;
	// stfsx f0,r31,r10
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, temp.u32);
	// bl 0x822b1238
	ctx.lr = 0x822C6528;
	sub_822B1238(ctx, base);
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// lfd f29,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f30,-112(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f31,-104(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x8259bb2c
	__restgprlr_21(ctx, base);
	return;
loc_822C653C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stb r28,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r28.u8);
	// lis r9,8
	ctx.r9.s64 = 524288;
	// lis r7,7935
	ctx.r7.s64 = 520028160;
	// ori r8,r9,49800
	ctx.r8.u64 = ctx.r9.u64 | 49800;
	// lis r6,20515
	ctx.r6.s64 = 1344471040;
	// lfs f13,1940(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1940);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// ori r4,r6,58684
	ctx.r4.u64 = ctx.r6.u64 | 58684;
	// ori r5,r7,40100
	ctx.r5.u64 = ctx.r7.u64 | 40100;
	// lfsx f0,r31,r8
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// li r27,19
	ctx.r27.s64 = 19;
	// fsubs f7,f13,f0
	ctx.f7.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// rldimi r5,r4,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// lfd f13,-5592(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + -5592);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lfs f12,-15724(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15724);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fsel f0,f7,f13,f0
	ctx.f0.f64 = ctx.f7.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// lfs f11,1628(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1628);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fadds f3,f12,f11
	ctx.f3.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// lfs f31,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f31.f64 = double(temp.f32);
	// lis r11,8
	ctx.r11.s64 = 524288;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// ori r10,r11,49800
	ctx.r10.u64 = ctx.r11.u64 | 49800;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stfsx f0,r31,r10
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, temp.u32);
	// bl 0x822b1238
	ctx.lr = 0x822C65C4;
	sub_822B1238(ctx, base);
	// lis r8,-14611
	ctx.r8.s64 = -957546496;
	// lfs f1,25556(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 25556);
	ctx.f1.f64 = double(temp.f32);
	// lis r7,31047
	ctx.r7.s64 = 2034696192;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// ori r4,r7,20430
	ctx.r4.u64 = ctx.r7.u64 | 20430;
	// stb r28,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r28.u8);
	// ori r5,r8,25088
	ctx.r5.u64 = ctx.r8.u64 | 25088;
	// li r9,0
	ctx.r9.s64 = 0;
	// rldimi r5,r4,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lfs f3,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f3.f64 = double(temp.f32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822b1238
	ctx.lr = 0x822C6604;
	sub_822B1238(ctx, base);
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// lfd f29,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f30,-112(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f31,-104(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x8259bb2c
	__restgprlr_21(ctx, base);
	return;
loc_822C6618:
	// lis r3,8
	ctx.r3.s64 = 524288;
	// stb r28,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r28.u8);
	// lis r6,8
	ctx.r6.s64 = 524288;
	// ori r11,r3,49800
	ctx.r11.u64 = ctx.r3.u64 | 49800;
	// lis r10,28927
	ctx.r10.s64 = 1895759872;
	// lis r8,-16818
	ctx.r8.s64 = -1102184448;
	// li r27,19
	ctx.r27.s64 = 19;
	// ori r5,r10,40100
	ctx.r5.u64 = ctx.r10.u64 | 40100;
	// lfsx f0,r31,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// ori r7,r8,16529
	ctx.r7.u64 = ctx.r8.u64 | 16529;
	// li r9,0
	ctx.r9.s64 = 0;
	// rldimi r5,r7,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lfs f13,1940(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1940);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fsubs f6,f13,f0
	ctx.f6.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfd f13,-5592(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + -5592);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f12,-15724(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15724);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fsel f0,f6,f13,f0
	ctx.f0.f64 = ctx.f6.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// lfs f11,1628(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1628);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fadds f3,f12,f11
	ctx.f3.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// lfs f31,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f31.f64 = double(temp.f32);
	// ori r11,r6,49800
	ctx.r11.u64 = ctx.r6.u64 | 49800;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stfsx f0,r31,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, temp.u32);
	// bl 0x822b1238
	ctx.lr = 0x822C66A0;
	sub_822B1238(ctx, base);
	// lis r10,-14611
	ctx.r10.s64 = -957546496;
	// lfs f1,25556(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 25556);
	ctx.f1.f64 = double(temp.f32);
	// lis r8,31047
	ctx.r8.s64 = 2034696192;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// ori r5,r10,25088
	ctx.r5.u64 = ctx.r10.u64 | 25088;
	// stb r28,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r28.u8);
	// ori r7,r8,20430
	ctx.r7.u64 = ctx.r8.u64 | 20430;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// rldimi r5,r7,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// lfs f3,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f3.f64 = double(temp.f32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822b1238
	ctx.lr = 0x822C66E0;
	sub_822B1238(ctx, base);
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// lfd f29,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f30,-112(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f31,-104(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x8259bb2c
	__restgprlr_21(ctx, base);
	return;
loc_822C66F4:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stb r28,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r28.u8);
	// lis r6,8
	ctx.r6.s64 = 524288;
	// lis r4,28927
	ctx.r4.s64 = 1895759872;
	// ori r5,r6,49800
	ctx.r5.u64 = ctx.r6.u64 | 49800;
	// lis r3,-16818
	ctx.r3.s64 = -1102184448;
	// lfs f13,1940(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1940);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// li r27,19
	ctx.r27.s64 = 19;
	// lfsx f0,r31,r5
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	ctx.f0.f64 = double(temp.f32);
	// ori r5,r4,40100
	ctx.r5.u64 = ctx.r4.u64 | 40100;
	// fsubs f5,f13,f0
	ctx.f5.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// ori r8,r10,49800
	ctx.r8.u64 = ctx.r10.u64 | 49800;
	// lfd f13,-5592(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + -5592);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lfs f12,-15724(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15724);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fsel f0,f5,f13,f0
	ctx.f0.f64 = ctx.f5.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// stfsx f0,r31,r8
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, temp.u32);
	// lfs f11,1628(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1628);
	ctx.f11.f64 = double(temp.f32);
	// ori r11,r3,16529
	ctx.r11.u64 = ctx.r3.u64 | 16529;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fadds f3,f12,f11
	ctx.f3.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// rldimi r5,r11,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f31.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x822b1238
	ctx.lr = 0x822C677C;
	sub_822B1238(ctx, base);
	// lis r7,-14611
	ctx.r7.s64 = -957546496;
	// lfs f1,25556(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 25556);
	ctx.f1.f64 = double(temp.f32);
	// lis r4,31047
	ctx.r4.s64 = 2034696192;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// ori r3,r4,20430
	ctx.r3.u64 = ctx.r4.u64 | 20430;
	// stb r28,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r28.u8);
	// ori r5,r7,25088
	ctx.r5.u64 = ctx.r7.u64 | 25088;
	// li r9,0
	ctx.r9.s64 = 0;
	// rldimi r5,r3,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lfs f3,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f3.f64 = double(temp.f32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822b1238
	ctx.lr = 0x822C67BC;
	sub_822B1238(ctx, base);
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// lfd f29,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f30,-112(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f31,-104(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x8259bb2c
	__restgprlr_21(ctx, base);
	return;
loc_822C67D0:
	// lis r11,8
	ctx.r11.s64 = 524288;
	// stb r28,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r28.u8);
	// lis r8,-12801
	ctx.r8.s64 = -838926336;
	// ori r10,r11,49800
	ctx.r10.u64 = ctx.r11.u64 | 49800;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r7,-9254
	ctx.r7.s64 = -606470144;
	// ori r5,r8,40100
	ctx.r5.u64 = ctx.r8.u64 | 40100;
	// ori r6,r7,772
	ctx.r6.u64 = ctx.r7.u64 | 772;
	// lfsx f0,r31,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// li r27,19
	ctx.r27.s64 = 19;
	// lfs f13,1940(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1940);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fsubs f4,f13,f0
	ctx.f4.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// rldimi r5,r6,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// lfd f13,-5592(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + -5592);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lfs f12,-15724(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15724);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fsel f0,f4,f13,f0
	ctx.f0.f64 = ctx.f4.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// lfs f11,1628(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1628);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fadds f3,f12,f11
	ctx.f3.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// lfs f31,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f31.f64 = double(temp.f32);
	// lis r11,8
	ctx.r11.s64 = 524288;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// ori r10,r11,49800
	ctx.r10.u64 = ctx.r11.u64 | 49800;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stfsx f0,r31,r10
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, temp.u32);
	// bl 0x822b1238
	ctx.lr = 0x822C6858;
	sub_822B1238(ctx, base);
	// lis r8,-14611
	ctx.r8.s64 = -957546496;
	// lfs f1,25556(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 25556);
	ctx.f1.f64 = double(temp.f32);
	// lis r7,31047
	ctx.r7.s64 = 2034696192;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// ori r4,r7,20430
	ctx.r4.u64 = ctx.r7.u64 | 20430;
	// stb r28,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r28.u8);
	// ori r5,r8,25088
	ctx.r5.u64 = ctx.r8.u64 | 25088;
	// li r9,0
	ctx.r9.s64 = 0;
	// rldimi r5,r4,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lfs f3,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f3.f64 = double(temp.f32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822b1238
	ctx.lr = 0x822C6898;
	sub_822B1238(ctx, base);
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// lfd f29,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f30,-112(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f31,-104(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x8259bb2c
	__restgprlr_21(ctx, base);
	return;
loc_822C68AC:
	// lis r3,8
	ctx.r3.s64 = 524288;
	// stb r28,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r28.u8);
	// lis r6,8
	ctx.r6.s64 = 524288;
	// ori r11,r3,49800
	ctx.r11.u64 = ctx.r3.u64 | 49800;
	// lis r10,-20737
	ctx.r10.s64 = -1359020032;
	// lis r8,32499
	ctx.r8.s64 = 2129854464;
	// li r27,19
	ctx.r27.s64 = 19;
	// ori r5,r10,40100
	ctx.r5.u64 = ctx.r10.u64 | 40100;
	// lfsx f0,r31,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// ori r7,r8,51236
	ctx.r7.u64 = ctx.r8.u64 | 51236;
	// li r9,0
	ctx.r9.s64 = 0;
	// rldimi r5,r7,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lfs f13,1940(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1940);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fsubs f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfd f13,-5592(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + -5592);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f12,-15724(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15724);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fsel f0,f10,f13,f0
	ctx.f0.f64 = ctx.f10.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// lfs f11,1628(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1628);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fadds f3,f12,f11
	ctx.f3.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// lfs f31,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f31.f64 = double(temp.f32);
	// ori r11,r6,49800
	ctx.r11.u64 = ctx.r6.u64 | 49800;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stfsx f0,r31,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, temp.u32);
	// bl 0x822b1238
	ctx.lr = 0x822C6934;
	sub_822B1238(ctx, base);
	// lis r10,-14611
	ctx.r10.s64 = -957546496;
	// lfs f1,25556(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 25556);
	ctx.f1.f64 = double(temp.f32);
	// lis r8,31047
	ctx.r8.s64 = 2034696192;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// ori r5,r10,25088
	ctx.r5.u64 = ctx.r10.u64 | 25088;
	// stb r28,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r28.u8);
	// ori r7,r8,20430
	ctx.r7.u64 = ctx.r8.u64 | 20430;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// rldimi r5,r7,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// lfs f3,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f3.f64 = double(temp.f32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822b1238
	ctx.lr = 0x822C6974;
	sub_822B1238(ctx, base);
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// lfd f29,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f30,-112(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f31,-104(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x8259bb2c
	__restgprlr_21(ctx, base);
	return;
loc_822C6988:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stb r28,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r28.u8);
	// lis r6,8
	ctx.r6.s64 = 524288;
	// lis r4,28927
	ctx.r4.s64 = 1895759872;
	// ori r5,r6,49800
	ctx.r5.u64 = ctx.r6.u64 | 49800;
	// lis r3,-16818
	ctx.r3.s64 = -1102184448;
	// lfs f13,1940(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1940);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// li r27,19
	ctx.r27.s64 = 19;
	// lfsx f0,r31,r5
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	ctx.f0.f64 = double(temp.f32);
	// ori r5,r4,40100
	ctx.r5.u64 = ctx.r4.u64 | 40100;
	// fsubs f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// ori r8,r10,49800
	ctx.r8.u64 = ctx.r10.u64 | 49800;
	// lfd f13,-5592(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + -5592);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lfs f12,-15724(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15724);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fsel f0,f9,f13,f0
	ctx.f0.f64 = ctx.f9.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// stfsx f0,r31,r8
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, temp.u32);
	// lfs f11,1628(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1628);
	ctx.f11.f64 = double(temp.f32);
	// ori r11,r3,16529
	ctx.r11.u64 = ctx.r3.u64 | 16529;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fadds f3,f12,f11
	ctx.f3.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// rldimi r5,r11,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f31.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x822b1238
	ctx.lr = 0x822C6A10;
	sub_822B1238(ctx, base);
	// lis r7,-14611
	ctx.r7.s64 = -957546496;
	// lfs f1,25556(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 25556);
	ctx.f1.f64 = double(temp.f32);
	// lis r4,31047
	ctx.r4.s64 = 2034696192;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// ori r3,r4,20430
	ctx.r3.u64 = ctx.r4.u64 | 20430;
	// stb r28,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r28.u8);
	// ori r5,r7,25088
	ctx.r5.u64 = ctx.r7.u64 | 25088;
	// li r9,0
	ctx.r9.s64 = 0;
	// rldimi r5,r3,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lfs f3,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f3.f64 = double(temp.f32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822b1238
	ctx.lr = 0x822C6A50;
	sub_822B1238(ctx, base);
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// lfd f29,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f30,-112(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f31,-104(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x8259bb2c
	__restgprlr_21(ctx, base);
	return;
loc_822C6A64:
	// lis r11,8
	ctx.r11.s64 = 524288;
	// stb r28,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r28.u8);
	// lis r8,28927
	ctx.r8.s64 = 1895759872;
	// ori r10,r11,49800
	ctx.r10.u64 = ctx.r11.u64 | 49800;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r7,-16818
	ctx.r7.s64 = -1102184448;
	// ori r5,r8,40100
	ctx.r5.u64 = ctx.r8.u64 | 40100;
	// ori r6,r7,16529
	ctx.r6.u64 = ctx.r7.u64 | 16529;
	// lfsx f0,r31,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// li r27,19
	ctx.r27.s64 = 19;
	// lfs f13,1940(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1940);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fsubs f8,f13,f0
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// rldimi r5,r6,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// lfd f13,-5592(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + -5592);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lfs f12,-15724(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15724);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fsel f0,f8,f13,f0
	ctx.f0.f64 = ctx.f8.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// lfs f11,1628(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1628);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fadds f3,f12,f11
	ctx.f3.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// lfs f31,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f31.f64 = double(temp.f32);
	// lis r11,8
	ctx.r11.s64 = 524288;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// ori r10,r11,49800
	ctx.r10.u64 = ctx.r11.u64 | 49800;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stfsx f0,r31,r10
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, temp.u32);
	// bl 0x822b1238
	ctx.lr = 0x822C6AEC;
	sub_822B1238(ctx, base);
	// lis r8,-14611
	ctx.r8.s64 = -957546496;
	// lfs f1,25556(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 25556);
	ctx.f1.f64 = double(temp.f32);
	// lis r7,31047
	ctx.r7.s64 = 2034696192;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// ori r4,r7,20430
	ctx.r4.u64 = ctx.r7.u64 | 20430;
	// stb r28,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r28.u8);
	// ori r5,r8,25088
	ctx.r5.u64 = ctx.r8.u64 | 25088;
	// li r9,0
	ctx.r9.s64 = 0;
	// rldimi r5,r4,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lfs f3,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f3.f64 = double(temp.f32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822b1238
	ctx.lr = 0x822C6B2C;
	sub_822B1238(ctx, base);
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// lfd f29,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f30,-112(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f31,-104(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x8259bb2c
	__restgprlr_21(ctx, base);
	return;
loc_822C6B40:
	// lis r3,8
	ctx.r3.s64 = 524288;
	// stb r28,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r28.u8);
	// lis r6,8
	ctx.r6.s64 = 524288;
	// ori r11,r3,49800
	ctx.r11.u64 = ctx.r3.u64 | 49800;
	// lis r10,28927
	ctx.r10.s64 = 1895759872;
	// lis r8,-16818
	ctx.r8.s64 = -1102184448;
	// li r27,19
	ctx.r27.s64 = 19;
	// ori r5,r10,40100
	ctx.r5.u64 = ctx.r10.u64 | 40100;
	// lfsx f0,r31,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// ori r7,r8,16529
	ctx.r7.u64 = ctx.r8.u64 | 16529;
	// li r9,0
	ctx.r9.s64 = 0;
	// rldimi r5,r7,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lfs f13,1940(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1940);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fsubs f7,f13,f0
	ctx.f7.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfd f13,-5592(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + -5592);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f12,-15724(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15724);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fsel f0,f7,f13,f0
	ctx.f0.f64 = ctx.f7.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// lfs f11,1628(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1628);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fadds f3,f12,f11
	ctx.f3.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// lfs f31,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f31.f64 = double(temp.f32);
	// ori r11,r6,49800
	ctx.r11.u64 = ctx.r6.u64 | 49800;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stfsx f0,r31,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, temp.u32);
	// bl 0x822b1238
	ctx.lr = 0x822C6BC8;
	sub_822B1238(ctx, base);
	// lis r10,-14611
	ctx.r10.s64 = -957546496;
	// lfs f1,25556(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 25556);
	ctx.f1.f64 = double(temp.f32);
	// lis r8,31047
	ctx.r8.s64 = 2034696192;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// ori r5,r10,25088
	ctx.r5.u64 = ctx.r10.u64 | 25088;
	// stb r28,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r28.u8);
	// ori r7,r8,20430
	ctx.r7.u64 = ctx.r8.u64 | 20430;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// rldimi r5,r7,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// lfs f3,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f3.f64 = double(temp.f32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822b1238
	ctx.lr = 0x822C6C08;
	sub_822B1238(ctx, base);
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// lfd f29,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f30,-112(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f31,-104(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x8259bb2c
	__restgprlr_21(ctx, base);
	return;
loc_822C6C1C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stb r28,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r28.u8);
	// lis r6,8
	ctx.r6.s64 = 524288;
	// lis r4,28927
	ctx.r4.s64 = 1895759872;
	// ori r5,r6,49800
	ctx.r5.u64 = ctx.r6.u64 | 49800;
	// lis r3,-16818
	ctx.r3.s64 = -1102184448;
	// lfs f13,1940(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1940);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// li r27,19
	ctx.r27.s64 = 19;
	// lfsx f0,r31,r5
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	ctx.f0.f64 = double(temp.f32);
	// ori r5,r4,40100
	ctx.r5.u64 = ctx.r4.u64 | 40100;
	// fsubs f6,f13,f0
	ctx.f6.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// ori r8,r10,49800
	ctx.r8.u64 = ctx.r10.u64 | 49800;
	// lfd f13,-5592(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + -5592);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lfs f12,-15724(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15724);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fsel f0,f6,f13,f0
	ctx.f0.f64 = ctx.f6.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// stfsx f0,r31,r8
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, temp.u32);
	// lfs f11,1628(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1628);
	ctx.f11.f64 = double(temp.f32);
	// ori r11,r3,16529
	ctx.r11.u64 = ctx.r3.u64 | 16529;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fadds f3,f12,f11
	ctx.f3.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// rldimi r5,r11,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f31.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x822b1238
	ctx.lr = 0x822C6CA4;
	sub_822B1238(ctx, base);
	// lis r7,-14611
	ctx.r7.s64 = -957546496;
	// lfs f1,25556(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 25556);
	ctx.f1.f64 = double(temp.f32);
	// lis r4,31047
	ctx.r4.s64 = 2034696192;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// ori r3,r4,20430
	ctx.r3.u64 = ctx.r4.u64 | 20430;
	// stb r28,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r28.u8);
	// ori r5,r7,25088
	ctx.r5.u64 = ctx.r7.u64 | 25088;
	// li r9,0
	ctx.r9.s64 = 0;
	// rldimi r5,r3,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lfs f3,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f3.f64 = double(temp.f32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822b1238
	ctx.lr = 0x822C6CE4;
	sub_822B1238(ctx, base);
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// lfd f29,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f30,-112(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f31,-104(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x8259bb2c
	__restgprlr_21(ctx, base);
	return;
loc_822C6CF8:
	// lis r11,8
	ctx.r11.s64 = 524288;
	// stb r28,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r28.u8);
	// lis r8,-12801
	ctx.r8.s64 = -838926336;
	// ori r10,r11,49800
	ctx.r10.u64 = ctx.r11.u64 | 49800;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r7,-9254
	ctx.r7.s64 = -606470144;
	// ori r5,r8,40100
	ctx.r5.u64 = ctx.r8.u64 | 40100;
	// ori r6,r7,772
	ctx.r6.u64 = ctx.r7.u64 | 772;
	// lfsx f0,r31,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// li r27,19
	ctx.r27.s64 = 19;
	// lfs f13,1940(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1940);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fsubs f5,f13,f0
	ctx.f5.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// rldimi r5,r6,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// lfd f13,-5592(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + -5592);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lfs f12,-15724(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15724);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fsel f0,f5,f13,f0
	ctx.f0.f64 = ctx.f5.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// lfs f11,1628(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1628);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fadds f3,f12,f11
	ctx.f3.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// lfs f31,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f31.f64 = double(temp.f32);
	// lis r11,8
	ctx.r11.s64 = 524288;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// ori r10,r11,49800
	ctx.r10.u64 = ctx.r11.u64 | 49800;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stfsx f0,r31,r10
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, temp.u32);
	// bl 0x822b1238
	ctx.lr = 0x822C6D80;
	sub_822B1238(ctx, base);
	// lis r8,-14611
	ctx.r8.s64 = -957546496;
	// lfs f1,25556(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 25556);
	ctx.f1.f64 = double(temp.f32);
	// lis r7,31047
	ctx.r7.s64 = 2034696192;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// ori r4,r7,20430
	ctx.r4.u64 = ctx.r7.u64 | 20430;
	// stb r28,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r28.u8);
	// ori r5,r8,25088
	ctx.r5.u64 = ctx.r8.u64 | 25088;
	// li r9,0
	ctx.r9.s64 = 0;
	// rldimi r5,r4,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lfs f3,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f3.f64 = double(temp.f32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822b1238
	ctx.lr = 0x822C6DC0;
	sub_822B1238(ctx, base);
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// lfd f29,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f30,-112(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f31,-104(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x8259bb2c
	__restgprlr_21(ctx, base);
	return;
loc_822C6DD4:
	// lis r3,8
	ctx.r3.s64 = 524288;
	// stb r28,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r28.u8);
	// lis r6,8
	ctx.r6.s64 = 524288;
	// ori r11,r3,49800
	ctx.r11.u64 = ctx.r3.u64 | 49800;
	// lis r10,-20737
	ctx.r10.s64 = -1359020032;
	// lis r8,32499
	ctx.r8.s64 = 2129854464;
	// li r27,19
	ctx.r27.s64 = 19;
	// ori r5,r10,40100
	ctx.r5.u64 = ctx.r10.u64 | 40100;
	// lfsx f0,r31,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// ori r7,r8,51236
	ctx.r7.u64 = ctx.r8.u64 | 51236;
	// li r9,0
	ctx.r9.s64 = 0;
	// rldimi r5,r7,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lfs f13,1940(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1940);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fsubs f4,f13,f0
	ctx.f4.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfd f13,-5592(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + -5592);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f12,-15724(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15724);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fsel f0,f4,f13,f0
	ctx.f0.f64 = ctx.f4.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// lfs f11,1628(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1628);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fadds f3,f12,f11
	ctx.f3.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// lfs f31,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f31.f64 = double(temp.f32);
	// ori r11,r6,49800
	ctx.r11.u64 = ctx.r6.u64 | 49800;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stfsx f0,r31,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, temp.u32);
	// bl 0x822b1238
	ctx.lr = 0x822C6E5C;
	sub_822B1238(ctx, base);
	// lis r10,-14611
	ctx.r10.s64 = -957546496;
	// lfs f1,25556(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 25556);
	ctx.f1.f64 = double(temp.f32);
	// lis r8,31047
	ctx.r8.s64 = 2034696192;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// ori r5,r10,25088
	ctx.r5.u64 = ctx.r10.u64 | 25088;
	// stb r28,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r28.u8);
	// ori r7,r8,20430
	ctx.r7.u64 = ctx.r8.u64 | 20430;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// rldimi r5,r7,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// lfs f3,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f3.f64 = double(temp.f32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822b1238
	ctx.lr = 0x822C6E9C;
	sub_822B1238(ctx, base);
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// lfd f29,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f30,-112(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f31,-104(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x8259bb2c
	__restgprlr_21(ctx, base);
	return;
loc_822C6EB0:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stb r28,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r28.u8);
	// lis r6,8
	ctx.r6.s64 = 524288;
	// lis r4,-20737
	ctx.r4.s64 = -1359020032;
	// ori r5,r6,49800
	ctx.r5.u64 = ctx.r6.u64 | 49800;
	// lis r3,32499
	ctx.r3.s64 = 2129854464;
	// lfs f13,1940(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1940);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// li r27,19
	ctx.r27.s64 = 19;
	// lfsx f0,r31,r5
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	ctx.f0.f64 = double(temp.f32);
	// ori r5,r4,40100
	ctx.r5.u64 = ctx.r4.u64 | 40100;
	// fsubs f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// ori r8,r10,49800
	ctx.r8.u64 = ctx.r10.u64 | 49800;
	// lfd f13,-5592(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + -5592);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lfs f12,-15724(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15724);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fsel f0,f10,f13,f0
	ctx.f0.f64 = ctx.f10.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// stfsx f0,r31,r8
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, temp.u32);
	// lfs f11,1628(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1628);
	ctx.f11.f64 = double(temp.f32);
	// ori r11,r3,51236
	ctx.r11.u64 = ctx.r3.u64 | 51236;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fadds f3,f12,f11
	ctx.f3.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// rldimi r5,r11,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f31.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x822b1238
	ctx.lr = 0x822C6F38;
	sub_822B1238(ctx, base);
	// lis r7,-14611
	ctx.r7.s64 = -957546496;
	// lfs f1,25556(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 25556);
	ctx.f1.f64 = double(temp.f32);
	// lis r4,31047
	ctx.r4.s64 = 2034696192;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// ori r3,r4,20430
	ctx.r3.u64 = ctx.r4.u64 | 20430;
	// stb r28,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r28.u8);
	// ori r5,r7,25088
	ctx.r5.u64 = ctx.r7.u64 | 25088;
	// li r9,0
	ctx.r9.s64 = 0;
	// rldimi r5,r3,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lfs f3,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f3.f64 = double(temp.f32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822b1238
	ctx.lr = 0x822C6F78;
	sub_822B1238(ctx, base);
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// lfd f29,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f30,-112(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f31,-104(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x8259bb2c
	__restgprlr_21(ctx, base);
	return;
loc_822C6F8C:
	// lis r11,8
	ctx.r11.s64 = 524288;
	// stb r28,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r28.u8);
	// lis r8,-12801
	ctx.r8.s64 = -838926336;
	// ori r10,r11,49800
	ctx.r10.u64 = ctx.r11.u64 | 49800;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r7,-9254
	ctx.r7.s64 = -606470144;
	// ori r5,r8,40100
	ctx.r5.u64 = ctx.r8.u64 | 40100;
	// ori r6,r7,772
	ctx.r6.u64 = ctx.r7.u64 | 772;
	// lfsx f0,r31,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// li r27,19
	ctx.r27.s64 = 19;
	// lfs f13,1940(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1940);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fsubs f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// rldimi r5,r6,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// lfd f13,-5592(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + -5592);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lfs f12,-15724(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15724);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fsel f0,f9,f13,f0
	ctx.f0.f64 = ctx.f9.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// lfs f11,1628(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1628);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fadds f3,f12,f11
	ctx.f3.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// lfs f31,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f31.f64 = double(temp.f32);
	// lis r11,8
	ctx.r11.s64 = 524288;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// ori r10,r11,49800
	ctx.r10.u64 = ctx.r11.u64 | 49800;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stfsx f0,r31,r10
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, temp.u32);
	// bl 0x822b1238
	ctx.lr = 0x822C7014;
	sub_822B1238(ctx, base);
	// lis r8,-14611
	ctx.r8.s64 = -957546496;
	// lfs f1,25556(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 25556);
	ctx.f1.f64 = double(temp.f32);
	// lis r7,31047
	ctx.r7.s64 = 2034696192;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// ori r4,r7,20430
	ctx.r4.u64 = ctx.r7.u64 | 20430;
	// stb r28,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r28.u8);
	// ori r5,r8,25088
	ctx.r5.u64 = ctx.r8.u64 | 25088;
	// li r9,0
	ctx.r9.s64 = 0;
	// rldimi r5,r4,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lfs f3,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f3.f64 = double(temp.f32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822b1238
	ctx.lr = 0x822C7054;
	sub_822B1238(ctx, base);
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// lfd f29,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f30,-112(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f31,-104(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x8259bb2c
	__restgprlr_21(ctx, base);
	return;
loc_822C7068:
	// lis r3,19988
	ctx.r3.s64 = 1309933568;
	// mr r22,r30
	ctx.r22.u64 = ctx.r30.u64;
	// lis r30,30099
	ctx.r30.s64 = 1972568064;
	// ori r11,r3,54523
	ctx.r11.u64 = ctx.r3.u64 | 54523;
	// rldimi r30,r11,32,0
	ctx.r30.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r30.u64 & 0xFFFFFFFF);
	// b 0x822c70b0
	goto loc_822C70B0;
loc_822C7080:
	// lis r10,-23309
	ctx.r10.s64 = -1527578624;
	// mr r22,r30
	ctx.r22.u64 = ctx.r30.u64;
	// lis r30,5632
	ctx.r30.s64 = 369098752;
	// ori r9,r10,47241
	ctx.r9.u64 = ctx.r10.u64 | 47241;
	// rldimi r30,r9,32,0
	ctx.r30.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r30.u64 & 0xFFFFFFFF);
	// b 0x822c70b0
	goto loc_822C70B0;
loc_822C7098:
	// lis r8,24351
	ctx.r8.s64 = 1595867136;
	// lis r7,-18687
	ctx.r7.s64 = -1224671232;
	// mr r22,r30
	ctx.r22.u64 = ctx.r30.u64;
	// ori r30,r8,40100
	ctx.r30.u64 = ctx.r8.u64 | 40100;
	// ori r6,r7,21204
	ctx.r6.u64 = ctx.r7.u64 | 21204;
	// rldimi r30,r6,32,0
	ctx.r30.u64 = (__builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r30.u64 & 0xFFFFFFFF);
loc_822C70B0:
	// lis r5,8
	ctx.r5.s64 = 524288;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// ori r4,r5,49800
	ctx.r4.u64 = ctx.r5.u64 | 49800;
	// stb r28,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r28.u8);
	// li r3,19
	ctx.r3.s64 = 19;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// lfs f13,1940(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1940);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfsx f0,r31,r4
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	ctx.f0.f64 = double(temp.f32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fsubs f8,f13,f0
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfd f13,-5592(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + -5592);
	// lis r11,8
	ctx.r11.s64 = 524288;
	// ori r10,r11,49800
	ctx.r10.u64 = ctx.r11.u64 | 49800;
	// fsel f0,f8,f13,f0
	ctx.f0.f64 = ctx.f8.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// stfsx f0,r31,r10
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, temp.u32);
	// bl 0x822b1238
	ctx.lr = 0x822C7110;
	sub_822B1238(ctx, base);
loc_822C7110:
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// lfd f29,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f30,-112(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f31,-104(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x8259bb2c
	__restgprlr_21(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_822C8238) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x822C8240;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r10,12
	ctx.r10.s64 = 12;
	// addi r11,r26,536
	ctx.r11.s64 = ctx.r26.s64 + 536;
	// li r30,0
	ctx.r30.s64 = 0;
	// lfs f31,2868(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2868);
	ctx.f31.f64 = double(temp.f32);
	// li r28,1
	ctx.r28.s64 = 1;
loc_822C8264:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stfs f31,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// stw r30,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r30.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r30,-12(r11)
	PPC_STORE_U32(ctx.r11.u32 + -12, ctx.r30.u32);
	// stw r30,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r30.u32);
	// stw r30,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r30.u32);
	// stw r28,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r28.u32);
	// addi r11,r11,160
	ctx.r11.s64 = ctx.r11.s64 + 160;
	// bne cr6,0x822c8264
	if (!ctx.cr6.eq) goto loc_822C8264;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r31,r26,2456
	ctx.r31.s64 = ctx.r26.s64 + 2456;
	// li r29,12
	ctx.r29.s64 = 12;
	// addi r27,r11,26080
	ctx.r27.s64 = ctx.r11.s64 + 26080;
loc_822C82A0:
	// stfs f31,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// stw r30,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,-12(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12, ctx.r30.u32);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// lwz r11,2672(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 2672);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82349420
	ctx.lr = 0x822C82C4;
	sub_82349420(ctx, base);
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// stb r30,376(r31)
	PPC_STORE_U8(ctx.r31.u32 + 376, ctx.r30.u8);
	// stw r30,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r30.u32);
	// stw r30,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r30.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r30,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r30.u32);
	// stw r28,452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 452, ctx.r28.u32);
	// stb r30,456(r31)
	PPC_STORE_U8(ctx.r31.u32 + 456, ctx.r30.u8);
	// addi r31,r31,480
	ctx.r31.s64 = ctx.r31.s64 + 480;
	// bne cr6,0x822c82a0
	if (!ctx.cr6.eq) goto loc_822C82A0;
	// addi r10,r26,8296
	ctx.r10.s64 = ctx.r26.s64 + 8296;
	// li r11,6
	ctx.r11.s64 = 6;
loc_822C82F4:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r28,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r28.u32);
	// addi r10,r10,116
	ctx.r10.s64 = ctx.r10.s64 + 116;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822c82f4
	if (!ctx.cr6.eq) goto loc_822C82F4;
	// addi r31,r26,16
	ctx.r31.s64 = ctx.r26.s64 + 16;
	// li r29,2
	ctx.r29.s64 = 2;
loc_822C8310:
	// addi r3,r31,-16
	ctx.r3.s64 = ctx.r31.s64 + -16;
	// stfs f31,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// stw r30,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r30.u32);
	// stw r30,-12(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12, ctx.r30.u32);
	// stw r28,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r28.u32);
	// bl 0x822a6b78
	ctx.lr = 0x822C832C;
	sub_822A6B78(ctx, base);
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// addi r31,r31,260
	ctx.r31.s64 = ctx.r31.s64 + 260;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x822c8310
	if (!ctx.cr6.eq) goto loc_822C8310;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_822C85D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addi r11,r4,16
	ctx.r11.s64 = ctx.r4.s64 + 16;
	// addi r10,r3,16
	ctx.r10.s64 = ctx.r3.s64 + 16;
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// ld r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r8,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r8.u64);
	// lwz r7,36(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// stw r7,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r7.u32);
	// lwz r6,40(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// stw r6,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r6.u32);
	// lbz r5,44(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 44);
	// stb r5,44(r3)
	PPC_STORE_U8(ctx.r3.u32 + 44, ctx.r5.u8);
	// lwz r11,52(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// lwz r10,56(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	// stw r10,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r10.u32);
	// lbz r9,60(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 60);
	// stb r9,60(r3)
	PPC_STORE_U8(ctx.r3.u32 + 60, ctx.r9.u8);
	// lwz r8,64(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// stw r8,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r8.u32);
	// lfs f0,68(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// lfs f13,72(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,72(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// lfs f12,76(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,76(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// lfs f11,80(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,80(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// lfs f10,84(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,84(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// lfs f9,88(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 88);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,88(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// lfs f8,92(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 92);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,92(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// lbz r7,96(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 96);
	// stb r7,96(r3)
	PPC_STORE_U8(ctx.r3.u32 + 96, ctx.r7.u8);
	// lbz r6,97(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 97);
	// stb r6,97(r3)
	PPC_STORE_U8(ctx.r3.u32 + 97, ctx.r6.u8);
	// lwz r5,100(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	// stw r5,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r5.u32);
	// blr 
	return;
}
PPC_FUNC_IMPL(__imp__sub_822C8678) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,15812(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 15812);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// lwz r11,6940(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6940);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r9,6940(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6940, ctx.r9.u32);
	// addi r3,r11,4400
	ctx.r3.s64 = ctx.r11.s64 + 4400;
	// b 0x822b99d8
	sub_822B99D8(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_822C86C0) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,15812(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 15812);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x822c8710
	if (ctx.cr6.gt) goto loc_822C8710;
	// lwz r11,6936(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6936);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bge cr6,0x822c8710
	if (!ctx.cr6.lt) goto loc_822C8710;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r9,6936(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6936, ctx.r9.u32);
	// addi r3,r11,3920
	ctx.r3.s64 = ctx.r11.s64 + 3920;
	// bl 0x822b99d8
	ctx.lr = 0x822C870C;
	sub_822B99D8(ctx, base);
	// bl 0x822bd5a8
	ctx.lr = 0x822C8710;
	sub_822BD5A8(ctx, base);
loc_822C8710:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}
PPC_FUNC_IMPL(__imp__sub_822C8720) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,15812(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 15812);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// lwz r11,6948(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6948);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r9,6948(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6948, ctx.r9.u32);
	// addi r3,r11,6448
	ctx.r3.s64 = ctx.r11.s64 + 6448;
	// b 0x822b99d8
	sub_822B99D8(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_822C8768) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,15812(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 15812);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2864(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// lwz r10,6928(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6928);
	// cmplwi cr6,r10,30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 30, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// mulli r9,r10,112
	ctx.r9.s64 = ctx.r10.s64 * 112;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r10,6928(r11)
	PPC_STORE_U32(ctx.r11.u32 + 6928, ctx.r10.u32);
	// b 0x822b9a68
	sub_822B9A68(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_822C87A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,15812(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 15812);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// lwz r11,6932(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6932);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addi r10,r11,30
	ctx.r10.s64 = ctx.r11.s64 + 30;
	// mulli r11,r10,112
	ctx.r11.s64 = ctx.r10.s64 * 112;
	// stw r9,6932(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6932, ctx.r9.u32);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// b 0x822b9b08
	sub_822B9B08(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_822C8870) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bad8
	ctx.lr = 0x822C8878;
	__savegprlr_20(ctx, base);
	// stfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r3,r30,17184
	ctx.r3.s64 = ctx.r30.s64 + 17184;
	// lfs f31,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,17172(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 17172, temp.u32);
	// stw r31,8288(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8288, ctx.r31.u32);
	// stw r31,8292(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8292, ctx.r31.u32);
	// stw r31,8296(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8296, ctx.r31.u32);
	// stw r31,8300(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8300, ctx.r31.u32);
	// stw r31,8304(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8304, ctx.r31.u32);
	// stw r31,8308(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8308, ctx.r31.u32);
	// stw r31,16620(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16620, ctx.r31.u32);
	// stw r31,16624(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16624, ctx.r31.u32);
	// stw r31,16628(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16628, ctx.r31.u32);
	// stw r31,16632(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16632, ctx.r31.u32);
	// stw r31,16636(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16636, ctx.r31.u32);
	// stw r31,16640(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16640, ctx.r31.u32);
	// stw r31,16644(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16644, ctx.r31.u32);
	// stw r31,17168(r30)
	PPC_STORE_U32(ctx.r30.u32 + 17168, ctx.r31.u32);
	// bl 0x822aab20
	ctx.lr = 0x822C88D4;
	sub_822AAB20(ctx, base);
	// addi r3,r30,17280
	ctx.r3.s64 = ctx.r30.s64 + 17280;
	// bl 0x822aa630
	ctx.lr = 0x822C88DC;
	sub_822AA630(ctx, base);
	// addi r3,r30,17768
	ctx.r3.s64 = ctx.r30.s64 + 17768;
	// bl 0x822bd928
	ctx.lr = 0x822C88E4;
	sub_822BD928(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r31,17716(r30)
	PPC_STORE_U32(ctx.r30.u32 + 17716, ctx.r31.u32);
	// addi r11,r30,1232
	ctx.r11.s64 = ctx.r30.s64 + 1232;
	// stw r31,17720(r30)
	PPC_STORE_U32(ctx.r30.u32 + 17720, ctx.r31.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r31,17724(r30)
	PPC_STORE_U32(ctx.r30.u32 + 17724, ctx.r31.u32);
	// stw r31,17728(r30)
	PPC_STORE_U32(ctx.r30.u32 + 17728, ctx.r31.u32);
	// lfs f0,2868(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// stw r31,17732(r30)
	PPC_STORE_U32(ctx.r30.u32 + 17732, ctx.r31.u32);
	// stw r31,17736(r30)
	PPC_STORE_U32(ctx.r30.u32 + 17736, ctx.r31.u32);
	// stw r31,17740(r30)
	PPC_STORE_U32(ctx.r30.u32 + 17740, ctx.r31.u32);
	// stw r31,17744(r30)
	PPC_STORE_U32(ctx.r30.u32 + 17744, ctx.r31.u32);
	// stw r31,17748(r30)
	PPC_STORE_U32(ctx.r30.u32 + 17748, ctx.r31.u32);
	// stw r31,17752(r30)
	PPC_STORE_U32(ctx.r30.u32 + 17752, ctx.r31.u32);
	// stb r31,18157(r30)
	PPC_STORE_U8(ctx.r30.u32 + 18157, ctx.r31.u8);
loc_822C8920:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stfs f0,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f0,24(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne cr6,0x822c8920
	if (!ctx.cr6.eq) goto loc_822C8920;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a8980
	ctx.lr = 0x822C894C;
	sub_822A8980(ctx, base);
	// bl 0x822a9b68
	ctx.lr = 0x822C8950;
	sub_822A9B68(ctx, base);
	// li r20,1
	ctx.r20.s64 = 1;
	// stw r31,17672(r30)
	PPC_STORE_U32(ctx.r30.u32 + 17672, ctx.r31.u32);
	// stw r31,17680(r30)
	PPC_STORE_U32(ctx.r30.u32 + 17680, ctx.r31.u32);
	// stw r20,18096(r30)
	PPC_STORE_U32(ctx.r30.u32 + 18096, ctx.r20.u32);
	// stw r20,18100(r30)
	PPC_STORE_U32(ctx.r30.u32 + 18100, ctx.r20.u32);
	// bl 0x822aaf00
	ctx.lr = 0x822C8968;
	sub_822AAF00(ctx, base);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// addi r26,r11,-1780
	ctx.r26.s64 = ctx.r11.s64 + -1780;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822c8b88
	if (!ctx.cr6.eq) goto loc_822C8B88;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r29,-32047
	ctx.r29.s64 = -2100232192;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r30,r11,-196
	ctx.r30.s64 = ctx.r11.s64 + -196;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r27,r11,13500
	ctx.r27.s64 = ctx.r11.s64 + 13500;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r25,r11,4816
	ctx.r25.s64 = ctx.r11.s64 + 4816;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r28,r11,-26252
	ctx.r28.s64 = ctx.r11.s64 + -26252;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r4,r28,-28
	ctx.r4.s64 = ctx.r28.s64 + -28;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x822C89CC;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r28,-24
	ctx.r4.s64 = ctx.r28.s64 + -24;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r24,r11,5884
	ctx.r24.s64 = ctx.r11.s64 + 5884;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x822C8A00;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r28,-20
	ctx.r4.s64 = ctx.r28.s64 + -20;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r23,r11,5868
	ctx.r23.s64 = ctx.r11.s64 + 5868;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x822C8A34;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r28,-16
	ctx.r4.s64 = ctx.r28.s64 + -16;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r22,r11,5848
	ctx.r22.s64 = ctx.r11.s64 + 5848;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x822C8A68;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r26,-4
	ctx.r4.s64 = ctx.r26.s64 + -4;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r21,r11,5828
	ctx.r21.s64 = ctx.r11.s64 + 5828;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x822C8A9C;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r27,r11,13488
	ctx.r27.s64 = ctx.r11.s64 + 13488;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r4,r28,-12
	ctx.r4.s64 = ctx.r28.s64 + -12;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x822C8AD0;
	sub_82351720(ctx, base);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// addi r4,r28,-8
	ctx.r4.s64 = ctx.r28.s64 + -8;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x822C8AFC;
	sub_82351720(ctx, base);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// addi r4,r28,-4
	ctx.r4.s64 = ctx.r28.s64 + -4;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x822C8B28;
	sub_82351720(ctx, base);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x822C8B54;
	sub_82351720(ctx, base);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x822C8B80;
	sub_82351720(ctx, base);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
loc_822C8B88:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x8259bb28
	__restgprlr_20(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_822C9A28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x822C9A30;
	__savegprlr_26(ctx, base);
	// stwu r1,-544(r1)
	ea = -544 + ctx.r1.u32;
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
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lbzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822c9cf0
	if (ctx.cr6.eq) goto loc_822C9CF0;
	// lis r10,-32090
	ctx.r10.s64 = -2103050240;
	// lis r7,3
	ctx.r7.s64 = 196608;
	// addi r10,r10,26752
	ctx.r10.s64 = ctx.r10.s64 + 26752;
	// ori r6,r7,51969
	ctx.r6.u64 = ctx.r7.u64 | 51969;
	// lbzx r5,r10,r6
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r6.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822c9a90
	if (ctx.cr6.eq) goto loc_822C9A90;
	// lis r4,7
	ctx.r4.s64 = 458752;
	// ori r3,r4,16216
	ctx.r3.u64 = ctx.r4.u64 | 16216;
	// lwzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,3488(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3488);
	// cmpwi cr6,r10,12
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 12, ctx.xer);
	// b 0x822c9aa8
	goto loc_822C9AA8;
loc_822C9A90:
	// lis r9,7
	ctx.r9.s64 = 458752;
	// ori r8,r9,16216
	ctx.r8.u64 = ctx.r9.u64 | 16216;
	// lwzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,2384(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 2384);
	// cmpwi cr6,r6,18
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 18, ctx.xer);
loc_822C9AA8:
	// bne cr6,0x822c9cf0
	if (!ctx.cr6.eq) goto loc_822C9CF0;
	// cmpwi cr6,r29,27
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 27, ctx.xer);
	// bne cr6,0x822c9ac4
	if (!ctx.cr6.eq) goto loc_822C9AC4;
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r5,385(r28)
	PPC_STORE_U8(ctx.r28.u32 + 385, ctx.r5.u8);
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_822C9AC4:
	// cmpwi cr6,r29,26
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 26, ctx.xer);
	// bne cr6,0x822c9b20
	if (!ctx.cr6.eq) goto loc_822C9B20;
	// addi r31,r28,368
	ctx.r31.s64 = ctx.r28.s64 + 368;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234df60
	ctx.lr = 0x822C9AD8;
	sub_8234DF60(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822c9cf0
	if (ctx.cr6.eq) goto loc_822C9CF0;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,8192
	ctx.r9.s64 = 8192;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,-26160(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26160);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stfs f0,412(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 412, temp.u32);
	// stw r9,444(r1)
	PPC_STORE_U32(ctx.r1.u32 + 444, ctx.r9.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822C9B10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stb r7,380(r28)
	PPC_STORE_U8(ctx.r28.u32 + 380, ctx.r7.u8);
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_822C9B20:
	// li r26,1
	ctx.r26.s64 = 1;
	// cmpwi cr6,r29,23
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 23, ctx.xer);
	// beq cr6,0x822c9b40
	if (ctx.cr6.eq) goto loc_822C9B40;
	// cmpwi cr6,r29,24
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 24, ctx.xer);
	// beq cr6,0x822c9b40
	if (ctx.cr6.eq) goto loc_822C9B40;
	// cmpwi cr6,r29,25
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 25, ctx.xer);
	// bne cr6,0x822c9c9c
	if (!ctx.cr6.eq) goto loc_822C9C9C;
	// b 0x822c9b48
	goto loc_822C9B48;
loc_822C9B40:
	// cmpwi cr6,r29,25
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 25, ctx.xer);
	// bne cr6,0x822c9b64
	if (!ctx.cr6.eq) goto loc_822C9B64;
loc_822C9B48:
	// lbz r6,384(r28)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r28.u32 + 384);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x822c9cf0
	if (!ctx.cr6.eq) goto loc_822C9CF0;
	// lbz r5,385(r28)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r28.u32 + 385);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822c9cf0
	if (ctx.cr6.eq) goto loc_822C9CF0;
	// stb r26,384(r28)
	PPC_STORE_U8(ctx.r28.u32 + 384, ctx.r26.u8);
loc_822C9B64:
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// lis r9,23109
	ctx.r9.s64 = 1514471424;
	// addi r27,r11,-18560
	ctx.r27.s64 = ctx.r11.s64 + -18560;
	// lis r11,-17505
	ctx.r11.s64 = -1147207680;
	// ori r8,r9,34839
	ctx.r8.u64 = ctx.r9.u64 | 34839;
	// ori r10,r11,63936
	ctx.r10.u64 = ctx.r11.u64 | 63936;
	// lis r4,8
	ctx.r4.s64 = 524288;
	// rldimi r10,r8,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// lis r7,10079
	ctx.r7.s64 = 660537344;
	// lis r5,23113
	ctx.r5.s64 = 1514733568;
	// lis r11,-7852
	ctx.r11.s64 = -514588672;
	// lis r9,20370
	ctx.r9.s64 = 1334968320;
	// ori r3,r4,28284
	ctx.r3.u64 = ctx.r4.u64 | 28284;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// ori r6,r7,63936
	ctx.r6.u64 = ctx.r7.u64 | 63936;
	// ori r4,r5,3027
	ctx.r4.u64 = ctx.r5.u64 | 3027;
	// ori r10,r11,31168
	ctx.r10.u64 = ctx.r11.u64 | 31168;
	// ori r8,r9,25253
	ctx.r8.u64 = ctx.r9.u64 | 25253;
	// rldimi r6,r4,32,0
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r6.u64 & 0xFFFFFFFF);
	// lwzx r3,r27,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r3.u32);
	// rldimi r10,r8,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// std r6,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r6.u64);
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// stw r7,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r7.u32);
	// beq cr6,0x822c9c9c
	if (ctx.cr6.eq) goto loc_822C9C9C;
	// addi r6,r29,-23
	ctx.r6.s64 = ctx.r29.s64 + -23;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// li r5,1
	ctx.r5.s64 = 1;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8234beb0
	ctx.lr = 0x822C9BE8;
	sub_8234BEB0(ctx, base);
	// addi r31,r28,368
	ctx.r31.s64 = ctx.r28.s64 + 368;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234df60
	ctx.lr = 0x822C9BF8;
	sub_8234DF60(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822c9c30
	if (ctx.cr6.eq) goto loc_822C9C30;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,8192
	ctx.r9.s64 = 8192;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,-1528(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1528);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stfs f0,220(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// stw r9,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r9.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822C9C30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822C9C30:
	// lis r6,32
	ctx.r6.s64 = 2097152;
	// stw r30,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r30.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stb r26,265(r1)
	PPC_STORE_U8(ctx.r1.u32 + 265, ctx.r26.u8);
	// li r7,17
	ctx.r7.s64 = 17;
	// ori r5,r6,2116
	ctx.r5.u64 = ctx.r6.u64 | 2116;
	// cmpwi cr6,r29,23
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 23, ctx.xer);
	// lfs f0,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,208(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stb r7,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r7.u8);
	// stw r5,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r5.u32);
	// bne cr6,0x822c9c70
	if (!ctx.cr6.eq) goto loc_822C9C70;
	// lis r4,96
	ctx.r4.s64 = 6291456;
	// stb r26,264(r1)
	PPC_STORE_U8(ctx.r1.u32 + 264, ctx.r26.u8);
	// ori r3,r4,2116
	ctx.r3.u64 = ctx.r4.u64 | 2116;
	// stw r3,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r3.u32);
loc_822C9C70:
	// addis r11,r27,5
	ctx.r11.s64 = ctx.r27.s64 + 327680;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// addi r4,r11,7240
	ctx.r4.s64 = ctx.r11.s64 + 7240;
	// bl 0x82350920
	ctx.lr = 0x822C9C84;
	sub_82350920(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lbz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// stb r9,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r9.u8);
loc_822C9C9C:
	// cmpwi cr6,r29,15
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 15, ctx.xer);
	// bne cr6,0x822c9cb8
	if (!ctx.cr6.eq) goto loc_822C9CB8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2868(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,312(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 312, temp.u32);
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_822C9CB8:
	// cmpwi cr6,r29,8
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 8, ctx.xer);
	// beq cr6,0x822c9cc8
	if (ctx.cr6.eq) goto loc_822C9CC8;
	// cmpwi cr6,r29,16
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 16, ctx.xer);
	// bne cr6,0x822c9cf0
	if (!ctx.cr6.eq) goto loc_822C9CF0;
loc_822C9CC8:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f12,312(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 312);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,352(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 352);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// lfd f13,-4840(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + -4840);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fsel f10,f11,f13,f0
	ctx.f10.f64 = ctx.f11.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// stfs f10,312(r28)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r28.u32 + 312, temp.u32);
loc_822C9CF0:
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_822CABE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x822CABF0;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r10,r11,-18560
	ctx.r10.s64 = ctx.r11.s64 + -18560;
	// lis r11,8
	ctx.r11.s64 = 524288;
	// ori r9,r11,49304
	ctx.r9.u64 = ctx.r11.u64 | 49304;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r8,r11,0,20,20
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x822cac24
	if (!ctx.cr6.eq) goto loc_822CAC24;
	// li r11,0
	ctx.r11.s64 = 0;
loc_822CAC24:
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x822cae28
	if (!ctx.cr6.eq) goto loc_822CAE28;
	// lbz r5,40(r28)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r28.u32 + 40);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x822cae28
	if (!ctx.cr6.eq) goto loc_822CAE28;
	// lwz r5,28(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822cae28
	if (ctx.cr6.eq) goto loc_822CAE28;
	// lis r4,8
	ctx.r4.s64 = 524288;
	// ori r3,r4,28256
	ctx.r3.u64 = ctx.r4.u64 | 28256;
	// lwzx r30,r10,r3
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822cae28
	if (ctx.cr6.eq) goto loc_822CAE28;
	// li r10,15
	ctx.r10.s64 = 15;
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// stb r10,40(r28)
	PPC_STORE_U8(ctx.r28.u32 + 40, ctx.r10.u8);
	// beq cr6,0x822cad84
	if (ctx.cr6.eq) goto loc_822CAD84;
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x822cad84
	if (ctx.cr6.eq) goto loc_822CAD84;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// beq cr6,0x822cad84
	if (ctx.cr6.eq) goto loc_822CAD84;
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// beq cr6,0x822cad84
	if (ctx.cr6.eq) goto loc_822CAD84;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// beq cr6,0x822cad84
	if (ctx.cr6.eq) goto loc_822CAD84;
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// beq cr6,0x822cad84
	if (ctx.cr6.eq) goto loc_822CAD84;
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// beq cr6,0x822cad84
	if (ctx.cr6.eq) goto loc_822CAD84;
	// cmpwi cr6,r11,19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19, ctx.xer);
	// beq cr6,0x822cad84
	if (ctx.cr6.eq) goto loc_822CAD84;
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// beq cr6,0x822cad84
	if (ctx.cr6.eq) goto loc_822CAD84;
	// cmpwi cr6,r11,21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 21, ctx.xer);
	// beq cr6,0x822cad84
	if (ctx.cr6.eq) goto loc_822CAD84;
	// cmpwi cr6,r11,22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 22, ctx.xer);
	// beq cr6,0x822cad84
	if (ctx.cr6.eq) goto loc_822CAD84;
	// cmpwi cr6,r11,23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 23, ctx.xer);
	// beq cr6,0x822cad84
	if (ctx.cr6.eq) goto loc_822CAD84;
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// beq cr6,0x822cad84
	if (ctx.cr6.eq) goto loc_822CAD84;
	// cmpwi cr6,r11,25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 25, ctx.xer);
	// beq cr6,0x822cad84
	if (ctx.cr6.eq) goto loc_822CAD84;
	// cmpwi cr6,r11,26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 26, ctx.xer);
	// beq cr6,0x822cad48
	if (ctx.cr6.eq) goto loc_822CAD48;
	// cmpwi cr6,r11,27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 27, ctx.xer);
	// beq cr6,0x822cad48
	if (ctx.cr6.eq) goto loc_822CAD48;
	// cmpwi cr6,r11,28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 28, ctx.xer);
	// beq cr6,0x822cad48
	if (ctx.cr6.eq) goto loc_822CAD48;
	// cmpwi cr6,r11,29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 29, ctx.xer);
	// beq cr6,0x822cad48
	if (ctx.cr6.eq) goto loc_822CAD48;
	// cmpwi cr6,r11,30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 30, ctx.xer);
	// beq cr6,0x822cad48
	if (ctx.cr6.eq) goto loc_822CAD48;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r8,18
	ctx.r8.s64 = 18;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lfs f3,2868(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f3.f64 = double(temp.f32);
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fmr f2,f3
	ctx.f2.f64 = ctx.f3.f64;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// lfs f0,-26152(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26152);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,1940(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1940);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// bl 0x822bcb48
	ctx.lr = 0x822CAD3C;
	sub_822BCB48(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_822CAD48:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r7,18
	ctx.r7.s64 = 18;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lfs f3,2868(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f3.f64 = double(temp.f32);
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fmr f2,f3
	ctx.f2.f64 = ctx.f3.f64;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// lfs f1,-26152(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26152);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822bcb48
	ctx.lr = 0x822CAD78;
	sub_822BCB48(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_822CAD84:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r29,18
	ctx.r29.s64 = 18;
	// lis r31,-32160
	ctx.r31.s64 = -2107637760;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// lfs f31,2868(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f31.f64 = double(temp.f32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// lfs f1,-26152(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -26152);
	ctx.f1.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// bl 0x822bcb48
	ctx.lr = 0x822CADB8;
	sub_822BCB48(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r11,1940
	ctx.r11.s64 = ctx.r11.s64 + 1940;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,1236
	ctx.r4.s64 = ctx.r11.s64 + 1236;
	// bl 0x8234beb0
	ctx.lr = 0x822CADD0;
	sub_8234BEB0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f1,-26152(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -26152);
	ctx.f1.f64 = double(temp.f32);
	// li r9,1
	ctx.r9.s64 = 1;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x822bcb48
	ctx.lr = 0x822CADFC;
	sub_822BCB48(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f1,-26152(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -26152);
	ctx.f1.f64 = double(temp.f32);
	// li r9,1
	ctx.r9.s64 = 1;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f2,-1664(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1664);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x822bcb48
	ctx.lr = 0x822CAE28;
	sub_822BCB48(ctx, base);
loc_822CAE28:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_822CB2E0) {
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
	// lbz r11,25548(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 25548);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822cb3c4
	if (ctx.cr6.eq) goto loc_822CB3C4;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822befc0
	ctx.lr = 0x822CB308;
	sub_822BEFC0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822befc0
	ctx.lr = 0x822CB314;
	sub_822BEFC0(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822befc0
	ctx.lr = 0x822CB320;
	sub_822BEFC0(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822befc0
	ctx.lr = 0x822CB32C;
	sub_822BEFC0(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822befc0
	ctx.lr = 0x822CB338;
	sub_822BEFC0(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822befc0
	ctx.lr = 0x822CB344;
	sub_822BEFC0(ctx, base);
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822befc0
	ctx.lr = 0x822CB350;
	sub_822BEFC0(ctx, base);
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822befc0
	ctx.lr = 0x822CB35C;
	sub_822BEFC0(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822befc0
	ctx.lr = 0x822CB368;
	sub_822BEFC0(ctx, base);
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822befc0
	ctx.lr = 0x822CB374;
	sub_822BEFC0(ctx, base);
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822befc0
	ctx.lr = 0x822CB380;
	sub_822BEFC0(ctx, base);
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822befc0
	ctx.lr = 0x822CB38C;
	sub_822BEFC0(ctx, base);
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822befc0
	ctx.lr = 0x822CB398;
	sub_822BEFC0(ctx, base);
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822befc0
	ctx.lr = 0x822CB3A4;
	sub_822BEFC0(ctx, base);
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822befc0
	ctx.lr = 0x822CB3B0;
	sub_822BEFC0(ctx, base);
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822befc0
	ctx.lr = 0x822CB3BC;
	sub_822BEFC0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,25548(r31)
	PPC_STORE_U8(ctx.r31.u32 + 25548, ctx.r10.u8);
loc_822CB3C4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822acd18
	ctx.lr = 0x822CB3CC;
	sub_822ACD18(ctx, base);
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
PPC_FUNC_IMPL(__imp__sub_822CB3E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x822CB3E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// bl 0x822c2058
	ctx.lr = 0x822CB400;
	sub_822C2058(ctx, base);
	// addi r3,r31,9456
	ctx.r3.s64 = ctx.r31.s64 + 9456;
	// bl 0x822c8238
	ctx.lr = 0x822CB408;
	sub_822C8238(ctx, base);
	// addi r3,r31,18352
	ctx.r3.s64 = ctx.r31.s64 + 18352;
	// bl 0x822c8870
	ctx.lr = 0x822CB410;
	sub_822C8870(ctx, base);
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// addi r3,r3,-29024
	ctx.r3.s64 = ctx.r3.s64 + -29024;
	// bl 0x822b49b0
	ctx.lr = 0x822CB41C;
	sub_822B49B0(ctx, base);
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// addi r3,r3,-11552
	ctx.r3.s64 = ctx.r3.s64 + -11552;
	// bl 0x822a3010
	ctx.lr = 0x822CB428;
	sub_822A3010(ctx, base);
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// addi r3,r3,-9616
	ctx.r3.s64 = ctx.r3.s64 + -9616;
	// bl 0x822abd30
	ctx.lr = 0x822CB434;
	sub_822ABD30(ctx, base);
	// addis r30,r31,1
	ctx.r30.s64 = ctx.r31.s64 + 65536;
	// addi r30,r30,-9316
	ctx.r30.s64 = ctx.r30.s64 + -9316;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822ad590
	ctx.lr = 0x822CB444;
	sub_822AD590(ctx, base);
	// lbz r11,25(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 25);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822cb45c
	if (!ctx.cr6.eq) goto loc_822CB45C;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,25(r30)
	PPC_STORE_U8(ctx.r30.u32 + 25, ctx.r10.u8);
	// bl 0x8259b890
	ctx.lr = 0x822CB45C;
	sub_8259B890(ctx, base);
loc_822CB45C:
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// addi r3,r3,-8528
	ctx.r3.s64 = ctx.r3.s64 + -8528;
	// bl 0x822adf90
	ctx.lr = 0x822CB468;
	sub_822ADF90(ctx, base);
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// addi r3,r3,-8424
	ctx.r3.s64 = ctx.r3.s64 + -8424;
	// bl 0x822bdf08
	ctx.lr = 0x822CB474;
	sub_822BDF08(ctx, base);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// ori r8,r9,17132
	ctx.r8.u64 = ctx.r9.u64 | 17132;
	// stwx r29,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_822CB488) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r11,56240
	ctx.r10.u64 = ctx.r11.u64 | 56240;
	// lwzx r9,r31,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822cb4b4
	if (ctx.cr6.eq) goto loc_822CB4B4;
	// bl 0x8259b758
	ctx.lr = 0x822CB4B4;
	sub_8259B758(ctx, base);
loc_822CB4B4:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x822CB4C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x822cb4dc
	if (ctx.cr6.eq) goto loc_822CB4DC;
	// li r3,1
	ctx.r3.s64 = 1;
loc_822CB4DC:
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
PPC_FUNC_IMPL(__imp__sub_822CB4F0) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822ad638
	ctx.lr = 0x822CB510;
	sub_822AD638(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r30,1
	ctx.r30.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822cb5bc
	if (ctx.cr6.eq) goto loc_822CB5BC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x822cb564
	if (ctx.cr6.lt) goto loc_822CB564;
	// beq cr6,0x822cb540
	if (ctx.cr6.eq) goto loc_822CB540;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x822cb5bc
	if (!ctx.cr6.lt) goto loc_822CB5BC;
	// stb r30,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r30.u8);
	// b 0x822cb5bc
	goto loc_822CB5BC;
loc_822CB540:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822adba8
	ctx.lr = 0x822CB548;
	sub_822ADBA8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,784(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 784);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// stb r11,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r11.u8);
	// bne cr6,0x822cb5bc
	if (!ctx.cr6.eq) goto loc_822CB5BC;
	// stw r11,784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 784, ctx.r11.u32);
	// b 0x822cb5bc
	goto loc_822CB5BC;
loc_822CB564:
	// lbz r9,25(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 25);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822cb5bc
	if (!ctx.cr6.eq) goto loc_822CB5BC;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x822cb590
	if (ctx.cr6.eq) goto loc_822CB590;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x822cb5bc
	if (!ctx.cr6.eq) goto loc_822CB5BC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822bf560
	ctx.lr = 0x822CB58C;
	sub_822BF560(ctx, base);
	// b 0x822cb5bc
	goto loc_822CB5BC;
loc_822CB590:
	// lwz r8,736(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 736);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822cb5a8
	if (ctx.cr6.eq) goto loc_822CB5A8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822bf560
	ctx.lr = 0x822CB5A4;
	sub_822BF560(ctx, base);
	// b 0x822cb5bc
	goto loc_822CB5BC;
loc_822CB5A8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822cb5bc
	if (ctx.cr6.eq) goto loc_822CB5BC;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r7,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r7.u32);
	// bl 0x8259b798
	ctx.lr = 0x822CB5BC;
	sub_8259B798(ctx, base);
loc_822CB5BC:
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// addi r3,r11,144
	ctx.r3.s64 = ctx.r11.s64 + 144;
	// bl 0x8210f940
	ctx.lr = 0x822CB5CC;
	sub_8210F940(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x822cb5f0
	if (ctx.cr6.eq) goto loc_822CB5F0;
	// lwz r5,784(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 784);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x822cb5f0
	if (!ctx.cr6.eq) goto loc_822CB5F0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 784, ctx.r30.u32);
	// bl 0x822ad778
	ctx.lr = 0x822CB5F0;
	sub_822AD778(ctx, base);
loc_822CB5F0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822adad0
	ctx.lr = 0x822CB5F8;
	sub_822ADAD0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822adc90
	ctx.lr = 0x822CB600;
	sub_822ADC90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822adee8
	ctx.lr = 0x822CB608;
	sub_822ADEE8(ctx, base);
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
PPC_FUNC_IMPL(__imp__sub_822CBB50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baec
	ctx.lr = 0x822CBB58;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r31,1
	ctx.r31.s64 = 1;
	// addi r30,r25,576
	ctx.r30.s64 = ctx.r25.s64 + 576;
loc_822CBB68:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822c0fc0
	ctx.lr = 0x822CBB70;
	sub_822C0FC0(ctx, base);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r30,r30,1424
	ctx.r30.s64 = ctx.r30.s64 + 1424;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge cr6,0x822cbb68
	if (!ctx.cr6.lt) goto loc_822CBB68;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r25,3424
	ctx.r30.s64 = ctx.r25.s64 + 3424;
	// addi r28,r11,-4756
	ctx.r28.s64 = ctx.r11.s64 + -4756;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r29,4
	ctx.r29.s64 = 4;
	// addi r31,r30,1196
	ctx.r31.s64 = ctx.r30.s64 + 1196;
	// addi r26,r11,12848
	ctx.r26.s64 = ctx.r11.s64 + 12848;
	// li r27,0
	ctx.r27.s64 = 0;
loc_822CBBA0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822ae728
	ctx.lr = 0x822CBBA8;
	sub_822AE728(ctx, base);
	// stw r26,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r26.u32);
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// stw r28,-28(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28, ctx.r28.u32);
	// stb r27,-16(r31)
	PPC_STORE_U8(ctx.r31.u32 + -16, ctx.r27.u8);
	// addi r30,r30,1200
	ctx.r30.s64 = ctx.r30.s64 + 1200;
	// stw r28,-12(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12, ctx.r28.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stb r27,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r27.u8);
	// addi r31,r31,1200
	ctx.r31.s64 = ctx.r31.s64 + 1200;
	// bge cr6,0x822cbba0
	if (!ctx.cr6.lt) goto loc_822CBBA0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_822CBBE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baec
	ctx.lr = 0x822CBBE8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r7,r9,9048
	ctx.r7.s64 = ctx.r9.s64 + 9048;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r11,r25,140
	ctx.r11.s64 = ctx.r25.s64 + 140;
	// addi r10,r10,-4756
	ctx.r10.s64 = ctx.r10.s64 + -4756;
	// li r9,0
	ctx.r9.s64 = 0;
loc_822CBC0C:
	// stw r7,-140(r11)
	PPC_STORE_U32(ctx.r11.u32 + -140, ctx.r7.u32);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// stw r10,-28(r11)
	PPC_STORE_U32(ctx.r11.u32 + -28, ctx.r10.u32);
	// stb r9,-16(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16, ctx.r9.u8);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r10,-12(r11)
	PPC_STORE_U32(ctx.r11.u32 + -12, ctx.r10.u32);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stb r9,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r9.u8);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// stb r9,32(r11)
	PPC_STORE_U8(ctx.r11.u32 + 32, ctx.r9.u8);
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// stb r9,48(r11)
	PPC_STORE_U8(ctx.r11.u32 + 48, ctx.r9.u8);
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// stb r9,64(r11)
	PPC_STORE_U8(ctx.r11.u32 + 64, ctx.r9.u8);
	// addi r11,r11,260
	ctx.r11.s64 = ctx.r11.s64 + 260;
	// bge cr6,0x822cbc0c
	if (!ctx.cr6.lt) goto loc_822CBC0C;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r10,r25,520
	ctx.r10.s64 = ctx.r25.s64 + 520;
	// li r11,11
	ctx.r11.s64 = 11;
	// addi r9,r9,9060
	ctx.r9.s64 = ctx.r9.s64 + 9060;
loc_822CBC60:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,160
	ctx.r10.s64 = ctx.r10.s64 + 160;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x822cbc60
	if (!ctx.cr6.lt) goto loc_822CBC60;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r31,r25,2440
	ctx.r31.s64 = ctx.r25.s64 + 2440;
	// addi r29,r11,4720
	ctx.r29.s64 = ctx.r11.s64 + 4720;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r30,11
	ctx.r30.s64 = 11;
	// addi r28,r11,9132
	ctx.r28.s64 = ctx.r11.s64 + 9132;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r27,r11,9104
	ctx.r27.s64 = ctx.r11.s64 + 9104;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r26,r11,12872
	ctx.r26.s64 = ctx.r11.s64 + 12872;
loc_822CBC9C:
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
	// stw r27,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r27.u32);
	// bl 0x822d39e0
	ctx.lr = 0x822CBCAC;
	sub_822D39E0(ctx, base);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// stw r28,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r28.u32);
	// stw r29,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r29.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,480
	ctx.r31.s64 = ctx.r31.s64 + 480;
	// bge cr6,0x822cbc9c
	if (!ctx.cr6.lt) goto loc_822CBC9C;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r25,8200
	ctx.r11.s64 = ctx.r25.s64 + 8200;
	// addi r10,r10,9072
	ctx.r10.s64 = ctx.r10.s64 + 9072;
	// addi r8,r11,24
	ctx.r8.s64 = ctx.r11.s64 + 24;
	// lfs f0,2864(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r7,r11,140
	ctx.r7.s64 = ctx.r11.s64 + 140;
	// addi r9,r9,4768
	ctx.r9.s64 = ctx.r9.s64 + 4768;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// stw r10,116(r11)
	PPC_STORE_U32(ctx.r11.u32 + 116, ctx.r10.u32);
	// stw r9,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r9.u32);
	// stw r10,232(r11)
	PPC_STORE_U32(ctx.r11.u32 + 232, ctx.r10.u32);
	// stfs f0,0(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// stfs f0,4(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// stfs f0,8(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// addi r8,r7,4
	ctx.r8.s64 = ctx.r7.s64 + 4;
	// addi r7,r11,256
	ctx.r7.s64 = ctx.r11.s64 + 256;
	// stfs f0,0(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// stfs f0,4(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// stw r9,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r9.u32);
	// stfs f0,8(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// addi r8,r7,4
	ctx.r8.s64 = ctx.r7.s64 + 4;
	// addi r7,r11,372
	ctx.r7.s64 = ctx.r11.s64 + 372;
	// stw r10,348(r11)
	PPC_STORE_U32(ctx.r11.u32 + 348, ctx.r10.u32);
	// stfs f0,0(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// stfs f0,4(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// stw r9,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r9.u32);
	// stfs f0,8(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// addi r8,r7,4
	ctx.r8.s64 = ctx.r7.s64 + 4;
	// addi r7,r11,488
	ctx.r7.s64 = ctx.r11.s64 + 488;
	// stw r10,464(r11)
	PPC_STORE_U32(ctx.r11.u32 + 464, ctx.r10.u32);
	// stfs f0,0(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// stw r9,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r9.u32);
	// stfs f0,4(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// stfs f0,8(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// addi r8,r11,604
	ctx.r8.s64 = ctx.r11.s64 + 604;
	// stw r10,580(r11)
	PPC_STORE_U32(ctx.r11.u32 + 580, ctx.r10.u32);
	// stfs f0,0(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// stfs f0,4(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// stfs f0,8(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 8, temp.u32);
	// stfs f0,4(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// stfs f0,8(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// stfs f0,12(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 12, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_822CBD90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x822CBD98;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r29,r11,-4756
	ctx.r29.s64 = ctx.r11.s64 + -4756;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r3,r30,1360
	ctx.r3.s64 = ctx.r30.s64 + 1360;
	// stw r29,1304(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1304, ctx.r29.u32);
	// stb r31,1316(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1316, ctx.r31.u8);
	// stw r29,1320(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1320, ctx.r29.u32);
	// stb r31,1332(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1332, ctx.r31.u8);
	// bl 0x822c1060
	ctx.lr = 0x822CBDC4;
	sub_822C1060(ctx, base);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// stw r29,17184(r30)
	PPC_STORE_U32(ctx.r30.u32 + 17184, ctx.r29.u32);
	// addi r11,r30,17280
	ctx.r11.s64 = ctx.r30.s64 + 17280;
	// stb r31,17196(r30)
	PPC_STORE_U8(ctx.r30.u32 + 17196, ctx.r31.u8);
	// addi r8,r9,8940
	ctx.r8.s64 = ctx.r9.s64 + 8940;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r7,r9,8964
	ctx.r7.s64 = ctx.r9.s64 + 8964;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// stw r31,264(r11)
	PPC_STORE_U32(ctx.r11.u32 + 264, ctx.r31.u32);
	// addi r10,r30,17768
	ctx.r10.s64 = ctx.r30.s64 + 17768;
	// stw r31,268(r11)
	PPC_STORE_U32(ctx.r11.u32 + 268, ctx.r31.u32);
	// addi r6,r9,8996
	ctx.r6.s64 = ctx.r9.s64 + 8996;
	// stw r31,272(r11)
	PPC_STORE_U32(ctx.r11.u32 + 272, ctx.r31.u32);
	// addi r9,r10,112
	ctx.r9.s64 = ctx.r10.s64 + 112;
	// stw r5,276(r11)
	PPC_STORE_U32(ctx.r11.u32 + 276, ctx.r5.u32);
	// stw r31,280(r11)
	PPC_STORE_U32(ctx.r11.u32 + 280, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r31,284(r11)
	PPC_STORE_U8(ctx.r11.u32 + 284, ctx.r31.u8);
	// stb r31,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r31.u8);
	// stw r29,368(r11)
	PPC_STORE_U32(ctx.r11.u32 + 368, ctx.r29.u32);
	// stb r31,380(r11)
	PPC_STORE_U8(ctx.r11.u32 + 380, ctx.r31.u8);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// stw r7,56(r10)
	PPC_STORE_U32(ctx.r10.u32 + 56, ctx.r7.u32);
	// stw r6,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r6.u32);
	// stw r29,64(r9)
	PPC_STORE_U32(ctx.r9.u32 + 64, ctx.r29.u32);
	// stb r31,76(r9)
	PPC_STORE_U8(ctx.r9.u32 + 76, ctx.r31.u8);
	// stb r31,236(r10)
	PPC_STORE_U8(ctx.r10.u32 + 236, ctx.r31.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_822CBE40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baec
	ctx.lr = 0x822CBE48;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r28,r11,9104
	ctx.r28.s64 = ctx.r11.s64 + 9104;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// addi r27,r11,8924
	ctx.r27.s64 = ctx.r11.s64 + 8924;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r29,63
	ctx.r29.s64 = 63;
	// addi r26,r11,12884
	ctx.r26.s64 = ctx.r11.s64 + 12884;
loc_822CBE70:
	// lis r11,-32214
	ctx.r11.s64 = -2111176704;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// addi r30,r31,5168
	ctx.r30.s64 = ctx.r31.s64 + 5168;
	// addi r6,r11,-600
	ctx.r6.s64 = ctx.r11.s64 + -600;
	// li r5,127
	ctx.r5.s64 = 127;
	// li r4,40
	ctx.r4.s64 = 40;
	// addi r3,r30,-5144
	ctx.r3.s64 = ctx.r30.s64 + -5144;
	// bl 0x82097220
	ctx.lr = 0x822CBE90;
	sub_82097220(ctx, base);
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
	// addi r31,r31,5232
	ctx.r31.s64 = ctx.r31.s64 + 5232;
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge cr6,0x822cbe70
	if (!ctx.cr6.lt) goto loc_822CBE70;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_822CBEB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baec
	ctx.lr = 0x822CBEC0;
	__savegprlr_25(ctx, base);
	// stfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,-21272
	ctx.r30.s64 = ctx.r11.s64 + -21272;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8210cf48
	ctx.lr = 0x822CBEE8;
	sub_8210CF48(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8210d3f0
	ctx.lr = 0x822CBEF8;
	sub_8210D3F0(ctx, base);
	// addis r27,r31,9
	ctx.r27.s64 = ctx.r31.s64 + 589824;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r27,r27,9312
	ctx.r27.s64 = ctx.r27.s64 + 9312;
	// li r8,2048
	ctx.r8.s64 = 2048;
	// lis r6,208
	ctx.r6.s64 = 13631488;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addis r7,r5,-208
	ctx.r7.s64 = ctx.r5.s64 + -13631488;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8234c908
	ctx.lr = 0x822CBF1C;
	sub_8234C908(ctx, base);
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r27,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r27,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r27.u32);
	// lwz r11,-20936(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20936);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// bl 0x823506d0
	ctx.lr = 0x822CBF3C;
	sub_823506D0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8234ca08
	ctx.lr = 0x822CBF44;
	sub_8234CA08(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lis r7,7
	ctx.r7.s64 = 458752;
	// li r30,0
	ctx.r30.s64 = 0;
	// ori r5,r7,57697
	ctx.r5.u64 = ctx.r7.u64 | 57697;
	// lfs f31,2864(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2864);
	ctx.f31.f64 = double(temp.f32);
	// addi r9,r1,208
	ctx.r9.s64 = ctx.r1.s64 + 208;
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lis r7,-32047
	ctx.r7.s64 = -2100232192;
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// ld r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// addi r4,r7,13232
	ctx.r4.s64 = ctx.r7.s64 + 13232;
	// stbx r30,r31,r5
	PPC_STORE_U8(ctx.r31.u32 + ctx.r5.u32, ctx.r30.u8);
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// ld r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// std r3,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r3.u64);
	// addi r8,r1,224
	ctx.r8.s64 = ctx.r1.s64 + 224;
	// std r11,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r11.u64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// ld r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// li r7,22
	ctx.r7.s64 = 22;
	// std r4,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r4.u64);
	// lfs f30,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f30.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// std r10,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r10.u64);
	// stfs f30,244(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// stw r30,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r30.u32);
	// stfs f31,248(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// stw r30,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r30.u32);
	// stfs f31,256(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// stb r30,304(r1)
	PPC_STORE_U8(ctx.r1.u32 + 304, ctx.r30.u8);
	// lfs f0,13828(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 13828);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f0,252(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// stb r30,305(r1)
	PPC_STORE_U8(ctx.r1.u32 + 305, ctx.r30.u8);
	// stb r30,313(r1)
	PPC_STORE_U8(ctx.r1.u32 + 313, ctx.r30.u8);
	// stb r30,312(r1)
	PPC_STORE_U8(ctx.r1.u32 + 312, ctx.r30.u8);
	// lfs f0,-1648(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1648);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f0,276(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 276, temp.u32);
	// lfs f0,-1660(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1660);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,272(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 272, temp.u32);
	// lis r9,881
	ctx.r9.s64 = 57737216;
	// stfs f31,268(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 268, temp.u32);
	// stfs f30,260(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// stb r30,306(r1)
	PPC_STORE_U8(ctx.r1.u32 + 306, ctx.r30.u8);
	// ori r8,r9,65407
	ctx.r8.u64 = ctx.r9.u64 | 65407;
	// stfs f31,284(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 284, temp.u32);
	// stfs f31,280(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 280, temp.u32);
	// stb r30,307(r1)
	PPC_STORE_U8(ctx.r1.u32 + 307, ctx.r30.u8);
	// stfs f30,308(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 308, temp.u32);
	// stw r8,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r8.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_822CC034:
	// ld r7,0(r6)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// addi r6,r6,8
	ctx.r6.s64 = ctx.r6.s64 + 8;
	// std r7,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r7.u64);
	// addi r5,r5,8
	ctx.r5.s64 = ctx.r5.s64 + 8;
	// bdnz 0x822cc034
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822CC034;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// addi r29,r11,4176
	ctx.r29.s64 = ctx.r11.s64 + 4176;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82349730
	ctx.lr = 0x822CC058;
	sub_82349730(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r3,r29,192
	ctx.r3.s64 = ctx.r29.s64 + 192;
	// stw r11,164(r29)
	PPC_STORE_U32(ctx.r29.u32 + 164, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,176(r29)
	PPC_STORE_U8(ctx.r29.u32 + 176, ctx.r11.u8);
	// bl 0x82349730
	ctx.lr = 0x822CC070;
	sub_82349730(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,356(r29)
	PPC_STORE_U32(ctx.r29.u32 + 356, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,368(r29)
	PPC_STORE_U8(ctx.r29.u32 + 368, ctx.r11.u8);
	// bl 0x822a1d10
	ctx.lr = 0x822CC08C;
	sub_822A1D10(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r29,192
	ctx.r3.s64 = ctx.r29.s64 + 192;
	// bl 0x822a1d10
	ctx.lr = 0x822CC098;
	sub_822A1D10(ctx, base);
	// addis r28,r31,8
	ctx.r28.s64 = ctx.r31.s64 + 524288;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r28,r28,-7996
	ctx.r28.s64 = ctx.r28.s64 + -7996;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r6,0(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822CC0BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r5,r29,192
	ctx.r5.s64 = ctx.r29.s64 + 192;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822CC0D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x822CC0F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r6,7
	ctx.r6.s64 = 458752;
	// addis r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 524288;
	// ori r5,r6,11168
	ctx.r5.u64 = ctx.r6.u64 | 11168;
	// addi r3,r3,-7824
	ctx.r3.s64 = ctx.r3.s64 + -7824;
	// stwx r28,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r28.u32);
	// bl 0x822cb3e0
	ctx.lr = 0x822CC108;
	sub_822CB3E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x822a0120
	ctx.lr = 0x822CC114;
	sub_822A0120(ctx, base);
	// lis r11,9
	ctx.r11.s64 = 589824;
	// fmr f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f1.f64;
	// lis r7,9
	ctx.r7.s64 = 589824;
	// ori r10,r11,9400
	ctx.r10.u64 = ctx.r11.u64 | 9400;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// ori r6,r7,9408
	ctx.r6.u64 = ctx.r7.u64 | 9408;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// lis r4,9
	ctx.r4.s64 = 589824;
	// lis r9,9
	ctx.r9.s64 = 589824;
	// lis r5,9
	ctx.r5.s64 = 589824;
	// stwx r30,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r30.u32);
	// lfs f0,-4804(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4804);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// ori r8,r9,9404
	ctx.r8.u64 = ctx.r9.u64 | 9404;
	// stwx r30,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r30.u32);
	// ori r3,r4,9420
	ctx.r3.u64 = ctx.r4.u64 | 9420;
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// addi r4,r11,-27228
	ctx.r4.s64 = ctx.r11.s64 + -27228;
	// ori r9,r5,9412
	ctx.r9.u64 = ctx.r5.u64 | 9412;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stwx r30,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r30.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,8(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stwx r30,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r30.u32);
	// fctidz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f12.f64));
	// stfd f11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f11.u64);
	// lbz r6,103(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 103);
	// stbx r6,r31,r3
	PPC_STORE_U8(ctx.r31.u32 + ctx.r3.u32, ctx.r6.u8);
	// addi r5,r11,13808
	ctx.r5.s64 = ctx.r11.s64 + 13808;
	// lwz r6,12(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lis r11,-32047
	ctx.r11.s64 = -2100232192;
	// lwz r11,20160(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x822CC1A4;
	sub_82351720(ctx, base);
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r4,2
	ctx.r4.s64 = 2;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// addis r26,r31,5
	ctx.r26.s64 = ctx.r31.s64 + 327680;
	// addis r25,r31,8
	ctx.r25.s64 = ctx.r31.s64 + 524288;
	// addi r29,r11,2432
	ctx.r29.s64 = ctx.r11.s64 + 2432;
	// stw r5,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r5.u32);
	// stw r4,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r4.u32);
	// addi r26,r26,7240
	ctx.r26.s64 = ctx.r26.s64 + 7240;
	// addi r25,r25,-7980
	ctx.r25.s64 = ctx.r25.s64 + -7980;
	// li r28,3
	ctx.r28.s64 = 3;
loc_822CC1D0:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82348f60
	ctx.lr = 0x822CC1D8;
	sub_82348F60(ctx, base);
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82348f60
	ctx.lr = 0x822CC1E4;
	sub_82348F60(ctx, base);
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82349cd8
	ctx.lr = 0x822CC1F4;
	sub_82349CD8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82349d68
	ctx.lr = 0x822CC200;
	sub_82349D68(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82348830
	ctx.lr = 0x822CC210;
	sub_82348830(ctx, base);
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// addi r29,r29,496
	ctx.r29.s64 = ctx.r29.s64 + 496;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x822cc1d0
	if (!ctx.cr6.eq) goto loc_822CC1D0;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// addi r11,r11,-3576
	ctx.r11.s64 = ctx.r11.s64 + -3576;
	// lis r3,7
	ctx.r3.s64 = 458752;
	// ori r9,r3,57704
	ctx.r9.u64 = ctx.r3.u64 | 57704;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// stb r10,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r10.u8);
	// stb r10,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r10.u8);
	// stb r10,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r10.u8);
	// stb r10,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
	// stb r10,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r10.u8);
	// stb r10,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r10.u8);
	// stb r10,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r10.u8);
	// stb r10,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r10.u8);
	// stb r10,9(r11)
	PPC_STORE_U8(ctx.r11.u32 + 9, ctx.r10.u8);
	// stb r10,10(r11)
	PPC_STORE_U8(ctx.r11.u32 + 10, ctx.r10.u8);
	// stb r10,11(r11)
	PPC_STORE_U8(ctx.r11.u32 + 11, ctx.r10.u8);
	// stb r10,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r10.u8);
	// stb r10,13(r11)
	PPC_STORE_U8(ctx.r11.u32 + 13, ctx.r10.u8);
	// stwx r30,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r30.u32);
	// bl 0x822a0038
	ctx.lr = 0x822CC278;
	sub_822A0038(ctx, base);
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_822CC288) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x822CC290;
	__savegprlr_28(ctx, base);
	// stwu r1,-640(r1)
	ea = -640 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r7,4
	ctx.r7.s64 = 262144;
	// lis r6,8
	ctx.r6.s64 = 524288;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8234c720
	ctx.lr = 0x822CC2AC;
	sub_8234C720(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822cc2c4
	if (!ctx.cr6.eq) goto loc_822CC2C4;
loc_822CC2B8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_822CC2C4:
	// addis r30,r31,9
	ctx.r30.s64 = ctx.r31.s64 + 589824;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r30,r30,9400
	ctx.r30.s64 = ctx.r30.s64 + 9400;
	// addi r29,r11,-27236
	ctx.r29.s64 = ctx.r11.s64 + -27236;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r28,r11,13328
	ctx.r28.s64 = ctx.r11.s64 + 13328;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822cc31c
	if (!ctx.cr6.eq) goto loc_822CC31C;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r6,-4(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259da78
	ctx.lr = 0x822CC2FC;
	sub_8259DA78(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x8234c2f8
	ctx.lr = 0x822CC310;
	sub_8234C2F8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// beq cr6,0x822cc2b8
	if (ctx.cr6.eq) goto loc_822CC2B8;
loc_822CC31C:
	// addis r30,r31,9
	ctx.r30.s64 = ctx.r31.s64 + 589824;
	// addi r30,r30,9404
	ctx.r30.s64 = ctx.r30.s64 + 9404;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822cc364
	if (!ctx.cr6.eq) goto loc_822CC364;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x8259da78
	ctx.lr = 0x822CC344;
	sub_8259DA78(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x8234c2f8
	ctx.lr = 0x822CC358;
	sub_8234C2F8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// beq cr6,0x822cc2b8
	if (ctx.cr6.eq) goto loc_822CC2B8;
loc_822CC364:
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x822CC378;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,26080
	ctx.r4.s64 = ctx.r11.s64 + 26080;
	// bl 0x822c1388
	ctx.lr = 0x822CC388;
	sub_822C1388(ctx, base);
	// lis r6,7
	ctx.r6.s64 = 458752;
	// li r4,28
	ctx.r4.s64 = 28;
	// ori r5,r6,57692
	ctx.r5.u64 = ctx.r6.u64 | 57692;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r3,r11,-18560
	ctx.r3.s64 = ctx.r11.s64 + -18560;
	// stwx r4,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r4.u32);
	// bl 0x822ae800
	ctx.lr = 0x822CC3A4;
	sub_822AE800(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_822CE270) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,15812(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 15812);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2864(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// lwz r10,6944(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6944);
	// cmplwi cr6,r10,14
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// mulli r9,r10,112
	ctx.r9.s64 = ctx.r10.s64 * 112;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r3,r9,4880
	ctx.r3.s64 = ctx.r9.s64 + 4880;
	// stw r10,6944(r11)
	PPC_STORE_U32(ctx.r11.u32 + 6944, ctx.r10.u32);
	// b 0x822c85d0
	sub_822C85D0(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_822D0138) {
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
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// addi r3,r3,-9316
	ctx.r3.s64 = ctx.r3.s64 + -9316;
	// bl 0x822cb4f0
	ctx.lr = 0x822D0158;
	sub_822CB4F0(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d017c
	if (ctx.cr6.eq) goto loc_822D017C;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822D0178;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x822d0180
	goto loc_822D0180;
loc_822D017C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822D0180:
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822d01a0
	if (ctx.cr6.eq) goto loc_822D01A0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x822D01A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822D01A0:
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
PPC_FUNC_IMPL(__imp__sub_822D08B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r10,r3,404
	ctx.r10.s64 = ctx.r3.s64 + 404;
	// addi r9,r11,13796
	ctx.r9.s64 = ctx.r11.s64 + 13796;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r8,r11,8848
	ctx.r8.s64 = ctx.r11.s64 + 8848;
	// li r11,191
	ctx.r11.s64 = 191;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r9,r9,12784
	ctx.r9.s64 = ctx.r9.s64 + 12784;
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
loc_822D08D8:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,696
	ctx.r10.s64 = ctx.r10.s64 + 696;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x822d08d8
	if (!ctx.cr6.lt) goto loc_822D08D8;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addis r10,r3,2
	ctx.r10.s64 = ctx.r3.s64 + 131072;
	// addi r8,r11,14400
	ctx.r8.s64 = ctx.r11.s64 + 14400;
	// addi r10,r10,3988
	ctx.r10.s64 = ctx.r10.s64 + 3988;
	// li r11,31
	ctx.r11.s64 = 31;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
loc_822D0904:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,696
	ctx.r10.s64 = ctx.r10.s64 + 696;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x822d0904
	if (!ctx.cr6.lt) goto loc_822D0904;
	// addis r10,r3,2
	ctx.r10.s64 = ctx.r3.s64 + 131072;
	// li r11,31
	ctx.r11.s64 = 31;
	// addi r10,r10,26260
	ctx.r10.s64 = ctx.r10.s64 + 26260;
loc_822D0924:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,696
	ctx.r10.s64 = ctx.r10.s64 + 696;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x822d0924
	if (!ctx.cr6.lt) goto loc_822D0924;
	// addis r11,r3,3
	ctx.r11.s64 = ctx.r3.s64 + 196608;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// addi r11,r11,-17004
	ctx.r11.s64 = ctx.r11.s64 + -17004;
	// ori r8,r10,49924
	ctx.r8.u64 = ctx.r10.u64 | 49924;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r9,696(r11)
	PPC_STORE_U32(ctx.r11.u32 + 696, ctx.r9.u32);
	// stwx r7,r3,r8
	PPC_STORE_U32(ctx.r3.u32 + ctx.r8.u32, ctx.r7.u32);
	// blr 
	return;
}
PPC_FUNC_IMPL(__imp__sub_822D0960) {
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
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,14412
	ctx.r11.s64 = ctx.r11.s64 + 14412;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822cbb50
	ctx.lr = 0x822D0988;
	sub_822CBB50(ctx, base);
	// addi r3,r31,9456
	ctx.r3.s64 = ctx.r31.s64 + 9456;
	// bl 0x822cbbe0
	ctx.lr = 0x822D0990;
	sub_822CBBE0(ctx, base);
	// addi r3,r31,18352
	ctx.r3.s64 = ctx.r31.s64 + 18352;
	// bl 0x822cbd90
	ctx.lr = 0x822D0998;
	sub_822CBD90(ctx, base);
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// addi r3,r3,-29024
	ctx.r3.s64 = ctx.r3.s64 + -29024;
	// bl 0x822c0ef0
	ctx.lr = 0x822D09A4;
	sub_822C0EF0(ctx, base);
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// addi r3,r3,-11552
	ctx.r3.s64 = ctx.r3.s64 + -11552;
	// bl 0x822ae620
	ctx.lr = 0x822D09B0;
	sub_822AE620(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r11,-4756
	ctx.r7.s64 = ctx.r11.s64 + -4756;
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// addis r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 65536;
	// addi r11,r11,-9604
	ctx.r11.s64 = ctx.r11.s64 + -9604;
	// li r8,40
	ctx.r8.s64 = 40;
	// addi r9,r9,-9080
	ctx.r9.s64 = ctx.r9.s64 + -9080;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// stb r10,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r10.u8);
	// stw r7,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r7.u32);
	// stb r10,28(r11)
	PPC_STORE_U8(ctx.r11.u32 + 28, ctx.r10.u8);
loc_822D09E0:
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
	// bge cr6,0x822d09e0
	if (!ctx.cr6.lt) goto loc_822D09E0;
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-8444
	ctx.r11.s64 = ctx.r11.s64 + -8444;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// stb r10,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r10.u8);
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
PPC_FUNC_IMPL(__imp__sub_822D0A28) {
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
	// li r9,0
	ctx.r9.s64 = 0;
	// addis r31,r30,8
	ctx.r31.s64 = ctx.r30.s64 + 524288;
	// li r10,57
	ctx.r10.s64 = 57;
	// addi r31,r31,-7824
	ctx.r31.s64 = ctx.r31.s64 + -7824;
	// addi r11,r31,18352
	ctx.r11.s64 = ctx.r31.s64 + 18352;
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// addi r3,r3,-29024
	ctx.r3.s64 = ctx.r3.s64 + -29024;
	// stw r9,17568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 17568, ctx.r9.u32);
	// stw r10,17280(r11)
	PPC_STORE_U32(ctx.r11.u32 + 17280, ctx.r10.u32);
	// stw r10,18096(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18096, ctx.r10.u32);
	// bl 0x822b5df0
	ctx.lr = 0x822D0A70;
	sub_822B5DF0(ctx, base);
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// addi r3,r3,-8424
	ctx.r3.s64 = ctx.r3.s64 + -8424;
	// bl 0x822cb2e0
	ctx.lr = 0x822D0A7C;
	sub_822CB2E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823497c8
	ctx.lr = 0x822D0A84;
	sub_823497C8(ctx, base);
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

#include "graphics_dispatch.h"
#include "ppc_recomp_shared.h"
__attribute__((alias("__imp__sub_822AD7F0"))) PPC_WEAK_FUNC(sub_822AD7F0);
__attribute__((alias("__imp__sub_822AD8C8"))) PPC_WEAK_FUNC(sub_822AD8C8);
__attribute__((alias("__imp__sub_822AD928"))) PPC_WEAK_FUNC(sub_822AD928);
__attribute__((alias("__imp__sub_822AD9F8"))) PPC_WEAK_FUNC(sub_822AD9F8);
__attribute__((alias("__imp__sub_822ADAD0"))) PPC_WEAK_FUNC(sub_822ADAD0);
__attribute__((alias("__imp__sub_822ADBA8"))) PPC_WEAK_FUNC(sub_822ADBA8);
__attribute__((alias("__imp__sub_822ADC90"))) PPC_WEAK_FUNC(sub_822ADC90);
__attribute__((alias("__imp__sub_822ADD28"))) PPC_WEAK_FUNC(sub_822ADD28);
__attribute__((alias("__imp__sub_822ADD70"))) PPC_WEAK_FUNC(sub_822ADD70);
__attribute__((alias("__imp__sub_822ADD90"))) PPC_WEAK_FUNC(sub_822ADD90);
__attribute__((alias("__imp__sub_822ADE70"))) PPC_WEAK_FUNC(sub_822ADE70);
__attribute__((alias("__imp__sub_822ADEE8"))) PPC_WEAK_FUNC(sub_822ADEE8);
__attribute__((alias("__imp__sub_822ADF90"))) PPC_WEAK_FUNC(sub_822ADF90);
__attribute__((alias("__imp__sub_822AE210"))) PPC_WEAK_FUNC(sub_822AE210);
__attribute__((alias("__imp__sub_822AE530"))) PPC_WEAK_FUNC(sub_822AE530);
__attribute__((alias("__imp__sub_822AE5C0"))) PPC_WEAK_FUNC(sub_822AE5C0);
__attribute__((alias("__imp__sub_822AE620"))) PPC_WEAK_FUNC(sub_822AE620);
__attribute__((alias("__imp__sub_822AE728"))) PPC_WEAK_FUNC(sub_822AE728);
__attribute__((alias("__imp__sub_822AE800"))) PPC_WEAK_FUNC(sub_822AE800);
__attribute__((alias("__imp__sub_822AE8F0"))) PPC_WEAK_FUNC(sub_822AE8F0);
__attribute__((alias("__imp__sub_822AE9B8"))) PPC_WEAK_FUNC(sub_822AE9B8);
__attribute__((alias("__imp__sub_822AE9F0"))) PPC_WEAK_FUNC(sub_822AE9F0);
__attribute__((alias("__imp__sub_822AEA28"))) PPC_WEAK_FUNC(sub_822AEA28);
__attribute__((alias("__imp__sub_822AF9B0"))) PPC_WEAK_FUNC(sub_822AF9B0);
__attribute__((alias("__imp__sub_822B1078"))) PPC_WEAK_FUNC(sub_822B1078);
__attribute__((alias("__imp__sub_822B1238"))) PPC_WEAK_FUNC(sub_822B1238);
__attribute__((alias("__imp__sub_822B1848"))) PPC_WEAK_FUNC(sub_822B1848);
__attribute__((alias("__imp__sub_822B1DC8"))) PPC_WEAK_FUNC(sub_822B1DC8);
__attribute__((alias("__imp__sub_822B2570"))) PPC_WEAK_FUNC(sub_822B2570);
__attribute__((alias("__imp__sub_822B26D0"))) PPC_WEAK_FUNC(sub_822B26D0);
__attribute__((alias("__imp__sub_822B2960"))) PPC_WEAK_FUNC(sub_822B2960);
__attribute__((alias("__imp__sub_822B2C20"))) PPC_WEAK_FUNC(sub_822B2C20);
__attribute__((alias("__imp__sub_822B35D0"))) PPC_WEAK_FUNC(sub_822B35D0);
__attribute__((alias("__imp__sub_822B3848"))) PPC_WEAK_FUNC(sub_822B3848);
__attribute__((alias("__imp__sub_822B3990"))) PPC_WEAK_FUNC(sub_822B3990);
__attribute__((alias("__imp__sub_822B49B0"))) PPC_WEAK_FUNC(sub_822B49B0);
__attribute__((alias("__imp__sub_822B5DF0"))) PPC_WEAK_FUNC(sub_822B5DF0);
__attribute__((alias("__imp__sub_822B6120"))) PPC_WEAK_FUNC(sub_822B6120);
__attribute__((alias("__imp__sub_822B99D8"))) PPC_WEAK_FUNC(sub_822B99D8);
__attribute__((alias("__imp__sub_822B9A68"))) PPC_WEAK_FUNC(sub_822B9A68);
__attribute__((alias("__imp__sub_822B9B08"))) PPC_WEAK_FUNC(sub_822B9B08);
__attribute__((alias("__imp__sub_822BAD98"))) PPC_WEAK_FUNC(sub_822BAD98);
__attribute__((alias("__imp__sub_822BB310"))) PPC_WEAK_FUNC(sub_822BB310);
__attribute__((alias("__imp__sub_822BBCA0"))) PPC_WEAK_FUNC(sub_822BBCA0);
__attribute__((alias("__imp__sub_822BBE28"))) PPC_WEAK_FUNC(sub_822BBE28);
__attribute__((alias("__imp__sub_822BC0B0"))) PPC_WEAK_FUNC(sub_822BC0B0);
__attribute__((alias("__imp__sub_822BC1D0"))) PPC_WEAK_FUNC(sub_822BC1D0);
__attribute__((alias("__imp__sub_822BC2B8"))) PPC_WEAK_FUNC(sub_822BC2B8);
__attribute__((alias("__imp__sub_822BCB48"))) PPC_WEAK_FUNC(sub_822BCB48);
PPC_FUNC_IMPL(__imp__sub_822AD7F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// blr 
	return;
}
PPC_FUNC_IMPL(__imp__sub_822AD8C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x822ad8dc
	if (!ctx.cr6.eq) goto loc_822AD8DC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_822AD8DC:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}
PPC_FUNC_IMPL(__imp__sub_822AD928) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae8
	ctx.lr = 0x822AD930;
	__savegprlr_24(ctx, base);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r11,8664
	ctx.r11.s64 = ctx.r11.s64 + 8664;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r27,r30,4
	ctx.r27.s64 = ctx.r30.s64 + 4;
	// addi r26,r30,8
	ctx.r26.s64 = ctx.r30.s64 + 8;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r10,r10,8644
	ctx.r10.s64 = ctx.r10.s64 + 8644;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r9,r9,8628
	ctx.r9.s64 = ctx.r9.s64 + 8628;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// li r24,0
	ctx.r24.s64 = 0;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// addi r28,r3,1
	ctx.r28.s64 = ctx.r3.s64 + 1;
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// addi r31,r1,84
	ctx.r31.s64 = ctx.r1.s64 + 84;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// li r29,3
	ctx.r29.s64 = 3;
	// addi r25,r11,23504
	ctx.r25.s64 = ctx.r11.s64 + 23504;
loc_822AD988:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r5,-4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8259da78
	ctx.lr = 0x822AD99C;
	sub_8259DA78(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8210fcf8
	ctx.lr = 0x822AD9A8;
	sub_8210FCF8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// bne cr6,0x822ad988
	if (!ctx.cr6.eq) goto loc_822AD988;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822ad9e8
	if (ctx.cr6.eq) goto loc_822AD9E8;
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822ad9e8
	if (ctx.cr6.eq) goto loc_822AD9E8;
	// lwz r8,0(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x822ad9ec
	if (!ctx.cr6.eq) goto loc_822AD9EC;
loc_822AD9E8:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
loc_822AD9EC:
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_822AD9F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae4
	ctx.lr = 0x822ADA00;
	__savegprlr_23(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// lwz r11,732(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x822adac4
	if (!ctx.cr6.gt) goto loc_822ADAC4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r30,r23,28
	ctx.r30.s64 = ctx.r23.s64 + 28;
	// addi r26,r11,8724
	ctx.r26.s64 = ctx.r11.s64 + 8724;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r31,r23,236
	ctx.r31.s64 = ctx.r23.s64 + 236;
	// addi r28,r11,16128
	ctx.r28.s64 = ctx.r11.s64 + 16128;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r24,1
	ctx.r24.s64 = 1;
	// addi r25,r11,8680
	ctx.r25.s64 = ctx.r11.s64 + 8680;
loc_822ADA40:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825af6c8
	ctx.lr = 0x822ADA50;
	sub_825AF6C8(ctx, base);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r24,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r24.u32);
	// stw r27,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r27.u32);
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// bl 0x8259b728
	ctx.lr = 0x822ADAA0;
	sub_8259B728(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822adaac
	if (ctx.cr6.eq) goto loc_822ADAAC;
	// stw r27,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r27.u32);
loc_822ADAAC:
	// lwz r10,732(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 732);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x822ada40
	if (ctx.cr6.lt) goto loc_822ADA40;
loc_822ADAC4:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x8259bb34
	__restgprlr_23(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_822ADAD0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32110
	ctx.r10.s64 = -2104360960;
	// addi r30,r10,3336
	ctx.r30.s64 = ctx.r10.s64 + 3336;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x822adb10
	if (ctx.cr6.eq) goto loc_822ADB10;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x822adb4c
	if (ctx.cr6.eq) goto loc_822ADB4C;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x822adb80
	if (ctx.cr6.eq) goto loc_822ADB80;
	// b 0x822adb90
	goto loc_822ADB90;
loc_822ADB10:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r11,748(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 748);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f0,-1608(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -1608);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r6,244(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 244);
	// lwz r5,236(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	// lwz r4,240(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	// bl 0x82142a58
	ctx.lr = 0x822ADB44;
	sub_82142A58(ctx, base);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
loc_822ADB4C:
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// addi r3,r11,92
	ctx.r3.s64 = ctx.r11.s64 + 92;
	// bl 0x8210b3c8
	ctx.lr = 0x822ADB5C;
	sub_8210B3C8(ctx, base);
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// lfs f13,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x822adb90
	if (ctx.cr6.gt) goto loc_822ADB90;
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
loc_822ADB80:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82142a78
	ctx.lr = 0x822ADB88;
	sub_82142A78(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
loc_822ADB90:
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
PPC_FUNC_IMPL(__imp__sub_822ADBA8) {
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
	// lbz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822adc78
	if (!ctx.cr6.eq) goto loc_822ADC78;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1224(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1224);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x822adbf8
	if (ctx.cr6.gt) goto loc_822ADBF8;
	// bso cr6,0x822adbf8
	if (ctx.cr6.so) goto loc_822ADBF8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,-4824(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4824);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x822adbf8
	if (ctx.cr6.lt) goto loc_822ADBF8;
	// li r11,1
	ctx.r11.s64 = 1;
	// bns cr6,0x822adbfc
	if (!ctx.cr6.so) goto loc_822ADBFC;
loc_822ADBF8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822ADBFC:
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822adc78
	if (!ctx.cr6.eq) goto loc_822ADC78;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259b810
	ctx.lr = 0x822ADC10;
	sub_8259B810(ctx, base);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// beq cr6,0x822adc24
	if (ctx.cr6.eq) goto loc_822ADC24;
	// li r11,0
	ctx.r11.s64 = 0;
loc_822ADC24:
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x822adc78
	if (ctx.cr6.eq) goto loc_822ADC78;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x822adc70
	if (ctx.cr6.eq) goto loc_822ADC70;
	// addi r5,r11,-2
	ctx.r5.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r5,2
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 2, ctx.xer);
	// bgt cr6,0x822adc78
	if (ctx.cr6.gt) goto loc_822ADC78;
	// lis r11,-32110
	ctx.r11.s64 = -2104360960;
	// addi r3,r11,3336
	ctx.r3.s64 = ctx.r11.s64 + 3336;
	// bl 0x82142a78
	ctx.lr = 0x822ADC54;
	sub_82142A78(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r4,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r4.u32);
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
loc_822ADC70:
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
loc_822ADC78:
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
PPC_FUNC_IMPL(__imp__sub_822ADC90) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82348b98
	ctx.lr = 0x822ADCB0;
	sub_82348B98(ctx, base);
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fmuls f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,1224(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1224);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f12,f31
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f31.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x822adcf0
	if (ctx.cr6.gt) goto loc_822ADCF0;
	// bso cr6,0x822adcf0
	if (ctx.cr6.so) goto loc_822ADCF0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,-4824(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4824);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x822adcf0
	if (ctx.cr6.lt) goto loc_822ADCF0;
	// li r11,1
	ctx.r11.s64 = 1;
	// bns cr6,0x822adcf4
	if (!ctx.cr6.so) goto loc_822ADCF4;
loc_822ADCF0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822ADCF4:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822add0c
	if (!ctx.cr6.eq) goto loc_822ADD0C;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8259b888
	ctx.lr = 0x822ADD08;
	sub_8259B888(ctx, base);
	// stfs f31,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
loc_822ADD0C:
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
PPC_FUNC_IMPL(__imp__sub_822ADD28) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 8, ctx.xer);
	// bgt cr6,0x822add50
	if (ctx.cr6.gt) goto loc_822ADD50;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bge cr6,0x822add48
	if (!ctx.cr6.lt) goto loc_822ADD48;
	// lis r11,-17700
	ctx.r11.s64 = -1159987200;
	// ori r10,r11,45024
	ctx.r10.u64 = ctx.r11.u64 | 45024;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x822add64
	if (!ctx.cr6.eq) goto loc_822ADD64;
loc_822ADD48:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_822ADD50:
	// cmpwi cr6,r4,29
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 29, ctx.xer);
	// blt cr6,0x822add64
	if (ctx.cr6.lt) goto loc_822ADD64;
	// cmpwi cr6,r4,30
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 30, ctx.xer);
	// li r3,2
	ctx.r3.s64 = 2;
	// blelr cr6
	if (!ctx.cr6.gt) return;
loc_822ADD64:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}
PPC_FUNC_IMPL(__imp__sub_822ADD70) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 8, ctx.xer);
	// beq cr6,0x822add84
	if (ctx.cr6.eq) goto loc_822ADD84;
	// cmpwi cr6,r4,87
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 87, ctx.xer);
	// li r3,3
	ctx.r3.s64 = 3;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_822ADD84:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}
PPC_FUNC_IMPL(__imp__sub_822ADD90) {
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
	// lwz r11,776(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 776);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x822ade54
	if (ctx.cr6.lt) goto loc_822ADE54;
	// beq cr6,0x822ade0c
	if (ctx.cr6.eq) goto loc_822ADE0C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x822ade5c
	if (!ctx.cr6.lt) goto loc_822ADE5C;
	// lwz r3,760(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 760);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822addd4
	if (ctx.cr6.eq) goto loc_822ADDD4;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// lfs f1,-18824(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18824);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82564f60
	ctx.lr = 0x822ADDD4;
	sub_82564F60(ctx, base);
loc_822ADDD4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,764(r31)
	PPC_STORE_U8(ctx.r31.u32 + 764, ctx.r11.u8);
	// bl 0x8259b7a8
	ctx.lr = 0x822ADDE0;
	sub_8259B7A8(ctx, base);
	// lbz r10,25(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 25);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822ade5c
	if (!ctx.cr6.eq) goto loc_822ADE5C;
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r9,25(r31)
	PPC_STORE_U8(ctx.r31.u32 + 25, ctx.r9.u8);
	// bl 0x8259b890
	ctx.lr = 0x822ADDF8;
	sub_8259B890(ctx, base);
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
loc_822ADE0C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259b810
	ctx.lr = 0x822ADE14;
	sub_8259B810(ctx, base);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// beq cr6,0x822ade28
	if (ctx.cr6.eq) goto loc_822ADE28;
	// li r11,0
	ctx.r11.s64 = 0;
loc_822ADE28:
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x822ade38
	if (ctx.cr6.eq) goto loc_822ADE38;
	// bl 0x8259b7a8
	ctx.lr = 0x822ADE38;
	sub_8259B7A8(ctx, base);
loc_822ADE38:
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r5,764(r31)
	PPC_STORE_U8(ctx.r31.u32 + 764, ctx.r5.u8);
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
loc_822ADE54:
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r4,764(r31)
	PPC_STORE_U8(ctx.r31.u32 + 764, ctx.r4.u8);
loc_822ADE5C:
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
PPC_FUNC_IMPL(__imp__sub_822ADE70) {
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
	// lwz r11,776(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 776);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x822adebc
	if (ctx.cr6.eq) goto loc_822ADEBC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x822adec0
	if (!ctx.cr6.eq) goto loc_822ADEC0;
	// bl 0x8259b758
	ctx.lr = 0x822ADEA4;
	sub_8259B758(ctx, base);
	// lbz r11,25(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 25);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822adec0
	if (ctx.cr6.eq) goto loc_822ADEC0;
	// bl 0x8259b968
	ctx.lr = 0x822ADEB4;
	sub_8259B968(ctx, base);
	// stb r30,25(r31)
	PPC_STORE_U8(ctx.r31.u32 + 25, ctx.r30.u8);
	// b 0x822adec0
	goto loc_822ADEC0;
loc_822ADEBC:
	// bl 0x8259b758
	ctx.lr = 0x822ADEC0;
	sub_8259B758(ctx, base);
loc_822ADEC0:
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r30,764(r31)
	PPC_STORE_U8(ctx.r31.u32 + 764, ctx.r30.u8);
	// stw r30,780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 780, ctx.r30.u32);
	// stw r10,776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 776, ctx.r10.u32);
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
PPC_FUNC_IMPL(__imp__sub_822ADEE8) {
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
	// lwz r11,776(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 776);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x822adf78
	if (ctx.cr6.eq) goto loc_822ADF78;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r11,r11,14528
	ctx.r11.s64 = ctx.r11.s64 + 14528;
	// lwz r11,22348(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22348);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x822adf20
	if (!ctx.cr6.eq) goto loc_822ADF20;
	// bl 0x822ade70
	ctx.lr = 0x822ADF20;
	sub_822ADE70(ctx, base);
loc_822ADF20:
	// lbz r10,764(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 764);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822adf78
	if (ctx.cr6.eq) goto loc_822ADF78;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259b810
	ctx.lr = 0x822ADF34;
	sub_8259B810(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x822adf48
	if (ctx.cr6.eq) goto loc_822ADF48;
	// li r11,0
	ctx.r11.s64 = 0;
loc_822ADF48:
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x822adf60
	if (ctx.cr6.eq) goto loc_822ADF60;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// lfs f1,-18824(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18824);
	ctx.f1.f64 = double(temp.f32);
	// b 0x822adf68
	goto loc_822ADF68;
loc_822ADF60:
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lfs f1,-1748(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1748);
	ctx.f1.f64 = double(temp.f32);
loc_822ADF68:
	// lwz r3,760(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 760);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822adf78
	if (ctx.cr6.eq) goto loc_822ADF78;
	// bl 0x82564f60
	ctx.lr = 0x822ADF78;
	sub_82564F60(ctx, base);
loc_822ADF78:
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
PPC_FUNC_IMPL(__imp__sub_822ADF90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x822ADF98;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r26,-32085
	ctx.r26.s64 = -2102722560;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// lbz r11,-1824(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + -1824);
	// stw r27,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r27.u32);
	// stw r10,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r27,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r27.u32);
	// stb r27,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r27.u8);
	// beq cr6,0x822ae0b4
	if (ctx.cr6.eq) goto loc_822AE0B4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// lis r28,-32047
	ctx.r28.s64 = -2100232192;
	// addi r31,r11,968
	ctx.r31.s64 = ctx.r11.s64 + 968;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lfs f31,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f31.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// addi r30,r11,8820
	ctx.r30.s64 = ctx.r11.s64 + 8820;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,8812
	ctx.r5.s64 = ctx.r11.s64 + 8812;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r29,r11,-18808
	ctx.r29.s64 = ctx.r11.s64 + -18808;
	// lwz r11,20160(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20160);
	// addi r4,r29,-12
	ctx.r4.s64 = ctx.r29.s64 + -12;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x822AE01C;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r29,-8
	ctx.r4.s64 = ctx.r29.s64 + -8;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r5,r11,8800
	ctx.r5.s64 = ctx.r11.s64 + 8800;
	// lwz r11,20160(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x822AE04C;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r29,-4
	ctx.r4.s64 = ctx.r29.s64 + -4;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r5,r11,8788
	ctx.r5.s64 = ctx.r11.s64 + 8788;
	// lwz r11,20160(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x822AE07C;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r5,r11,8776
	ctx.r5.s64 = ctx.r11.s64 + 8776;
	// lwz r11,20160(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20160);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x822AE0AC;
	sub_82351720(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,-1824(r26)
	PPC_STORE_U8(ctx.r26.u32 + -1824, ctx.r11.u8);
loc_822AE0B4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_822AE210) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-32047
	ctx.r10.s64 = -2100232192;
	// addi r10,r10,13088
	ctx.r10.s64 = ctx.r10.s64 + 13088;
loc_822AE224:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// subf r7,r11,r4
	ctx.r7.s64 = ctx.r4.s64 - ctx.r11.s64;
	// rlwinm r8,r9,16,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// lhz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// twllei r7,0
	if (ctx.r7.u32 <= 0) __builtin_debugtrap();
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// divwu r6,r9,r7
	ctx.r6.u32 = ctx.r9.u32 / ctx.r7.u32;
	// mullw r5,r6,r7
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// subf r8,r5,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r5.s64;
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// lbz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// lbzx r7,r8,r3
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r3.u32);
	// stbx r6,r8,r3
	PPC_STORE_U8(ctx.r8.u32 + ctx.r3.u32, ctx.r6.u8);
	// stb r7,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r7.u8);
	// blt cr6,0x822ae224
	if (ctx.cr6.lt) goto loc_822AE224;
	// blr 
	return;
}
PPC_FUNC_IMPL(__imp__sub_822AE530) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x822AE538;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// lbz r11,53(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 53);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822ae5b4
	if (ctx.cr6.eq) goto loc_822AE5B4;
	// lwz r4,736(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 736);
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// ble cr6,0x822ae5b4
	if (!ctx.cr6.gt) goto loc_822AE5B4;
	// lwz r11,740(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 740);
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x822ae574
	if (!ctx.cr6.gt) goto loc_822AE574;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_822AE574:
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r30,r31,192
	ctx.r30.s64 = ctx.r31.s64 + 192;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r29,192(r10)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r10.u32 + 192);
	// bl 0x822ae210
	ctx.lr = 0x822AE588;
	sub_822AE210(ctx, base);
	// lwz r11,736(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 736);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// ble cr6,0x822ae5b4
	if (!ctx.cr6.gt) goto loc_822AE5B4;
	// lbz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// clrlwi r8,r29,24
	ctx.r8.u64 = ctx.r29.u32 & 0xFF;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x822ae5b4
	if (!ctx.cr6.eq) goto loc_822AE5B4;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbz r7,190(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 190);
	// stb r7,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r7.u8);
	// stb r29,190(r11)
	PPC_STORE_U8(ctx.r11.u32 + 190, ctx.r29.u8);
loc_822AE5B4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_822AE5C0) {
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
	// lwz r11,740(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 740);
	// lwz r10,736(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 736);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x822ae608
	if (ctx.cr6.lt) goto loc_822AE608;
	// bl 0x822ae530
	ctx.lr = 0x822AE5EC;
	sub_822AE530(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,740(r31)
	PPC_STORE_U32(ctx.r31.u32 + 740, ctx.r9.u32);
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
loc_822AE608:
	// stw r11,740(r31)
	PPC_STORE_U32(ctx.r31.u32 + 740, ctx.r11.u32);
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
PPC_FUNC_IMPL(__imp__sub_822AE620) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r9,r3,288
	ctx.r9.s64 = ctx.r3.s64 + 288;
	// addi r10,r11,-4756
	ctx.r10.s64 = ctx.r11.s64 + -4756;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r3,496
	ctx.r8.s64 = ctx.r3.s64 + 496;
	// addi r7,r3,704
	ctx.r7.s64 = ctx.r3.s64 + 704;
	// addi r6,r3,912
	ctx.r6.s64 = ctx.r3.s64 + 912;
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// stb r11,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, ctx.r11.u8);
	// stw r10,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r10.u32);
	// stb r11,56(r3)
	PPC_STORE_U8(ctx.r3.u32 + 56, ctx.r11.u8);
	// stw r10,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r10.u32);
	// stb r11,72(r3)
	PPC_STORE_U8(ctx.r3.u32 + 72, ctx.r11.u8);
	// stw r10,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r10.u32);
	// stb r11,88(r3)
	PPC_STORE_U8(ctx.r3.u32 + 88, ctx.r11.u8);
	// stw r10,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r10.u32);
	// stb r11,104(r3)
	PPC_STORE_U8(ctx.r3.u32 + 104, ctx.r11.u8);
	// stw r10,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r10.u32);
	// stb r11,120(r3)
	PPC_STORE_U8(ctx.r3.u32 + 120, ctx.r11.u8);
	// stw r10,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r10.u32);
	// stb r11,136(r3)
	PPC_STORE_U8(ctx.r3.u32 + 136, ctx.r11.u8);
	// stw r10,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r10.u32);
	// stb r11,152(r3)
	PPC_STORE_U8(ctx.r3.u32 + 152, ctx.r11.u8);
	// stw r10,156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 156, ctx.r10.u32);
	// stb r11,168(r3)
	PPC_STORE_U8(ctx.r3.u32 + 168, ctx.r11.u8);
	// stw r10,172(r3)
	PPC_STORE_U32(ctx.r3.u32 + 172, ctx.r10.u32);
	// stb r11,184(r3)
	PPC_STORE_U8(ctx.r3.u32 + 184, ctx.r11.u8);
	// stw r10,188(r3)
	PPC_STORE_U32(ctx.r3.u32 + 188, ctx.r10.u32);
	// stb r11,200(r3)
	PPC_STORE_U8(ctx.r3.u32 + 200, ctx.r11.u8);
	// stw r10,204(r3)
	PPC_STORE_U32(ctx.r3.u32 + 204, ctx.r10.u32);
	// stb r11,216(r3)
	PPC_STORE_U8(ctx.r3.u32 + 216, ctx.r11.u8);
	// stw r10,220(r3)
	PPC_STORE_U32(ctx.r3.u32 + 220, ctx.r10.u32);
	// stb r11,232(r3)
	PPC_STORE_U8(ctx.r3.u32 + 232, ctx.r11.u8);
	// stw r10,236(r3)
	PPC_STORE_U32(ctx.r3.u32 + 236, ctx.r10.u32);
	// stb r11,248(r3)
	PPC_STORE_U8(ctx.r3.u32 + 248, ctx.r11.u8);
	// stw r10,252(r3)
	PPC_STORE_U32(ctx.r3.u32 + 252, ctx.r10.u32);
	// stb r11,264(r3)
	PPC_STORE_U8(ctx.r3.u32 + 264, ctx.r11.u8);
	// stw r10,268(r3)
	PPC_STORE_U32(ctx.r3.u32 + 268, ctx.r10.u32);
	// stb r11,280(r3)
	PPC_STORE_U8(ctx.r3.u32 + 280, ctx.r11.u8);
	// stw r11,140(r9)
	PPC_STORE_U32(ctx.r9.u32 + 140, ctx.r11.u32);
	// stw r10,176(r9)
	PPC_STORE_U32(ctx.r9.u32 + 176, ctx.r10.u32);
	// stb r11,188(r9)
	PPC_STORE_U8(ctx.r9.u32 + 188, ctx.r11.u8);
	// stw r11,140(r8)
	PPC_STORE_U32(ctx.r8.u32 + 140, ctx.r11.u32);
	// stw r10,176(r8)
	PPC_STORE_U32(ctx.r8.u32 + 176, ctx.r10.u32);
	// stb r11,188(r8)
	PPC_STORE_U8(ctx.r8.u32 + 188, ctx.r11.u8);
	// stw r11,140(r7)
	PPC_STORE_U32(ctx.r7.u32 + 140, ctx.r11.u32);
	// stw r10,176(r7)
	PPC_STORE_U32(ctx.r7.u32 + 176, ctx.r10.u32);
	// stb r11,188(r7)
	PPC_STORE_U8(ctx.r7.u32 + 188, ctx.r11.u8);
	// stw r11,140(r6)
	PPC_STORE_U32(ctx.r6.u32 + 140, ctx.r11.u32);
	// stw r10,176(r6)
	PPC_STORE_U32(ctx.r6.u32 + 176, ctx.r10.u32);
	// stb r11,188(r6)
	PPC_STORE_U8(ctx.r6.u32 + 188, ctx.r11.u8);
	// stw r10,1120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1120, ctx.r10.u32);
	// stb r11,1132(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1132, ctx.r11.u8);
	// stw r10,1136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1136, ctx.r10.u32);
	// stb r11,1148(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1148, ctx.r11.u8);
	// stw r10,1152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1152, ctx.r10.u32);
	// stb r11,1164(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1164, ctx.r11.u8);
	// stw r10,1168(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1168, ctx.r10.u32);
	// stb r11,1180(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1180, ctx.r11.u8);
	// stw r10,1184(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1184, ctx.r10.u32);
	// stb r11,1196(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1196, ctx.r11.u8);
	// stw r11,1484(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1484, ctx.r11.u32);
	// stw r11,1676(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1676, ctx.r11.u32);
	// stw r11,1868(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1868, ctx.r11.u32);
	// blr 
	return;
}
PPC_FUNC_IMPL(__imp__sub_822AE728) {
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
	// addi r11,r11,9084
	ctx.r11.s64 = ctx.r11.s64 + 9084;
	// addi r30,r31,32
	ctx.r30.s64 = ctx.r31.s64 + 32;
	// addi r3,r30,264
	ctx.r3.s64 = ctx.r30.s64 + 264;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82348a68
	ctx.lr = 0x822AE758;
	sub_82348A68(ctx, base);
	// addi r3,r30,288
	ctx.r3.s64 = ctx.r30.s64 + 288;
	// bl 0x82348a68
	ctx.lr = 0x822AE760;
	sub_82348A68(ctx, base);
	// addi r3,r30,312
	ctx.r3.s64 = ctx.r30.s64 + 312;
	// bl 0x82348a68
	ctx.lr = 0x822AE768;
	sub_82348A68(ctx, base);
	// addi r3,r30,348
	ctx.r3.s64 = ctx.r30.s64 + 348;
	// bl 0x82348a68
	ctx.lr = 0x822AE770;
	sub_82348A68(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-4756
	ctx.r11.s64 = ctx.r11.s64 + -4756;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r10,620(r31)
	PPC_STORE_U8(ctx.r31.u32 + 620, ctx.r10.u8);
	// stw r11,608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 608, ctx.r11.u32);
	// stw r11,624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 624, ctx.r11.u32);
	// stb r10,636(r31)
	PPC_STORE_U8(ctx.r31.u32 + 636, ctx.r10.u8);
	// stw r11,640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 640, ctx.r11.u32);
	// stb r10,652(r31)
	PPC_STORE_U8(ctx.r31.u32 + 652, ctx.r10.u8);
	// stw r11,656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 656, ctx.r11.u32);
	// stb r10,668(r31)
	PPC_STORE_U8(ctx.r31.u32 + 668, ctx.r10.u8);
	// stw r11,672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 672, ctx.r11.u32);
	// stb r10,684(r31)
	PPC_STORE_U8(ctx.r31.u32 + 684, ctx.r10.u8);
	// stw r11,688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 688, ctx.r11.u32);
	// stb r10,700(r31)
	PPC_STORE_U8(ctx.r31.u32 + 700, ctx.r10.u8);
	// stw r11,716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 716, ctx.r11.u32);
	// stb r10,728(r31)
	PPC_STORE_U8(ctx.r31.u32 + 728, ctx.r10.u8);
	// stw r11,732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 732, ctx.r11.u32);
	// stb r10,744(r31)
	PPC_STORE_U8(ctx.r31.u32 + 744, ctx.r10.u8);
	// stw r11,748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 748, ctx.r11.u32);
	// stb r10,760(r31)
	PPC_STORE_U8(ctx.r31.u32 + 760, ctx.r10.u8);
	// stw r11,880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 880, ctx.r11.u32);
	// stb r10,892(r31)
	PPC_STORE_U8(ctx.r31.u32 + 892, ctx.r10.u8);
	// stw r11,896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 896, ctx.r11.u32);
	// stb r10,908(r31)
	PPC_STORE_U8(ctx.r31.u32 + 908, ctx.r10.u8);
	// stw r11,912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 912, ctx.r11.u32);
	// stb r10,924(r31)
	PPC_STORE_U8(ctx.r31.u32 + 924, ctx.r10.u8);
	// stb r10,940(r31)
	PPC_STORE_U8(ctx.r31.u32 + 940, ctx.r10.u8);
	// stw r11,928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 928, ctx.r11.u32);
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
PPC_FUNC_IMPL(__imp__sub_822AE800) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,9
	ctx.r11.s64 = 589824;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r11,9420
	ctx.r10.u64 = ctx.r11.u64 | 9420;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r30,r11,26080
	ctx.r30.s64 = ctx.r11.s64 + 26080;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lbzx r8,r31,r10
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// addi r3,r30,92
	ctx.r3.s64 = ctx.r30.s64 + 92;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,3824(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3824);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f31,f12,f0
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// bl 0x8210b3c8
	ctx.lr = 0x822AE854;
	sub_8210B3C8(ctx, base);
	// lis r7,7
	ctx.r7.s64 = 458752;
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f3,128(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	ctx.f3.f64 = double(temp.f32);
	// ori r6,r7,16276
	ctx.r6.u64 = ctx.r7.u64 | 16276;
	// fmr f5,f31
	ctx.f5.f64 = ctx.f31.f64;
	// lwzx r11,r30,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r6.u32);
	// extsw r5,r11
	ctx.r5.s64 = ctx.r11.s32;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r11,r11,-27228
	ctx.r11.s64 = ctx.r11.s64 + -27228;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfs f2,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmuls f4,f9,f0
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// bl 0x82350a28
	ctx.lr = 0x822AE89C;
	sub_82350A28(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822AE8B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822AE8C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addis r3,r31,9
	ctx.r3.s64 = ctx.r31.s64 + 589824;
	// addi r3,r3,9312
	ctx.r3.s64 = ctx.r3.s64 + 9312;
	// bl 0x8212bb98
	ctx.lr = 0x822AE8D0;
	sub_8212BB98(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}
PPC_FUNC_IMPL(__imp__sub_822AE8F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x822AE8F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822AE910;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822ae800
	ctx.lr = 0x822AE918;
	sub_822AE800(ctx, base);
	// addis r30,r31,9
	ctx.r30.s64 = ctx.r31.s64 + 589824;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r30,9404
	ctx.r30.s64 = ctx.r30.s64 + 9404;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822ae93c
	if (ctx.cr6.eq) goto loc_822AE93C;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x823480f0
	ctx.lr = 0x822AE938;
	sub_823480F0(ctx, base);
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
loc_822AE93C:
	// addis r30,r31,9
	ctx.r30.s64 = ctx.r31.s64 + 589824;
	// addi r30,r30,9400
	ctx.r30.s64 = ctx.r30.s64 + 9400;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822ae95c
	if (ctx.cr6.eq) goto loc_822AE95C;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x823480f0
	ctx.lr = 0x822AE958;
	sub_823480F0(ctx, base);
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
loc_822AE95C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234c750
	ctx.lr = 0x822AE964;
	sub_8234C750(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822ae97c
	if (!ctx.cr6.eq) goto loc_822AE97C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_822AE97C:
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-21272
	ctx.r3.s64 = ctx.r11.s64 + -21272;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x8210d230
	ctx.lr = 0x822AE990;
	sub_8210D230(ctx, base);
	// lis r8,9
	ctx.r8.s64 = 589824;
	// lis r6,7
	ctx.r6.s64 = 458752;
	// ori r7,r8,9408
	ctx.r7.u64 = ctx.r8.u64 | 9408;
	// ori r5,r6,57692
	ctx.r5.u64 = ctx.r6.u64 | 57692;
	// li r4,56
	ctx.r4.s64 = 56;
	// li r3,1
	ctx.r3.s64 = 1;
	// stwx r29,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r29.u32);
	// stwx r4,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r4.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_822AE9B8) {
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
	// bl 0x8234c7c0
	ctx.lr = 0x822AE9D0;
	sub_8234C7C0(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x822ae9dc
	if (!ctx.cr6.eq) goto loc_822AE9DC;
	// bl 0x8259b7a8
	ctx.lr = 0x822AE9DC;
	sub_8259B7A8(ctx, base);
loc_822AE9DC:
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
PPC_FUNC_IMPL(__imp__sub_822AE9F0) {
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
	// bl 0x8259b758
	ctx.lr = 0x822AEA08;
	sub_8259B758(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234c828
	ctx.lr = 0x822AEA10;
	sub_8234C828(ctx, base);
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
PPC_FUNC_IMPL(__imp__sub_822AEA28) {
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
	// bl 0x822a0120
	ctx.lr = 0x822AEA40;
	sub_822A0120(ctx, base);
	// lis r11,9
	ctx.r11.s64 = 589824;
	// ori r10,r11,9420
	ctx.r10.u64 = ctx.r11.u64 | 9420;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-4804(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4804);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lbz r9,87(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// stbx r9,r31,r10
	PPC_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r9.u8);
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
PPC_FUNC_IMPL(__imp__sub_822AF9B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bacc
	ctx.lr = 0x822AF9B8;
	__savegprlr_17(ctx, base);
	// stfd f31,-136(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -136, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r31,452
	ctx.r3.s64 = ctx.r31.s64 + 452;
	// stw r30,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r30.u32);
	// stb r30,1001(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1001, ctx.r30.u8);
	// bl 0x822a1310
	ctx.lr = 0x822AF9D8;
	sub_822A1310(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r30,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r30.u32);
	// stb r30,240(r31)
	PPC_STORE_U8(ctx.r31.u32 + 240, ctx.r30.u8);
	// stw r30,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r30.u32);
	// stw r30,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r30.u32);
	// stw r30,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r30.u32);
	// lfs f31,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f31.f64 = double(temp.f32);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// stfs f31,32(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stw r30,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r30.u32);
	// addi r27,r11,-13616
	ctx.r27.s64 = ctx.r11.s64 + -13616;
	// stfs f31,216(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 216, temp.u32);
	// stfs f31,224(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 224, temp.u32);
	// stfs f31,228(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 228, temp.u32);
	// stfs f31,232(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 232, temp.u32);
	// stw r30,704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 704, ctx.r30.u32);
	// stw r30,708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 708, ctx.r30.u32);
	// lbz r11,11742(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 11742);
	// stw r30,712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 712, ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r30,968(r31)
	PPC_STORE_U32(ctx.r31.u32 + 968, ctx.r30.u32);
	// stw r30,972(r31)
	PPC_STORE_U32(ctx.r31.u32 + 972, ctx.r30.u32);
	// stw r30,976(r31)
	PPC_STORE_U32(ctx.r31.u32 + 976, ctx.r30.u32);
	// stw r30,980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 980, ctx.r30.u32);
	// stw r30,604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 604, ctx.r30.u32);
	// stb r30,1003(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1003, ctx.r30.u8);
	// stb r30,1002(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1002, ctx.r30.u8);
	// bne cr6,0x822b00f4
	if (!ctx.cr6.eq) goto loc_822B00F4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r29,-32047
	ctx.r29.s64 = -2100232192;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r5,r11,6608
	ctx.r5.s64 = ctx.r11.s64 + 6608;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r4,r27,10088
	ctx.r4.s64 = ctx.r27.s64 + 10088;
	// addi r31,r11,-27060
	ctx.r31.s64 = ctx.r11.s64 + -27060;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r7,-84(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -84);
	// lwz r6,-80(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -80);
	// bl 0x82351720
	ctx.lr = 0x822AFA84;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r7,-84(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -84);
	// addi r4,r27,9116
	ctx.r4.s64 = ctx.r27.s64 + 9116;
	// lwz r6,-72(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -72);
	// addi r5,r11,9888
	ctx.r5.s64 = ctx.r11.s64 + 9888;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
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
	ctx.lr = 0x822AFAB4;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r27,11736
	ctx.r4.s64 = ctx.r27.s64 + 11736;
	// lwz r7,-84(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -84);
	// addi r5,r11,9872
	ctx.r5.s64 = ctx.r11.s64 + 9872;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,-72(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -72);
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
	ctx.lr = 0x822AFAE4;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r27,72
	ctx.r4.s64 = ctx.r27.s64 + 72;
	// lwz r7,-84(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -84);
	// addi r5,r11,9852
	ctx.r5.s64 = ctx.r11.s64 + 9852;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,-72(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -72);
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
	ctx.lr = 0x822AFB14;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r27,11584
	ctx.r4.s64 = ctx.r27.s64 + 11584;
	// lwz r7,-84(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -84);
	// addi r5,r11,9832
	ctx.r5.s64 = ctx.r11.s64 + 9832;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,-72(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -72);
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
	ctx.lr = 0x822AFB44;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-84(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -84);
	// addi r5,r11,9812
	ctx.r5.s64 = ctx.r11.s64 + 9812;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r6,-72(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -72);
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
	ctx.lr = 0x822AFB74;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r5,r11,9792
	ctx.r5.s64 = ctx.r11.s64 + 9792;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r27,11652
	ctx.r4.s64 = ctx.r27.s64 + 11652;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-84(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -84);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r6,-72(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -72);
	// bl 0x82351720
	ctx.lr = 0x822AFBA4;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r27,10072
	ctx.r4.s64 = ctx.r27.s64 + 10072;
	// lwz r7,-84(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -84);
	// addi r5,r11,9772
	ctx.r5.s64 = ctx.r11.s64 + 9772;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,-72(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -72);
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
	ctx.lr = 0x822AFBD4;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r27,9112
	ctx.r4.s64 = ctx.r27.s64 + 9112;
	// lwz r7,-84(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -84);
	// addi r5,r11,9748
	ctx.r5.s64 = ctx.r11.s64 + 9748;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,-72(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -72);
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
	ctx.lr = 0x822AFC04;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// lwz r7,-84(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -84);
	// addi r5,r11,9720
	ctx.r5.s64 = ctx.r11.s64 + 9720;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,-72(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -72);
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
	ctx.lr = 0x822AFC34;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// lwz r7,-84(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -84);
	// addi r5,r11,9692
	ctx.r5.s64 = ctx.r11.s64 + 9692;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,-72(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -72);
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
	ctx.lr = 0x822AFC64;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// lwz r7,-84(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -84);
	// addi r5,r11,9668
	ctx.r5.s64 = ctx.r11.s64 + 9668;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,-72(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -72);
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
	ctx.lr = 0x822AFC94;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-84(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -84);
	// addi r5,r11,9644
	ctx.r5.s64 = ctx.r11.s64 + 9644;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// addi r4,r27,11756
	ctx.r4.s64 = ctx.r27.s64 + 11756;
	// lwz r6,-72(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -72);
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
	ctx.lr = 0x822AFCC4;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r5,r11,9620
	ctx.r5.s64 = ctx.r11.s64 + 9620;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-4736(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4736);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// lwz r7,-84(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -84);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,-80(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -80);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82351720
	ctx.lr = 0x822AFD00;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// addi r25,r11,9600
	ctx.r25.s64 = ctx.r11.s64 + 9600;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r24,r11,9580
	ctx.r24.s64 = ctx.r11.s64 + 9580;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r23,r11,9560
	ctx.r23.s64 = ctx.r11.s64 + 9560;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r22,r11,9536
	ctx.r22.s64 = ctx.r11.s64 + 9536;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r21,r11,9512
	ctx.r21.s64 = ctx.r11.s64 + 9512;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r20,r11,9488
	ctx.r20.s64 = ctx.r11.s64 + 9488;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r19,r11,9460
	ctx.r19.s64 = ctx.r11.s64 + 9460;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r18,r11,9432
	ctx.r18.s64 = ctx.r11.s64 + 9432;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r17,r11,9404
	ctx.r17.s64 = ctx.r11.s64 + 9404;
loc_822AFD4C:
	// addi r11,r27,11724
	ctx.r11.s64 = ctx.r27.s64 + 11724;
	// lwz r7,-84(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -84);
	// addi r26,r31,-64
	ctx.r26.s64 = ctx.r31.s64 + -64;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// add r4,r28,r11
	ctx.r4.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwzx r6,r28,r26
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r26.u32);
	// bl 0x82351720
	ctx.lr = 0x822AFD80;
	sub_82351720(ctx, base);
	// addi r11,r27,11712
	ctx.r11.s64 = ctx.r27.s64 + 11712;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwzx r6,r28,r26
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r26.u32);
	// add r4,r28,r11
	ctx.r4.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// lwz r7,-84(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -84);
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
	ctx.lr = 0x822AFDB0;
	sub_82351720(ctx, base);
	// addi r11,r27,11688
	ctx.r11.s64 = ctx.r27.s64 + 11688;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwzx r6,r28,r26
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r26.u32);
	// add r4,r28,r11
	ctx.r4.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// lwz r7,-84(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -84);
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
	ctx.lr = 0x822AFDE0;
	sub_82351720(ctx, base);
	// addi r11,r27,11700
	ctx.r11.s64 = ctx.r27.s64 + 11700;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwzx r6,r28,r26
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r26.u32);
	// add r4,r28,r11
	ctx.r4.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// lwz r7,-84(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -84);
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
	ctx.lr = 0x822AFE10;
	sub_82351720(ctx, base);
	// addi r11,r27,80
	ctx.r11.s64 = ctx.r27.s64 + 80;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwzx r6,r28,r26
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r26.u32);
	// add r4,r28,r11
	ctx.r4.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// lwz r7,-84(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -84);
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
	ctx.lr = 0x822AFE40;
	sub_82351720(ctx, base);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// addi r10,r27,8
	ctx.r10.s64 = ctx.r27.s64 + 8;
	// lwzx r6,r28,r26
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r26.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-84(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -84);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// add r4,r28,r10
	ctx.r4.u64 = ctx.r28.u64 + ctx.r10.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bl 0x82351720
	ctx.lr = 0x822AFE70;
	sub_82351720(ctx, base);
	// lwzx r6,r28,r26
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r26.u32);
	// lwz r7,-84(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -84);
	// addi r11,r27,180
	ctx.r11.s64 = ctx.r27.s64 + 180;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// add r4,r28,r11
	ctx.r4.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x822AFEA0;
	sub_82351720(ctx, base);
	// addi r11,r27,10076
	ctx.r11.s64 = ctx.r27.s64 + 10076;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwzx r6,r28,r26
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r26.u32);
	// add r4,r28,r11
	ctx.r4.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r7,-84(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -84);
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
	ctx.lr = 0x822AFED0;
	sub_82351720(ctx, base);
	// addi r11,r27,11676
	ctx.r11.s64 = ctx.r27.s64 + 11676;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwzx r6,r28,r26
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r26.u32);
	// add r4,r28,r11
	ctx.r4.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r7,-84(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -84);
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
	ctx.lr = 0x822AFF00;
	sub_82351720(ctx, base);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpwi cr6,r28,12
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 12, ctx.xer);
	// blt cr6,0x822afd4c
	if (ctx.cr6.lt) goto loc_822AFD4C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r7,-84(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -84);
	// addi r4,r27,11592
	ctx.r4.s64 = ctx.r27.s64 + 11592;
	// lwz r6,-68(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -68);
	// addi r5,r11,9380
	ctx.r5.s64 = ctx.r11.s64 + 9380;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
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
	ctx.lr = 0x822AFF3C;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r27,4
	ctx.r4.s64 = ctx.r27.s64 + 4;
	// lwz r7,-84(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -84);
	// addi r5,r11,9352
	ctx.r5.s64 = ctx.r11.s64 + 9352;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,-68(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -68);
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
	ctx.lr = 0x822AFF6C;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r31,-20
	ctx.r4.s64 = ctx.r31.s64 + -20;
	// lwz r7,-84(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -84);
	// addi r5,r11,9332
	ctx.r5.s64 = ctx.r11.s64 + 9332;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,-68(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -68);
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
	ctx.lr = 0x822AFF9C;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// lwz r7,-84(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -84);
	// addi r5,r11,9304
	ctx.r5.s64 = ctx.r11.s64 + 9304;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,-68(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -68);
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
	ctx.lr = 0x822AFFCC;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r31,-24
	ctx.r4.s64 = ctx.r31.s64 + -24;
	// lwz r7,-84(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -84);
	// addi r5,r11,9284
	ctx.r5.s64 = ctx.r11.s64 + 9284;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,-68(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -68);
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
	ctx.lr = 0x822AFFFC;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r31,-28
	ctx.r4.s64 = ctx.r31.s64 + -28;
	// lwz r7,-84(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -84);
	// addi r5,r11,9268
	ctx.r5.s64 = ctx.r11.s64 + 9268;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,-68(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -68);
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
	ctx.lr = 0x822B002C;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r7,-84(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -84);
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// lwz r6,-68(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -68);
	// addi r5,r11,9248
	ctx.r5.s64 = ctx.r11.s64 + 9248;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x822B005C;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r31,-4
	ctx.r4.s64 = ctx.r31.s64 + -4;
	// lwz r7,-84(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -84);
	// addi r5,r11,9228
	ctx.r5.s64 = ctx.r11.s64 + 9228;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,-68(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -68);
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
	ctx.lr = 0x822B008C;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r27,11752
	ctx.r4.s64 = ctx.r27.s64 + 11752;
	// lwz r7,-84(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -84);
	// addi r5,r11,9208
	ctx.r5.s64 = ctx.r11.s64 + 9208;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,-68(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -68);
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
	ctx.lr = 0x822B00BC;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-84(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -84);
	// addi r5,r11,9188
	ctx.r5.s64 = ctx.r11.s64 + 9188;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r6,-68(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -68);
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
	ctx.lr = 0x822B00EC;
	sub_82351720(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,11742(r27)
	PPC_STORE_U8(ctx.r27.u32 + 11742, ctx.r11.u8);
loc_822B00F4:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x8259bb1c
	__restgprlr_17(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_822B1078) {
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
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// std r4,504(r1)
	PPC_STORE_U64(ctx.r1.u32 + 504, ctx.r4.u64);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// std r5,512(r1)
	PPC_STORE_U64(ctx.r1.u32 + 512, ctx.r5.u64);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r4,r1,504
	ctx.r4.s64 = ctx.r1.s64 + 504;
	// stw r11,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r11.u32);
	// stw r11,412(r1)
	PPC_STORE_U32(ctx.r1.u32 + 412, ctx.r11.u32);
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r31,r11,-18560
	ctx.r31.s64 = ctx.r11.s64 + -18560;
	// beq cr6,0x822b10fc
	if (ctx.cr6.eq) goto loc_822B10FC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8234beb0
	ctx.lr = 0x822B10CC;
	sub_8234BEB0(ctx, base);
	// lwz r10,236(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r9,r10,4
	ctx.r9.u64 = ctx.r10.u64 | 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,512
	ctx.r4.s64 = ctx.r1.s64 + 512;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// stw r9,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r9.u32);
	// bl 0x8234beb0
	ctx.lr = 0x822B10F0;
	sub_8234BEB0(ctx, base);
	// lwz r8,412(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 412);
	// ori r10,r8,4
	ctx.r10.u64 = ctx.r8.u64 | 4;
	// b 0x822b1130
	goto loc_822B1130;
loc_822B10FC:
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x8234c370
	ctx.lr = 0x822B1104;
	sub_8234C370(ctx, base);
	// lwz r7,236(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r6,r7,4
	ctx.r6.u64 = ctx.r7.u64 | 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,512
	ctx.r4.s64 = ctx.r1.s64 + 512;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// stw r6,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r6.u32);
	// bl 0x8234c370
	ctx.lr = 0x822B1128;
	sub_8234C370(ctx, base);
	// lwz r5,412(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 412);
	// ori r10,r5,4
	ctx.r10.u64 = ctx.r5.u64 | 4;
loc_822B1130:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r11,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r11.u32);
	// beq cr6,0x822b1218
	if (ctx.cr6.eq) goto loc_822B1218;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b1218
	if (ctx.cr6.eq) goto loc_822B1218;
	// lis r3,8
	ctx.r3.s64 = 524288;
	// lwz r9,236(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// ori r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 8;
	// stfs f31,180(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// ori r11,r3,49800
	ctx.r11.u64 = ctx.r3.u64 | 49800;
	// stfs f31,356(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 356, temp.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// ori r10,r10,2048
	ctx.r10.u64 = ctx.r10.u64 | 2048;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// oris r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 | 2097152;
	// lfsx f0,r31,r11
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// oris r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 | 4194304;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f13,1940(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1940);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fsubs f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfd f13,-5592(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + -5592);
	// ori r11,r9,8
	ctx.r11.u64 = ctx.r9.u64 | 8;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// oris r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 2097152;
	// lfs f12,-12136(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -12136);
	ctx.f12.f64 = double(temp.f32);
	// addis r9,r31,5
	ctx.r9.s64 = ctx.r31.s64 + 327680;
	// stfs f12,192(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// fsel f0,f11,f13,f0
	ctx.f0.f64 = ctx.f11.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// addi r4,r9,7240
	ctx.r4.s64 = ctx.r9.s64 + 7240;
	// lfs f12,2868(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2868);
	ctx.f12.f64 = double(temp.f32);
	// oris r9,r11,64
	ctx.r9.u64 = ctx.r11.u64 | 4194304;
	// stfs f12,368(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 368, temp.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r8,8
	ctx.r8.s64 = 524288;
	// ori r6,r9,64
	ctx.r6.u64 = ctx.r9.u64 | 64;
	// ori r7,r8,49800
	ctx.r7.u64 = ctx.r8.u64 | 49800;
	// li r8,19
	ctx.r8.s64 = 19;
	// stb r11,249(r1)
	PPC_STORE_U8(ctx.r1.u32 + 249, ctx.r11.u8);
	// stb r11,248(r1)
	PPC_STORE_U8(ctx.r1.u32 + 248, ctx.r11.u8);
	// stb r11,425(r1)
	PPC_STORE_U8(ctx.r1.u32 + 425, ctx.r11.u8);
	// stb r11,424(r1)
	PPC_STORE_U8(ctx.r1.u32 + 424, ctx.r11.u8);
	// ori r11,r10,64
	ctx.r11.u64 = ctx.r10.u64 | 64;
	// stfsx f0,r31,r7
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, temp.u32);
	// stb r8,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r8.u8);
	// stw r6,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r6.u32);
	// stb r8,416(r1)
	PPC_STORE_U8(ctx.r1.u32 + 416, ctx.r8.u8);
	// stw r11,412(r1)
	PPC_STORE_U32(ctx.r1.u32 + 412, ctx.r11.u32);
	// bl 0x82350920
	ctx.lr = 0x822B1204;
	sub_82350920(ctx, base);
	// addis r11,r31,5
	ctx.r11.s64 = ctx.r31.s64 + 327680;
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,7240
	ctx.r4.s64 = ctx.r11.s64 + 7240;
	// bl 0x82350920
	ctx.lr = 0x822B1218;
	sub_82350920(ctx, base);
loc_822B1218:
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}
PPC_FUNC_IMPL(__imp__sub_822B1238) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x822B1240;
	__savegprlr_27(ctx, base);
	// stfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f29.u64);
	// stfd f30,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// std r5,400(r1)
	PPC_STORE_U64(ctx.r1.u32 + 400, ctx.r5.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// addi r11,r11,-4756
	ctx.r11.s64 = ctx.r11.s64 + -4756;
	// fmr f29,f2
	ctx.f29.f64 = ctx.f2.f64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// fmr f31,f3
	ctx.f31.f64 = ctx.f3.f64;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lbz r11,1337(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1337);
	// stw r27,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r27.u32);
	// stb r27,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r27.u8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b12b0
	if (ctx.cr6.eq) goto loc_822B12B0;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r3,r11,26080
	ctx.r3.s64 = ctx.r11.s64 + 26080;
	// bl 0x821041a8
	ctx.lr = 0x822B129C;
	sub_821041A8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822b12b0
	if (ctx.cr6.eq) goto loc_822B12B0;
	// stb r27,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r27.u8);
	// b 0x822b146c
	goto loc_822B146C;
loc_822B12B0:
	// li r28,1
	ctx.r28.s64 = 1;
	// lbz r5,455(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 455);
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// stw r27,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r27.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r4,r1,400
	ctx.r4.s64 = ctx.r1.s64 + 400;
	// stb r28,1337(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1337, ctx.r28.u8);
	// addi r30,r11,-18560
	ctx.r30.s64 = ctx.r11.s64 + -18560;
	// beq cr6,0x822b12e0
	if (ctx.cr6.eq) goto loc_822B12E0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8234beb0
	ctx.lr = 0x822B12DC;
	sub_8234BEB0(ctx, base);
	// b 0x822b12e8
	goto loc_822B12E8;
loc_822B12E0:
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x8234c370
	ctx.lr = 0x822B12E8;
	sub_8234C370(ctx, base);
loc_822B12E8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822b146c
	if (ctx.cr6.eq) goto loc_822B146C;
	// lwz r9,252(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// stw r3,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r3.u32);
	// ori r8,r9,4
	ctx.r8.u64 = ctx.r9.u64 | 4;
	// stw r8,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r8.u32);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x822B1310;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822b13b4
	if (ctx.cr6.eq) goto loc_822B13B4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r3,252(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// addis r10,r30,8
	ctx.r10.s64 = ctx.r30.s64 + 524288;
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f0,9924(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9924);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stfs f0,228(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// lfs f0,-6872(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -6872);
	ctx.f0.f64 = double(temp.f32);
	// ori r11,r3,256
	ctx.r11.u64 = ctx.r3.u64 | 256;
	// addi r3,r10,-7996
	ctx.r3.s64 = ctx.r10.s64 + -7996;
	// stfs f0,224(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// stw r11,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r11.u32);
	// bl 0x823484f8
	ctx.lr = 0x822B1354;
	sub_823484F8(ctx, base);
	// addi r9,r3,64
	ctx.r9.s64 = ctx.r3.s64 + 64;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// ld r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// std r7,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r7.u64);
	// std r6,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r6.u64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r5,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r5.u64);
	// std r4,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r4.u64);
	// lwz r3,252(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// ori r11,r3,1
	ctx.r11.u64 = ctx.r3.u64 | 1;
	// b 0x822b13b8
	goto loc_822B13B8;
loc_822B13B4:
	// lwz r11,252(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
loc_822B13B8:
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stfs f30,196(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f29,212(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// ori r10,r11,16384
	ctx.r10.u64 = ctx.r11.u64 | 16384;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f0,1224(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1224);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bgt cr6,0x822b13f4
	if (ctx.cr6.gt) goto loc_822B13F4;
	// bso cr6,0x822b13f4
	if (ctx.cr6.so) goto loc_822B13F4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-4824(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4824);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// blt cr6,0x822b13f4
	if (ctx.cr6.lt) goto loc_822B13F4;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// bns cr6,0x822b13f8
	if (!ctx.cr6.so) goto loc_822B13F8;
loc_822B13F4:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_822B13F8:
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822b140c
	if (!ctx.cr6.eq) goto loc_822B140C;
	// stfs f31,216(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// ori r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 128;
loc_822B140C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r8,460(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 460);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stb r28,265(r1)
	PPC_STORE_U8(ctx.r1.u32 + 265, ctx.r28.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r28,264(r1)
	PPC_STORE_U8(ctx.r1.u32 + 264, ctx.r28.u8);
	// lfs f0,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// ori r11,r10,2048
	ctx.r11.u64 = ctx.r10.u64 | 2048;
	// addis r10,r30,5
	ctx.r10.s64 = ctx.r30.s64 + 327680;
	// stfs f0,200(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// oris r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 2097152;
	// stb r8,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r8.u8);
	// addi r4,r10,7240
	ctx.r4.s64 = ctx.r10.s64 + 7240;
	// oris r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 4194304;
	// ori r6,r11,16
	ctx.r6.u64 = ctx.r11.u64 | 16;
	// stw r6,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r6.u32);
	// bl 0x82350920
	ctx.lr = 0x822B1450;
	sub_82350920(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// stw r5,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r5.u32);
	// stw r4,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r4.u32);
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
loc_822B146C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f30,-64(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_822B1848) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f3,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f3.f64 = double(temp.f32);
	// fcmpu cr6,f1,f3
	ctx.cr6.compare(ctx.f1.f64, ctx.f3.f64);
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f0.u32);
	// bso cr6,0x822b1880
	if (ctx.cr6.so) goto loc_822B1880;
	// ble cr6,0x822b19a4
	if (!ctx.cr6.gt) goto loc_822B19A4;
loc_822B1880:
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x822b19a4
	if (!ctx.cr6.eq) goto loc_822B19A4;
	// fcmpu cr6,f1,f2
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f2.f64);
	// ble cr6,0x822b18a0
	if (!ctx.cr6.gt) goto loc_822B18A0;
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// b 0x822b19a4
	goto loc_822B19A4;
loc_822B18A0:
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r30,96(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpw cr6,r30,r7
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x822b19a0
	if (!ctx.cr6.lt) goto loc_822B19A0;
	// clrlwi r6,r6,24
	ctx.r6.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x822b1904
	if (ctx.cr6.eq) goto loc_822B1904;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,18
	ctx.r3.s64 = 18;
	// lis r8,23388
	ctx.r8.s64 = 1532755968;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r7,r8,60808
	ctx.r7.u64 = ctx.r8.u64 | 60808;
	// lfs f2,2868(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r5,18064
	ctx.r5.s64 = 1183842304;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// stb r10,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r10.u8);
	// rldimi r5,r7,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lfs f1,-27180(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27180);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822b1238
	ctx.lr = 0x822B1900;
	sub_822B1238(ctx, base);
	// b 0x822b19a0
	goto loc_822B19A0;
loc_822B1904:
	// lwz r6,1916(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1916);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x822b1954
	if (ctx.cr6.eq) goto loc_822B1954;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,18
	ctx.r3.s64 = 18;
	// lis r8,-17047
	ctx.r8.s64 = -1117192192;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r7,r8,47390
	ctx.r7.u64 = ctx.r8.u64 | 47390;
	// lfs f2,2868(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r5,-32320
	ctx.r5.s64 = -2118123520;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// rldimi r5,r7,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// stb r10,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r10.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f1,-27180(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27180);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822b1238
	ctx.lr = 0x822B1950;
	sub_822B1238(ctx, base);
	// b 0x822b19a0
	goto loc_822B19A0;
loc_822B1954:
	// lwz r6,1920(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1920);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x822b19a0
	if (ctx.cr6.eq) goto loc_822B19A0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,18
	ctx.r3.s64 = 18;
	// lis r8,-17047
	ctx.r8.s64 = -1117192192;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r7,r8,47390
	ctx.r7.u64 = ctx.r8.u64 | 47390;
	// lfs f2,2868(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r5,-32320
	ctx.r5.s64 = -2118123520;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// rldimi r5,r7,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// stb r10,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r10.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f1,-27180(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27180);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822b1238
	ctx.lr = 0x822B19A0;
	sub_822B1238(ctx, base);
loc_822B19A0:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_822B19A4:
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
PPC_FUNC_IMPL(__imp__sub_822B1DC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,15
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 15, ctx.xer);
	// bgt cr6,0x822b2488
	if (ctx.cr6.gt) goto loc_822B2488;
	// lis r12,-32213
	ctx.r12.s64 = -2111111168;
	// addi r12,r12,7676
	ctx.r12.s64 = ctx.r12.s64 + 7676;
	// rlwinm r0,r4,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r4.u64) {
	case 0:
		goto loc_822B1E3C;
	case 1:
		goto loc_822B1EA0;
	case 2:
		goto loc_822B1F04;
	case 3:
		goto loc_822B1F68;
	case 4:
		goto loc_822B202C;
	case 5:
		goto loc_822B2090;
	case 6:
		goto loc_822B20F4;
	case 7:
		goto loc_822B1FCC;
	case 8:
		goto loc_822B2154;
	case 9:
		goto loc_822B21CC;
	case 10:
		goto loc_822B2244;
	case 11:
		goto loc_822B22A8;
	case 12:
		goto loc_822B230C;
	case 13:
		goto loc_822B2370;
	case 14:
		goto loc_822B23D4;
	case 15:
		goto loc_822B2438;
	default:
		__builtin_unreachable();
	}
	// lwz r17,7740(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7740);
	// lwz r17,7840(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7840);
	// lwz r17,7940(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7940);
	// lwz r17,8040(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8040);
	// lwz r17,8236(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8236);
	// lwz r17,8336(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8336);
	// lwz r17,8436(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8436);
	// lwz r17,8140(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8140);
	// lwz r17,8532(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8532);
	// lwz r17,8652(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8652);
	// lwz r17,8772(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8772);
	// lwz r17,8872(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8872);
	// lwz r17,8972(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8972);
	// lwz r17,9072(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9072);
	// lwz r17,9172(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9172);
	// lwz r17,9272(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9272);
loc_822B1E3C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r6,1916(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1916);
	// lis r7,24351
	ctx.r7.s64 = 1595867136;
	// lis r4,-18687
	ctx.r4.s64 = -1224671232;
	// li r10,18
	ctx.r10.s64 = 18;
	// ori r3,r4,21204
	ctx.r3.u64 = ctx.r4.u64 | 21204;
	// lfs f3,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f3.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r5,r7,40100
	ctx.r5.u64 = ctx.r7.u64 | 40100;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// rldimi r5,r3,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// lfs f2,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r8,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r8.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f1,6080(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6080);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822b1238
	ctx.lr = 0x822B1E8C;
	sub_822B1238(ctx, base);
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
loc_822B1EA0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r6,1920(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1920);
	// lis r7,-30596
	ctx.r7.s64 = -2005139456;
	// lis r4,28820
	ctx.r4.s64 = 1888747520;
	// li r10,18
	ctx.r10.s64 = 18;
	// ori r3,r4,12532
	ctx.r3.u64 = ctx.r4.u64 | 12532;
	// lfs f3,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f3.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r5,r7,32768
	ctx.r5.u64 = ctx.r7.u64 | 32768;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// rldimi r5,r3,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// lfs f2,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r8,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r8.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f1,-15128(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15128);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822b1238
	ctx.lr = 0x822B1EF0;
	sub_822B1238(ctx, base);
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
loc_822B1F04:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r6,1920(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1920);
	// lis r7,6636
	ctx.r7.s64 = 434896896;
	// lis r4,-31728
	ctx.r4.s64 = -2079326208;
	// li r10,18
	ctx.r10.s64 = 18;
	// ori r3,r4,36456
	ctx.r3.u64 = ctx.r4.u64 | 36456;
	// lfs f3,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f3.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r5,r7,9280
	ctx.r5.u64 = ctx.r7.u64 | 9280;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// rldimi r5,r3,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// lfs f2,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r8,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r8.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f1,6080(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6080);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822b1238
	ctx.lr = 0x822B1F54;
	sub_822B1238(ctx, base);
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
loc_822B1F68:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r6,1920(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1920);
	// lis r7,13138
	ctx.r7.s64 = 861011968;
	// lis r4,-22906
	ctx.r4.s64 = -1501167616;
	// li r10,18
	ctx.r10.s64 = 18;
	// ori r3,r4,19662
	ctx.r3.u64 = ctx.r4.u64 | 19662;
	// lfs f3,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f3.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r5,r7,54400
	ctx.r5.u64 = ctx.r7.u64 | 54400;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// rldimi r5,r3,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// lfs f2,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r8,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r8.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f1,6080(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6080);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822b1238
	ctx.lr = 0x822B1FB8;
	sub_822B1238(ctx, base);
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
loc_822B1FCC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r6,1920(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1920);
	// lis r7,23109
	ctx.r7.s64 = 1514471424;
	// li r10,18
	ctx.r10.s64 = 18;
	// ori r4,r7,43487
	ctx.r4.u64 = ctx.r7.u64 | 43487;
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f3,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f3.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r5,30204
	ctx.r5.s64 = 1979449344;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// rldimi r5,r4,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r8,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r8.u8);
	// lfs f2,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f1,6080(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6080);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822b1238
	ctx.lr = 0x822B2018;
	sub_822B1238(ctx, base);
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
loc_822B202C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r6,1920(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1920);
	// lis r7,15870
	ctx.r7.s64 = 1040056320;
	// lis r4,-22906
	ctx.r4.s64 = -1501167616;
	// li r10,18
	ctx.r10.s64 = 18;
	// ori r3,r4,19662
	ctx.r3.u64 = ctx.r4.u64 | 19662;
	// lfs f3,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f3.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r5,r7,27648
	ctx.r5.u64 = ctx.r7.u64 | 27648;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// rldimi r5,r3,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// lfs f2,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r8,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r8.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f1,6080(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6080);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822b1238
	ctx.lr = 0x822B207C;
	sub_822B1238(ctx, base);
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
loc_822B2090:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r6,1920(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1920);
	// lis r7,32747
	ctx.r7.s64 = 2146107392;
	// lis r4,28820
	ctx.r4.s64 = 1888747520;
	// li r10,18
	ctx.r10.s64 = 18;
	// ori r3,r4,12543
	ctx.r3.u64 = ctx.r4.u64 | 12543;
	// lfs f3,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f3.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r5,r7,40960
	ctx.r5.u64 = ctx.r7.u64 | 40960;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// rldimi r5,r3,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// lfs f2,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r8,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r8.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f1,6080(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6080);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822b1238
	ctx.lr = 0x822B20E0;
	sub_822B1238(ctx, base);
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
loc_822B20F4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r6,1920(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1920);
	// lis r7,-27779
	ctx.r7.s64 = -1820524544;
	// li r10,18
	ctx.r10.s64 = 18;
	// ori r4,r7,20889
	ctx.r4.u64 = ctx.r7.u64 | 20889;
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f3,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f3.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r5,-4612
	ctx.r5.s64 = -302252032;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// rldimi r5,r4,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r8,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r8.u8);
	// lfs f2,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f1,6080(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6080);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822b1238
	ctx.lr = 0x822B2140;
	sub_822B1238(ctx, base);
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
loc_822B2154:
	// lbz r3,1325(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1325);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822b2488
	if (!ctx.cr6.eq) goto loc_822B2488;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r6,1920(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1920);
	// lis r7,8382
	ctx.r7.s64 = 549322752;
	// lis r4,22106
	ctx.r4.s64 = 1448738816;
	// li r10,18
	ctx.r10.s64 = 18;
	// ori r3,r4,17516
	ctx.r3.u64 = ctx.r4.u64 | 17516;
	// lfs f3,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f3.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r5,r7,62976
	ctx.r5.u64 = ctx.r7.u64 | 62976;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// rldimi r5,r3,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// lfs f2,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r8,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r8.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f1,-15112(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15112);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822b1238
	ctx.lr = 0x822B21B0;
	sub_822B1238(ctx, base);
	// li r11,60
	ctx.r11.s64 = 60;
	// stb r11,1325(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1325, ctx.r11.u8);
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
loc_822B21CC:
	// lbz r10,1325(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1325);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822b2488
	if (!ctx.cr6.eq) goto loc_822B2488;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r6,1920(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1920);
	// lis r4,22106
	ctx.r4.s64 = 1448738816;
	// lis r5,4855
	ctx.r5.s64 = 318177280;
	// ori r3,r4,17516
	ctx.r3.u64 = ctx.r4.u64 | 17516;
	// li r8,18
	ctx.r8.s64 = 18;
	// lfs f3,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f3.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r5,r5,40448
	ctx.r5.u64 = ctx.r5.u64 | 40448;
	// li r9,0
	ctx.r9.s64 = 0;
	// rldimi r5,r3,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// lfs f2,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r7,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r7.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f1,6080(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6080);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822b1238
	ctx.lr = 0x822B2228;
	sub_822B1238(ctx, base);
	// li r11,60
	ctx.r11.s64 = 60;
	// stb r11,1325(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1325, ctx.r11.u8);
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
loc_822B2244:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r6,1920(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1920);
	// lis r7,8382
	ctx.r7.s64 = 549322752;
	// lis r4,22106
	ctx.r4.s64 = 1448738816;
	// li r10,18
	ctx.r10.s64 = 18;
	// ori r3,r4,17516
	ctx.r3.u64 = ctx.r4.u64 | 17516;
	// lfs f3,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f3.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r5,r7,62976
	ctx.r5.u64 = ctx.r7.u64 | 62976;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// rldimi r5,r3,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// lfs f2,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r8,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r8.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f1,6080(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6080);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822b1238
	ctx.lr = 0x822B2294;
	sub_822B1238(ctx, base);
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
loc_822B22A8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r6,1916(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1916);
	// lis r7,24351
	ctx.r7.s64 = 1595867136;
	// lis r4,-18687
	ctx.r4.s64 = -1224671232;
	// li r10,18
	ctx.r10.s64 = 18;
	// ori r3,r4,21204
	ctx.r3.u64 = ctx.r4.u64 | 21204;
	// lfs f3,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f3.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r5,r7,40100
	ctx.r5.u64 = ctx.r7.u64 | 40100;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// rldimi r5,r3,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// lfs f2,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r8,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r8.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f1,6080(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6080);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822b1238
	ctx.lr = 0x822B22F8;
	sub_822B1238(ctx, base);
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
loc_822B230C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r6,1916(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1916);
	// lis r7,24351
	ctx.r7.s64 = 1595867136;
	// lis r4,-18687
	ctx.r4.s64 = -1224671232;
	// li r10,18
	ctx.r10.s64 = 18;
	// ori r3,r4,21204
	ctx.r3.u64 = ctx.r4.u64 | 21204;
	// lfs f3,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f3.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r5,r7,40100
	ctx.r5.u64 = ctx.r7.u64 | 40100;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// rldimi r5,r3,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// lfs f2,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r8,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r8.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f1,6080(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6080);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822b1238
	ctx.lr = 0x822B235C;
	sub_822B1238(ctx, base);
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
loc_822B2370:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r6,1920(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1920);
	// lis r7,6557
	ctx.r7.s64 = 429719552;
	// lis r4,-30596
	ctx.r4.s64 = -2005139456;
	// li r10,18
	ctx.r10.s64 = 18;
	// ori r3,r4,49990
	ctx.r3.u64 = ctx.r4.u64 | 49990;
	// lfs f3,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f3.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r5,r7,32768
	ctx.r5.u64 = ctx.r7.u64 | 32768;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// rldimi r5,r3,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// lfs f2,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r8,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r8.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f1,-15112(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15112);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822b1238
	ctx.lr = 0x822B23C0;
	sub_822B1238(ctx, base);
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
loc_822B23D4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r6,1920(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1920);
	// lis r7,-12950
	ctx.r7.s64 = -848691200;
	// lis r4,-30595
	ctx.r4.s64 = -2005073920;
	// li r10,18
	ctx.r10.s64 = 18;
	// ori r3,r4,1790
	ctx.r3.u64 = ctx.r4.u64 | 1790;
	// lfs f3,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f3.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r5,r7,32768
	ctx.r5.u64 = ctx.r7.u64 | 32768;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// rldimi r5,r3,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// lfs f2,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r8,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r8.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f1,-15112(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15112);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822b1238
	ctx.lr = 0x822B2424;
	sub_822B1238(ctx, base);
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
loc_822B2438:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r6,1920(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1920);
	// lis r7,5163
	ctx.r7.s64 = 338362368;
	// lis r4,-30595
	ctx.r4.s64 = -2005073920;
	// li r10,18
	ctx.r10.s64 = 18;
	// ori r3,r4,10555
	ctx.r3.u64 = ctx.r4.u64 | 10555;
	// lfs f3,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f3.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r5,r7,45056
	ctx.r5.u64 = ctx.r7.u64 | 45056;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// rldimi r5,r3,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// lfs f2,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r8,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r8.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f1,-15112(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15112);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822b1238
	ctx.lr = 0x822B2488;
	sub_822B1238(ctx, base);
loc_822B2488:
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
PPC_FUNC_IMPL(__imp__sub_822B2570) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// blt cr6,0x822b2664
	if (ctx.cr6.lt) goto loc_822B2664;
	// beq cr6,0x822b25fc
	if (ctx.cr6.eq) goto loc_822B25FC;
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// bge cr6,0x822b26bc
	if (!ctx.cr6.lt) goto loc_822B26BC;
	// lbz r11,1230(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1230);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822b26bc
	if (!ctx.cr6.eq) goto loc_822B26BC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r6,1920(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1920);
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r4,21360
	ctx.r4.s64 = 1399848960;
	// li r8,18
	ctx.r8.s64 = 18;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f3,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f3.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r5,-12544
	ctx.r5.s64 = -822083584;
	// stb r10,1230(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1230, ctx.r10.u8);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// stb r7,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r7.u8);
	// lfs f2,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f2.f64 = double(temp.f32);
	// ori r11,r4,27443
	ctx.r11.u64 = ctx.r4.u64 | 27443;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// rldimi r5,r11,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822b1238
	ctx.lr = 0x822B25EC;
	sub_822B1238(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822B25FC:
	// lbz r10,1229(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1229);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822b26bc
	if (!ctx.cr6.eq) goto loc_822B26BC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r6,1920(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1920);
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r10,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r10.u8);
	// lis r4,21360
	ctx.r4.s64 = 1399848960;
	// li r7,18
	ctx.r7.s64 = 18;
	// lis r5,-12544
	ctx.r5.s64 = -822083584;
	// lfs f3,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f3.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stb r8,1229(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1229, ctx.r8.u8);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// lfs f2,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f2.f64 = double(temp.f32);
	// ori r11,r4,27443
	ctx.r11.u64 = ctx.r4.u64 | 27443;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// rldimi r5,r11,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822b1238
	ctx.lr = 0x822B2654;
	sub_822B1238(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822B2664:
	// lbz r10,1228(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1228);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822b26bc
	if (!ctx.cr6.eq) goto loc_822B26BC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r6,1920(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1920);
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r10,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r10.u8);
	// lis r4,24887
	ctx.r4.s64 = 1630994432;
	// li r7,18
	ctx.r7.s64 = 18;
	// lis r5,-1024
	ctx.r5.s64 = -67108864;
	// lfs f3,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f3.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stb r8,1228(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1228, ctx.r8.u8);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// lfs f2,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f2.f64 = double(temp.f32);
	// ori r11,r4,54151
	ctx.r11.u64 = ctx.r4.u64 | 54151;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// rldimi r5,r11,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822b1238
	ctx.lr = 0x822B26BC;
	sub_822B1238(ctx, base);
loc_822B26BC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}
PPC_FUNC_IMPL(__imp__sub_822B26D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1332(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1332);
	ctx.f0.f64 = double(temp.f32);
	// lfs f3,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f3.f64 = double(temp.f32);
	// fcmpu cr6,f0,f3
	ctx.cr6.compare(ctx.f0.f64, ctx.f3.f64);
	// bgt cr6,0x822b2768
	if (ctx.cr6.gt) goto loc_822B2768;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lis r10,34
	ctx.r10.s64 = 2228224;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// ori r9,r10,55280
	ctx.r9.u64 = ctx.r10.u64 | 55280;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lbz r8,599(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 599);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x822b2768
	if (!ctx.cr6.eq) goto loc_822B2768;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r6,1916(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1916);
	// lis r8,22865
	ctx.r8.s64 = 1498480640;
	// li r7,18
	ctx.r7.s64 = 18;
	// ori r4,r8,25284
	ctx.r4.u64 = ctx.r8.u64 | 25284;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f2,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r5,14736
	ctx.r5.s64 = 965738496;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// rldimi r5,r4,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r10,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r10.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f1,-15112(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15112);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822b1238
	ctx.lr = 0x822B275C;
	sub_822B1238(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f0,-15120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1332(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1332, temp.u32);
loc_822B2768:
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
PPC_FUNC_IMPL(__imp__sub_822B2960) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x822B2968;
	__savegprlr_26(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// std r5,384(r1)
	PPC_STORE_U64(ctx.r1.u32 + 384, ctx.r5.u64);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r26,70
	ctx.r10.s64 = ctx.r26.s64 + 70;
	// lfs f0,2868(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stfs f0,1220(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1220, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822B29A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x822b2b74
	if (!ctx.cr6.eq) goto loc_822B2B74;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r29,r11,-18560
	ctx.r29.s64 = ctx.r11.s64 + -18560;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// stw r27,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r27.u32);
	// bl 0x8234c370
	ctx.lr = 0x822B29D0;
	sub_8234C370(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x822b29f0
	if (!ctx.cr6.eq) goto loc_822B29F0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,1920(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1920);
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// bl 0x8234beb0
	ctx.lr = 0x822B29EC;
	sub_8234BEB0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_822B29F0:
	// stw r27,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r27.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r6,0(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x822B2A08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822b2aac
	if (ctx.cr6.eq) goto loc_822B2AAC;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r3,252(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// addis r10,r29,8
	ctx.r10.s64 = ctx.r29.s64 + 524288;
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f0,9924(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9924);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stfs f0,228(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// lfs f0,-6872(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -6872);
	ctx.f0.f64 = double(temp.f32);
	// ori r11,r3,256
	ctx.r11.u64 = ctx.r3.u64 | 256;
	// addi r3,r10,-7996
	ctx.r3.s64 = ctx.r10.s64 + -7996;
	// stfs f0,224(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// stw r11,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r11.u32);
	// bl 0x823484f8
	ctx.lr = 0x822B2A4C;
	sub_823484F8(ctx, base);
	// addi r9,r3,64
	ctx.r9.s64 = ctx.r3.s64 + 64;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// ld r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// std r7,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r7.u64);
	// std r6,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r6.u64);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,13360(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 13360);
	ctx.f0.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r5,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r5.u64);
	// std r4,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r4.u64);
	// lwz r3,252(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// ori r11,r3,1
	ctx.r11.u64 = ctx.r3.u64 | 1;
	// b 0x822b2af4
	goto loc_822B2AF4;
loc_822B2AAC:
	// srawi r11,r26,1
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r26.s32 >> 1;
	// addze r10,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r8,r9,r26
	ctx.r8.s64 = ctx.r26.s64 - ctx.r9.s64;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r4,r7,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822b2ae0
	if (ctx.cr6.eq) goto loc_822B2AE0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r3,252(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// lfs f0,-15136(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15136);
	ctx.f0.f64 = double(temp.f32);
	// ori r11,r3,64
	ctx.r11.u64 = ctx.r3.u64 | 64;
	// b 0x822b2af0
	goto loc_822B2AF0;
loc_822B2AE0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,25556(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25556);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,252(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
loc_822B2AF0:
	// stfs f0,208(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
loc_822B2AF4:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r28,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r28.u32);
	// ori r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 4096;
	// li r8,1
	ctx.r8.s64 = 1;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// li r7,18
	ctx.r7.s64 = 18;
	// lfs f0,2864(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// addi r10,r26,300
	ctx.r10.s64 = ctx.r26.s64 + 300;
	// stfs f0,196(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// ori r6,r11,8
	ctx.r6.u64 = ctx.r11.u64 | 8;
	// stb r8,257(r1)
	PPC_STORE_U8(ctx.r1.u32 + 257, ctx.r8.u8);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addis r10,r29,5
	ctx.r10.s64 = ctx.r29.s64 + 327680;
	// stb r7,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r7.u8);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r10,7240
	ctx.r4.s64 = ctx.r10.s64 + 7240;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r6,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r6.u32);
	// stfsx f0,r9,r31
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, temp.u32);
	// bl 0x82350920
	ctx.lr = 0x822B2B48;
	sub_82350920(ctx, base);
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// stw r5,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r5.u32);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lfs f0,-15100(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15100);
	ctx.f0.f64 = double(temp.f32);
	// stw r4,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r4.u32);
	// lbz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// stb r3,12(r30)
	PPC_STORE_U8(ctx.r30.u32 + 12, ctx.r3.u8);
	// lfs f10,1224(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1224);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// stfs f9,1224(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1224, temp.u32);
loc_822B2B74:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_822B2C20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x822B2C28;
	__savegprlr_27(ctx, base);
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,1908(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1908);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x822b2cf8
	if (ctx.cr6.eq) goto loc_822B2CF8;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x822b2cfc
	if (ctx.cr6.eq) goto loc_822B2CFC;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r27,18
	ctx.r27.s64 = 18;
	// li r28,0
	ctx.r28.s64 = 0;
	// lis r30,-32255
	ctx.r30.s64 = -2113863680;
	// lfs f30,2864(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2864);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f31.f64 = double(temp.f32);
	// ble cr6,0x822b2cb0
	if (!ctx.cr6.gt) goto loc_822B2CB0;
	// lis r11,13138
	ctx.r11.s64 = 861011968;
	// lwz r6,1920(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1920);
	// lis r10,-22906
	ctx.r10.s64 = -1501167616;
	// lfs f1,6080(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 6080);
	ctx.f1.f64 = double(temp.f32);
	// ori r5,r11,54400
	ctx.r5.u64 = ctx.r11.u64 | 54400;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// ori r8,r10,19662
	ctx.r8.u64 = ctx.r10.u64 | 19662;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// rldimi r5,r8,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// stb r28,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r28.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822b1238
	ctx.lr = 0x822B2CB0;
	sub_822B1238(ctx, base);
loc_822B2CB0:
	// lwz r7,1908(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1908);
	// cmpw cr6,r29,r7
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x822b2cf8
	if (!ctx.cr6.lt) goto loc_822B2CF8;
	// lis r4,-22906
	ctx.r4.s64 = -1501167616;
	// lwz r6,1920(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1920);
	// lis r5,15870
	ctx.r5.s64 = 1040056320;
	// lfs f1,6080(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 6080);
	ctx.f1.f64 = double(temp.f32);
	// ori r3,r4,19662
	ctx.r3.u64 = ctx.r4.u64 | 19662;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// ori r5,r5,27648
	ctx.r5.u64 = ctx.r5.u64 | 27648;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// rldimi r5,r3,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// stb r28,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r28.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822b1238
	ctx.lr = 0x822B2CF8;
	sub_822B1238(ctx, base);
loc_822B2CF8:
	// stw r29,1908(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1908, ctx.r29.u32);
loc_822B2CFC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_822B35D0) {
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
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,9944
	ctx.r4.s64 = ctx.r11.s64 + 9944;
	// lwz r3,1920(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1920);
	// bl 0x8234beb0
	ctx.lr = 0x822B35FC;
	sub_8234BEB0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r3,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r3.u32);
	// addi r30,r31,204
	ctx.r30.s64 = ctx.r31.s64 + 204;
	// lis r7,64
	ctx.r7.s64 = 4194304;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f0,-27244(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27244);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,180(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r8,18
	ctx.r8.s64 = 18;
	// ori r6,r7,2252
	ctx.r6.u64 = ctx.r7.u64 | 2252;
	// stb r10,248(r1)
	PPC_STORE_U8(ctx.r1.u32 + 248, ctx.r10.u8);
	// stb r9,1232(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1232, ctx.r9.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f0,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,192(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// lwz r4,12(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// stb r8,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r8.u8);
	// stw r6,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r6.u32);
	// stb r10,1233(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1233, ctx.r10.u8);
	// lfs f0,25556(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25556);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,200(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x822B3664;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822b36a4
	if (!ctx.cr6.eq) goto loc_822B36A4;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-18560
	ctx.r11.s64 = ctx.r11.s64 + -18560;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addis r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 327680;
	// addi r4,r11,7240
	ctx.r4.s64 = ctx.r11.s64 + 7240;
	// bl 0x82350920
	ctx.lr = 0x822B368C;
	sub_82350920(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// lbz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// stb r9,12(r30)
	PPC_STORE_U8(ctx.r30.u32 + 12, ctx.r9.u8);
loc_822B36A4:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
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
PPC_FUNC_IMPL(__imp__sub_822B3848) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x822B3850;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfd f13,4208(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 4208);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r3,1920(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1920);
	// addi r4,r11,9960
	ctx.r4.s64 = ctx.r11.s64 + 9960;
	// stb r29,1234(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1234, ctx.r29.u8);
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r31,r11,-18560
	ctx.r31.s64 = ctx.r11.s64 + -18560;
	// lis r11,8
	ctx.r11.s64 = 524288;
	// ori r10,r11,48400
	ctx.r10.u64 = ctx.r11.u64 | 48400;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfsx f0,r31,r10
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,-1528(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1528);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fsel f31,f12,f0,f13
	ctx.f31.f64 = ctx.f12.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// bl 0x8234beb0
	ctx.lr = 0x822B38A4;
	sub_8234BEB0(ctx, base);
	// addi r30,r30,236
	ctx.r30.s64 = ctx.r30.s64 + 236;
	// stw r3,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r3.u32);
	// lis r8,64
	ctx.r8.s64 = 4194304;
	// stfs f31,180(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stb r29,248(r1)
	PPC_STORE_U8(ctx.r1.u32 + 248, ctx.r29.u8);
	// li r9,20
	ctx.r9.s64 = 20;
	// ori r7,r8,2124
	ctx.r7.u64 = ctx.r8.u64 | 2124;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f0,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,192(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stb r9,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r9.u8);
	// stw r7,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r7.u32);
	// lwz r5,12(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x822B38E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x822b3920
	if (!ctx.cr6.eq) goto loc_822B3920;
	// addis r11,r31,5
	ctx.r11.s64 = ctx.r31.s64 + 327680;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,7240
	ctx.r4.s64 = ctx.r11.s64 + 7240;
	// bl 0x82350920
	ctx.lr = 0x822B3908;
	sub_82350920(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// lbz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// stb r9,12(r30)
	PPC_STORE_U8(ctx.r30.u32 + 12, ctx.r9.u8);
loc_822B3920:
	// lis r8,8
	ctx.r8.s64 = 524288;
	// li r11,2
	ctx.r11.s64 = 2;
	// ori r7,r8,49176
	ctx.r7.u64 = ctx.r8.u64 | 49176;
	// lis r6,8
	ctx.r6.s64 = 524288;
	// lis r4,8
	ctx.r4.s64 = 524288;
	// ori r5,r6,49164
	ctx.r5.u64 = ctx.r6.u64 | 49164;
	// ori r3,r4,49172
	ctx.r3.u64 = ctx.r4.u64 | 49172;
	// stwx r11,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u32);
	// lis r11,-17700
	ctx.r11.s64 = -1159987200;
	// ori r11,r11,45024
	ctx.r11.u64 = ctx.r11.u64 | 45024;
	// stwx r11,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r11.u32);
	// lwzx r11,r31,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x822b396c
	if (ctx.cr6.eq) goto loc_822B396C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x822b396c
	if (ctx.cr6.eq) goto loc_822B396C;
	// addis r11,r31,9
	ctx.r11.s64 = ctx.r31.s64 + 589824;
	// addi r3,r11,-17140
	ctx.r3.s64 = ctx.r11.s64 + -17140;
	// bl 0x822ade70
	ctx.lr = 0x822B396C;
	sub_822ADE70(ctx, base);
loc_822B396C:
	// lis r11,8
	ctx.r11.s64 = 524288;
	// ori r10,r11,49172
	ctx.r10.u64 = ctx.r11.u64 | 49172;
	// addis r11,r31,9
	ctx.r11.s64 = ctx.r31.s64 + 589824;
	// addi r3,r11,-17140
	ctx.r3.s64 = ctx.r11.s64 + -17140;
	// stwx r29,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r29.u32);
	// bl 0x822add90
	ctx.lr = 0x822B3984;
	sub_822ADD90(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_822B3990) {
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
	// lbz r11,1234(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1234);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b39dc
	if (ctx.cr6.eq) goto loc_822B39DC;
	// addi r11,r3,236
	ctx.r11.s64 = ctx.r3.s64 + 236;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stb r10,1234(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1234, ctx.r10.u8);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822B39C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r11,r11,-18560
	ctx.r11.s64 = ctx.r11.s64 + -18560;
	// addis r11,r11,9
	ctx.r11.s64 = ctx.r11.s64 + 589824;
	// addi r3,r11,-17140
	ctx.r3.s64 = ctx.r11.s64 + -17140;
	// bl 0x822ade70
	ctx.lr = 0x822B39DC;
	sub_822ADE70(ctx, base);
loc_822B39DC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}
PPC_FUNC_IMPL(__imp__sub_822B49B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bac0
	ctx.lr = 0x822B49B8;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x8259bb98
	ctx.lr = 0x822B49C0;
	__savefpr_24(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r27,r30,15404
	ctx.r27.s64 = ctx.r30.s64 + 15404;
	// addi r29,r30,432
	ctx.r29.s64 = ctx.r30.s64 + 432;
	// li r31,16
	ctx.r31.s64 = 16;
	// stw r28,400(r30)
	PPC_STORE_U32(ctx.r30.u32 + 400, ctx.r28.u32);
loc_822B49DC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822a56f0
	ctx.lr = 0x822B49E4;
	sub_822A56F0(ctx, base);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// stb r28,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r28.u8);
	// addi r29,r29,368
	ctx.r29.s64 = ctx.r29.s64 + 368;
	// addi r27,r27,132
	ctx.r27.s64 = ctx.r27.s64 + 132;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x822b49dc
	if (!ctx.cr6.eq) goto loc_822B49DC;
	// addi r29,r30,6320
	ctx.r29.s64 = ctx.r30.s64 + 6320;
	// li r31,48
	ctx.r31.s64 = 48;
loc_822B4A04:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822a4750
	ctx.lr = 0x822B4A0C;
	sub_822A4750(ctx, base);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r29,r29,188
	ctx.r29.s64 = ctx.r29.s64 + 188;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x822b4a04
	if (!ctx.cr6.eq) goto loc_822B4A04;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// lis r9,-698
	ctx.r9.s64 = -45744128;
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// ori r3,r9,10503
	ctx.r3.u64 = ctx.r9.u64 | 10503;
	// addi r27,r30,20
	ctx.r27.s64 = ctx.r30.s64 + 20;
	// lfs f30,2868(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f30.f64 = double(temp.f32);
	// lis r11,697
	ctx.r11.s64 = 45678592;
	// addi r26,r30,24
	ctx.r26.s64 = ctx.r30.s64 + 24;
	// ori r10,r11,55032
	ctx.r10.u64 = ctx.r11.u64 | 55032;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// addi r25,r30,28
	ctx.r25.s64 = ctx.r30.s64 + 28;
	// addi r24,r30,32
	ctx.r24.s64 = ctx.r30.s64 + 32;
	// addi r23,r30,36
	ctx.r23.s64 = ctx.r30.s64 + 36;
	// addi r22,r30,40
	ctx.r22.s64 = ctx.r30.s64 + 40;
	// stw r10,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r10.u32);
	// lfs f31,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f31.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r21,r30,44
	ctx.r21.s64 = ctx.r30.s64 + 44;
	// stfs f30,0(r4)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lis r29,-32047
	ctx.r29.s64 = -2100232192;
	// stfs f30,0(r27)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// addi r5,r11,11392
	ctx.r5.s64 = ctx.r11.s64 + 11392;
	// stfs f30,0(r26)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// stfs f30,0(r25)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r25.u32 + 0, temp.u32);
	// stfs f30,0(r24)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r24.u32 + 0, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r31,r11,-26728
	ctx.r31.s64 = ctx.r11.s64 + -26728;
	// stfs f30,0(r23)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r23.u32 + 0, temp.u32);
	// stfs f30,0(r22)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r22.u32 + 0, temp.u32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// stfs f30,0(r21)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r21.u32 + 0, temp.u32);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r7,-24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// lwz r6,-16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	// bl 0x82351720
	ctx.lr = 0x822B4ABC;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r7,-24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,-16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	// addi r5,r11,11376
	ctx.r5.s64 = ctx.r11.s64 + 11376;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
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
	ctx.lr = 0x822B4AEC;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// addi r5,r11,11364
	ctx.r5.s64 = ctx.r11.s64 + 11364;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r6,-16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
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
	ctx.lr = 0x822B4B1C;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// addi r5,r11,11352
	ctx.r5.s64 = ctx.r11.s64 + 11352;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r6,-16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
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
	ctx.lr = 0x822B4B4C;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r5,r11,11340
	ctx.r5.s64 = ctx.r11.s64 + 11340;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r7,-24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r6,-16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	// bl 0x82351720
	ctx.lr = 0x822B4B7C;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// addi r5,r11,11328
	ctx.r5.s64 = ctx.r11.s64 + 11328;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r6,-16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
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
	ctx.lr = 0x822B4BAC;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// addi r5,r11,11316
	ctx.r5.s64 = ctx.r11.s64 + 11316;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwz r6,-16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
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
	ctx.lr = 0x822B4BDC;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// addi r5,r11,11304
	ctx.r5.s64 = ctx.r11.s64 + 11304;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// lwz r6,-16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
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
	ctx.lr = 0x822B4C0C;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// addi r5,r11,11284
	ctx.r5.s64 = ctx.r11.s64 + 11284;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// addi r4,r30,48
	ctx.r4.s64 = ctx.r30.s64 + 48;
	// lwz r6,-16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
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
	ctx.lr = 0x822B4C3C;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// addi r5,r11,11264
	ctx.r5.s64 = ctx.r11.s64 + 11264;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// addi r4,r30,52
	ctx.r4.s64 = ctx.r30.s64 + 52;
	// lwz r6,-16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
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
	ctx.lr = 0x822B4C6C;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// addi r4,r30,56
	ctx.r4.s64 = ctx.r30.s64 + 56;
	// lwz r6,-16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
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
	ctx.lr = 0x822B4C9C;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r5,r11,11224
	ctx.r5.s64 = ctx.r11.s64 + 11224;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r30,60
	ctx.r4.s64 = ctx.r30.s64 + 60;
	// lwz r7,-24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r6,-16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82351720
	ctx.lr = 0x822B4CCC;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r7,-24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r5,r11,11208
	ctx.r5.s64 = ctx.r11.s64 + 11208;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
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
	ctx.lr = 0x822B4CFC;
	sub_82351720(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r30,64
	ctx.r4.s64 = ctx.r30.s64 + 64;
	// stb r28,17457(r30)
	PPC_STORE_U8(ctx.r30.u32 + 17457, ctx.r28.u8);
	// li r10,120
	ctx.r10.s64 = 120;
	// stb r28,17458(r30)
	PPC_STORE_U8(ctx.r30.u32 + 17458, ctx.r28.u8);
	// addi r27,r30,68
	ctx.r27.s64 = ctx.r30.s64 + 68;
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r26,r30,72
	ctx.r26.s64 = ctx.r30.s64 + 72;
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lfs f0,-1640(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1640);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r25,r30,76
	ctx.r25.s64 = ctx.r30.s64 + 76;
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// addi r24,r30,80
	ctx.r24.s64 = ctx.r30.s64 + 80;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// addi r23,r30,84
	ctx.r23.s64 = ctx.r30.s64 + 84;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r21,r30,88
	ctx.r21.s64 = ctx.r30.s64 + 88;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// lfs f13,-1636(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1636);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r20,r30,92
	ctx.r20.s64 = ctx.r30.s64 + 92;
	// stfs f13,0(r27)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// addi r19,r30,96
	ctx.r19.s64 = ctx.r30.s64 + 96;
	// stfs f30,0(r25)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r25.u32 + 0, temp.u32);
	// addi r18,r30,100
	ctx.r18.s64 = ctx.r30.s64 + 100;
	// addi r17,r30,104
	ctx.r17.s64 = ctx.r30.s64 + 104;
	// stw r10,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r10.u32);
	// lfs f12,-15112(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15112);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r16,r30,108
	ctx.r16.s64 = ctx.r30.s64 + 108;
	// stfs f12,0(r26)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
	// addi r22,r11,2316
	ctx.r22.s64 = ctx.r11.s64 + 2316;
	// stfs f31,0(r20)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r20.u32 + 0, temp.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stfs f30,0(r17)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r17.u32 + 0, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f11,-376(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + -376);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,11204(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11204);
	ctx.f10.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f11,0(r24)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r24.u32 + 0, temp.u32);
	// stfs f10,0(r23)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r23.u32 + 0, temp.u32);
	// lfs f9,-1528(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1528);
	ctx.f9.f64 = double(temp.f32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// stfs f9,0(r19)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r19.u32 + 0, temp.u32);
	// lfs f8,-14792(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -14792);
	ctx.f8.f64 = double(temp.f32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// stfs f8,0(r18)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r18.u32 + 0, temp.u32);
	// lfs f27,-15100(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15100);
	ctx.f27.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stfs f27,0(r16)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r16.u32 + 0, temp.u32);
	// addi r5,r11,8072
	ctx.r5.s64 = ctx.r11.s64 + 8072;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x822B4DD8;
	sub_82351720(ctx, base);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r5,r11,8084
	ctx.r5.s64 = ctx.r11.s64 + 8084;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x822B4E08;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r5,r11,7504
	ctx.r5.s64 = ctx.r11.s64 + 7504;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
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
	ctx.lr = 0x822B4E38;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r5,r11,7492
	ctx.r5.s64 = ctx.r11.s64 + 7492;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
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
	ctx.lr = 0x822B4E68;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r5,r11,11188
	ctx.r5.s64 = ctx.r11.s64 + 11188;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
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
	ctx.lr = 0x822B4E98;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r5,r11,11176
	ctx.r5.s64 = ctx.r11.s64 + 11176;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
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
	ctx.lr = 0x822B4EC8;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r5,r11,11164
	ctx.r5.s64 = ctx.r11.s64 + 11164;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823514f8
	ctx.lr = 0x822B4EF8;
	sub_823514F8(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r5,r11,7528
	ctx.r5.s64 = ctx.r11.s64 + 7528;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
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
	ctx.lr = 0x822B4F28;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r5,r11,7516
	ctx.r5.s64 = ctx.r11.s64 + 7516;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82351720
	ctx.lr = 0x822B4F58;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r5,r11,11152
	ctx.r5.s64 = ctx.r11.s64 + 11152;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
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
	ctx.lr = 0x822B4F88;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r5,r11,11136
	ctx.r5.s64 = ctx.r11.s64 + 11136;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
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
	ctx.lr = 0x822B4FB8;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r5,r11,11124
	ctx.r5.s64 = ctx.r11.s64 + 11124;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
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
	ctx.lr = 0x822B4FE8;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r5,r11,11104
	ctx.r5.s64 = ctx.r11.s64 + 11104;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// addi r4,r30,116
	ctx.r4.s64 = ctx.r30.s64 + 116;
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
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
	ctx.lr = 0x822B5018;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r5,r11,11088
	ctx.r5.s64 = ctx.r11.s64 + 11088;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// addi r4,r30,112
	ctx.r4.s64 = ctx.r30.s64 + 112;
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
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
	ctx.lr = 0x822B5048;
	sub_82351720(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r27,r30,120
	ctx.r27.s64 = ctx.r30.s64 + 120;
	// addi r26,r30,124
	ctx.r26.s64 = ctx.r30.s64 + 124;
	// addi r24,r30,128
	ctx.r24.s64 = ctx.r30.s64 + 128;
	// addi r23,r30,132
	ctx.r23.s64 = ctx.r30.s64 + 132;
	// lfs f0,-27244(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27244);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f0,0(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// lfs f13,-1624(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1624);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r26)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
	// addi r9,r30,176
	ctx.r9.s64 = ctx.r30.s64 + 176;
	// stfs f31,0(r24)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r24.u32 + 0, temp.u32);
	// addi r8,r30,240
	ctx.r8.s64 = ctx.r30.s64 + 240;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r7,r30,244
	ctx.r7.s64 = ctx.r30.s64 + 244;
	// addi r6,r30,252
	ctx.r6.s64 = ctx.r30.s64 + 252;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// addi r3,r30,172
	ctx.r3.s64 = ctx.r30.s64 + 172;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r5,r30,256
	ctx.r5.s64 = ctx.r30.s64 + 256;
	// stw r6,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r6.u32);
	// addi r9,r30,268
	ctx.r9.s64 = ctx.r30.s64 + 268;
	// lfs f11,-15176(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15176);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lfs f29,6080(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6080);
	ctx.f29.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r3,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r3.u32);
	// addi r8,r30,272
	ctx.r8.s64 = ctx.r30.s64 + 272;
	// addi r7,r30,276
	ctx.r7.s64 = ctx.r30.s64 + 276;
	// stw r5,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r5.u32);
	// addi r4,r30,264
	ctx.r4.s64 = ctx.r30.s64 + 264;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// lfs f28,-15120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f28.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f26,11268(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11268);
	ctx.f26.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f28,0(r3)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// addi r21,r30,136
	ctx.r21.s64 = ctx.r30.s64 + 136;
	// addi r20,r30,140
	ctx.r20.s64 = ctx.r30.s64 + 140;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// addi r19,r30,144
	ctx.r19.s64 = ctx.r30.s64 + 144;
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// lfs f10,-1576(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -1576);
	ctx.f10.f64 = double(temp.f32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lfs f25,17976(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17976);
	ctx.f25.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r18,r30,148
	ctx.r18.s64 = ctx.r30.s64 + 148;
	// lwz r7,-24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// addi r17,r30,152
	ctx.r17.s64 = ctx.r30.s64 + 152;
	// lwz r6,-16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	// addi r16,r30,156
	ctx.r16.s64 = ctx.r30.s64 + 156;
	// stfs f29,0(r23)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r23.u32 + 0, temp.u32);
	// lfs f9,11084(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11084);
	ctx.f9.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f12,3260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3260);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r30,168
	ctx.r11.s64 = ctx.r30.s64 + 168;
	// addi r15,r30,160
	ctx.r15.s64 = ctx.r30.s64 + 160;
	// stfs f29,0(r21)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r21.u32 + 0, temp.u32);
	// addi r14,r30,164
	ctx.r14.s64 = ctx.r30.s64 + 164;
	// stfs f26,0(r20)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r20.u32 + 0, temp.u32);
	// li r25,4
	ctx.r25.s64 = 4;
	// stfs f0,0(r19)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r19.u32 + 0, temp.u32);
	// lfs f8,3548(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3548);
	ctx.f8.f64 = double(temp.f32);
	// addi r10,r30,248
	ctx.r10.s64 = ctx.r30.s64 + 248;
	// stfs f11,0(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// stfs f13,0(r18)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r18.u32 + 0, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f31,0(r17)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r17.u32 + 0, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stfs f29,0(r16)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r16.u32 + 0, temp.u32);
	// stw r25,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r25.u32);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stfs f25,0(r15)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r15.u32 + 0, temp.u32);
	// stfs f12,0(r14)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r14.u32 + 0, temp.u32);
	// lfs f7,13876(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 13876);
	ctx.f7.f64 = double(temp.f32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stfs f7,236(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r30.u32 + 236, temp.u32);
	// addi r5,r10,11064
	ctx.r5.s64 = ctx.r10.s64 + 11064;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// stfs f10,0(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stfs f9,0(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// stfs f8,0(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stfs f30,0(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stfs f30,0(r3)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stfs f28,0(r11)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r25,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r25.u32);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823514f8
	ctx.lr = 0x822B51F0;
	sub_823514F8(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r7,-24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// addi r5,r11,11044
	ctx.r5.s64 = ctx.r11.s64 + 11044;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r6,-16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x823514f8
	ctx.lr = 0x822B5220;
	sub_823514F8(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r7,-24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// addi r5,r11,11024
	ctx.r5.s64 = ctx.r11.s64 + 11024;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r6,-16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x823514f8
	ctx.lr = 0x822B5250;
	sub_823514F8(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r7,-24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// addi r5,r11,11004
	ctx.r5.s64 = ctx.r11.s64 + 11004;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r6,-16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x823514f8
	ctx.lr = 0x822B5280;
	sub_823514F8(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// addi r5,r11,10984
	ctx.r5.s64 = ctx.r11.s64 + 10984;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// lwz r6,-16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r4,108(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82351720
	ctx.lr = 0x822B52B0;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// addi r5,r11,10964
	ctx.r5.s64 = ctx.r11.s64 + 10964;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// lwz r6,-16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82351720
	ctx.lr = 0x822B52E0;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r7,-24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r5,r11,10944
	ctx.r5.s64 = ctx.r11.s64 + 10944;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// lwz r6,-16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82351720
	ctx.lr = 0x822B5310;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// addi r5,r11,10924
	ctx.r5.s64 = ctx.r11.s64 + 10924;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// lwz r6,-16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82351720
	ctx.lr = 0x822B5340;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// addi r5,r11,10908
	ctx.r5.s64 = ctx.r11.s64 + 10908;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// lwz r6,-16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82351720
	ctx.lr = 0x822B5370;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// addi r5,r11,10888
	ctx.r5.s64 = ctx.r11.s64 + 10888;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// addi r4,r30,260
	ctx.r4.s64 = ctx.r30.s64 + 260;
	// lwz r6,-16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
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
	ctx.lr = 0x822B53A0;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// addi r5,r11,10852
	ctx.r5.s64 = ctx.r11.s64 + 10852;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// lwz r6,-12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
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
	ctx.lr = 0x822B53D0;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// addi r5,r11,10816
	ctx.r5.s64 = ctx.r11.s64 + 10816;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// lwz r6,-12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
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
	ctx.lr = 0x822B5400;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// addi r5,r11,10784
	ctx.r5.s64 = ctx.r11.s64 + 10784;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// lwz r6,-12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
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
	ctx.lr = 0x822B5430;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r5,r11,10752
	ctx.r5.s64 = ctx.r11.s64 + 10752;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// lwz r7,-24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r6,-12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82351720
	ctx.lr = 0x822B5460;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// addi r5,r11,10716
	ctx.r5.s64 = ctx.r11.s64 + 10716;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// lwz r6,-12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
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
	ctx.lr = 0x822B5490;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// addi r5,r11,10680
	ctx.r5.s64 = ctx.r11.s64 + 10680;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// lwz r6,-12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
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
	ctx.lr = 0x822B54C0;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// addi r5,r11,10644
	ctx.r5.s64 = ctx.r11.s64 + 10644;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
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
	ctx.lr = 0x822B54F0;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// addi r5,r11,10608
	ctx.r5.s64 = ctx.r11.s64 + 10608;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
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
	ctx.lr = 0x822B5520;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// addi r5,r11,10576
	ctx.r5.s64 = ctx.r11.s64 + 10576;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
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
	ctx.lr = 0x822B5550;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// addi r5,r11,10544
	ctx.r5.s64 = ctx.r11.s64 + 10544;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
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
	ctx.lr = 0x822B5580;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r7,-24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,-8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// addi r5,r11,10508
	ctx.r5.s64 = ctx.r11.s64 + 10508;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
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
	ctx.lr = 0x822B55B0;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// addi r5,r11,10472
	ctx.r5.s64 = ctx.r11.s64 + 10472;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
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
	ctx.lr = 0x822B55E0;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// addi r5,r11,10456
	ctx.r5.s64 = ctx.r11.s64 + 10456;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// addi r4,r30,180
	ctx.r4.s64 = ctx.r30.s64 + 180;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
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
	ctx.lr = 0x822B5610;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// addi r5,r11,10440
	ctx.r5.s64 = ctx.r11.s64 + 10440;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// addi r4,r30,184
	ctx.r4.s64 = ctx.r30.s64 + 184;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
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
	ctx.lr = 0x822B5640;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// addi r5,r11,10416
	ctx.r5.s64 = ctx.r11.s64 + 10416;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// addi r4,r30,188
	ctx.r4.s64 = ctx.r30.s64 + 188;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
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
	ctx.lr = 0x822B5670;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// addi r5,r11,10392
	ctx.r5.s64 = ctx.r11.s64 + 10392;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// addi r4,r30,192
	ctx.r4.s64 = ctx.r30.s64 + 192;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
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
	ctx.lr = 0x822B56A0;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r7,-24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r11,10376
	ctx.r5.s64 = ctx.r11.s64 + 10376;
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r4,r30,196
	ctx.r4.s64 = ctx.r30.s64 + 196;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x822B56D0;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// addi r5,r11,10360
	ctx.r5.s64 = ctx.r11.s64 + 10360;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// addi r4,r30,200
	ctx.r4.s64 = ctx.r30.s64 + 200;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
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
	ctx.lr = 0x822B5700;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// addi r5,r11,10344
	ctx.r5.s64 = ctx.r11.s64 + 10344;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// addi r4,r30,204
	ctx.r4.s64 = ctx.r30.s64 + 204;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
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
	ctx.lr = 0x822B5730;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// addi r5,r11,10328
	ctx.r5.s64 = ctx.r11.s64 + 10328;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// addi r4,r30,208
	ctx.r4.s64 = ctx.r30.s64 + 208;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
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
	ctx.lr = 0x822B5760;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// addi r5,r11,10312
	ctx.r5.s64 = ctx.r11.s64 + 10312;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// addi r4,r30,212
	ctx.r4.s64 = ctx.r30.s64 + 212;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
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
	ctx.lr = 0x822B5790;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// addi r5,r11,10296
	ctx.r5.s64 = ctx.r11.s64 + 10296;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// addi r4,r30,216
	ctx.r4.s64 = ctx.r30.s64 + 216;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
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
	ctx.lr = 0x822B57C0;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// addi r5,r11,10284
	ctx.r5.s64 = ctx.r11.s64 + 10284;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// addi r4,r30,220
	ctx.r4.s64 = ctx.r30.s64 + 220;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
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
	ctx.lr = 0x822B57F0;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r7,-24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r5,r11,10268
	ctx.r5.s64 = ctx.r11.s64 + 10268;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// addi r4,r30,224
	ctx.r4.s64 = ctx.r30.s64 + 224;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82351720
	ctx.lr = 0x822B5820;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// addi r5,r11,10256
	ctx.r5.s64 = ctx.r11.s64 + 10256;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// addi r4,r30,228
	ctx.r4.s64 = ctx.r30.s64 + 228;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
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
	ctx.lr = 0x822B5850;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// addi r5,r11,10244
	ctx.r5.s64 = ctx.r11.s64 + 10244;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// addi r4,r30,232
	ctx.r4.s64 = ctx.r30.s64 + 232;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82351720
	ctx.lr = 0x822B5880;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r7,-24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,-4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// addi r5,r11,10224
	ctx.r5.s64 = ctx.r11.s64 + 10224;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
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
	ctx.lr = 0x822B58B0;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// addi r5,r11,10212
	ctx.r5.s64 = ctx.r11.s64 + 10212;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// lwz r6,-4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82351720
	ctx.lr = 0x822B58E0;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// addi r5,r11,10200
	ctx.r5.s64 = ctx.r11.s64 + 10200;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// lwz r6,-4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82351720
	ctx.lr = 0x822B5910;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r7,-24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r11,10184
	ctx.r5.s64 = ctx.r11.s64 + 10184;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-1660(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1660);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// addi r4,r11,-3560
	ctx.r4.s64 = ctx.r11.s64 + -3560;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f0,-15116(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15116);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stfs f0,4(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f0,10180(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10180);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f24,0(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	ctx.f24.f64 = double(temp.f32);
	// lwz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lfs f0,-14424(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -14424);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// stfs f0,12(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// addi r27,r11,-1960
	ctx.r27.s64 = ctx.r11.s64 + -1960;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f31,0(r27)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// lfs f0,-624(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -624);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// stfs f31,4(r27)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r27.u32 + 4, temp.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stfs f0,8(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 8, temp.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f0,12(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 12, temp.u32);
	// lfs f0,-1664(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1664);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// addi r26,r11,-13472
	ctx.r26.s64 = ctx.r11.s64 + -13472;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stfs f0,0(r26)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
	// stfs f30,4(r26)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r26.u32 + 4, temp.u32);
	// lfs f0,-6860(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -6860);
	ctx.f0.f64 = double(temp.f32);
	// stfs f24,8(r26)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r26.u32 + 8, temp.u32);
	// stfs f0,12(r26)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 12, temp.u32);
	// bl 0x82351720
	ctx.lr = 0x822B59C0;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r7,-24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r5,r11,10164
	ctx.r5.s64 = ctx.r11.s64 + 10164;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// bl 0x82351720
	ctx.lr = 0x822B59F0;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// addi r5,r11,10152
	ctx.r5.s64 = ctx.r11.s64 + 10152;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// bl 0x82351720
	ctx.lr = 0x822B5A20;
	sub_82351720(ctx, base);
	// li r3,10
	ctx.r3.s64 = 10;
	// addi r4,r30,17464
	ctx.r4.s64 = ctx.r30.s64 + 17464;
	// lwz r7,-20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20);
	// addi r27,r30,17468
	ctx.r27.s64 = ctx.r30.s64 + 17468;
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r11,10140
	ctx.r5.s64 = ctx.r11.s64 + 10140;
	// stw r3,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r3.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823514f8
	ctx.lr = 0x822B5A60;
	sub_823514F8(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r7,-20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20);
	// addi r5,r11,10128
	ctx.r5.s64 = ctx.r11.s64 + 10128;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823514f8
	ctx.lr = 0x822B5A90;
	sub_823514F8(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r7,-24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// addi r4,r30,352
	ctx.r4.s64 = ctx.r30.s64 + 352;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r27,r30,356
	ctx.r27.s64 = ctx.r30.s64 + 356;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r26,r30,360
	ctx.r26.s64 = ctx.r30.s64 + 360;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r25,r30,364
	ctx.r25.s64 = ctx.r30.s64 + 364;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// lfs f0,-15148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15148);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r24,r30,368
	ctx.r24.s64 = ctx.r30.s64 + 368;
	// stfs f31,0(r4)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// addi r23,r30,372
	ctx.r23.s64 = ctx.r30.s64 + 372;
	// stfs f0,0(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// addi r22,r30,376
	ctx.r22.s64 = ctx.r30.s64 + 376;
	// stfs f27,0(r26)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
	// addi r21,r30,380
	ctx.r21.s64 = ctx.r30.s64 + 380;
	// stfs f24,0(r25)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r25.u32 + 0, temp.u32);
	// addi r20,r30,384
	ctx.r20.s64 = ctx.r30.s64 + 384;
	// lfs f13,6152(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6152);
	ctx.f13.f64 = double(temp.f32);
	// addi r30,r30,388
	ctx.r30.s64 = ctx.r30.s64 + 388;
	// stfs f29,0(r24)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r24.u32 + 0, temp.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stfs f30,0(r23)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r23.u32 + 0, temp.u32);
	// stfs f26,0(r22)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r22.u32 + 0, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stfs f13,0(r21)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r21.u32 + 0, temp.u32);
	// addi r5,r11,10116
	ctx.r5.s64 = ctx.r11.s64 + 10116;
	// stfs f28,0(r20)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r20.u32 + 0, temp.u32);
	// stfs f25,0(r30)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x822B5B1C;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// addi r5,r11,10104
	ctx.r5.s64 = ctx.r11.s64 + 10104;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
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
	ctx.lr = 0x822B5B4C;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// addi r5,r11,10088
	ctx.r5.s64 = ctx.r11.s64 + 10088;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
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
	ctx.lr = 0x822B5B7C;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// addi r5,r11,10072
	ctx.r5.s64 = ctx.r11.s64 + 10072;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
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
	ctx.lr = 0x822B5BAC;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r7,-24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r5,r11,10056
	ctx.r5.s64 = ctx.r11.s64 + 10056;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x822B5BDC;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// addi r5,r11,10040
	ctx.r5.s64 = ctx.r11.s64 + 10040;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
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
	ctx.lr = 0x822B5C0C;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// addi r5,r11,10024
	ctx.r5.s64 = ctx.r11.s64 + 10024;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
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
	ctx.lr = 0x822B5C3C;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// addi r5,r11,10008
	ctx.r5.s64 = ctx.r11.s64 + 10008;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82351720
	ctx.lr = 0x822B5C6C;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r7,-24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r11,9988
	ctx.r5.s64 = ctx.r11.s64 + 9988;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
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
	ctx.lr = 0x822B5C9C;
	sub_82351720(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,-24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// addi r5,r11,9968
	ctx.r5.s64 = ctx.r11.s64 + 9968;
	// lwz r11,20160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20160);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
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
	ctx.lr = 0x822B5CCC;
	sub_82351720(ctx, base);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x8259bbe4
	ctx.lr = 0x822B5CD8;
	__restfpr_24(ctx, base);
	// b 0x8259bb10
	__restgprlr_14(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_822B5DF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x822B5DF8;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r31,r3,15412
	ctx.r31.s64 = ctx.r3.s64 + 15412;
	// li r30,16
	ctx.r30.s64 = 16;
	// li r28,8192
	ctx.r28.s64 = 8192;
	// li r29,0
	ctx.r29.s64 = 0;
	// lfs f31,-15112(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15112);
	ctx.f31.f64 = double(temp.f32);
loc_822B5E18:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234df60
	ctx.lr = 0x822B5E20;
	sub_8234DF60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b5e4c
	if (ctx.cr6.eq) goto loc_822B5E4C;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stfs f31,188(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stw r28,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822B5E4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822B5E4C:
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// stb r29,-8(r31)
	PPC_STORE_U8(ctx.r31.u32 + -8, ctx.r29.u8);
	// addi r31,r31,132
	ctx.r31.s64 = ctx.r31.s64 + 132;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x822b5e18
	if (!ctx.cr6.eq) goto loc_822B5E18;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_822B6120) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x822B6128;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r30,r28,15436
	ctx.r30.s64 = ctx.r28.s64 + 15436;
	// li r29,16
	ctx.r29.s64 = 16;
	// li r31,0
	ctx.r31.s64 = 0;
loc_822B6140:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822b6158
	if (!ctx.cr6.eq) goto loc_822B6158;
	// addi r3,r30,-92
	ctx.r3.s64 = ctx.r30.s64 + -92;
	// bl 0x822a40f0
	ctx.lr = 0x822B6154;
	sub_822A40F0(ctx, base);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
loc_822B6158:
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// addi r30,r30,132
	ctx.r30.s64 = ctx.r30.s64 + 132;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x822b6140
	if (!ctx.cr6.eq) goto loc_822B6140;
	// addi r11,r28,6500
	ctx.r11.s64 = ctx.r28.s64 + 6500;
	// li r9,8
	ctx.r9.s64 = 8;
	// li r10,5
	ctx.r10.s64 = 5;
loc_822B6174:
	// lwz r8,-180(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -180);
	// cmplw cr6,r27,r8
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x822b619c
	if (!ctx.cr6.eq) goto loc_822B619C;
	// stw r31,-180(r11)
	PPC_STORE_U32(ctx.r11.u32 + -180, ctx.r31.u32);
	// stb r31,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r31.u8);
	// stb r31,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// stw r10,-60(r11)
	PPC_STORE_U32(ctx.r11.u32 + -60, ctx.r10.u32);
	// stb r31,-4(r11)
	PPC_STORE_U8(ctx.r11.u32 + -4, ctx.r31.u8);
	// stb r31,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r31.u8);
	// stb r31,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r31.u8);
loc_822B619C:
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r27,r7
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x822b61c4
	if (!ctx.cr6.eq) goto loc_822B61C4;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// stb r31,189(r11)
	PPC_STORE_U8(ctx.r11.u32 + 189, ctx.r31.u8);
	// stb r31,188(r11)
	PPC_STORE_U8(ctx.r11.u32 + 188, ctx.r31.u8);
	// stw r10,128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 128, ctx.r10.u32);
	// stb r31,184(r11)
	PPC_STORE_U8(ctx.r11.u32 + 184, ctx.r31.u8);
	// stb r31,191(r11)
	PPC_STORE_U8(ctx.r11.u32 + 191, ctx.r31.u8);
	// stb r31,192(r11)
	PPC_STORE_U8(ctx.r11.u32 + 192, ctx.r31.u8);
loc_822B61C4:
	// lwz r6,196(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// cmplw cr6,r27,r6
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x822b61ec
	if (!ctx.cr6.eq) goto loc_822B61EC;
	// stw r31,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r31.u32);
	// stb r31,377(r11)
	PPC_STORE_U8(ctx.r11.u32 + 377, ctx.r31.u8);
	// stb r31,376(r11)
	PPC_STORE_U8(ctx.r11.u32 + 376, ctx.r31.u8);
	// stw r10,316(r11)
	PPC_STORE_U32(ctx.r11.u32 + 316, ctx.r10.u32);
	// stb r31,372(r11)
	PPC_STORE_U8(ctx.r11.u32 + 372, ctx.r31.u8);
	// stb r31,379(r11)
	PPC_STORE_U8(ctx.r11.u32 + 379, ctx.r31.u8);
	// stb r31,380(r11)
	PPC_STORE_U8(ctx.r11.u32 + 380, ctx.r31.u8);
loc_822B61EC:
	// lwz r5,384(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 384);
	// cmplw cr6,r27,r5
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x822b6214
	if (!ctx.cr6.eq) goto loc_822B6214;
	// stw r31,384(r11)
	PPC_STORE_U32(ctx.r11.u32 + 384, ctx.r31.u32);
	// stb r31,565(r11)
	PPC_STORE_U8(ctx.r11.u32 + 565, ctx.r31.u8);
	// stb r31,564(r11)
	PPC_STORE_U8(ctx.r11.u32 + 564, ctx.r31.u8);
	// stw r10,504(r11)
	PPC_STORE_U32(ctx.r11.u32 + 504, ctx.r10.u32);
	// stb r31,560(r11)
	PPC_STORE_U8(ctx.r11.u32 + 560, ctx.r31.u8);
	// stb r31,567(r11)
	PPC_STORE_U8(ctx.r11.u32 + 567, ctx.r31.u8);
	// stb r31,568(r11)
	PPC_STORE_U8(ctx.r11.u32 + 568, ctx.r31.u8);
loc_822B6214:
	// lwz r4,572(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 572);
	// cmplw cr6,r27,r4
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x822b623c
	if (!ctx.cr6.eq) goto loc_822B623C;
	// stw r31,572(r11)
	PPC_STORE_U32(ctx.r11.u32 + 572, ctx.r31.u32);
	// stb r31,753(r11)
	PPC_STORE_U8(ctx.r11.u32 + 753, ctx.r31.u8);
	// stb r31,752(r11)
	PPC_STORE_U8(ctx.r11.u32 + 752, ctx.r31.u8);
	// stw r10,692(r11)
	PPC_STORE_U32(ctx.r11.u32 + 692, ctx.r10.u32);
	// stb r31,748(r11)
	PPC_STORE_U8(ctx.r11.u32 + 748, ctx.r31.u8);
	// stb r31,755(r11)
	PPC_STORE_U8(ctx.r11.u32 + 755, ctx.r31.u8);
	// stb r31,756(r11)
	PPC_STORE_U8(ctx.r11.u32 + 756, ctx.r31.u8);
loc_822B623C:
	// lwz r3,760(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 760);
	// cmplw cr6,r27,r3
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x822b6264
	if (!ctx.cr6.eq) goto loc_822B6264;
	// stw r31,760(r11)
	PPC_STORE_U32(ctx.r11.u32 + 760, ctx.r31.u32);
	// stb r31,941(r11)
	PPC_STORE_U8(ctx.r11.u32 + 941, ctx.r31.u8);
	// stb r31,940(r11)
	PPC_STORE_U8(ctx.r11.u32 + 940, ctx.r31.u8);
	// stw r10,880(r11)
	PPC_STORE_U32(ctx.r11.u32 + 880, ctx.r10.u32);
	// stb r31,936(r11)
	PPC_STORE_U8(ctx.r11.u32 + 936, ctx.r31.u8);
	// stb r31,943(r11)
	PPC_STORE_U8(ctx.r11.u32 + 943, ctx.r31.u8);
	// stb r31,944(r11)
	PPC_STORE_U8(ctx.r11.u32 + 944, ctx.r31.u8);
loc_822B6264:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r11,r11,1128
	ctx.r11.s64 = ctx.r11.s64 + 1128;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822b6174
	if (!ctx.cr6.eq) goto loc_822B6174;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_822B99D8) {
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
	// blr 
	return;
}
PPC_FUNC_IMPL(__imp__sub_822B9A68) {
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
	// lwz r7,96(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 96);
	// stw r7,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r7.u32);
	// lbz r6,100(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 100);
	// stb r6,100(r3)
	PPC_STORE_U8(ctx.r3.u32 + 100, ctx.r6.u8);
	// blr 
	return;
}
PPC_FUNC_IMPL(__imp__sub_822B9B08) {
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
	// lwz r7,96(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 96);
	// stw r7,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r7.u32);
	// blr 
	return;
}
PPC_FUNC_IMPL(__imp__sub_822BAD98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stfs f1,68(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// addi r8,r3,16
	ctx.r8.s64 = ctx.r3.s64 + 16;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r9,r3,44
	ctx.r9.s64 = ctx.r3.s64 + 44;
	// stw r10,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r10.u32);
	// lis r10,-32124
	ctx.r10.s64 = -2105278464;
	// addi r10,r10,26080
	ctx.r10.s64 = ctx.r10.s64 + 26080;
	// lfs f0,-12136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12136);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r3,88
	ctx.r11.s64 = ctx.r3.s64 + 88;
	// lfs f13,128(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stfs f13,76(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// ld r7,0(r6)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// std r7,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r7.u64);
	// ld r6,8(r6)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r6.u32 + 8);
	// std r6,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r6.u64);
	// stfs f0,72(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
loc_822BADE4:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stb r8,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r8.u8);
	// stfs f0,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne cr6,0x822bade4
	if (!ctx.cr6.eq) goto loc_822BADE4;
	// b 0x822aa2e0
	sub_822AA2E0(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_822BB310) {
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// bl 0x822bad98
	ctx.lr = 0x822BB340;
	sub_822BAD98(ctx, base);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lwz r10,-1768(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1768);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822bb358
	if (!ctx.cr6.eq) goto loc_822BB358;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,-1768(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1768, ctx.r10.u32);
loc_822BB358:
	// fctidz f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f31.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f31.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r30,97(r31)
	PPC_STORE_U8(ctx.r31.u32 + 97, ctx.r30.u8);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// lbz r10,87(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// stb r10,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r10.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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
PPC_FUNC_IMPL(__imp__sub_822BBCA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,2660(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 2660);
	// lfs f1,32(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// addi r6,r11,48
	ctx.r6.s64 = ctx.r11.s64 + 48;
	// b 0x822bad98
	sub_822BAD98(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_822BBE28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x822BBE30;
	__savegprlr_28(ctx, base);
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lbzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822bbe64
	if (ctx.cr6.eq) goto loc_822BBE64;
	// li r28,1
	ctx.r28.s64 = 1;
loc_822BBE64:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,2660(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2660);
	// addi r6,r11,48
	ctx.r6.s64 = ctx.r11.s64 + 48;
	// bl 0x822bad98
	ctx.lr = 0x822BBE80;
	sub_822BAD98(ctx, base);
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// mulli r8,r28,28
	ctx.r8.s64 = ctx.r28.s64 * 28;
	// addi r10,r11,-18560
	ctx.r10.s64 = ctx.r11.s64 + -18560;
	// lis r11,-32047
	ctx.r11.s64 = -2100232192;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r11,r11,13088
	ctx.r11.s64 = ctx.r11.s64 + 13088;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r7,r9,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r6,r9
	ctx.r6.s64 = ctx.r9.s16;
	// addis r9,r10,8
	ctx.r9.s64 = ctx.r10.s64 + 524288;
	// add r10,r7,r6
	ctx.r10.u64 = ctx.r7.u64 + ctx.r6.u64;
	// addi r7,r9,10528
	ctx.r7.s64 = ctx.r9.s64 + 10528;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// clrldi r7,r10,32
	ctx.r7.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lfs f0,692(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 692);
	ctx.f0.f64 = double(temp.f32);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfs f13,748(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 748);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,2660(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2660);
	// addi r6,r11,48
	ctx.r6.s64 = ctx.r11.s64 + 48;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fsel f0,f9,f13,f0
	ctx.f0.f64 = ctx.f9.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lfs f12,1256(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1256);
	ctx.f12.f64 = double(temp.f32);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fmuls f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// bl 0x822bad98
	ctx.lr = 0x822BBF10;
	sub_822BAD98(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_822BC0B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x822BC0B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// bl 0x822bad98
	ctx.lr = 0x822BC0D0;
	sub_822BAD98(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822d4e28
	ctx.lr = 0x822BC0DC;
	sub_822D4E28(ctx, base);
	// stb r29,100(r31)
	PPC_STORE_U8(ctx.r31.u32 + 100, ctx.r29.u8);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_822BC1D0) {
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
	// lwz r11,2660(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 2660);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r6,r11,48
	ctx.r6.s64 = ctx.r11.s64 + 48;
	// bl 0x822bad98
	ctx.lr = 0x822BC1F0;
	sub_822BAD98(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 30, ctx.xer);
	// bne cr6,0x822bc228
	if (!ctx.cr6.eq) goto loc_822BC228;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// lis r9,9
	ctx.r9.s64 = 589824;
	// addi r11,r11,-18560
	ctx.r11.s64 = ctx.r11.s64 + -18560;
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r8,r9,9302
	ctx.r8.u64 = ctx.r9.u64 | 9302;
	// lis r7,8
	ctx.r7.s64 = 524288;
	// ori r6,r7,49308
	ctx.r6.u64 = ctx.r7.u64 | 49308;
	// stbx r10,r11,r8
	PPC_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u8);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,2864(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r11,r6
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r6.u32, temp.u32);
loc_822BC228:
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
PPC_FUNC_IMPL(__imp__sub_822BC2B8) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,516(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 516);
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// ld r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// bl 0x822bad98
	ctx.lr = 0x822BC2F8;
	sub_822BAD98(ctx, base);
	// lbz r7,810(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 810);
	// stw r7,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r7.u32);
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
PPC_FUNC_IMPL(__imp__sub_822BCB48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r8,-32160
	ctx.r8.s64 = -2107637760;
	// stb r9,248(r1)
	PPC_STORE_U8(ctx.r1.u32 + 248, ctx.r9.u8);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// stfs f1,180(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// addi r8,r8,-18560
	ctx.r8.s64 = ctx.r8.s64 + -18560;
	// stfs f2,196(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// lis r9,96
	ctx.r9.s64 = 6291456;
	// stfs f3,184(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// addis r8,r8,5
	ctx.r8.s64 = ctx.r8.s64 + 327680;
	// stb r10,249(r1)
	PPC_STORE_U8(ctx.r1.u32 + 249, ctx.r10.u8);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// addi r4,r8,7240
	ctx.r4.s64 = ctx.r8.s64 + 7240;
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// lwz r11,372(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r7,r7,-4756
	ctx.r7.s64 = ctx.r7.s64 + -4756;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r8,r9,18460
	ctx.r8.u64 = ctx.r9.u64 | 18460;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r11,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r11.u8);
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// stb r6,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r6.u8);
	// stw r8,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r8.u32);
	// bl 0x82350920
	ctx.lr = 0x822BCBBC;
	sub_82350920(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// stb r5,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r5.u8);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

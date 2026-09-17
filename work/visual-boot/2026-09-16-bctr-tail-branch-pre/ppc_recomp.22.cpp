#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_821E9908"))) PPC_WEAK_FUNC(sub_821E9908);
PPC_FUNC_IMPL(__imp__sub_821E9908) {
	PPC_FUNC_PROLOGUE();
	// lis r10,4
	ctx.r10.s64 = 262144;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// ori r9,r10,25864
	ctx.r9.u64 = ctx.r10.u64 | 25864;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// lwzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// addis r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 262144;
	// mulli r8,r10,584
	ctx.r8.s64 = ctx.r10.s64 * 584;
	// addi r7,r11,26172
	ctx.r7.s64 = ctx.r11.s64 + 26172;
	// lwzx r6,r8,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// cmpwi cr6,r6,19
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 19, ctx.xer);
	// bne cr6,0x821e9944
	if (!ctx.cr6.eq) goto loc_821E9944;
	// lbz r5,835(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 835);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_821E9944:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E994C"))) PPC_WEAK_FUNC(sub_821E994C);
PPC_FUNC_IMPL(__imp__sub_821E994C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E9950"))) PPC_WEAK_FUNC(sub_821E9950);
PPC_FUNC_IMPL(__imp__sub_821E9950) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r11,r11,-24936
	ctx.r11.s64 = ctx.r11.s64 + -24936;
	// addi r3,r11,9744
	ctx.r3.s64 = ctx.r11.s64 + 9744;
	// b 0x82204318
	sub_82204318(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821E9960"))) PPC_WEAK_FUNC(sub_821E9960);
PPC_FUNC_IMPL(__imp__sub_821E9960) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r11,r11,-24936
	ctx.r11.s64 = ctx.r11.s64 + -24936;
	// addi r3,r11,9744
	ctx.r3.s64 = ctx.r11.s64 + 9744;
	// b 0x8212bb98
	sub_8212BB98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821E9970"))) PPC_WEAK_FUNC(sub_821E9970);
PPC_FUNC_IMPL(__imp__sub_821E9970) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r10,4
	ctx.r10.s64 = 262144;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// ori r9,r10,26172
	ctx.r9.u64 = ctx.r10.u64 | 26172;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// cmplwi cr6,r11,18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 18, ctx.xer);
	// bgt cr6,0x821e9ae0
	if (ctx.cr6.gt) goto loc_821E9AE0;
	// lis r12,-32225
	ctx.r12.s64 = -2111897600;
	// addi r12,r12,-26180
	ctx.r12.s64 = ctx.r12.s64 + -26180;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_821E9A08;
	case 1:
		goto loc_821E9AE0;
	case 2:
		goto loc_821E9AE0;
	case 3:
		goto loc_821E9AE0;
	case 4:
		goto loc_821E9AE0;
	case 5:
		goto loc_821E9A68;
	case 6:
		goto loc_821E9AE0;
	case 7:
		goto loc_821E9AB4;
	case 8:
		goto loc_821E9AE0;
	case 9:
		goto loc_821E9AE0;
	case 10:
		goto loc_821E9AE0;
	case 11:
		goto loc_821E9AE0;
	case 12:
		goto loc_821E9AE0;
	case 13:
		goto loc_821E9AE0;
	case 14:
		goto loc_821E9AC8;
	case 15:
		goto loc_821E9AE0;
	case 16:
		goto loc_821E9AC8;
	case 17:
		goto loc_821E9AE0;
	case 18:
		goto loc_821E9AC8;
	default:
		__builtin_unreachable();
	}
	// lwz r16,-26104(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -26104);
	// lwz r16,-25888(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -25888);
	// lwz r16,-25888(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -25888);
	// lwz r16,-25888(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -25888);
	// lwz r16,-25888(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -25888);
	// lwz r16,-26008(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -26008);
	// lwz r16,-25888(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -25888);
	// lwz r16,-25932(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -25932);
	// lwz r16,-25888(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -25888);
	// lwz r16,-25888(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -25888);
	// lwz r16,-25888(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -25888);
	// lwz r16,-25888(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -25888);
	// lwz r16,-25888(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -25888);
	// lwz r16,-25888(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -25888);
	// lwz r16,-25912(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -25912);
	// lwz r16,-25888(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -25888);
	// lwz r16,-25912(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -25912);
	// lwz r16,-25888(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -25888);
	// lwz r16,-25912(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -25912);
loc_821E9A08:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-12136(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12136);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bne cr6,0x821e9a4c
	if (!ctx.cr6.eq) goto loc_821E9A4C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,14672
	ctx.r4.s64 = ctx.r11.s64 + 14672;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,23504
	ctx.r3.s64 = ctx.r11.s64 + 23504;
	// bl 0x8210fcf8
	ctx.lr = 0x821E9A2C;
	sub_8210FCF8(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82361bd8
	ctx.lr = 0x821E9A38;
	sub_82361BD8(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_821E9A4C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fe7d8
	ctx.lr = 0x821E9A54;
	sub_821FE7D8(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_821E9A68:
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfiwx f0,0,r8
	PPC_STORE_U32(ctx.r8.u32, ctx.f0.u32);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82362190
	ctx.lr = 0x821E9A88;
	sub_82362190(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82361f20
	ctx.lr = 0x821E9A90;
	sub_82361F20(ctx, base);
	// li r5,31
	ctx.r5.s64 = 31;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82361bd8
	ctx.lr = 0x821E9AA0;
	sub_82361BD8(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_821E9AB4:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// fctiwz f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// stfiwx f13,0,r7
	PPC_STORE_U32(ctx.r7.u32, ctx.f13.u32);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x821e9ad8
	goto loc_821E9AD8;
loc_821E9AC8:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// fctiwz f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// stfiwx f12,0,r6
	PPC_STORE_U32(ctx.r6.u32, ctx.f12.u32);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_821E9AD8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f8538
	ctx.lr = 0x821E9AE0;
	sub_821F8538(ctx, base);
loc_821E9AE0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E9AF4"))) PPC_WEAK_FUNC(sub_821E9AF4);
PPC_FUNC_IMPL(__imp__sub_821E9AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E9AF8"))) PPC_WEAK_FUNC(sub_821E9AF8);
PPC_FUNC_IMPL(__imp__sub_821E9AF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r11,r11,-24936
	ctx.r11.s64 = ctx.r11.s64 + -24936;
	// addi r3,r11,9744
	ctx.r3.s64 = ctx.r11.s64 + 9744;
	// b 0x822043f8
	sub_822043F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821E9B08"))) PPC_WEAK_FUNC(sub_821E9B08);
PPC_FUNC_IMPL(__imp__sub_821E9B08) {
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
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x821e9b34
	if (!ctx.cr6.eq) goto loc_821E9B34;
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
loc_821E9B34:
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x821e9b54
	if (!ctx.cr6.eq) goto loc_821E9B54;
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
loc_821E9B54:
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r10,20(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x821e9bac
	if (!ctx.cr6.eq) goto loc_821E9BAC;
	// lfs f0,32(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x821e9b88
	if (!ctx.cr6.eq) goto loc_821E9B88;
	// bl 0x8259cce0
	ctx.lr = 0x821E9B78;
	sub_8259CCE0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_821E9B88:
	// fsubs f0,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfiwx f13,0,r9
	PPC_STORE_U32(ctx.r9.u32, ctx.f13.u32);
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
loc_821E9BAC:
	// subf r3,r11,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E9BC0"))) PPC_WEAK_FUNC(sub_821E9BC0);
PPC_FUNC_IMPL(__imp__sub_821E9BC0) {
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
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x821e9bec
	if (!ctx.cr6.eq) goto loc_821E9BEC;
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
loc_821E9BEC:
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x821e9c0c
	if (!ctx.cr6.eq) goto loc_821E9C0C;
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
loc_821E9C0C:
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r10,20(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x821e9c64
	if (!ctx.cr6.eq) goto loc_821E9C64;
	// lfs f0,32(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x821e9c40
	if (!ctx.cr6.eq) goto loc_821E9C40;
	// bl 0x8259cce0
	ctx.lr = 0x821E9C30;
	sub_8259CCE0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_821E9C40:
	// fsubs f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfiwx f13,0,r9
	PPC_STORE_U32(ctx.r9.u32, ctx.f13.u32);
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
loc_821E9C64:
	// subf r3,r11,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E9C78"))) PPC_WEAK_FUNC(sub_821E9C78);
PPC_FUNC_IMPL(__imp__sub_821E9C78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// lbz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 72);
	// stb r10,8(r4)
	PPC_STORE_U8(ctx.r4.u32 + 8, ctx.r10.u8);
	// lbz r10,41(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 41);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// bne cr6,0x821e9c9c
	if (!ctx.cr6.eq) goto loc_821E9C9C;
	// li r10,0
	ctx.r10.s64 = 0;
loc_821E9C9C:
	// stb r10,9(r4)
	PPC_STORE_U8(ctx.r4.u32 + 9, ctx.r10.u8);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E9CB4"))) PPC_WEAK_FUNC(sub_821E9CB4);
PPC_FUNC_IMPL(__imp__sub_821E9CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E9CB8"))) PPC_WEAK_FUNC(sub_821E9CB8);
PPC_FUNC_IMPL(__imp__sub_821E9CB8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
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
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E9CE0"))) PPC_WEAK_FUNC(sub_821E9CE0);
PPC_FUNC_IMPL(__imp__sub_821E9CE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x821E9CE8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,15008
	ctx.r31.s64 = ctx.r11.s64 + 15008;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r4,r31,-272
	ctx.r4.s64 = ctx.r31.s64 + -272;
	// addi r3,r11,23504
	ctx.r3.s64 = ctx.r11.s64 + 23504;
	// bl 0x8210fcf8
	ctx.lr = 0x821E9D08;
	sub_8210FCF8(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r30,r11,14528
	ctx.r30.s64 = ctx.r11.s64 + 14528;
	// addi r4,r31,-308
	ctx.r4.s64 = ctx.r31.s64 + -308;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821f5fb0
	ctx.lr = 0x821E9D20;
	sub_821F5FB0(ctx, base);
	// addi r4,r31,-288
	ctx.r4.s64 = ctx.r31.s64 + -288;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821fcb38
	ctx.lr = 0x821E9D30;
	sub_821FCB38(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// bl 0x821fcb38
	ctx.lr = 0x821E9D48;
	sub_821FCB38(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// bl 0x821fcb38
	ctx.lr = 0x821E9D60;
	sub_821FCB38(ctx, base);
	// stw r3,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821E9D6C"))) PPC_WEAK_FUNC(sub_821E9D6C);
PPC_FUNC_IMPL(__imp__sub_821E9D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E9D70"))) PPC_WEAK_FUNC(sub_821E9D70);
PPC_FUNC_IMPL(__imp__sub_821E9D70) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r10.u8);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E9D90"))) PPC_WEAK_FUNC(sub_821E9D90);
PPC_FUNC_IMPL(__imp__sub_821E9D90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// addi r3,r11,2896
	ctx.r3.s64 = ctx.r11.s64 + 2896;
	// b 0x82369180
	sub_82369180(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821E9DA0"))) PPC_WEAK_FUNC(sub_821E9DA0);
PPC_FUNC_IMPL(__imp__sub_821E9DA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,7472(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7472);
	// b 0x824077d8
	sub_824077D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821E9DB8"))) PPC_WEAK_FUNC(sub_821E9DB8);
PPC_FUNC_IMPL(__imp__sub_821E9DB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// addi r3,r11,2896
	ctx.r3.s64 = ctx.r11.s64 + 2896;
	// b 0x823691b0
	sub_823691B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821E9DCC"))) PPC_WEAK_FUNC(sub_821E9DCC);
PPC_FUNC_IMPL(__imp__sub_821E9DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E9DD0"))) PPC_WEAK_FUNC(sub_821E9DD0);
PPC_FUNC_IMPL(__imp__sub_821E9DD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,7472(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7472);
	// b 0x824078c0
	sub_824078C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821E9DF0"))) PPC_WEAK_FUNC(sub_821E9DF0);
PPC_FUNC_IMPL(__imp__sub_821E9DF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// addi r3,r11,2896
	ctx.r3.s64 = ctx.r11.s64 + 2896;
	// b 0x823691e0
	sub_823691E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821E9E08"))) PPC_WEAK_FUNC(sub_821E9E08);
PPC_FUNC_IMPL(__imp__sub_821E9E08) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,7472(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7472);
	// b 0x82407a10
	sub_82407A10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821E9E30"))) PPC_WEAK_FUNC(sub_821E9E30);
PPC_FUNC_IMPL(__imp__sub_821E9E30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// clrlwi r5,r4,24
	ctx.r5.u64 = ctx.r4.u32 & 0xFF;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// li r4,12
	ctx.r4.s64 = 12;
	// b 0x82203858
	sub_82203858(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821E9E44"))) PPC_WEAK_FUNC(sub_821E9E44);
PPC_FUNC_IMPL(__imp__sub_821E9E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E9E48"))) PPC_WEAK_FUNC(sub_821E9E48);
PPC_FUNC_IMPL(__imp__sub_821E9E48) {
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
	// lis r10,3
	ctx.r10.s64 = 196608;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// ori r9,r10,51957
	ctx.r9.u64 = ctx.r10.u64 | 51957;
	// li r3,0
	ctx.r3.s64 = 0;
	// lbzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821e9e80
	if (ctx.cr6.eq) goto loc_821E9E80;
	// lwz r3,7472(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7472);
	// bl 0x82408278
	ctx.lr = 0x821E9E7C;
	sub_82408278(ctx, base);
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
loc_821E9E80:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E9E90"))) PPC_WEAK_FUNC(sub_821E9E90);
PPC_FUNC_IMPL(__imp__sub_821E9E90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x821E9E98;
	__savegprlr_26(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r11,26752
	ctx.r30.s64 = ctx.r11.s64 + 26752;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r3,r30,2896
	ctx.r3.s64 = ctx.r30.s64 + 2896;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x823676a8
	ctx.lr = 0x821E9EBC;
	sub_823676A8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r7,32
	ctx.r7.s64 = 32;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r30,2896
	ctx.r3.s64 = ctx.r30.s64 + 2896;
	// bl 0x82369240
	ctx.lr = 0x821E9ED8;
	sub_82369240(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// addi r31,r11,13884
	ctx.r31.s64 = ctx.r11.s64 + 13884;
	// beq cr6,0x821e9fa4
	if (ctx.cr6.eq) goto loc_821E9FA4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8259cce0
	ctx.lr = 0x821E9EF4;
	sub_8259CCE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821e9fa4
	if (ctx.cr6.eq) goto loc_821E9FA4;
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 1, ctx.xer);
	// beq cr6,0x821e9f7c
	if (ctx.cr6.eq) goto loc_821E9F7C;
	// cmpwi cr6,r26,2
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 2, ctx.xer);
	// beq cr6,0x821e9f60
	if (ctx.cr6.eq) goto loc_821E9F60;
	// cmpwi cr6,r26,3
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 3, ctx.xer);
	// beq cr6,0x821e9f2c
	if (ctx.cr6.eq) goto loc_821E9F2C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8259d2a0
	ctx.lr = 0x821E9F24;
	sub_8259D2A0(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_821E9F2C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259dbd0
	ctx.lr = 0x821E9F34;
	sub_8259DBD0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82362190
	ctx.lr = 0x821E9F48;
	sub_82362190(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82361bd8
	ctx.lr = 0x821E9F58;
	sub_82361BD8(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_821E9F60:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259dbd0
	ctx.lr = 0x821E9F68;
	sub_8259DBD0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821f8538
	ctx.lr = 0x821E9F74;
	sub_821F8538(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_821E9F7C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259e150
	ctx.lr = 0x821E9F84;
	sub_8259E150(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lfs f0,-580(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -580);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x821fe7d8
	ctx.lr = 0x821E9F9C;
	sub_821FE7D8(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_821E9FA4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8259d2a0
	ctx.lr = 0x821E9FB4;
	sub_8259D2A0(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821E9FBC"))) PPC_WEAK_FUNC(sub_821E9FBC);
PPC_FUNC_IMPL(__imp__sub_821E9FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E9FC0"))) PPC_WEAK_FUNC(sub_821E9FC0);
PPC_FUNC_IMPL(__imp__sub_821E9FC0) {
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
	// lis r10,3
	ctx.r10.s64 = 196608;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// ori r9,r10,51957
	ctx.r9.u64 = ctx.r10.u64 | 51957;
	// li r3,0
	ctx.r3.s64 = 0;
	// lbzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821ea000
	if (ctx.cr6.eq) goto loc_821EA000;
	// addi r3,r11,2896
	ctx.r3.s64 = ctx.r11.s64 + 2896;
	// bl 0x82369320
	ctx.lr = 0x821E9FF4;
	sub_82369320(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x821ea000
	if (!ctx.cr6.eq) goto loc_821EA000;
	// li r3,0
	ctx.r3.s64 = 0;
loc_821EA000:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EA010"))) PPC_WEAK_FUNC(sub_821EA010);
PPC_FUNC_IMPL(__imp__sub_821EA010) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// lis r8,-32091
	ctx.r8.s64 = -2103115776;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r8,10416
	ctx.r3.s64 = ctx.r8.s64 + 10416;
	// li r4,62
	ctx.r4.s64 = 62;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// bl 0x821fd498
	ctx.lr = 0x821EA044;
	sub_821FD498(ctx, base);
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
	// addi r3,r11,-19376
	ctx.r3.s64 = ctx.r11.s64 + -19376;
	// lfs f1,2864(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2864);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822c5960
	ctx.lr = 0x821EA064;
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

__attribute__((alias("__imp__sub_821EA074"))) PPC_WEAK_FUNC(sub_821EA074);
PPC_FUNC_IMPL(__imp__sub_821EA074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EA078"))) PPC_WEAK_FUNC(sub_821EA078);
PPC_FUNC_IMPL(__imp__sub_821EA078) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EA080"))) PPC_WEAK_FUNC(sub_821EA080);
PPC_FUNC_IMPL(__imp__sub_821EA080) {
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
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r3,r11,2896
	ctx.r3.s64 = ctx.r11.s64 + 2896;
	// bl 0x82369240
	ctx.lr = 0x821EA0A8;
	sub_82369240(ctx, base);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// li r4,13
	ctx.r4.s64 = 13;
	// bl 0x82203858
	ctx.lr = 0x821EA0BC;
	sub_82203858(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EA0CC"))) PPC_WEAK_FUNC(sub_821EA0CC);
PPC_FUNC_IMPL(__imp__sub_821EA0CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EA0D0"))) PPC_WEAK_FUNC(sub_821EA0D0);
PPC_FUNC_IMPL(__imp__sub_821EA0D0) {
	PPC_FUNC_PROLOGUE();
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r3,1028
	ctx.r10.s64 = ctx.r3.s64 + 1028;
	// li r11,4
	ctx.r11.s64 = 4;
	// stb r9,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r9.u8);
loc_821EA0E0:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821ea0e0
	if (!ctx.cr6.eq) goto loc_821EA0E0;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EA0FC"))) PPC_WEAK_FUNC(sub_821EA0FC);
PPC_FUNC_IMPL(__imp__sub_821EA0FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EA100"))) PPC_WEAK_FUNC(sub_821EA100);
PPC_FUNC_IMPL(__imp__sub_821EA100) {
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

__attribute__((alias("__imp__sub_821EA10C"))) PPC_WEAK_FUNC(sub_821EA10C);
PPC_FUNC_IMPL(__imp__sub_821EA10C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EA110"))) PPC_WEAK_FUNC(sub_821EA110);
PPC_FUNC_IMPL(__imp__sub_821EA110) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lbz r10,1284(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1284);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821ea130
	if (ctx.cr6.eq) goto loc_821EA130;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stb r9,1284(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1284, ctx.r9.u8);
	// blr 
	return;
loc_821EA130:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EA138"))) PPC_WEAK_FUNC(sub_821EA138);
PPC_FUNC_IMPL(__imp__sub_821EA138) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,1028
	ctx.r3.s64 = ctx.r11.s64 + 1028;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EA148"))) PPC_WEAK_FUNC(sub_821EA148);
PPC_FUNC_IMPL(__imp__sub_821EA148) {
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
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x8259d2a0
	ctx.lr = 0x821EA168;
	sub_8259D2A0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,1284(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1284, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_821EA184"))) PPC_WEAK_FUNC(sub_821EA184);
PPC_FUNC_IMPL(__imp__sub_821EA184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EA188"))) PPC_WEAK_FUNC(sub_821EA188);
PPC_FUNC_IMPL(__imp__sub_821EA188) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x821EA190;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r29,r3,1028
	ctx.r29.s64 = ctx.r3.s64 + 1028;
	// li r31,4
	ctx.r31.s64 = 4;
loc_821EA1A0:
	// li r5,64
	ctx.r5.s64 = 64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8259d2a0
	ctx.lr = 0x821EA1B0;
	sub_8259D2A0(ctx, base);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r29,r29,64
	ctx.r29.s64 = ctx.r29.s64 + 64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821ea1a0
	if (!ctx.cr6.eq) goto loc_821EA1A0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821EA1CC"))) PPC_WEAK_FUNC(sub_821EA1CC);
PPC_FUNC_IMPL(__imp__sub_821EA1CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EA1D0"))) PPC_WEAK_FUNC(sub_821EA1D0);
PPC_FUNC_IMPL(__imp__sub_821EA1D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,3672
	ctx.r11.s64 = ctx.r11.s64 + 3672;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// stb r10,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r10.u8);
	// stb r10,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EA1F0"))) PPC_WEAK_FUNC(sub_821EA1F0);
PPC_FUNC_IMPL(__imp__sub_821EA1F0) {
	PPC_FUNC_PROLOGUE();
	// extsb r11,r4
	ctx.r11.s64 = ctx.r4.s8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// lis r12,-32225
	ctx.r12.s64 = -2111897600;
	// addi r12,r12,-24040
	ctx.r12.s64 = ctx.r12.s64 + -24040;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		// ERROR: 0x821EA230
		return;
	case 1:
		// ERROR: 0x821EA24C
		return;
	case 2:
		// ERROR: 0x821EA268
		return;
	case 3:
		// ERROR: 0x821EA284
		return;
	case 4:
		// ERROR: 0x821EA2A0
		return;
	case 5:
		// ERROR: 0x821EA2BC
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_821EA218"))) PPC_WEAK_FUNC(sub_821EA218);
PPC_FUNC_IMPL(__imp__sub_821EA218) {
	PPC_FUNC_PROLOGUE();
	// lwz r16,-24016(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -24016);
	// lwz r16,-23988(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23988);
	// lwz r16,-23960(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23960);
	// lwz r16,-23932(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23932);
	// lwz r16,-23904(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23904);
	// lwz r16,-23876(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23876);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r11,r11,22016
	ctx.r11.s64 = ctx.r11.s64 + 22016;
	// lbz r10,4796(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4796);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r3,r11,160
	ctx.r3.s64 = ctx.r11.s64 + 160;
	// b 0x820dccf8
	sub_820DCCF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821EA24C"))) PPC_WEAK_FUNC(sub_821EA24C);
PPC_FUNC_IMPL(__imp__sub_821EA24C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r11,r11,22016
	ctx.r11.s64 = ctx.r11.s64 + 22016;
	// lbz r9,4796(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4796);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r3,r11,160
	ctx.r3.s64 = ctx.r11.s64 + 160;
	// b 0x820dc888
	sub_820DC888(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821EA268"))) PPC_WEAK_FUNC(sub_821EA268);
PPC_FUNC_IMPL(__imp__sub_821EA268) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r11,r11,22016
	ctx.r11.s64 = ctx.r11.s64 + 22016;
	// lbz r8,4796(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4796);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r3,r11,160
	ctx.r3.s64 = ctx.r11.s64 + 160;
	// b 0x820e8ed0
	sub_820E8ED0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821EA284"))) PPC_WEAK_FUNC(sub_821EA284);
PPC_FUNC_IMPL(__imp__sub_821EA284) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r11,r11,22016
	ctx.r11.s64 = ctx.r11.s64 + 22016;
	// lbz r7,4796(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4796);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r3,r11,160
	ctx.r3.s64 = ctx.r11.s64 + 160;
	// b 0x820e9318
	sub_820E9318(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821EA2A0"))) PPC_WEAK_FUNC(sub_821EA2A0);
PPC_FUNC_IMPL(__imp__sub_821EA2A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r11,r11,22016
	ctx.r11.s64 = ctx.r11.s64 + 22016;
	// lbz r6,4796(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4796);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r3,r11,160
	ctx.r3.s64 = ctx.r11.s64 + 160;
	// b 0x820dc888
	sub_820DC888(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821EA2BC"))) PPC_WEAK_FUNC(sub_821EA2BC);
PPC_FUNC_IMPL(__imp__sub_821EA2BC) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r11,r11,22016
	ctx.r11.s64 = ctx.r11.s64 + 22016;
	// lbz r5,4796(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4796);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lbz r4,1045(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1045);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r3,r11,160
	ctx.r3.s64 = ctx.r11.s64 + 160;
	// b 0x820ad518
	sub_820AD518(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821EA2E4"))) PPC_WEAK_FUNC(sub_821EA2E4);
PPC_FUNC_IMPL(__imp__sub_821EA2E4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EA2E8"))) PPC_WEAK_FUNC(sub_821EA2E8);
PPC_FUNC_IMPL(__imp__sub_821EA2E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x821EA2F0;
	__savegprlr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r28,r11,22016
	ctx.r28.s64 = ctx.r11.s64 + 22016;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r11,1016(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1016);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x821ea3dc
	if (ctx.cr6.gt) goto loc_821EA3DC;
	// lis r12,-32225
	ctx.r12.s64 = -2111897600;
	// addi r12,r12,-23768
	ctx.r12.s64 = ctx.r12.s64 + -23768;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_821EA33C;
	case 1:
		goto loc_821EA33C;
	case 2:
		goto loc_821EA33C;
	case 3:
		goto loc_821EA39C;
	case 4:
		goto loc_821EA33C;
	default:
		__builtin_unreachable();
	}
	// lwz r16,-23748(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23748);
	// lwz r16,-23748(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23748);
	// lwz r16,-23748(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23748);
	// lwz r16,-23652(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23652);
	// lwz r16,-23748(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23748);
loc_821EA33C:
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r31,r11,23504
	ctx.r31.s64 = ctx.r11.s64 + 23504;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,27196
	ctx.r30.s64 = ctx.r11.s64 + 27196;
	// lwz r4,-12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12);
	// bl 0x8210fcf8
	ctx.lr = 0x821EA358;
	sub_8210FCF8(ctx, base);
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82361bd8
	ctx.lr = 0x821EA364;
	sub_82361BD8(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r11,r11,11600
	ctx.r11.s64 = ctx.r11.s64 + 11600;
	// lwz r11,316(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 316);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x821ea380
	if (ctx.cr6.eq) goto loc_821EA380;
	// lwz r4,-4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// b 0x821ea3c8
	goto loc_821EA3C8;
loc_821EA380:
	// lwz r11,4720(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4720);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x8259d1b0
	ctx.lr = 0x821EA394;
	sub_8259D1B0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// b 0x821ea3c8
	goto loc_821EA3C8;
loc_821EA39C:
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r31,r11,23504
	ctx.r31.s64 = ctx.r11.s64 + 23504;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,27196
	ctx.r30.s64 = ctx.r11.s64 + 27196;
	// lwz r4,-8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// bl 0x8210fcf8
	ctx.lr = 0x821EA3B8;
	sub_8210FCF8(ctx, base);
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82361bd8
	ctx.lr = 0x821EA3C4;
	sub_82361BD8(ctx, base);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_821EA3C8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8210fcf8
	ctx.lr = 0x821EA3D0;
	sub_8210FCF8(ctx, base);
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82361bd8
	ctx.lr = 0x821EA3DC;
	sub_82361BD8(ctx, base);
loc_821EA3DC:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821EA3E4"))) PPC_WEAK_FUNC(sub_821EA3E4);
PPC_FUNC_IMPL(__imp__sub_821EA3E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EA3E8"))) PPC_WEAK_FUNC(sub_821EA3E8);
PPC_FUNC_IMPL(__imp__sub_821EA3E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x821EA3F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r29,r11,22016
	ctx.r29.s64 = ctx.r11.s64 + 22016;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r31,r11,23504
	ctx.r31.s64 = ctx.r11.s64 + 23504;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lbz r10,1041(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 1041);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,256(r30)
	PPC_STORE_U32(ctx.r30.u32 + 256, ctx.r10.u32);
	// lwz r4,27224(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27224);
	// bl 0x8210fcf8
	ctx.lr = 0x821EA420;
	sub_8210FCF8(ctx, base);
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82361bd8
	ctx.lr = 0x821EA42C;
	sub_82361BD8(ctx, base);
	// lwz r11,1020(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1020);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// extsb r6,r9
	ctx.r6.s64 = ctx.r9.s8;
	// addi r4,r11,15632
	ctx.r4.s64 = ctx.r11.s64 + 15632;
	// addi r3,r30,64
	ctx.r3.s64 = ctx.r30.s64 + 64;
	// bl 0x8259d1b0
	ctx.lr = 0x821EA44C;
	sub_8259D1B0(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f0,1032(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 1032);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,15048
	ctx.r11.s64 = ctx.r11.s64 + 15048;
	// lfs f13,-12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x821ea470
	if (!ctx.cr6.lt) goto loc_821EA470;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lwz r4,27228(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27228);
	// b 0x821ea4c0
	goto loc_821EA4C0;
loc_821EA470:
	// lfs f13,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x821ea488
	if (!ctx.cr6.lt) goto loc_821EA488;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lwz r4,27232(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27232);
	// b 0x821ea4c0
	goto loc_821EA4C0;
loc_821EA488:
	// lfs f13,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x821ea4a0
	if (!ctx.cr6.lt) goto loc_821EA4A0;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lwz r4,27236(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27236);
	// b 0x821ea4c0
	goto loc_821EA4C0;
loc_821EA4A0:
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x821ea4b8
	if (!ctx.cr6.lt) goto loc_821EA4B8;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lwz r4,27240(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27240);
	// b 0x821ea4c0
	goto loc_821EA4C0;
loc_821EA4B8:
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lwz r4,27244(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27244);
loc_821EA4C0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8210fcf8
	ctx.lr = 0x821EA4C8;
	sub_8210FCF8(ctx, base);
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82361bd8
	ctx.lr = 0x821EA4D4;
	sub_82361BD8(ctx, base);
	// addi r10,r30,128
	ctx.r10.s64 = ctx.r30.s64 + 128;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// subf r9,r7,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r7.s64;
loc_821EA4E4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stbx r10,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x821ea4e4
	if (!ctx.cr6.eq) goto loc_821EA4E4;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lwz r11,23500(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23500);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821ea514
	if (ctx.cr6.eq) goto loc_821EA514;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x821ea518
	if (!ctx.cr6.eq) goto loc_821EA518;
loc_821EA514:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821EA518:
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// addi r11,r11,13400
	ctx.r11.s64 = ctx.r11.s64 + 13400;
	// beq cr6,0x821ea534
	if (ctx.cr6.eq) goto loc_821EA534;
	// lwz r3,48(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// b 0x821ea538
	goto loc_821EA538;
loc_821EA534:
	// lwz r3,52(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
loc_821EA538:
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82361bd8
	ctx.lr = 0x821EA544;
	sub_82361BD8(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lfs f0,1036(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 1036);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,15624
	ctx.r4.s64 = ctx.r11.s64 + 15624;
	// addi r3,r30,192
	ctx.r3.s64 = ctx.r30.s64 + 192;
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f0.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8259d1b0
	ctx.lr = 0x821EA56C;
	sub_8259D1B0(ctx, base);
	// lwz r9,256(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 256);
	// addi r7,r29,656
	ctx.r7.s64 = ctx.r29.s64 + 656;
	// li r5,64
	ctx.r5.s64 = 64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwzx r3,r8,r7
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// bl 0x82361bd8
	ctx.lr = 0x821EA588;
	sub_82361BD8(ctx, base);
	// lbz r11,1043(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 1043);
	// stb r11,260(r30)
	PPC_STORE_U8(ctx.r30.u32 + 260, ctx.r11.u8);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821EA598"))) PPC_WEAK_FUNC(sub_821EA598);
PPC_FUNC_IMPL(__imp__sub_821EA598) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r10,3
	ctx.r10.s64 = 196608;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// ori r9,r10,51970
	ctx.r9.u64 = ctx.r10.u64 | 51970;
	// lbzx r3,r11,r9
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EA5B0"))) PPC_WEAK_FUNC(sub_821EA5B0);
PPC_FUNC_IMPL(__imp__sub_821EA5B0) {
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
	// addi r3,r11,4952
	ctx.r3.s64 = ctx.r11.s64 + 4952;
	// bl 0x82207228
	ctx.lr = 0x821EA5CC;
	sub_82207228(ctx, base);
	// bl 0x8259da38
	ctx.lr = 0x821EA5D0;
	sub_8259DA38(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfiwx f13,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f13.u32);
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

__attribute__((alias("__imp__sub_821EA5F4"))) PPC_WEAK_FUNC(sub_821EA5F4);
PPC_FUNC_IMPL(__imp__sub_821EA5F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EA5F8"))) PPC_WEAK_FUNC(sub_821EA5F8);
PPC_FUNC_IMPL(__imp__sub_821EA5F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r11,r11,22016
	ctx.r11.s64 = ctx.r11.s64 + 22016;
	// lwz r11,644(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 644);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x821ea614
	if (ctx.cr6.eq) goto loc_821EA614;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821EA614:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EA61C"))) PPC_WEAK_FUNC(sub_821EA61C);
PPC_FUNC_IMPL(__imp__sub_821EA61C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EA620"))) PPC_WEAK_FUNC(sub_821EA620);
PPC_FUNC_IMPL(__imp__sub_821EA620) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r11,r11,-1416
	ctx.r11.s64 = ctx.r11.s64 + -1416;
	// addi r3,r11,272
	ctx.r3.s64 = ctx.r11.s64 + 272;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EA630"))) PPC_WEAK_FUNC(sub_821EA630);
PPC_FUNC_IMPL(__imp__sub_821EA630) {
	PPC_FUNC_PROLOGUE();
	// b 0x82121768
	sub_82121768(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821EA634"))) PPC_WEAK_FUNC(sub_821EA634);
PPC_FUNC_IMPL(__imp__sub_821EA634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EA638"))) PPC_WEAK_FUNC(sub_821EA638);
PPC_FUNC_IMPL(__imp__sub_821EA638) {
	PPC_FUNC_PROLOGUE();
	// b 0x821217f0
	sub_821217F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821EA63C"))) PPC_WEAK_FUNC(sub_821EA63C);
PPC_FUNC_IMPL(__imp__sub_821EA63C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EA640"))) PPC_WEAK_FUNC(sub_821EA640);
PPC_FUNC_IMPL(__imp__sub_821EA640) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x821EA648;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x8210b050
	ctx.lr = 0x821EA65C;
	sub_8210B050(ctx, base);
	// lis r31,-32126
	ctx.r31.s64 = -2105409536;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,23988(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23988);
	// addi r9,r11,5
	ctx.r9.s64 = ctx.r11.s64 + 5;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x8210b068
	ctx.lr = 0x821EA67C;
	sub_8210B068(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// addi r30,r11,27260
	ctx.r30.s64 = ctx.r11.s64 + 27260;
	// bne cr6,0x821ea738
	if (!ctx.cr6.eq) goto loc_821EA738;
	// lwz r11,23988(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23988);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lwz r4,0(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// bl 0x8210b068
	ctx.lr = 0x821EA6AC;
	sub_8210B068(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x821ea738
	if (!ctx.cr6.eq) goto loc_821EA738;
	// lwz r11,23988(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23988);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8210b068
	ctx.lr = 0x821EA6D4;
	sub_8210B068(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821ea738
	if (!ctx.cr6.eq) goto loc_821EA738;
	// lwz r11,23988(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23988);
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x8210b068
	ctx.lr = 0x821EA6FC;
	sub_8210B068(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x821ea730
	if (!ctx.cr6.eq) goto loc_821EA730;
	// lwz r11,23988(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23988);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,3
	ctx.r5.s64 = ctx.r11.s64 + 3;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lwz r4,0(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x8210b068
	ctx.lr = 0x821EA724;
	sub_8210B068(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821ea740
	if (ctx.cr6.eq) goto loc_821EA740;
loc_821EA730:
	// lwz r6,128(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// b 0x821ea744
	goto loc_821EA744;
loc_821EA738:
	// lwz r6,124(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// b 0x821ea744
	goto loc_821EA744;
loc_821EA740:
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_821EA744:
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,-24356
	ctx.r4.s64 = ctx.r11.s64 + -24356;
	// lwzx r5,r10,r30
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// bl 0x8259d1b0
	ctx.lr = 0x821EA75C;
	sub_8259D1B0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821EA764"))) PPC_WEAK_FUNC(sub_821EA764);
PPC_FUNC_IMPL(__imp__sub_821EA764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EA768"))) PPC_WEAK_FUNC(sub_821EA768);
PPC_FUNC_IMPL(__imp__sub_821EA768) {
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
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,23504
	ctx.r3.s64 = ctx.r11.s64 + 23504;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lwz r4,27292(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27292);
	// bl 0x8210fcf8
	ctx.lr = 0x821EA790;
	sub_8210FCF8(ctx, base);
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82361bd8
	ctx.lr = 0x821EA79C;
	sub_82361BD8(ctx, base);
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

__attribute__((alias("__imp__sub_821EA7B0"))) PPC_WEAK_FUNC(sub_821EA7B0);
PPC_FUNC_IMPL(__imp__sub_821EA7B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// lbz r11,47(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 47);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
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

__attribute__((alias("__imp__sub_821EA7D4"))) PPC_WEAK_FUNC(sub_821EA7D4);
PPC_FUNC_IMPL(__imp__sub_821EA7D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EA7D8"))) PPC_WEAK_FUNC(sub_821EA7D8);
PPC_FUNC_IMPL(__imp__sub_821EA7D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r3,r11,-14944
	ctx.r3.s64 = ctx.r11.s64 + -14944;
	// b 0x821058d8
	sub_821058D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821EA7E4"))) PPC_WEAK_FUNC(sub_821EA7E4);
PPC_FUNC_IMPL(__imp__sub_821EA7E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EA7E8"))) PPC_WEAK_FUNC(sub_821EA7E8);
PPC_FUNC_IMPL(__imp__sub_821EA7E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r3,r11,-14944
	ctx.r3.s64 = ctx.r11.s64 + -14944;
	// b 0x82105900
	sub_82105900(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821EA7F4"))) PPC_WEAK_FUNC(sub_821EA7F4);
PPC_FUNC_IMPL(__imp__sub_821EA7F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EA7F8"))) PPC_WEAK_FUNC(sub_821EA7F8);
PPC_FUNC_IMPL(__imp__sub_821EA7F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r3,r11,-14944
	ctx.r3.s64 = ctx.r11.s64 + -14944;
	// b 0x82105908
	sub_82105908(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821EA804"))) PPC_WEAK_FUNC(sub_821EA804);
PPC_FUNC_IMPL(__imp__sub_821EA804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EA808"))) PPC_WEAK_FUNC(sub_821EA808);
PPC_FUNC_IMPL(__imp__sub_821EA808) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r3,r11,-14944
	ctx.r3.s64 = ctx.r11.s64 + -14944;
	// b 0x82105e00
	sub_82105E00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821EA814"))) PPC_WEAK_FUNC(sub_821EA814);
PPC_FUNC_IMPL(__imp__sub_821EA814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EA818"))) PPC_WEAK_FUNC(sub_821EA818);
PPC_FUNC_IMPL(__imp__sub_821EA818) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r10,-27105
	ctx.r10.s64 = -1776353280;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// lis r11,-6216
	ctx.r11.s64 = -407371776;
	// ori r9,r10,28614
	ctx.r9.u64 = ctx.r10.u64 | 28614;
	// ori r4,r11,63999
	ctx.r4.u64 = ctx.r11.u64 | 63999;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// rldimi r4,r9,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// stw r11,8400(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8400, ctx.r11.u32);
	// b 0x820a38e8
	sub_820A38E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821EA848"))) PPC_WEAK_FUNC(sub_821EA848);
PPC_FUNC_IMPL(__imp__sub_821EA848) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r10,-27105
	ctx.r10.s64 = -1776353280;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// lis r11,-6216
	ctx.r11.s64 = -407371776;
	// ori r9,r10,28614
	ctx.r9.u64 = ctx.r10.u64 | 28614;
	// ori r4,r11,63999
	ctx.r4.u64 = ctx.r11.u64 | 63999;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// rldimi r4,r9,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// stw r11,8400(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8400, ctx.r11.u32);
	// b 0x820a38e8
	sub_820A38E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821EA878"))) PPC_WEAK_FUNC(sub_821EA878);
PPC_FUNC_IMPL(__imp__sub_821EA878) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r10,-27105
	ctx.r10.s64 = -1776353280;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// lis r11,-6216
	ctx.r11.s64 = -407371776;
	// ori r9,r10,28614
	ctx.r9.u64 = ctx.r10.u64 | 28614;
	// ori r4,r11,63999
	ctx.r4.u64 = ctx.r11.u64 | 63999;
	// li r11,8
	ctx.r11.s64 = 8;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// rldimi r4,r9,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// stw r11,8400(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8400, ctx.r11.u32);
	// b 0x820a38e8
	sub_820A38E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821EA8A8"))) PPC_WEAK_FUNC(sub_821EA8A8);
PPC_FUNC_IMPL(__imp__sub_821EA8A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r10,-27105
	ctx.r10.s64 = -1776353280;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// lis r11,-6216
	ctx.r11.s64 = -407371776;
	// ori r9,r10,28614
	ctx.r9.u64 = ctx.r10.u64 | 28614;
	// ori r4,r11,63999
	ctx.r4.u64 = ctx.r11.u64 | 63999;
	// li r11,9
	ctx.r11.s64 = 9;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// rldimi r4,r9,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// stw r11,8400(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8400, ctx.r11.u32);
	// b 0x820a38e8
	sub_820A38E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821EA8D8"))) PPC_WEAK_FUNC(sub_821EA8D8);
PPC_FUNC_IMPL(__imp__sub_821EA8D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// ori r9,r10,14716
	ctx.r9.u64 = ctx.r10.u64 | 14716;
	// lbzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r4,r7,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r3,7
	ctx.r3.s64 = 458752;
	// ori r10,r3,14718
	ctx.r10.u64 = ctx.r3.u64 | 14718;
	// lbzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r8,-6216
	ctx.r8.s64 = -407371776;
	// lis r7,-27105
	ctx.r7.s64 = -1776353280;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// ori r11,r7,28614
	ctx.r11.u64 = ctx.r7.u64 | 28614;
	// ori r4,r8,63999
	ctx.r4.u64 = ctx.r8.u64 | 63999;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// li r11,5
	ctx.r11.s64 = 5;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,8400(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8400, ctx.r11.u32);
	// b 0x820a38e8
	sub_820A38E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821EA940"))) PPC_WEAK_FUNC(sub_821EA940);
PPC_FUNC_IMPL(__imp__sub_821EA940) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EA944"))) PPC_WEAK_FUNC(sub_821EA944);
PPC_FUNC_IMPL(__imp__sub_821EA944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EA948"))) PPC_WEAK_FUNC(sub_821EA948);
PPC_FUNC_IMPL(__imp__sub_821EA948) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r10,-27105
	ctx.r10.s64 = -1776353280;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// lis r11,-6216
	ctx.r11.s64 = -407371776;
	// ori r9,r10,28614
	ctx.r9.u64 = ctx.r10.u64 | 28614;
	// ori r4,r11,63999
	ctx.r4.u64 = ctx.r11.u64 | 63999;
	// li r11,6
	ctx.r11.s64 = 6;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// rldimi r4,r9,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// stw r11,8400(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8400, ctx.r11.u32);
	// b 0x820a38e8
	sub_820A38E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821EA978"))) PPC_WEAK_FUNC(sub_821EA978);
PPC_FUNC_IMPL(__imp__sub_821EA978) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// lbz r11,58(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 58);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x821ea994
	if (!ctx.cr6.eq) goto loc_821EA994;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821EA994:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EA99C"))) PPC_WEAK_FUNC(sub_821EA99C);
PPC_FUNC_IMPL(__imp__sub_821EA99C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EA9A0"))) PPC_WEAK_FUNC(sub_821EA9A0);
PPC_FUNC_IMPL(__imp__sub_821EA9A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r3,r11,-14944
	ctx.r3.s64 = ctx.r11.s64 + -14944;
	// b 0x82105e70
	sub_82105E70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821EA9AC"))) PPC_WEAK_FUNC(sub_821EA9AC);
PPC_FUNC_IMPL(__imp__sub_821EA9AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EA9B0"))) PPC_WEAK_FUNC(sub_821EA9B0);
PPC_FUNC_IMPL(__imp__sub_821EA9B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x821EA9B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r3,r11,-14944
	ctx.r3.s64 = ctx.r11.s64 + -14944;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x82106048
	ctx.lr = 0x821EA9D8;
	sub_82106048(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,3672
	ctx.r11.s64 = ctx.r11.s64 + 3672;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stb r10,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r10.u8);
	// stb r9,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r9.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821EAA00"))) PPC_WEAK_FUNC(sub_821EAA00);
PPC_FUNC_IMPL(__imp__sub_821EAA00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r3,r11,-14944
	ctx.r3.s64 = ctx.r11.s64 + -14944;
	// b 0x82106050
	sub_82106050(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821EAA0C"))) PPC_WEAK_FUNC(sub_821EAA0C);
PPC_FUNC_IMPL(__imp__sub_821EAA0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EAA10"))) PPC_WEAK_FUNC(sub_821EAA10);
PPC_FUNC_IMPL(__imp__sub_821EAA10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r3,r11,-14944
	ctx.r3.s64 = ctx.r11.s64 + -14944;
	// b 0x8211f318
	sub_8211F318(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821EAA1C"))) PPC_WEAK_FUNC(sub_821EAA1C);
PPC_FUNC_IMPL(__imp__sub_821EAA1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EAA20"))) PPC_WEAK_FUNC(sub_821EAA20);
PPC_FUNC_IMPL(__imp__sub_821EAA20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// addi r11,r11,-14944
	ctx.r11.s64 = ctx.r11.s64 + -14944;
	// lbz r3,1421(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1421);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EAA30"))) PPC_WEAK_FUNC(sub_821EAA30);
PPC_FUNC_IMPL(__imp__sub_821EAA30) {
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
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,-3
	ctx.r8.s64 = -3;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r30,r10,3672
	ctx.r30.s64 = ctx.r10.s64 + 3672;
	// li r4,128
	ctx.r4.s64 = 128;
	// stb r11,571(r31)
	PPC_STORE_U8(ctx.r31.u32 + 571, ctx.r11.u8);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r11,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r11.u32);
	// addi r3,r31,416
	ctx.r3.s64 = ctx.r31.s64 + 416;
	// stb r11,568(r31)
	PPC_STORE_U8(ctx.r31.u32 + 568, ctx.r11.u8);
	// stw r11,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r11.u32);
	// stb r11,569(r31)
	PPC_STORE_U8(ctx.r31.u32 + 569, ctx.r11.u8);
	// stw r11,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r11.u32);
	// stb r8,570(r31)
	PPC_STORE_U8(ctx.r31.u32 + 570, ctx.r8.u8);
	// stb r7,572(r31)
	PPC_STORE_U8(ctx.r31.u32 + 572, ctx.r7.u8);
	// stb r9,574(r31)
	PPC_STORE_U8(ctx.r31.u32 + 574, ctx.r9.u8);
	// stb r9,573(r31)
	PPC_STORE_U8(ctx.r31.u32 + 573, ctx.r9.u8);
	// stb r11,575(r31)
	PPC_STORE_U8(ctx.r31.u32 + 575, ctx.r11.u8);
	// bl 0x8259da78
	ctx.lr = 0x821EAA9C;
	sub_8259DA78(ctx, base);
	// li r4,128
	ctx.r4.s64 = 128;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r31,256
	ctx.r3.s64 = ctx.r31.s64 + 256;
	// bl 0x8259da78
	ctx.lr = 0x821EAAAC;
	sub_8259DA78(ctx, base);
	// li r4,128
	ctx.r4.s64 = 128;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x8259da78
	ctx.lr = 0x821EAABC;
	sub_8259DA78(ctx, base);
	// li r4,128
	ctx.r4.s64 = 128;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259da78
	ctx.lr = 0x821EAACC;
	sub_8259DA78(ctx, base);
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

__attribute__((alias("__imp__sub_821EAAE4"))) PPC_WEAK_FUNC(sub_821EAAE4);
PPC_FUNC_IMPL(__imp__sub_821EAAE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EAAE8"))) PPC_WEAK_FUNC(sub_821EAAE8);
PPC_FUNC_IMPL(__imp__sub_821EAAE8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EAB04"))) PPC_WEAK_FUNC(sub_821EAB04);
PPC_FUNC_IMPL(__imp__sub_821EAB04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EAB08"))) PPC_WEAK_FUNC(sub_821EAB08);
PPC_FUNC_IMPL(__imp__sub_821EAB08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x821EAB10;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r29,r11,-1416
	ctx.r29.s64 = ctx.r11.s64 + -1416;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r29,345
	ctx.r3.s64 = ctx.r29.s64 + 345;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x820fbfc0
	ctx.lr = 0x821EAB30;
	sub_820FBFC0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r29,345
	ctx.r3.s64 = ctx.r29.s64 + 345;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// bl 0x820fbfc0
	ctx.lr = 0x821EAB48;
	sub_820FBFC0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r29,345
	ctx.r3.s64 = ctx.r29.s64 + 345;
	// stb r11,1(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1, ctx.r11.u8);
	// bl 0x820fbfc0
	ctx.lr = 0x821EAB60;
	sub_820FBFC0(ctx, base);
	// stb r3,2(r30)
	PPC_STORE_U8(ctx.r30.u32 + 2, ctx.r3.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821EAB6C"))) PPC_WEAK_FUNC(sub_821EAB6C);
PPC_FUNC_IMPL(__imp__sub_821EAB6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EAB70"))) PPC_WEAK_FUNC(sub_821EAB70);
PPC_FUNC_IMPL(__imp__sub_821EAB70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x821EAB78;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82347480
	ctx.lr = 0x821EAB84;
	sub_82347480(ctx, base);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lbz r10,97(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 97);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r11,28544
	ctx.r29.s64 = ctx.r11.s64 + 28544;
	// lbz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 100);
	// lbz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// stb r9,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r9.u8);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// stb r30,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r30.u8);
loc_821EABB0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8259cce0
	ctx.lr = 0x821EABBC;
	sub_8259CCE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821eabe4
	if (ctx.cr6.eq) goto loc_821EABE4;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// addi r8,r29,68
	ctx.r8.s64 = ctx.r29.s64 + 68;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r31,r8
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x821eabb0
	if (ctx.cr6.lt) goto loc_821EABB0;
	// li r3,8
	ctx.r3.s64 = 8;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_821EABE4:
	// rlwinm r7,r30,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r3,r7,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r29.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821EABF4"))) PPC_WEAK_FUNC(sub_821EABF4);
PPC_FUNC_IMPL(__imp__sub_821EABF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EABF8"))) PPC_WEAK_FUNC(sub_821EABF8);
PPC_FUNC_IMPL(__imp__sub_821EABF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x821EAC00;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x8210b050
	ctx.lr = 0x821EAC18;
	sub_8210B050(ctx, base);
	// lis r31,-32126
	ctx.r31.s64 = -2105409536;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,23988(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23988);
	// addi r9,r11,5
	ctx.r9.s64 = ctx.r11.s64 + 5;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x8210b068
	ctx.lr = 0x821EAC38;
	sub_8210B068(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// addi r30,r11,27412
	ctx.r30.s64 = ctx.r11.s64 + 27412;
	// bne cr6,0x821eacf4
	if (!ctx.cr6.eq) goto loc_821EACF4;
	// lwz r11,23988(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23988);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lwz r4,0(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// bl 0x8210b068
	ctx.lr = 0x821EAC68;
	sub_8210B068(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x821eacf4
	if (!ctx.cr6.eq) goto loc_821EACF4;
	// lwz r11,23988(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23988);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8210b068
	ctx.lr = 0x821EAC90;
	sub_8210B068(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821eacf4
	if (!ctx.cr6.eq) goto loc_821EACF4;
	// lwz r11,23988(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23988);
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x8210b068
	ctx.lr = 0x821EACB8;
	sub_8210B068(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x821eacec
	if (!ctx.cr6.eq) goto loc_821EACEC;
	// lwz r11,23988(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23988);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,3
	ctx.r5.s64 = ctx.r11.s64 + 3;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lwz r4,0(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x8210b068
	ctx.lr = 0x821EACE0;
	sub_8210B068(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821eacfc
	if (ctx.cr6.eq) goto loc_821EACFC;
loc_821EACEC:
	// lwz r7,68(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// b 0x821ead00
	goto loc_821EAD00;
loc_821EACF4:
	// lwz r7,64(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// b 0x821ead00
	goto loc_821EAD00;
loc_821EACFC:
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_821EAD00:
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r6,r27,1
	ctx.r6.s64 = ctx.r27.s64 + 1;
	// addi r4,r11,15640
	ctx.r4.s64 = ctx.r11.s64 + 15640;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r5,r10,r30
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// bl 0x8259d1b0
	ctx.lr = 0x821EAD1C;
	sub_8259D1B0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821EAD24"))) PPC_WEAK_FUNC(sub_821EAD24);
PPC_FUNC_IMPL(__imp__sub_821EAD24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EAD28"))) PPC_WEAK_FUNC(sub_821EAD28);
PPC_FUNC_IMPL(__imp__sub_821EAD28) {
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
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,27412
	ctx.r11.s64 = ctx.r11.s64 + 27412;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r6,r5,1
	ctx.r6.s64 = ctx.r5.s64 + 1;
	// addi r4,r10,15652
	ctx.r4.s64 = ctx.r10.s64 + 15652;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwzx r5,r9,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// bl 0x8259d1b0
	ctx.lr = 0x821EAD60;
	sub_8259D1B0(ctx, base);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,23504
	ctx.r3.s64 = ctx.r11.s64 + 23504;
	// bl 0x8210fcf8
	ctx.lr = 0x821EAD70;
	sub_8210FCF8(ctx, base);
	// li r5,128
	ctx.r5.s64 = 128;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82361bd8
	ctx.lr = 0x821EAD7C;
	sub_82361BD8(ctx, base);
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

__attribute__((alias("__imp__sub_821EAD90"))) PPC_WEAK_FUNC(sub_821EAD90);
PPC_FUNC_IMPL(__imp__sub_821EAD90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x821EAD98;
	__savegprlr_26(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r3,r11,11600
	ctx.r3.s64 = ctx.r11.s64 + 11600;
	// bl 0x821f8288
	ctx.lr = 0x821EADAC;
	sub_821F8288(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// addi r29,r11,-1416
	ctx.r29.s64 = ctx.r11.s64 + -1416;
loc_821EADC4:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r29,345
	ctx.r3.s64 = ctx.r29.s64 + 345;
	// bl 0x820fbfc0
	ctx.lr = 0x821EADD4;
	sub_820FBFC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821eadec
	if (ctx.cr6.eq) goto loc_821EADEC;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// extsb r26,r10
	ctx.r26.s64 = ctx.r10.s8;
loc_821EADEC:
	// addi r9,r30,1
	ctx.r9.s64 = ctx.r30.s64 + 1;
	// extsb r30,r9
	ctx.r30.s64 = ctx.r9.s8;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// blt cr6,0x821eadc4
	if (ctx.cr6.lt) goto loc_821EADC4;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// stb r28,574(r31)
	PPC_STORE_U8(ctx.r31.u32 + 574, ctx.r28.u8);
	// extsb r8,r26
	ctx.r8.s64 = ctx.r26.s8;
	// stb r28,573(r31)
	PPC_STORE_U8(ctx.r31.u32 + 573, ctx.r28.u8);
	// li r7,3
	ctx.r7.s64 = 3;
	// li r29,14
	ctx.r29.s64 = 14;
	// addi r11,r11,27444
	ctx.r11.s64 = ctx.r11.s64 + 27444;
	// rlwinm r6,r27,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r31,544
	ctx.r30.s64 = ctx.r31.s64 + 544;
	// stw r8,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r8.u32);
	// li r4,9
	ctx.r4.s64 = 9;
	// stw r7,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r7.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r29,571(r31)
	PPC_STORE_U8(ctx.r31.u32 + 571, ctx.r29.u8);
	// lwzx r5,r6,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// bl 0x8259da78
	ctx.lr = 0x821EAE3C;
	sub_8259DA78(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// li r6,128
	ctx.r6.s64 = 128;
	// addi r3,r11,14528
	ctx.r3.s64 = ctx.r11.s64 + 14528;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x821f66c0
	ctx.lr = 0x821EAE54;
	sub_821F66C0(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r31,416
	ctx.r3.s64 = ctx.r31.s64 + 416;
	// bl 0x8259da78
	ctx.lr = 0x821EAE64;
	sub_8259DA78(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r10,-3
	ctx.r10.s64 = -3;
	// stb r29,568(r31)
	PPC_STORE_U8(ctx.r31.u32 + 568, ctx.r29.u8);
	// addi r30,r11,3672
	ctx.r30.s64 = ctx.r11.s64 + 3672;
	// stb r28,569(r31)
	PPC_STORE_U8(ctx.r31.u32 + 569, ctx.r28.u8);
	// li r4,128
	ctx.r4.s64 = 128;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r10,570(r31)
	PPC_STORE_U8(ctx.r31.u32 + 570, ctx.r10.u8);
	// bl 0x8259da78
	ctx.lr = 0x821EAE8C;
	sub_8259DA78(ctx, base);
	// li r4,128
	ctx.r4.s64 = 128;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x8259da78
	ctx.lr = 0x821EAE9C;
	sub_8259DA78(ctx, base);
	// li r4,128
	ctx.r4.s64 = 128;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r31,256
	ctx.r3.s64 = ctx.r31.s64 + 256;
	// bl 0x8259da78
	ctx.lr = 0x821EAEAC;
	sub_8259DA78(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821EAEB4"))) PPC_WEAK_FUNC(sub_821EAEB4);
PPC_FUNC_IMPL(__imp__sub_821EAEB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EAEB8"))) PPC_WEAK_FUNC(sub_821EAEB8);
PPC_FUNC_IMPL(__imp__sub_821EAEB8) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,5
	ctx.r7.s64 = 5;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// li r6,6
	ctx.r6.s64 = 6;
	// stw r9,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r9.u32);
	// li r3,7
	ctx.r3.s64 = 7;
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r8,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r8.u32);
	// li r9,9
	ctx.r9.s64 = 9;
	// stw r7,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r7.u32);
	// stw r11,36(r4)
	PPC_STORE_U32(ctx.r4.u32 + 36, ctx.r11.u32);
	// stw r6,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r6.u32);
	// stw r3,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, ctx.r3.u32);
	// stw r10,28(r4)
	PPC_STORE_U32(ctx.r4.u32 + 28, ctx.r10.u32);
	// stw r9,32(r4)
	PPC_STORE_U32(ctx.r4.u32 + 32, ctx.r9.u32);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EAF10"))) PPC_WEAK_FUNC(sub_821EAF10);
PPC_FUNC_IMPL(__imp__sub_821EAF10) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x821EAF18;
	__savegprlr_29(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// extsb r31,r4
	ctx.r31.s64 = ctx.r4.s8;
	// addi r3,r11,15384
	ctx.r3.s64 = ctx.r11.s64 + 15384;
	// lis r8,-32126
	ctx.r8.s64 = -2105409536;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// rlwinm r7,r31,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r4,r8,-1416
	ctx.r4.s64 = ctx.r8.s64 + -1416;
loc_821EAF3C:
	// lwz r8,-4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// addi r30,r4,6180
	ctx.r30.s64 = ctx.r4.s64 + 6180;
	// add r29,r7,r8
	ctx.r29.u64 = ctx.r7.u64 + ctx.r8.u64;
	// rlwinm r29,r29,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r29,r30
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x821eaf64
	if (!ctx.cr6.gt) goto loc_821EAF64;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_821EAF64:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r30,r4,6180
	ctx.r30.s64 = ctx.r4.s64 + 6180;
	// add r29,r7,r8
	ctx.r29.u64 = ctx.r7.u64 + ctx.r8.u64;
	// rlwinm r29,r29,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r29,r30
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x821eaf8c
	if (!ctx.cr6.gt) goto loc_821EAF8C;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_821EAF8C:
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r30,r4,6180
	ctx.r30.s64 = ctx.r4.s64 + 6180;
	// add r29,r7,r8
	ctx.r29.u64 = ctx.r7.u64 + ctx.r8.u64;
	// rlwinm r29,r29,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r29,r30
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x821eafb4
	if (!ctx.cr6.gt) goto loc_821EAFB4;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_821EAFB4:
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r30,r4,6180
	ctx.r30.s64 = ctx.r4.s64 + 6180;
	// add r29,r7,r8
	ctx.r29.u64 = ctx.r7.u64 + ctx.r8.u64;
	// rlwinm r29,r29,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r29,r30
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x821eafdc
	if (!ctx.cr6.gt) goto loc_821EAFDC;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_821EAFDC:
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// addi r8,r3,36
	ctx.r8.s64 = ctx.r3.s64 + 36;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x821eaf3c
	if (ctx.cr6.lt) goto loc_821EAF3C;
	// rlwinm r7,r31,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r4,6532
	ctx.r4.s64 = ctx.r4.s64 + 6532;
	// lwzx r3,r7,r4
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r4.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821eb018
	if (ctx.cr6.eq) goto loc_821EB018;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// li r9,9
	ctx.r9.s64 = 9;
	// stwx r9,r10,r5
	PPC_STORE_U32(ctx.r10.u32 + ctx.r5.u32, ctx.r9.u32);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_821EB018:
	// stw r9,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r9.u32);
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821EB020"))) PPC_WEAK_FUNC(sub_821EB020);
PPC_FUNC_IMPL(__imp__sub_821EB020) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x821EB028;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r11,11600
	ctx.r3.s64 = ctx.r11.s64 + 11600;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x821f8298
	ctx.lr = 0x821EB044;
	sub_821F8298(ctx, base);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// extsb r9,r30
	ctx.r9.s64 = ctx.r30.s8;
	// addi r11,r11,-1416
	ctx.r11.s64 = ctx.r11.s64 + -1416;
	// li r7,15
	ctx.r7.s64 = 15;
	// addi r5,r11,6180
	ctx.r5.s64 = ctx.r11.s64 + 6180;
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// li r6,14
	ctx.r6.s64 = 14;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// li r8,2
	ctx.r8.s64 = 2;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwzx r11,r3,r5
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r5.u32);
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821eb0a4
	if (!ctx.cr6.gt) goto loc_821EB0A4;
	// addi r9,r31,8
	ctx.r9.s64 = ctx.r31.s64 + 8;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
loc_821EB08C:
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// blt cr6,0x821eb08c
	if (ctx.cr6.lt) goto loc_821EB08C;
loc_821EB0A4:
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821EB0B0"))) PPC_WEAK_FUNC(sub_821EB0B0);
PPC_FUNC_IMPL(__imp__sub_821EB0B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r11,r11,11600
	ctx.r11.s64 = ctx.r11.s64 + 11600;
	// lbz r3,646(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 646);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EB0C0"))) PPC_WEAK_FUNC(sub_821EB0C0);
PPC_FUNC_IMPL(__imp__sub_821EB0C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae4
	ctx.lr = 0x821EB0C8;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// addi r30,r11,-1416
	ctx.r30.s64 = ctx.r11.s64 + -1416;
	// rlwinm r11,r24,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r10,r30,6180
	ctx.r10.s64 = ctx.r30.s64 + 6180;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// mulli r26,r24,112
	ctx.r26.s64 = ctx.r24.s64 * 112;
	// add r27,r11,r10
	ctx.r27.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r23,8
	ctx.r23.s64 = 8;
loc_821EB0F4:
	// lwz r28,0(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// add r25,r28,r25
	ctx.r25.u64 = ctx.r28.u64 + ctx.r25.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x821eb154
	if (!ctx.cr6.gt) goto loc_821EB154;
loc_821EB108:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x821eb128
	if (!ctx.cr6.lt) goto loc_821EB128;
	// add r10,r26,r31
	ctx.r10.u64 = ctx.r26.u64 + ctx.r31.u64;
	// addi r8,r30,1252
	ctx.r8.s64 = ctx.r30.s64 + 1252;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r9,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// b 0x821eb12c
	goto loc_821EB12C;
loc_821EB128:
	// li r4,0
	ctx.r4.s64 = 0;
loc_821EB12C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820fceb0
	ctx.lr = 0x821EB134;
	sub_820FCEB0(ctx, base);
	// addi r7,r30,723
	ctx.r7.s64 = ctx.r30.s64 + 723;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r28
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, ctx.xer);
	// lbzx r6,r3,r7
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r7.u32);
	// extsb r11,r6
	ctx.r11.s64 = ctx.r6.s8;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
	// blt cr6,0x821eb108
	if (ctx.cr6.lt) goto loc_821EB108;
loc_821EB154:
	// addi r23,r23,-1
	ctx.r23.s64 = ctx.r23.s64 + -1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// addi r26,r26,14
	ctx.r26.s64 = ctx.r26.s64 + 14;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne cr6,0x821eb0f4
	if (!ctx.cr6.eq) goto loc_821EB0F4;
	// rlwinm r5,r24,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r30,6532
	ctx.r4.s64 = ctx.r30.s64 + 6532;
	// lwzx r4,r5,r4
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r4.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821eb19c
	if (ctx.cr6.eq) goto loc_821EB19C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820fceb0
	ctx.lr = 0x821EB184;
	sub_820FCEB0(ctx, base);
	// addi r11,r30,723
	ctx.r11.s64 = ctx.r30.s64 + 723;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// lbzx r10,r3,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
loc_821EB19C:
	// rlwinm r11,r25,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r25,r11
	ctx.r9.u64 = ctx.r25.u64 + ctx.r11.u64;
	// subf r8,r29,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r29.s64;
	// extsb r3,r8
	ctx.r3.s64 = ctx.r8.s8;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb34
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821EB1B4"))) PPC_WEAK_FUNC(sub_821EB1B4);
PPC_FUNC_IMPL(__imp__sub_821EB1B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EB1B8"))) PPC_WEAK_FUNC(sub_821EB1B8);
PPC_FUNC_IMPL(__imp__sub_821EB1B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae4
	ctx.lr = 0x821EB1C0;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// addi r30,r11,-1416
	ctx.r30.s64 = ctx.r11.s64 + -1416;
	// rlwinm r11,r23,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r10,r30,6180
	ctx.r10.s64 = ctx.r30.s64 + 6180;
	// li r24,0
	ctx.r24.s64 = 0;
	// mulli r28,r23,112
	ctx.r28.s64 = ctx.r23.s64 * 112;
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r25,8
	ctx.r25.s64 = 8;
loc_821EB1E8:
	// lwz r27,0(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r26,0
	ctx.r26.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x821eb248
	if (!ctx.cr6.gt) goto loc_821EB248;
loc_821EB1FC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x821eb21c
	if (!ctx.cr6.lt) goto loc_821EB21C;
	// add r10,r28,r31
	ctx.r10.u64 = ctx.r28.u64 + ctx.r31.u64;
	// addi r8,r30,1252
	ctx.r8.s64 = ctx.r30.s64 + 1252;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// b 0x821eb220
	goto loc_821EB220;
loc_821EB21C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821EB220:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r4,24(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// bl 0x820ff148
	ctx.lr = 0x821EB22C;
	sub_820FF148(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x821eb23c
	if (ctx.cr6.eq) goto loc_821EB23C;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
loc_821EB23C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r27
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x821eb1fc
	if (ctx.cr6.lt) goto loc_821EB1FC;
loc_821EB248:
	// addi r25,r25,-1
	ctx.r25.s64 = ctx.r25.s64 + -1;
	// add r24,r26,r24
	ctx.r24.u64 = ctx.r26.u64 + ctx.r24.u64;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r28,r28,14
	ctx.r28.s64 = ctx.r28.s64 + 14;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x821eb1e8
	if (!ctx.cr6.eq) goto loc_821EB1E8;
	// rlwinm r6,r23,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r30,6532
	ctx.r5.s64 = ctx.r30.s64 + 6532;
	// lwzx r11,r6,r5
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821eb29c
	if (ctx.cr6.eq) goto loc_821EB29C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r4,24(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// bl 0x820ff148
	ctx.lr = 0x821EB280;
	sub_820FF148(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821eb29c
	if (ctx.cr6.eq) goto loc_821EB29C;
	// addi r11,r24,1
	ctx.r11.s64 = ctx.r24.s64 + 1;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb34
	__restgprlr_23(ctx, base);
	return;
loc_821EB29C:
	// extsb r3,r24
	ctx.r3.s64 = ctx.r24.s8;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb34
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821EB2A8"))) PPC_WEAK_FUNC(sub_821EB2A8);
PPC_FUNC_IMPL(__imp__sub_821EB2A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae0
	ctx.lr = 0x821EB2B0;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// addi r30,r11,-1416
	ctx.r30.s64 = ctx.r11.s64 + -1416;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// rlwinm r10,r24,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r11,13096
	ctx.r11.s64 = ctx.r11.s64 + 13096;
	// li r22,0
	ctx.r22.s64 = 0;
	// mulli r26,r24,112
	ctx.r26.s64 = ctx.r24.s64 * 112;
	// lwz r28,6936(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6936);
	// addi r11,r30,6180
	ctx.r11.s64 = ctx.r30.s64 + 6180;
	// li r23,8
	ctx.r23.s64 = 8;
	// add r27,r10,r11
	ctx.r27.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_821EB2E4:
	// lwz r25,0(r27)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x821eb36c
	if (!ctx.cr6.gt) goto loc_821EB36C;
loc_821EB2F4:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x821eb314
	if (!ctx.cr6.lt) goto loc_821EB314;
	// add r10,r26,r29
	ctx.r10.u64 = ctx.r26.u64 + ctx.r29.u64;
	// addi r8,r30,1252
	ctx.r8.s64 = ctx.r30.s64 + 1252;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r9,r8
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// b 0x821eb318
	goto loc_821EB318;
loc_821EB314:
	// li r31,0
	ctx.r31.s64 = 0;
loc_821EB318:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ld r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// bl 0x820fca50
	ctx.lr = 0x821EB324;
	sub_820FCA50(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r7,r30,448
	ctx.r7.s64 = ctx.r30.s64 + 448;
	// ld r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbzx r6,r11,r7
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// extsb r31,r6
	ctx.r31.s64 = ctx.r6.s8;
	// bl 0x820ff148
	ctx.lr = 0x821EB340;
	sub_820FF148(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x821eb360
	if (!ctx.cr6.gt) goto loc_821EB360;
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r4,r5
	ctx.r4.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// rlwinm r10,r4,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821eb360
	if (!ctx.cr6.eq) goto loc_821EB360;
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
loc_821EB360:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r29,r25
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x821eb2f4
	if (ctx.cr6.lt) goto loc_821EB2F4;
loc_821EB36C:
	// addi r23,r23,-1
	ctx.r23.s64 = ctx.r23.s64 + -1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// addi r26,r26,14
	ctx.r26.s64 = ctx.r26.s64 + 14;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne cr6,0x821eb2e4
	if (!ctx.cr6.eq) goto loc_821EB2E4;
	// rlwinm r9,r24,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r30,6532
	ctx.r8.s64 = ctx.r30.s64 + 6532;
	// lwzx r31,r9,r8
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821eb3e8
	if (ctx.cr6.eq) goto loc_821EB3E8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ld r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// bl 0x820fca50
	ctx.lr = 0x821EB3A0;
	sub_820FCA50(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r7,r30,448
	ctx.r7.s64 = ctx.r30.s64 + 448;
	// ld r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbzx r6,r11,r7
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// extsb r31,r6
	ctx.r31.s64 = ctx.r6.s8;
	// bl 0x820ff148
	ctx.lr = 0x821EB3BC;
	sub_820FF148(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x821eb3e8
	if (!ctx.cr6.gt) goto loc_821EB3E8;
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r4,r5
	ctx.r4.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// rlwinm r10,r4,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821eb3e8
	if (!ctx.cr6.eq) goto loc_821EB3E8;
	// addi r11,r22,1
	ctx.r11.s64 = ctx.r22.s64 + 1;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_821EB3E8:
	// extsb r3,r22
	ctx.r3.s64 = ctx.r22.s8;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821EB3F4"))) PPC_WEAK_FUNC(sub_821EB3F4);
PPC_FUNC_IMPL(__imp__sub_821EB3F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EB3F8"))) PPC_WEAK_FUNC(sub_821EB3F8);
PPC_FUNC_IMPL(__imp__sub_821EB3F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae0
	ctx.lr = 0x821EB400;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// addi r11,r11,13096
	ctx.r11.s64 = ctx.r11.s64 + 13096;
	// li r22,0
	ctx.r22.s64 = 0;
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r24,6936(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6936);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r31,r11,-1416
	ctx.r31.s64 = ctx.r11.s64 + -1416;
loc_821EB424:
	// clrlwi r11,r22,24
	ctx.r11.u64 = ctx.r22.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821eb4c0
	if (!ctx.cr6.eq) goto loc_821EB4C0;
	// rlwinm r11,r23,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r31,6180
	ctx.r10.s64 = ctx.r31.s64 + 6180;
	// add r9,r11,r25
	ctx.r9.u64 = ctx.r11.u64 + ctx.r25.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r26,r8,r10
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x821eb4b4
	if (!ctx.cr6.gt) goto loc_821EB4B4;
	// add r29,r11,r25
	ctx.r29.u64 = ctx.r11.u64 + ctx.r25.u64;
	// addi r27,r31,6180
	ctx.r27.s64 = ctx.r31.s64 + 6180;
	// rlwinm r28,r29,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
loc_821EB45C:
	// lwzx r7,r28,r27
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r27.u32);
	// cmpw cr6,r30,r7
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x821eb480
	if (!ctx.cr6.lt) goto loc_821EB480;
	// mulli r11,r29,14
	ctx.r11.s64 = ctx.r29.s64 * 14;
	// add r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r31,1252
	ctx.r4.s64 = ctx.r31.s64 + 1252;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r5,r4
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r4.u32);
	// b 0x821eb484
	goto loc_821EB484;
loc_821EB480:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821EB484:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// ld r4,24(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// bl 0x820fca50
	ctx.lr = 0x821EB490;
	sub_820FCA50(ctx, base);
	// addi r11,r31,448
	ctx.r11.s64 = ctx.r31.s64 + 448;
	// lbzx r10,r3,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// bne cr6,0x821eb4b0
	if (!ctx.cr6.eq) goto loc_821EB4B0;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r26
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x821eb45c
	if (ctx.cr6.lt) goto loc_821EB45C;
	// b 0x821eb4b4
	goto loc_821EB4B4;
loc_821EB4B0:
	// li r22,1
	ctx.r22.s64 = 1;
loc_821EB4B4:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// cmpwi cr6,r25,8
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 8, ctx.xer);
	// blt cr6,0x821eb424
	if (ctx.cr6.lt) goto loc_821EB424;
loc_821EB4C0:
	// rlwinm r9,r23,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r31,6532
	ctx.r8.s64 = ctx.r31.s64 + 6532;
	// lwzx r11,r9,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821eb4f4
	if (ctx.cr6.eq) goto loc_821EB4F4;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// ld r4,24(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// bl 0x820fca50
	ctx.lr = 0x821EB4E0;
	sub_820FCA50(ctx, base);
	// addi r7,r31,448
	ctx.r7.s64 = ctx.r31.s64 + 448;
	// lbzx r6,r3,r7
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r7.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r6,255
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 255, ctx.xer);
	// bne cr6,0x821eb4f8
	if (!ctx.cr6.eq) goto loc_821EB4F8;
loc_821EB4F4:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
loc_821EB4F8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821EB500"))) PPC_WEAK_FUNC(sub_821EB500);
PPC_FUNC_IMPL(__imp__sub_821EB500) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baec
	ctx.lr = 0x821EB508;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r3,r11,11600
	ctx.r3.s64 = ctx.r11.s64 + 11600;
	// bl 0x821f8298
	ctx.lr = 0x821EB51C;
	sub_821F8298(ctx, base);
	// cmpwi cr6,r31,8
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 8, ctx.xer);
	// bge cr6,0x821eb5c0
	if (!ctx.cr6.lt) goto loc_821EB5C0;
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// add r27,r11,r31
	ctx.r27.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r30,r10,-1416
	ctx.r30.s64 = ctx.r10.s64 + -1416;
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r30,6180
	ctx.r11.s64 = ctx.r30.s64 + 6180;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwzx r28,r10,r11
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x821eb5a8
	if (!ctx.cr6.gt) goto loc_821EB5A8;
	// rlwinm r26,r27,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r25,r30,6180
	ctx.r25.s64 = ctx.r30.s64 + 6180;
loc_821EB558:
	// lwzx r9,r26,r25
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r25.u32);
	// cmpw cr6,r31,r9
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x821eb57c
	if (!ctx.cr6.lt) goto loc_821EB57C;
	// mulli r11,r27,14
	ctx.r11.s64 = ctx.r27.s64 * 14;
	// add r8,r11,r31
	ctx.r8.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r6,r30,1252
	ctx.r6.s64 = ctx.r30.s64 + 1252;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r7,r6
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// b 0x821eb580
	goto loc_821EB580;
loc_821EB57C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_821EB580:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820fceb0
	ctx.lr = 0x821EB588;
	sub_820FCEB0(ctx, base);
	// addi r5,r30,723
	ctx.r5.s64 = ctx.r30.s64 + 723;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r28
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, ctx.xer);
	// lbzx r4,r3,r5
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r5.u32);
	// extsb r11,r4
	ctx.r11.s64 = ctx.r4.s8;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
	// blt cr6,0x821eb558
	if (ctx.cr6.lt) goto loc_821EB558;
loc_821EB5A8:
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r28,r11
	ctx.r3.u64 = ctx.r28.u64 + ctx.r11.u64;
	// subf r11,r29,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r29.s64;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
loc_821EB5C0:
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r31,r11,-1416
	ctx.r31.s64 = ctx.r11.s64 + -1416;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r31,6532
	ctx.r10.s64 = ctx.r31.s64 + 6532;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x820fceb0
	ctx.lr = 0x821EB5DC;
	sub_820FCEB0(ctx, base);
	// addi r9,r31,723
	ctx.r9.s64 = ctx.r31.s64 + 723;
	// lbzx r8,r3,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r9.u32);
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// subfic r11,r7,4
	ctx.xer.ca = ctx.r7.u32 <= 4;
	ctx.r11.s64 = 4 - ctx.r7.s64;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821EB5F8"))) PPC_WEAK_FUNC(sub_821EB5F8);
PPC_FUNC_IMPL(__imp__sub_821EB5F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x821EB600;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r31,r11,11600
	ctx.r31.s64 = ctx.r11.s64 + 11600;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f8298
	ctx.lr = 0x821EB618;
	sub_821F8298(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f8288
	ctx.lr = 0x821EB624;
	sub_821F8288(ctx, base);
	// lis r9,-32126
	ctx.r9.s64 = -2105409536;
	// rlwinm r10,r29,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r31,r9,-1416
	ctx.r31.s64 = ctx.r9.s64 + -1416;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// addi r9,r31,6180
	ctx.r9.s64 = ctx.r31.s64 + 6180;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// extsb r11,r30
	ctx.r11.s64 = ctx.r30.s8;
	// lwzx r7,r8,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x821eb664
	if (!ctx.cr6.lt) goto loc_821EB664;
	// mulli r10,r10,14
	ctx.r10.s64 = ctx.r10.s64 * 14;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r4,r31,1252
	ctx.r4.s64 = ctx.r31.s64 + 1252;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r5,r4
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r4.u32);
	// b 0x821eb668
	goto loc_821EB668;
loc_821EB664:
	// li r4,0
	ctx.r4.s64 = 0;
loc_821EB668:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820fceb0
	ctx.lr = 0x821EB670;
	sub_820FCEB0(ctx, base);
	// addi r11,r31,723
	ctx.r11.s64 = ctx.r31.s64 + 723;
	// lbzx r3,r3,r11
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821EB680"))) PPC_WEAK_FUNC(sub_821EB680);
PPC_FUNC_IMPL(__imp__sub_821EB680) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-812
	ctx.r5.s64 = ctx.r11.s64 + -812;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,15668
	ctx.r3.s64 = ctx.r11.s64 + 15668;
	// bl 0x82427c40
	ctx.lr = 0x821EB6A8;
	sub_82427C40(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r10,r11,-776
	ctx.r10.s64 = ctx.r11.s64 + -776;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_821EB6B4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x821eb6d8
	if (ctx.cr6.eq) goto loc_821EB6D8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x821eb6b4
	if (ctx.cr6.eq) goto loc_821EB6B4;
loc_821EB6D8:
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// clrlwi r3,r6,24
	ctx.r3.u64 = ctx.r6.u32 & 0xFF;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EB6F4"))) PPC_WEAK_FUNC(sub_821EB6F4);
PPC_FUNC_IMPL(__imp__sub_821EB6F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EB6F8"))) PPC_WEAK_FUNC(sub_821EB6F8);
PPC_FUNC_IMPL(__imp__sub_821EB6F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baec
	ctx.lr = 0x821EB700;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r31,r11,23504
	ctx.r31.s64 = ctx.r11.s64 + 23504;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82104b40
	ctx.lr = 0x821EB71C;
	sub_82104B40(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82104b50
	ctx.lr = 0x821EB72C;
	sub_82104B50(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// sth r29,0(r26)
	PPC_STORE_U16(ctx.r26.u32 + 0, ctx.r29.u16);
	// addi r25,r11,15692
	ctx.r25.s64 = ctx.r11.s64 + 15692;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// bl 0x8259d1b0
	ctx.lr = 0x821EB750;
	sub_8259D1B0(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82104a20
	ctx.lr = 0x821EB760;
	sub_82104A20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821eb7dc
	if (ctx.cr6.eq) goto loc_821EB7DC;
loc_821EB76C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821049b0
	ctx.lr = 0x821EB77C;
	sub_821049B0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r3,r11,r26
	ctx.r3.u64 = ctx.r11.u64 + ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x82361f88
	ctx.lr = 0x821EB794;
	sub_82361F88(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82361f20
	ctx.lr = 0x821EB79C;
	sub_82361F20(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// subf r28,r10,r28
	ctx.r28.s64 = ctx.r28.s64 - ctx.r10.s64;
	// bl 0x8259d1b0
	ctx.lr = 0x821EB7C0;
	sub_8259D1B0(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82104a20
	ctx.lr = 0x821EB7D0;
	sub_82104A20(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821eb76c
	if (!ctx.cr6.eq) goto loc_821EB76C;
loc_821EB7DC:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r11,15684
	ctx.r4.s64 = ctx.r11.s64 + 15684;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r3,r11,14528
	ctx.r3.s64 = ctx.r11.s64 + 14528;
	// bl 0x821f5fb0
	ctx.lr = 0x821EB7F4;
	sub_821F5FB0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821EB7FC"))) PPC_WEAK_FUNC(sub_821EB7FC);
PPC_FUNC_IMPL(__imp__sub_821EB7FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EB800"))) PPC_WEAK_FUNC(sub_821EB800);
PPC_FUNC_IMPL(__imp__sub_821EB800) {
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
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821eb88c
	if (!ctx.cr6.eq) goto loc_821EB88C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// rlwinm r6,r4,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,15448
	ctx.r11.s64 = ctx.r11.s64 + 15448;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r3,-27113
	ctx.r3.s64 = -1776877568;
	// lis r4,14774
	ctx.r4.s64 = 968228864;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwzx r6,r6,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// addi r31,r10,29016
	ctx.r31.s64 = ctx.r10.s64 + 29016;
	// ori r11,r3,29718
	ctx.r11.u64 = ctx.r3.u64 | 29718;
	// ori r4,r4,30
	ctx.r4.u64 = ctx.r4.u64 | 30;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822038c8
	ctx.lr = 0x821EB864;
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
	ctx.lr = 0x821EB88C;
	sub_820A38E8(ctx, base);
loc_821EB88C:
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

__attribute__((alias("__imp__sub_821EB8A0"))) PPC_WEAK_FUNC(sub_821EB8A0);
PPC_FUNC_IMPL(__imp__sub_821EB8A0) {
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
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// blt cr6,0x821eb8d4
	if (ctx.cr6.lt) goto loc_821EB8D4;
	// beq cr6,0x821eb968
	if (ctx.cr6.eq) goto loc_821EB968;
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
loc_821EB8D4:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8210b050
	ctx.lr = 0x821EB8DC;
	sub_8210B050(ctx, base);
	// lis r31,-32126
	ctx.r31.s64 = -2105409536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,23988(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23988);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x8210b068
	ctx.lr = 0x821EB908;
	sub_8210B068(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x821eb92c
	if (ctx.cr6.eq) goto loc_821EB92C;
loc_821EB914:
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
loc_821EB92C:
	// lwz r11,23988(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23988);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// bl 0x8210b068
	ctx.lr = 0x821EB948;
	sub_8210B068(ctx, base);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821eb968
	if (ctx.cr6.eq) goto loc_821EB968;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r11,r11,23504
	ctx.r11.s64 = ctx.r11.s64 + 23504;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821eb914
	if (ctx.cr6.eq) goto loc_821EB914;
loc_821EB968:
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
}

__attribute__((alias("__imp__sub_821EB980"))) PPC_WEAK_FUNC(sub_821EB980);
PPC_FUNC_IMPL(__imp__sub_821EB980) {
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
	// cmplwi cr6,r31,20
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 20, ctx.xer);
	// bgt cr6,0x821ebab4
	if (ctx.cr6.gt) goto loc_821EBAB4;
	// lis r12,-32225
	ctx.r12.s64 = -2111897600;
	// addi r12,r12,-17996
	ctx.r12.s64 = ctx.r12.s64 + -17996;
	// rlwinm r0,r31,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r31.u64) {
	case 0:
		goto loc_821EBAB4;
	case 1:
		goto loc_821EBAB4;
	case 2:
		goto loc_821EBA08;
	case 3:
		goto loc_821EBA08;
	case 4:
		goto loc_821EBA08;
	case 5:
		goto loc_821EBA08;
	case 6:
		goto loc_821EBA08;
	case 7:
		goto loc_821EBA08;
	case 8:
		goto loc_821EBA08;
	case 9:
		goto loc_821EBA08;
	case 10:
		goto loc_821EBA4C;
	case 11:
		goto loc_821EBA4C;
	case 12:
		goto loc_821EBA4C;
	case 13:
		goto loc_821EBA4C;
	case 14:
		goto loc_821EBA4C;
	case 15:
		goto loc_821EBA4C;
	case 16:
		goto loc_821EBA4C;
	case 17:
		goto loc_821EBA4C;
	case 18:
		goto loc_821EBA4C;
	case 19:
		goto loc_821EBA4C;
	case 20:
		goto loc_821EBA7C;
	default:
		__builtin_unreachable();
	}
	// lwz r16,-17740(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -17740);
	// lwz r16,-17740(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -17740);
	// lwz r16,-17912(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -17912);
	// lwz r16,-17912(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -17912);
	// lwz r16,-17912(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -17912);
	// lwz r16,-17912(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -17912);
	// lwz r16,-17912(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -17912);
	// lwz r16,-17912(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -17912);
	// lwz r16,-17912(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -17912);
	// lwz r16,-17912(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -17912);
	// lwz r16,-17844(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -17844);
	// lwz r16,-17844(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -17844);
	// lwz r16,-17844(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -17844);
	// lwz r16,-17844(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -17844);
	// lwz r16,-17844(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -17844);
	// lwz r16,-17844(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -17844);
	// lwz r16,-17844(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -17844);
	// lwz r16,-17844(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -17844);
	// lwz r16,-17844(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -17844);
	// lwz r16,-17844(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -17844);
	// lwz r16,-17796(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -17796);
loc_821EBA08:
	// addi r10,r31,-2
	ctx.r10.s64 = ctx.r31.s64 + -2;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,15416
	ctx.r11.s64 = ctx.r11.s64 + 15416;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r3,r10,-1416
	ctx.r3.s64 = ctx.r10.s64 + -1416;
	// lwzx r4,r9,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// bl 0x820fd6e8
	ctx.lr = 0x821EBA28;
	sub_820FD6E8(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// clrlwi r3,r6,24
	ctx.r3.u64 = ctx.r6.u32 & 0xFF;
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
loc_821EBA4C:
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-1416
	ctx.r3.s64 = ctx.r11.s64 + -1416;
	// bl 0x820fbe68
	ctx.lr = 0x821EBA58;
	sub_820FBE68(ctx, base);
	// addi r5,r31,-8
	ctx.r5.s64 = ctx.r31.s64 + -8;
	// cmpw cr6,r5,r3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r3.s32, ctx.xer);
	// ble cr6,0x821ebab4
	if (!ctx.cr6.gt) goto loc_821EBAB4;
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
loc_821EBA7C:
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r31,r11,-1416
	ctx.r31.s64 = ctx.r11.s64 + -1416;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820fef60
	ctx.lr = 0x821EBA8C;
	sub_820FEF60(ctx, base);
	// cmpwi cr6,r3,100
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 100, ctx.xer);
	// bge cr6,0x821ebab4
	if (!ctx.cr6.lt) goto loc_821EBAB4;
	// lbz r4,1243(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1243);
	// cntlzw r3,r4
	ctx.r3.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// rlwinm r3,r3,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
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
loc_821EBAB4:
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

__attribute__((alias("__imp__sub_821EBACC"))) PPC_WEAK_FUNC(sub_821EBACC);
PPC_FUNC_IMPL(__imp__sub_821EBACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EBAD0"))) PPC_WEAK_FUNC(sub_821EBAD0);
PPC_FUNC_IMPL(__imp__sub_821EBAD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r11,r11,13096
	ctx.r11.s64 = ctx.r11.s64 + 13096;
	// lwz r11,6936(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6936);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ebaf4
	if (ctx.cr6.eq) goto loc_821EBAF4;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r11,r11,-1416
	ctx.r11.s64 = ctx.r11.s64 + -1416;
	// lbz r3,1243(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1243);
	// blr 
	return;
loc_821EBAF4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EBAFC"))) PPC_WEAK_FUNC(sub_821EBAFC);
PPC_FUNC_IMPL(__imp__sub_821EBAFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EBB00"))) PPC_WEAK_FUNC(sub_821EBB00);
PPC_FUNC_IMPL(__imp__sub_821EBB00) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32160
	ctx.r10.s64 = -2107637760;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-18560
	ctx.r10.s64 = ctx.r10.s64 + -18560;
	// li r9,0
	ctx.r9.s64 = 0;
	// addis r10,r10,9
	ctx.r10.s64 = ctx.r10.s64 + 589824;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r8,r10,-17140
	ctx.r8.s64 = ctx.r10.s64 + -17140;
	// stb r9,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r9.u8);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EBB28"))) PPC_WEAK_FUNC(sub_821EBB28);
PPC_FUNC_IMPL(__imp__sub_821EBB28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// lbz r11,54(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 54);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x821ebb44
	if (!ctx.cr6.eq) goto loc_821EBB44;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821EBB44:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EBB4C"))) PPC_WEAK_FUNC(sub_821EBB4C);
PPC_FUNC_IMPL(__imp__sub_821EBB4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EBB50"))) PPC_WEAK_FUNC(sub_821EBB50);
PPC_FUNC_IMPL(__imp__sub_821EBB50) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r11.u8);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// stb r4,54(r11)
	PPC_STORE_U8(ctx.r11.u32 + 54, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EBB68"))) PPC_WEAK_FUNC(sub_821EBB68);
PPC_FUNC_IMPL(__imp__sub_821EBB68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// lbz r11,55(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 55);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// clrlwi r3,r9,24
	ctx.r3.u64 = ctx.r9.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EBB88"))) PPC_WEAK_FUNC(sub_821EBB88);
PPC_FUNC_IMPL(__imp__sub_821EBB88) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r11.u8);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// stb r4,55(r11)
	PPC_STORE_U8(ctx.r11.u32 + 55, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EBBA0"))) PPC_WEAK_FUNC(sub_821EBBA0);
PPC_FUNC_IMPL(__imp__sub_821EBBA0) {
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
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r10,-32124
	ctx.r10.s64 = -2105278464;
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r10,26080
	ctx.r3.s64 = ctx.r10.s64 + 26080;
	// stb r9,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r9.u8);
	// bl 0x8210aef0
	ctx.lr = 0x821EBBC8;
	sub_8210AEF0(ctx, base);
	// extsb r7,r3
	ctx.r7.s64 = ctx.r3.s8;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
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
}

__attribute__((alias("__imp__sub_821EBBEC"))) PPC_WEAK_FUNC(sub_821EBBEC);
PPC_FUNC_IMPL(__imp__sub_821EBBEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EBBF0"))) PPC_WEAK_FUNC(sub_821EBBF0);
PPC_FUNC_IMPL(__imp__sub_821EBBF0) {
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
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r10,-32124
	ctx.r10.s64 = -2105278464;
	// li r4,-5
	ctx.r4.s64 = -5;
	// addi r3,r10,26080
	ctx.r3.s64 = ctx.r10.s64 + 26080;
	// stb r9,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r9.u8);
	// bl 0x8210aef0
	ctx.lr = 0x821EBC18;
	sub_8210AEF0(ctx, base);
	// extsb r7,r3
	ctx.r7.s64 = ctx.r3.s8;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
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
}

__attribute__((alias("__imp__sub_821EBC3C"))) PPC_WEAK_FUNC(sub_821EBC3C);
PPC_FUNC_IMPL(__imp__sub_821EBC3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EBC40"))) PPC_WEAK_FUNC(sub_821EBC40);
PPC_FUNC_IMPL(__imp__sub_821EBC40) {
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
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r10,-32124
	ctx.r10.s64 = -2105278464;
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r10,26080
	ctx.r3.s64 = ctx.r10.s64 + 26080;
	// stb r9,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r9.u8);
	// bl 0x8210af90
	ctx.lr = 0x821EBC68;
	sub_8210AF90(ctx, base);
	// extsb r7,r3
	ctx.r7.s64 = ctx.r3.s8;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
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
}

__attribute__((alias("__imp__sub_821EBC8C"))) PPC_WEAK_FUNC(sub_821EBC8C);
PPC_FUNC_IMPL(__imp__sub_821EBC8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EBC90"))) PPC_WEAK_FUNC(sub_821EBC90);
PPC_FUNC_IMPL(__imp__sub_821EBC90) {
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
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r10,-32124
	ctx.r10.s64 = -2105278464;
	// li r4,-5
	ctx.r4.s64 = -5;
	// addi r3,r10,26080
	ctx.r3.s64 = ctx.r10.s64 + 26080;
	// stb r9,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r9.u8);
	// bl 0x8210af90
	ctx.lr = 0x821EBCB8;
	sub_8210AF90(ctx, base);
	// extsb r7,r3
	ctx.r7.s64 = ctx.r3.s8;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
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
}

__attribute__((alias("__imp__sub_821EBCDC"))) PPC_WEAK_FUNC(sub_821EBCDC);
PPC_FUNC_IMPL(__imp__sub_821EBCDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EBCE0"))) PPC_WEAK_FUNC(sub_821EBCE0);
PPC_FUNC_IMPL(__imp__sub_821EBCE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r11,r11,-18560
	ctx.r11.s64 = ctx.r11.s64 + -18560;
	// addis r11,r11,9
	ctx.r11.s64 = ctx.r11.s64 + 589824;
	// addi r3,r11,-19376
	ctx.r3.s64 = ctx.r11.s64 + -19376;
	// b 0x822b2d10
	sub_822B2D10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821EBCF4"))) PPC_WEAK_FUNC(sub_821EBCF4);
PPC_FUNC_IMPL(__imp__sub_821EBCF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EBCF8"))) PPC_WEAK_FUNC(sub_821EBCF8);
PPC_FUNC_IMPL(__imp__sub_821EBCF8) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r11,r11,-18560
	ctx.r11.s64 = ctx.r11.s64 + -18560;
	// addis r11,r11,9
	ctx.r11.s64 = ctx.r11.s64 + 589824;
	// addi r3,r11,-17140
	ctx.r3.s64 = ctx.r11.s64 + -17140;
	// beq cr6,0x821ebd18
	if (ctx.cr6.eq) goto loc_821EBD18;
	// b 0x822ad7e0
	sub_822AD7E0(ctx, base);
	return;
loc_821EBD18:
	// b 0x822ad7e8
	sub_822AD7E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821EBD1C"))) PPC_WEAK_FUNC(sub_821EBD1C);
PPC_FUNC_IMPL(__imp__sub_821EBD1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EBD20"))) PPC_WEAK_FUNC(sub_821EBD20);
PPC_FUNC_IMPL(__imp__sub_821EBD20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r11,r11,-18560
	ctx.r11.s64 = ctx.r11.s64 + -18560;
	// addis r11,r11,9
	ctx.r11.s64 = ctx.r11.s64 + 589824;
	// addi r3,r11,-17140
	ctx.r3.s64 = ctx.r11.s64 + -17140;
	// b 0x822ad710
	sub_822AD710(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821EBD34"))) PPC_WEAK_FUNC(sub_821EBD34);
PPC_FUNC_IMPL(__imp__sub_821EBD34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EBD38"))) PPC_WEAK_FUNC(sub_821EBD38);
PPC_FUNC_IMPL(__imp__sub_821EBD38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// lbz r11,46(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 46);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EBD4C"))) PPC_WEAK_FUNC(sub_821EBD4C);
PPC_FUNC_IMPL(__imp__sub_821EBD4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EBD50"))) PPC_WEAK_FUNC(sub_821EBD50);
PPC_FUNC_IMPL(__imp__sub_821EBD50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// addi r11,r11,41
	ctx.r11.s64 = ctx.r11.s64 + 41;
	// lbzx r10,r4,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821ebd70
	if (!ctx.cr6.eq) goto loc_821EBD70;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821EBD70:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EBD78"))) PPC_WEAK_FUNC(sub_821EBD78);
PPC_FUNC_IMPL(__imp__sub_821EBD78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// addi r8,r11,41
	ctx.r8.s64 = ctx.r11.s64 + 41;
	// stb r10,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r10.u8);
	// stbx r5,r4,r8
	PPC_STORE_U8(ctx.r4.u32 + ctx.r8.u32, ctx.r5.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EBD94"))) PPC_WEAK_FUNC(sub_821EBD94);
PPC_FUNC_IMPL(__imp__sub_821EBD94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EBD98"))) PPC_WEAK_FUNC(sub_821EBD98);
PPC_FUNC_IMPL(__imp__sub_821EBD98) {
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
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ebddc
	if (ctx.cr6.eq) goto loc_821EBDDC;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822bf618
	ctx.lr = 0x821EBDC0;
	sub_822BF618(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822ad8c8
	ctx.lr = 0x821EBDC8;
	sub_822AD8C8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821ebddc
	if (!ctx.cr6.eq) goto loc_821EBDDC;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822bf560
	ctx.lr = 0x821EBDDC;
	sub_822BF560(ctx, base);
loc_821EBDDC:
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

__attribute__((alias("__imp__sub_821EBDF0"))) PPC_WEAK_FUNC(sub_821EBDF0);
PPC_FUNC_IMPL(__imp__sub_821EBDF0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,732(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 732);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EBDFC"))) PPC_WEAK_FUNC(sub_821EBDFC);
PPC_FUNC_IMPL(__imp__sub_821EBDFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EBE00"))) PPC_WEAK_FUNC(sub_821EBE00);
PPC_FUNC_IMPL(__imp__sub_821EBE00) {
	PPC_FUNC_PROLOGUE();
	// li r10,1
	ctx.r10.s64 = 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// stb r10,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r10.u8);
	// bne cr6,0x821ebe18
	if (!ctx.cr6.eq) goto loc_821EBE18;
	// li r11,1
	ctx.r11.s64 = 1;
loc_821EBE18:
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// b 0x822ad828
	sub_822AD828(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821EBE24"))) PPC_WEAK_FUNC(sub_821EBE24);
PPC_FUNC_IMPL(__imp__sub_821EBE24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EBE28"))) PPC_WEAK_FUNC(sub_821EBE28);
PPC_FUNC_IMPL(__imp__sub_821EBE28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baec
	ctx.lr = 0x821EBE30;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r25,1
	ctx.r25.s64 = 1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// stb r25,16(r30)
	PPC_STORE_U8(ctx.r30.u32 + 16, ctx.r25.u8);
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x822ad7f8
	ctx.lr = 0x821EBE5C;
	sub_822AD7F8(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x821ebe70
	if (ctx.cr6.lt) goto loc_821EBE70;
	// bne cr6,0x821ebe74
	if (!ctx.cr6.eq) goto loc_821EBE74;
	// stw r25,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r25.u32);
	// b 0x821ebe74
	goto loc_821EBE74;
loc_821EBE70:
	// stw r26,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r26.u32);
loc_821EBE74:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// lwz r10,732(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 732);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x821ebeac
	if (!ctx.cr6.lt) goto loc_821EBEAC;
	// rlwinm r10,r31,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// add r8,r31,r10
	ctx.r8.u64 = ctx.r31.u64 + ctx.r10.u64;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r7,r11,236
	ctx.r7.s64 = ctx.r11.s64 + 236;
	// lwz r28,0(r7)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r27,4(r7)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r26,8(r7)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
loc_821EBEAC:
	// clrlwi r6,r9,24
	ctx.r6.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x821ebecc
	if (ctx.cr6.eq) goto loc_821EBECC;
	// stw r26,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r26.u32);
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// stw r27,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r27.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
loc_821EBECC:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r11,r11,15736
	ctx.r11.s64 = ctx.r11.s64 + 15736;
	// addi r10,r10,15716
	ctx.r10.s64 = ctx.r10.s64 + 15716;
	// addi r9,r9,15700
	ctx.r9.s64 = ctx.r9.s64 + 15700;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821EBEF8"))) PPC_WEAK_FUNC(sub_821EBEF8);
PPC_FUNC_IMPL(__imp__sub_821EBEF8) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x822ad8a8
	ctx.lr = 0x821EBF14;
	sub_822AD8A8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x821ebf24
	if (ctx.cr6.eq) goto loc_821EBF24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821EBF24:
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

__attribute__((alias("__imp__sub_821EBF38"))) PPC_WEAK_FUNC(sub_821EBF38);
PPC_FUNC_IMPL(__imp__sub_821EBF38) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// stb r11,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r11.u8);
	// beq cr6,0x821ebf50
	if (ctx.cr6.eq) goto loc_821EBF50;
	// li r4,0
	ctx.r4.s64 = 0;
loc_821EBF50:
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x822cb620
	sub_822CB620(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821EBF58"))) PPC_WEAK_FUNC(sub_821EBF58);
PPC_FUNC_IMPL(__imp__sub_821EBF58) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lbz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r9,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EBF74"))) PPC_WEAK_FUNC(sub_821EBF74);
PPC_FUNC_IMPL(__imp__sub_821EBF74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EBF78"))) PPC_WEAK_FUNC(sub_821EBF78);
PPC_FUNC_IMPL(__imp__sub_821EBF78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r11,r11,-18560
	ctx.r11.s64 = ctx.r11.s64 + -18560;
	// addis r11,r11,9
	ctx.r11.s64 = ctx.r11.s64 + 589824;
	// addi r3,r11,-17140
	ctx.r3.s64 = ctx.r11.s64 + -17140;
	// b 0x822ad8e8
	sub_822AD8E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821EBF8C"))) PPC_WEAK_FUNC(sub_821EBF8C);
PPC_FUNC_IMPL(__imp__sub_821EBF8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EBF90"))) PPC_WEAK_FUNC(sub_821EBF90);
PPC_FUNC_IMPL(__imp__sub_821EBF90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-6648
	ctx.r3.s64 = ctx.r11.s64 + -6648;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EBF9C"))) PPC_WEAK_FUNC(sub_821EBF9C);
PPC_FUNC_IMPL(__imp__sub_821EBF9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EBFA0"))) PPC_WEAK_FUNC(sub_821EBFA0);
PPC_FUNC_IMPL(__imp__sub_821EBFA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-1416
	ctx.r3.s64 = ctx.r11.s64 + -1416;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EBFAC"))) PPC_WEAK_FUNC(sub_821EBFAC);
PPC_FUNC_IMPL(__imp__sub_821EBFAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EBFB0"))) PPC_WEAK_FUNC(sub_821EBFB0);
PPC_FUNC_IMPL(__imp__sub_821EBFB0) {
	PPC_FUNC_PROLOGUE();
	// extsb r11,r4
	ctx.r11.s64 = ctx.r4.s8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// lis r12,-32225
	ctx.r12.s64 = -2111897600;
	// addi r12,r12,-16424
	ctx.r12.s64 = ctx.r12.s64 + -16424;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		// ERROR: 0x821EBFF0
		return;
	case 1:
		// ERROR: 0x821EC01C
		return;
	case 2:
		// ERROR: 0x821EC02C
		return;
	case 3:
		// ERROR: 0x821EC03C
		return;
	case 4:
		// ERROR: 0x821EC04C
		return;
	case 5:
		// ERROR: 0x821EC05C
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_821EBFD8"))) PPC_WEAK_FUNC(sub_821EBFD8);
PPC_FUNC_IMPL(__imp__sub_821EBFD8) {
	PPC_FUNC_PROLOGUE();
	// lwz r16,-16400(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16400);
	// lwz r16,-16356(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16356);
	// lwz r16,-16340(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16340);
	// lwz r16,-16324(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16324);
	// lwz r16,-16308(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16308);
	// lwz r16,-16292(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16292);
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
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r11,r11,-24936
	ctx.r11.s64 = ctx.r11.s64 + -24936;
	// addi r3,r11,5032
	ctx.r3.s64 = ctx.r11.s64 + 5032;
	// b 0x82204b38
	sub_82204B38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821EC01C"))) PPC_WEAK_FUNC(sub_821EC01C);
PPC_FUNC_IMPL(__imp__sub_821EC01C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r11,r11,-24936
	ctx.r11.s64 = ctx.r11.s64 + -24936;
	// addi r3,r11,5032
	ctx.r3.s64 = ctx.r11.s64 + 5032;
	// b 0x8220d1b0
	sub_8220D1B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821EC02C"))) PPC_WEAK_FUNC(sub_821EC02C);
PPC_FUNC_IMPL(__imp__sub_821EC02C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r11,r11,-24936
	ctx.r11.s64 = ctx.r11.s64 + -24936;
	// addi r3,r11,5032
	ctx.r3.s64 = ctx.r11.s64 + 5032;
	// b 0x82212740
	sub_82212740(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821EC03C"))) PPC_WEAK_FUNC(sub_821EC03C);
PPC_FUNC_IMPL(__imp__sub_821EC03C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r11,r11,-24936
	ctx.r11.s64 = ctx.r11.s64 + -24936;
	// addi r3,r11,5032
	ctx.r3.s64 = ctx.r11.s64 + 5032;
	// b 0x822128a8
	sub_822128A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821EC04C"))) PPC_WEAK_FUNC(sub_821EC04C);
PPC_FUNC_IMPL(__imp__sub_821EC04C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r11,r11,-24936
	ctx.r11.s64 = ctx.r11.s64 + -24936;
	// addi r3,r11,5032
	ctx.r3.s64 = ctx.r11.s64 + 5032;
	// b 0x8220d1b0
	sub_8220D1B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821EC05C"))) PPC_WEAK_FUNC(sub_821EC05C);
PPC_FUNC_IMPL(__imp__sub_821EC05C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r11,r11,-24936
	ctx.r11.s64 = ctx.r11.s64 + -24936;
	// addi r3,r11,5032
	ctx.r3.s64 = ctx.r11.s64 + 5032;
	// b 0x8220d318
	sub_8220D318(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821EC06C"))) PPC_WEAK_FUNC(sub_821EC06C);
PPC_FUNC_IMPL(__imp__sub_821EC06C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EC070"))) PPC_WEAK_FUNC(sub_821EC070);
PPC_FUNC_IMPL(__imp__sub_821EC070) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x821EC078;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r11,r11,-24936
	ctx.r11.s64 = ctx.r11.s64 + -24936;
	// addi r3,r11,5032
	ctx.r3.s64 = ctx.r11.s64 + 5032;
	// bl 0x82204ec0
	ctx.lr = 0x821EC090;
	sub_82204EC0(ctx, base);
	// lbz r11,384(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 384);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// addi r28,r31,68
	ctx.r28.s64 = ctx.r31.s64 + 68;
	// addi r27,r31,4
	ctx.r27.s64 = ctx.r31.s64 + 4;
	// stb r11,132(r31)
	PPC_STORE_U8(ctx.r31.u32 + 132, ctx.r11.u8);
	// stb r10,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r10.u8);
	// stb r10,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r10.u8);
	// lwz r11,360(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 360);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821ec104
	if (!ctx.cr6.eq) goto loc_821EC104;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r30,r11,23504
	ctx.r30.s64 = ctx.r11.s64 + 23504;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r29,r11,28692
	ctx.r29.s64 = ctx.r11.s64 + 28692;
	// lwz r4,-1208(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -1208);
	// bl 0x8210fcf8
	ctx.lr = 0x821EC0D8;
	sub_8210FCF8(ctx, base);
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82361bd8
	ctx.lr = 0x821EC0E4;
	sub_82361BD8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8210fcf8
	ctx.lr = 0x821EC0F0;
	sub_8210FCF8(ctx, base);
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82361bd8
	ctx.lr = 0x821EC0FC;
	sub_82361BD8(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,133(r31)
	PPC_STORE_U8(ctx.r31.u32 + 133, ctx.r10.u8);
loc_821EC104:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821EC10C"))) PPC_WEAK_FUNC(sub_821EC10C);
PPC_FUNC_IMPL(__imp__sub_821EC10C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EC110"))) PPC_WEAK_FUNC(sub_821EC110);
PPC_FUNC_IMPL(__imp__sub_821EC110) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x821EC118;
	__savegprlr_29(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r11,-24936
	ctx.r11.s64 = ctx.r11.s64 + -24936;
	// addi r3,r11,5032
	ctx.r3.s64 = ctx.r11.s64 + 5032;
	// bl 0x82204ec0
	ctx.lr = 0x821EC130;
	sub_82204EC0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r31,r11,23504
	ctx.r31.s64 = ctx.r11.s64 + 23504;
	// lbz r11,385(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 385);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,256(r30)
	PPC_STORE_U32(ctx.r30.u32 + 256, ctx.r11.u32);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lwz r4,27224(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27224);
	// bl 0x8210fcf8
	ctx.lr = 0x821EC154;
	sub_8210FCF8(ctx, base);
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82361bd8
	ctx.lr = 0x821EC160;
	sub_82361BD8(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lwz r11,364(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 364);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r10,15632
	ctx.r4.s64 = ctx.r10.s64 + 15632;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r3,r30,64
	ctx.r3.s64 = ctx.r30.s64 + 64;
	// extsb r6,r10
	ctx.r6.s64 = ctx.r10.s8;
	// bl 0x8259d1b0
	ctx.lr = 0x821EC180;
	sub_8259D1B0(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f0,376(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 376);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,15048
	ctx.r11.s64 = ctx.r11.s64 + 15048;
	// lfs f13,-12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x821ec1a4
	if (!ctx.cr6.lt) goto loc_821EC1A4;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lwz r4,27228(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27228);
	// b 0x821ec1f4
	goto loc_821EC1F4;
loc_821EC1A4:
	// lfs f13,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x821ec1bc
	if (!ctx.cr6.lt) goto loc_821EC1BC;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lwz r4,27232(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27232);
	// b 0x821ec1f4
	goto loc_821EC1F4;
loc_821EC1BC:
	// lfs f13,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x821ec1d4
	if (!ctx.cr6.lt) goto loc_821EC1D4;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lwz r4,27236(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27236);
	// b 0x821ec1f4
	goto loc_821EC1F4;
loc_821EC1D4:
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x821ec1ec
	if (!ctx.cr6.lt) goto loc_821EC1EC;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lwz r4,27240(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27240);
	// b 0x821ec1f4
	goto loc_821EC1F4;
loc_821EC1EC:
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lwz r4,27244(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27244);
loc_821EC1F4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8210fcf8
	ctx.lr = 0x821EC1FC;
	sub_8210FCF8(ctx, base);
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82361bd8
	ctx.lr = 0x821EC208;
	sub_82361BD8(ctx, base);
	// addi r10,r30,128
	ctx.r10.s64 = ctx.r30.s64 + 128;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// subf r9,r8,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r8.s64;
loc_821EC218:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stbx r10,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x821ec218
	if (!ctx.cr6.eq) goto loc_821EC218;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lwz r11,23500(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23500);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821ec248
	if (ctx.cr6.eq) goto loc_821EC248;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x821ec24c
	if (!ctx.cr6.eq) goto loc_821EC24C;
loc_821EC248:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821EC24C:
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// addi r11,r11,13400
	ctx.r11.s64 = ctx.r11.s64 + 13400;
	// beq cr6,0x821ec268
	if (ctx.cr6.eq) goto loc_821EC268;
	// lwz r3,48(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// b 0x821ec26c
	goto loc_821EC26C;
loc_821EC268:
	// lwz r3,52(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
loc_821EC26C:
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82361bd8
	ctx.lr = 0x821EC278;
	sub_82361BD8(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f0,380(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 380);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,15624
	ctx.r4.s64 = ctx.r11.s64 + 15624;
	// addi r3,r30,192
	ctx.r3.s64 = ctx.r30.s64 + 192;
	// stfiwx f13,0,r5
	PPC_STORE_U32(ctx.r5.u32, ctx.f13.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8259d1b0
	ctx.lr = 0x821EC2A0;
	sub_8259D1B0(ctx, base);
	// lwz r3,256(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 256);
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// bl 0x82361bd8
	ctx.lr = 0x821EC2B8;
	sub_82361BD8(ctx, base);
	// lbz r10,387(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 387);
	// stb r10,260(r30)
	PPC_STORE_U8(ctx.r30.u32 + 260, ctx.r10.u8);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821EC2C8"))) PPC_WEAK_FUNC(sub_821EC2C8);
PPC_FUNC_IMPL(__imp__sub_821EC2C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r10,3
	ctx.r10.s64 = 196608;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// ori r9,r10,51969
	ctx.r9.u64 = ctx.r10.u64 | 51969;
	// lbzx r3,r11,r9
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EC2E0"))) PPC_WEAK_FUNC(sub_821EC2E0);
PPC_FUNC_IMPL(__imp__sub_821EC2E0) {
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
	// addi r11,r11,-24936
	ctx.r11.s64 = ctx.r11.s64 + -24936;
	// lfs f1,5612(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5612);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8259da38
	ctx.lr = 0x821EC2FC;
	sub_8259DA38(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfiwx f13,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f13.u32);
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

__attribute__((alias("__imp__sub_821EC320"))) PPC_WEAK_FUNC(sub_821EC320);
PPC_FUNC_IMPL(__imp__sub_821EC320) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r11,r11,-24936
	ctx.r11.s64 = ctx.r11.s64 + -24936;
	// lwz r11,5620(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5620);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x821ec33c
	if (ctx.cr6.eq) goto loc_821EC33C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821EC33C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EC344"))) PPC_WEAK_FUNC(sub_821EC344);
PPC_FUNC_IMPL(__imp__sub_821EC344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EC348"))) PPC_WEAK_FUNC(sub_821EC348);
PPC_FUNC_IMPL(__imp__sub_821EC348) {
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
	// extsb r4,r4
	ctx.r4.s64 = ctx.r4.s8;
	// addi r31,r11,26080
	ctx.r31.s64 = ctx.r11.s64 + 26080;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x82104600
	ctx.lr = 0x821EC36C;
	sub_82104600(ctx, base);
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x821ec3a0
	if (ctx.cr6.eq) goto loc_821EC3A0;
	// addi r10,r31,2589
	ctx.r10.s64 = ctx.r31.s64 + 2589;
	// lbzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821ec390
	if (!ctx.cr6.eq) goto loc_821EC390;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821EC390:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x821ec3a0
	if (ctx.cr6.lt) goto loc_821EC3A0;
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x821ec3a4
	if (ctx.cr6.eq) goto loc_821EC3A4;
loc_821EC3A0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821EC3A4:
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

__attribute__((alias("__imp__sub_821EC3B8"))) PPC_WEAK_FUNC(sub_821EC3B8);
PPC_FUNC_IMPL(__imp__sub_821EC3B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x821EC3C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// li r30,1
	ctx.r30.s64 = 1;
	// bne cr6,0x821ec3dc
	if (!ctx.cr6.eq) goto loc_821EC3DC;
	// li r30,0
	ctx.r30.s64 = 0;
loc_821EC3DC:
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// extsb r4,r29
	ctx.r4.s64 = ctx.r29.s8;
	// addi r31,r11,26080
	ctx.r31.s64 = ctx.r11.s64 + 26080;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x82104600
	ctx.lr = 0x821EC3F0;
	sub_82104600(ctx, base);
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x821ec400
	if (ctx.cr6.eq) goto loc_821EC400;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821EC400:
	// extsb r10,r3
	ctx.r10.s64 = ctx.r3.s8;
	// addi r9,r31,2589
	ctx.r9.s64 = ctx.r31.s64 + 2589;
	// addi r7,r31,41
	ctx.r7.s64 = ctx.r31.s64 + 41;
	// stbx r11,r10,r9
	PPC_STORE_U8(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u8);
	// stbx r28,r29,r7
	PPC_STORE_U8(ctx.r29.u32 + ctx.r7.u32, ctx.r28.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821EC41C"))) PPC_WEAK_FUNC(sub_821EC41C);
PPC_FUNC_IMPL(__imp__sub_821EC41C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EC420"))) PPC_WEAK_FUNC(sub_821EC420);
PPC_FUNC_IMPL(__imp__sub_821EC420) {
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
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r11,26080
	ctx.r3.s64 = ctx.r11.s64 + 26080;
	// bl 0x8210aef0
	ctx.lr = 0x821EC43C;
	sub_8210AEF0(ctx, base);
	// extsb r10,r3
	ctx.r10.s64 = ctx.r3.s8;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
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
}

__attribute__((alias("__imp__sub_821EC460"))) PPC_WEAK_FUNC(sub_821EC460);
PPC_FUNC_IMPL(__imp__sub_821EC460) {
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
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// li r4,-5
	ctx.r4.s64 = -5;
	// addi r3,r11,26080
	ctx.r3.s64 = ctx.r11.s64 + 26080;
	// bl 0x8210aef0
	ctx.lr = 0x821EC47C;
	sub_8210AEF0(ctx, base);
	// extsb r10,r3
	ctx.r10.s64 = ctx.r3.s8;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
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
}

__attribute__((alias("__imp__sub_821EC4A0"))) PPC_WEAK_FUNC(sub_821EC4A0);
PPC_FUNC_IMPL(__imp__sub_821EC4A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// lbz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 48);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
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

__attribute__((alias("__imp__sub_821EC4C4"))) PPC_WEAK_FUNC(sub_821EC4C4);
PPC_FUNC_IMPL(__imp__sub_821EC4C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EC4C8"))) PPC_WEAK_FUNC(sub_821EC4C8);
PPC_FUNC_IMPL(__imp__sub_821EC4C8) {
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
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r11,26080
	ctx.r3.s64 = ctx.r11.s64 + 26080;
	// bl 0x8210af90
	ctx.lr = 0x821EC4E4;
	sub_8210AF90(ctx, base);
	// extsb r10,r3
	ctx.r10.s64 = ctx.r3.s8;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
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
}

__attribute__((alias("__imp__sub_821EC508"))) PPC_WEAK_FUNC(sub_821EC508);
PPC_FUNC_IMPL(__imp__sub_821EC508) {
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
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// li r4,-5
	ctx.r4.s64 = -5;
	// addi r3,r11,26080
	ctx.r3.s64 = ctx.r11.s64 + 26080;
	// bl 0x8210af90
	ctx.lr = 0x821EC524;
	sub_8210AF90(ctx, base);
	// extsb r10,r3
	ctx.r10.s64 = ctx.r3.s8;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
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
}

__attribute__((alias("__imp__sub_821EC548"))) PPC_WEAK_FUNC(sub_821EC548);
PPC_FUNC_IMPL(__imp__sub_821EC548) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r11,r11,-18560
	ctx.r11.s64 = ctx.r11.s64 + -18560;
	// addis r11,r11,9
	ctx.r11.s64 = ctx.r11.s64 + 589824;
	// addi r3,r11,-19376
	ctx.r3.s64 = ctx.r11.s64 + -19376;
	// b 0x822b2ec8
	sub_822B2EC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821EC55C"))) PPC_WEAK_FUNC(sub_821EC55C);
PPC_FUNC_IMPL(__imp__sub_821EC55C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EC560"))) PPC_WEAK_FUNC(sub_821EC560);
PPC_FUNC_IMPL(__imp__sub_821EC560) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r3,r11,26080
	ctx.r3.s64 = ctx.r11.s64 + 26080;
	// b 0x821041a8
	sub_821041A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821EC56C"))) PPC_WEAK_FUNC(sub_821EC56C);
PPC_FUNC_IMPL(__imp__sub_821EC56C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EC570"))) PPC_WEAK_FUNC(sub_821EC570);
PPC_FUNC_IMPL(__imp__sub_821EC570) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,204(r3)
	PPC_STORE_U8(ctx.r3.u32 + 204, ctx.r11.u8);
	// stb r11,205(r3)
	PPC_STORE_U8(ctx.r3.u32 + 205, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EC580"))) PPC_WEAK_FUNC(sub_821EC580);
PPC_FUNC_IMPL(__imp__sub_821EC580) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x82203858
	sub_82203858(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821EC594"))) PPC_WEAK_FUNC(sub_821EC594);
PPC_FUNC_IMPL(__imp__sub_821EC594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EC598"))) PPC_WEAK_FUNC(sub_821EC598);
PPC_FUNC_IMPL(__imp__sub_821EC598) {
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
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,340(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 340);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x821EC5CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 11, ctx.xer);
	// bgt cr6,0x821ec6a8
	if (ctx.cr6.gt) goto loc_821EC6A8;
	// lis r12,-32225
	ctx.r12.s64 = -2111897600;
	// addi r12,r12,-14868
	ctx.r12.s64 = ctx.r12.s64 + -14868;
	// rlwinm r0,r3,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r3.u64) {
	case 0:
		goto loc_821EC6A8;
	case 1:
		goto loc_821EC680;
	case 2:
		goto loc_821EC694;
	case 3:
		goto loc_821EC644;
	case 4:
		goto loc_821EC6A8;
	case 5:
		goto loc_821EC66C;
	case 6:
		goto loc_821EC658;
	case 7:
		goto loc_821EC61C;
	case 8:
		goto loc_821EC630;
	case 9:
		goto loc_821EC6A8;
	case 10:
		goto loc_821EC6A8;
	case 11:
		goto loc_821EC644;
	default:
		__builtin_unreachable();
	}
	// lwz r16,-14680(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -14680);
	// lwz r16,-14720(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -14720);
	// lwz r16,-14700(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -14700);
	// lwz r16,-14780(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -14780);
	// lwz r16,-14680(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -14680);
	// lwz r16,-14740(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -14740);
	// lwz r16,-14760(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -14760);
	// lwz r16,-14820(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -14820);
	// lwz r16,-14800(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -14800);
	// lwz r16,-14680(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -14680);
	// lwz r16,-14680(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -14680);
	// lwz r16,-14780(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -14780);
loc_821EC61C:
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
loc_821EC630:
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
loc_821EC644:
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
loc_821EC658:
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
loc_821EC66C:
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
loc_821EC680:
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
loc_821EC694:
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
loc_821EC6A8:
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

__attribute__((alias("__imp__sub_821EC6BC"))) PPC_WEAK_FUNC(sub_821EC6BC);
PPC_FUNC_IMPL(__imp__sub_821EC6BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EC6C0"))) PPC_WEAK_FUNC(sub_821EC6C0);
PPC_FUNC_IMPL(__imp__sub_821EC6C0) {
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
	// mulli r10,r8,328
	ctx.r10.s64 = ctx.r8.s64 * 328;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,10580
	ctx.r3.s64 = ctx.r11.s64 + 10580;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EC6EC"))) PPC_WEAK_FUNC(sub_821EC6EC);
PPC_FUNC_IMPL(__imp__sub_821EC6EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EC6F0"))) PPC_WEAK_FUNC(sub_821EC6F0);
PPC_FUNC_IMPL(__imp__sub_821EC6F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x821EC6F8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r30,r11,-1416
	ctx.r30.s64 = ctx.r11.s64 + -1416;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,13096
	ctx.r11.s64 = ctx.r11.s64 + 13096;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r29,6936(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6936);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// subf r28,r11,r10
	ctx.r28.s64 = ctx.r10.s64 - ctx.r11.s64;
	// bl 0x820fbe60
	ctx.lr = 0x821EC72C;
	sub_820FBE60(ctx, base);
	// subf r11,r28,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r28.s64;
	// stw r3,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r3.u32);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// lwz r10,6932(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6932);
	// stb r10,138(r31)
	PPC_STORE_U8(ctx.r31.u32 + 138, ctx.r10.u8);
	// lwz r11,6928(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6928);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x821ec78c
	if (ctx.cr6.gt) goto loc_821EC78C;
	// lis r12,-32225
	ctx.r12.s64 = -2111897600;
	// addi r12,r12,-14492
	ctx.r12.s64 = ctx.r12.s64 + -14492;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_821EC78C;
	case 1:
		goto loc_821EC784;
	case 2:
		goto loc_821EC77C;
	case 3:
		goto loc_821EC774;
	default:
		__builtin_unreachable();
	}
	// lwz r16,-14452(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -14452);
	// lwz r16,-14460(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -14460);
	// lwz r16,-14468(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -14468);
	// lwz r16,-14476(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -14476);
loc_821EC774:
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x821ec790
	goto loc_821EC790;
loc_821EC77C:
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x821ec790
	goto loc_821EC790;
loc_821EC784:
	// li r10,2
	ctx.r10.s64 = 2;
	// b 0x821ec790
	goto loc_821EC790;
loc_821EC78C:
	// li r10,3
	ctx.r10.s64 = 3;
loc_821EC790:
	// stb r10,136(r31)
	PPC_STORE_U8(ctx.r31.u32 + 136, ctx.r10.u8);
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// lbz r8,138(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 138);
	// addi r10,r10,11600
	ctx.r10.s64 = ctx.r10.s64 + 11600;
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// lwz r4,552(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 552);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821ec7c4
	if (ctx.cr6.eq) goto loc_821EC7C4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820fceb0
	ctx.lr = 0x821EC7B8;
	sub_820FCEB0(ctx, base);
	// addi r7,r30,723
	ctx.r7.s64 = ctx.r30.s64 + 723;
	// lbzx r6,r3,r7
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r7.u32);
	// extsb r11,r6
	ctx.r11.s64 = ctx.r6.s8;
loc_821EC7C4:
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// lbz r5,138(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 138);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r6,64
	ctx.r6.s64 = 64;
	// addi r4,r11,15900
	ctx.r4.s64 = ctx.r11.s64 + 15900;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// stb r3,137(r31)
	PPC_STORE_U8(ctx.r31.u32 + 137, ctx.r3.u8);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r30,r11,14528
	ctx.r30.s64 = ctx.r11.s64 + 14528;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r9,138(r31)
	PPC_STORE_U8(ctx.r31.u32 + 138, ctx.r9.u8);
	// bl 0x821f66c0
	ctx.lr = 0x821EC7FC;
	sub_821F66C0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821ec598
	ctx.lr = 0x821EC804;
	sub_821EC598(ctx, base);
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x821ec904
	if (ctx.cr6.gt) goto loc_821EC904;
	// lis r12,-32225
	ctx.r12.s64 = -2111897600;
	// addi r12,r12,-14296
	ctx.r12.s64 = ctx.r12.s64 + -14296;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_821EC848;
	case 1:
		goto loc_821EC8B0;
	case 2:
		goto loc_821EC854;
	case 3:
		goto loc_821EC8BC;
	case 4:
		goto loc_821EC8C8;
	case 5:
		goto loc_821EC8D4;
	case 6:
		goto loc_821EC8EC;
	case 7:
		goto loc_821EC8E0;
	default:
		__builtin_unreachable();
	}
	// lwz r16,-14264(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -14264);
	// lwz r16,-14160(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -14160);
	// lwz r16,-14252(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -14252);
	// lwz r16,-14148(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -14148);
	// lwz r16,-14136(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -14136);
	// lwz r16,-14124(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -14124);
	// lwz r16,-14100(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -14100);
	// lwz r16,-14112(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -14112);
loc_821EC848:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,15892
	ctx.r4.s64 = ctx.r11.s64 + 15892;
	// b 0x821ec8f4
	goto loc_821EC8F4;
loc_821EC854:
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r7,7
	ctx.r7.s64 = 458752;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// ori r6,r7,16216
	ctx.r6.u64 = ctx.r7.u64 | 16216;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r10,r11,r6
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// addis r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 262144;
	// li r6,64
	ctx.r6.s64 = 64;
	// addi r4,r11,-11776
	ctx.r4.s64 = ctx.r11.s64 + -11776;
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r5,r4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, ctx.xer);
	// addi r5,r31,64
	ctx.r5.s64 = ctx.r31.s64 + 64;
	// bne cr6,0x821ec89c
	if (!ctx.cr6.eq) goto loc_821EC89C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,15872
	ctx.r4.s64 = ctx.r11.s64 + 15872;
	// bl 0x821f66c0
	ctx.lr = 0x821EC894;
	sub_821F66C0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_821EC89C:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,15864
	ctx.r4.s64 = ctx.r11.s64 + 15864;
	// bl 0x821f66c0
	ctx.lr = 0x821EC8A8;
	sub_821F66C0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_821EC8B0:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,15840
	ctx.r4.s64 = ctx.r11.s64 + 15840;
	// b 0x821ec8f4
	goto loc_821EC8F4;
loc_821EC8BC:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,15820
	ctx.r4.s64 = ctx.r11.s64 + 15820;
	// b 0x821ec8f4
	goto loc_821EC8F4;
loc_821EC8C8:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,15804
	ctx.r4.s64 = ctx.r11.s64 + 15804;
	// b 0x821ec8f4
	goto loc_821EC8F4;
loc_821EC8D4:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,15792
	ctx.r4.s64 = ctx.r11.s64 + 15792;
	// b 0x821ec8f4
	goto loc_821EC8F4;
loc_821EC8E0:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,15772
	ctx.r4.s64 = ctx.r11.s64 + 15772;
	// b 0x821ec8f4
	goto loc_821EC8F4;
loc_821EC8EC:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,15756
	ctx.r4.s64 = ctx.r11.s64 + 15756;
loc_821EC8F4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r31,64
	ctx.r5.s64 = ctx.r31.s64 + 64;
	// li r6,64
	ctx.r6.s64 = 64;
	// bl 0x821f66c0
	ctx.lr = 0x821EC904;
	sub_821F66C0(ctx, base);
loc_821EC904:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821EC90C"))) PPC_WEAK_FUNC(sub_821EC90C);
PPC_FUNC_IMPL(__imp__sub_821EC90C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EC910"))) PPC_WEAK_FUNC(sub_821EC910);
PPC_FUNC_IMPL(__imp__sub_821EC910) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r3,r11,28544
	ctx.r3.s64 = ctx.r11.s64 + 28544;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,13096
	ctx.r11.s64 = ctx.r11.s64 + 13096;
	// lwz r30,6936(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6936);
	// bl 0x8232da90
	ctx.lr = 0x821EC944;
	sub_8232DA90(ctx, base);
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
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
loc_821EC960:
	// mulli r7,r11,584
	ctx.r7.s64 = ctx.r11.s64 * 584;
	// add r4,r7,r10
	ctx.r4.u64 = ctx.r7.u64 + ctx.r10.u64;
	// mulli r8,r11,328
	ctx.r8.s64 = ctx.r11.s64 * 328;
	// add r3,r8,r10
	ctx.r3.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lbz r8,593(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 593);
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// addi r5,r11,5
	ctx.r5.s64 = ctx.r11.s64 + 5;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r7,r6,r31
	PPC_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r7.u32);
	// lbz r6,10641(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10641);
	// extsb r5,r6
	ctx.r5.s64 = ctx.r6.s8;
	// stwx r5,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r5.u32);
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// blt cr6,0x821ec960
	if (ctx.cr6.lt) goto loc_821EC960;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r31,40
	ctx.r4.s64 = ctx.r31.s64 + 40;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x82361bd8
	ctx.lr = 0x821EC9B4;
	sub_82361BD8(ctx, base);
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

__attribute__((alias("__imp__sub_821EC9CC"))) PPC_WEAK_FUNC(sub_821EC9CC);
PPC_FUNC_IMPL(__imp__sub_821EC9CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EC9D0"))) PPC_WEAK_FUNC(sub_821EC9D0);
PPC_FUNC_IMPL(__imp__sub_821EC9D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x821EC9D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r29,r11,28544
	ctx.r29.s64 = ctx.r11.s64 + 28544;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,13096
	ctx.r11.s64 = ctx.r11.s64 + 13096;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r30,6936(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6936);
	// bl 0x8232da90
	ctx.lr = 0x821ECA00;
	sub_8232DA90(ctx, base);
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x82361bd8
	ctx.lr = 0x821ECA10;
	sub_82361BD8(ctx, base);
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
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// addi r11,r11,8544
	ctx.r11.s64 = ctx.r11.s64 + 8544;
	// lhz r7,10576(r8)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r8.u32 + 10576);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// stw r6,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r6.u32);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x821eca94
	if (ctx.cr6.gt) goto loc_821ECA94;
	// lis r12,-32225
	ctx.r12.s64 = -2111897600;
	// addi r12,r12,-13728
	ctx.r12.s64 = ctx.r12.s64 + -13728;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_821ECA84;
	case 1:
		goto loc_821ECA7C;
	case 2:
		goto loc_821ECA74;
	case 3:
		goto loc_821ECA94;
	case 4:
		goto loc_821ECA8C;
	default:
		__builtin_unreachable();
	}
	// lwz r16,-13692(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -13692);
	// lwz r16,-13700(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -13700);
	// lwz r16,-13708(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -13708);
	// lwz r16,-13676(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -13676);
	// lwz r16,-13684(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -13684);
loc_821ECA74:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x821eca98
	goto loc_821ECA98;
loc_821ECA7C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x821eca98
	goto loc_821ECA98;
loc_821ECA84:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x821eca98
	goto loc_821ECA98;
loc_821ECA8C:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x821eca98
	goto loc_821ECA98;
loc_821ECA94:
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
loc_821ECA98:
	// addis r10,r29,33
	ctx.r10.s64 = ctx.r29.s64 + 2162688;
	// stb r11,68(r31)
	PPC_STORE_U8(ctx.r31.u32 + 68, ctx.r11.u8);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// addi r3,r10,6592
	ctx.r3.s64 = ctx.r10.s64 + 6592;
	// bl 0x820b7630
	ctx.lr = 0x821ECAB4;
	sub_820B7630(ctx, base);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stb r5,69(r31)
	PPC_STORE_U8(ctx.r31.u32 + 69, ctx.r5.u8);
	// stb r3,70(r31)
	PPC_STORE_U8(ctx.r31.u32 + 70, ctx.r3.u8);
	// stb r10,71(r31)
	PPC_STORE_U8(ctx.r31.u32 + 71, ctx.r10.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821ECAD4"))) PPC_WEAK_FUNC(sub_821ECAD4);
PPC_FUNC_IMPL(__imp__sub_821ECAD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821ECAD8"))) PPC_WEAK_FUNC(sub_821ECAD8);
PPC_FUNC_IMPL(__imp__sub_821ECAD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// ori r9,r10,16216
	ctx.r9.u64 = ctx.r10.u64 | 16216;
	// lis r7,0
	ctx.r7.s64 = 0;
	// ori r6,r7,46280
	ctx.r6.u64 = ctx.r7.u64 | 46280;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwzx r3,r8,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821ECB00"))) PPC_WEAK_FUNC(sub_821ECB00);
PPC_FUNC_IMPL(__imp__sub_821ECB00) {
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
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r3,8(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821ECB20"))) PPC_WEAK_FUNC(sub_821ECB20);
PPC_FUNC_IMPL(__imp__sub_821ECB20) {
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
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r3,12(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821ECB40"))) PPC_WEAK_FUNC(sub_821ECB40);
PPC_FUNC_IMPL(__imp__sub_821ECB40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// ori r9,r10,16216
	ctx.r9.u64 = ctx.r10.u64 | 16216;
	// lis r7,0
	ctx.r7.s64 = 0;
	// ori r6,r7,46284
	ctx.r6.u64 = ctx.r7.u64 | 46284;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwzx r3,r8,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821ECB68"))) PPC_WEAK_FUNC(sub_821ECB68);
PPC_FUNC_IMPL(__imp__sub_821ECB68) {
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
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,40(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 40);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_821ECB90"))) PPC_WEAK_FUNC(sub_821ECB90);
PPC_FUNC_IMPL(__imp__sub_821ECB90) {
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
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mulli r11,r4,5956
	ctx.r11.s64 = ctx.r4.s64 * 5956;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r10,r5,328
	ctx.r10.s64 = ctx.r5.s64 * 328;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r7,10641(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 10641);
	// extsb r3,r7
	ctx.r3.s64 = ctx.r7.s8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821ECBC4"))) PPC_WEAK_FUNC(sub_821ECBC4);
PPC_FUNC_IMPL(__imp__sub_821ECBC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821ECBC8"))) PPC_WEAK_FUNC(sub_821ECBC8);
PPC_FUNC_IMPL(__imp__sub_821ECBC8) {
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
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mulli r11,r4,584
	ctx.r11.s64 = ctx.r4.s64 * 584;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r7,593(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 593);
	// extsb r3,r7
	ctx.r3.s64 = ctx.r7.s8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821ECBF4"))) PPC_WEAK_FUNC(sub_821ECBF4);
PPC_FUNC_IMPL(__imp__sub_821ECBF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821ECBF8"))) PPC_WEAK_FUNC(sub_821ECBF8);
PPC_FUNC_IMPL(__imp__sub_821ECBF8) {
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
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mulli r11,r4,5956
	ctx.r11.s64 = ctx.r4.s64 * 5956;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r7,10576(r8)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r8.u32 + 10576);
	// extsh r3,r7
	ctx.r3.s64 = ctx.r7.s16;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821ECC24"))) PPC_WEAK_FUNC(sub_821ECC24);
PPC_FUNC_IMPL(__imp__sub_821ECC24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821ECC28"))) PPC_WEAK_FUNC(sub_821ECC28);
PPC_FUNC_IMPL(__imp__sub_821ECC28) {
	PPC_FUNC_PROLOGUE();
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// bne cr6,0x821ecc44
	if (!ctx.cr6.eq) goto loc_821ECC44;
	// lwz r11,10176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10176);
	// extsh r3,r11
	ctx.r3.s64 = ctx.r11.s16;
	// blr 
	return;
loc_821ECC44:
	// addi r11,r11,10176
	ctx.r11.s64 = ctx.r11.s64 + 10176;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// extsh r3,r11
	ctx.r3.s64 = ctx.r11.s16;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821ECC54"))) PPC_WEAK_FUNC(sub_821ECC54);
PPC_FUNC_IMPL(__imp__sub_821ECC54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821ECC58"))) PPC_WEAK_FUNC(sub_821ECC58);
PPC_FUNC_IMPL(__imp__sub_821ECC58) {
	PPC_FUNC_PROLOGUE();
	// li r10,1
	ctx.r10.s64 = 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// stb r10,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r10.u8);
	// sth r11,568(r3)
	PPC_STORE_U16(ctx.r3.u32 + 568, ctx.r11.u16);
	// beq cr6,0x821ecc88
	if (ctx.cr6.eq) goto loc_821ECC88;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x821ecc8c
	if (ctx.cr6.eq) goto loc_821ECC8C;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// stb r10,566(r3)
	PPC_STORE_U8(ctx.r3.u32 + 566, ctx.r10.u8);
	// blr 
	return;
loc_821ECC88:
	// li r11,2
	ctx.r11.s64 = 2;
loc_821ECC8C:
	// stb r11,566(r3)
	PPC_STORE_U8(ctx.r3.u32 + 566, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821ECC94"))) PPC_WEAK_FUNC(sub_821ECC94);
PPC_FUNC_IMPL(__imp__sub_821ECC94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821ECC98"))) PPC_WEAK_FUNC(sub_821ECC98);
PPC_FUNC_IMPL(__imp__sub_821ECC98) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821ECCA4"))) PPC_WEAK_FUNC(sub_821ECCA4);
PPC_FUNC_IMPL(__imp__sub_821ECCA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821ECCA8"))) PPC_WEAK_FUNC(sub_821ECCA8);
PPC_FUNC_IMPL(__imp__sub_821ECCA8) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,568(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 568);
	// lhz r10,312(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 312);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// cmpw cr6,r7,r9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, ctx.xer);
	// sth r11,568(r3)
	PPC_STORE_U16(ctx.r3.u32 + 568, ctx.r11.u16);
	// ble cr6,0x821eccd0
	if (!ctx.cr6.gt) goto loc_821ECCD0;
	// sth r10,568(r3)
	PPC_STORE_U16(ctx.r3.u32 + 568, ctx.r10.u16);
loc_821ECCD0:
	// lhz r3,568(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 568);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821ECCD8"))) PPC_WEAK_FUNC(sub_821ECCD8);
PPC_FUNC_IMPL(__imp__sub_821ECCD8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,568(r3)
	PPC_STORE_U16(ctx.r3.u32 + 568, ctx.r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821ECCE4"))) PPC_WEAK_FUNC(sub_821ECCE4);
PPC_FUNC_IMPL(__imp__sub_821ECCE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821ECCE8"))) PPC_WEAK_FUNC(sub_821ECCE8);
PPC_FUNC_IMPL(__imp__sub_821ECCE8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// lhz r9,312(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 312);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x821ecd08
	if (ctx.cr6.lt) goto loc_821ECD08;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_821ECD08:
	// addi r7,r10,20
	ctx.r7.s64 = ctx.r10.s64 + 20;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r4,r7,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// ldx r9,r4,r11
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r4.u32 + ctx.r11.u32);
	// std r9,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r9.u64);
	// ld r8,328(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 328);
	// std r8,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r8.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821ECD30"))) PPC_WEAK_FUNC(sub_821ECD30);
PPC_FUNC_IMPL(__imp__sub_821ECD30) {
	PPC_FUNC_PROLOGUE();
	// lhz r3,312(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 312);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821ECD38"))) PPC_WEAK_FUNC(sub_821ECD38);
PPC_FUNC_IMPL(__imp__sub_821ECD38) {
	PPC_FUNC_PROLOGUE();
	// lhz r3,2(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821ECD40"))) PPC_WEAK_FUNC(sub_821ECD40);
PPC_FUNC_IMPL(__imp__sub_821ECD40) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821ECD48"))) PPC_WEAK_FUNC(sub_821ECD48);
PPC_FUNC_IMPL(__imp__sub_821ECD48) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,464(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 464);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821ECD50"))) PPC_WEAK_FUNC(sub_821ECD50);
PPC_FUNC_IMPL(__imp__sub_821ECD50) {
	PPC_FUNC_PROLOGUE();
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821ecd68
	if (!ctx.cr6.eq) goto loc_821ECD68;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,15932
	ctx.r3.s64 = ctx.r11.s64 + 15932;
	// blr 
	return;
loc_821ECD68:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,15920
	ctx.r3.s64 = ctx.r11.s64 + 15920;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821ECD74"))) PPC_WEAK_FUNC(sub_821ECD74);
PPC_FUNC_IMPL(__imp__sub_821ECD74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821ECD78"))) PPC_WEAK_FUNC(sub_821ECD78);
PPC_FUNC_IMPL(__imp__sub_821ECD78) {
	PPC_FUNC_PROLOGUE();
	// lhz r3,6(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821ECD80"))) PPC_WEAK_FUNC(sub_821ECD80);
PPC_FUNC_IMPL(__imp__sub_821ECD80) {
	PPC_FUNC_PROLOGUE();
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// addi r11,r11,15320
	ctx.r11.s64 = ctx.r11.s64 + 15320;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r3
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r7,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821ECDA4"))) PPC_WEAK_FUNC(sub_821ECDA4);
PPC_FUNC_IMPL(__imp__sub_821ECDA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821ECDA8"))) PPC_WEAK_FUNC(sub_821ECDA8);
PPC_FUNC_IMPL(__imp__sub_821ECDA8) {
	PPC_FUNC_PROLOGUE();
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// addi r9,r11,20
	ctx.r9.s64 = ctx.r11.s64 + 20;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r3,r8,r3
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821ECDC8"))) PPC_WEAK_FUNC(sub_821ECDC8);
PPC_FUNC_IMPL(__imp__sub_821ECDC8) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,465(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 465);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821ECDD0"))) PPC_WEAK_FUNC(sub_821ECDD0);
PPC_FUNC_IMPL(__imp__sub_821ECDD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x821ECDD8;
	__savegprlr_26(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// extsh r3,r5
	ctx.r3.s64 = ctx.r5.s16;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x822d62f0
	ctx.lr = 0x821ECDEC;
	sub_822D62F0(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82347480
	ctx.lr = 0x821ECDF8;
	sub_82347480(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_821ECE04:
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lbzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// extsb r10,r9
	ctx.r10.s64 = ctx.r9.s8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821ece38
	if (ctx.cr6.eq) goto loc_821ECE38;
	// cmpwi cr6,r10,32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32, ctx.xer);
	// beq cr6,0x821ece38
	if (ctx.cr6.eq) goto loc_821ECE38;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// extsh r31,r8
	ctx.r31.s64 = ctx.r8.s16;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// blt cr6,0x821ece04
	if (ctx.cr6.lt) goto loc_821ECE04;
	// b 0x821ece44
	goto loc_821ECE44;
loc_821ECE38:
	// extsh r7,r31
	ctx.r7.s64 = ctx.r31.s16;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// stbx r28,r7,r6
	PPC_STORE_U8(ctx.r7.u32 + ctx.r6.u32, ctx.r28.u8);
loc_821ECE44:
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,-1416
	ctx.r3.s64 = ctx.r11.s64 + -1416;
	// bl 0x820faf08
	ctx.lr = 0x821ECE54;
	sub_820FAF08(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821ece8c
	if (!ctx.cr6.eq) goto loc_821ECE8C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// addi r11,r11,15944
	ctx.r11.s64 = ctx.r11.s64 + 15944;
	// li r9,19
	ctx.r9.s64 = 19;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_821ECE70:
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r5,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r5.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x821ece70
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821ECE70;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_821ECE8C:
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ld r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// bl 0x82347480
	ctx.lr = 0x821ECE9C;
	sub_82347480(ctx, base);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_821ECEA4:
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lbzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// extsb r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821eced4
	if (ctx.cr6.eq) goto loc_821ECED4;
	// cmpwi cr6,r9,32
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 32, ctx.xer);
	// beq cr6,0x821eced4
	if (ctx.cr6.eq) goto loc_821ECED4;
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmpwi cr6,r10,32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32, ctx.xer);
	// blt cr6,0x821ecea4
	if (ctx.cr6.lt) goto loc_821ECEA4;
loc_821ECED4:
	// extsh r10,r31
	ctx.r10.s64 = ctx.r31.s16;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r7,95
	ctx.r7.s64 = 95;
	// lis r9,-32091
	ctx.r9.s64 = -2103115776;
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
	// addi r3,r9,14528
	ctx.r3.s64 = ctx.r9.s64 + 14528;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stbx r7,r11,r8
	PPC_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r7.u8);
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// lbz r8,-2(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + -2);
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// lbz r7,-1(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + -1);
	// addi r26,r1,80
	ctx.r26.s64 = ctx.r1.s64 + 80;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// extsh r6,r27
	ctx.r6.s64 = ctx.r27.s16;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stbx r8,r11,r31
	PPC_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r8.u8);
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stbx r7,r11,r30
	PPC_STORE_U8(ctx.r11.u32 + ctx.r30.u32, ctx.r7.u8);
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// stbx r28,r7,r26
	PPC_STORE_U8(ctx.r7.u32 + ctx.r26.u32, ctx.r28.u8);
	// bl 0x821f66c0
	ctx.lr = 0x821ECF40;
	sub_821F66C0(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821ECF48"))) PPC_WEAK_FUNC(sub_821ECF48);
PPC_FUNC_IMPL(__imp__sub_821ECF48) {
	PPC_FUNC_PROLOGUE();
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r3,516(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 516);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821ECF58"))) PPC_WEAK_FUNC(sub_821ECF58);
PPC_FUNC_IMPL(__imp__sub_821ECF58) {
	PPC_FUNC_PROLOGUE();
	// lhz r3,568(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 568);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821ECF60"))) PPC_WEAK_FUNC(sub_821ECF60);
PPC_FUNC_IMPL(__imp__sub_821ECF60) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,566(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 566);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821ECF68"))) PPC_WEAK_FUNC(sub_821ECF68);
PPC_FUNC_IMPL(__imp__sub_821ECF68) {
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
	// extsh r9,r4
	ctx.r9.s64 = ctx.r4.s16;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge cr6,0x821ed03c
	if (!ctx.cr6.lt) goto loc_821ED03C;
	// addi r11,r31,576
	ctx.r11.s64 = ctx.r31.s64 + 576;
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
	// rotlwi r5,r9,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// lhz r6,6(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// extsh r4,r6
	ctx.r4.s64 = ctx.r6.s16;
	// divwu r3,r5,r4
	ctx.r3.u32 = ctx.r5.u32 / ctx.r4.u32;
	// twllei r4,0
	if (ctx.r4.u32 <= 0) __builtin_debugtrap();
	// mullw r10,r3,r4
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r4.s32);
	// subf r9,r10,r5
	ctx.r9.s64 = ctx.r5.s64 - ctx.r10.s64;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// addi r8,r9,2
	ctx.r8.s64 = ctx.r9.s64 + 2;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r7,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// addi r6,r10,20
	ctx.r6.s64 = ctx.r10.s64 + 20;
	// rlwinm r5,r6,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r5,r31
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r5.u32 + ctx.r31.u32);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x821ed06c
	if (!ctx.cr6.gt) goto loc_821ED06C;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// twllei r10,0
	if (ctx.r10.u32 <= 0) __builtin_debugtrap();
	// lhz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm r7,r4,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xFFFF0000;
	// extsh r8,r3
	ctx.r8.s64 = ctx.r3.s16;
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// rotlwi r7,r7,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// divwu r6,r7,r10
	ctx.r6.u32 = ctx.r7.u32 / ctx.r10.u32;
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// mullw r5,r6,r10
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// subf r4,r5,r7
	ctx.r4.s64 = ctx.r7.s64 - ctx.r5.s64;
	// clrlwi r5,r4,16
	ctx.r5.u64 = ctx.r4.u32 & 0xFFFF;
	// b 0x821ed0b8
	goto loc_821ED0B8;
loc_821ED03C:
	// extsh r3,r5
	ctx.r3.s64 = ctx.r5.s16;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x821ed0b8
	if (!ctx.cr6.lt) goto loc_821ED0B8;
	// addi r11,r9,2
	ctx.r11.s64 = ctx.r9.s64 + 2;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// addi r8,r11,20
	ctx.r8.s64 = ctx.r11.s64 + 20;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r7,r31
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r31.u32);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x821ed074
	if (ctx.cr6.gt) goto loc_821ED074;
loc_821ED06C:
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x821ed0b8
	goto loc_821ED0B8;
loc_821ED074:
	// addi r11,r31,576
	ctx.r11.s64 = ctx.r31.s64 + 576;
	// twllei r10,0
	if (ctx.r10.u32 <= 0) __builtin_debugtrap();
	// lhz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// extsh r8,r5
	ctx.r8.s64 = ctx.r5.s16;
	// rlwinm r7,r6,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xFFFF0000;
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r4,r7,r8
	ctx.r4.u64 = ctx.r7.u64 + ctx.r8.u64;
	// rotlwi r3,r7,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// divwu r11,r3,r10
	ctx.r11.u32 = ctx.r3.u32 / ctx.r10.u32;
	// mullw r10,r11,r10
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// subf r8,r10,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r10.s64;
	// clrlwi r5,r8,16
	ctx.r5.u64 = ctx.r8.u32 & 0xFFFF;
loc_821ED0B8:
	// addi r7,r9,2
	ctx.r7.s64 = ctx.r9.s64 + 2;
	// extsh r10,r5
	ctx.r10.s64 = ctx.r5.s16;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r31
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// rlwinm r11,r5,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r11,28
	ctx.r4.s64 = ctx.r11.s64 + 28;
	// rlwinm r3,r4,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r3,r31
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r31.u32);
	// extsh r3,r11
	ctx.r3.s64 = ctx.r11.s16;
	// bl 0x822d6240
	ctx.lr = 0x821ED0E4;
	sub_822D6240(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32151
	ctx.r10.s64 = -2107047936;
	// addi r3,r10,-8544
	ctx.r3.s64 = ctx.r10.s64 + -8544;
	// std r11,320(r31)
	PPC_STORE_U64(ctx.r31.u32 + 320, ctx.r11.u64);
	// bl 0x823471d8
	ctx.lr = 0x821ED0F8;
	sub_823471D8(ctx, base);
	// std r3,328(r31)
	PPC_STORE_U64(ctx.r31.u32 + 328, ctx.r3.u64);
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

__attribute__((alias("__imp__sub_821ED110"))) PPC_WEAK_FUNC(sub_821ED110);
PPC_FUNC_IMPL(__imp__sub_821ED110) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// extsh r9,r4
	ctx.r9.s64 = ctx.r4.s16;
	// li r8,0
	ctx.r8.s64 = 0;
	// lhz r10,312(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 312);
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x821ed130
	if (ctx.cr6.lt) goto loc_821ED130;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
loc_821ED130:
	// extsh r9,r5
	ctx.r9.s64 = ctx.r5.s16;
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge cr6,0x821ed15c
	if (!ctx.cr6.lt) goto loc_821ED15C;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r6,r10,20
	ctx.r6.s64 = ctx.r10.s64 + 20;
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r4,r6,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// std r8,328(r5)
	PPC_STORE_U64(ctx.r5.u32 + 328, ctx.r8.u64);
	// stdx r8,r4,r11
	PPC_STORE_U64(ctx.r4.u32 + ctx.r11.u32, ctx.r8.u64);
	// blr 
	return;
loc_821ED15C:
	// add r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lbz r3,466(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 466);
	// addi r5,r9,328
	ctx.r5.s64 = ctx.r9.s64 + 328;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82221118
	sub_82221118(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821ED180"))) PPC_WEAK_FUNC(sub_821ED180);
PPC_FUNC_IMPL(__imp__sub_821ED180) {
	PPC_FUNC_PROLOGUE();
	// sth r4,312(r3)
	PPC_STORE_U16(ctx.r3.u32 + 312, ctx.r4.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821ED188"))) PPC_WEAK_FUNC(sub_821ED188);
PPC_FUNC_IMPL(__imp__sub_821ED188) {
	PPC_FUNC_PROLOGUE();
	// sth r4,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r4.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821ED190"))) PPC_WEAK_FUNC(sub_821ED190);
PPC_FUNC_IMPL(__imp__sub_821ED190) {
	PPC_FUNC_PROLOGUE();
	// stb r4,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821ED198"))) PPC_WEAK_FUNC(sub_821ED198);
PPC_FUNC_IMPL(__imp__sub_821ED198) {
	PPC_FUNC_PROLOGUE();
	// stb r4,464(r3)
	PPC_STORE_U8(ctx.r3.u32 + 464, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821ED1A0"))) PPC_WEAK_FUNC(sub_821ED1A0);
PPC_FUNC_IMPL(__imp__sub_821ED1A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x821ED1A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// addi r29,r10,-1416
	ctx.r29.s64 = ctx.r10.s64 + -1416;
	// stb r11,465(r31)
	PPC_STORE_U8(ctx.r31.u32 + 465, ctx.r11.u8);
loc_821ED1C4:
	// lbz r10,465(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 465);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// stb r11,466(r10)
	PPC_STORE_U8(ctx.r10.u32 + 466, ctx.r11.u8);
	// bl 0x822d62f0
	ctx.lr = 0x821ED1D8;
	sub_822D62F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820ff148
	ctx.lr = 0x821ED1E4;
	sub_820FF148(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// lbz r10,465(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 465);
	// addi r9,r30,1
	ctx.r9.s64 = ctx.r30.s64 + 1;
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// add r8,r10,r31
	ctx.r8.u64 = ctx.r10.u64 + ctx.r31.u64;
	// rlwinm r5,r6,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// stb r5,516(r8)
	PPC_STORE_U8(ctx.r8.u32 + 516, ctx.r5.u8);
	// cmplwi cr6,r30,50
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 50, ctx.xer);
	// lbz r10,465(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 465);
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// stb r3,465(r31)
	PPC_STORE_U8(ctx.r31.u32 + 465, ctx.r3.u8);
	// blt cr6,0x821ed1c4
	if (ctx.cr6.lt) goto loc_821ED1C4;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}


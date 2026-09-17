#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82107F3C"))) PPC_WEAK_FUNC(sub_82107F3C);
PPC_FUNC_IMPL(__imp__sub_82107F3C) {
	PPC_FUNC_PROLOGUE();
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r6,3876(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3876, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82107F48"))) PPC_WEAK_FUNC(sub_82107F48);
PPC_FUNC_IMPL(__imp__sub_82107F48) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,3892(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3892);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82107f60
	if (!ctx.cr6.eq) goto loc_82107F60;
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r5,2420(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2420, ctx.r5.u32);
	// blr 
	return;
loc_82107F60:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82107f74
	if (!ctx.cr6.eq) goto loc_82107F74;
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r4,3636(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3636, ctx.r4.u32);
	// blr 
	return;
loc_82107F74:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,1220(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1220, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82107F80"))) PPC_WEAK_FUNC(sub_82107F80);
PPC_FUNC_IMPL(__imp__sub_82107F80) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,3892(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3892);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82107f98
	if (!ctx.cr6.eq) goto loc_82107F98;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,2404(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2404, ctx.r10.u32);
	// blr 
	return;
loc_82107F98:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82107fac
	if (!ctx.cr6.eq) goto loc_82107FAC;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r9,3620(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3620, ctx.r9.u32);
	// blr 
	return;
loc_82107FAC:
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r8,1204(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1204, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82107FB8"))) PPC_WEAK_FUNC(sub_82107FB8);
PPC_FUNC_IMPL(__imp__sub_82107FB8) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r5,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// li r7,2
	ctx.r7.s64 = 2;
	// add r6,r11,r3
	ctx.r6.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r7,132(r6)
	PPC_STORE_U32(ctx.r6.u32 + 132, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82107FCC"))) PPC_WEAK_FUNC(sub_82107FCC);
PPC_FUNC_IMPL(__imp__sub_82107FCC) {
	PPC_FUNC_PROLOGUE();
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r5,228(r3)
	PPC_STORE_U32(ctx.r3.u32 + 228, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82107FD8"))) PPC_WEAK_FUNC(sub_82107FD8);
PPC_FUNC_IMPL(__imp__sub_82107FD8) {
	PPC_FUNC_PROLOGUE();
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r4,260(r3)
	PPC_STORE_U32(ctx.r3.u32 + 260, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82107FE4"))) PPC_WEAK_FUNC(sub_82107FE4);
PPC_FUNC_IMPL(__imp__sub_82107FE4) {
	PPC_FUNC_PROLOGUE();
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,276(r3)
	PPC_STORE_U32(ctx.r3.u32 + 276, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82107FF0"))) PPC_WEAK_FUNC(sub_82107FF0);
PPC_FUNC_IMPL(__imp__sub_82107FF0) {
	PPC_FUNC_PROLOGUE();
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,292(r3)
	PPC_STORE_U32(ctx.r3.u32 + 292, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82107FFC"))) PPC_WEAK_FUNC(sub_82107FFC);
PPC_FUNC_IMPL(__imp__sub_82107FFC) {
	PPC_FUNC_PROLOGUE();
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r9,308(r3)
	PPC_STORE_U32(ctx.r3.u32 + 308, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82108008"))) PPC_WEAK_FUNC(sub_82108008);
PPC_FUNC_IMPL(__imp__sub_82108008) {
	PPC_FUNC_PROLOGUE();
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r8,324(r3)
	PPC_STORE_U32(ctx.r3.u32 + 324, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82108014"))) PPC_WEAK_FUNC(sub_82108014);
PPC_FUNC_IMPL(__imp__sub_82108014) {
	PPC_FUNC_PROLOGUE();
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r7,372(r3)
	PPC_STORE_U32(ctx.r3.u32 + 372, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82108020"))) PPC_WEAK_FUNC(sub_82108020);
PPC_FUNC_IMPL(__imp__sub_82108020) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,13
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 13, ctx.xer);
	// bgt cr6,0x8210838c
	if (ctx.cr6.gt) {
		// ERROR 8210838C
		return;
	}
	// lis r12,-32239
	ctx.r12.s64 = -2112815104;
	// addi r12,r12,-32704
	ctx.r12.s64 = ctx.r12.s64 + -32704;
	// rlwinm r0,r4,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r4.u64) {
	case 0:
		// ERROR: 0x82108078
		return;
	case 1:
		// ERROR: 0x82108100
		return;
	case 2:
		// ERROR: 0x82108218
		return;
	case 3:
		// ERROR: 0x821081B0
		return;
	case 4:
		// ERROR: 0x8210838C
		return;
	case 5:
		// ERROR: 0x8210838C
		return;
	case 6:
		// ERROR: 0x8210829C
		return;
	case 7:
		// ERROR: 0x8210838C
		return;
	case 8:
		// ERROR: 0x8210838C
		return;
	case 9:
		// ERROR: 0x8210838C
		return;
	case 10:
		// ERROR: 0x82108324
		return;
	case 11:
		// ERROR: 0x8210838C
		return;
	case 12:
		// ERROR: 0x8210838C
		return;
	case 13:
		// ERROR: 0x82108098
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_82108040"))) PPC_WEAK_FUNC(sub_82108040);
PPC_FUNC_IMPL(__imp__sub_82108040) {
	PPC_FUNC_PROLOGUE();
	// lwz r16,-32648(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -32648);
	// lwz r16,-32512(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -32512);
	// lwz r16,-32232(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -32232);
	// lwz r16,-32336(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -32336);
	// lwz r16,-31860(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -31860);
	// lwz r16,-31860(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -31860);
	// lwz r16,-32100(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -32100);
	// lwz r16,-31860(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -31860);
	// lwz r16,-31860(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -31860);
	// lwz r16,-31860(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -31860);
	// lwz r16,-31964(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -31964);
	// lwz r16,-31860(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -31860);
	// lwz r16,-31860(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -31860);
	// lwz r16,-32616(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -32616);
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82108090
	if (ctx.cr6.lt) goto loc_82108090;
	// lwz r10,3892(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3892);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8210838c
	if (!ctx.cr6.eq) {
		// ERROR 8210838C
		return;
	}
loc_82108090:
	// lwz r3,112(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82108098"))) PPC_WEAK_FUNC(sub_82108098);
PPC_FUNC_IMPL(__imp__sub_82108098) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,3892(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3892);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x821080c0
	if (!ctx.cr6.eq) goto loc_821080C0;
	// lwz r11,2200(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2200);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x821080b8
	if (ctx.cr6.lt) goto loc_821080B8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8210838c
	if (!ctx.cr6.eq) {
		// ERROR 8210838C
		return;
	}
loc_821080B8:
	// lwz r3,2208(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2208);
	// blr 
	return;
loc_821080C0:
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x821080e4
	if (!ctx.cr6.eq) goto loc_821080E4;
	// lwz r11,3416(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3416);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x821080dc
	if (ctx.cr6.lt) goto loc_821080DC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8210838c
	if (!ctx.cr6.eq) {
		// ERROR 8210838C
		return;
	}
loc_821080DC:
	// lwz r3,3424(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3424);
	// blr 
	return;
loc_821080E4:
	// lwz r11,1000(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1000);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x821080f8
	if (ctx.cr6.lt) goto loc_821080F8;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8210838c
	if (!ctx.cr6.eq) {
		// ERROR 8210838C
		return;
	}
loc_821080F8:
	// lwz r3,1008(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1008);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82108100"))) PPC_WEAK_FUNC(sub_82108100);
PPC_FUNC_IMPL(__imp__sub_82108100) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,3892(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3892);
	// rlwinm r11,r5,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bne cr6,0x82108134
	if (!ctx.cr6.eq) goto loc_82108134;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,1240(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1240);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x8210812c
	if (ctx.cr6.lt) goto loc_8210812C;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_8210812C:
	// lwz r3,1248(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1248);
	// blr 
	return;
loc_82108134:
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// bne cr6,0x82108160
	if (!ctx.cr6.eq) goto loc_82108160;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,2440(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2440);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x82108158
	if (ctx.cr6.lt) goto loc_82108158;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_82108158:
	// lwz r3,2448(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2448);
	// blr 
	return;
loc_82108160:
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x8210818c
	if (!ctx.cr6.eq) goto loc_8210818C;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x82108184
	if (ctx.cr6.lt) goto loc_82108184;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_82108184:
	// lwz r3,400(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 400);
	// blr 
	return;
loc_8210818C:
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,3656(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3656);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x821081a8
	if (ctx.cr6.lt) goto loc_821081A8;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_821081A8:
	// lwz r3,3664(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3664);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821081B0"))) PPC_WEAK_FUNC(sub_821081B0);
PPC_FUNC_IMPL(__imp__sub_821081B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,3892(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3892);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x821081d8
	if (!ctx.cr6.eq) goto loc_821081D8;
	// lwz r11,2488(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2488);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x821081d0
	if (ctx.cr6.lt) goto loc_821081D0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8210838c
	if (!ctx.cr6.eq) {
		// ERROR 8210838C
		return;
	}
loc_821081D0:
	// lwz r3,2496(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2496);
	// blr 
	return;
loc_821081D8:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x821081fc
	if (!ctx.cr6.eq) goto loc_821081FC;
	// lwz r11,1272(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1272);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x821081f4
	if (ctx.cr6.lt) goto loc_821081F4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8210838c
	if (!ctx.cr6.eq) {
		// ERROR 8210838C
		return;
	}
loc_821081F4:
	// lwz r3,1280(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1280);
	// blr 
	return;
loc_821081FC:
	// lwz r11,488(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 488);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82108210
	if (ctx.cr6.lt) goto loc_82108210;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8210838c
	if (!ctx.cr6.eq) {
		// ERROR 8210838C
		return;
	}
loc_82108210:
	// lwz r3,496(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 496);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82108218"))) PPC_WEAK_FUNC(sub_82108218);
PPC_FUNC_IMPL(__imp__sub_82108218) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,3892(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3892);
	// rlwinm r11,r5,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bne cr6,0x8210824c
	if (!ctx.cr6.eq) goto loc_8210824C;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,2216(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2216);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x82108244
	if (ctx.cr6.lt) goto loc_82108244;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_82108244:
	// lwz r3,2224(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2224);
	// blr 
	return;
loc_8210824C:
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// bne cr6,0x82108278
	if (!ctx.cr6.eq) goto loc_82108278;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,3432(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3432);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x82108270
	if (ctx.cr6.lt) goto loc_82108270;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_82108270:
	// lwz r3,3440(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3440);
	// blr 
	return;
loc_82108278:
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,1016(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1016);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82108294
	if (ctx.cr6.lt) goto loc_82108294;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_82108294:
	// lwz r3,1024(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1024);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8210829C"))) PPC_WEAK_FUNC(sub_8210829C);
PPC_FUNC_IMPL(__imp__sub_8210829C) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,3892(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3892);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821082c0
	if (!ctx.cr6.eq) goto loc_821082C0;
	// lwz r11,3736(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3736);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x821082b8
	if (ctx.cr6.lt) goto loc_821082B8;
	// bne cr6,0x8210838c
	if (!ctx.cr6.eq) {
		// ERROR 8210838C
		return;
	}
loc_821082B8:
	// lwz r3,3744(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3744);
	// blr 
	return;
loc_821082C0:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x821082e4
	if (!ctx.cr6.eq) goto loc_821082E4;
	// lwz r11,1304(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1304);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x821082dc
	if (ctx.cr6.lt) goto loc_821082DC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8210838c
	if (!ctx.cr6.eq) {
		// ERROR 8210838C
		return;
	}
loc_821082DC:
	// lwz r3,1312(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1312);
	// blr 
	return;
loc_821082E4:
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x82108308
	if (!ctx.cr6.eq) goto loc_82108308;
	// lwz r11,2520(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2520);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82108300
	if (ctx.cr6.lt) goto loc_82108300;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8210838c
	if (!ctx.cr6.eq) {
		// ERROR 8210838C
		return;
	}
loc_82108300:
	// lwz r3,2528(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2528);
	// blr 
	return;
loc_82108308:
	// lwz r11,520(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 520);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8210831c
	if (ctx.cr6.lt) goto loc_8210831C;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8210838c
	if (!ctx.cr6.eq) {
		// ERROR 8210838C
		return;
	}
loc_8210831C:
	// lwz r3,528(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 528);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82108324"))) PPC_WEAK_FUNC(sub_82108324);
PPC_FUNC_IMPL(__imp__sub_82108324) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,3892(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3892);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x8210834c
	if (!ctx.cr6.eq) goto loc_8210834C;
	// lwz r11,2184(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2184);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82108344
	if (ctx.cr6.lt) goto loc_82108344;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8210838c
	if (!ctx.cr6.eq) goto loc_8210838C;
loc_82108344:
	// lwz r3,2192(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2192);
	// blr 
	return;
loc_8210834C:
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x82108370
	if (!ctx.cr6.eq) goto loc_82108370;
	// lwz r11,3400(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3400);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82108368
	if (ctx.cr6.lt) goto loc_82108368;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8210838c
	if (!ctx.cr6.eq) goto loc_8210838C;
loc_82108368:
	// lwz r3,3408(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3408);
	// blr 
	return;
loc_82108370:
	// lwz r11,984(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 984);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82108384
	if (ctx.cr6.lt) goto loc_82108384;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8210838c
	if (!ctx.cr6.eq) goto loc_8210838C;
loc_82108384:
	// lwz r3,992(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 992);
	// blr 
	return;
loc_8210838C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82108394"))) PPC_WEAK_FUNC(sub_82108394);
PPC_FUNC_IMPL(__imp__sub_82108394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82108398"))) PPC_WEAK_FUNC(sub_82108398);
PPC_FUNC_IMPL(__imp__sub_82108398) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,45
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 45, ctx.xer);
	// bgt cr6,0x82108764
	if (ctx.cr6.gt) {
		sub_82108764(ctx, base);
		return;
	}
	// lis r12,-32239
	ctx.r12.s64 = -2112815104;
	// addi r12,r12,-31816
	ctx.r12.s64 = ctx.r12.s64 + -31816;
	// rlwinm r0,r4,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r4.u64) {
	case 0:
		// ERROR: 0x82108470
		return;
	case 1:
		// ERROR: 0x82108478
		return;
	case 2:
		// ERROR: 0x821084E0
		return;
	case 3:
		// ERROR: 0x821084B4
		return;
	case 4:
		// ERROR: 0x8210850C
		return;
	case 5:
		// ERROR: 0x82108764
		return;
	case 6:
		// ERROR: 0x82108548
		return;
	case 7:
		// ERROR: 0x82108584
		return;
	case 8:
		// ERROR: 0x821085B0
		return;
	case 9:
		// ERROR: 0x821085DC
		return;
	case 10:
		// ERROR: 0x821085E4
		return;
	case 11:
		// ERROR: 0x82108610
		return;
	case 12:
		// ERROR: 0x82108644
		return;
	case 13:
		// ERROR: 0x82108618
		return;
	case 14:
		// ERROR: 0x8210864C
		return;
	case 15:
		// ERROR: 0x8210865C
		return;
	case 16:
		// ERROR: 0x82108664
		return;
	case 17:
		// ERROR: 0x8210866C
		return;
	case 18:
		// ERROR: 0x82108674
		return;
	case 19:
		// ERROR: 0x8210867C
		return;
	case 20:
		// ERROR: 0x82108694
		return;
	case 21:
		// ERROR: 0x82108684
		return;
	case 22:
		// ERROR: 0x8210869C
		return;
	case 23:
		// ERROR: 0x821086AC
		return;
	case 24:
		// ERROR: 0x821086A4
		return;
	case 25:
		// ERROR: 0x821086B4
		return;
	case 26:
		// ERROR: 0x821086CC
		return;
	case 27:
		// ERROR: 0x821086F8
		return;
	case 28:
		// ERROR: 0x82108724
		return;
	case 29:
		// ERROR: 0x8210872C
		return;
	case 30:
		// ERROR: 0x82108734
		return;
	case 31:
		// ERROR: 0x8210873C
		return;
	case 32:
		// ERROR: 0x82108744
		return;
	case 33:
		// ERROR: 0x8210874C
		return;
	case 34:
		// ERROR: 0x82108754
		return;
	case 35:
		// ERROR: 0x8210875C
		return;
	case 36:
		// ERROR: 0x82108764
		return;
	case 37:
		// ERROR: 0x821086BC
		return;
	case 38:
		// ERROR: 0x821086C4
		return;
	case 39:
		// ERROR: 0x82108654
		return;
	case 40:
		// ERROR: 0x82108764
		return;
	case 41:
		// ERROR: 0x82108764
		return;
	case 42:
		// ERROR: 0x82108764
		return;
	case 43:
		// ERROR: 0x82108764
		return;
	case 44:
		// ERROR: 0x82108764
		return;
	case 45:
		// ERROR: 0x8210868C
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_821083B8"))) PPC_WEAK_FUNC(sub_821083B8);
PPC_FUNC_IMPL(__imp__sub_821083B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r16,-31632(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -31632);
	// lwz r16,-31624(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -31624);
	// lwz r16,-31520(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -31520);
	// lwz r16,-31564(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -31564);
	// lwz r16,-31476(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -31476);
	// lwz r16,-30876(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -30876);
	// lwz r16,-31416(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -31416);
	// lwz r16,-31356(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -31356);
	// lwz r16,-31312(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -31312);
	// lwz r16,-31268(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -31268);
	// lwz r16,-31260(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -31260);
	// lwz r16,-31216(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -31216);
	// lwz r16,-31164(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -31164);
	// lwz r16,-31208(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -31208);
	// lwz r16,-31156(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -31156);
	// lwz r16,-31140(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -31140);
	// lwz r16,-31132(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -31132);
	// lwz r16,-31124(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -31124);
	// lwz r16,-31116(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -31116);
	// lwz r16,-31108(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -31108);
	// lwz r16,-31084(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -31084);
	// lwz r16,-31100(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -31100);
	// lwz r16,-31076(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -31076);
	// lwz r16,-31060(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -31060);
	// lwz r16,-31068(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -31068);
	// lwz r16,-31052(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -31052);
	// lwz r16,-31028(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -31028);
	// lwz r16,-30984(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -30984);
	// lwz r16,-30940(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -30940);
	// lwz r16,-30932(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -30932);
	// lwz r16,-30924(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -30924);
	// lwz r16,-30916(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -30916);
	// lwz r16,-30908(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -30908);
	// lwz r16,-30900(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -30900);
	// lwz r16,-30892(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -30892);
	// lwz r16,-30884(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -30884);
	// lwz r16,-30876(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -30876);
	// lwz r16,-31044(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -31044);
	// lwz r16,-31036(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -31036);
	// lwz r16,-31148(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -31148);
	// lwz r16,-30876(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -30876);
	// lwz r16,-30876(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -30876);
	// lwz r16,-30876(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -30876);
	// lwz r16,-30876(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -30876);
	// lwz r16,-30876(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -30876);
	// lwz r16,-31092(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -31092);
	// lwz r3,108(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82108478"))) PPC_WEAK_FUNC(sub_82108478);
PPC_FUNC_IMPL(__imp__sub_82108478) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,3892(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3892);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8210848c
	if (!ctx.cr6.eq) goto loc_8210848C;
	// lwz r3,3660(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3660);
	// blr 
	return;
loc_8210848C:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8210849c
	if (!ctx.cr6.eq) goto loc_8210849C;
	// lwz r3,1244(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1244);
	// blr 
	return;
loc_8210849C:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x821084ac
	if (!ctx.cr6.eq) goto loc_821084AC;
	// lwz r3,2444(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2444);
	// blr 
	return;
loc_821084AC:
	// lwz r3,396(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 396);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821084B4"))) PPC_WEAK_FUNC(sub_821084B4);
PPC_FUNC_IMPL(__imp__sub_821084B4) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,3892(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3892);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x821084c8
	if (!ctx.cr6.eq) goto loc_821084C8;
	// lwz r3,1276(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1276);
	// blr 
	return;
loc_821084C8:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x821084d8
	if (!ctx.cr6.eq) goto loc_821084D8;
	// lwz r3,2492(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2492);
	// blr 
	return;
loc_821084D8:
	// lwz r3,492(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 492);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821084E0"))) PPC_WEAK_FUNC(sub_821084E0);
PPC_FUNC_IMPL(__imp__sub_821084E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,3892(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3892);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x821084f4
	if (!ctx.cr6.eq) goto loc_821084F4;
	// lwz r3,2220(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2220);
	// blr 
	return;
loc_821084F4:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82108504
	if (!ctx.cr6.eq) goto loc_82108504;
	// lwz r3,3436(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3436);
	// blr 
	return;
loc_82108504:
	// lwz r3,1020(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1020);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8210850C"))) PPC_WEAK_FUNC(sub_8210850C);
PPC_FUNC_IMPL(__imp__sub_8210850C) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,3892(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3892);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82108520
	if (!ctx.cr6.eq) goto loc_82108520;
	// lwz r3,3708(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3708);
	// blr 
	return;
loc_82108520:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82108530
	if (!ctx.cr6.eq) goto loc_82108530;
	// lwz r3,1292(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1292);
	// blr 
	return;
loc_82108530:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82108540
	if (!ctx.cr6.eq) goto loc_82108540;
	// lwz r3,2508(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2508);
	// blr 
	return;
loc_82108540:
	// lwz r3,508(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 508);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82108548"))) PPC_WEAK_FUNC(sub_82108548);
PPC_FUNC_IMPL(__imp__sub_82108548) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,3892(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3892);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8210855c
	if (!ctx.cr6.eq) goto loc_8210855C;
	// lwz r3,3740(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3740);
	// blr 
	return;
loc_8210855C:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8210856c
	if (!ctx.cr6.eq) goto loc_8210856C;
	// lwz r3,1308(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1308);
	// blr 
	return;
loc_8210856C:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8210857c
	if (!ctx.cr6.eq) goto loc_8210857C;
	// lwz r3,2524(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2524);
	// blr 
	return;
loc_8210857C:
	// lwz r3,524(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 524);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82108584"))) PPC_WEAK_FUNC(sub_82108584);
PPC_FUNC_IMPL(__imp__sub_82108584) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,3892(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3892);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82108598
	if (!ctx.cr6.eq) goto loc_82108598;
	// lwz r3,1324(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1324);
	// blr 
	return;
loc_82108598:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x821085a8
	if (!ctx.cr6.eq) goto loc_821085A8;
	// lwz r3,2540(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2540);
	// blr 
	return;
loc_821085A8:
	// lwz r3,540(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 540);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821085B0"))) PPC_WEAK_FUNC(sub_821085B0);
PPC_FUNC_IMPL(__imp__sub_821085B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,3892(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3892);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x821085c4
	if (!ctx.cr6.eq) goto loc_821085C4;
	// lwz r3,1628(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1628);
	// blr 
	return;
loc_821085C4:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x821085d4
	if (!ctx.cr6.eq) goto loc_821085D4;
	// lwz r3,2844(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2844);
	// blr 
	return;
loc_821085D4:
	// lwz r3,700(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 700);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821085DC"))) PPC_WEAK_FUNC(sub_821085DC);
PPC_FUNC_IMPL(__imp__sub_821085DC) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,124(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821085E4"))) PPC_WEAK_FUNC(sub_821085E4);
PPC_FUNC_IMPL(__imp__sub_821085E4) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,3892(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3892);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x821085f8
	if (!ctx.cr6.eq) goto loc_821085F8;
	// lwz r3,2188(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2188);
	// blr 
	return;
loc_821085F8:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82108608
	if (!ctx.cr6.eq) goto loc_82108608;
	// lwz r3,3404(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3404);
	// blr 
	return;
loc_82108608:
	// lwz r3,988(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 988);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82108610"))) PPC_WEAK_FUNC(sub_82108610);
PPC_FUNC_IMPL(__imp__sub_82108610) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,44(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82108618"))) PPC_WEAK_FUNC(sub_82108618);
PPC_FUNC_IMPL(__imp__sub_82108618) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,3892(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3892);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8210862c
	if (!ctx.cr6.eq) goto loc_8210862C;
	// lwz r3,2204(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2204);
	// blr 
	return;
loc_8210862C:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8210863c
	if (!ctx.cr6.eq) goto loc_8210863C;
	// lwz r3,3420(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3420);
	// blr 
	return;
loc_8210863C:
	// lwz r3,1004(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1004);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82108644"))) PPC_WEAK_FUNC(sub_82108644);
PPC_FUNC_IMPL(__imp__sub_82108644) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,60(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8210864C"))) PPC_WEAK_FUNC(sub_8210864C);
PPC_FUNC_IMPL(__imp__sub_8210864C) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82108654"))) PPC_WEAK_FUNC(sub_82108654);
PPC_FUNC_IMPL(__imp__sub_82108654) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,252(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 252);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8210865C"))) PPC_WEAK_FUNC(sub_8210865C);
PPC_FUNC_IMPL(__imp__sub_8210865C) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82108664"))) PPC_WEAK_FUNC(sub_82108664);
PPC_FUNC_IMPL(__imp__sub_82108664) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,76(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8210866C"))) PPC_WEAK_FUNC(sub_8210866C);
PPC_FUNC_IMPL(__imp__sub_8210866C) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,92(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82108674"))) PPC_WEAK_FUNC(sub_82108674);
PPC_FUNC_IMPL(__imp__sub_82108674) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,364(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 364);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8210867C"))) PPC_WEAK_FUNC(sub_8210867C);
PPC_FUNC_IMPL(__imp__sub_8210867C) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,3756(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3756);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82108684"))) PPC_WEAK_FUNC(sub_82108684);
PPC_FUNC_IMPL(__imp__sub_82108684) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,3788(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3788);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8210868C"))) PPC_WEAK_FUNC(sub_8210868C);
PPC_FUNC_IMPL(__imp__sub_8210868C) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,348(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 348);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82108694"))) PPC_WEAK_FUNC(sub_82108694);
PPC_FUNC_IMPL(__imp__sub_82108694) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,3772(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3772);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8210869C"))) PPC_WEAK_FUNC(sub_8210869C);
PPC_FUNC_IMPL(__imp__sub_8210869C) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,3836(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3836);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821086A4"))) PPC_WEAK_FUNC(sub_821086A4);
PPC_FUNC_IMPL(__imp__sub_821086A4) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,3804(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3804);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821086AC"))) PPC_WEAK_FUNC(sub_821086AC);
PPC_FUNC_IMPL(__imp__sub_821086AC) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,3852(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3852);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821086B4"))) PPC_WEAK_FUNC(sub_821086B4);
PPC_FUNC_IMPL(__imp__sub_821086B4) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,3820(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3820);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821086BC"))) PPC_WEAK_FUNC(sub_821086BC);
PPC_FUNC_IMPL(__imp__sub_821086BC) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,3868(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3868);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821086C4"))) PPC_WEAK_FUNC(sub_821086C4);
PPC_FUNC_IMPL(__imp__sub_821086C4) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,3884(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3884);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821086CC"))) PPC_WEAK_FUNC(sub_821086CC);
PPC_FUNC_IMPL(__imp__sub_821086CC) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,3892(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3892);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x821086e0
	if (!ctx.cr6.eq) goto loc_821086E0;
	// lwz r3,2428(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2428);
	// blr 
	return;
loc_821086E0:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x821086f0
	if (!ctx.cr6.eq) goto loc_821086F0;
	// lwz r3,3644(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3644);
	// blr 
	return;
loc_821086F0:
	// lwz r3,1228(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1228);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821086F8"))) PPC_WEAK_FUNC(sub_821086F8);
PPC_FUNC_IMPL(__imp__sub_821086F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,3892(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3892);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8210870c
	if (!ctx.cr6.eq) goto loc_8210870C;
	// lwz r3,2412(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2412);
	// blr 
	return;
loc_8210870C:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8210871c
	if (!ctx.cr6.eq) goto loc_8210871C;
	// lwz r3,3628(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3628);
	// blr 
	return;
loc_8210871C:
	// lwz r3,1212(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1212);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82108724"))) PPC_WEAK_FUNC(sub_82108724);
PPC_FUNC_IMPL(__imp__sub_82108724) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,140(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8210872C"))) PPC_WEAK_FUNC(sub_8210872C);
PPC_FUNC_IMPL(__imp__sub_8210872C) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,236(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 236);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82108734"))) PPC_WEAK_FUNC(sub_82108734);
PPC_FUNC_IMPL(__imp__sub_82108734) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,268(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8210873C"))) PPC_WEAK_FUNC(sub_8210873C);
PPC_FUNC_IMPL(__imp__sub_8210873C) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,284(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 284);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82108744"))) PPC_WEAK_FUNC(sub_82108744);
PPC_FUNC_IMPL(__imp__sub_82108744) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,300(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 300);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8210874C"))) PPC_WEAK_FUNC(sub_8210874C);
PPC_FUNC_IMPL(__imp__sub_8210874C) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,316(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 316);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82108754"))) PPC_WEAK_FUNC(sub_82108754);
PPC_FUNC_IMPL(__imp__sub_82108754) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,332(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 332);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8210875C"))) PPC_WEAK_FUNC(sub_8210875C);
PPC_FUNC_IMPL(__imp__sub_8210875C) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,380(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 380);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82108764"))) PPC_WEAK_FUNC(sub_82108764);
PPC_FUNC_IMPL(__imp__sub_82108764) {
	PPC_FUNC_PROLOGUE();
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8210876C"))) PPC_WEAK_FUNC(sub_8210876C);
PPC_FUNC_IMPL(__imp__sub_8210876C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82108770"))) PPC_WEAK_FUNC(sub_82108770);
PPC_FUNC_IMPL(__imp__sub_82108770) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r11,0
	ctx.r11.s64 = 0;
	// lhz r10,2(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// beq cr6,0x82108870
	if (ctx.cr6.eq) goto loc_82108870;
	// fabs f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f13,-1576(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -1576);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82108864
	if (!ctx.cr6.gt) goto loc_82108864;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x821088b0
	if (ctx.cr6.eq) goto loc_821088B0;
	// fabs f0,f1
	ctx.f0.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r10,r11,12440
	ctx.r10.s64 = ctx.r11.s64 + 12440;
	// lfs f12,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bgt cr6,0x821087cc
	if (ctx.cr6.gt) goto loc_821087CC;
	// bso cr6,0x821087cc
	if (ctx.cr6.so) goto loc_821087CC;
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f2
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f2.f64));
	// stfs f13,8(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// b 0x82108828
	goto loc_82108828;
loc_821087CC:
	// fabs f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lfs f13,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x821087f4
	if (ctx.cr6.lt) goto loc_821087F4;
	// bso cr6,0x821087f4
	if (ctx.cr6.so) goto loc_821087F4;
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fnmsubs f11,f2,f0,f12
	ctx.f11.f64 = double(float(-(ctx.f2.f64 * ctx.f0.f64 - ctx.f12.f64)));
	// stfs f11,8(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// b 0x82108828
	goto loc_82108828;
loc_821087F4:
	// fabs f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f10,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,-27244(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27244);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fsubs f9,f13,f12
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f13,13860(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 13860);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// lfs f13,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f7,f8,f0,f13
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fnmsubs f6,f7,f2,f10
	ctx.f6.f64 = double(float(-(ctx.f7.f64 * ctx.f2.f64 - ctx.f10.f64)));
	// stfs f6,8(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
loc_82108828:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bge cr6,0x821088b0
	if (!ctx.cr6.lt) goto loc_821088B0;
	// lfs f0,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// li r9,1
	ctx.r9.s64 = 1;
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// sth r9,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r9.u16);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x821088b0
	if (!ctx.cr6.lt) goto loc_821088B0;
	// stfs f13,8(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f1,4(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// blr 
	return;
loc_82108864:
	// sth r11,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r11.u16);
	// stfs f1,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// blr 
	return;
loc_82108870:
	// lfs f5,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fabs f13,f5
	ctx.f13.u64 = ctx.f5.u64 & ~0x8000000000000000;
	// addi r11,r11,12440
	ctx.r11.s64 = ctx.r11.s64 + 12440;
	// lfs f0,-8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x821088b0
	if (!ctx.cr6.lt) goto loc_821088B0;
	// fabs f13,f1
	ctx.f13.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x821088b0
	if (ctx.cr6.lt) goto loc_821088B0;
	// bso cr6,0x821088b0
	if (ctx.cr6.so) goto loc_821088B0;
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// sth r10,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r10.u16);
	// sth r10,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r10.u16);
loc_821088B0:
	// stfs f1,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821088B8"))) PPC_WEAK_FUNC(sub_821088B8);
PPC_FUNC_IMPL(__imp__sub_821088B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821088d8
	if (ctx.cr6.eq) goto loc_821088D8;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r4,r1,-16
	ctx.r4.s64 = ctx.r1.s64 + -16;
	// b 0x821088e4
	goto loc_821088E4;
loc_821088D8:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r4,r1,-12
	ctx.r4.s64 = ctx.r1.s64 + -12;
loc_821088E4:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lhz r7,296(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 296);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,300(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 300);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r11,12428
	ctx.r9.s64 = ctx.r11.s64 + 12428;
	// lfs f13,312(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 312);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// addi r31,r9,60
	ctx.r31.s64 = ctx.r9.s64 + 60;
	// stfs f13,-16(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// addi r8,r9,60
	ctx.r8.s64 = ctx.r9.s64 + 60;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// lwzx r10,r10,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// lwzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r10,r3
	ctx.r8.u64 = ctx.r10.u64 + ctx.r3.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,2864(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2864);
	ctx.f10.f64 = double(temp.f32);
	// bne cr6,0x82108958
	if (!ctx.cr6.eq) goto loc_82108958;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
loc_82108958:
	// lhz r7,308(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 308);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8210896c
	if (!ctx.cr6.eq) goto loc_8210896C;
	// fmr f13,f10
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f10.f64;
	// stfs f13,-16(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
loc_8210896C:
	// lhz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8210897c
	if (!ctx.cr6.eq) goto loc_8210897C;
	// fmr f11,f10
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f10.f64;
loc_8210897C:
	// lhz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8210898c
	if (!ctx.cr6.eq) goto loc_8210898C;
	// fmr f12,f10
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f10.f64;
loc_8210898C:
	// fabs f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x821089a4
	if (!ctx.cr6.gt) goto loc_821089A4;
	// stfs f10,-16(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// b 0x821089a8
	goto loc_821089A8;
loc_821089A4:
	// stfs f10,-12(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
loc_821089A8:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fsubs f0,f12,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,13864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 13864);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// lfs f12,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// bge cr6,0x821089dc
	if (!ctx.cr6.lt) goto loc_821089DC;
	// fadds f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,-1628(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1628);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fnmsubs f0,f13,f13,f0
	ctx.f0.f64 = double(float(-(ctx.f13.f64 * ctx.f13.f64 - ctx.f0.f64)));
	// b 0x821089f8
	goto loc_821089F8;
loc_821089DC:
	// fcmpu cr6,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x821089f8
	if (!ctx.cr6.gt) goto loc_821089F8;
	// fsubs f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,-1628(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1628);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
loc_821089F8:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,-12136(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12136);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82108a18
	if (ctx.cr6.lt) goto loc_82108A18;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82108a1c
	if (!ctx.cr6.gt) goto loc_82108A1C;
loc_82108A18:
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64;
loc_82108A1C:
	// stfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// cmpw cr6,r5,r6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82108a44
	if (!ctx.cr6.eq) goto loc_82108A44;
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// blt cr6,0x82108a50
	if (ctx.cr6.lt) goto loc_82108A50;
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82108A44:
	// fcmpu cr6,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bgt cr6,0x82108a50
	if (ctx.cr6.gt) goto loc_82108A50;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82108A50:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82108A5C"))) PPC_WEAK_FUNC(sub_82108A5C);
PPC_FUNC_IMPL(__imp__sub_82108A5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82108A60"))) PPC_WEAK_FUNC(sub_82108A60);
PPC_FUNC_IMPL(__imp__sub_82108A60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,12488
	ctx.r11.s64 = ctx.r11.s64 + 12488;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r3
	ctx.r7.u64 = ctx.r11.u64 + ctx.r3.u64;
	// sth r9,10(r7)
	PPC_STORE_U16(ctx.r7.u32 + 10, ctx.r9.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82108A8C"))) PPC_WEAK_FUNC(sub_82108A8C);
PPC_FUNC_IMPL(__imp__sub_82108A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82108A90"))) PPC_WEAK_FUNC(sub_82108A90);
PPC_FUNC_IMPL(__imp__sub_82108A90) {
	PPC_FUNC_PROLOGUE();
	// li r10,1
	ctx.r10.s64 = 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r10,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r10.u8);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82108AAC"))) PPC_WEAK_FUNC(sub_82108AAC);
PPC_FUNC_IMPL(__imp__sub_82108AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82108AB0"))) PPC_WEAK_FUNC(sub_82108AB0);
PPC_FUNC_IMPL(__imp__sub_82108AB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// stfs f1,32320(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32320, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82108ABC"))) PPC_WEAK_FUNC(sub_82108ABC);
PPC_FUNC_IMPL(__imp__sub_82108ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82108AC0"))) PPC_WEAK_FUNC(sub_82108AC0);
PPC_FUNC_IMPL(__imp__sub_82108AC0) {
	PPC_FUNC_PROLOGUE();
	// li r11,57
	ctx.r11.s64 = 57;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82108ACC"))) PPC_WEAK_FUNC(sub_82108ACC);
PPC_FUNC_IMPL(__imp__sub_82108ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82108AD0"))) PPC_WEAK_FUNC(sub_82108AD0);
PPC_FUNC_IMPL(__imp__sub_82108AD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// lbz r9,23631(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 23631);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stb r8,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r8.u8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// bne cr6,0x82108afc
	if (!ctx.cr6.eq) goto loc_82108AFC;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// stb r9,23631(r11)
	PPC_STORE_U8(ctx.r11.u32 + 23631, ctx.r9.u8);
loc_82108AFC:
	// stb r10,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, ctx.r10.u8);
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// stw r8,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82108B0C"))) PPC_WEAK_FUNC(sub_82108B0C);
PPC_FUNC_IMPL(__imp__sub_82108B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82108B10"))) PPC_WEAK_FUNC(sub_82108B10);
PPC_FUNC_IMPL(__imp__sub_82108B10) {
	PPC_FUNC_PROLOGUE();
	// li r11,57
	ctx.r11.s64 = 57;
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82108B1C"))) PPC_WEAK_FUNC(sub_82108B1C);
PPC_FUNC_IMPL(__imp__sub_82108B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82108B20"))) PPC_WEAK_FUNC(sub_82108B20);
PPC_FUNC_IMPL(__imp__sub_82108B20) {
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
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82108B40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82108b78
	if (ctx.cr6.eq) goto loc_82108B78;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lis r8,37
	ctx.r8.s64 = 2424832;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r7,r8,49146
	ctx.r7.u64 = ctx.r8.u64 | 49146;
	// li r3,1
	ctx.r3.s64 = 1;
	// stbx r10,r11,r7
	PPC_STORE_U8(ctx.r11.u32 + ctx.r7.u32, ctx.r10.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82108B78:
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

__attribute__((alias("__imp__sub_82108B8C"))) PPC_WEAK_FUNC(sub_82108B8C);
PPC_FUNC_IMPL(__imp__sub_82108B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82108B90"))) PPC_WEAK_FUNC(sub_82108B90);
PPC_FUNC_IMPL(__imp__sub_82108B90) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
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

__attribute__((alias("__imp__sub_82108BB0"))) PPC_WEAK_FUNC(sub_82108BB0);
PPC_FUNC_IMPL(__imp__sub_82108BB0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82108BB4"))) PPC_WEAK_FUNC(sub_82108BB4);
PPC_FUNC_IMPL(__imp__sub_82108BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82108BB8"))) PPC_WEAK_FUNC(sub_82108BB8);
PPC_FUNC_IMPL(__imp__sub_82108BB8) {
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
	// bl 0x821016c8
	ctx.lr = 0x82108BD0;
	sub_821016C8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r31,6936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6936, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_82108BEC"))) PPC_WEAK_FUNC(sub_82108BEC);
PPC_FUNC_IMPL(__imp__sub_82108BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82108BF0"))) PPC_WEAK_FUNC(sub_82108BF0);
PPC_FUNC_IMPL(__imp__sub_82108BF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r11,r11,13096
	ctx.r11.s64 = ctx.r11.s64 + 13096;
	// lwz r3,6936(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6936);
	// b 0x820fad48
	sub_820FAD48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82108C00"))) PPC_WEAK_FUNC(sub_82108C00);
PPC_FUNC_IMPL(__imp__sub_82108C00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r11,r11,13096
	ctx.r11.s64 = ctx.r11.s64 + 13096;
	// lwz r3,6936(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6936);
	// b 0x820fad68
	sub_820FAD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82108C10"))) PPC_WEAK_FUNC(sub_82108C10);
PPC_FUNC_IMPL(__imp__sub_82108C10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82108C18;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,27
	ctx.r11.s64 = 27;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r11,12440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12440, ctx.r11.u32);
	// beq cr6,0x82108c44
	if (ctx.cr6.eq) goto loc_82108C44;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r31,12460
	ctx.r3.s64 = ctx.r31.s64 + 12460;
	// bl 0x8259d2a0
	ctx.lr = 0x82108C44;
	sub_8259D2A0(ctx, base);
loc_82108C44:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82360f10
	ctx.lr = 0x82108C4C;
	sub_82360F10(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82364000
	ctx.lr = 0x82108C58;
	sub_82364000(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r10,12444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12444, ctx.r10.u32);
	// beq cr6,0x82108c78
	if (ctx.cr6.eq) goto loc_82108C78;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r31,12476
	ctx.r3.s64 = ctx.r31.s64 + 12476;
	// bl 0x82361f88
	ctx.lr = 0x82108C78;
	sub_82361F88(ctx, base);
loc_82108C78:
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r9,7
	ctx.r9.s64 = 458752;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// ori r8,r9,16271
	ctx.r8.u64 = ctx.r9.u64 | 16271;
	// lbzx r7,r11,r8
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// addi r10,r11,11600
	ctx.r10.s64 = ctx.r11.s64 + 11600;
	// beq cr6,0x82108cb4
	if (ctx.cr6.eq) goto loc_82108CB4;
	// lwz r11,552(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 552);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82108cb4
	if (ctx.cr6.eq) goto loc_82108CB4;
	// ld r6,24(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// std r6,12448(r31)
	PPC_STORE_U64(ctx.r31.u32 + 12448, ctx.r6.u64);
	// b 0x82108ccc
	goto loc_82108CCC;
loc_82108CB4:
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lis r5,34
	ctx.r5.s64 = 2228224;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// ori r4,r5,36952
	ctx.r4.u64 = ctx.r5.u64 | 36952;
	// ldx r11,r11,r4
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r4.u32);
	// std r11,12448(r31)
	PPC_STORE_U64(ctx.r31.u32 + 12448, ctx.r11.u64);
loc_82108CCC:
	// lwz r11,320(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 320);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r11,12456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12456, ctx.r11.u32);
	// beq cr6,0x82108cec
	if (ctx.cr6.eq) goto loc_82108CEC;
	// ld r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// std r3,12432(r31)
	PPC_STORE_U64(ctx.r31.u32 + 12432, ctx.r3.u64);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82108CEC:
	// li r11,0
	ctx.r11.s64 = 0;
	// std r11,12432(r31)
	PPC_STORE_U64(ctx.r31.u32 + 12432, ctx.r11.u64);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82108CFC"))) PPC_WEAK_FUNC(sub_82108CFC);
PPC_FUNC_IMPL(__imp__sub_82108CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82108D00"))) PPC_WEAK_FUNC(sub_82108D00);
PPC_FUNC_IMPL(__imp__sub_82108D00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82108D08;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// stw r11,12544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12544, ctx.r11.u32);
	// bl 0x82108c10
	ctx.lr = 0x82108D28;
	sub_82108C10(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82360f10
	ctx.lr = 0x82108D30;
	sub_82360F10(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82364000
	ctx.lr = 0x82108D3C;
	sub_82364000(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,12548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12548, ctx.r9.u32);
	// sth r11,12552(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12552, ctx.r11.u16);
	// stb r11,12555(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12555, ctx.r11.u8);
	// stb r11,12556(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12556, ctx.r11.u8);
	// stb r11,12554(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12554, ctx.r11.u8);
	// stw r11,12684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12684, ctx.r11.u32);
	// stb r11,12688(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12688, ctx.r11.u8);
	// beq cr6,0x82108d74
	if (ctx.cr6.eq) goto loc_82108D74;
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r8,12555(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12555, ctx.r8.u8);
loc_82108D74:
	// clrlwi r7,r29,24
	ctx.r7.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82108d8c
	if (ctx.cr6.eq) goto loc_82108D8C;
	// lbz r6,12555(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12555);
	// ori r5,r6,2
	ctx.r5.u64 = ctx.r6.u64 | 2;
	// stb r5,12555(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12555, ctx.r5.u8);
loc_82108D8C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82108D94"))) PPC_WEAK_FUNC(sub_82108D94);
PPC_FUNC_IMPL(__imp__sub_82108D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82108D98"))) PPC_WEAK_FUNC(sub_82108D98);
PPC_FUNC_IMPL(__imp__sub_82108D98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82108DA0;
	__savegprlr_29(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
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
	// bl 0x82402fb8
	ctx.lr = 0x82108DB8;
	sub_82402FB8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82402ff8
	ctx.lr = 0x82108DC8;
	sub_82402FF8(ctx, base);
	// li r5,33
	ctx.r5.s64 = 33;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824030d0
	ctx.lr = 0x82108DD8;
	sub_824030D0(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82108DE0"))) PPC_WEAK_FUNC(sub_82108DE0);
PPC_FUNC_IMPL(__imp__sub_82108DE0) {
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
	// li r5,36
	ctx.r5.s64 = 36;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x8259d2a0
	ctx.lr = 0x82108E04;
	sub_8259D2A0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stb r30,35(r31)
	PPC_STORE_U8(ctx.r31.u32 + 35, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,13884
	ctx.r4.s64 = ctx.r11.s64 + 13884;
	// bl 0x8259dbe0
	ctx.lr = 0x82108E18;
	sub_8259DBE0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,3672
	ctx.r4.s64 = ctx.r11.s64 + 3672;
	// bl 0x8259dbe0
	ctx.lr = 0x82108E28;
	sub_8259DBE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82108e38
	if (ctx.cr6.eq) goto loc_82108E38;
	// bl 0x8259dbd0
	ctx.lr = 0x82108E34;
	sub_8259DBD0(ctx, base);
	// b 0x82108e3c
	goto loc_82108E3C;
loc_82108E38:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82108E3C:
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

__attribute__((alias("__imp__sub_82108E54"))) PPC_WEAK_FUNC(sub_82108E54);
PPC_FUNC_IMPL(__imp__sub_82108E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82108E58"))) PPC_WEAK_FUNC(sub_82108E58);
PPC_FUNC_IMPL(__imp__sub_82108E58) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// addi r5,r10,13888
	ctx.r5.s64 = ctx.r10.s64 + 13888;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// b 0x8259da78
	sub_8259DA78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82108E78"))) PPC_WEAK_FUNC(sub_82108E78);
PPC_FUNC_IMPL(__imp__sub_82108E78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r9,r10,14,0,17
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0xFFFFC000;
	// rlwinm r10,r8,14,0,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 14) & 0xFFFFC000;
	// lwz r11,23660(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23660);
	// lwz r11,12136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12136);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// lbz r7,12555(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 12555);
	// rlwinm r6,r7,0,29,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r6,4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 4, ctx.xer);
	// beq cr6,0x82108eb4
	if (ctx.cr6.eq) goto loc_82108EB4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82108EB4:
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82108ec8
	if (ctx.cr6.eq) goto loc_82108EC8;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82108EC8:
	// lbz r3,12555(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12555);
	// rlwinm r11,r3,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82108ee0
	if (ctx.cr6.eq) goto loc_82108EE0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82108EE0:
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82108ef4
	if (ctx.cr6.eq) goto loc_82108EF4;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82108EF4:
	// addi r4,r10,12460
	ctx.r4.s64 = ctx.r10.s64 + 12460;
	// addi r3,r9,12460
	ctx.r3.s64 = ctx.r9.s64 + 12460;
	// b 0x8259cce0
	sub_8259CCE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82108F00"))) PPC_WEAK_FUNC(sub_82108F00);
PPC_FUNC_IMPL(__imp__sub_82108F00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r9,r10,14,0,17
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0xFFFFC000;
	// rlwinm r10,r8,14,0,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 14) & 0xFFFFC000;
	// lwz r11,23660(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23660);
	// lwz r11,12136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12136);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lbz r7,12555(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 12555);
	// rlwinm r6,r7,0,29,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r6,4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 4, ctx.xer);
	// beq cr6,0x82108f3c
	if (ctx.cr6.eq) goto loc_82108F3C;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82108F3C:
	// clrlwi r4,r10,24
	ctx.r4.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82108f50
	if (ctx.cr6.eq) goto loc_82108F50;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82108F50:
	// lbz r3,12555(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12555);
	// rlwinm r10,r3,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// beq cr6,0x82108f68
	if (ctx.cr6.eq) goto loc_82108F68;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82108F68:
	// clrlwi r7,r10,24
	ctx.r7.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82108f7c
	if (ctx.cr6.eq) goto loc_82108F7C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82108F7C:
	// lwz r11,12444(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12444);
	// lwz r10,12444(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12444);
	// subf r3,r11,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r11.s64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82108F8C"))) PPC_WEAK_FUNC(sub_82108F8C);
PPC_FUNC_IMPL(__imp__sub_82108F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82108F90"))) PPC_WEAK_FUNC(sub_82108F90);
PPC_FUNC_IMPL(__imp__sub_82108F90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r9,r10,14,0,17
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0xFFFFC000;
	// rlwinm r10,r8,14,0,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 14) & 0xFFFFC000;
	// lwz r11,23660(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23660);
	// lwz r11,12136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12136);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lbz r7,12555(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 12555);
	// rlwinm r6,r7,0,29,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r6,4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 4, ctx.xer);
	// beq cr6,0x82108fcc
	if (ctx.cr6.eq) goto loc_82108FCC;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82108FCC:
	// clrlwi r4,r10,24
	ctx.r4.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82108fe0
	if (ctx.cr6.eq) goto loc_82108FE0;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82108FE0:
	// lbz r3,12555(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12555);
	// rlwinm r10,r3,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// beq cr6,0x82108ff8
	if (ctx.cr6.eq) goto loc_82108FF8;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82108FF8:
	// clrlwi r7,r10,24
	ctx.r7.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8210900c
	if (ctx.cr6.eq) goto loc_8210900C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_8210900C:
	// lwz r11,12548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12548);
	// lwz r10,12548(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12548);
	// subf r3,r11,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r11.s64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8210901C"))) PPC_WEAK_FUNC(sub_8210901C);
PPC_FUNC_IMPL(__imp__sub_8210901C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82109020"))) PPC_WEAK_FUNC(sub_82109020);
PPC_FUNC_IMPL(__imp__sub_82109020) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r9,r10,14,0,17
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0xFFFFC000;
	// rlwinm r10,r8,14,0,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 14) & 0xFFFFC000;
	// lwz r11,23660(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23660);
	// lwz r11,12136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12136);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// lbz r7,12555(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 12555);
	// rlwinm r6,r7,0,29,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r6,4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 4, ctx.xer);
	// beq cr6,0x8210905c
	if (ctx.cr6.eq) goto loc_8210905C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8210905C:
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82109070
	if (ctx.cr6.eq) goto loc_82109070;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82109070:
	// lbz r3,12555(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12555);
	// rlwinm r11,r3,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82109088
	if (ctx.cr6.eq) goto loc_82109088;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82109088:
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8210909c
	if (ctx.cr6.eq) goto loc_8210909C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_8210909C:
	// lwz r6,12456(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12456);
	// lwz r5,12456(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12456);
	// subf r3,r5,r6
	ctx.r3.s64 = ctx.r6.s64 - ctx.r5.s64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821090AC"))) PPC_WEAK_FUNC(sub_821090AC);
PPC_FUNC_IMPL(__imp__sub_821090AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821090B0"))) PPC_WEAK_FUNC(sub_821090B0);
PPC_FUNC_IMPL(__imp__sub_821090B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r3,r10,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r10.s64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821090C0"))) PPC_WEAK_FUNC(sub_821090C0);
PPC_FUNC_IMPL(__imp__sub_821090C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,13460(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13460);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821090CC"))) PPC_WEAK_FUNC(sub_821090CC);
PPC_FUNC_IMPL(__imp__sub_821090CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821090D0"))) PPC_WEAK_FUNC(sub_821090D0);
PPC_FUNC_IMPL(__imp__sub_821090D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,13460(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13460);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// lwz r9,13464(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13464);
	// addi r11,r11,32424
	ctx.r11.s64 = ctx.r11.s64 + 32424;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwzx r6,r8,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r5,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821090FC"))) PPC_WEAK_FUNC(sub_821090FC);
PPC_FUNC_IMPL(__imp__sub_821090FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82109100"))) PPC_WEAK_FUNC(sub_82109100);
PPC_FUNC_IMPL(__imp__sub_82109100) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,13460(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13460);
	// lwz r10,13464(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13464);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r3,r9,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82109118"))) PPC_WEAK_FUNC(sub_82109118);
PPC_FUNC_IMPL(__imp__sub_82109118) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,3014
	ctx.r11.s64 = ctx.r4.s64 + 3014;
	// lwz r10,12136(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12136);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r3
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// rlwinm r11,r8,14,0,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 14) & 0xFFFFC000;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82109134"))) PPC_WEAK_FUNC(sub_82109134);
PPC_FUNC_IMPL(__imp__sub_82109134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82109138"))) PPC_WEAK_FUNC(sub_82109138);
PPC_FUNC_IMPL(__imp__sub_82109138) {
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
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// li r30,0
	ctx.r30.s64 = 0;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r3,r11,25864
	ctx.r3.s64 = ctx.r11.s64 + 25864;
	// stw r30,13508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13508, ctx.r30.u32);
	// bl 0x822236f8
	ctx.lr = 0x8210916C;
	sub_822236F8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r30,13453(r31)
	PPC_STORE_U8(ctx.r31.u32 + 13453, ctx.r30.u8);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stb r11,11081(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11081, ctx.r11.u8);
	// stw r10,12144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12144, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82109198"))) PPC_WEAK_FUNC(sub_82109198);
PPC_FUNC_IMPL(__imp__sub_82109198) {
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
	// lwz r11,13532(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13532);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821091d0
	if (ctx.cr6.eq) goto loc_821091D0;
	// lwz r4,13536(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13536);
	// li r3,1
	ctx.r3.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821091C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,13532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13532, ctx.r11.u32);
loc_821091D0:
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

__attribute__((alias("__imp__sub_821091E4"))) PPC_WEAK_FUNC(sub_821091E4);
PPC_FUNC_IMPL(__imp__sub_821091E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821091E8"))) PPC_WEAK_FUNC(sub_821091E8);
PPC_FUNC_IMPL(__imp__sub_821091E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,11480(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11480);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x82109238
	if (ctx.cr6.gt) {
		sub_82109238(ctx, base);
		return;
	}
	// lis r12,-32239
	ctx.r12.s64 = -2112815104;
	// addi r12,r12,-28148
	ctx.r12.s64 = ctx.r12.s64 + -28148;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		// ERROR: 0x82109230
		return;
	case 1:
		// ERROR: 0x82109230
		return;
	case 2:
		// ERROR: 0x82109230
		return;
	case 3:
		// ERROR: 0x82109238
		return;
	case 4:
		// ERROR: 0x82109238
		return;
	case 5:
		// ERROR: 0x82109238
		return;
	case 6:
		// ERROR: 0x82109238
		return;
	case 7:
		// ERROR: 0x82109238
		return;
	case 8:
		// ERROR: 0x82109238
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_8210920C"))) PPC_WEAK_FUNC(sub_8210920C);
PPC_FUNC_IMPL(__imp__sub_8210920C) {
	PPC_FUNC_PROLOGUE();
	// lwz r16,-28112(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -28112);
	// lwz r16,-28112(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -28112);
	// lwz r16,-28112(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -28112);
	// lwz r16,-28104(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -28104);
	// lwz r16,-28104(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -28104);
	// lwz r16,-28104(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -28104);
	// lwz r16,-28104(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -28104);
	// lwz r16,-28104(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -28104);
	// lwz r16,-28104(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -28104);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82109238"))) PPC_WEAK_FUNC(sub_82109238);
PPC_FUNC_IMPL(__imp__sub_82109238) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82109240"))) PPC_WEAK_FUNC(sub_82109240);
PPC_FUNC_IMPL(__imp__sub_82109240) {
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
	// lbz r11,13452(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 13452);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8210926c
	if (ctx.cr6.eq) goto loc_8210926C;
	// stb r30,13452(r31)
	PPC_STORE_U8(ctx.r31.u32 + 13452, ctx.r30.u8);
loc_8210926C:
	// lwz r11,13508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13508);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82109298
	if (ctx.cr6.eq) goto loc_82109298;
	// lwz r5,13512(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13512);
	// lwz r3,12144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12144);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82109288;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r30,13508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13508, ctx.r30.u32);
	// stw r10,12144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12144, ctx.r10.u32);
	// b 0x821092a0
	goto loc_821092A0;
loc_82109298:
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r9,12144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12144, ctx.r9.u32);
loc_821092A0:
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

__attribute__((alias("__imp__sub_821092B8"))) PPC_WEAK_FUNC(sub_821092B8);
PPC_FUNC_IMPL(__imp__sub_821092B8) {
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
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821092f0
	if (!ctx.cr6.eq) goto loc_821092F0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82109240
	ctx.lr = 0x821092EC;
	sub_82109240(ctx, base);
	// b 0x82109360
	goto loc_82109360;
loc_821092F0:
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82109320
	if (ctx.cr6.eq) goto loc_82109320;
	// lwz r9,13440(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13440);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r10,12136(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12136);
	// rlwinm r11,r9,14,0,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 14) & 0xFFFFC000;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r10,12552(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12552);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// sth r7,12552(r11)
	PPC_STORE_U16(ctx.r11.u32 + 12552, ctx.r7.u16);
	// stb r8,13448(r31)
	PPC_STORE_U8(ctx.r31.u32 + 13448, ctx.r8.u8);
loc_82109320:
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,-1452
	ctx.r3.s64 = ctx.r11.s64 + -1452;
	// bl 0x820fa120
	ctx.lr = 0x82109330;
	sub_820FA120(ctx, base);
	// lis r10,-32124
	ctx.r10.s64 = -2105278464;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,26080
	ctx.r10.s64 = ctx.r10.s64 + 26080;
	// lwz r5,12332(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12332);
	// addi r8,r4,-16384
	ctx.r8.s64 = ctx.r4.s64 + -16384;
	// addi r9,r31,12336
	ctx.r9.s64 = ctx.r31.s64 + 12336;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r10,20404
	ctx.r3.s64 = ctx.r10.s64 + 20404;
	// addi r7,r11,16384
	ctx.r7.s64 = ctx.r11.s64 + 16384;
	// bl 0x820fe868
	ctx.lr = 0x82109360;
	sub_820FE868(ctx, base);
loc_82109360:
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

__attribute__((alias("__imp__sub_82109378"))) PPC_WEAK_FUNC(sub_82109378);
PPC_FUNC_IMPL(__imp__sub_82109378) {
	PPC_FUNC_PROLOGUE();
	// addi r10,r4,3014
	ctx.r10.s64 = ctx.r4.s64 + 3014;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r9,12136(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12136);
	// lwzx r7,r8,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// rlwinm r10,r7,14,0,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 14) & 0xFFFFC000;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lbz r5,12555(r6)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r6.u32 + 12555);
	// rlwinm r4,r5,0,29,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// beq cr6,0x821093b0
	if (ctx.cr6.eq) goto loc_821093B0;
	// li r10,0
	ctx.r10.s64 = 0;
loc_821093B0:
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821093c4
	if (ctx.cr6.eq) goto loc_821093C4;
	// li r3,64
	ctx.r3.s64 = 64;
	// blr 
	return;
loc_821093C4:
	// lwz r11,11480(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11480);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// lis r12,-32239
	ctx.r12.s64 = -2112815104;
	// addi r12,r12,-27672
	ctx.r12.s64 = ctx.r12.s64 + -27672;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		// ERROR: 0x8210940C
		return;
	case 1:
		// ERROR: 0x82109414
		return;
	case 2:
		// ERROR: 0x82109420
		return;
	case 3:
		// ERROR: 0x8210941C
		return;
	case 4:
		// ERROR: 0x8210941C
		return;
	case 5:
		// ERROR: 0x8210941C
		return;
	case 6:
		// ERROR: 0x8210941C
		return;
	case 7:
		// ERROR: 0x8210941C
		return;
	case 8:
		// ERROR: 0x8210942C
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_821093E8"))) PPC_WEAK_FUNC(sub_821093E8);
PPC_FUNC_IMPL(__imp__sub_821093E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r16,-27636(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -27636);
	// lwz r16,-27628(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -27628);
	// lwz r16,-27616(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -27616);
	// lwz r16,-27620(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -27620);
	// lwz r16,-27620(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -27620);
	// lwz r16,-27620(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -27620);
	// lwz r16,-27620(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -27620);
	// lwz r16,-27620(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -27620);
	// lwz r16,-27604(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -27604);
	// li r3,20
	ctx.r3.s64 = 20;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82109414"))) PPC_WEAK_FUNC(sub_82109414);
PPC_FUNC_IMPL(__imp__sub_82109414) {
	PPC_FUNC_PROLOGUE();
	// li r3,22
	ctx.r3.s64 = 22;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8210941C"))) PPC_WEAK_FUNC(sub_8210941C);
PPC_FUNC_IMPL(__imp__sub_8210941C) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// ori r3,r8,28
	ctx.r3.u64 = ctx.r8.u64 | 28;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8210942C"))) PPC_WEAK_FUNC(sub_8210942C);
PPC_FUNC_IMPL(__imp__sub_8210942C) {
	PPC_FUNC_PROLOGUE();
	// li r3,29
	ctx.r3.s64 = 29;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82109434"))) PPC_WEAK_FUNC(sub_82109434);
PPC_FUNC_IMPL(__imp__sub_82109434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82109438"))) PPC_WEAK_FUNC(sub_82109438);
PPC_FUNC_IMPL(__imp__sub_82109438) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82109440;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r11,12144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12144);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x82109460
	if (ctx.cr6.eq) goto loc_82109460;
	// stb r29,13448(r31)
	PPC_STORE_U8(ctx.r31.u32 + 13448, ctx.r29.u8);
loc_82109460:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82109240
	ctx.lr = 0x8210946C;
	sub_82109240(ctx, base);
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82109484
	if (!ctx.cr6.eq) goto loc_82109484;
	// stw r29,13456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13456, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82109484:
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r11,-6648
	ctx.r3.s64 = ctx.r11.s64 + -6648;
	// bl 0x820fe130
	ctx.lr = 0x82109494;
	sub_820FE130(ctx, base);
	// lwz r9,13440(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13440);
	// lwz r10,12136(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12136);
	// li r8,0
	ctx.r8.s64 = 0;
	// rlwinm r11,r9,14,0,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 14) & 0xFFFFC000;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r8,13456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13456, ctx.r8.u32);
	// lbz r7,12555(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12555);
	// ori r6,r7,2
	ctx.r6.u64 = ctx.r7.u64 | 2;
	// stb r6,12555(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12555, ctx.r6.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821094C0"))) PPC_WEAK_FUNC(sub_821094C0);
PPC_FUNC_IMPL(__imp__sub_821094C0) {
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
	// lbz r11,13451(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 13451);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821094f8
	if (!ctx.cr6.eq) goto loc_821094F8;
loc_821094E0:
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
loc_821094F8:
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,-1452
	ctx.r3.s64 = ctx.r11.s64 + -1452;
	// bl 0x820fa120
	ctx.lr = 0x82109508;
	sub_820FA120(ctx, base);
	// addi r10,r31,12396
	ctx.r10.s64 = ctx.r31.s64 + 12396;
	// addi r9,r3,12396
	ctx.r9.s64 = ctx.r3.s64 + 12396;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x821094e0
	if (!ctx.cr6.eq) goto loc_821094E0;
	// ld r7,12432(r3)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r3.u32 + 12432);
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r8,12432(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 12432);
	// cmpld cr6,r8,r7
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r7.u64, ctx.xer);
	// bne cr6,0x82109530
	if (!ctx.cr6.eq) goto loc_82109530;
	// li r3,1
	ctx.r3.s64 = 1;
loc_82109530:
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

__attribute__((alias("__imp__sub_82109544"))) PPC_WEAK_FUNC(sub_82109544);
PPC_FUNC_IMPL(__imp__sub_82109544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82109548"))) PPC_WEAK_FUNC(sub_82109548);
PPC_FUNC_IMPL(__imp__sub_82109548) {
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
	// addi r31,r11,-1452
	ctx.r31.s64 = ctx.r11.s64 + -1452;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820fa138
	ctx.lr = 0x82109568;
	sub_820FA138(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,3672
	ctx.r4.s64 = ctx.r11.s64 + 3672;
	// bl 0x820f9708
	ctx.lr = 0x82109578;
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
	ctx.lr = 0x8210958C;
	sub_823247C0(ctx, base);
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

__attribute__((alias("__imp__sub_821095A0"))) PPC_WEAK_FUNC(sub_821095A0);
PPC_FUNC_IMPL(__imp__sub_821095A0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,13524(r3)
	PPC_STORE_U32(ctx.r3.u32 + 13524, ctx.r4.u32);
	// stw r5,13528(r3)
	PPC_STORE_U32(ctx.r3.u32 + 13528, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821095AC"))) PPC_WEAK_FUNC(sub_821095AC);
PPC_FUNC_IMPL(__imp__sub_821095AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821095B0"))) PPC_WEAK_FUNC(sub_821095B0);
PPC_FUNC_IMPL(__imp__sub_821095B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x82109610
	if (!ctx.cr6.gt) goto loc_82109610;
	// addi r7,r3,4
	ctx.r7.s64 = ctx.r3.s64 + 4;
loc_821095C4:
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_821095CC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x821095f0
	if (ctx.cr6.eq) goto loc_821095F0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x821095cc
	if (ctx.cr6.eq) goto loc_821095CC;
loc_821095F0:
	// cntlzw r3,r8
	ctx.r3.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r9,r3,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82109618
	if (!ctx.cr6.eq) goto loc_82109618;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,184
	ctx.r7.s64 = ctx.r7.s64 + 184;
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x821095c4
	if (ctx.cr6.lt) goto loc_821095C4;
loc_82109610:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82109618:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82109620"))) PPC_WEAK_FUNC(sub_82109620);
PPC_FUNC_IMPL(__imp__sub_82109620) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82109628:
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82109654
	if (!ctx.cr6.gt) goto loc_82109654;
loc_82109638:
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x82109650
	if (ctx.cr6.eq) goto loc_82109650;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82109638
	if (ctx.cr6.lt) goto loc_82109638;
	// b 0x82109654
	goto loc_82109654;
loc_82109650:
	// li r9,1
	ctx.r9.s64 = 1;
loc_82109654:
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// blt cr6,0x82109628
	if (ctx.cr6.lt) goto loc_82109628;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82109674"))) PPC_WEAK_FUNC(sub_82109674);
PPC_FUNC_IMPL(__imp__sub_82109674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82109678"))) PPC_WEAK_FUNC(sub_82109678);
PPC_FUNC_IMPL(__imp__sub_82109678) {
	PPC_FUNC_PROLOGUE();
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// lwz r4,944(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 944);
	// lwz r10,940(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 940);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82109690"))) PPC_WEAK_FUNC(sub_82109690);
PPC_FUNC_IMPL(__imp__sub_82109690) {
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
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x82109704
	if (!ctx.cr6.gt) goto loc_82109704;
	// addi r7,r3,4
	ctx.r7.s64 = ctx.r3.s64 + 4;
loc_821096B4:
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_821096BC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x821096e0
	if (ctx.cr6.eq) goto loc_821096E0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x821096bc
	if (ctx.cr6.eq) goto loc_821096BC;
loc_821096E0:
	// cntlzw r11,r8
	ctx.r11.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r8,r11,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8210971c
	if (!ctx.cr6.eq) goto loc_8210971C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,184
	ctx.r7.s64 = ctx.r7.s64 + 184;
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821096b4
	if (ctx.cr6.lt) goto loc_821096B4;
loc_82109704:
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
loc_8210971C:
	// addi r11,r5,-1
	ctx.r11.s64 = ctx.r5.s64 + -1;
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lbz r10,53(r7)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + 53);
	// extsb r31,r10
	ctx.r31.s64 = ctx.r10.s8;
	// bge cr6,0x82109748
	if (!ctx.cr6.lt) goto loc_82109748;
	// subf r9,r6,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r6.s64;
	// addi r4,r7,184
	ctx.r4.s64 = ctx.r7.s64 + 184;
	// mulli r5,r9,184
	ctx.r5.s64 = ctx.r9.s64 * 184;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x8259dd00
	ctx.lr = 0x82109748;
	sub_8259DD00(ctx, base);
loc_82109748:
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

__attribute__((alias("__imp__sub_82109760"))) PPC_WEAK_FUNC(sub_82109760);
PPC_FUNC_IMPL(__imp__sub_82109760) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baec
	ctx.lr = 0x82109768;
	__savegprlr_25(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// ori r9,r10,26384
	ctx.r9.u64 = ctx.r10.u64 | 26384;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// stw r25,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r25.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8210983c
	if (!ctx.cr6.gt) goto loc_8210983C;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r29,r31,556
	ctx.r29.s64 = ctx.r31.s64 + 556;
	// addi r27,r11,3672
	ctx.r27.s64 = ctx.r11.s64 + 3672;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r26,r11,13884
	ctx.r26.s64 = ctx.r11.s64 + 13884;
loc_821097AC:
	// li r5,36
	ctx.r5.s64 = 36;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// bl 0x8259d2a0
	ctx.lr = 0x821097C0;
	sub_8259D2A0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stb r25,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, ctx.r25.u8);
	// bl 0x8259dbe0
	ctx.lr = 0x821097D0;
	sub_8259DBE0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8259dbe0
	ctx.lr = 0x821097DC;
	sub_8259DBE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821097ec
	if (ctx.cr6.eq) goto loc_821097EC;
	// bl 0x8259dbd0
	ctx.lr = 0x821097E8;
	sub_8259DBD0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_821097EC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,9
	ctx.r9.s64 = 9;
	// mulli r8,r11,184
	ctx.r8.s64 = ctx.r11.s64 * 184;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + ctx.r31.u64;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82109814:
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82109814
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82109814;
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// stb r30,53(r8)
	PPC_STORE_U8(ctx.r8.u32 + 53, ctx.r30.u8);
	// addi r29,r29,128
	ctx.r29.s64 = ctx.r29.s64 + 128;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x821097ac
	if (!ctx.cr6.eq) goto loc_821097AC;
loc_8210983C:
	// lwz r4,944(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 944);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,940(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 940);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82109850;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82109858"))) PPC_WEAK_FUNC(sub_82109858);
PPC_FUNC_IMPL(__imp__sub_82109858) {
	PPC_FUNC_PROLOGUE();
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x821098b8
	if (!ctx.cr6.gt) goto loc_821098B8;
	// addi r7,r3,4
	ctx.r7.s64 = ctx.r3.s64 + 4;
loc_8210986C:
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_82109874:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x82109898
	if (ctx.cr6.eq) goto loc_82109898;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82109874
	if (ctx.cr6.eq) goto loc_82109874;
loc_82109898:
	// cntlzw r3,r8
	ctx.r3.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r9,r3,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821098c0
	if (!ctx.cr6.eq) goto loc_821098C0;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,184
	ctx.r7.s64 = ctx.r7.s64 + 184;
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x8210986c
	if (ctx.cr6.lt) goto loc_8210986C;
loc_821098B8:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_821098C0:
	// lbz r8,53(r7)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r7.u32 + 53);
	// extsb r3,r8
	ctx.r3.s64 = ctx.r8.s8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821098CC"))) PPC_WEAK_FUNC(sub_821098CC);
PPC_FUNC_IMPL(__imp__sub_821098CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821098D0"))) PPC_WEAK_FUNC(sub_821098D0);
PPC_FUNC_IMPL(__imp__sub_821098D0) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82109904
	if (ctx.cr6.eq) goto loc_82109904;
	// lwz r11,1092(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1092);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,12396
	ctx.r4.s64 = ctx.r11.s64 + 12396;
	// bl 0x82109690
	ctx.lr = 0x82109904;
	sub_82109690(ctx, base);
loc_82109904:
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// lwz r4,944(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 944);
	// lwz r10,940(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 940);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8210991C;
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

__attribute__((alias("__imp__sub_82109934"))) PPC_WEAK_FUNC(sub_82109934);
PPC_FUNC_IMPL(__imp__sub_82109934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82109938"))) PPC_WEAK_FUNC(sub_82109938);
PPC_FUNC_IMPL(__imp__sub_82109938) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x82109940;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,17
	ctx.r5.s64 = 17;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lbz r11,2(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// mulli r11,r11,184
	ctx.r11.s64 = ctx.r11.s64 * 184;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// bl 0x8259d2a0
	ctx.lr = 0x8210996C;
	sub_8259D2A0(ctx, base);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stb r29,53(r31)
	PPC_STORE_U8(ctx.r31.u32 + 53, ctx.r29.u8);
	// li r9,9
	ctx.r9.s64 = 9;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82109980:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82109980
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82109980;
	// lbz r11,2(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stb r6,3(r30)
	PPC_STORE_U8(ctx.r30.u32 + 3, ctx.r6.u8);
	// stb r5,2(r30)
	PPC_STORE_U8(ctx.r30.u32 + 2, ctx.r5.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821099B0"))) PPC_WEAK_FUNC(sub_821099B0);
PPC_FUNC_IMPL(__imp__sub_821099B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x821099B8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lbz r11,2(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 2);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82109a54
	if (ctx.cr6.eq) goto loc_82109A54;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
loc_821099E0:
	// addi r4,r31,36
	ctx.r4.s64 = ctx.r31.s64 + 36;
	// lbz r10,17(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 17);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// cmpw cr6,r26,r9
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82109a40
	if (!ctx.cr6.eq) goto loc_82109A40;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8259cce0
	ctx.lr = 0x821099FC;
	sub_8259CCE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82109a40
	if (!ctx.cr6.eq) goto loc_82109A40;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82109A0C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x82109a30
	if (ctx.cr6.eq) goto loc_82109A30;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82109a0c
	if (ctx.cr6.eq) goto loc_82109A0C;
loc_82109A30:
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r4,r7,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82109a60
	if (!ctx.cr6.eq) goto loc_82109A60;
loc_82109A40:
	// lbz r3,2(r29)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r29.u32 + 2);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,184
	ctx.r31.s64 = ctx.r31.s64 + 184;
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x821099e0
	if (ctx.cr6.lt) goto loc_821099E0;
loc_82109A54:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_82109A60:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82109A6C"))) PPC_WEAK_FUNC(sub_82109A6C);
PPC_FUNC_IMPL(__imp__sub_82109A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82109A70"))) PPC_WEAK_FUNC(sub_82109A70);
PPC_FUNC_IMPL(__imp__sub_82109A70) {
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
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x821099b0
	ctx.lr = 0x82109A88;
	sub_821099B0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82109aa8
	if (!ctx.cr6.eq) goto loc_82109AA8;
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
loc_82109AA8:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_82109AAC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x82109ad0
	if (ctx.cr6.eq) goto loc_82109AD0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82109aac
	if (ctx.cr6.eq) goto loc_82109AAC;
loc_82109AD0:
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
}

__attribute__((alias("__imp__sub_82109AF0"))) PPC_WEAK_FUNC(sub_82109AF0);
PPC_FUNC_IMPL(__imp__sub_82109AF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82109AF8;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r30,-32047
	ctx.r30.s64 = -2100232192;
	// addi r5,r11,15960
	ctx.r5.s64 = ctx.r11.s64 + 15960;
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r4,r11,32512
	ctx.r4.s64 = ctx.r11.s64 + 32512;
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r31,r11,32504
	ctx.r31.s64 = ctx.r11.s64 + 32504;
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r6,-56(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -56);
	// bl 0x823514f8
	ctx.lr = 0x82109B44;
	sub_823514F8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,-56(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -56);
	// addi r5,r11,15928
	ctx.r5.s64 = ctx.r11.s64 + 15928;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f31.f64 = double(temp.f32);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// addi r4,r11,32516
	ctx.r4.s64 = ctx.r11.s64 + 32516;
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x82109B80;
	sub_82351720(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r11,15908
	ctx.r5.s64 = ctx.r11.s64 + 15908;
	// lwz r6,-56(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -56);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r4,r11,32520
	ctx.r4.s64 = ctx.r11.s64 + 32520;
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x82109BB4;
	sub_82351720(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r11,15888
	ctx.r5.s64 = ctx.r11.s64 + 15888;
	// lwz r6,-56(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -56);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r4,r11,32524
	ctx.r4.s64 = ctx.r11.s64 + 32524;
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x82109BE8;
	sub_82351720(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r11,15844
	ctx.r5.s64 = ctx.r11.s64 + 15844;
	// lwz r6,-52(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -52);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r4,r11,32528
	ctx.r4.s64 = ctx.r11.s64 + 32528;
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x82109C1C;
	sub_82351720(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r5,r11,15796
	ctx.r5.s64 = ctx.r11.s64 + 15796;
	// lwz r6,-52(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -52);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r4,r11,32532
	ctx.r4.s64 = ctx.r11.s64 + 32532;
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x82109C50;
	sub_82351720(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r11,15756
	ctx.r5.s64 = ctx.r11.s64 + 15756;
	// lwz r6,-48(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -48);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r11,32536
	ctx.r4.s64 = ctx.r11.s64 + 32536;
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823514f8
	ctx.lr = 0x82109C84;
	sub_823514F8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r11,15724
	ctx.r5.s64 = ctx.r11.s64 + 15724;
	// lwz r6,-48(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -48);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r4,r11,32540
	ctx.r4.s64 = ctx.r11.s64 + 32540;
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x82109CB8;
	sub_82351720(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r11,15704
	ctx.r5.s64 = ctx.r11.s64 + 15704;
	// lwz r6,-48(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -48);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r4,r11,32544
	ctx.r4.s64 = ctx.r11.s64 + 32544;
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x82109CEC;
	sub_82351720(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r11,15684
	ctx.r5.s64 = ctx.r11.s64 + 15684;
	// lwz r6,-48(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -48);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r4,r11,32548
	ctx.r4.s64 = ctx.r11.s64 + 32548;
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x82109D20;
	sub_82351720(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r11,15648
	ctx.r5.s64 = ctx.r11.s64 + 15648;
	// lwz r6,-44(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -44);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r11,23920
	ctx.r4.s64 = ctx.r11.s64 + 23920;
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823514f8
	ctx.lr = 0x82109D54;
	sub_823514F8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r11,15616
	ctx.r5.s64 = ctx.r11.s64 + 15616;
	// lwz r6,-44(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -44);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r4,r11,32552
	ctx.r4.s64 = ctx.r11.s64 + 32552;
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x82109D88;
	sub_82351720(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,-44(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -44);
	// addi r5,r11,15596
	ctx.r5.s64 = ctx.r11.s64 + 15596;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r4,r11,32556
	ctx.r4.s64 = ctx.r11.s64 + 32556;
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x82109DBC;
	sub_82351720(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r11,15576
	ctx.r5.s64 = ctx.r11.s64 + 15576;
	// lwz r6,-44(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -44);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r4,r11,23924
	ctx.r4.s64 = ctx.r11.s64 + 23924;
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x82109DF0;
	sub_82351720(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r11,15544
	ctx.r5.s64 = ctx.r11.s64 + 15544;
	// lwz r6,-40(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -40);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r4,r11,32560
	ctx.r4.s64 = ctx.r11.s64 + 32560;
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x82109E24;
	sub_82351720(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r11,15512
	ctx.r5.s64 = ctx.r11.s64 + 15512;
	// lwz r6,-40(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -40);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r4,r11,32564
	ctx.r4.s64 = ctx.r11.s64 + 32564;
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x82109E58;
	sub_82351720(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r11,15472
	ctx.r5.s64 = ctx.r11.s64 + 15472;
	// lwz r6,-40(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -40);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r4,r11,32568
	ctx.r4.s64 = ctx.r11.s64 + 32568;
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x82109E8C;
	sub_82351720(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r11,15436
	ctx.r5.s64 = ctx.r11.s64 + 15436;
	// lwz r6,-40(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -40);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r4,r11,32572
	ctx.r4.s64 = ctx.r11.s64 + 32572;
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x82109EC0;
	sub_82351720(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r11,15400
	ctx.r5.s64 = ctx.r11.s64 + 15400;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r6,-36(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// addi r4,r11,23928
	ctx.r4.s64 = ctx.r11.s64 + 23928;
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823514f8
	ctx.lr = 0x82109EF4;
	sub_823514F8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r11,15360
	ctx.r5.s64 = ctx.r11.s64 + 15360;
	// lwz r6,-36(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r4,r11,32576
	ctx.r4.s64 = ctx.r11.s64 + 32576;
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x82109F28;
	sub_82351720(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r11,15336
	ctx.r5.s64 = ctx.r11.s64 + 15336;
	// lwz r6,-36(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r4,r11,32580
	ctx.r4.s64 = ctx.r11.s64 + 32580;
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x82109F5C;
	sub_82351720(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r11,15312
	ctx.r5.s64 = ctx.r11.s64 + 15312;
	// lwz r6,-36(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r4,r11,23932
	ctx.r4.s64 = ctx.r11.s64 + 23932;
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x82109F90;
	sub_82351720(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r11,15276
	ctx.r5.s64 = ctx.r11.s64 + 15276;
	// lwz r6,-28(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r11,32584
	ctx.r4.s64 = ctx.r11.s64 + 32584;
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823514f8
	ctx.lr = 0x82109FC4;
	sub_823514F8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r11,15244
	ctx.r5.s64 = ctx.r11.s64 + 15244;
	// lwz r6,-28(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r4,r11,32588
	ctx.r4.s64 = ctx.r11.s64 + 32588;
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x82109FF8;
	sub_82351720(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r5,r11,15224
	ctx.r5.s64 = ctx.r11.s64 + 15224;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r4,r11,32592
	ctx.r4.s64 = ctx.r11.s64 + 32592;
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r6,-28(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// bl 0x82351720
	ctx.lr = 0x8210A02C;
	sub_82351720(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r11,15204
	ctx.r5.s64 = ctx.r11.s64 + 15204;
	// lwz r6,-28(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r4,r11,32596
	ctx.r4.s64 = ctx.r11.s64 + 32596;
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x8210A060;
	sub_82351720(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r11,15180
	ctx.r5.s64 = ctx.r11.s64 + 15180;
	// lwz r6,-24(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r4,r11,32600
	ctx.r4.s64 = ctx.r11.s64 + 32600;
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x8210A094;
	sub_82351720(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r11,15160
	ctx.r5.s64 = ctx.r11.s64 + 15160;
	// lwz r6,-24(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r4,r11,32604
	ctx.r4.s64 = ctx.r11.s64 + 32604;
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x8210A0C8;
	sub_82351720(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r11,15120
	ctx.r5.s64 = ctx.r11.s64 + 15120;
	// lwz r6,-20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r11,23936
	ctx.r4.s64 = ctx.r11.s64 + 23936;
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823514f8
	ctx.lr = 0x8210A0FC;
	sub_823514F8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r11,15084
	ctx.r5.s64 = ctx.r11.s64 + 15084;
	// lwz r6,-20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r4,r11,32608
	ctx.r4.s64 = ctx.r11.s64 + 32608;
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x8210A130;
	sub_82351720(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r5,r11,15056
	ctx.r5.s64 = ctx.r11.s64 + 15056;
	// lwz r6,-20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r11,32612
	ctx.r4.s64 = ctx.r11.s64 + 32612;
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x8210A164;
	sub_82351720(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r11,15028
	ctx.r5.s64 = ctx.r11.s64 + 15028;
	// lwz r6,-20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r4,r11,23940
	ctx.r4.s64 = ctx.r11.s64 + 23940;
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x8210A198;
	sub_82351720(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r11,14984
	ctx.r5.s64 = ctx.r11.s64 + 14984;
	// lwz r6,-16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r11,23944
	ctx.r4.s64 = ctx.r11.s64 + 23944;
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823514f8
	ctx.lr = 0x8210A1CC;
	sub_823514F8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r11,14944
	ctx.r5.s64 = ctx.r11.s64 + 14944;
	// lwz r6,-16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r4,r11,32616
	ctx.r4.s64 = ctx.r11.s64 + 32616;
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x8210A200;
	sub_82351720(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r11,14912
	ctx.r5.s64 = ctx.r11.s64 + 14912;
	// lwz r6,-16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r4,r11,32620
	ctx.r4.s64 = ctx.r11.s64 + 32620;
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x8210A234;
	sub_82351720(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r11,14880
	ctx.r5.s64 = ctx.r11.s64 + 14880;
	// lwz r6,-16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r4,r11,23948
	ctx.r4.s64 = ctx.r11.s64 + 23948;
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x8210A268;
	sub_82351720(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r11,14832
	ctx.r5.s64 = ctx.r11.s64 + 14832;
	// lwz r6,-16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r11,23952
	ctx.r4.s64 = ctx.r11.s64 + 23952;
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823514f8
	ctx.lr = 0x8210A29C;
	sub_823514F8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r11,14784
	ctx.r5.s64 = ctx.r11.s64 + 14784;
	// lwz r6,-16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r4,r11,32624
	ctx.r4.s64 = ctx.r11.s64 + 32624;
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x8210A2D0;
	sub_82351720(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r11,14748
	ctx.r5.s64 = ctx.r11.s64 + 14748;
	// lwz r6,-16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r4,r11,32628
	ctx.r4.s64 = ctx.r11.s64 + 32628;
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x8210A304;
	sub_82351720(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r11,14712
	ctx.r5.s64 = ctx.r11.s64 + 14712;
	// lwz r6,-16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r4,r11,23956
	ctx.r4.s64 = ctx.r11.s64 + 23956;
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x8210A338;
	sub_82351720(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r11,14668
	ctx.r5.s64 = ctx.r11.s64 + 14668;
	// lwz r6,-12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r11,23960
	ctx.r4.s64 = ctx.r11.s64 + 23960;
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823514f8
	ctx.lr = 0x8210A36C;
	sub_823514F8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r11,14628
	ctx.r5.s64 = ctx.r11.s64 + 14628;
	// lwz r6,-12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r4,r11,32632
	ctx.r4.s64 = ctx.r11.s64 + 32632;
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x8210A3A0;
	sub_82351720(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r11,14600
	ctx.r5.s64 = ctx.r11.s64 + 14600;
	// lwz r6,-12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r4,r11,32636
	ctx.r4.s64 = ctx.r11.s64 + 32636;
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x8210A3D4;
	sub_82351720(ctx, base);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r6,-12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r5,r11,14572
	ctx.r5.s64 = ctx.r11.s64 + 14572;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r4,r11,23964
	ctx.r4.s64 = ctx.r11.s64 + 23964;
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x8210A408;
	sub_82351720(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r11,14520
	ctx.r5.s64 = ctx.r11.s64 + 14520;
	// lwz r6,-12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r11,32640
	ctx.r4.s64 = ctx.r11.s64 + 32640;
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823514f8
	ctx.lr = 0x8210A43C;
	sub_823514F8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r11,14472
	ctx.r5.s64 = ctx.r11.s64 + 14472;
	// lwz r6,-12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r4,r11,32644
	ctx.r4.s64 = ctx.r11.s64 + 32644;
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x8210A470;
	sub_82351720(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r11,14436
	ctx.r5.s64 = ctx.r11.s64 + 14436;
	// lwz r6,-12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r4,r11,32648
	ctx.r4.s64 = ctx.r11.s64 + 32648;
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x8210A4A4;
	sub_82351720(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r11,14400
	ctx.r5.s64 = ctx.r11.s64 + 14400;
	// lwz r6,-12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r4,r11,23968
	ctx.r4.s64 = ctx.r11.s64 + 23968;
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x8210A4D8;
	sub_82351720(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r11,14356
	ctx.r5.s64 = ctx.r11.s64 + 14356;
	// lwz r6,-8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r11,23972
	ctx.r4.s64 = ctx.r11.s64 + 23972;
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823514f8
	ctx.lr = 0x8210A50C;
	sub_823514F8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r5,r11,14316
	ctx.r5.s64 = ctx.r11.s64 + 14316;
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r4,r11,32652
	ctx.r4.s64 = ctx.r11.s64 + 32652;
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r6,-8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// bl 0x82351720
	ctx.lr = 0x8210A540;
	sub_82351720(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r11,14288
	ctx.r5.s64 = ctx.r11.s64 + 14288;
	// lwz r6,-8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r4,r11,32656
	ctx.r4.s64 = ctx.r11.s64 + 32656;
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x8210A574;
	sub_82351720(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r11,14260
	ctx.r5.s64 = ctx.r11.s64 + 14260;
	// lwz r6,-8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r4,r11,23976
	ctx.r4.s64 = ctx.r11.s64 + 23976;
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x8210A5A8;
	sub_82351720(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r11,14224
	ctx.r5.s64 = ctx.r11.s64 + 14224;
	// lwz r6,-32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r4,r11,32660
	ctx.r4.s64 = ctx.r11.s64 + 32660;
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x8210A5DC;
	sub_82351720(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r11,14196
	ctx.r5.s64 = ctx.r11.s64 + 14196;
	// lwz r6,-32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r4,r11,32664
	ctx.r4.s64 = ctx.r11.s64 + 32664;
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x8210A610;
	sub_82351720(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r11,14164
	ctx.r5.s64 = ctx.r11.s64 + 14164;
	// lwz r6,-32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r4,r11,32668
	ctx.r4.s64 = ctx.r11.s64 + 32668;
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x8210A644;
	sub_82351720(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r5,r11,14128
	ctx.r5.s64 = ctx.r11.s64 + 14128;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r11,32672
	ctx.r4.s64 = ctx.r11.s64 + 32672;
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// lwz r6,-32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// bl 0x82351720
	ctx.lr = 0x8210A678;
	sub_82351720(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r11,14100
	ctx.r5.s64 = ctx.r11.s64 + 14100;
	// lwz r6,-32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r4,r11,32676
	ctx.r4.s64 = ctx.r11.s64 + 32676;
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x8210A6AC;
	sub_82351720(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r11,14068
	ctx.r5.s64 = ctx.r11.s64 + 14068;
	// lwz r6,-32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r4,r11,23980
	ctx.r4.s64 = ctx.r11.s64 + 23980;
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x8210A6E0;
	sub_82351720(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r11,14044
	ctx.r5.s64 = ctx.r11.s64 + 14044;
	// lwz r6,-4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r4,r11,32692
	ctx.r4.s64 = ctx.r11.s64 + 32692;
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x8210A714;
	sub_82351720(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r11,14000
	ctx.r5.s64 = ctx.r11.s64 + 14000;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r11,32680
	ctx.r4.s64 = ctx.r11.s64 + 32680;
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823514f8
	ctx.lr = 0x8210A748;
	sub_823514F8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r11,13960
	ctx.r5.s64 = ctx.r11.s64 + 13960;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r4,r11,32684
	ctx.r4.s64 = ctx.r11.s64 + 32684;
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x8210A77C;
	sub_82351720(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r5,r11,13928
	ctx.r5.s64 = ctx.r11.s64 + 13928;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r4,r11,32688
	ctx.r4.s64 = ctx.r11.s64 + 32688;
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x8210A7B0;
	sub_82351720(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r11,13896
	ctx.r5.s64 = ctx.r11.s64 + 13896;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r4,r11,23984
	ctx.r4.s64 = ctx.r11.s64 + 23984;
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351720
	ctx.lr = 0x8210A7E4;
	sub_82351720(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8210A7F0"))) PPC_WEAK_FUNC(sub_8210A7F0);
PPC_FUNC_IMPL(__imp__sub_8210A7F0) {
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
	// lis r31,-32047
	ctx.r31.s64 = -2100232192;
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r4,r11,32512
	ctx.r4.s64 = ctx.r11.s64 + 32512;
	// lwz r11,20160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82350c88
	ctx.lr = 0x8210A818;
	sub_82350C88(ctx, base);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r4,r11,32516
	ctx.r4.s64 = ctx.r11.s64 + 32516;
	// lwz r11,20160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82350c88
	ctx.lr = 0x8210A82C;
	sub_82350C88(ctx, base);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r4,r11,32520
	ctx.r4.s64 = ctx.r11.s64 + 32520;
	// lwz r11,20160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82350c88
	ctx.lr = 0x8210A840;
	sub_82350C88(ctx, base);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r4,r11,32524
	ctx.r4.s64 = ctx.r11.s64 + 32524;
	// lwz r11,20160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82350c88
	ctx.lr = 0x8210A854;
	sub_82350C88(ctx, base);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r4,r11,32528
	ctx.r4.s64 = ctx.r11.s64 + 32528;
	// lwz r11,20160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82350c88
	ctx.lr = 0x8210A868;
	sub_82350C88(ctx, base);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r4,r11,32532
	ctx.r4.s64 = ctx.r11.s64 + 32532;
	// lwz r11,20160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82350c88
	ctx.lr = 0x8210A87C;
	sub_82350C88(ctx, base);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r4,r11,32536
	ctx.r4.s64 = ctx.r11.s64 + 32536;
	// lwz r11,20160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82350c88
	ctx.lr = 0x8210A890;
	sub_82350C88(ctx, base);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r4,r11,32540
	ctx.r4.s64 = ctx.r11.s64 + 32540;
	// lwz r11,20160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82350c88
	ctx.lr = 0x8210A8A4;
	sub_82350C88(ctx, base);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r4,r11,32544
	ctx.r4.s64 = ctx.r11.s64 + 32544;
	// lwz r11,20160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82350c88
	ctx.lr = 0x8210A8B8;
	sub_82350C88(ctx, base);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r4,r11,32548
	ctx.r4.s64 = ctx.r11.s64 + 32548;
	// lwz r11,20160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82350c88
	ctx.lr = 0x8210A8CC;
	sub_82350C88(ctx, base);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r4,r11,23920
	ctx.r4.s64 = ctx.r11.s64 + 23920;
	// lwz r11,20160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82350c88
	ctx.lr = 0x8210A8E0;
	sub_82350C88(ctx, base);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r4,r11,32552
	ctx.r4.s64 = ctx.r11.s64 + 32552;
	// lwz r11,20160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82350c88
	ctx.lr = 0x8210A8F4;
	sub_82350C88(ctx, base);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r4,r11,32556
	ctx.r4.s64 = ctx.r11.s64 + 32556;
	// lwz r11,20160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82350c88
	ctx.lr = 0x8210A908;
	sub_82350C88(ctx, base);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r4,r11,23924
	ctx.r4.s64 = ctx.r11.s64 + 23924;
	// lwz r11,20160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82350c88
	ctx.lr = 0x8210A91C;
	sub_82350C88(ctx, base);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r4,r11,32560
	ctx.r4.s64 = ctx.r11.s64 + 32560;
	// lwz r11,20160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82350c88
	ctx.lr = 0x8210A930;
	sub_82350C88(ctx, base);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r4,r11,32564
	ctx.r4.s64 = ctx.r11.s64 + 32564;
	// lwz r11,20160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82350c88
	ctx.lr = 0x8210A944;
	sub_82350C88(ctx, base);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r4,r11,32568
	ctx.r4.s64 = ctx.r11.s64 + 32568;
	// lwz r11,20160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82350c88
	ctx.lr = 0x8210A958;
	sub_82350C88(ctx, base);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r4,r11,32572
	ctx.r4.s64 = ctx.r11.s64 + 32572;
	// lwz r11,20160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82350c88
	ctx.lr = 0x8210A96C;
	sub_82350C88(ctx, base);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r4,r11,23928
	ctx.r4.s64 = ctx.r11.s64 + 23928;
	// lwz r11,20160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82350c88
	ctx.lr = 0x8210A980;
	sub_82350C88(ctx, base);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r4,r11,32576
	ctx.r4.s64 = ctx.r11.s64 + 32576;
	// lwz r11,20160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82350c88
	ctx.lr = 0x8210A994;
	sub_82350C88(ctx, base);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r4,r11,32580
	ctx.r4.s64 = ctx.r11.s64 + 32580;
	// lwz r11,20160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82350c88
	ctx.lr = 0x8210A9A8;
	sub_82350C88(ctx, base);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r4,r11,23932
	ctx.r4.s64 = ctx.r11.s64 + 23932;
	// lwz r11,20160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82350c88
	ctx.lr = 0x8210A9BC;
	sub_82350C88(ctx, base);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r4,r11,32584
	ctx.r4.s64 = ctx.r11.s64 + 32584;
	// lwz r11,20160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82350c88
	ctx.lr = 0x8210A9D0;
	sub_82350C88(ctx, base);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r4,r11,32588
	ctx.r4.s64 = ctx.r11.s64 + 32588;
	// lwz r11,20160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82350c88
	ctx.lr = 0x8210A9E4;
	sub_82350C88(ctx, base);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r4,r11,32592
	ctx.r4.s64 = ctx.r11.s64 + 32592;
	// lwz r11,20160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82350c88
	ctx.lr = 0x8210A9F8;
	sub_82350C88(ctx, base);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r4,r11,32596
	ctx.r4.s64 = ctx.r11.s64 + 32596;
	// lwz r11,20160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82350c88
	ctx.lr = 0x8210AA0C;
	sub_82350C88(ctx, base);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r4,r11,32600
	ctx.r4.s64 = ctx.r11.s64 + 32600;
	// lwz r11,20160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82350c88
	ctx.lr = 0x8210AA20;
	sub_82350C88(ctx, base);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r4,r11,32604
	ctx.r4.s64 = ctx.r11.s64 + 32604;
	// lwz r11,20160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82350c88
	ctx.lr = 0x8210AA34;
	sub_82350C88(ctx, base);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r4,r11,23936
	ctx.r4.s64 = ctx.r11.s64 + 23936;
	// lwz r11,20160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82350c88
	ctx.lr = 0x8210AA48;
	sub_82350C88(ctx, base);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r4,r11,32608
	ctx.r4.s64 = ctx.r11.s64 + 32608;
	// lwz r11,20160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82350c88
	ctx.lr = 0x8210AA5C;
	sub_82350C88(ctx, base);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r4,r11,32612
	ctx.r4.s64 = ctx.r11.s64 + 32612;
	// lwz r11,20160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82350c88
	ctx.lr = 0x8210AA70;
	sub_82350C88(ctx, base);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r4,r11,23940
	ctx.r4.s64 = ctx.r11.s64 + 23940;
	// lwz r11,20160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82350c88
	ctx.lr = 0x8210AA84;
	sub_82350C88(ctx, base);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r4,r11,23944
	ctx.r4.s64 = ctx.r11.s64 + 23944;
	// lwz r11,20160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82350c88
	ctx.lr = 0x8210AA98;
	sub_82350C88(ctx, base);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r4,r11,32616
	ctx.r4.s64 = ctx.r11.s64 + 32616;
	// lwz r11,20160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82350c88
	ctx.lr = 0x8210AAAC;
	sub_82350C88(ctx, base);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r4,r11,32620
	ctx.r4.s64 = ctx.r11.s64 + 32620;
	// lwz r11,20160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82350c88
	ctx.lr = 0x8210AAC0;
	sub_82350C88(ctx, base);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r4,r11,23948
	ctx.r4.s64 = ctx.r11.s64 + 23948;
	// lwz r11,20160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82350c88
	ctx.lr = 0x8210AAD4;
	sub_82350C88(ctx, base);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r4,r11,23952
	ctx.r4.s64 = ctx.r11.s64 + 23952;
	// lwz r11,20160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82350c88
	ctx.lr = 0x8210AAE8;
	sub_82350C88(ctx, base);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r4,r11,32624
	ctx.r4.s64 = ctx.r11.s64 + 32624;
	// lwz r11,20160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82350c88
	ctx.lr = 0x8210AAFC;
	sub_82350C88(ctx, base);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r4,r11,32628
	ctx.r4.s64 = ctx.r11.s64 + 32628;
	// lwz r11,20160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82350c88
	ctx.lr = 0x8210AB10;
	sub_82350C88(ctx, base);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r4,r11,23956
	ctx.r4.s64 = ctx.r11.s64 + 23956;
	// lwz r11,20160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82350c88
	ctx.lr = 0x8210AB24;
	sub_82350C88(ctx, base);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r4,r11,23960
	ctx.r4.s64 = ctx.r11.s64 + 23960;
	// lwz r11,20160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82350c88
	ctx.lr = 0x8210AB38;
	sub_82350C88(ctx, base);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r4,r11,32632
	ctx.r4.s64 = ctx.r11.s64 + 32632;
	// lwz r11,20160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82350c88
	ctx.lr = 0x8210AB4C;
	sub_82350C88(ctx, base);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r4,r11,32636
	ctx.r4.s64 = ctx.r11.s64 + 32636;
	// lwz r11,20160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82350c88
	ctx.lr = 0x8210AB60;
	sub_82350C88(ctx, base);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r4,r11,23964
	ctx.r4.s64 = ctx.r11.s64 + 23964;
	// lwz r11,20160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82350c88
	ctx.lr = 0x8210AB74;
	sub_82350C88(ctx, base);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r4,r11,32640
	ctx.r4.s64 = ctx.r11.s64 + 32640;
	// lwz r11,20160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82350c88
	ctx.lr = 0x8210AB88;
	sub_82350C88(ctx, base);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r4,r11,32644
	ctx.r4.s64 = ctx.r11.s64 + 32644;
	// lwz r11,20160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82350c88
	ctx.lr = 0x8210AB9C;
	sub_82350C88(ctx, base);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r4,r11,32648
	ctx.r4.s64 = ctx.r11.s64 + 32648;
	// lwz r11,20160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82350c88
	ctx.lr = 0x8210ABB0;
	sub_82350C88(ctx, base);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r4,r11,23968
	ctx.r4.s64 = ctx.r11.s64 + 23968;
	// lwz r11,20160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82350c88
	ctx.lr = 0x8210ABC4;
	sub_82350C88(ctx, base);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r4,r11,23972
	ctx.r4.s64 = ctx.r11.s64 + 23972;
	// lwz r11,20160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82350c88
	ctx.lr = 0x8210ABD8;
	sub_82350C88(ctx, base);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r4,r11,32652
	ctx.r4.s64 = ctx.r11.s64 + 32652;
	// lwz r11,20160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82350c88
	ctx.lr = 0x8210ABEC;
	sub_82350C88(ctx, base);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r4,r11,32656
	ctx.r4.s64 = ctx.r11.s64 + 32656;
	// lwz r11,20160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82350c88
	ctx.lr = 0x8210AC00;
	sub_82350C88(ctx, base);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r4,r11,23976
	ctx.r4.s64 = ctx.r11.s64 + 23976;
	// lwz r11,20160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82350c88
	ctx.lr = 0x8210AC14;
	sub_82350C88(ctx, base);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r4,r11,32660
	ctx.r4.s64 = ctx.r11.s64 + 32660;
	// lwz r11,20160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82350c88
	ctx.lr = 0x8210AC28;
	sub_82350C88(ctx, base);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r4,r11,32664
	ctx.r4.s64 = ctx.r11.s64 + 32664;
	// lwz r11,20160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82350c88
	ctx.lr = 0x8210AC3C;
	sub_82350C88(ctx, base);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r4,r11,32668
	ctx.r4.s64 = ctx.r11.s64 + 32668;
	// lwz r11,20160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82350c88
	ctx.lr = 0x8210AC50;
	sub_82350C88(ctx, base);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r4,r11,32672
	ctx.r4.s64 = ctx.r11.s64 + 32672;
	// lwz r11,20160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82350c88
	ctx.lr = 0x8210AC64;
	sub_82350C88(ctx, base);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r4,r11,32676
	ctx.r4.s64 = ctx.r11.s64 + 32676;
	// lwz r11,20160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82350c88
	ctx.lr = 0x8210AC78;
	sub_82350C88(ctx, base);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r4,r11,23980
	ctx.r4.s64 = ctx.r11.s64 + 23980;
	// lwz r11,20160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82350c88
	ctx.lr = 0x8210AC8C;
	sub_82350C88(ctx, base);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r4,r11,32680
	ctx.r4.s64 = ctx.r11.s64 + 32680;
	// lwz r11,20160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82350c88
	ctx.lr = 0x8210ACA0;
	sub_82350C88(ctx, base);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r4,r11,32684
	ctx.r4.s64 = ctx.r11.s64 + 32684;
	// lwz r11,20160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82350c88
	ctx.lr = 0x8210ACB4;
	sub_82350C88(ctx, base);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r4,r11,32688
	ctx.r4.s64 = ctx.r11.s64 + 32688;
	// lwz r11,20160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82350c88
	ctx.lr = 0x8210ACC8;
	sub_82350C88(ctx, base);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r4,r11,23984
	ctx.r4.s64 = ctx.r11.s64 + 23984;
	// lwz r11,20160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82350c88
	ctx.lr = 0x8210ACDC;
	sub_82350C88(ctx, base);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r4,r11,32692
	ctx.r4.s64 = ctx.r11.s64 + 32692;
	// lwz r11,20160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82350c88
	ctx.lr = 0x8210ACF0;
	sub_82350C88(ctx, base);
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

__attribute__((alias("__imp__sub_8210AD04"))) PPC_WEAK_FUNC(sub_8210AD04);
PPC_FUNC_IMPL(__imp__sub_8210AD04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8210AD08"))) PPC_WEAK_FUNC(sub_8210AD08);
PPC_FUNC_IMPL(__imp__sub_8210AD08) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r10,3
	ctx.r10.s64 = 196608;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// ori r9,r10,12448
	ctx.r9.u64 = ctx.r10.u64 | 12448;
	// addi r5,r3,888
	ctx.r5.s64 = ctx.r3.s64 + 888;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8210ada8
	if (ctx.cr6.eq) goto loc_8210ADA8;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_8210AD40:
	// lwz r6,4(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8210ad98
	if (ctx.cr6.eq) goto loc_8210AD98;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
loc_8210AD60:
	// lwz r31,40(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// rlwinm r31,r31,0,28,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x8210ad88
	if (!ctx.cr6.eq) goto loc_8210AD88;
	// ld r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r30,0(r10)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// cmpld cr6,r31,r30
	ctx.cr6.compare<uint64_t>(ctx.r31.u64, ctx.r30.u64, ctx.xer);
	// bne cr6,0x8210adb8
	if (!ctx.cr6.eq) goto loc_8210ADB8;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
loc_8210AD88:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 + 72;
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x8210ad60
	if (ctx.cr6.lt) goto loc_8210AD60;
loc_8210AD98:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r8,r8,40
	ctx.r8.s64 = ctx.r8.s64 + 40;
	// cmplw cr6,r4,r3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x8210ad40
	if (ctx.cr6.lt) goto loc_8210AD40;
loc_8210ADA8:
	// li r3,1
	ctx.r3.s64 = 1;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_8210ADB8:
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8210ADC8"))) PPC_WEAK_FUNC(sub_8210ADC8);
PPC_FUNC_IMPL(__imp__sub_8210ADC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r8,3
	ctx.r8.s64 = 196608;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// ori r7,r8,20660
	ctx.r7.u64 = ctx.r8.u64 | 20660;
	// addi r9,r3,4288
	ctx.r9.s64 = ctx.r3.s64 + 4288;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwzx r7,r11,r7
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x8210ae20
	if (!ctx.cr6.gt) goto loc_8210AE20;
	// addis r8,r11,3
	ctx.r8.s64 = ctx.r11.s64 + 196608;
	// addis r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 196608;
	// addi r6,r8,21288
	ctx.r6.s64 = ctx.r8.s64 + 21288;
	// addi r11,r11,21288
	ctx.r11.s64 = ctx.r11.s64 + 21288;
	// subf r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
loc_8210AE00:
	// ldx r5,r9,r11
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r9.u32 + ctx.r11.u32);
	// ld r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// cmpld cr6,r5,r4
	ctx.cr6.compare<uint64_t>(ctx.r5.u64, ctx.r4.u64, ctx.xer);
	// bne cr6,0x8210ae28
	if (!ctx.cr6.eq) goto loc_8210AE28;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8210ae00
	if (ctx.cr6.lt) goto loc_8210AE00;
loc_8210AE20:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8210AE28:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8210AE30"))) PPC_WEAK_FUNC(sub_8210AE30);
PPC_FUNC_IMPL(__imp__sub_8210AE30) {
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
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r3,r11,-18560
	ctx.r3.s64 = ctx.r11.s64 + -18560;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lbz r10,47(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 47);
	// extsb r8,r10
	ctx.r8.s64 = ctx.r10.s8;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,-1576(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1576);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// bl 0x822aea28
	ctx.lr = 0x8210AE74;
	sub_822AEA28(ctx, base);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r11,26080
	ctx.r8.s64 = ctx.r11.s64 + 26080;
loc_8210AE80:
	// addi r7,r8,2587
	ctx.r7.s64 = ctx.r8.s64 + 2587;
	// lbzx r6,r10,r7
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r7.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8210ae98
	if (!ctx.cr6.eq) goto loc_8210AE98;
	// li r11,-1
	ctx.r11.s64 = -1;
	// b 0x8210aea0
	goto loc_8210AEA0;
loc_8210AE98:
	// addi r5,r8,2585
	ctx.r5.s64 = ctx.r8.s64 + 2585;
	// lbzx r11,r10,r5
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r5.u32);
loc_8210AEA0:
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x8210aecc
	if (ctx.cr6.eq) goto loc_8210AECC;
	// add r4,r10,r31
	ctx.r4.u64 = ctx.r10.u64 + ctx.r31.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// lbz r3,41(r4)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + 41);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8210aec4
	if (!ctx.cr6.eq) goto loc_8210AEC4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8210AEC4:
	// addi r7,r8,2589
	ctx.r7.s64 = ctx.r8.s64 + 2589;
	// stbx r11,r9,r7
	PPC_STORE_U8(ctx.r9.u32 + ctx.r7.u32, ctx.r11.u8);
loc_8210AECC:
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// extsb r10,r6
	ctx.r10.s64 = ctx.r6.s8;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// blt cr6,0x8210ae80
	if (ctx.cr6.lt) goto loc_8210AE80;
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

__attribute__((alias("__imp__sub_8210AEF0"))) PPC_WEAK_FUNC(sub_8210AEF0);
PPC_FUNC_IMPL(__imp__sub_8210AEF0) {
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
	// lbz r10,47(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 47);
	// add r9,r4,r10
	ctx.r9.u64 = ctx.r4.u64 + ctx.r10.u64;
	// extsb r11,r9
	ctx.r11.s64 = ctx.r9.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r11,47(r31)
	PPC_STORE_U8(ctx.r31.u32 + 47, ctx.r11.u8);
	// bge cr6,0x8210af28
	if (!ctx.cr6.lt) goto loc_8210AF28;
	// li r7,0
	ctx.r7.s64 = 0;
	// stb r7,47(r31)
	PPC_STORE_U8(ctx.r31.u32 + 47, ctx.r7.u8);
	// b 0x8210af40
	goto loc_8210AF40;
loc_8210AF28:
	// lbz r6,47(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 47);
	// extsb r5,r6
	ctx.r5.s64 = ctx.r6.s8;
	// cmpwi cr6,r5,100
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 100, ctx.xer);
	// ble cr6,0x8210af40
	if (!ctx.cr6.gt) goto loc_8210AF40;
	// li r4,100
	ctx.r4.s64 = 100;
	// stb r4,47(r31)
	PPC_STORE_U8(ctx.r31.u32 + 47, ctx.r4.u8);
loc_8210AF40:
	// lbz r10,47(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 47);
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// extsb r8,r10
	ctx.r8.s64 = ctx.r10.s8;
	// addi r3,r11,-18560
	ctx.r3.s64 = ctx.r11.s64 + -18560;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,-1576(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1576);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// bl 0x822aea28
	ctx.lr = 0x8210AF70;
	sub_822AEA28(ctx, base);
	// lbz r3,47(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 47);
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

__attribute__((alias("__imp__sub_8210AF88"))) PPC_WEAK_FUNC(sub_8210AF88);
PPC_FUNC_IMPL(__imp__sub_8210AF88) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 48);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8210AF90"))) PPC_WEAK_FUNC(sub_8210AF90);
PPC_FUNC_IMPL(__imp__sub_8210AF90) {
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
	// lbz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 48);
	// add r9,r4,r10
	ctx.r9.u64 = ctx.r4.u64 + ctx.r10.u64;
	// extsb r11,r9
	ctx.r11.s64 = ctx.r9.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r11,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r11.u8);
	// bge cr6,0x8210afc8
	if (!ctx.cr6.lt) goto loc_8210AFC8;
	// li r7,0
	ctx.r7.s64 = 0;
	// stb r7,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r7.u8);
	// b 0x8210afe0
	goto loc_8210AFE0;
loc_8210AFC8:
	// lbz r6,48(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 48);
	// extsb r5,r6
	ctx.r5.s64 = ctx.r6.s8;
	// cmpwi cr6,r5,100
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 100, ctx.xer);
	// ble cr6,0x8210afe0
	if (!ctx.cr6.gt) goto loc_8210AFE0;
	// li r4,100
	ctx.r4.s64 = 100;
	// stb r4,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r4.u8);
loc_8210AFE0:
	// lbz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 48);
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// extsb r9,r3
	ctx.r9.s64 = ctx.r3.s8;
	// addi r11,r11,-18560
	ctx.r11.s64 = ctx.r11.s64 + -18560;
	// addis r11,r11,9
	ctx.r11.s64 = ctx.r11.s64 + 589824;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// addi r3,r11,-17140
	ctx.r3.s64 = ctx.r11.s64 + -17140;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,-1576(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1576);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// bl 0x822ad7f0
	ctx.lr = 0x8210B018;
	sub_822AD7F0(ctx, base);
	// lbz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 48);
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

__attribute__((alias("__imp__sub_8210B030"))) PPC_WEAK_FUNC(sub_8210B030);
PPC_FUNC_IMPL(__imp__sub_8210B030) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r11,59(r3)
	PPC_STORE_U8(ctx.r3.u32 + 59, ctx.r11.u8);
	// stb r11,60(r3)
	PPC_STORE_U8(ctx.r3.u32 + 60, ctx.r11.u8);
	// stb r11,61(r3)
	PPC_STORE_U8(ctx.r3.u32 + 61, ctx.r11.u8);
	// stb r10,62(r3)
	PPC_STORE_U8(ctx.r3.u32 + 62, ctx.r10.u8);
	// stb r11,63(r3)
	PPC_STORE_U8(ctx.r3.u32 + 63, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8210B050"))) PPC_WEAK_FUNC(sub_8210B050);
PPC_FUNC_IMPL(__imp__sub_8210B050) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lwz r11,23988(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23988);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8210B064"))) PPC_WEAK_FUNC(sub_8210B064);
PPC_FUNC_IMPL(__imp__sub_8210B064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8210B068"))) PPC_WEAK_FUNC(sub_8210B068);
PPC_FUNC_IMPL(__imp__sub_8210B068) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r4,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r4.u32);
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r10.u32);
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r9,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r9.u32);
	// lwz r8,-16(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// lwz r7,-12(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x8210b0a4
	if (ctx.cr6.eq) goto loc_8210B0A4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8210B0A4:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8210B0AC"))) PPC_WEAK_FUNC(sub_8210B0AC);
PPC_FUNC_IMPL(__imp__sub_8210B0AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8210B0B0"))) PPC_WEAK_FUNC(sub_8210B0B0);
PPC_FUNC_IMPL(__imp__sub_8210B0B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lwz r10,23988(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23988);
	// lwz r9,23988(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23988);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// addi r10,r9,5
	ctx.r10.s64 = ctx.r9.s64 + 5;
	// lwz r8,-16(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stw r8,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r8.u32);
	// stw r10,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r10.u32);
	// lwz r10,-8(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// stw r7,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r7.u32);
	// lwz r10,-12(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r6,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r6.u32);
	// lwz r5,-12(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// lwz r4,-8(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// beq cr6,0x8210b104
	if (ctx.cr6.eq) goto loc_8210B104;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8210B104:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8210b11c
	if (ctx.cr6.eq) goto loc_8210B11C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,16052
	ctx.r3.s64 = ctx.r11.s64 + 16052;
	// blr 
	return;
loc_8210B11C:
	// lwz r10,23988(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23988);
	// lwz r9,-16(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r9,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r9.u32);
	// stw r10,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r10.u32);
	// lwz r10,-12(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// stw r8,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r8.u32);
	// lwz r10,-8(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r7,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r7.u32);
	// lwz r6,-8(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// lwz r5,-12(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// cmpw cr6,r5,r6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// beq cr6,0x8210b160
	if (ctx.cr6.eq) goto loc_8210B160;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8210B160:
	// clrlwi r3,r10,24
	ctx.r3.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8210b178
	if (ctx.cr6.eq) goto loc_8210B178;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,16040
	ctx.r3.s64 = ctx.r11.s64 + 16040;
	// blr 
	return;
loc_8210B178:
	// lwz r10,23988(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23988);
	// lwz r9,-16(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r9,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r9.u32);
	// stw r10,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r10.u32);
	// lwz r10,-12(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// stw r8,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r8.u32);
	// lwz r10,-8(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r7,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r7.u32);
	// lwz r6,-8(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// lwz r5,-12(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// cmpw cr6,r5,r6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// beq cr6,0x8210b1bc
	if (ctx.cr6.eq) goto loc_8210B1BC;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8210B1BC:
	// clrlwi r3,r10,24
	ctx.r3.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8210b1d4
	if (ctx.cr6.eq) goto loc_8210B1D4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,16028
	ctx.r3.s64 = ctx.r11.s64 + 16028;
	// blr 
	return;
loc_8210B1D4:
	// lwz r10,23988(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23988);
	// lwz r9,-16(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// stw r9,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r9.u32);
	// stw r10,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r10.u32);
	// lwz r10,-12(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// stw r8,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r8.u32);
	// lwz r10,-8(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r7,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r7.u32);
	// lwz r6,-8(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// lwz r5,-12(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// cmpw cr6,r5,r6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// beq cr6,0x8210b218
	if (ctx.cr6.eq) goto loc_8210B218;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8210B218:
	// clrlwi r3,r10,24
	ctx.r3.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8210b230
	if (ctx.cr6.eq) goto loc_8210B230;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,16012
	ctx.r3.s64 = ctx.r11.s64 + 16012;
	// blr 
	return;
loc_8210B230:
	// lwz r11,23988(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23988);
	// lwz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// stw r10,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r10.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r9.u32);
	// lwz r11,-8(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r8,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r8.u32);
	// lwz r7,-8(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// lwz r6,-12(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// beq cr6,0x8210b274
	if (ctx.cr6.eq) goto loc_8210B274;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8210B274:
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8210b28c
	if (ctx.cr6.eq) goto loc_8210B28C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,15996
	ctx.r3.s64 = ctx.r11.s64 + 15996;
	// blr 
	return;
loc_8210B28C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8210B294"))) PPC_WEAK_FUNC(sub_8210B294);
PPC_FUNC_IMPL(__imp__sub_8210B294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8210B298"))) PPC_WEAK_FUNC(sub_8210B298);
PPC_FUNC_IMPL(__imp__sub_8210B298) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lwz r10,23988(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23988);
	// lwz r9,23988(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23988);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r10.u32);
	// addi r10,r9,2
	ctx.r10.s64 = ctx.r9.s64 + 2;
	// lwz r8,-8(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// stw r8,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r8.u32);
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// lwz r10,-12(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// stw r7,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r7.u32);
	// lwz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r6,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r6.u32);
	// lwz r5,-16(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// lwz r4,-12(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// beq cr6,0x8210b2ec
	if (ctx.cr6.eq) goto loc_8210B2EC;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8210B2EC:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8210b34c
	if (!ctx.cr6.eq) goto loc_8210B34C;
	// lwz r11,23988(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23988);
	// lwz r9,-8(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// stw r9,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r9.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r8.u32);
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r7,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r7.u32);
	// lwz r6,-12(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// lwz r5,-16(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// cmpw cr6,r5,r6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// beq cr6,0x8210b33c
	if (ctx.cr6.eq) goto loc_8210B33C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8210B33C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8210b350
	if (ctx.cr6.eq) goto loc_8210B350;
loc_8210B34C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8210B350:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8210B358"))) PPC_WEAK_FUNC(sub_8210B358);
PPC_FUNC_IMPL(__imp__sub_8210B358) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lwz r10,23988(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23988);
	// lwz r11,23988(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23988);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r10,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r10.u32);
	// lwz r9,-12(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// stw r9,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r9.u32);
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r8.u32);
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r7,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r7.u32);
	// lwz r6,-16(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// lwz r5,-12(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// cmpw cr6,r5,r6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// beq cr6,0x8210b3ac
	if (ctx.cr6.eq) goto loc_8210B3AC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8210B3AC:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8210B3C4"))) PPC_WEAK_FUNC(sub_8210B3C4);
PPC_FUNC_IMPL(__imp__sub_8210B3C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8210B3C8"))) PPC_WEAK_FUNC(sub_8210B3C8);
PPC_FUNC_IMPL(__imp__sub_8210B3C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r11,49(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 49);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8210b460
	if (ctx.cr6.eq) goto loc_8210B460;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lis r10,4
	ctx.r10.s64 = 262144;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// ori r9,r10,30436
	ctx.r9.u64 = ctx.r10.u64 | 30436;
	// lbzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8210b408
	if (ctx.cr6.eq) goto loc_8210B408;
	// lis r7,4
	ctx.r7.s64 = 262144;
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r6,r7,30437
	ctx.r6.u64 = ctx.r7.u64 | 30437;
	// lbzx r5,r11,r6
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8210b40c
	if (!ctx.cr6.eq) goto loc_8210B40C;
loc_8210B408:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8210B40C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8210b460
	if (ctx.cr6.eq) goto loc_8210B460;
	// lis r9,4
	ctx.r9.s64 = 262144;
	// ori r8,r9,29992
	ctx.r8.u64 = ctx.r9.u64 | 29992;
	// lwzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8210b438
	if (ctx.cr6.eq) goto loc_8210B438;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f0,-15132(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15132);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8210b440
	goto loc_8210B440;
loc_8210B438:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-460(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -460);
	ctx.f0.f64 = double(temp.f32);
loc_8210B440:
	// lwz r7,28(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// std r6,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// lfd f13,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fdivs f1,f0,f11
	ctx.f1.f64 = double(float(ctx.f0.f64 / ctx.f11.f64));
	// blr 
	return;
loc_8210B460:
	// lfs f1,32(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8210B468"))) PPC_WEAK_FUNC(sub_8210B468);
PPC_FUNC_IMPL(__imp__sub_8210B468) {
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
	// beq cr6,0x8210b4f0
	if (ctx.cr6.eq) goto loc_8210B4F0;
	// bl 0x82104550
	ctx.lr = 0x8210B498;
	sub_82104550(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,392(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 392);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8210B4AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// lis r11,-32110
	ctx.r11.s64 = -2104360960;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// addi r3,r11,12656
	ctx.r3.s64 = ctx.r11.s64 + 12656;
	// beq cr6,0x8210b4c8
	if (ctx.cr6.eq) goto loc_8210B4C8;
	// bl 0x82173a08
	ctx.lr = 0x8210B4C4;
	sub_82173A08(ctx, base);
	// b 0x8210b4cc
	goto loc_8210B4CC;
loc_8210B4C8:
	// bl 0x8215c4c8
	ctx.lr = 0x8210B4CC;
	sub_8215C4C8(ctx, base);
loc_8210B4CC:
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lbz r6,68(r7)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + 68);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8210b4f0
	if (ctx.cr6.eq) goto loc_8210B4F0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,20(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x8210B4F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8210B4F0:
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// addi r3,r11,92
	ctx.r3.s64 = ctx.r11.s64 + 92;
	// bl 0x8210b3c8
	ctx.lr = 0x8210B500;
	sub_8210B3C8(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r3,r11,4864
	ctx.r3.s64 = ctx.r11.s64 + 4864;
	// bl 0x821a92b8
	ctx.lr = 0x8210B50C;
	sub_821A92B8(ctx, base);
	// lbz r3,1(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8210b52c
	if (ctx.cr6.eq) goto loc_8210B52C;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8210B52C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8210B52C:
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

__attribute__((alias("__imp__sub_8210B544"))) PPC_WEAK_FUNC(sub_8210B544);
PPC_FUNC_IMPL(__imp__sub_8210B544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8210B548"))) PPC_WEAK_FUNC(sub_8210B548);
PPC_FUNC_IMPL(__imp__sub_8210B548) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8210b568
	if (ctx.cr6.eq) goto loc_8210B568;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,416(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 416);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_8210B568:
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

__attribute__((alias("__imp__sub_8210B57C"))) PPC_WEAK_FUNC(sub_8210B57C);
PPC_FUNC_IMPL(__imp__sub_8210B57C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8210B580"))) PPC_WEAK_FUNC(sub_8210B580);
PPC_FUNC_IMPL(__imp__sub_8210B580) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x8210B588;
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lfs f30,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f30.f64 = double(temp.f32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// fmr f31,f30
	ctx.f31.f64 = ctx.f30.f64;
	// bl 0x82360838
	ctx.lr = 0x8210B5B4;
	sub_82360838(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8210b5f8
	if (ctx.cr6.eq) goto loc_8210B5F8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82360840
	ctx.lr = 0x8210B5CC;
	sub_82360840(ctx, base);
	// clrlwi r10,r29,24
	ctx.r10.u64 = ctx.r29.u32 & 0xFF;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8210b5f8
	if (ctx.cr6.eq) goto loc_8210B5F8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82360878
	ctx.lr = 0x8210B5E8;
	sub_82360878(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8210b5f8
	if (!ctx.cr6.eq) goto loc_8210B5F8;
	// fmr f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f30.f64;
loc_8210B5F8:
	// fabs f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f31.u64 & ~0x8000000000000000;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lfs f13,12668(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12668);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8210b620
	if (!ctx.cr6.gt) goto loc_8210B620;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// lfs f0,128(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,356(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 356, temp.u32);
loc_8210B620:
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

__attribute__((alias("__imp__sub_8210B630"))) PPC_WEAK_FUNC(sub_8210B630);
PPC_FUNC_IMPL(__imp__sub_8210B630) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x8210B638;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x82360838
	ctx.lr = 0x8210B64C;
	sub_82360838(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8210b6b4
	if (ctx.cr6.eq) goto loc_8210B6B4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r31,0
	ctx.r31.s64 = 0;
	// lis r30,-32255
	ctx.r30.s64 = -2113863680;
	// lfs f31,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f31.f64 = double(temp.f32);
loc_8210B668:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x82360840
	ctx.lr = 0x8210B674;
	sub_82360840(ctx, base);
	// lfs f0,12668(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12668);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x8210b688
	if (ctx.cr6.gt) goto loc_8210B688;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8210B688:
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fabs f0,f12
	ctx.f0.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x8210b6c4
	if (!ctx.cr6.eq) goto loc_8210B6C4;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,28
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 28, ctx.xer);
	// blt cr6,0x8210b668
	if (ctx.cr6.lt) goto loc_8210B668;
loc_8210B6B4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_8210B6C4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8210B6D4"))) PPC_WEAK_FUNC(sub_8210B6D4);
PPC_FUNC_IMPL(__imp__sub_8210B6D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8210B6D8"))) PPC_WEAK_FUNC(sub_8210B6D8);
PPC_FUNC_IMPL(__imp__sub_8210B6D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x8210B6E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82360838
	ctx.lr = 0x8210B6F8;
	sub_82360838(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8210b718
	if (ctx.cr6.eq) goto loc_8210B718;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82360878
	ctx.lr = 0x8210B710;
	sub_82360878(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_8210B718:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8210B724"))) PPC_WEAK_FUNC(sub_8210B724);
PPC_FUNC_IMPL(__imp__sub_8210B724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8210B728"))) PPC_WEAK_FUNC(sub_8210B728);
PPC_FUNC_IMPL(__imp__sub_8210B728) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,23
	ctx.r4.s64 = 23;
	// bl 0x8210b580
	ctx.lr = 0x8210B740;
	sub_8210B580(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2868(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x8210b754
	if (!ctx.cr6.gt) goto loc_8210B754;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_8210B754:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8210B764"))) PPC_WEAK_FUNC(sub_8210B764);
PPC_FUNC_IMPL(__imp__sub_8210B764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8210B768"))) PPC_WEAK_FUNC(sub_8210B768);
PPC_FUNC_IMPL(__imp__sub_8210B768) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,22
	ctx.r4.s64 = 22;
	// bl 0x8210b580
	ctx.lr = 0x8210B780;
	sub_8210B580(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2868(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x8210b794
	if (!ctx.cr6.gt) goto loc_8210B794;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_8210B794:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8210B7A4"))) PPC_WEAK_FUNC(sub_8210B7A4);
PPC_FUNC_IMPL(__imp__sub_8210B7A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8210B7A8"))) PPC_WEAK_FUNC(sub_8210B7A8);
PPC_FUNC_IMPL(__imp__sub_8210B7A8) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8210b580
	ctx.lr = 0x8210B7D0;
	sub_8210B580(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8210b580
	ctx.lr = 0x8210B7E4;
	sub_8210B580(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,24
	ctx.r4.s64 = 24;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8210b580
	ctx.lr = 0x8210B7F8;
	sub_8210B580(ctx, base);
	// fsubs f0,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 - ctx.f30.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fadds f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// lfs f1,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bgt cr6,0x8210b824
	if (ctx.cr6.gt) goto loc_8210B824;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f1,-12136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12136);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// blt cr6,0x8210b824
	if (ctx.cr6.lt) goto loc_8210B824;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_8210B824:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8210B840"))) PPC_WEAK_FUNC(sub_8210B840);
PPC_FUNC_IMPL(__imp__sub_8210B840) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8210b580
	ctx.lr = 0x8210B868;
	sub_8210B580(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8210b580
	ctx.lr = 0x8210B87C;
	sub_8210B580(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,25
	ctx.r4.s64 = 25;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8210b580
	ctx.lr = 0x8210B890;
	sub_8210B580(ctx, base);
	// fsubs f0,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 - ctx.f30.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fadds f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// lfs f1,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bgt cr6,0x8210b8bc
	if (ctx.cr6.gt) goto loc_8210B8BC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f1,-12136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12136);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// blt cr6,0x8210b8bc
	if (ctx.cr6.lt) goto loc_8210B8BC;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_8210B8BC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8210B8D8"))) PPC_WEAK_FUNC(sub_8210B8D8);
PPC_FUNC_IMPL(__imp__sub_8210B8D8) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,14
	ctx.r4.s64 = 14;
	// bl 0x8210b580
	ctx.lr = 0x8210B8F0;
	sub_8210B580(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2868(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x8210b904
	if (!ctx.cr6.gt) goto loc_8210B904;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_8210B904:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8210B914"))) PPC_WEAK_FUNC(sub_8210B914);
PPC_FUNC_IMPL(__imp__sub_8210B914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8210B918"))) PPC_WEAK_FUNC(sub_8210B918);
PPC_FUNC_IMPL(__imp__sub_8210B918) {
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
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82360838
	ctx.lr = 0x8210B93C;
	sub_82360838(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8210b958
	if (ctx.cr6.eq) goto loc_8210B958;
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82360878
	ctx.lr = 0x8210B954;
	sub_82360878(ctx, base);
	// b 0x8210b95c
	goto loc_8210B95C;
loc_8210B958:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8210B95C:
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

__attribute__((alias("__imp__sub_8210B974"))) PPC_WEAK_FUNC(sub_8210B974);
PPC_FUNC_IMPL(__imp__sub_8210B974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8210B978"))) PPC_WEAK_FUNC(sub_8210B978);
PPC_FUNC_IMPL(__imp__sub_8210B978) {
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
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,19
	ctx.r4.s64 = 19;
	// bl 0x8210b580
	ctx.lr = 0x8210B990;
	sub_8210B580(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2868(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x8210b9a4
	if (!ctx.cr6.gt) goto loc_8210B9A4;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_8210B9A4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8210B9B4"))) PPC_WEAK_FUNC(sub_8210B9B4);
PPC_FUNC_IMPL(__imp__sub_8210B9B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8210B9B8"))) PPC_WEAK_FUNC(sub_8210B9B8);
PPC_FUNC_IMPL(__imp__sub_8210B9B8) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8210b580
	ctx.lr = 0x8210B9E4;
	sub_8210B580(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,25
	ctx.r4.s64 = 25;
	// stfs f1,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8210b580
	ctx.lr = 0x8210B9F8;
	sub_8210B580(ctx, base);
	// stfs f1,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
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

__attribute__((alias("__imp__sub_8210BA18"))) PPC_WEAK_FUNC(sub_8210BA18);
PPC_FUNC_IMPL(__imp__sub_8210BA18) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,26
	ctx.r4.s64 = 26;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8210b580
	ctx.lr = 0x8210BA44;
	sub_8210B580(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,27
	ctx.r4.s64 = 27;
	// stfs f1,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8210b580
	ctx.lr = 0x8210BA58;
	sub_8210B580(ctx, base);
	// stfs f1,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
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

__attribute__((alias("__imp__sub_8210BA78"))) PPC_WEAK_FUNC(sub_8210BA78);
PPC_FUNC_IMPL(__imp__sub_8210BA78) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,27
	ctx.r4.s64 = 27;
	// b 0x8210b580
	sub_8210B580(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8210BA84"))) PPC_WEAK_FUNC(sub_8210BA84);
PPC_FUNC_IMPL(__imp__sub_8210BA84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8210BA88"))) PPC_WEAK_FUNC(sub_8210BA88);
PPC_FUNC_IMPL(__imp__sub_8210BA88) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8210b580
	ctx.lr = 0x8210BAB4;
	sub_8210B580(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,25
	ctx.r4.s64 = 25;
	// stfs f1,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8210b580
	ctx.lr = 0x8210BAC8;
	sub_8210B580(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f1,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// bl 0x821047b0
	ctx.lr = 0x8210BAD4;
	sub_821047B0(ctx, base);
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

__attribute__((alias("__imp__sub_8210BAEC"))) PPC_WEAK_FUNC(sub_8210BAEC);
PPC_FUNC_IMPL(__imp__sub_8210BAEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8210BAF0"))) PPC_WEAK_FUNC(sub_8210BAF0);
PPC_FUNC_IMPL(__imp__sub_8210BAF0) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,18
	ctx.r4.s64 = 18;
	// bl 0x8210b580
	ctx.lr = 0x8210BB08;
	sub_8210B580(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2868(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x8210bb1c
	if (!ctx.cr6.gt) goto loc_8210BB1C;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_8210BB1C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8210BB2C"))) PPC_WEAK_FUNC(sub_8210BB2C);
PPC_FUNC_IMPL(__imp__sub_8210BB2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8210BB30"))) PPC_WEAK_FUNC(sub_8210BB30);
PPC_FUNC_IMPL(__imp__sub_8210BB30) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x8210b580
	ctx.lr = 0x8210BB48;
	sub_8210B580(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2868(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x8210bb5c
	if (!ctx.cr6.gt) goto loc_8210BB5C;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_8210BB5C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8210BB6C"))) PPC_WEAK_FUNC(sub_8210BB6C);
PPC_FUNC_IMPL(__imp__sub_8210BB6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8210BB70"))) PPC_WEAK_FUNC(sub_8210BB70);
PPC_FUNC_IMPL(__imp__sub_8210BB70) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,17
	ctx.r4.s64 = 17;
	// bl 0x8210b580
	ctx.lr = 0x8210BB88;
	sub_8210B580(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2868(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x8210bb9c
	if (!ctx.cr6.gt) goto loc_8210BB9C;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_8210BB9C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8210BBAC"))) PPC_WEAK_FUNC(sub_8210BBAC);
PPC_FUNC_IMPL(__imp__sub_8210BBAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8210BBB0"))) PPC_WEAK_FUNC(sub_8210BBB0);
PPC_FUNC_IMPL(__imp__sub_8210BBB0) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,17
	ctx.r4.s64 = 17;
	// bl 0x8210b580
	ctx.lr = 0x8210BBC8;
	sub_8210B580(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,12668(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12668);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x8210bbe0
	if (ctx.cr6.gt) goto loc_8210BBE0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8210BBE0:
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

__attribute__((alias("__imp__sub_8210BBF4"))) PPC_WEAK_FUNC(sub_8210BBF4);
PPC_FUNC_IMPL(__imp__sub_8210BBF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8210BBF8"))) PPC_WEAK_FUNC(sub_8210BBF8);
PPC_FUNC_IMPL(__imp__sub_8210BBF8) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// b 0x8210b580
	sub_8210B580(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8210BC04"))) PPC_WEAK_FUNC(sub_8210BC04);
PPC_FUNC_IMPL(__imp__sub_8210BC04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8210BC08"))) PPC_WEAK_FUNC(sub_8210BC08);
PPC_FUNC_IMPL(__imp__sub_8210BC08) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,17
	ctx.r4.s64 = 17;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8210b580
	ctx.lr = 0x8210BC2C;
	sub_8210B580(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bne cr6,0x8210bd00
	if (!ctx.cr6.eq) goto loc_8210BD00;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,18
	ctx.r4.s64 = 18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8210b580
	ctx.lr = 0x8210BC4C;
	sub_8210B580(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// beq cr6,0x8210bd00
	if (ctx.cr6.eq) goto loc_8210BD00;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,19
	ctx.r4.s64 = 19;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8210b580
	ctx.lr = 0x8210BC64;
	sub_8210B580(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bne cr6,0x8210bd00
	if (!ctx.cr6.eq) goto loc_8210BD00;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8210b580
	ctx.lr = 0x8210BC7C;
	sub_8210B580(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bne cr6,0x8210bd00
	if (!ctx.cr6.eq) goto loc_8210BD00;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,21
	ctx.r4.s64 = 21;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8210b580
	ctx.lr = 0x8210BC94;
	sub_8210B580(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bne cr6,0x8210bd00
	if (!ctx.cr6.eq) goto loc_8210BD00;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8210b580
	ctx.lr = 0x8210BCAC;
	sub_8210B580(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bne cr6,0x8210bd00
	if (!ctx.cr6.eq) goto loc_8210BD00;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8210b580
	ctx.lr = 0x8210BCC4;
	sub_8210B580(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bne cr6,0x8210bd00
	if (!ctx.cr6.eq) goto loc_8210BD00;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,22
	ctx.r4.s64 = 22;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8210b580
	ctx.lr = 0x8210BCDC;
	sub_8210B580(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// beq cr6,0x8210bd00
	if (ctx.cr6.eq) goto loc_8210BD00;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,23
	ctx.r4.s64 = 23;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8210b580
	ctx.lr = 0x8210BCF4;
	sub_8210B580(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8210bd04
	if (!ctx.cr6.eq) goto loc_8210BD04;
loc_8210BD00:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8210BD04:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
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

__attribute__((alias("__imp__sub_8210BD20"))) PPC_WEAK_FUNC(sub_8210BD20);
PPC_FUNC_IMPL(__imp__sub_8210BD20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// ori r9,r10,14715
	ctx.r9.u64 = ctx.r10.u64 | 14715;
	// lbzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// b 0x825af6a0
	sub_825AF6A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8210BD3C"))) PPC_WEAK_FUNC(sub_8210BD3C);
PPC_FUNC_IMPL(__imp__sub_8210BD3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8210BD40"))) PPC_WEAK_FUNC(sub_8210BD40);
PPC_FUNC_IMPL(__imp__sub_8210BD40) {
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
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x8259bba4
	ctx.lr = 0x8210BD58;
	__savefpr_27(ctx, base);
	// stwu r1,-1184(r1)
	ea = -1184 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32126
	ctx.r31.s64 = -2105409536;
	// lwz r11,23992(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23992);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8210bd90
	if (!ctx.cr6.eq) goto loc_8210BD90;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-17120
	ctx.r5.s64 = ctx.r11.s64 + -17120;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x825af158
	ctx.lr = 0x8210BD8C;
	sub_825AF158(ctx, base);
	// stw r3,23992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23992, ctx.r3.u32);
loc_8210BD90:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lfs f0,3260(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3260);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,23500(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23500);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f0,2868(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bgt cr6,0x8210bef0
	if (ctx.cr6.gt) goto loc_8210BEF0;
	// lis r12,-32239
	ctx.r12.s64 = -2112815104;
	// addi r12,r12,-16932
	ctx.r12.s64 = ctx.r12.s64 + -16932;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8210BE00;
	case 1:
		goto loc_8210BE28;
	case 2:
		goto loc_8210BE50;
	case 3:
		goto loc_8210BE78;
	case 4:
		goto loc_8210BEF0;
	case 5:
		goto loc_8210BEF0;
	case 6:
		goto loc_8210BEF0;
	case 7:
		goto loc_8210BEA0;
	case 8:
		goto loc_8210BEC8;
	default:
		__builtin_unreachable();
	}
	// lwz r16,-16896(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -16896);
	// lwz r16,-16856(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -16856);
	// lwz r16,-16816(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -16816);
	// lwz r16,-16776(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -16776);
	// lwz r16,-16656(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -16656);
	// lwz r16,-16656(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -16656);
	// lwz r16,-16656(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -16656);
	// lwz r16,-16736(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -16736);
	// lwz r16,-16696(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -16696);
loc_8210BE00:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r31,r11,12788
	ctx.r31.s64 = ctx.r11.s64 + 12788;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r5,r31,36
	ctx.r5.s64 = ctx.r31.s64 + 36;
	// addi r30,r11,16112
	ctx.r30.s64 = ctx.r11.s64 + 16112;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x825af6c8
	ctx.lr = 0x8210BE20;
	sub_825AF6C8(ctx, base);
	// addi r5,r31,88
	ctx.r5.s64 = ctx.r31.s64 + 88;
	// b 0x8210bf14
	goto loc_8210BF14;
loc_8210BE28:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r31,r11,12788
	ctx.r31.s64 = ctx.r11.s64 + 12788;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r5,r31,140
	ctx.r5.s64 = ctx.r31.s64 + 140;
	// addi r30,r11,16112
	ctx.r30.s64 = ctx.r11.s64 + 16112;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x825af6c8
	ctx.lr = 0x8210BE48;
	sub_825AF6C8(ctx, base);
	// addi r5,r31,184
	ctx.r5.s64 = ctx.r31.s64 + 184;
	// b 0x8210bf14
	goto loc_8210BF14;
loc_8210BE50:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r31,r11,12788
	ctx.r31.s64 = ctx.r11.s64 + 12788;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r5,r31,300
	ctx.r5.s64 = ctx.r31.s64 + 300;
	// addi r30,r11,16112
	ctx.r30.s64 = ctx.r11.s64 + 16112;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x825af6c8
	ctx.lr = 0x8210BE70;
	sub_825AF6C8(ctx, base);
	// addi r5,r31,348
	ctx.r5.s64 = ctx.r31.s64 + 348;
	// b 0x8210bf14
	goto loc_8210BF14;
loc_8210BE78:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r31,r11,12788
	ctx.r31.s64 = ctx.r11.s64 + 12788;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r5,r31,220
	ctx.r5.s64 = ctx.r31.s64 + 220;
	// addi r30,r11,16112
	ctx.r30.s64 = ctx.r11.s64 + 16112;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x825af6c8
	ctx.lr = 0x8210BE98;
	sub_825AF6C8(ctx, base);
	// addi r5,r31,260
	ctx.r5.s64 = ctx.r31.s64 + 260;
	// b 0x8210bf14
	goto loc_8210BF14;
loc_8210BEA0:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r31,r11,12788
	ctx.r31.s64 = ctx.r11.s64 + 12788;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r5,r31,376
	ctx.r5.s64 = ctx.r31.s64 + 376;
	// addi r30,r11,16112
	ctx.r30.s64 = ctx.r11.s64 + 16112;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x825af6c8
	ctx.lr = 0x8210BEC0;
	sub_825AF6C8(ctx, base);
	// addi r5,r31,428
	ctx.r5.s64 = ctx.r31.s64 + 428;
	// b 0x8210bf14
	goto loc_8210BF14;
loc_8210BEC8:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r31,r11,12788
	ctx.r31.s64 = ctx.r11.s64 + 12788;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r5,r31,-36
	ctx.r5.s64 = ctx.r31.s64 + -36;
	// addi r30,r11,16112
	ctx.r30.s64 = ctx.r11.s64 + 16112;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x825af6c8
	ctx.lr = 0x8210BEE8;
	sub_825AF6C8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// b 0x8210bf14
	goto loc_8210BF14;
loc_8210BEF0:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r31,r11,12788
	ctx.r31.s64 = ctx.r11.s64 + 12788;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r5,r31,-112
	ctx.r5.s64 = ctx.r31.s64 + -112;
	// addi r30,r11,16112
	ctx.r30.s64 = ctx.r11.s64 + 16112;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x825af6c8
	ctx.lr = 0x8210BF10;
	sub_825AF6C8(ctx, base);
	// addi r5,r31,-64
	ctx.r5.s64 = ctx.r31.s64 + -64;
loc_8210BF14:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// bl 0x825af6c8
	ctx.lr = 0x8210BF20;
	sub_825AF6C8(ctx, base);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r30,r11,23504
	ctx.r30.s64 = ctx.r11.s64 + 23504;
	// lfs f27,16108(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 16108);
	ctx.f27.f64 = double(temp.f32);
	// lis r11,-32110
	ctx.r11.s64 = -2104360960;
	// lfs f29,25556(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 25556);
	ctx.f29.f64 = double(temp.f32);
	// lfs f30,-1632(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -1632);
	ctx.f30.f64 = double(temp.f32);
	// lfs f28,-1636(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -1636);
	ctx.f28.f64 = double(temp.f32);
	// addi r31,r11,12656
	ctx.r31.s64 = ctx.r11.s64 + 12656;
	// lfs f31,6056(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6056);
	ctx.f31.f64 = double(temp.f32);
loc_8210BF58:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821508c0
	ctx.lr = 0x8210BF60;
	sub_821508C0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8217ea50
	ctx.lr = 0x8210BF6C;
	sub_8217EA50(ctx, base);
	// bl 0x82356350
	ctx.lr = 0x8210BF70;
	sub_82356350(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82356420
	ctx.lr = 0x8210BF78;
	sub_82356420(ctx, base);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// fmr f4,f29
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f29.f64;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// fmr f2,f28
	ctx.f2.f64 = ctx.f28.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8235d9d0
	ctx.lr = 0x8210BF98;
	sub_8235D9D0(ctx, base);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// addi r4,r1,608
	ctx.r4.s64 = ctx.r1.s64 + 608;
	// fmr f4,f29
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f29.f64;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// fmr f2,f27
	ctx.f2.f64 = ctx.f27.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8235d9d0
	ctx.lr = 0x8210BFB8;
	sub_8235D9D0(ctx, base);
	// bl 0x82356408
	ctx.lr = 0x8210BFBC;
	sub_82356408(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82150858
	ctx.lr = 0x8210BFC4;
	sub_82150858(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821508a0
	ctx.lr = 0x8210BFCC;
	sub_821508A0(ctx, base);
	// b 0x8210bf58
	goto loc_8210BF58;
}

__attribute__((alias("__imp__sub_8210BFD0"))) PPC_WEAK_FUNC(sub_8210BFD0);
PPC_FUNC_IMPL(__imp__sub_8210BFD0) {
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
	// lis r8,7
	ctx.r8.s64 = 458752;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r1,81
	ctx.r10.s64 = ctx.r1.s64 + 81;
	// ori r7,r8,16260
	ctx.r7.u64 = ctx.r8.u64 | 16260;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r9,r1,86
	ctx.r9.s64 = ctx.r1.s64 + 86;
	// li r6,3
	ctx.r6.s64 = 3;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// li r5,5
	ctx.r5.s64 = 5;
	// stb r11,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r11.u8);
	// li r4,2
	ctx.r4.s64 = 2;
	// stwx r8,r3,r7
	PPC_STORE_U32(ctx.r3.u32 + ctx.r7.u32, ctx.r8.u32);
	// li r3,4
	ctx.r3.s64 = 4;
	// stb r11,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r11.u8);
	// stb r11,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r11.u8);
	// stb r11,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r11.u8);
	// sth r11,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r11.u16);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// stb r6,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r6.u8);
	// stb r5,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r5.u8);
	// stb r8,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r8.u8);
	// stb r4,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r4.u8);
	// stb r3,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r3.u8);
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x825b5b20
	ctx.lr = 0x8210C040;
	sub_825B5B20(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x825b5aa8
	ctx.lr = 0x8210C048;
	sub_825B5AA8(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x825b5cb8
	ctx.lr = 0x8210C050;
	sub_825B5CB8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8210C060"))) PPC_WEAK_FUNC(sub_8210C060);
PPC_FUNC_IMPL(__imp__sub_8210C060) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae0
	ctx.lr = 0x8210C068;
	__savegprlr_22(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,-1
	ctx.r29.s64 = -1;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r28,-1
	ctx.r28.s64 = -1;
	// lis r3,2688
	ctx.r3.s64 = 176160768;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r29,3892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3892, ctx.r29.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r30,3896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3896, ctx.r30.u32);
	// ori r3,r3,40960
	ctx.r3.u64 = ctx.r3.u64 | 40960;
	// bl 0x825af710
	ctx.lr = 0x8210C09C;
	sub_825AF710(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r3,3473
	ctx.r3.s64 = 227606528;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// ori r3,r3,32768
	ctx.r3.u64 = ctx.r3.u64 | 32768;
	// stw r11,4060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4060, ctx.r11.u32);
	// bl 0x825af710
	ctx.lr = 0x8210C0BC;
	sub_825AF710(ctx, base);
	// lwz r11,4060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4060);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// stw r3,4064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4064, ctx.r3.u32);
	// lis r9,928
	ctx.r9.s64 = 60817408;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// ori r4,r5,16384
	ctx.r4.u64 = ctx.r5.u64 | 16384;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// lis r10,352
	ctx.r10.s64 = 23068672;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// lis r8,320
	ctx.r8.s64 = 20971520;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lis r7,5
	ctx.r7.s64 = 327680;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// addis r26,r11,1606
	ctx.r26.s64 = ctx.r11.s64 + 105250816;
	// addis r28,r11,1280
	ctx.r28.s64 = ctx.r11.s64 + 83886080;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// addis r25,r11,1607
	ctx.r25.s64 = ctx.r11.s64 + 105316352;
	// stw r5,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r5.u32);
	// ori r6,r7,30720
	ctx.r6.u64 = ctx.r7.u64 | 30720;
	// stw r8,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r8.u32);
	// addis r27,r11,1600
	ctx.r27.s64 = ctx.r11.s64 + 104857600;
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
	// addis r3,r11,2423
	ctx.r3.s64 = ctx.r11.s64 + 158793728;
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// addi r26,r26,-32768
	ctx.r26.s64 = ctx.r26.s64 + -32768;
	// stw r28,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r28.u32);
	// lis r7,816
	ctx.r7.s64 = 53477376;
	// stw r29,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r29.u32);
	// addi r25,r25,-16384
	ctx.r25.s64 = ctx.r25.s64 + -16384;
	// stw r6,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r6.u32);
	// addi r3,r3,-16384
	ctx.r3.s64 = ctx.r3.s64 + -16384;
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// addis r8,r11,2423
	ctx.r8.s64 = ctx.r11.s64 + 158793728;
	// stw r27,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r27.u32);
	// stw r29,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r29.u32);
	// li r10,1024
	ctx.r10.s64 = 1024;
	// stw r4,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r4.u32);
	// addi r8,r8,-12288
	ctx.r8.s64 = ctx.r8.s64 + -12288;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addis r6,r11,2423
	ctx.r6.s64 = ctx.r11.s64 + 158793728;
	// stw r26,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r26.u32);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// stw r7,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r7.u32);
	// addis r7,r11,2423
	ctx.r7.s64 = ctx.r11.s64 + 158793728;
	// stw r29,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r29.u32);
	// addi r6,r6,-4096
	ctx.r6.s64 = ctx.r6.s64 + -4096;
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// addi r7,r7,-8192
	ctx.r7.s64 = ctx.r7.s64 + -8192;
	// stw r25,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r25.u32);
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// stw r3,3960(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3960, ctx.r3.u32);
	// addis r3,r11,2424
	ctx.r3.s64 = ctx.r11.s64 + 158859264;
	// stw r29,3952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3952, ctx.r29.u32);
	// addis r29,r11,2424
	ctx.r29.s64 = ctx.r11.s64 + 158859264;
	// stw r30,3948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3948, ctx.r30.u32);
	// addi r3,r3,4096
	ctx.r3.s64 = ctx.r3.s64 + 4096;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r10,3956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3956, ctx.r10.u32);
	// lis r10,22
	ctx.r10.s64 = 1441792;
	// stw r30,3964(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3964, ctx.r30.u32);
	// rotlwi r9,r8,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// ori r10,r10,2048
	ctx.r10.u64 = ctx.r10.u64 | 2048;
	// addis r27,r11,2446
	ctx.r27.s64 = ctx.r11.s64 + 160301056;
	// addis r25,r11,2468
	ctx.r25.s64 = ctx.r11.s64 + 161742848;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// stw r8,3968(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3968, ctx.r8.u32);
	// rotlwi r10,r30,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r30.u32, 0);
	// stw r9,3976(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3976, ctx.r9.u32);
	// li r8,1024
	ctx.r8.s64 = 1024;
	// stw r11,3972(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3972, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r29,r29,8192
	ctx.r29.s64 = ctx.r29.s64 + 8192;
	// stw r7,3992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3992, ctx.r7.u32);
	// addi r27,r27,12288
	ctx.r27.s64 = ctx.r27.s64 + 12288;
	// stw r10,3980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3980, ctx.r10.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r8,3988(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3988, ctx.r8.u32);
	// addi r25,r25,16384
	ctx.r25.s64 = ctx.r25.s64 + 16384;
	// addis r30,r11,2424
	ctx.r30.s64 = ctx.r11.s64 + 158859264;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// addi r30,r30,-1024
	ctx.r30.s64 = ctx.r30.s64 + -1024;
	// stw r10,3984(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3984, ctx.r10.u32);
	// stw r6,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r6.u32);
	// addis r6,r11,2543
	ctx.r6.s64 = ctx.r11.s64 + 166658048;
	// stw r5,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r5.u32);
	// lis r5,48
	ctx.r5.s64 = 3145728;
	// addi r6,r6,16384
	ctx.r6.s64 = ctx.r6.s64 + 16384;
	// stw r9,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
	// stw r10,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r10.u32);
	// stw r4,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r4.u32);
	// addis r4,r11,2490
	ctx.r4.s64 = ctx.r11.s64 + 163184640;
	// stw r9,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r9.u32);
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r4,r4,20480
	ctx.r4.s64 = ctx.r4.s64 + 20480;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// addis r5,r11,2424
	ctx.r5.s64 = ctx.r11.s64 + 158859264;
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// lis r6,96
	ctx.r6.s64 = 6291456;
	// stw r10,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r10.u32);
	// addi r5,r5,-4096
	ctx.r5.s64 = ctx.r5.s64 + -4096;
	// stw r8,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r8.u32);
	// lis r8,22
	ctx.r8.s64 = 1441792;
	// stw r3,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r3.u32);
	// lis r3,2
	ctx.r3.s64 = 131072;
	// ori r7,r8,2048
	ctx.r7.u64 = ctx.r8.u64 | 2048;
	// stw r9,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r9.u32);
	// stw r10,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r10.u32);
	// ori r8,r3,2048
	ctx.r8.u64 = ctx.r3.u64 | 2048;
	// stw r9,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r9.u32);
	// addis r3,r11,2424
	ctx.r3.s64 = ctx.r11.s64 + 158859264;
	// stw r29,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r29.u32);
	// addis r29,r11,2424
	ctx.r29.s64 = ctx.r11.s64 + 158859264;
	// stw r10,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r10.u32);
	// addi r3,r3,-2048
	ctx.r3.s64 = ctx.r3.s64 + -2048;
	// stw r28,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r28.u32);
	// stw r9,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r9.u32);
	// stw r10,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r10.u32);
	// stw r27,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r27.u32);
	// stw r26,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r26.u32);
	// stw r7,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r7.u32);
	// addis r7,r11,2591
	ctx.r7.s64 = ctx.r11.s64 + 169803776;
	// stw r4,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r4.u32);
	// addis r4,r11,2424
	ctx.r4.s64 = ctx.r11.s64 + 158859264;
	// stw r10,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r10.u32);
	// addi r7,r7,16384
	ctx.r7.s64 = ctx.r7.s64 + 16384;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r9,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r9.u32);
	// addi r4,r4,-3072
	ctx.r4.s64 = ctx.r4.s64 + -3072;
	// stw r25,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r25.u32);
	// stw r9,4012(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4012, ctx.r9.u32);
	// stw r10,4016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4016, ctx.r10.u32);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r11,4024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4024, ctx.r11.u32);
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r9,4020(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4020, ctx.r9.u32);
	// li r9,1024
	ctx.r9.s64 = 1024;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r8,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r8.u32);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r10,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r10.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r11,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r10.u32);
	// stw r7,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r7.u32);
	// addis r7,r8,2424
	ctx.r7.s64 = ctx.r8.s64 + 158859264;
	// stw r6,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r6.u32);
	// addis r6,r8,2492
	ctx.r6.s64 = ctx.r8.s64 + 163315712;
	// addi r7,r7,1024
	ctx.r7.s64 = ctx.r7.s64 + 1024;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r6,r6,24576
	ctx.r6.s64 = ctx.r6.s64 + 24576;
	// stw r11,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r11.u32);
	// stw r10,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r10.u32);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// addis r6,r8,2525
	ctx.r6.s64 = ctx.r8.s64 + 165478400;
	// stw r11,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r11.u32);
	// stw r11,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r11.u32);
	// addi r6,r6,-32768
	ctx.r6.s64 = ctx.r6.s64 + -32768;
	// stw r11,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r11.u32);
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
	// stw r5,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r5.u32);
	// lis r5,16
	ctx.r5.s64 = 1048576;
	// stw r4,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r4.u32);
	// stw r3,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r3.u32);
	// addis r3,r8,2508
	ctx.r3.s64 = ctx.r8.s64 + 164364288;
	// stw r30,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r30.u32);
	// addis r30,r8,2687
	ctx.r30.s64 = ctx.r8.s64 + 176095232;
	// stw r29,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r29.u32);
	// addi r3,r3,28672
	ctx.r3.s64 = ctx.r3.s64 + 28672;
	// stw r10,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r10.u32);
	// addi r30,r30,16384
	ctx.r30.s64 = ctx.r30.s64 + 16384;
	// stw r10,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r10.u32);
	// stw r10,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r10.u32);
	// stw r10,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r10.u32);
	// stw r10,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r10.u32);
	// stw r9,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r9.u32);
	// stw r9,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r9.u32);
	// stw r9,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r9.u32);
	// stw r9,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r9.u32);
	// stw r9,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r9.u32);
	// ori r9,r5,2048
	ctx.r9.u64 = ctx.r5.u64 | 2048;
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r5,18
	ctx.r5.s64 = 1179648;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// addis r28,r8,91
	ctx.r28.s64 = ctx.r8.s64 + 5963776;
	// addis r27,r8,192
	ctx.r27.s64 = ctx.r8.s64 + 12582912;
	// ori r29,r9,22528
	ctx.r29.u64 = ctx.r9.u64 | 22528;
	// lis r9,101
	ctx.r9.s64 = 6619136;
	// addis r8,r8,293
	ctx.r8.s64 = ctx.r8.s64 + 19202048;
	// ori r5,r5,49152
	ctx.r5.u64 = ctx.r5.u64 | 49152;
	// addi r28,r28,-32768
	ctx.r28.s64 = ctx.r28.s64 + -32768;
	// ori r9,r9,20480
	ctx.r9.u64 = ctx.r9.u64 | 20480;
	// addi r27,r27,-12288
	ctx.r27.s64 = ctx.r27.s64 + -12288;
	// addi r8,r8,8192
	ctx.r8.s64 = ctx.r8.s64 + 8192;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r11,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r11.u32);
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r11,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r11.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r11,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r11.u32);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r11,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r11.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r11.u32);
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r11,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r4.u32);
	// stw r10,3784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3784, ctx.r10.u32);
	// lis r26,16
	ctx.r26.s64 = 1048576;
	// stw r7,3788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3788, ctx.r7.u32);
	// stw r3,3792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3792, ctx.r3.u32);
	// lis r3,24
	ctx.r3.s64 = 1572864;
	// stw r11,3780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3780, ctx.r11.u32);
	// stw r11,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r11.u32);
	// stw r6,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r6.u32);
	// stw r10,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r10.u32);
	// stw r5,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r5.u32);
	// lis r5,272
	ctx.r5.s64 = 17825792;
	// stw r11,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r11.u32);
	// stw r10,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r10.u32);
	// stw r30,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r30.u32);
	// stw r29,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r29.u32);
	// lis r29,160
	ctx.r29.s64 = 10485760;
	// stw r9,3660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3660, ctx.r9.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r9,3676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3676, ctx.r9.u32);
	// stw r9,3692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3692, ctx.r9.u32);
	// addis r9,r10,394
	ctx.r9.s64 = ctx.r10.s64 + 25821184;
	// stw r28,3664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3664, ctx.r28.u32);
	// addis r6,r10,420
	ctx.r6.s64 = ctx.r10.s64 + 27525120;
	// addi r9,r9,28672
	ctx.r9.s64 = ctx.r9.s64 + 28672;
	// stw r27,3680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3680, ctx.r27.u32);
	// stw r8,3696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3696, ctx.r8.u32);
	// lis r8,25
	ctx.r8.s64 = 1638400;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r6,r6,4096
	ctx.r6.s64 = ctx.r6.s64 + 4096;
	// ori r7,r8,38912
	ctx.r7.u64 = ctx.r8.u64 | 38912;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addis r4,r10,692
	ctx.r4.s64 = ctx.r10.s64 + 45350912;
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// addis r9,r10,716
	ctx.r9.s64 = ctx.r10.s64 + 46923776;
	// stw r11,3652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3652, ctx.r11.u32);
	// addi r4,r4,4096
	ctx.r4.s64 = ctx.r4.s64 + 4096;
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// addi r9,r9,4096
	ctx.r9.s64 = ctx.r9.s64 + 4096;
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// lis r8,960
	ctx.r8.s64 = 62914560;
	// stw r11,3656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3656, ctx.r11.u32);
	// addis r7,r10,1676
	ctx.r7.s64 = ctx.r10.s64 + 109838336;
	// stw r11,3668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3668, ctx.r11.u32);
	// addis r30,r10,1724
	ctx.r30.s64 = ctx.r10.s64 + 112984064;
	// stw r11,3672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3672, ctx.r11.u32);
	// addis r28,r10,1884
	ctx.r28.s64 = ctx.r10.s64 + 123469824;
	// stw r11,3684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3684, ctx.r11.u32);
	// addis r10,r10,2364
	ctx.r10.s64 = ctx.r10.s64 + 154927104;
	// stw r11,3688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3688, ctx.r11.u32);
	// addi r7,r7,4096
	ctx.r7.s64 = ctx.r7.s64 + 4096;
	// stw r11,3716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3716, ctx.r11.u32);
	// lis r6,48
	ctx.r6.s64 = 3145728;
	// addi r30,r30,8192
	ctx.r30.s64 = ctx.r30.s64 + 8192;
	// addi r28,r28,8192
	ctx.r28.s64 = ctx.r28.s64 + 8192;
	// lis r27,480
	ctx.r27.s64 = 31457280;
	// addi r10,r10,8192
	ctx.r10.s64 = ctx.r10.s64 + 8192;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r11,3728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3728, ctx.r11.u32);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r11,3720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3720, ctx.r11.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r11,3724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3724, ctx.r11.u32);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r5,3740(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3740, ctx.r5.u32);
	// stw r11,3732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3732, ctx.r11.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,3744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3744, ctx.r11.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,3736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3736, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,3760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3760, ctx.r4.u32);
	// stw r3,3756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3756, ctx.r3.u32);
	// stw r11,3748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3748, ctx.r11.u32);
	// stw r11,3752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3752, ctx.r11.u32);
	// stw r11,3764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3764, ctx.r11.u32);
	// stw r9,3776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3776, ctx.r9.u32);
	// stw r11,3768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3768, ctx.r11.u32);
	// stw r8,3772(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3772, ctx.r8.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r4,37
	ctx.r4.s64 = 2424832;
	// stw r7,3824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3824, ctx.r7.u32);
	// li r7,1024
	ctx.r7.s64 = 1024;
	// addis r8,r9,1724
	ctx.r8.s64 = ctx.r9.s64 + 112984064;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// ori r3,r4,32768
	ctx.r3.u64 = ctx.r4.u64 | 32768;
	// addi r8,r8,4096
	ctx.r8.s64 = ctx.r8.s64 + 4096;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r11,3812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3812, ctx.r11.u32);
	// lis r4,101
	ctx.r4.s64 = 6619136;
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// lis r7,80
	ctx.r7.s64 = 5242880;
	// stw r11,3816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3816, ctx.r11.u32);
	// stw r6,3820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3820, ctx.r6.u32);
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// addis r8,r9,2380
	ctx.r8.s64 = ctx.r9.s64 + 155975680;
	// stw r11,3828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3828, ctx.r11.u32);
	// stw r11,3832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3832, ctx.r11.u32);
	// addi r8,r8,8192
	ctx.r8.s64 = ctx.r8.s64 + 8192;
	// stw r30,3840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3840, ctx.r30.u32);
	// stw r29,3836(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3836, ctx.r29.u32);
	// stw r11,4044(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4044, ctx.r11.u32);
	// stw r11,4048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4048, ctx.r11.u32);
	// stw r28,4056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4056, ctx.r28.u32);
	// addis r28,r9,203
	ctx.r28.s64 = ctx.r9.s64 + 13303808;
	// stw r27,4052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4052, ctx.r27.u32);
	// stw r10,3856(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3856, ctx.r10.u32);
	// lis r10,53
	ctx.r10.s64 = 3473408;
	// stw r11,3844(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3844, ctx.r11.u32);
	// addi r28,r28,-24576
	ctx.r28.s64 = ctx.r28.s64 + -24576;
	// stw r11,3848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3848, ctx.r11.u32);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r26,3852(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3852, ctx.r26.u32);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// stw r11,3796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3796, ctx.r11.u32);
	// ori r10,r4,20480
	ctx.r10.u64 = ctx.r4.u64 | 20480;
	// addis r26,r9,304
	ctx.r26.s64 = ctx.r9.s64 + 19922944;
	// add r30,r9,r10
	ctx.r30.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// addi r26,r26,-4096
	ctx.r26.s64 = ctx.r26.s64 + -4096;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r10,3800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3800, ctx.r10.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r9,3804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3804, ctx.r9.u32);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,3808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3808, ctx.r11.u32);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r10,3872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3872, ctx.r10.u32);
	// stw r9,3864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3864, ctx.r9.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r6,3868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3868, ctx.r6.u32);
	// stw r11,3860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3860, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r5,3888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3888, ctx.r5.u32);
	// stw r3,3884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3884, ctx.r3.u32);
	// stw r11,3876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3876, ctx.r11.u32);
	// stw r11,3880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3880, ctx.r11.u32);
	// stw r11,3996(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3996, ctx.r11.u32);
	// stw r8,4008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4008, ctx.r8.u32);
	// stw r11,4000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4000, ctx.r11.u32);
	// stw r7,4004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4004, ctx.r7.u32);
	// stw r11,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r11.u32);
	// stw r10,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r10.u32);
	// stw r9,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r9.u32);
	// stw r4,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r4.u32);
	// stw r11,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r11.u32);
	// stw r30,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r30.u32);
	// stw r9,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r9.u32);
	// stw r29,412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 412, ctx.r29.u32);
	// stw r11,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r11.u32);
	// stw r28,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r28.u32);
	// stw r9,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r9.u32);
	// stw r27,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r27.u32);
	// stw r11,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r11.u32);
	// addis r5,r10,507
	ctx.r5.s64 = ctx.r10.s64 + 33226752;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// lis r6,101
	ctx.r6.s64 = 6619136;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r5,r5,-28672
	ctx.r5.s64 = ctx.r5.s64 + -28672;
	// stw r9,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r9.u32);
	// ori r8,r6,20480
	ctx.r8.u64 = ctx.r6.u64 | 20480;
	// stw r9,456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 456, ctx.r9.u32);
	// lis r9,3
	ctx.r9.s64 = 196608;
	// stw r26,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r26.u32);
	// addis r7,r10,405
	ctx.r7.s64 = ctx.r10.s64 + 26542080;
	// stw r11,452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 452, ctx.r11.u32);
	// ori r9,r9,49152
	ctx.r9.u64 = ctx.r9.u64 | 49152;
	// stw r11,468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 468, ctx.r11.u32);
	// stw r5,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r5.u32);
	// addi r7,r7,16384
	ctx.r7.s64 = ctx.r7.s64 + 16384;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// stw r25,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r25.u32);
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// stw r8,460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 460, ctx.r8.u32);
	// addis r4,r10,608
	ctx.r4.s64 = ctx.r10.s64 + 39845888;
	// stw r7,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r7.u32);
	// addis r8,r10,928
	ctx.r8.s64 = ctx.r10.s64 + 60817408;
	// lis r7,25
	ctx.r7.s64 = 1638400;
	// addi r4,r4,-8192
	ctx.r4.s64 = ctx.r4.s64 + -8192;
	// lis r3,320
	ctx.r3.s64 = 20971520;
	// addi r8,r8,-8192
	ctx.r8.s64 = ctx.r8.s64 + -8192;
	// ori r6,r7,38912
	ctx.r6.u64 = ctx.r7.u64 | 38912;
	// lis r7,1088
	ctx.r7.s64 = 71303168;
	// addis r5,r10,954
	ctx.r5.s64 = ctx.r10.s64 + 62521344;
	// addis r30,r10,2042
	ctx.r30.s64 = ctx.r10.s64 + 133824512;
	// addis r28,r10,2045
	ctx.r28.s64 = ctx.r10.s64 + 134021120;
	// addi r5,r5,-32768
	ctx.r5.s64 = ctx.r5.s64 + -32768;
	// addi r30,r30,-32768
	ctx.r30.s64 = ctx.r30.s64 + -32768;
	// addi r28,r28,16384
	ctx.r28.s64 = ctx.r28.s64 + 16384;
	// addis r10,r10,2049
	ctx.r10.s64 = ctx.r10.s64 + 134283264;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r11,472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 472, ctx.r11.u32);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r9,480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 480, ctx.r9.u32);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r9,476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 476, ctx.r9.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r4,496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 496, ctx.r4.u32);
	// stw r3,492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 492, ctx.r3.u32);
	// stw r11,488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 488, ctx.r11.u32);
	// stw r8,3912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3912, ctx.r8.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r6,3908(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3908, ctx.r6.u32);
	// lis r6,3
	ctx.r6.s64 = 196608;
	// stw r9,3900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3900, ctx.r9.u32);
	// stw r11,3904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3904, ctx.r11.u32);
	// stw r7,524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 524, ctx.r7.u32);
	// addis r7,r8,2053
	ctx.r7.s64 = ctx.r8.s64 + 134545408;
	// stw r5,528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 528, ctx.r5.u32);
	// addis r5,r8,2057
	ctx.r5.s64 = ctx.r8.s64 + 134807552;
	// addi r7,r7,-16384
	ctx.r7.s64 = ctx.r7.s64 + -16384;
	// stw r9,516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 516, ctx.r9.u32);
	// stw r11,520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 520, ctx.r11.u32);
	// addi r5,r5,-32768
	ctx.r5.s64 = ctx.r5.s64 + -32768;
	// stw r9,532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 532, ctx.r9.u32);
	// stw r30,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r30.u32);
	// stw r11,536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 536, ctx.r11.u32);
	// stw r29,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r29.u32);
	// stw r9,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r9.u32);
	// stw r28,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r28.u32);
	// stw r11,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r11.u32);
	// stw r10,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r10.u32);
	// ori r10,r6,49152
	ctx.r10.u64 = ctx.r6.u64 | 49152;
	// stw r27,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r27.u32);
	// stw r9,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r9.u32);
	// stw r11,568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 568, ctx.r11.u32);
	// stw r26,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r26.u32);
	// stw r9,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r9.u32);
	// stw r7,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r7.u32);
	// stw r11,584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 584, ctx.r11.u32);
	// addis r3,r8,2060
	ctx.r3.s64 = ctx.r8.s64 + 135004160;
	// stw r10,588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 588, ctx.r10.u32);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// stw r5,608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 608, ctx.r5.u32);
	// addis r27,r8,2068
	ctx.r27.s64 = ctx.r8.s64 + 135528448;
	// stw r9,596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 596, ctx.r9.u32);
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// stw r11,600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 600, ctx.r11.u32);
	// addi r3,r3,16384
	ctx.r3.s64 = ctx.r3.s64 + 16384;
	// stw r9,612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 612, ctx.r9.u32);
	// addis r25,r8,2072
	ctx.r25.s64 = ctx.r8.s64 + 135790592;
	// stw r11,616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 616, ctx.r11.u32);
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// stw r4,604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 604, ctx.r4.u32);
	// addis r29,r8,2064
	ctx.r29.s64 = ctx.r8.s64 + 135266304;
	// stw r9,628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 628, ctx.r9.u32);
	// addis r23,r8,2075
	ctx.r23.s64 = ctx.r8.s64 + 135987200;
	// stw r30,620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 620, ctx.r30.u32);
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// stw r3,624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 624, ctx.r3.u32);
	// addi r27,r27,-16384
	ctx.r27.s64 = ctx.r27.s64 + -16384;
	// stw r11,632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 632, ctx.r11.u32);
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// stw r28,636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 636, ctx.r28.u32);
	// addi r25,r25,-32768
	ctx.r25.s64 = ctx.r25.s64 + -32768;
	// stw r29,640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 640, ctx.r29.u32);
	// mr r22,r10
	ctx.r22.u64 = ctx.r10.u64;
	// stw r9,644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 644, ctx.r9.u32);
	// addi r23,r23,16384
	ctx.r23.s64 = ctx.r23.s64 + 16384;
	// stw r11,648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 648, ctx.r11.u32);
	// lis r5,2
	ctx.r5.s64 = 131072;
	// stw r27,656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 656, ctx.r27.u32);
	// stw r26,652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 652, ctx.r26.u32);
	// addi r10,r31,696
	ctx.r10.s64 = ctx.r31.s64 + 696;
	// stw r9,660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 660, ctx.r9.u32);
	// addis r6,r8,2079
	ctx.r6.s64 = ctx.r8.s64 + 136249344;
	// stw r25,672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 672, ctx.r25.u32);
	// li r7,18
	ctx.r7.s64 = 18;
	// stw r11,664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 664, ctx.r11.u32);
	// ori r5,r5,63488
	ctx.r5.u64 = ctx.r5.u64 | 63488;
	// stw r24,668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 668, ctx.r24.u32);
	// stw r9,676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 676, ctx.r9.u32);
	// stw r23,688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 688, ctx.r23.u32);
	// stw r11,680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 680, ctx.r11.u32);
	// stw r22,684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 684, ctx.r22.u32);
loc_8210C8B8:
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// stw r6,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r6.u32);
	// stw r9,-4(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4, ctx.r9.u32);
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bne cr6,0x8210c8b8
	if (!ctx.cr6.eq) goto loc_8210C8B8;
	// lis r3,23
	ctx.r3.s64 = 1507328;
	// stw r9,980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 980, ctx.r9.u32);
	// addis r4,r8,2132
	ctx.r4.s64 = ctx.r8.s64 + 139722752;
	// stw r11,984(r31)
	PPC_STORE_U32(ctx.r31.u32 + 984, ctx.r11.u32);
	// ori r7,r3,18432
	ctx.r7.u64 = ctx.r3.u64 | 18432;
	// lis r10,5
	ctx.r10.s64 = 327680;
	// addis r3,r8,2156
	ctx.r3.s64 = ctx.r8.s64 + 141295616;
	// addi r4,r4,28672
	ctx.r4.s64 = ctx.r4.s64 + 28672;
	// ori r30,r10,20480
	ctx.r30.u64 = ctx.r10.u64 | 20480;
	// addi r3,r3,-16384
	ctx.r3.s64 = ctx.r3.s64 + -16384;
	// stw r7,988(r31)
	PPC_STORE_U32(ctx.r31.u32 + 988, ctx.r7.u32);
	// addis r5,r8,2230
	ctx.r5.s64 = ctx.r8.s64 + 146145280;
	// lis r7,96
	ctx.r7.s64 = 6291456;
	// stw r4,992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 992, ctx.r4.u32);
	// addi r10,r31,1016
	ctx.r10.s64 = ctx.r31.s64 + 1016;
	// addi r5,r5,-16384
	ctx.r5.s64 = ctx.r5.s64 + -16384;
	// stw r9,996(r31)
	PPC_STORE_U32(ctx.r31.u32 + 996, ctx.r9.u32);
	// li r6,12
	ctx.r6.s64 = 12;
	// stw r3,1008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1008, ctx.r3.u32);
	// stw r11,1000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1000, ctx.r11.u32);
	// ori r7,r7,40960
	ctx.r7.u64 = ctx.r7.u64 | 40960;
	// stw r30,1004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1004, ctx.r30.u32);
loc_8210C934:
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// stw r5,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r5.u32);
	// stw r9,-4(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4, ctx.r9.u32);
	// add r5,r5,r7
	ctx.r5.u64 = ctx.r5.u64 + ctx.r7.u64;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bne cr6,0x8210c934
	if (!ctx.cr6.eq) goto loc_8210C934;
	// addis r6,r8,2161
	ctx.r6.s64 = ctx.r8.s64 + 141623296;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// lis r5,56
	ctx.r5.s64 = 3670016;
	// stw r9,1204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1204, ctx.r9.u32);
	// addi r6,r6,4096
	ctx.r6.s64 = ctx.r6.s64 + 4096;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addis r4,r8,2217
	ctx.r4.s64 = ctx.r8.s64 + 145293312;
	// lis r3,12
	ctx.r3.s64 = 786432;
	// addi r4,r4,4096
	ctx.r4.s64 = ctx.r4.s64 + 4096;
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// ori r10,r3,45056
	ctx.r10.u64 = ctx.r3.u64 | 45056;
	// stw r6,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r6.u32);
	// addis r27,r8,203
	ctx.r27.s64 = ctx.r8.s64 + 13303808;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// lis r10,101
	ctx.r10.s64 = 6619136;
	// addis r6,r8,2301
	ctx.r6.s64 = ctx.r8.s64 + 150798336;
	// ori r10,r10,20480
	ctx.r10.u64 = ctx.r10.u64 | 20480;
	// addis r4,r8,1997
	ctx.r4.s64 = ctx.r8.s64 + 130875392;
	// add r29,r8,r10
	ctx.r29.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addis r25,r8,304
	ctx.r25.s64 = ctx.r8.s64 + 19922944;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// rotlwi r8,r11,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r6,r6,20480
	ctx.r6.s64 = ctx.r6.s64 + 20480;
	// addi r4,r4,24576
	ctx.r4.s64 = ctx.r4.s64 + 24576;
	// addi r27,r27,-24576
	ctx.r27.s64 = ctx.r27.s64 + -24576;
	// addi r25,r25,-4096
	ctx.r25.s64 = ctx.r25.s64 + -4096;
	// stw r8,1208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1208, ctx.r8.u32);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r10,1212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1212, ctx.r10.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r9,1216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1216, ctx.r9.u32);
	// stw r11,1224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1224, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r7,1228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1228, ctx.r7.u32);
	// li r7,3
	ctx.r7.s64 = 3;
	// stw r8,1232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1232, ctx.r8.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r9,1220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1220, ctx.r9.u32);
	// lis r9,101
	ctx.r9.s64 = 6619136;
	// stw r6,2432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2432, ctx.r6.u32);
	// lis r6,405
	ctx.r6.s64 = 26542080;
	// stw r11,2420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2420, ctx.r11.u32);
	// ori r9,r9,20480
	ctx.r9.u64 = ctx.r9.u64 | 20480;
	// stw r10,2424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2424, ctx.r10.u32);
	// stw r5,2428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2428, ctx.r5.u32);
	// stw r7,3640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3640, ctx.r7.u32);
	// lis r7,506
	ctx.r7.s64 = 33161216;
	// stw r4,3648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3648, ctx.r4.u32);
	// stw r3,3644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3644, ctx.r3.u32);
	// ori r3,r6,16384
	ctx.r3.u64 = ctx.r6.u64 | 16384;
	// stw r11,3636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3636, ctx.r11.u32);
	// stw r30,1244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1244, ctx.r30.u32);
	// ori r30,r7,36864
	ctx.r30.u64 = ctx.r7.u64 | 36864;
	// stw r28,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r28.u32);
	// addis r28,r8,608
	ctx.r28.s64 = ctx.r8.s64 + 39845888;
	// stw r11,1236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1236, ctx.r11.u32);
	// add r4,r8,r3
	ctx.r4.u64 = ctx.r8.u64 + ctx.r3.u64;
	// stw r8,1248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1248, ctx.r8.u32);
	// addi r28,r28,-8192
	ctx.r28.s64 = ctx.r28.s64 + -8192;
	// stw r10,1240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1240, ctx.r10.u32);
	// stw r29,1264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1264, ctx.r29.u32);
	// add r29,r8,r30
	ctx.r29.u64 = ctx.r8.u64 + ctx.r30.u64;
	// stw r11,1252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1252, ctx.r11.u32);
	// stw r10,1256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1256, ctx.r10.u32);
	// stw r11,1268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1268, ctx.r11.u32);
	// stw r27,1280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1280, ctx.r27.u32);
	// stw r10,1272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1272, ctx.r10.u32);
	// stw r26,1276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1276, ctx.r26.u32);
	// stw r11,1284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1284, ctx.r11.u32);
	// stw r25,1296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1296, ctx.r25.u32);
	// stw r10,1288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1288, ctx.r10.u32);
	// stw r24,1292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1292, ctx.r24.u32);
	// lis r6,25
	ctx.r6.s64 = 1638400;
	// stw r4,1312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1312, ctx.r4.u32);
	// addis r26,r8,928
	ctx.r26.s64 = ctx.r8.s64 + 60817408;
	// stw r11,1300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1300, ctx.r11.u32);
	// addis r24,r8,954
	ctx.r24.s64 = ctx.r8.s64 + 62521344;
	// stw r10,1304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1304, ctx.r10.u32);
	// lis r27,320
	ctx.r27.s64 = 20971520;
	// stw r9,1308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1308, ctx.r9.u32);
	// ori r25,r6,38912
	ctx.r25.u64 = ctx.r6.u64 | 38912;
	// stw r11,1316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1316, ctx.r11.u32);
	// addi r26,r26,-8192
	ctx.r26.s64 = ctx.r26.s64 + -8192;
	// stw r29,1328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1328, ctx.r29.u32);
	// addi r24,r24,-32768
	ctx.r24.s64 = ctx.r24.s64 + -32768;
	// stw r10,1320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1320, ctx.r10.u32);
	// lis r23,1088
	ctx.r23.s64 = 71303168;
	// stw r9,1324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1324, ctx.r9.u32);
	// addis r5,r8,2042
	ctx.r5.s64 = ctx.r8.s64 + 133824512;
	// stw r11,1268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1268, ctx.r11.u32);
	// lis r4,3
	ctx.r4.s64 = 196608;
	// stw r28,1280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1280, ctx.r28.u32);
	// stw r10,1272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1272, ctx.r10.u32);
	// addi r7,r31,1320
	ctx.r7.s64 = ctx.r31.s64 + 1320;
	// stw r27,1276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1276, ctx.r27.u32);
	// addi r5,r5,-32768
	ctx.r5.s64 = ctx.r5.s64 + -32768;
	// stw r11,3916(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3916, ctx.r11.u32);
	// li r6,19
	ctx.r6.s64 = 19;
	// stw r26,3928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3928, ctx.r26.u32);
	// ori r4,r4,49152
	ctx.r4.u64 = ctx.r4.u64 | 49152;
	// stw r10,3920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3920, ctx.r10.u32);
	// stw r25,3924(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3924, ctx.r25.u32);
	// stw r11,1300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1300, ctx.r11.u32);
	// stw r24,1312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1312, ctx.r24.u32);
	// stw r10,1304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1304, ctx.r10.u32);
	// stw r23,1308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1308, ctx.r23.u32);
loc_8210CB24:
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// stw r5,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r5.u32);
	// stw r11,-4(r7)
	PPC_STORE_U32(ctx.r7.u32 + -4, ctx.r11.u32);
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// stw r4,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r4.u32);
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// bne cr6,0x8210cb24
	if (!ctx.cr6.eq) goto loc_8210CB24;
	// addis r4,r8,2113
	ctx.r4.s64 = ctx.r8.s64 + 138477568;
	// lis r6,2
	ctx.r6.s64 = 131072;
	// addi r7,r31,1624
	ctx.r7.s64 = ctx.r31.s64 + 1624;
	// addi r4,r4,-16384
	ctx.r4.s64 = ctx.r4.s64 + -16384;
	// li r5,35
	ctx.r5.s64 = 35;
	// ori r6,r6,63488
	ctx.r6.u64 = ctx.r6.u64 | 63488;
loc_8210CB60:
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// stw r4,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r4.u32);
	// stw r11,-4(r7)
	PPC_STORE_U32(ctx.r7.u32 + -4, ctx.r11.u32);
	// add r4,r4,r6
	ctx.r4.u64 = ctx.r4.u64 + ctx.r6.u64;
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stw r6,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r6.u32);
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// bne cr6,0x8210cb60
	if (!ctx.cr6.eq) goto loc_8210CB60;
	// addis r6,r8,2217
	ctx.r6.s64 = ctx.r8.s64 + 145293312;
	// stw r11,2180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2180, ctx.r11.u32);
	// lis r5,23
	ctx.r5.s64 = 1507328;
	// stw r10,2184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2184, ctx.r10.u32);
	// addi r6,r6,-20480
	ctx.r6.s64 = ctx.r6.s64 + -20480;
	// lis r4,5
	ctx.r4.s64 = 327680;
	// ori r29,r5,18432
	ctx.r29.u64 = ctx.r5.u64 | 18432;
	// ori r27,r4,20480
	ctx.r27.u64 = ctx.r4.u64 | 20480;
	// addis r28,r8,2240
	ctx.r28.s64 = ctx.r8.s64 + 146800640;
	// stw r6,2192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2192, ctx.r6.u32);
	// lis r6,96
	ctx.r6.s64 = 6291456;
	// addi r7,r31,2216
	ctx.r7.s64 = ctx.r31.s64 + 2216;
	// stw r29,2188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2188, ctx.r29.u32);
	// addis r4,r8,2314
	ctx.r4.s64 = ctx.r8.s64 + 151650304;
	// li r5,12
	ctx.r5.s64 = 12;
	// stw r11,2196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2196, ctx.r11.u32);
	// stw r28,2208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2208, ctx.r28.u32);
	// ori r6,r6,40960
	ctx.r6.u64 = ctx.r6.u64 | 40960;
	// stw r10,2200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2200, ctx.r10.u32);
	// stw r27,2204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2204, ctx.r27.u32);
loc_8210CBD4:
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// stw r4,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r4.u32);
	// stw r11,-4(r7)
	PPC_STORE_U32(ctx.r7.u32 + -4, ctx.r11.u32);
	// add r4,r4,r6
	ctx.r4.u64 = ctx.r4.u64 + ctx.r6.u64;
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stw r6,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r6.u32);
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// bne cr6,0x8210cbd4
	if (!ctx.cr6.eq) goto loc_8210CBD4;
	// addis r5,r8,2245
	ctx.r5.s64 = ctx.r8.s64 + 147128320;
	// stw r11,2404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2404, ctx.r11.u32);
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// addi r5,r5,20480
	ctx.r5.s64 = ctx.r5.s64 + 20480;
	// lis r4,56
	ctx.r4.s64 = 3670016;
	// addis r6,r8,203
	ctx.r6.s64 = ctx.r8.s64 + 13303808;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,2408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2408, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r5,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r5.u32);
	// addis r5,r8,304
	ctx.r5.s64 = ctx.r8.s64 + 19922944;
	// stw r4,2412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2412, ctx.r4.u32);
	// add r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r5,r5,-4096
	ctx.r5.s64 = ctx.r5.s64 + -4096;
	// add r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 + ctx.r3.u64;
	// add r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 + ctx.r30.u64;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// addi r6,r6,-24576
	ctx.r6.s64 = ctx.r6.s64 + -24576;
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// lis r4,25
	ctx.r4.s64 = 1638400;
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r5,2416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2416, ctx.r5.u32);
	// stw r9,2444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2444, ctx.r9.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r9,2460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2460, ctx.r9.u32);
	// stw r9,2476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2476, ctx.r9.u32);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r11,2436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2436, ctx.r11.u32);
	// stw r5,2448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2448, ctx.r5.u32);
	// stw r10,2440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2440, ctx.r10.u32);
	// stw r7,2464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2464, ctx.r7.u32);
	// addis r7,r5,1738
	ctx.r7.s64 = ctx.r5.s64 + 113901568;
	// stw r11,2452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2452, ctx.r11.u32);
	// stw r10,2456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2456, ctx.r10.u32);
	// addi r7,r7,-28672
	ctx.r7.s64 = ctx.r7.s64 + -28672;
	// stw r6,2480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2480, ctx.r6.u32);
	// addis r6,r5,624
	ctx.r6.s64 = ctx.r5.s64 + 40894464;
	// stw r11,2468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2468, ctx.r11.u32);
	// stw r10,2472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2472, ctx.r10.u32);
	// addi r6,r6,-4096
	ctx.r6.s64 = ctx.r6.s64 + -4096;
	// stw r9,2496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2496, ctx.r9.u32);
	// stw r11,2484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2484, ctx.r11.u32);
	// stw r10,2488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2488, ctx.r10.u32);
	// stw r29,2492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2492, ctx.r29.u32);
	// stw r3,2512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2512, ctx.r3.u32);
	// ori r3,r4,38912
	ctx.r3.u64 = ctx.r4.u64 | 38912;
	// stw r11,2500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2500, ctx.r11.u32);
	// addis r4,r5,650
	ctx.r4.s64 = ctx.r5.s64 + 42598400;
	// stw r10,2504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2504, ctx.r10.u32);
	// stw r28,2508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2508, ctx.r28.u32);
	// addi r4,r4,-28672
	ctx.r4.s64 = ctx.r4.s64 + -28672;
	// stw r8,2528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2528, ctx.r8.u32);
	// li r8,19
	ctx.r8.s64 = 19;
	// stw r30,2524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2524, ctx.r30.u32);
	// lis r30,1088
	ctx.r30.s64 = 71303168;
	// stw r11,2516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2516, ctx.r11.u32);
	// stw r10,2520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2520, ctx.r10.u32);
	// stw r9,2496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2496, ctx.r9.u32);
	// lis r9,320
	ctx.r9.s64 = 20971520;
	// stw r11,2484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2484, ctx.r11.u32);
	// stw r10,2488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2488, ctx.r10.u32);
	// stw r9,2492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2492, ctx.r9.u32);
	// addi r9,r31,2536
	ctx.r9.s64 = ctx.r31.s64 + 2536;
	// stw r3,3940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3940, ctx.r3.u32);
	// lis r3,3
	ctx.r3.s64 = 196608;
	// stw r6,3944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3944, ctx.r6.u32);
	// stw r11,3932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3932, ctx.r11.u32);
	// ori r6,r3,49152
	ctx.r6.u64 = ctx.r3.u64 | 49152;
	// stw r10,3936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3936, ctx.r10.u32);
	// stw r11,2516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2516, ctx.r11.u32);
	// stw r4,2528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2528, ctx.r4.u32);
	// stw r10,2520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2520, ctx.r10.u32);
	// stw r30,2524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2524, ctx.r30.u32);
loc_8210CD28:
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// stw r7,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r7.u32);
	// stw r11,-4(r9)
	PPC_STORE_U32(ctx.r9.u32 + -4, ctx.r11.u32);
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r6,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r6.u32);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// bne cr6,0x8210cd28
	if (!ctx.cr6.eq) goto loc_8210CD28;
	// addis r6,r5,1809
	ctx.r6.s64 = ctx.r5.s64 + 118554624;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// addi r9,r31,2840
	ctx.r9.s64 = ctx.r31.s64 + 2840;
	// addi r6,r6,-12288
	ctx.r6.s64 = ctx.r6.s64 + -12288;
	// li r7,35
	ctx.r7.s64 = 35;
	// ori r8,r8,63488
	ctx.r8.u64 = ctx.r8.u64 | 63488;
loc_8210CD64:
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// stw r6,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r6.u32);
	// stw r11,-4(r9)
	PPC_STORE_U32(ctx.r9.u32 + -4, ctx.r11.u32);
	// add r6,r6,r8
	ctx.r6.u64 = ctx.r6.u64 + ctx.r8.u64;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// bne cr6,0x8210cd64
	if (!ctx.cr6.eq) goto loc_8210CD64;
	// lis r3,23
	ctx.r3.s64 = 1507328;
	// stw r11,3396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3396, ctx.r11.u32);
	// addis r4,r5,1913
	ctx.r4.s64 = ctx.r5.s64 + 125370368;
	// stw r10,3400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3400, ctx.r10.u32);
	// ori r8,r3,18432
	ctx.r8.u64 = ctx.r3.u64 | 18432;
	// lis r9,5
	ctx.r9.s64 = 327680;
	// addis r3,r5,1936
	ctx.r3.s64 = ctx.r5.s64 + 126877696;
	// addi r4,r4,-16384
	ctx.r4.s64 = ctx.r4.s64 + -16384;
	// ori r30,r9,20480
	ctx.r30.u64 = ctx.r9.u64 | 20480;
	// addi r3,r3,4096
	ctx.r3.s64 = ctx.r3.s64 + 4096;
	// stw r8,3404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3404, ctx.r8.u32);
	// addis r6,r5,2010
	ctx.r6.s64 = ctx.r5.s64 + 131727360;
	// lis r8,96
	ctx.r8.s64 = 6291456;
	// stw r4,3408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3408, ctx.r4.u32);
	// addi r9,r31,3432
	ctx.r9.s64 = ctx.r31.s64 + 3432;
	// addi r6,r6,4096
	ctx.r6.s64 = ctx.r6.s64 + 4096;
	// stw r11,3412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3412, ctx.r11.u32);
	// li r7,12
	ctx.r7.s64 = 12;
	// stw r3,3424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3424, ctx.r3.u32);
	// stw r10,3416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3416, ctx.r10.u32);
	// ori r8,r8,40960
	ctx.r8.u64 = ctx.r8.u64 | 40960;
	// stw r30,3420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3420, ctx.r30.u32);
loc_8210CDE0:
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// stw r6,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r6.u32);
	// stw r11,-4(r9)
	PPC_STORE_U32(ctx.r9.u32 + -4, ctx.r11.u32);
	// add r6,r6,r8
	ctx.r6.u64 = ctx.r6.u64 + ctx.r8.u64;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// bne cr6,0x8210cde0
	if (!ctx.cr6.eq) goto loc_8210CDE0;
	// addis r7,r5,1941
	ctx.r7.s64 = ctx.r5.s64 + 127205376;
	// stw r11,3620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3620, ctx.r11.u32);
	// lis r6,56
	ctx.r6.s64 = 3670016;
	// stw r10,3624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3624, ctx.r10.u32);
	// addi r7,r7,24576
	ctx.r7.s64 = ctx.r7.s64 + 24576;
	// stw r6,3628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3628, ctx.r6.u32);
	// stw r7,3632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3632, ctx.r7.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8210CE28"))) PPC_WEAK_FUNC(sub_8210CE28);
PPC_FUNC_IMPL(__imp__sub_8210CE28) {
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
	// lwz r3,4060(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4060);
	// bl 0x825af7a0
	ctx.lr = 0x8210CE44;
	sub_825AF7A0(ctx, base);
	// lwz r3,4064(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4064);
	// bl 0x825af7a0
	ctx.lr = 0x8210CE4C;
	sub_825AF7A0(ctx, base);
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

__attribute__((alias("__imp__sub_8210CE60"))) PPC_WEAK_FUNC(sub_8210CE60);
PPC_FUNC_IMPL(__imp__sub_8210CE60) {
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
	// bl 0x82106318
	ctx.lr = 0x8210CE70;
	sub_82106318(ctx, base);
	// lwz r11,3948(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3948);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8210ce84
	if (!ctx.cr6.gt) goto loc_8210CE84;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,3948(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3948, ctx.r11.u32);
loc_8210CE84:
	// lwz r11,3964(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3964);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8210ce98
	if (!ctx.cr6.gt) goto loc_8210CE98;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// stw r10,3964(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3964, ctx.r10.u32);
loc_8210CE98:
	// lwz r11,3980(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3980);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8210ceac
	if (!ctx.cr6.gt) goto loc_8210CEAC;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// stw r9,3980(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3980, ctx.r9.u32);
loc_8210CEAC:
	// lwz r11,3900(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3900);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8210cec0
	if (!ctx.cr6.gt) goto loc_8210CEC0;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// stw r8,3900(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3900, ctx.r8.u32);
loc_8210CEC0:
	// lwz r11,3916(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3916);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8210ced4
	if (!ctx.cr6.gt) goto loc_8210CED4;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// stw r7,3916(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3916, ctx.r7.u32);
loc_8210CED4:
	// lwz r11,3932(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3932);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8210cee8
	if (!ctx.cr6.gt) goto loc_8210CEE8;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// stw r6,3932(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3932, ctx.r6.u32);
loc_8210CEE8:
	// lwz r11,4012(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4012);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8210cefc
	if (!ctx.cr6.gt) goto loc_8210CEFC;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// stw r5,4012(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4012, ctx.r5.u32);
loc_8210CEFC:
	// lwz r11,4044(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4044);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8210cf10
	if (!ctx.cr6.gt) goto loc_8210CF10;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// stw r4,4044(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4044, ctx.r4.u32);
loc_8210CF10:
	// lwz r11,4028(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4028);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8210cf24
	if (!ctx.cr6.gt) goto loc_8210CF24;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4028(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4028, ctx.r11.u32);
loc_8210CF24:
	// lwz r11,3996(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3996);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8210cf38
	if (!ctx.cr6.gt) goto loc_8210CF38;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// stw r10,3996(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3996, ctx.r10.u32);
loc_8210CF38:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8210CF48"))) PPC_WEAK_FUNC(sub_8210CF48);
PPC_FUNC_IMPL(__imp__sub_8210CF48) {
	PPC_FUNC_PROLOGUE();
	// addi r10,r4,-5
	ctx.r10.s64 = ctx.r4.s64 + -5;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,39
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 39, ctx.xer);
	// bgt cr6,0x8210d228
	if (ctx.cr6.gt) {
		sub_8210D228(ctx, base);
		return;
	}
	// lis r12,-32239
	ctx.r12.s64 = -2112815104;
	// addi r12,r12,-12432
	ctx.r12.s64 = ctx.r12.s64 + -12432;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		// ERROR: 0x8210D0B4
		return;
	case 1:
		// ERROR: 0x8210D228
		return;
	case 2:
		// ERROR: 0x8210D228
		return;
	case 3:
		// ERROR: 0x8210D228
		return;
	case 4:
		// ERROR: 0x8210D228
		return;
	case 5:
		// ERROR: 0x8210D228
		return;
	case 6:
		// ERROR: 0x8210D228
		return;
	case 7:
		// ERROR: 0x8210D228
		return;
	case 8:
		// ERROR: 0x8210D228
		return;
	case 9:
		// ERROR: 0x8210D228
		return;
	case 10:
		// ERROR: 0x8210D228
		return;
	case 11:
		// ERROR: 0x8210D228
		return;
	case 12:
		// ERROR: 0x8210D228
		return;
	case 13:
		// ERROR: 0x8210D228
		return;
	case 14:
		// ERROR: 0x8210D228
		return;
	case 15:
		// ERROR: 0x8210D228
		return;
	case 16:
		// ERROR: 0x8210D228
		return;
	case 17:
		// ERROR: 0x8210D228
		return;
	case 18:
		// ERROR: 0x8210D228
		return;
	case 19:
		// ERROR: 0x8210D228
		return;
	case 20:
		// ERROR: 0x8210D228
		return;
	case 21:
		// ERROR: 0x8210D228
		return;
	case 22:
		// ERROR: 0x8210D228
		return;
	case 23:
		// ERROR: 0x8210D228
		return;
	case 24:
		// ERROR: 0x8210D228
		return;
	case 25:
		// ERROR: 0x8210D228
		return;
	case 26:
		// ERROR: 0x8210D228
		return;
	case 27:
		// ERROR: 0x8210D228
		return;
	case 28:
		// ERROR: 0x8210D228
		return;
	case 29:
		// ERROR: 0x8210D228
		return;
	case 30:
		// ERROR: 0x8210D228
		return;
	case 31:
		// ERROR: 0x8210D1F4
		return;
	case 32:
		// ERROR: 0x8210D228
		return;
	case 33:
		// ERROR: 0x8210D228
		return;
	case 34:
		// ERROR: 0x8210D228
		return;
	case 35:
		// ERROR: 0x8210D010
		return;
	case 36:
		// ERROR: 0x8210D04C
		return;
	case 37:
		// ERROR: 0x8210D080
		return;
	case 38:
		// ERROR: 0x8210D18C
		return;
	case 39:
		// ERROR: 0x8210D1C0
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_8210CF70"))) PPC_WEAK_FUNC(sub_8210CF70);
PPC_FUNC_IMPL(__imp__sub_8210CF70) {
	PPC_FUNC_PROLOGUE();
	// lwz r16,-12108(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -12108);
	// lwz r16,-11736(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -11736);
	// lwz r16,-11736(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -11736);
	// lwz r16,-11736(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -11736);
	// lwz r16,-11736(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -11736);
	// lwz r16,-11736(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -11736);
	// lwz r16,-11736(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -11736);
	// lwz r16,-11736(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -11736);
	// lwz r16,-11736(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -11736);
	// lwz r16,-11736(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -11736);
	// lwz r16,-11736(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -11736);
	// lwz r16,-11736(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -11736);
	// lwz r16,-11736(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -11736);
	// lwz r16,-11736(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -11736);
	// lwz r16,-11736(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -11736);
	// lwz r16,-11736(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -11736);
	// lwz r16,-11736(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -11736);
	// lwz r16,-11736(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -11736);
	// lwz r16,-11736(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -11736);
	// lwz r16,-11736(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -11736);
	// lwz r16,-11736(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -11736);
	// lwz r16,-11736(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -11736);
	// lwz r16,-11736(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -11736);
	// lwz r16,-11736(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -11736);
	// lwz r16,-11736(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -11736);
	// lwz r16,-11736(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -11736);
	// lwz r16,-11736(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -11736);
	// lwz r16,-11736(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -11736);
	// lwz r16,-11736(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -11736);
	// lwz r16,-11736(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -11736);
	// lwz r16,-11736(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -11736);
	// lwz r16,-11788(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -11788);
	// lwz r16,-11736(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -11736);
	// lwz r16,-11736(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -11736);
	// lwz r16,-11736(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -11736);
	// lwz r16,-12272(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -12272);
	// lwz r16,-12212(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -12212);
	// lwz r16,-12160(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -12160);
	// lwz r16,-11892(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -11892);
	// lwz r16,-11840(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -11840);
	// lwz r10,3952(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3952);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x8210d030
	if (ctx.cr6.lt) goto loc_8210D030;
	// lwz r9,3892(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3892);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x8210d030
	if (ctx.cr6.eq) goto loc_8210D030;
loc_8210D028:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8210D030:
	// lwz r8,3948(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3948);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8210d028
	if (!ctx.cr6.eq) goto loc_8210D028;
	// li r7,-1
	ctx.r7.s64 = -1;
	// lwz r3,3960(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3960);
	// stw r7,3948(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3948, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8210D04C"))) PPC_WEAK_FUNC(sub_8210D04C);
PPC_FUNC_IMPL(__imp__sub_8210D04C) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,3968(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3968);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x8210d064
	if (ctx.cr6.lt) goto loc_8210D064;
	// lwz r6,3892(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3892);
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x8210d028
	if (!ctx.cr6.eq) {
		// ERROR 8210D028
		return;
	}
loc_8210D064:
	// lwz r5,3964(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3964);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x8210d028
	if (!ctx.cr6.eq) {
		// ERROR 8210D028
		return;
	}
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,3976(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3976);
	// stw r4,3964(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3964, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8210D080"))) PPC_WEAK_FUNC(sub_8210D080);
PPC_FUNC_IMPL(__imp__sub_8210D080) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,3984(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3984);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x8210d098
	if (ctx.cr6.lt) goto loc_8210D098;
	// lwz r3,3892(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3892);
	// cmpw cr6,r10,r3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x8210d028
	if (!ctx.cr6.eq) {
		// ERROR 8210D028
		return;
	}
loc_8210D098:
	// lwz r10,3980(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3980);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8210d028
	if (!ctx.cr6.eq) {
		// ERROR 8210D028
		return;
	}
	// li r9,-1
	ctx.r9.s64 = -1;
	// lwz r3,3992(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3992);
	// stw r9,3980(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3980, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8210D0B4"))) PPC_WEAK_FUNC(sub_8210D0B4);
PPC_FUNC_IMPL(__imp__sub_8210D0B4) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,3892(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3892);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8210d0ec
	if (!ctx.cr6.eq) goto loc_8210D0EC;
	// lwz r10,3720(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3720);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x8210d0d0
	if (ctx.cr6.lt) goto loc_8210D0D0;
	// bne cr6,0x8210d028
	if (!ctx.cr6.eq) {
		// ERROR 8210D028
		return;
	}
loc_8210D0D0:
	// lwz r8,3716(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3716);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8210d028
	if (!ctx.cr6.eq) {
		// ERROR 8210D028
		return;
	}
	// li r7,-1
	ctx.r7.s64 = -1;
	// lwz r3,3728(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3728);
	// stw r7,3716(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3716, ctx.r7.u32);
	// blr 
	return;
loc_8210D0EC:
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bne cr6,0x8210d124
	if (!ctx.cr6.eq) goto loc_8210D124;
	// lwz r10,3920(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3920);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x8210d108
	if (ctx.cr6.lt) goto loc_8210D108;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x8210d028
	if (!ctx.cr6.eq) {
		// ERROR 8210D028
		return;
	}
loc_8210D108:
	// lwz r6,3916(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3916);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x8210d028
	if (!ctx.cr6.eq) {
		// ERROR 8210D028
		return;
	}
	// li r5,-1
	ctx.r5.s64 = -1;
	// lwz r3,3928(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3928);
	// stw r5,3916(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3916, ctx.r5.u32);
	// blr 
	return;
loc_8210D124:
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// bne cr6,0x8210d15c
	if (!ctx.cr6.eq) goto loc_8210D15C;
	// lwz r10,3936(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3936);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x8210d140
	if (ctx.cr6.lt) goto loc_8210D140;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x8210d028
	if (!ctx.cr6.eq) {
		// ERROR 8210D028
		return;
	}
loc_8210D140:
	// lwz r4,3932(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3932);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x8210d028
	if (!ctx.cr6.eq) {
		// ERROR 8210D028
		return;
	}
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r3,3944(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3944);
	// stw r10,3932(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3932, ctx.r10.u32);
	// blr 
	return;
loc_8210D15C:
	// lwz r10,3904(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3904);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x8210d170
	if (ctx.cr6.lt) goto loc_8210D170;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8210d028
	if (!ctx.cr6.eq) {
		// ERROR 8210D028
		return;
	}
loc_8210D170:
	// lwz r9,3900(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3900);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8210d028
	if (!ctx.cr6.eq) {
		// ERROR 8210D028
		return;
	}
	// li r8,-1
	ctx.r8.s64 = -1;
	// lwz r3,3912(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3912);
	// stw r8,3900(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3900, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8210D18C"))) PPC_WEAK_FUNC(sub_8210D18C);
PPC_FUNC_IMPL(__imp__sub_8210D18C) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,4016(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4016);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x8210d1a4
	if (ctx.cr6.lt) goto loc_8210D1A4;
	// lwz r7,3892(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3892);
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x8210d028
	if (!ctx.cr6.eq) {
		// ERROR 8210D028
		return;
	}
loc_8210D1A4:
	// lwz r6,4012(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4012);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x8210d028
	if (!ctx.cr6.eq) {
		// ERROR 8210D028
		return;
	}
	// li r5,-1
	ctx.r5.s64 = -1;
	// lwz r3,4024(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4024);
	// stw r5,4012(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4012, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8210D1C0"))) PPC_WEAK_FUNC(sub_8210D1C0);
PPC_FUNC_IMPL(__imp__sub_8210D1C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,4048(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4048);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x8210d1d8
	if (ctx.cr6.lt) goto loc_8210D1D8;
	// lwz r4,3892(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3892);
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x8210d028
	if (!ctx.cr6.eq) {
		// ERROR 8210D028
		return;
	}
loc_8210D1D8:
	// lwz r3,4044(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4044);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8210d028
	if (!ctx.cr6.eq) {
		// ERROR 8210D028
		return;
	}
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r3,4056(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4056);
	// stw r10,4044(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4044, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8210D1F4"))) PPC_WEAK_FUNC(sub_8210D1F4);
PPC_FUNC_IMPL(__imp__sub_8210D1F4) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,4000(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4000);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x8210d20c
	if (ctx.cr6.lt) goto loc_8210D20C;
	// lwz r9,3892(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3892);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8210d028
	if (!ctx.cr6.eq) {
		// ERROR 8210D028
		return;
	}
loc_8210D20C:
	// lwz r8,3996(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3996);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8210d028
	if (!ctx.cr6.eq) {
		// ERROR 8210D028
		return;
	}
	// li r7,-1
	ctx.r7.s64 = -1;
	// lwz r3,4008(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4008);
	// stw r7,3996(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3996, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8210D228"))) PPC_WEAK_FUNC(sub_8210D228);
PPC_FUNC_IMPL(__imp__sub_8210D228) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x82106c90
	sub_82106C90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8210D230"))) PPC_WEAK_FUNC(sub_8210D230);
PPC_FUNC_IMPL(__imp__sub_8210D230) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,-5
	ctx.r11.s64 = ctx.r4.s64 + -5;
	// cmplwi cr6,r11,39
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 39, ctx.xer);
	// bgt cr6,0x8210d388
	if (ctx.cr6.gt) {
		sub_8210D388(ctx, base);
		return;
	}
	// lis r12,-32239
	ctx.r12.s64 = -2112815104;
	// addi r12,r12,-11692
	ctx.r12.s64 = ctx.r12.s64 + -11692;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		// ERROR: 0x8210D318
		return;
	case 1:
		// ERROR: 0x8210D388
		return;
	case 2:
		// ERROR: 0x8210D388
		return;
	case 3:
		// ERROR: 0x8210D388
		return;
	case 4:
		// ERROR: 0x8210D388
		return;
	case 5:
		// ERROR: 0x8210D388
		return;
	case 6:
		// ERROR: 0x8210D388
		return;
	case 7:
		// ERROR: 0x8210D388
		return;
	case 8:
		// ERROR: 0x8210D388
		return;
	case 9:
		// ERROR: 0x8210D388
		return;
	case 10:
		// ERROR: 0x8210D388
		return;
	case 11:
		// ERROR: 0x8210D388
		return;
	case 12:
		// ERROR: 0x8210D388
		return;
	case 13:
		// ERROR: 0x8210D388
		return;
	case 14:
		// ERROR: 0x8210D388
		return;
	case 15:
		// ERROR: 0x8210D388
		return;
	case 16:
		// ERROR: 0x8210D388
		return;
	case 17:
		// ERROR: 0x8210D388
		return;
	case 18:
		// ERROR: 0x8210D388
		return;
	case 19:
		// ERROR: 0x8210D388
		return;
	case 20:
		// ERROR: 0x8210D388
		return;
	case 21:
		// ERROR: 0x8210D388
		return;
	case 22:
		// ERROR: 0x8210D388
		return;
	case 23:
		// ERROR: 0x8210D388
		return;
	case 24:
		// ERROR: 0x8210D388
		return;
	case 25:
		// ERROR: 0x8210D388
		return;
	case 26:
		// ERROR: 0x8210D388
		return;
	case 27:
		// ERROR: 0x8210D388
		return;
	case 28:
		// ERROR: 0x8210D388
		return;
	case 29:
		// ERROR: 0x8210D388
		return;
	case 30:
		// ERROR: 0x8210D388
		return;
	case 31:
		// ERROR: 0x8210D37C
		return;
	case 32:
		// ERROR: 0x8210D388
		return;
	case 33:
		// ERROR: 0x8210D388
		return;
	case 34:
		// ERROR: 0x8210D388
		return;
	case 35:
		// ERROR: 0x8210D2F4
		return;
	case 36:
		// ERROR: 0x8210D30C
		return;
	case 37:
		// ERROR: 0x8210D300
		return;
	case 38:
		// ERROR: 0x8210D364
		return;
	case 39:
		// ERROR: 0x8210D370
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_8210D254"))) PPC_WEAK_FUNC(sub_8210D254);
PPC_FUNC_IMPL(__imp__sub_8210D254) {
	PPC_FUNC_PROLOGUE();
	// lwz r16,-11496(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -11496);
	// lwz r16,-11384(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -11384);
	// lwz r16,-11384(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -11384);
	// lwz r16,-11384(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -11384);
	// lwz r16,-11384(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -11384);
	// lwz r16,-11384(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -11384);
	// lwz r16,-11384(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -11384);
	// lwz r16,-11384(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -11384);
	// lwz r16,-11384(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -11384);
	// lwz r16,-11384(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -11384);
	// lwz r16,-11384(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -11384);
	// lwz r16,-11384(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -11384);
	// lwz r16,-11384(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -11384);
	// lwz r16,-11384(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -11384);
	// lwz r16,-11384(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -11384);
	// lwz r16,-11384(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -11384);
	// lwz r16,-11384(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -11384);
	// lwz r16,-11384(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -11384);
	// lwz r16,-11384(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -11384);
	// lwz r16,-11384(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -11384);
	// lwz r16,-11384(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -11384);
	// lwz r16,-11384(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -11384);
	// lwz r16,-11384(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -11384);
	// lwz r16,-11384(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -11384);
	// lwz r16,-11384(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -11384);
	// lwz r16,-11384(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -11384);
	// lwz r16,-11384(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -11384);
	// lwz r16,-11384(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -11384);
	// lwz r16,-11384(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -11384);
	// lwz r16,-11384(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -11384);
	// lwz r16,-11384(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -11384);
	// lwz r16,-11396(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -11396);
	// lwz r16,-11384(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -11384);
	// lwz r16,-11384(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -11384);
	// lwz r16,-11384(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -11384);
	// lwz r16,-11532(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -11532);
	// lwz r16,-11508(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -11508);
	// lwz r16,-11520(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -11520);
	// lwz r16,-11420(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -11420);
	// lwz r16,-11408(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -11408);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,3948(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3948, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8210D300"))) PPC_WEAK_FUNC(sub_8210D300);
PPC_FUNC_IMPL(__imp__sub_8210D300) {
	PPC_FUNC_PROLOGUE();
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,3980(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3980, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8210D30C"))) PPC_WEAK_FUNC(sub_8210D30C);
PPC_FUNC_IMPL(__imp__sub_8210D30C) {
	PPC_FUNC_PROLOGUE();
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r9,3964(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3964, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8210D318"))) PPC_WEAK_FUNC(sub_8210D318);
PPC_FUNC_IMPL(__imp__sub_8210D318) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,3892(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3892);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8210d330
	if (!ctx.cr6.eq) goto loc_8210D330;
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r8,3716(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3716, ctx.r8.u32);
	// blr 
	return;
loc_8210D330:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8210d344
	if (!ctx.cr6.eq) goto loc_8210D344;
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r7,3916(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3916, ctx.r7.u32);
	// blr 
	return;
loc_8210D344:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8210d358
	if (!ctx.cr6.eq) goto loc_8210D358;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r6,3932(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3932, ctx.r6.u32);
	// blr 
	return;
loc_8210D358:
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r5,3900(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3900, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8210D364"))) PPC_WEAK_FUNC(sub_8210D364);
PPC_FUNC_IMPL(__imp__sub_8210D364) {
	PPC_FUNC_PROLOGUE();
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r4,4012(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4012, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8210D370"))) PPC_WEAK_FUNC(sub_8210D370);
PPC_FUNC_IMPL(__imp__sub_8210D370) {
	PPC_FUNC_PROLOGUE();
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,4044(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4044, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8210D37C"))) PPC_WEAK_FUNC(sub_8210D37C);
PPC_FUNC_IMPL(__imp__sub_8210D37C) {
	PPC_FUNC_PROLOGUE();
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,3996(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3996, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8210D388"))) PPC_WEAK_FUNC(sub_8210D388);
PPC_FUNC_IMPL(__imp__sub_8210D388) {
	PPC_FUNC_PROLOGUE();
	// b 0x82107af8
	sub_82107AF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8210D38C"))) PPC_WEAK_FUNC(sub_8210D38C);
PPC_FUNC_IMPL(__imp__sub_8210D38C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8210D390"))) PPC_WEAK_FUNC(sub_8210D390);
PPC_FUNC_IMPL(__imp__sub_8210D390) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,43
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 43, ctx.xer);
	// beq cr6,0x8210d3cc
	if (ctx.cr6.eq) goto loc_8210D3CC;
	// cmpwi cr6,r4,44
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 44, ctx.xer);
	// beq cr6,0x8210d3a4
	if (ctx.cr6.eq) goto loc_8210D3A4;
	// b 0x82108020
	sub_82108020(ctx, base);
	return;
loc_8210D3A4:
	// lwz r11,4048(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4048);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8210d3c4
	if (ctx.cr6.lt) goto loc_8210D3C4;
	// lwz r10,3892(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3892);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8210d3c4
	if (ctx.cr6.eq) goto loc_8210D3C4;
loc_8210D3BC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8210D3C4:
	// lwz r3,4056(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4056);
	// blr 
	return;
loc_8210D3CC:
	// lwz r11,4016(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4016);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8210d3e4
	if (ctx.cr6.lt) goto loc_8210D3E4;
	// lwz r9,3892(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3892);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8210d3bc
	if (!ctx.cr6.eq) goto loc_8210D3BC;
loc_8210D3E4:
	// lwz r3,4024(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4024);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8210D3EC"))) PPC_WEAK_FUNC(sub_8210D3EC);
PPC_FUNC_IMPL(__imp__sub_8210D3EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8210D3F0"))) PPC_WEAK_FUNC(sub_8210D3F0);
PPC_FUNC_IMPL(__imp__sub_8210D3F0) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,-5
	ctx.r11.s64 = ctx.r4.s64 + -5;
	// cmplwi cr6,r11,39
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 39, ctx.xer);
	// bgt cr6,0x8210d520
	if (ctx.cr6.gt) {
		sub_8210D520(ctx, base);
		return;
	}
	// lis r12,-32239
	ctx.r12.s64 = -2112815104;
	// addi r12,r12,-11244
	ctx.r12.s64 = ctx.r12.s64 + -11244;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		// ERROR: 0x8210D4CC
		return;
	case 1:
		// ERROR: 0x8210D520
		return;
	case 2:
		// ERROR: 0x8210D520
		return;
	case 3:
		// ERROR: 0x8210D520
		return;
	case 4:
		// ERROR: 0x8210D520
		return;
	case 5:
		// ERROR: 0x8210D520
		return;
	case 6:
		// ERROR: 0x8210D520
		return;
	case 7:
		// ERROR: 0x8210D520
		return;
	case 8:
		// ERROR: 0x8210D520
		return;
	case 9:
		// ERROR: 0x8210D520
		return;
	case 10:
		// ERROR: 0x8210D520
		return;
	case 11:
		// ERROR: 0x8210D520
		return;
	case 12:
		// ERROR: 0x8210D520
		return;
	case 13:
		// ERROR: 0x8210D520
		return;
	case 14:
		// ERROR: 0x8210D520
		return;
	case 15:
		// ERROR: 0x8210D520
		return;
	case 16:
		// ERROR: 0x8210D520
		return;
	case 17:
		// ERROR: 0x8210D520
		return;
	case 18:
		// ERROR: 0x8210D520
		return;
	case 19:
		// ERROR: 0x8210D520
		return;
	case 20:
		// ERROR: 0x8210D520
		return;
	case 21:
		// ERROR: 0x8210D520
		return;
	case 22:
		// ERROR: 0x8210D520
		return;
	case 23:
		// ERROR: 0x8210D520
		return;
	case 24:
		// ERROR: 0x8210D520
		return;
	case 25:
		// ERROR: 0x8210D520
		return;
	case 26:
		// ERROR: 0x8210D520
		return;
	case 27:
		// ERROR: 0x8210D520
		return;
	case 28:
		// ERROR: 0x8210D520
		return;
	case 29:
		// ERROR: 0x8210D520
		return;
	case 30:
		// ERROR: 0x8210D520
		return;
	case 31:
		// ERROR: 0x8210D518
		return;
	case 32:
		// ERROR: 0x8210D520
		return;
	case 33:
		// ERROR: 0x8210D520
		return;
	case 34:
		// ERROR: 0x8210D520
		return;
	case 35:
		// ERROR: 0x8210D4B4
		return;
	case 36:
		// ERROR: 0x8210D4BC
		return;
	case 37:
		// ERROR: 0x8210D4C4
		return;
	case 38:
		// ERROR: 0x8210D508
		return;
	case 39:
		// ERROR: 0x8210D510
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_8210D414"))) PPC_WEAK_FUNC(sub_8210D414);
PPC_FUNC_IMPL(__imp__sub_8210D414) {
	PPC_FUNC_PROLOGUE();
	// lwz r16,-11060(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -11060);
	// lwz r16,-10976(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -10976);
	// lwz r16,-10976(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -10976);
	// lwz r16,-10976(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -10976);
	// lwz r16,-10976(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -10976);
	// lwz r16,-10976(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -10976);
	// lwz r16,-10976(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -10976);
	// lwz r16,-10976(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -10976);
	// lwz r16,-10976(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -10976);
	// lwz r16,-10976(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -10976);
	// lwz r16,-10976(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -10976);
	// lwz r16,-10976(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -10976);
	// lwz r16,-10976(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -10976);
	// lwz r16,-10976(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -10976);
	// lwz r16,-10976(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -10976);
	// lwz r16,-10976(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -10976);
	// lwz r16,-10976(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -10976);
	// lwz r16,-10976(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -10976);
	// lwz r16,-10976(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -10976);
	// lwz r16,-10976(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -10976);
	// lwz r16,-10976(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -10976);
	// lwz r16,-10976(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -10976);
	// lwz r16,-10976(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -10976);
	// lwz r16,-10976(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -10976);
	// lwz r16,-10976(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -10976);
	// lwz r16,-10976(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -10976);
	// lwz r16,-10976(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -10976);
	// lwz r16,-10976(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -10976);
	// lwz r16,-10976(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -10976);
	// lwz r16,-10976(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -10976);
	// lwz r16,-10976(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -10976);
	// lwz r16,-10984(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -10984);
	// lwz r16,-10976(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -10976);
	// lwz r16,-10976(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -10976);
	// lwz r16,-10976(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -10976);
	// lwz r16,-11084(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -11084);
	// lwz r16,-11076(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -11076);
	// lwz r16,-11068(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -11068);
	// lwz r16,-11000(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -11000);
	// lwz r16,-10992(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -10992);
	// lwz r3,3956(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3956);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8210D4BC"))) PPC_WEAK_FUNC(sub_8210D4BC);
PPC_FUNC_IMPL(__imp__sub_8210D4BC) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,3972(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3972);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8210D4C4"))) PPC_WEAK_FUNC(sub_8210D4C4);
PPC_FUNC_IMPL(__imp__sub_8210D4C4) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,3988(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3988);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8210D4CC"))) PPC_WEAK_FUNC(sub_8210D4CC);
PPC_FUNC_IMPL(__imp__sub_8210D4CC) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,3892(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3892);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8210d4e0
	if (!ctx.cr6.eq) goto loc_8210D4E0;
	// lwz r3,3724(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3724);
	// blr 
	return;
loc_8210D4E0:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8210d4f0
	if (!ctx.cr6.eq) goto loc_8210D4F0;
	// lwz r3,3924(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3924);
	// blr 
	return;
loc_8210D4F0:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8210d500
	if (!ctx.cr6.eq) goto loc_8210D500;
	// lwz r3,3940(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3940);
	// blr 
	return;
loc_8210D500:
	// lwz r3,3908(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3908);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8210D508"))) PPC_WEAK_FUNC(sub_8210D508);
PPC_FUNC_IMPL(__imp__sub_8210D508) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4020(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4020);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8210D510"))) PPC_WEAK_FUNC(sub_8210D510);
PPC_FUNC_IMPL(__imp__sub_8210D510) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4052(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4052);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8210D518"))) PPC_WEAK_FUNC(sub_8210D518);
PPC_FUNC_IMPL(__imp__sub_8210D518) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4004(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4004);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8210D520"))) PPC_WEAK_FUNC(sub_8210D520);
PPC_FUNC_IMPL(__imp__sub_8210D520) {
	PPC_FUNC_PROLOGUE();
	// b 0x82108398
	sub_82108398(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8210D524"))) PPC_WEAK_FUNC(sub_8210D524);
PPC_FUNC_IMPL(__imp__sub_8210D524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8210D528"))) PPC_WEAK_FUNC(sub_8210D528);
PPC_FUNC_IMPL(__imp__sub_8210D528) {
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
	// bl 0x82361a18
	ctx.lr = 0x8210D540;
	sub_82361A18(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,816(r31)
	PPC_STORE_U8(ctx.r31.u32 + 816, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_8210D55C"))) PPC_WEAK_FUNC(sub_8210D55C);
PPC_FUNC_IMPL(__imp__sub_8210D55C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8210D560"))) PPC_WEAK_FUNC(sub_8210D560);
PPC_FUNC_IMPL(__imp__sub_8210D560) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stb r11,220(r3)
	PPC_STORE_U8(ctx.r3.u32 + 220, ctx.r11.u8);
	// stb r11,221(r3)
	PPC_STORE_U8(ctx.r3.u32 + 221, ctx.r11.u8);
	// stb r10,219(r3)
	PPC_STORE_U8(ctx.r3.u32 + 219, ctx.r10.u8);
	// stb r11,222(r3)
	PPC_STORE_U8(ctx.r3.u32 + 222, ctx.r11.u8);
	// stb r11,223(r3)
	PPC_STORE_U8(ctx.r3.u32 + 223, ctx.r11.u8);
	// stb r11,218(r3)
	PPC_STORE_U8(ctx.r3.u32 + 218, ctx.r11.u8);
	// stb r10,216(r3)
	PPC_STORE_U8(ctx.r3.u32 + 216, ctx.r10.u8);
	// stb r10,217(r3)
	PPC_STORE_U8(ctx.r3.u32 + 217, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8210D58C"))) PPC_WEAK_FUNC(sub_8210D58C);
PPC_FUNC_IMPL(__imp__sub_8210D58C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8210D590"))) PPC_WEAK_FUNC(sub_8210D590);
PPC_FUNC_IMPL(__imp__sub_8210D590) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// stb r11,219(r31)
	PPC_STORE_U8(ctx.r31.u32 + 219, ctx.r11.u8);
	// bl 0x825aece0
	ctx.lr = 0x8210D5B8;
	sub_825AECE0(ctx, base);
	// lbz r11,219(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 219);
	// li r5,16
	ctx.r5.s64 = 16;
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 + ctx.r31.u64;
	// std r9,32(r7)
	PPC_STORE_U64(ctx.r7.u32 + 32, ctx.r9.u64);
	// lbz r6,219(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 219);
	// extsb r3,r6
	ctx.r3.s64 = ctx.r6.s8;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r3,r11
	ctx.r4.u64 = ctx.r3.u64 + ctx.r11.u64;
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r4,r11,42
	ctx.r4.s64 = ctx.r11.s64 + 42;
	// bl 0x825aeb40
	ctx.lr = 0x8210D5FC;
	sub_825AEB40(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,16
	ctx.r10.s64 = 16;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8210D60C:
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x8210d60c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8210D60C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r5,r11,16120
	ctx.r5.s64 = ctx.r11.s64 + 16120;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82404710
	ctx.lr = 0x8210D634;
	sub_82404710(ctx, base);
	// lis r11,-32115
	ctx.r11.s64 = -2104688640;
	// lbz r3,219(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 219);
	// addi r11,r11,-14944
	ctx.r11.s64 = ctx.r11.s64 + -14944;
	// extsb r4,r3
	ctx.r4.s64 = ctx.r3.s8;
	// addi r3,r11,22532
	ctx.r3.s64 = ctx.r11.s64 + 22532;
	// bl 0x82360580
	ctx.lr = 0x8210D64C;
	sub_82360580(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8210D660"))) PPC_WEAK_FUNC(sub_8210D660);
PPC_FUNC_IMPL(__imp__sub_8210D660) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x8210D668;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r31,r3,41
	ctx.r31.s64 = ctx.r3.s64 + 41;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// li r29,1
	ctx.r29.s64 = 1;
loc_8210D67C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825aece0
	ctx.lr = 0x8210D688;
	sub_825AECE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8210d6a4
	if (!ctx.cr6.eq) goto loc_8210D6A4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r29,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r29.u8);
	// bl 0x825aeb48
	ctx.lr = 0x8210D69C;
	sub_825AEB48(ctx, base);
	// stw r3,-17(r31)
	PPC_STORE_U32(ctx.r31.u32 + -17, ctx.r3.u32);
	// b 0x8210d6a8
	goto loc_8210D6A8;
loc_8210D6A4:
	// stb r28,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r28.u8);
loc_8210D6A8:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,48
	ctx.r31.s64 = ctx.r31.s64 + 48;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// blt cr6,0x8210d67c
	if (ctx.cr6.lt) goto loc_8210D67C;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8210D6C0"))) PPC_WEAK_FUNC(sub_8210D6C0);
PPC_FUNC_IMPL(__imp__sub_8210D6C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x8210D6C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,256
	ctx.r11.s64 = 256;
	// lis r10,4100
	ctx.r10.s64 = 268697600;
	// extsb r31,r4
	ctx.r31.s64 = ctx.r4.s8;
	// ori r4,r10,39
	ctx.r4.u64 = ctx.r10.u64 | 39;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lis r11,4100
	ctx.r11.s64 = 268697600;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// ori r10,r11,3
	ctx.r10.u64 = ctx.r11.u64 | 3;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x824200a0
	ctx.lr = 0x8210D718;
	sub_824200A0(ctx, base);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bgt cr6,0x8210d748
	if (ctx.cr6.gt) goto loc_8210D748;
	// add r7,r31,r11
	ctx.r7.u64 = ctx.r31.u64 + ctx.r11.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// rlwinm r11,r7,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stb r8,60(r11)
	PPC_STORE_U8(ctx.r11.u32 + 60, ctx.r8.u8);
	// b 0x8210d75c
	goto loc_8210D75C;
loc_8210D748:
	// add r5,r31,r11
	ctx.r5.u64 = ctx.r31.u64 + ctx.r11.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rlwinm r11,r5,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stb r6,60(r11)
	PPC_STORE_U8(ctx.r11.u32 + 60, ctx.r6.u8);
loc_8210D75C:
	// lwz r4,72(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// stw r4,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r4.u32);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8210D77C"))) PPC_WEAK_FUNC(sub_8210D77C);
PPC_FUNC_IMPL(__imp__sub_8210D77C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8210D780"))) PPC_WEAK_FUNC(sub_8210D780);
PPC_FUNC_IMPL(__imp__sub_8210D780) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,11996
	ctx.r30.s64 = ctx.r11.s64 + 11996;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r30,-104
	ctx.r4.s64 = ctx.r30.s64 + -104;
	// addi r3,r31,232
	ctx.r3.s64 = ctx.r31.s64 + 232;
	// bl 0x8259d2a0
	ctx.lr = 0x8210D7B0;
	sub_8259D2A0(ctx, base);
	// addi r4,r30,-88
	ctx.r4.s64 = ctx.r30.s64 + -88;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r3,r31,360
	ctx.r3.s64 = ctx.r31.s64 + 360;
	// bl 0x8259d2a0
	ctx.lr = 0x8210D7C0;
	sub_8259D2A0(ctx, base);
	// addi r4,r30,-64
	ctx.r4.s64 = ctx.r30.s64 + -64;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r3,r31,424
	ctx.r3.s64 = ctx.r31.s64 + 424;
	// bl 0x8259d2a0
	ctx.lr = 0x8210D7D0;
	sub_8259D2A0(ctx, base);
	// addi r4,r30,-48
	ctx.r4.s64 = ctx.r30.s64 + -48;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r3,r31,552
	ctx.r3.s64 = ctx.r31.s64 + 552;
	// bl 0x8259d2a0
	ctx.lr = 0x8210D7E0;
	sub_8259D2A0(ctx, base);
	// addi r4,r30,-24
	ctx.r4.s64 = ctx.r30.s64 + -24;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r3,r31,616
	ctx.r3.s64 = ctx.r31.s64 + 616;
	// bl 0x8259d2a0
	ctx.lr = 0x8210D7F0;
	sub_8259D2A0(ctx, base);
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,744
	ctx.r3.s64 = ctx.r31.s64 + 744;
	// bl 0x8259d2a0
	ctx.lr = 0x8210D800;
	sub_8259D2A0(ctx, base);
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

__attribute__((alias("__imp__sub_8210D818"))) PPC_WEAK_FUNC(sub_8210D818);
PPC_FUNC_IMPL(__imp__sub_8210D818) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r10,219(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 219);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r9,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// addi r4,r11,18
	ctx.r4.s64 = ctx.r11.s64 + 18;
	// bl 0x8259cce0
	ctx.lr = 0x8210D850;
	sub_8259CCE0(ctx, base);
	// cntlzw r8,r3
	ctx.r8.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// clrlwi r3,r7,24
	ctx.r3.u64 = ctx.r7.u32 & 0xFF;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8210D86C"))) PPC_WEAK_FUNC(sub_8210D86C);
PPC_FUNC_IMPL(__imp__sub_8210D86C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8210D870"))) PPC_WEAK_FUNC(sub_8210D870);
PPC_FUNC_IMPL(__imp__sub_8210D870) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,219(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 219);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,42
	ctx.r3.s64 = ctx.r11.s64 + 42;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8210D890"))) PPC_WEAK_FUNC(sub_8210D890);
PPC_FUNC_IMPL(__imp__sub_8210D890) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,219(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 219);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// ld r3,32(r9)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r9.u32 + 32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8210D8B0"))) PPC_WEAK_FUNC(sub_8210D8B0);
PPC_FUNC_IMPL(__imp__sub_8210D8B0) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,225(r4)
	PPC_STORE_U8(ctx.r4.u32 + 225, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8210D8C4"))) PPC_WEAK_FUNC(sub_8210D8C4);
PPC_FUNC_IMPL(__imp__sub_8210D8C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8210D8C8"))) PPC_WEAK_FUNC(sub_8210D8C8);
PPC_FUNC_IMPL(__imp__sub_8210D8C8) {
	PPC_FUNC_PROLOGUE();
	// stw r4,808(r3)
	PPC_STORE_U32(ctx.r3.u32 + 808, ctx.r4.u32);
	// stw r5,812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 812, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8210D8D4"))) PPC_WEAK_FUNC(sub_8210D8D4);
PPC_FUNC_IMPL(__imp__sub_8210D8D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}


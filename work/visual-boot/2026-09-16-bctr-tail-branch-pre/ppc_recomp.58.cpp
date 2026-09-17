#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82417454"))) PPC_WEAK_FUNC(sub_82417454);
PPC_FUNC_IMPL(__imp__sub_82417454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82417458"))) PPC_WEAK_FUNC(sub_82417458);
PPC_FUNC_IMPL(__imp__sub_82417458) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// bge cr6,0x82417474
	if (!ctx.cr6.lt) goto loc_82417474;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r4,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r4.u8);
	// blr 
	return;
loc_82417474:
	// cmplwi cr6,r11,2048
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2048, ctx.xer);
	// lis r9,511
	ctx.r9.s64 = 33488896;
	// bge cr6,0x824174a8
	if (!ctx.cr6.lt) goto loc_824174A8;
	// lis r6,1023
	ctx.r6.s64 = 67043328;
	// ori r8,r9,65535
	ctx.r8.u64 = ctx.r9.u64 | 65535;
	// rlwinm r7,r4,26,22,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 26) & 0x3FF;
	// ori r5,r6,65535
	ctx.r5.u64 = ctx.r6.u64 | 65535;
	// rlwimi r11,r8,7,0,25
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r8.u32, 7) & 0xFFFFFFC0) | (ctx.r11.u64 & 0xFFFFFFFF0000003F);
	// rlwimi r7,r5,6,0,25
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r5.u32, 6) & 0xFFFFFFC0) | (ctx.r7.u64 & 0xFFFFFFFF0000003F);
	// li r3,2
	ctx.r3.s64 = 2;
	// stb r11,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r11.u8);
	// stb r7,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r7.u8);
	// blr 
	return;
loc_824174A8:
	// lis r7,2047
	ctx.r7.s64 = 134152192;
	// ori r9,r9,65535
	ctx.r9.u64 = ctx.r9.u64 | 65535;
	// rlwinm r8,r4,20,28,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 20) & 0xF;
	// ori r6,r7,65535
	ctx.r6.u64 = ctx.r7.u64 | 65535;
	// rlwinm r5,r4,26,22,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 26) & 0x3FF;
	// rlwimi r11,r9,7,0,25
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 7) & 0xFFFFFFC0) | (ctx.r11.u64 & 0xFFFFFFFF0000003F);
	// rlwimi r8,r6,5,0,26
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r6.u32, 5) & 0xFFFFFFE0) | (ctx.r8.u64 & 0xFFFFFFFF0000001F);
	// rlwimi r5,r9,7,0,25
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r9.u32, 7) & 0xFFFFFFC0) | (ctx.r5.u64 & 0xFFFFFFFF0000003F);
	// li r3,3
	ctx.r3.s64 = 3;
	// stb r11,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r11.u8);
	// stb r8,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
	// stb r5,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r5.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824174DC"))) PPC_WEAK_FUNC(sub_824174DC);
PPC_FUNC_IMPL(__imp__sub_824174DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824174E0"))) PPC_WEAK_FUNC(sub_824174E0);
PPC_FUNC_IMPL(__imp__sub_824174E0) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x824174E8;
	__savegprlr_29(ctx, base);
	// lhz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r4,-2
	ctx.r3.s64 = ctx.r4.s64 + -2;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8241759c
	if (ctx.cr6.eq) goto loc_8241759C;
	// lis r6,1023
	ctx.r6.s64 = 67043328;
	// lis r10,511
	ctx.r10.s64 = 33488896;
	// lis r11,2047
	ctx.r11.s64 = 134152192;
	// ori r4,r6,65535
	ctx.r4.u64 = ctx.r6.u64 | 65535;
	// ori r8,r10,65535
	ctx.r8.u64 = ctx.r10.u64 | 65535;
	// ori r6,r11,65535
	ctx.r6.u64 = ctx.r11.u64 | 65535;
loc_82417518:
	// cmpw cr6,r7,r3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x8241759c
	if (!ctx.cr6.lt) goto loc_8241759C;
	// clrlwi r11,r9,16
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFF;
	// add r10,r7,r31
	ctx.r10.u64 = ctx.r7.u64 + ctx.r31.u64;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// bge cr6,0x8241753c
	if (!ctx.cr6.lt) goto loc_8241753C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// b 0x82417588
	goto loc_82417588;
loc_8241753C:
	// cmplwi cr6,r11,2048
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2048, ctx.xer);
	// rlwimi r11,r8,7,0,25
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r8.u32, 7) & 0xFFFFFFC0) | (ctx.r11.u64 & 0xFFFFFFFF0000003F);
	// bge cr6,0x82417564
	if (!ctx.cr6.lt) goto loc_82417564;
	// rlwinm r9,r9,26,22,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x3FF;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// rlwimi r9,r4,6,0,25
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r4.u32, 6) & 0xFFFFFFC0) | (ctx.r9.u64 & 0xFFFFFFFF0000003F);
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r30,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r30.u8);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// b 0x82417588
	goto loc_82417588;
loc_82417564:
	// rlwinm r30,r9,20,28,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 20) & 0xF;
	// rlwinm r9,r9,26,22,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x3FF;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// rlwimi r30,r6,5,0,26
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r6.u32, 5) & 0xFFFFFFE0) | (ctx.r30.u64 & 0xFFFFFFFF0000001F);
	// rlwimi r9,r8,7,0,25
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 7) & 0xFFFFFFC0) | (ctx.r9.u64 & 0xFFFFFFFF0000003F);
	// li r11,3
	ctx.r11.s64 = 3;
	// stb r29,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r29.u8);
	// stb r30,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r30.u8);
	// stb r9,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r9.u8);
loc_82417588:
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lhz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82417518
	if (!ctx.cr6.eq) goto loc_82417518;
loc_8241759C:
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r7,1
	ctx.r3.s64 = ctx.r7.s64 + 1;
	// stbx r10,r7,r31
	PPC_STORE_U8(ctx.r7.u32 + ctx.r31.u32, ctx.r10.u8);
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824175AC"))) PPC_WEAK_FUNC(sub_824175AC);
PPC_FUNC_IMPL(__imp__sub_824175AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824175B0"))) PPC_WEAK_FUNC(sub_824175B0);
PPC_FUNC_IMPL(__imp__sub_824175B0) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lbz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82417644
	if (ctx.cr6.eq) goto loc_82417644;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
loc_824175D4:
	// cmpw cr6,r6,r4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r4.s32, ctx.xer);
	// bge cr6,0x82417644
	if (!ctx.cr6.lt) goto loc_82417644;
	// add r11,r7,r5
	ctx.r11.u64 = ctx.r7.u64 + ctx.r5.u64;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// rlwinm r3,r10,0,24,24
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82417604
	if (!ctx.cr6.eq) goto loc_82417604;
	// clrlwi r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r10,0(r8)
	PPC_STORE_U16(ctx.r8.u32 + 0, ctx.r10.u16);
	// b 0x8241762c
	goto loc_8241762C;
loc_82417604:
	// rlwinm r9,r10,0,24,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE0;
	// cmplwi cr6,r9,192
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 192, ctx.xer);
	// bne cr6,0x8241765c
	if (!ctx.cr6.eq) goto loc_8241765C;
	// lbz r3,1(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rlwinm r10,r10,6,10,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0x3FFFC0;
	// li r11,2
	ctx.r11.s64 = 2;
	// rlwinm r10,r10,0,21,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFC7FF;
	// andi. r9,r3,65343
	ctx.r9.u64 = ctx.r3.u64 & 65343;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
loc_82417624:
	// or r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 | ctx.r10.u64;
	// sth r3,0(r8)
	PPC_STORE_U16(ctx.r8.u32 + 0, ctx.r3.u16);
loc_8241762C:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
loc_82417634:
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lbzx r9,r7,r5
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r5.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x824175d4
	if (!ctx.cr6.eq) goto loc_824175D4;
loc_82417644:
	// rlwinm r8,r6,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r6,1
	ctx.r3.s64 = ctx.r6.s64 + 1;
	// sthx r7,r8,r31
	PPC_STORE_U16(ctx.r8.u32 + ctx.r31.u32, ctx.r7.u16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_8241765C:
	// rlwinm r9,r10,0,24,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xF0;
	// cmplwi cr6,r9,224
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 224, ctx.xer);
	// bne cr6,0x82417688
	if (!ctx.cr6.eq) goto loc_82417688;
	// lbz r3,2(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// rlwinm r10,r10,12,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFFFF000;
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// li r11,3
	ctx.r11.s64 = 3;
	// or r3,r3,r10
	ctx.r3.u64 = ctx.r3.u64 | ctx.r10.u64;
	// rlwinm r10,r9,6,20,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFFFFFFFCFFF;
	// andi. r9,r3,65343
	ctx.r9.u64 = ctx.r3.u64 & 65343;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// b 0x82417624
	goto loc_82417624;
loc_82417688:
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x82417634
	goto loc_82417634;
}

__attribute__((alias("__imp__sub_82417690"))) PPC_WEAK_FUNC(sub_82417690);
PPC_FUNC_IMPL(__imp__sub_82417690) {
	PPC_FUNC_PROLOGUE();
	// li r9,0
	ctx.r9.s64 = 0;
loc_82417694:
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// cmpwi cr6,r10,48
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 48, ctx.xer);
	// blt cr6,0x824176ac
	if (ctx.cr6.lt) goto loc_824176AC;
	// cmpwi cr6,r10,57
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 57, ctx.xer);
	// ble cr6,0x824176cc
	if (!ctx.cr6.gt) goto loc_824176CC;
loc_824176AC:
	// cmpwi cr6,r10,97
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 97, ctx.xer);
	// blt cr6,0x824176bc
	if (ctx.cr6.lt) goto loc_824176BC;
	// cmpwi cr6,r10,102
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 102, ctx.xer);
	// ble cr6,0x824176cc
	if (!ctx.cr6.gt) goto loc_824176CC;
loc_824176BC:
	// cmpwi cr6,r10,65
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 65, ctx.xer);
	// blt cr6,0x824176f4
	if (ctx.cr6.lt) goto loc_824176F4;
	// cmpwi cr6,r10,70
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 70, ctx.xer);
	// bgt cr6,0x824176f4
	if (ctx.cr6.gt) goto loc_824176F4;
loc_824176CC:
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// cmpwi cr6,r10,57
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 57, ctx.xer);
	// ble cr6,0x824176e0
	if (!ctx.cr6.gt) goto loc_824176E0;
	// addi r11,r10,9
	ctx.r11.s64 = ctx.r10.s64 + 9;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
loc_824176E0:
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// rlwimi r10,r9,4,0,27
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 4) & 0xFFFFFFF0) | (ctx.r10.u64 & 0xFFFFFFFF0000000F);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// b 0x82417694
	goto loc_82417694;
loc_824176F4:
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824176FC"))) PPC_WEAK_FUNC(sub_824176FC);
PPC_FUNC_IMPL(__imp__sub_824176FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82417700"))) PPC_WEAK_FUNC(sub_82417700);
PPC_FUNC_IMPL(__imp__sub_82417700) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baec
	ctx.lr = 0x82417708;
	__savegprlr_25(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
	// bl 0x82402fb8
	ctx.lr = 0x82417728;
	sub_82402FB8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82402ff8
	ctx.lr = 0x82417738;
	sub_82402FF8(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x824177d8
	if (ctx.cr6.eq) goto loc_824177D8;
	// lis r11,-32150
	ctx.r11.s64 = -2106982400;
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r29,r11,-12456
	ctx.r29.s64 = ctx.r11.s64 + -12456;
loc_8241774C:
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82417690
	ctx.lr = 0x82417758;
	sub_82417690(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,58
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 58, ctx.xer);
	// beq cr6,0x8241776c
	if (ctx.cr6.eq) goto loc_8241776C;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x82417790
	goto loc_82417790;
loc_8241776C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bl 0x82417690
	ctx.lr = 0x82417778;
	sub_82417690(ctx, base);
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,44
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 44, ctx.xer);
	// bne cr6,0x82417788
	if (!ctx.cr6.eq) goto loc_82417788;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_82417788:
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82417790:
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x824177d8
	if (ctx.cr6.eq) goto loc_824177D8;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x824177d8
	if (ctx.cr6.eq) goto loc_824177D8;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x824177d0
	if (ctx.cr6.lt) goto loc_824177D0;
	// lwz r8,4(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r30,r8
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x824177d0
	if (!ctx.cr6.lt) goto loc_824177D0;
	// cmplw cr6,r4,r30
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x824177d0
	if (!ctx.cr6.lt) goto loc_824177D0;
	// subf r5,r4,r30
	ctx.r5.s64 = ctx.r30.s64 - ctx.r4.s64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82402ff8
	ctx.lr = 0x824177D0;
	sub_82402FF8(ctx, base);
loc_824177D0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8241774c
	if (!ctx.cr6.eq) goto loc_8241774C;
loc_824177D8:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82402ff8
	ctx.lr = 0x824177E8;
	sub_82402FF8(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824030d0
	ctx.lr = 0x824177F8;
	sub_824030D0(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82417800"))) PPC_WEAK_FUNC(sub_82417800);
PPC_FUNC_IMPL(__imp__sub_82417800) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82417808;
	__savegprlr_29(ctx, base);
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
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,168
	ctx.r10.s64 = ctx.r1.s64 + 168;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stb r29,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r29.u8);
	// bl 0x8259f9e8
	ctx.lr = 0x82417844;
	sub_8259F9E8(ctx, base);
	// add r9,r31,r30
	ctx.r9.u64 = ctx.r31.u64 + ctx.r30.u64;
	// stb r29,-1(r9)
	PPC_STORE_U8(ctx.r9.u32 + -1, ctx.r29.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82417854"))) PPC_WEAK_FUNC(sub_82417854);
PPC_FUNC_IMPL(__imp__sub_82417854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82417858"))) PPC_WEAK_FUNC(sub_82417858);
PPC_FUNC_IMPL(__imp__sub_82417858) {
	PPC_FUNC_PROLOGUE();
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
loc_8241785C:
	// lbz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// extsb r11,r9
	ctx.r11.s64 = ctx.r9.s8;
	// cmpwi cr6,r11,65
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 65, ctx.xer);
	// blt cr6,0x82417880
	if (ctx.cr6.lt) goto loc_82417880;
	// cmpwi cr6,r11,90
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 90, ctx.xer);
	// bgt cr6,0x82417880
	if (ctx.cr6.gt) goto loc_82417880;
	// xori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 ^ 32;
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
loc_82417880:
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,65
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 65, ctx.xer);
	// blt cr6,0x824178a4
	if (ctx.cr6.lt) goto loc_824178A4;
	// cmpwi cr6,r11,90
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 90, ctx.xer);
	// bgt cr6,0x824178a4
	if (ctx.cr6.gt) goto loc_824178A4;
	// xori r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 ^ 32;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
loc_824178A4:
	// extsb r11,r9
	ctx.r11.s64 = ctx.r9.s8;
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// subf r3,r9,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r9.s64;
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8241785c
	if (ctx.cr6.eq) goto loc_8241785C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824178C4"))) PPC_WEAK_FUNC(sub_824178C4);
PPC_FUNC_IMPL(__imp__sub_824178C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824178C8"))) PPC_WEAK_FUNC(sub_824178C8);
PPC_FUNC_IMPL(__imp__sub_824178C8) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x8259d2a0
	ctx.lr = 0x824178E8;
	sub_8259D2A0(ctx, base);
	// add r11,r31,r30
	ctx.r11.u64 = ctx.r31.u64 + ctx.r30.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r10,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r10.u8);
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

__attribute__((alias("__imp__sub_82417910"))) PPC_WEAK_FUNC(sub_82417910);
PPC_FUNC_IMPL(__imp__sub_82417910) {
	PPC_FUNC_PROLOGUE();
	// li r11,126
	ctx.r11.s64 = 126;
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,35
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 35, ctx.xer);
	// bne cr6,0x824179b4
	if (!ctx.cr6.eq) goto loc_824179B4;
	// lbz r10,1(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// cmplwi cr6,r10,120
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 120, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// bne cr6,0x82417970
	if (!ctx.cr6.eq) goto loc_82417970;
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// blt cr6,0x82417968
	if (ctx.cr6.lt) goto loc_82417968;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r9,r9,11880
	ctx.r9.s64 = ctx.r9.s64 + 11880;
loc_8241794C:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// lbzx r7,r11,r9
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// rlwinm r8,r10,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// or r10,r7,r8
	ctx.r10.u64 = ctx.r7.u64 | ctx.r8.u64;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// bge cr6,0x8241794c
	if (!ctx.cr6.lt) goto loc_8241794C;
loc_82417968:
	// stb r10,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r10.u8);
	// b 0x82417a9c
	goto loc_82417A9C;
loc_82417970:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// blt cr6,0x824179ac
	if (ctx.cr6.lt) goto loc_824179AC;
loc_82417980:
	// cmplwi cr6,r11,57
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 57, ctx.xer);
	// bgt cr6,0x824179ac
	if (ctx.cr6.gt) goto loc_824179AC;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// clrlwi r9,r11,28
	ctx.r9.u64 = ctx.r11.u32 & 0xF;
	// rlwinm r10,r5,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// bge cr6,0x82417980
	if (!ctx.cr6.lt) goto loc_82417980;
loc_824179AC:
	// stb r10,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r10.u8);
	// b 0x82417a9c
	goto loc_82417A9C;
loc_824179B4:
	// cmplwi cr6,r11,97
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 97, ctx.xer);
	// bne cr6,0x82417a20
	if (!ctx.cr6.eq) goto loc_82417A20;
	// lbz r10,1(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// cmplwi cr6,r10,109
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 109, ctx.xer);
	// bne cr6,0x824179e4
	if (!ctx.cr6.eq) goto loc_824179E4;
	// lbz r9,2(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// cmplwi cr6,r9,112
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 112, ctx.xer);
	// bne cr6,0x824179e4
	if (!ctx.cr6.eq) goto loc_824179E4;
	// li r8,38
	ctx.r8.s64 = 38;
	// addi r3,r3,3
	ctx.r3.s64 = ctx.r3.s64 + 3;
	// stb r8,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r8.u8);
	// b 0x82417a9c
	goto loc_82417A9C;
loc_824179E4:
	// cmplwi cr6,r11,97
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 97, ctx.xer);
	// bne cr6,0x82417a20
	if (!ctx.cr6.eq) goto loc_82417A20;
	// lbz r7,1(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// cmplwi cr6,r7,112
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 112, ctx.xer);
	// bne cr6,0x82417a20
	if (!ctx.cr6.eq) goto loc_82417A20;
	// lbz r6,2(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// cmplwi cr6,r6,111
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 111, ctx.xer);
	// bne cr6,0x82417a20
	if (!ctx.cr6.eq) goto loc_82417A20;
	// lbz r5,3(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// cmplwi cr6,r5,115
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 115, ctx.xer);
	// bne cr6,0x82417a20
	if (!ctx.cr6.eq) goto loc_82417A20;
	// li r11,39
	ctx.r11.s64 = 39;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// b 0x82417a9c
	goto loc_82417A9C;
loc_82417A20:
	// cmplwi cr6,r11,113
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 113, ctx.xer);
	// bne cr6,0x82417a5c
	if (!ctx.cr6.eq) goto loc_82417A5C;
	// lbz r10,1(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// cmplwi cr6,r10,117
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 117, ctx.xer);
	// bne cr6,0x82417a5c
	if (!ctx.cr6.eq) goto loc_82417A5C;
	// lbz r9,2(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// cmplwi cr6,r9,111
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 111, ctx.xer);
	// bne cr6,0x82417a5c
	if (!ctx.cr6.eq) goto loc_82417A5C;
	// lbz r8,3(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// cmplwi cr6,r8,116
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 116, ctx.xer);
	// bne cr6,0x82417a5c
	if (!ctx.cr6.eq) goto loc_82417A5C;
	// li r7,34
	ctx.r7.s64 = 34;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// stb r7,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r7.u8);
	// b 0x82417a9c
	goto loc_82417A9C;
loc_82417A5C:
	// cmplwi cr6,r11,108
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 108, ctx.xer);
	// bne cr6,0x82417a7c
	if (!ctx.cr6.eq) goto loc_82417A7C;
	// lbz r6,1(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// cmplwi cr6,r6,116
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 116, ctx.xer);
	// bne cr6,0x82417a7c
	if (!ctx.cr6.eq) goto loc_82417A7C;
	// li r5,60
	ctx.r5.s64 = 60;
	// stb r5,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r5.u8);
	// b 0x82417a98
	goto loc_82417A98;
loc_82417A7C:
	// cmplwi cr6,r11,103
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 103, ctx.xer);
	// bne cr6,0x82417a9c
	if (!ctx.cr6.eq) goto loc_82417A9C;
	// lbz r11,1(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// cmplwi cr6,r11,116
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 116, ctx.xer);
	// bne cr6,0x82417a9c
	if (!ctx.cr6.eq) goto loc_82417A9C;
	// li r10,62
	ctx.r10.s64 = 62;
	// stb r10,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r10.u8);
loc_82417A98:
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
loc_82417A9C:
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r9,59
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 59, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82417AB0"))) PPC_WEAK_FUNC(sub_82417AB0);
PPC_FUNC_IMPL(__imp__sub_82417AB0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,60
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 60, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_82417ACC:
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// ble cr6,0x82417ae4
	if (!ctx.cr6.gt) goto loc_82417AE4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82417acc
	if (!ctx.cr6.eq) goto loc_82417ACC;
loc_82417AE4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82417b08
	if (ctx.cr6.eq) goto loc_82417B08;
loc_82417AF0:
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// bgt cr6,0x82417b08
	if (ctx.cr6.gt) goto loc_82417B08;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82417af0
	if (!ctx.cr6.eq) goto loc_82417AF0;
loc_82417B08:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82417b44
	if (ctx.cr6.eq) goto loc_82417B44;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// subf r6,r11,r4
	ctx.r6.s64 = ctx.r4.s64 - ctx.r11.s64;
loc_82417B24:
	// lbzx r5,r6,r10
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r10.u32);
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x82417b44
	if (!ctx.cr6.eq) goto loc_82417B44;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82417b24
	if (!ctx.cr6.eq) goto loc_82417B24;
loc_82417B44:
	// lbzx r10,r7,r4
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r4.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82417b84
	if (!ctx.cr6.eq) goto loc_82417B84;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82417b78
	if (ctx.cr6.eq) goto loc_82417B78;
loc_82417B60:
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// bgt cr6,0x82417b78
	if (ctx.cr6.gt) goto loc_82417B78;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82417b60
	if (!ctx.cr6.eq) goto loc_82417B60;
loc_82417B78:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r8,61
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 61, ctx.xer);
	// beq cr6,0x82417c60
	if (ctx.cr6.eq) goto loc_82417C60;
loc_82417B84:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82417bac
	if (ctx.cr6.eq) goto loc_82417BAC;
loc_82417B8C:
	// cmplwi cr6,r8,62
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 62, ctx.xer);
	// beq cr6,0x82417bac
	if (ctx.cr6.eq) goto loc_82417BAC;
	// cmplwi cr6,r8,61
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 61, ctx.xer);
	// beq cr6,0x82417bac
	if (ctx.cr6.eq) goto loc_82417BAC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82417b8c
	if (!ctx.cr6.eq) goto loc_82417B8C;
loc_82417BAC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,61
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 61, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82417be0
	if (ctx.cr6.eq) goto loc_82417BE0;
loc_82417BC8:
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// bgt cr6,0x82417be0
	if (ctx.cr6.gt) goto loc_82417BE0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82417bc8
	if (!ctx.cr6.eq) goto loc_82417BC8;
loc_82417BE0:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmplwi cr6,r10,34
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 34, ctx.xer);
	// beq cr6,0x82417c1c
	if (ctx.cr6.eq) goto loc_82417C1C;
	// cmplwi cr6,r10,39
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 39, ctx.xer);
	// beq cr6,0x82417c1c
	if (ctx.cr6.eq) goto loc_82417C1C;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82417ae4
	if (ctx.cr6.eq) goto loc_82417AE4;
loc_82417C00:
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// bgt cr6,0x82417ae4
	if (ctx.cr6.gt) goto loc_82417AE4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82417c00
	if (!ctx.cr6.eq) goto loc_82417C00;
	// b 0x82417ae4
	goto loc_82417AE4;
loc_82417C1C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82417c48
	if (ctx.cr6.eq) goto loc_82417C48;
	// clrlwi r9,r8,24
	ctx.r9.u64 = ctx.r8.u32 & 0xFF;
loc_82417C30:
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82417c48
	if (ctx.cr6.eq) goto loc_82417C48;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82417c30
	if (!ctx.cr6.eq) goto loc_82417C30;
loc_82417C48:
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// clrlwi r6,r8,24
	ctx.r6.u64 = ctx.r8.u32 & 0xFF;
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x82417ae4
	if (!ctx.cr6.eq) goto loc_82417AE4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x82417ae4
	goto loc_82417AE4;
loc_82417C60:
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_82417C70:
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82417c70
	if (!ctx.cr6.eq) goto loc_82417C70;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82417C8C"))) PPC_WEAK_FUNC(sub_82417C8C);
PPC_FUNC_IMPL(__imp__sub_82417C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82417C90"))) PPC_WEAK_FUNC(sub_82417C90);
PPC_FUNC_IMPL(__imp__sub_82417C90) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82417e00
	if (ctx.cr6.eq) goto loc_82417E00;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,60
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 60, ctx.xer);
	// bne cr6,0x82417e00
	if (!ctx.cr6.eq) goto loc_82417E00;
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,63
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 63, ctx.xer);
	// bne cr6,0x82417cfc
	if (!ctx.cr6.eq) goto loc_82417CFC;
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82417ce8
	if (ctx.cr6.eq) goto loc_82417CE8;
loc_82417CC4:
	// cmplwi cr6,r11,63
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 63, ctx.xer);
	// beq cr6,0x82417ce8
	if (ctx.cr6.eq) goto loc_82417CE8;
	// lbz r10,1(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// cmplwi cr6,r10,62
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 62, ctx.xer);
	// beq cr6,0x82417ce8
	if (ctx.cr6.eq) goto loc_82417CE8;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82417cc4
	if (!ctx.cr6.eq) goto loc_82417CC4;
loc_82417CE8:
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82417dd0
	if (ctx.cr6.eq) goto loc_82417DD0;
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// b 0x82417dd0
	goto loc_82417DD0;
loc_82417CFC:
	// cmplwi cr6,r10,33
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 33, ctx.xer);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// bne cr6,0x82417d50
	if (!ctx.cr6.eq) goto loc_82417D50;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82417dd0
	if (ctx.cr6.eq) goto loc_82417DD0;
loc_82417D18:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82417dd0
	if (!ctx.cr6.gt) goto loc_82417DD0;
	// cmplwi cr6,r11,62
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 62, ctx.xer);
	// bne cr6,0x82417d30
	if (!ctx.cr6.eq) goto loc_82417D30;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// b 0x82417d3c
	goto loc_82417D3C;
loc_82417D30:
	// cmplwi cr6,r11,60
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 60, ctx.xer);
	// bne cr6,0x82417d3c
	if (!ctx.cr6.eq) goto loc_82417D3C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_82417D3C:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82417d18
	if (!ctx.cr6.eq) goto loc_82417D18;
	// b 0x82417dd0
	goto loc_82417DD0;
loc_82417D50:
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82417dd0
	if (ctx.cr6.eq) goto loc_82417DD0;
	// cmplwi cr6,r11,60
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 60, ctx.xer);
	// bne cr6,0x82417e08
	if (!ctx.cr6.eq) goto loc_82417E08;
	// lbz r8,1(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r8,47
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 47, ctx.xer);
	// bne cr6,0x82417d78
	if (!ctx.cr6.eq) goto loc_82417D78;
	// li r11,-1
	ctx.r11.s64 = -1;
loc_82417D78:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82417da4
	if (ctx.cr6.eq) goto loc_82417DA4;
loc_82417D8C:
	// cmplwi cr6,r11,62
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 62, ctx.xer);
	// beq cr6,0x82417da4
	if (ctx.cr6.eq) goto loc_82417DA4;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82417d8c
	if (!ctx.cr6.eq) goto loc_82417D8C;
loc_82417DA4:
	// lbz r7,-1(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + -1);
	// cmplwi cr6,r7,47
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 47, ctx.xer);
	// bne cr6,0x82417db8
	if (!ctx.cr6.eq) goto loc_82417DB8;
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// b 0x82417dc8
	goto loc_82417DC8;
loc_82417DB8:
	// lbz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r6,62
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 62, ctx.xer);
	// bne cr6,0x82417dc8
	if (!ctx.cr6.eq) goto loc_82417DC8;
loc_82417DC4:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_82417DC8:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x82417d50
	if (ctx.cr6.gt) goto loc_82417D50;
loc_82417DD0:
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82417df4
	if (ctx.cr6.eq) goto loc_82417DF4;
loc_82417DDC:
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bgt cr6,0x82417df4
	if (ctx.cr6.gt) goto loc_82417DF4;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82417ddc
	if (!ctx.cr6.eq) goto loc_82417DDC;
loc_82417DF4:
	// lbz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_82417E00:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82417E08:
	// cmplwi cr6,r11,47
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 47, ctx.xer);
	// bne cr6,0x82417dc4
	if (!ctx.cr6.eq) goto loc_82417DC4;
	// lbz r5,1(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// cmplwi cr6,r5,62
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 62, ctx.xer);
	// bne cr6,0x82417dc4
	if (!ctx.cr6.eq) goto loc_82417DC4;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// b 0x82417dc8
	goto loc_82417DC8;
}

__attribute__((alias("__imp__sub_82417E28"))) PPC_WEAK_FUNC(sub_82417E28);
PPC_FUNC_IMPL(__imp__sub_82417E28) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82418020
	if (ctx.cr6.eq) goto loc_82418020;
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82418020
	if (ctx.cr6.eq) goto loc_82418020;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82418020
	if (ctx.cr6.eq) goto loc_82418020;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82418020
	if (ctx.cr6.eq) goto loc_82418020;
	// cmplwi cr6,r11,46
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 46, ctx.xer);
	// bne cr6,0x82417e84
	if (!ctx.cr6.eq) goto loc_82417E84;
	// cmplwi cr6,r10,60
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 60, ctx.xer);
	// bne cr6,0x82417e84
	if (!ctx.cr6.eq) goto loc_82417E84;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_82417E84:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82418018
	if (ctx.cr6.eq) goto loc_82418018;
loc_82417E8C:
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,60
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 60, ctx.xer);
	// beq cr6,0x82417eb0
	if (ctx.cr6.eq) goto loc_82417EB0;
loc_82417E98:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82417eb0
	if (ctx.cr6.eq) goto loc_82417EB0;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,60
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 60, ctx.xer);
	// bne cr6,0x82417e98
	if (!ctx.cr6.eq) goto loc_82417E98;
loc_82417EB0:
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,60
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 60, ctx.xer);
	// bne cr6,0x82417ef0
	if (!ctx.cr6.eq) goto loc_82417EF0;
	// lbz r10,1(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// cmplwi cr6,r10,63
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 63, ctx.xer);
	// beq cr6,0x82417f84
	if (ctx.cr6.eq) goto loc_82417F84;
	// cmplwi cr6,r11,60
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 60, ctx.xer);
	// bne cr6,0x82417ef0
	if (!ctx.cr6.eq) goto loc_82417EF0;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r9,33
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 33, ctx.xer);
	// beq cr6,0x82417f84
	if (ctx.cr6.eq) goto loc_82417F84;
	// cmplwi cr6,r11,60
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 60, ctx.xer);
	// bne cr6,0x82417ef0
	if (!ctx.cr6.eq) goto loc_82417EF0;
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r8,47
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 47, ctx.xer);
	// beq cr6,0x82418018
	if (ctx.cr6.eq) goto loc_82418018;
loc_82417EF0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82417efc
	if (ctx.cr6.eq) goto loc_82417EFC;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_82417EFC:
	// lbz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82417f40
	if (ctx.cr6.eq) goto loc_82417F40;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// subf r9,r3,r31
	ctx.r9.s64 = ctx.r31.s64 - ctx.r3.s64;
loc_82417F14:
	// lbzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82417f40
	if (ctx.cr6.eq) goto loc_82417F40;
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82417f40
	if (!ctx.cr6.eq) goto loc_82417F40;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82417f14
	if (!ctx.cr6.eq) goto loc_82417F14;
loc_82417F40:
	// lbzx r10,r8,r3
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r3.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82418018
	if (ctx.cr6.eq) goto loc_82418018;
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// ble cr6,0x82417f64
	if (!ctx.cr6.gt) goto loc_82417F64;
	// cmplwi cr6,r10,62
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 62, ctx.xer);
	// beq cr6,0x82417f64
	if (ctx.cr6.eq) goto loc_82417F64;
	// cmplwi cr6,r10,47
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 47, ctx.xer);
	// bne cr6,0x82417f80
	if (!ctx.cr6.eq) goto loc_82417F80;
loc_82417F64:
	// lbzx r11,r8,r31
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82417f98
	if (ctx.cr6.eq) goto loc_82417F98;
	// cmplwi cr6,r11,46
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 46, ctx.xer);
	// bne cr6,0x82417f80
	if (!ctx.cr6.eq) goto loc_82417F80;
	// cmplwi cr6,r10,47
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 47, ctx.xer);
	// bne cr6,0x82417fa4
	if (!ctx.cr6.eq) goto loc_82417FA4;
loc_82417F80:
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
loc_82417F84:
	// bl 0x82417c90
	ctx.lr = 0x82417F88;
	sub_82417C90(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82417e8c
	if (!ctx.cr6.eq) goto loc_82417E8C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82418024
	goto loc_82418024;
loc_82417F98:
	// addi r30,r3,-1
	ctx.r30.s64 = ctx.r3.s64 + -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82418024
	goto loc_82418024;
loc_82417FA4:
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82417fc8
	if (ctx.cr6.eq) goto loc_82417FC8;
loc_82417FB0:
	// cmplwi cr6,r11,62
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 62, ctx.xer);
	// beq cr6,0x82417fc8
	if (ctx.cr6.eq) goto loc_82417FC8;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82417fb0
	if (!ctx.cr6.eq) goto loc_82417FB0;
loc_82417FC8:
	// add r11,r8,r31
	ctx.r11.u64 = ctx.r8.u64 + ctx.r31.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82418000
	if (!ctx.cr6.eq) goto loc_82418000;
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82417ff4
	if (ctx.cr6.eq) goto loc_82417FF4;
	// addi r30,r3,1
	ctx.r30.s64 = ctx.r3.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82418024
	goto loc_82418024;
loc_82417FF4:
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82418024
	goto loc_82418024;
loc_82418000:
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82418018
	if (ctx.cr6.eq) goto loc_82418018;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bl 0x82417e28
	ctx.lr = 0x82418014;
	sub_82417E28(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82418018:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82418024
	goto loc_82418024;
loc_82418020:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82418024:
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

__attribute__((alias("__imp__sub_8241803C"))) PPC_WEAK_FUNC(sub_8241803C);
PPC_FUNC_IMPL(__imp__sub_8241803C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82418040"))) PPC_WEAK_FUNC(sub_82418040);
PPC_FUNC_IMPL(__imp__sub_82418040) {
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
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82418078
	if (ctx.cr6.eq) goto loc_82418078;
loc_82418060:
	// cmplwi cr6,r11,60
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 60, ctx.xer);
	// beq cr6,0x82418078
	if (ctx.cr6.eq) goto loc_82418078;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82418060
	if (!ctx.cr6.eq) goto loc_82418060;
loc_82418078:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82417c90
	ctx.lr = 0x82418080;
	sub_82417C90(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82418130
	if (ctx.cr6.eq) goto loc_82418130;
loc_82418088:
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824180ac
	if (ctx.cr6.eq) goto loc_824180AC;
loc_82418094:
	// cmplwi cr6,r11,60
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 60, ctx.xer);
	// beq cr6,0x824180ac
	if (ctx.cr6.eq) goto loc_824180AC;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82418094
	if (!ctx.cr6.eq) goto loc_82418094;
loc_824180AC:
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// ble cr6,0x824180fc
	if (!ctx.cr6.gt) goto loc_824180FC;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// subf r7,r31,r3
	ctx.r7.s64 = ctx.r3.s64 - ctx.r31.s64;
loc_824180C4:
	// cmplwi cr6,r10,62
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 62, ctx.xer);
	// beq cr6,0x824180fc
	if (ctx.cr6.eq) goto loc_824180FC;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,32
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 32, ctx.xer);
	// ble cr6,0x824180fc
	if (!ctx.cr6.gt) goto loc_824180FC;
	// cmplwi cr6,r9,62
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 62, ctx.xer);
	// beq cr6,0x824180fc
	if (ctx.cr6.eq) goto loc_824180FC;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x824180fc
	if (!ctx.cr6.eq) goto loc_824180FC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lbzx r10,r7,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// bgt cr6,0x824180c4
	if (ctx.cr6.gt) goto loc_824180C4;
loc_824180FC:
	// lbzx r11,r8,r3
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// ble cr6,0x82418110
	if (!ctx.cr6.gt) goto loc_82418110;
	// cmplwi cr6,r11,62
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 62, ctx.xer);
	// bne cr6,0x82418124
	if (!ctx.cr6.eq) goto loc_82418124;
loc_82418110:
	// lbzx r11,r8,r31
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// ble cr6,0x82418130
	if (!ctx.cr6.gt) goto loc_82418130;
	// cmplwi cr6,r11,62
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 62, ctx.xer);
	// beq cr6,0x82418130
	if (ctx.cr6.eq) goto loc_82418130;
loc_82418124:
	// bl 0x82417c90
	ctx.lr = 0x82418128;
	sub_82417C90(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82418088
	if (!ctx.cr6.eq) goto loc_82418088;
loc_82418130:
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

__attribute__((alias("__imp__sub_82418144"))) PPC_WEAK_FUNC(sub_82418144);
PPC_FUNC_IMPL(__imp__sub_82418144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82418148"))) PPC_WEAK_FUNC(sub_82418148);
PPC_FUNC_IMPL(__imp__sub_82418148) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x82418150;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82418290
	if (ctx.cr6.eq) goto loc_82418290;
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// blt cr6,0x82418290
	if (ctx.cr6.lt) goto loc_82418290;
	// bl 0x82417ab0
	ctx.lr = 0x82418174;
	sub_82417AB0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82418234
	if (ctx.cr6.eq) goto loc_82418234;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824181a0
	if (ctx.cr6.eq) goto loc_824181A0;
loc_82418188:
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bgt cr6,0x824181a0
	if (ctx.cr6.gt) goto loc_824181A0;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82418188
	if (!ctx.cr6.eq) goto loc_82418188;
loc_824181A0:
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r10,34
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 34, ctx.xer);
	// beq cr6,0x824181c0
	if (ctx.cr6.eq) goto loc_824181C0;
	// cmplwi cr6,r10,39
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 39, ctx.xer);
	// beq cr6,0x824181c0
	if (ctx.cr6.eq) goto loc_824181C0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x824181c4
	goto loc_824181C4;
loc_824181C0:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_824181C4:
	// li r29,1
	ctx.r29.s64 = 1;
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// ble cr6,0x82418220
	if (!ctx.cr6.gt) goto loc_82418220;
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
loc_824181D4:
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82418220
	if (ctx.cr6.eq) goto loc_82418220;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82418220
	if (ctx.cr6.eq) goto loc_82418220;
	// cmplwi cr6,r11,62
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 62, ctx.xer);
	// beq cr6,0x82418220
	if (ctx.cr6.eq) goto loc_82418220;
	// cmplwi cr6,r11,38
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 38, ctx.xer);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bne cr6,0x8241820c
	if (!ctx.cr6.eq) goto loc_8241820C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82417910
	ctx.lr = 0x82418208;
	sub_82417910(ctx, base);
	// b 0x82418210
	goto loc_82418210;
loc_8241820C:
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
loc_82418210:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x824181d4
	if (ctx.cr6.lt) goto loc_824181D4;
loc_82418220:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r29,-1
	ctx.r3.s64 = ctx.r29.s64 + -1;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_82418234:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82418280
	if (ctx.cr6.eq) goto loc_82418280;
	// li r29,1
	ctx.r29.s64 = 1;
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// ble cr6,0x8241826c
	if (!ctx.cr6.gt) goto loc_8241826C;
loc_82418248:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8241826c
	if (ctx.cr6.eq) goto loc_8241826C;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x82418248
	if (ctx.cr6.lt) goto loc_82418248;
loc_8241826C:
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r29,-1
	ctx.r3.s64 = ctx.r29.s64 + -1;
	// stb r9,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r9.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_82418280:
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r3,r29,-1
	ctx.r3.s64 = ctx.r29.s64 + -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_82418290:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8241829C"))) PPC_WEAK_FUNC(sub_8241829C);
PPC_FUNC_IMPL(__imp__sub_8241829C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824182A0"))) PPC_WEAK_FUNC(sub_824182A0);
PPC_FUNC_IMPL(__imp__sub_824182A0) {
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
	// li r30,1
	ctx.r30.s64 = 1;
	// bl 0x82417ab0
	ctx.lr = 0x824182C0;
	sub_82417AB0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x824182d0
	if (!ctx.cr6.eq) goto loc_824182D0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8241840c
	goto loc_8241840C;
loc_824182D0:
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824182f4
	if (ctx.cr6.eq) goto loc_824182F4;
loc_824182DC:
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bgt cr6,0x824182f4
	if (ctx.cr6.gt) goto loc_824182F4;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824182dc
	if (!ctx.cr6.eq) goto loc_824182DC;
loc_824182F4:
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,34
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 34, ctx.xer);
	// beq cr6,0x82418308
	if (ctx.cr6.eq) goto loc_82418308;
	// cmplwi cr6,r11,39
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 39, ctx.xer);
	// bne cr6,0x8241830c
	if (!ctx.cr6.eq) goto loc_8241830C;
loc_82418308:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_8241830C:
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,43
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 43, ctx.xer);
	// bne cr6,0x82418320
	if (!ctx.cr6.eq) goto loc_82418320;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_82418320:
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,45
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 45, ctx.xer);
	// bne cr6,0x82418334
	if (!ctx.cr6.eq) goto loc_82418334;
	// li r30,-1
	ctx.r30.s64 = -1;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_82418334:
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// blt cr6,0x82418370
	if (ctx.cr6.lt) goto loc_82418370;
loc_82418344:
	// cmplwi cr6,r11,57
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 57, ctx.xer);
	// bgt cr6,0x82418370
	if (ctx.cr6.gt) goto loc_82418370;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// clrlwi r9,r11,28
	ctx.r9.u64 = ctx.r11.u32 & 0xF;
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// bge cr6,0x82418344
	if (!ctx.cr6.lt) goto loc_82418344;
loc_82418370:
	// lbz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// ori r11,r7,32
	ctx.r11.u64 = ctx.r7.u64 | 32;
	// cmplwi cr6,r11,116
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 116, ctx.xer);
	// bne cr6,0x824183b8
	if (!ctx.cr6.eq) goto loc_824183B8;
	// lbz r6,1(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// ori r5,r6,32
	ctx.r5.u64 = ctx.r6.u64 | 32;
	// cmplwi cr6,r5,114
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 114, ctx.xer);
	// bne cr6,0x824183b8
	if (!ctx.cr6.eq) goto loc_824183B8;
	// lbz r4,2(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// ori r9,r4,32
	ctx.r9.u64 = ctx.r4.u64 | 32;
	// cmplwi cr6,r9,117
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 117, ctx.xer);
	// bne cr6,0x824183b8
	if (!ctx.cr6.eq) goto loc_824183B8;
	// lbz r8,3(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// ori r7,r8,32
	ctx.r7.u64 = ctx.r8.u64 | 32;
	// cmplwi cr6,r7,101
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 101, ctx.xer);
	// bne cr6,0x824183b8
	if (!ctx.cr6.eq) goto loc_824183B8;
	// li r30,1
	ctx.r30.s64 = 1;
	// li r10,1
	ctx.r10.s64 = 1;
loc_824183B8:
	// cmplwi cr6,r11,102
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 102, ctx.xer);
	// bne cr6,0x82418408
	if (!ctx.cr6.eq) goto loc_82418408;
	// lbz r6,1(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// ori r5,r6,32
	ctx.r5.u64 = ctx.r6.u64 | 32;
	// cmplwi cr6,r5,97
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 97, ctx.xer);
	// bne cr6,0x82418408
	if (!ctx.cr6.eq) goto loc_82418408;
	// lbz r4,2(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// ori r11,r4,32
	ctx.r11.u64 = ctx.r4.u64 | 32;
	// cmplwi cr6,r11,108
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 108, ctx.xer);
	// bne cr6,0x82418408
	if (!ctx.cr6.eq) goto loc_82418408;
	// lbz r9,3(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// ori r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 | 32;
	// cmplwi cr6,r8,115
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 115, ctx.xer);
	// bne cr6,0x82418408
	if (!ctx.cr6.eq) goto loc_82418408;
	// lbz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// ori r6,r7,32
	ctx.r6.u64 = ctx.r7.u64 | 32;
	// cmplwi cr6,r6,101
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 101, ctx.xer);
	// bne cr6,0x82418408
	if (!ctx.cr6.eq) goto loc_82418408;
	// li r30,1
	ctx.r30.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82418408:
	// mullw r3,r10,r30
	ctx.r3.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r30.s32);
loc_8241840C:
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

__attribute__((alias("__imp__sub_82418424"))) PPC_WEAK_FUNC(sub_82418424);
PPC_FUNC_IMPL(__imp__sub_82418424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82418428"))) PPC_WEAK_FUNC(sub_82418428);
PPC_FUNC_IMPL(__imp__sub_82418428) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bac0
	ctx.lr = 0x82418430;
	__savegprlr_14(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-7424(r1)
	ea = -7424 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// mr r16,r4
	ctx.r16.u64 = ctx.r4.u64;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// mr r17,r7
	ctx.r17.u64 = ctx.r7.u64;
	// stw r30,7460(r1)
	PPC_STORE_U32(ctx.r1.u32 + 7460, ctx.r30.u32);
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// blt cr6,0x82418784
	if (ctx.cr6.lt) goto loc_82418784;
	// cmpwi cr6,r30,512
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 512, ctx.xer);
	// bge cr6,0x82418478
	if (!ctx.cr6.lt) goto loc_82418478;
	// addi r11,r1,3168
	ctx.r11.s64 = ctx.r1.s64 + 3168;
	// addi r10,r1,5216
	ctx.r10.s64 = ctx.r1.s64 + 5216;
	// addi r15,r1,1120
	ctx.r15.s64 = ctx.r1.s64 + 1120;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// b 0x824184a0
	goto loc_824184A0;
loc_82418478:
	// rlwinm r31,r30,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823665a0
	ctx.lr = 0x82418484;
	sub_823665A0(ctx, base);
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823665a0
	ctx.lr = 0x82418490;
	sub_823665A0(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823665a0
	ctx.lr = 0x8241849C;
	sub_823665A0(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
loc_824184A0:
	// cmpwi cr6,r22,1024
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 1024, ctx.xer);
	// bgt cr6,0x824184b0
	if (ctx.cr6.gt) goto loc_824184B0;
	// addi r14,r1,96
	ctx.r14.s64 = ctx.r1.s64 + 96;
	// b 0x824184bc
	goto loc_824184BC;
loc_824184B0:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x823665a0
	ctx.lr = 0x824184B8;
	sub_823665A0(ctx, base);
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
loc_824184BC:
	// mullw r11,r30,r22
	ctx.r11.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r22.s32);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r27,1
	ctx.r27.s64 = 1;
	// stw r16,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r16.u32);
	// add r28,r11,r16
	ctx.r28.u64 = ctx.r11.u64 + ctx.r16.u64;
	// add r31,r16,r22
	ctx.r31.u64 = ctx.r16.u64 + ctx.r22.u64;
	// mr r29,r15
	ctx.r29.u64 = ctx.r15.u64;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// stw r27,0(r15)
	PPC_STORE_U32(ctx.r15.u32 + 0, ctx.r27.u32);
	// beq cr6,0x82418530
	if (ctx.cr6.eq) goto loc_82418530;
loc_824184E4:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// mtctr r17
	ctx.ctr.u64 = ctx.r17.u64;
	// bctrl 
	ctx.lr = 0x824184F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt cr6,0x82418510
	if (ctx.cr6.gt) goto loc_82418510;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
	// b 0x82418518
	goto loc_82418518;
loc_82418510:
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// stw r27,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r27.u32);
loc_82418518:
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// add r31,r31,r22
	ctx.r31.u64 = ctx.r31.u64 + ctx.r22.u64;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// bne cr6,0x824184e4
	if (!ctx.cr6.eq) goto loc_824184E4;
loc_82418530:
	// li r19,0
	ctx.r19.s64 = 0;
	// addi r20,r15,4
	ctx.r20.s64 = ctx.r15.s64 + 4;
	// mr r21,r19
	ctx.r21.u64 = ctx.r19.u64;
	// stw r19,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r19.u32);
	// stw r19,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r19.u32);
	// lwz r7,0(r20)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8241874c
	if (ctx.cr6.eq) goto loc_8241874C;
loc_82418550:
	// not r4,r21
	ctx.r4.u64 = ~ctx.r21.u64;
	// lwz r29,0(r15)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r15.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r25,0(r20)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// rlwinm r11,r4,2,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x4;
	// rlwinm r6,r21,2,29,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0x4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r24,r15
	ctx.r24.u64 = ctx.r15.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lwzx r27,r11,r3
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r23,r20,4
	ctx.r23.s64 = ctx.r20.s64 + 4;
	// lwzx r30,r6,r5
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	// add r28,r11,r30
	ctx.r28.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r11,r25,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// add r26,r11,r28
	ctx.r26.u64 = ctx.r11.u64 + ctx.r28.u64;
	// beq cr6,0x82418658
	if (ctx.cr6.eq) goto loc_82418658;
loc_82418598:
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x824185bc
	if (!ctx.cr6.eq) goto loc_824185BC;
	// cmplw cr6,r31,r26
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x8241861c
	if (ctx.cr6.eq) goto loc_8241861C;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// b 0x82418598
	goto loc_82418598;
loc_824185BC:
	// cmplw cr6,r31,r26
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x824185d8
	if (!ctx.cr6.eq) goto loc_824185D8;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// stw r9,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r9.u32);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// b 0x82418598
	goto loc_82418598;
loc_824185D8:
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mtctr r17
	ctx.ctr.u64 = ctx.r17.u64;
	// bctrl 
	ctx.lr = 0x824185EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt cr6,0x82418608
	if (ctx.cr6.gt) goto loc_82418608;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// stw r8,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r8.u32);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// b 0x82418598
	goto loc_82418598;
loc_82418608:
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// stw r7,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r7.u32);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// b 0x82418598
	goto loc_82418598;
loc_8241861C:
	// add r6,r25,r29
	ctx.r6.u64 = ctx.r25.u64 + ctx.r29.u64;
	// addi r11,r23,4
	ctx.r11.s64 = ctx.r23.s64 + 4;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// stw r6,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r6.u32);
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// lwz r29,0(r23)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// addi r23,r11,4
	ctx.r23.s64 = ctx.r11.s64 + 4;
	// lwz r25,0(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r25,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// add r28,r10,r26
	ctx.r28.u64 = ctx.r10.u64 + ctx.r26.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// add r26,r11,r28
	ctx.r26.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bne cr6,0x82418598
	if (!ctx.cr6.eq) goto loc_82418598;
loc_82418658:
	// stw r19,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r19.u32);
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// stw r19,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r19.u32);
	// lwz r5,0(r20)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x82418550
	if (!ctx.cr6.eq) goto loc_82418550;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x8241874c
	if (ctx.cr6.eq) goto loc_8241874C;
	// rlwinm r4,r21,2,29,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0x4;
	// lwz r25,7460(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 7460);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r27,r19
	ctx.r27.u64 = ctx.r19.u64;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// lwzx r30,r4,r3
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r3.u32);
	// ble cr6,0x8241874c
	if (!ctx.cr6.gt) goto loc_8241874C;
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
loc_82418698:
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8241873c
	if (ctx.cr6.eq) goto loc_8241873C;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x8259d3a0
	ctx.lr = 0x824186B0;
	sub_8259D3A0(ctx, base);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// subf r9,r16,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r16.s64;
	// twllei r22,0
	if (ctx.r22.u32 <= 0) __builtin_debugtrap();
	// rotlwi r10,r9,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// divw r31,r9,r22
	ctx.r31.s32 = ctx.r9.s32 / ctx.r22.s32;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// cmpw cr6,r31,r27
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r27.s32, ctx.xer);
	// andc r7,r22,r8
	ctx.r7.u64 = ctx.r22.u64 & ~ctx.r8.u64;
	// twlgei r7,-1
	if (ctx.r7.u32 >= 4294967295) __builtin_debugtrap();
	// beq cr6,0x82418724
	if (ctx.cr6.eq) goto loc_82418724;
loc_824186DC:
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r28,r31,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// lwzx r3,r29,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// lwzx r4,r28,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r30.u32);
	// bl 0x8259d3a0
	ctx.lr = 0x824186F4;
	sub_8259D3A0(ctx, base);
	// stwx r19,r29,r30
	PPC_STORE_U32(ctx.r29.u32 + ctx.r30.u32, ctx.r19.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// lwzx r6,r28,r30
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r30.u32);
	// twllei r22,0
	if (ctx.r22.u32 <= 0) __builtin_debugtrap();
	// subf r5,r16,r6
	ctx.r5.s64 = ctx.r6.s64 - ctx.r16.s64;
	// rotlwi r10,r5,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// divw r31,r5,r22
	ctx.r31.s32 = ctx.r5.s32 / ctx.r22.s32;
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// cmpw cr6,r31,r27
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r27.s32, ctx.xer);
	// andc r3,r22,r4
	ctx.r3.u64 = ctx.r22.u64 & ~ctx.r4.u64;
	// twlgei r3,-1
	if (ctx.r3.u32 >= 4294967295) __builtin_debugtrap();
	// bne cr6,0x824186dc
	if (!ctx.cr6.eq) goto loc_824186DC;
loc_82418724:
	// rlwinm r31,r11,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// lwzx r3,r31,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// bl 0x8259d3a0
	ctx.lr = 0x82418738;
	sub_8259D3A0(ctx, base);
	// stwx r19,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r19.u32);
loc_8241873C:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmpw cr6,r27,r25
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x82418698
	if (ctx.cr6.lt) goto loc_82418698;
loc_8241874C:
	// addi r11,r1,1120
	ctx.r11.s64 = ctx.r1.s64 + 1120;
	// cmplw cr6,r15,r11
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82418770
	if (ctx.cr6.eq) goto loc_82418770;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x82366600
	ctx.lr = 0x82418760;
	sub_82366600(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82366600
	ctx.lr = 0x82418768;
	sub_82366600(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82366600
	ctx.lr = 0x82418770;
	sub_82366600(ctx, base);
loc_82418770:
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// cmplw cr6,r14,r10
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82418784
	if (ctx.cr6.eq) goto loc_82418784;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82366600
	ctx.lr = 0x82418784;
	sub_82366600(ctx, base);
loc_82418784:
	// addi r1,r1,7424
	ctx.r1.s64 = ctx.r1.s64 + 7424;
	// b 0x8259bb10
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8241878C"))) PPC_WEAK_FUNC(sub_8241878C);
PPC_FUNC_IMPL(__imp__sub_8241878C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82418790"))) PPC_WEAK_FUNC(sub_82418790);
PPC_FUNC_IMPL(__imp__sub_82418790) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bge cr6,0x824187e4
	if (!ctx.cr6.lt) goto loc_824187E4;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82418810
	if (ctx.cr6.eq) goto loc_82418810;
loc_824187AC:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x824187d4
	if (!ctx.cr6.eq) goto loc_824187D4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x824187ac
	if (!ctx.cr6.eq) goto loc_824187AC;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_824187D4:
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// subf r3,r7,r6
	ctx.r3.s64 = ctx.r6.s64 - ctx.r7.s64;
	// blr 
	return;
loc_824187E4:
	// ble cr6,0x82418810
	if (!ctx.cr6.gt) goto loc_82418810;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_824187EC:
	// lbzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// subf r3,r4,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r4.s64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bgt cr6,0x824187ec
	if (ctx.cr6.gt) goto loc_824187EC;
loc_82418810:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82418818"))) PPC_WEAK_FUNC(sub_82418818);
PPC_FUNC_IMPL(__imp__sub_82418818) {
	PPC_FUNC_PROLOGUE();
	// b 0x825b3c08
	sub_825B3C08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8241881C"))) PPC_WEAK_FUNC(sub_8241881C);
PPC_FUNC_IMPL(__imp__sub_8241881C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82418820"))) PPC_WEAK_FUNC(sub_82418820);
PPC_FUNC_IMPL(__imp__sub_82418820) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82418834
	if (!ctx.cr6.eq) goto loc_82418834;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r11,r11,-27840
	ctx.r11.s64 = ctx.r11.s64 + -27840;
loc_82418834:
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// b 0x825c71ac
	__imp__RtlInitializeCriticalSection(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8241884C"))) PPC_WEAK_FUNC(sub_8241884C);
PPC_FUNC_IMPL(__imp__sub_8241884C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82418850"))) PPC_WEAK_FUNC(sub_82418850);
PPC_FUNC_IMPL(__imp__sub_82418850) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82418864
	if (ctx.cr6.eq) goto loc_82418864;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
loc_82418864:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-27840
	ctx.r11.s64 = ctx.r11.s64 + -27840;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82418878"))) PPC_WEAK_FUNC(sub_82418878);
PPC_FUNC_IMPL(__imp__sub_82418878) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82418898
	if (ctx.cr6.eq) goto loc_82418898;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x824188a0
	goto loc_824188A0;
loc_82418898:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r31,r11,-27840
	ctx.r31.s64 = ctx.r11.s64 + -27840;
loc_824188A0:
	// bl 0x825af9e8
	ctx.lr = 0x824188A4;
	sub_825AF9E8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x824188c0
	if (!ctx.cr6.eq) goto loc_824188C0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// b 0x82418924
	goto loc_82418924;
loc_824188C0:
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r31,8
	ctx.r8.s64 = ctx.r31.s64 + 8;
loc_824188C8:
	// mfmsr r6
	ctx.r6.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r7,0,r8
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r7.u64 = __builtin_bswap32(ctx.reserved.u32);
	// stwcx. r9,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x824188c8
	if (!ctx.cr0.eq) goto loc_824188C8;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82418904
	if (ctx.cr6.eq) goto loc_82418904;
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
loc_82418904:
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x825c719c
	ctx.lr = 0x8241890C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// bl 0x825af9e8
	ctx.lr = 0x82418910;
	sub_825AF9E8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stw r5,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r5.u32);
	// stw r4,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r4.u32);
loc_82418924:
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

__attribute__((alias("__imp__sub_8241893C"))) PPC_WEAK_FUNC(sub_8241893C);
PPC_FUNC_IMPL(__imp__sub_8241893C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82418940"))) PPC_WEAK_FUNC(sub_82418940);
PPC_FUNC_IMPL(__imp__sub_82418940) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x82418948;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82418960
	if (ctx.cr6.eq) goto loc_82418960;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// b 0x82418968
	goto loc_82418968;
loc_82418960:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r28,r11,-27840
	ctx.r28.s64 = ctx.r11.s64 + -27840;
loc_82418968:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82418878
	ctx.lr = 0x82418970;
	sub_82418878(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x824189ec
	if (!ctx.cr6.eq) goto loc_824189EC;
	// addi r30,r28,8
	ctx.r30.s64 = ctx.r28.s64 + 8;
	// addi r31,r28,12
	ctx.r31.s64 = ctx.r28.s64 + 12;
	// li r29,1
	ctx.r29.s64 = 1;
loc_82418984:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825c719c
	ctx.lr = 0x8241898C;
	__imp__RtlEnterCriticalSection(ctx, base);
loc_8241898C:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r30
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r30.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// stwcx. r29,0,r30
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r30.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r29.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8241898c
	if (!ctx.cr0.eq) goto loc_8241898C;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824189d8
	if (ctx.cr6.eq) goto loc_824189D8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825c718c
	ctx.lr = 0x824189B8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x825b3c00
	ctx.lr = 0x824189C0;
	sub_825B3C00(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82418878
	ctx.lr = 0x824189C8;
	sub_82418878(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82418984
	if (ctx.cr6.eq) goto loc_82418984;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_824189D8:
	// bl 0x825af9e8
	ctx.lr = 0x824189DC;
	sub_825AF9E8(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r9.u32);
loc_824189EC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824189F4"))) PPC_WEAK_FUNC(sub_824189F4);
PPC_FUNC_IMPL(__imp__sub_824189F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824189F8"))) PPC_WEAK_FUNC(sub_824189F8);
PPC_FUNC_IMPL(__imp__sub_824189F8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82418a0c
	if (!ctx.cr6.eq) goto loc_82418A0C;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r11,r11,-27840
	ctx.r11.s64 = ctx.r11.s64 + -27840;
loc_82418A0C:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x82418a24
	if (!ctx.cr6.gt) goto loc_82418A24;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// blr 
	return;
loc_82418A24:
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// b 0x825c718c
	__imp__RtlLeaveCriticalSection(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82418A3C"))) PPC_WEAK_FUNC(sub_82418A3C);
PPC_FUNC_IMPL(__imp__sub_82418A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82418A40"))) PPC_WEAK_FUNC(sub_82418A40);
PPC_FUNC_IMPL(__imp__sub_82418A40) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r11,r11,-27496
	ctx.r11.s64 = ctx.r11.s64 + -27496;
	// addi r8,r11,-296
	ctx.r8.s64 = ctx.r11.s64 + -296;
	// addi r7,r11,-296
	ctx.r7.s64 = ctx.r11.s64 + -296;
	// addi r6,r8,4
	ctx.r6.s64 = ctx.r8.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r3,r9,r7
	PPC_STORE_U32(ctx.r9.u32 + ctx.r7.u32, ctx.r3.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stwx r4,r9,r6
	PPC_STORE_U32(ctx.r9.u32 + ctx.r6.u32, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82418A80"))) PPC_WEAK_FUNC(sub_82418A80);
PPC_FUNC_IMPL(__imp__sub_82418A80) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r9,r11,-27792
	ctx.r9.s64 = ctx.r11.s64 + -27792;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// lwz r8,296(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 296);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// addi r11,r9,4
	ctx.r11.s64 = ctx.r9.s64 + 4;
loc_82418AB0:
	// lwz r6,-4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmplw cr6,r6,r3
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82418ac8
	if (!ctx.cr6.eq) goto loc_82418AC8;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r5,r4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82418adc
	if (ctx.cr6.eq) goto loc_82418ADC;
loc_82418AC8:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82418ab0
	if (ctx.cr6.lt) goto loc_82418AB0;
	// blr 
	return;
loc_82418ADC:
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r4,r9,4
	ctx.r4.s64 = ctx.r9.s64 + 4;
	// stwx r7,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r7.u32);
	// stwx r7,r11,r4
	PPC_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82418AF0"))) PPC_WEAK_FUNC(sub_82418AF0);
PPC_FUNC_IMPL(__imp__sub_82418AF0) {
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
	// addi r31,r11,-27536
	ctx.r31.s64 = ctx.r11.s64 + -27536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82418940
	ctx.lr = 0x82418B10;
	sub_82418940(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x82418b38
	if (!ctx.cr6.gt) goto loc_82418B38;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
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
loc_82418B38:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x825c718c
	ctx.lr = 0x82418B50;
	__imp__RtlLeaveCriticalSection(ctx, base);
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

__attribute__((alias("__imp__sub_82418B64"))) PPC_WEAK_FUNC(sub_82418B64);
PPC_FUNC_IMPL(__imp__sub_82418B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82418B68"))) PPC_WEAK_FUNC(sub_82418B68);
PPC_FUNC_IMPL(__imp__sub_82418B68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x82418B70;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r31,r11,-27792
	ctx.r31.s64 = ctx.r11.s64 + -27792;
	// addi r3,r31,256
	ctx.r3.s64 = ctx.r31.s64 + 256;
	// bl 0x82418878
	ctx.lr = 0x82418B84;
	sub_82418878(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82418c58
	if (ctx.cr6.eq) goto loc_82418C58;
	// lwz r11,296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82418c20
	if (!ctx.cr6.gt) goto loc_82418C20;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
loc_82418BA8:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82418bd0
	if (ctx.cr6.eq) goto loc_82418BD0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82418bd0
	if (ctx.cr6.eq) goto loc_82418BD0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82418BC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// b 0x82418c0c
	goto loc_82418C0C;
loc_82418BD0:
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r8,r31,4
	ctx.r8.s64 = ctx.r31.s64 + 4;
	// add r9,r10,r31
	ctx.r9.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// lwz r8,-8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + -8);
	// stw r11,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r11.u32);
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// addi r30,r30,-8
	ctx.r30.s64 = ctx.r30.s64 + -8;
	// lwz r7,-8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	// stw r7,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r7.u32);
	// addi r29,r29,-8
	ctx.r29.s64 = ctx.r29.s64 + -8;
	// stw r27,-8(r9)
	PPC_STORE_U32(ctx.r9.u32 + -8, ctx.r27.u32);
	// stw r27,-8(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8, ctx.r27.u32);
loc_82418C0C:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82418ba8
	if (ctx.cr6.lt) goto loc_82418BA8;
loc_82418C20:
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x82418c3c
	if (!ctx.cr6.gt) goto loc_82418C3C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_82418C3C:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// addi r10,r31,256
	ctx.r10.s64 = ctx.r31.s64 + 256;
	// addi r3,r10,12
	ctx.r3.s64 = ctx.r10.s64 + 12;
	// stw r11,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r11.u32);
	// stw r11,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r11.u32);
	// stw r11,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r11.u32);
	// bl 0x825c718c
	ctx.lr = 0x82418C58;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82418C58:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82418C60"))) PPC_WEAK_FUNC(sub_82418C60);
PPC_FUNC_IMPL(__imp__sub_82418C60) {
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
	// lis r30,-32150
	ctx.r30.s64 = -2106982400;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,-27492(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27492);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,-12448(r30)
	PPC_STORE_U32(ctx.r30.u32 + -12448, ctx.r10.u32);
	// beq cr6,0x82418ca8
	if (ctx.cr6.eq) goto loc_82418CA8;
loc_82418C90:
	// bl 0x82418b68
	ctx.lr = 0x82418C94;
	sub_82418B68(ctx, base);
	// li r3,50
	ctx.r3.s64 = 50;
	// bl 0x825b3c00
	ctx.lr = 0x82418C9C;
	sub_825B3C00(ctx, base);
	// lwz r11,-27492(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27492);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82418c90
	if (!ctx.cr6.eq) goto loc_82418C90;
loc_82418CA8:
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,-12448(r30)
	PPC_STORE_U32(ctx.r30.u32 + -12448, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_82418CC8"))) PPC_WEAK_FUNC(sub_82418CC8);
PPC_FUNC_IMPL(__imp__sub_82418CC8) {
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
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lis r10,-32150
	ctx.r10.s64 = -2106982400;
	// addi r31,r11,-27840
	ctx.r31.s64 = ctx.r11.s64 + -27840;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r11.u32);
	// stw r9,-12448(r10)
	PPC_STORE_U32(ctx.r10.u32 + -12448, ctx.r9.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x825c71ac
	ctx.lr = 0x82418D10;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r31,304
	ctx.r10.s64 = ctx.r31.s64 + 304;
	// addi r3,r10,12
	ctx.r3.s64 = ctx.r10.s64 + 12;
	// stw r11,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r11.u32);
	// stw r11,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r11.u32);
	// stw r11,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r11.u32);
	// bl 0x825c71ac
	ctx.lr = 0x82418D2C;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,-29600
	ctx.r5.s64 = ctx.r11.s64 + -29600;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r11.u32);
	// bl 0x825af158
	ctx.lr = 0x82418D54;
	sub_825AF158(ctx, base);
	// stw r3,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82418d70
	if (ctx.cr6.eq) goto loc_82418D70;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x825aee40
	ctx.lr = 0x82418D68;
	sub_825AEE40(ctx, base);
	// lwz r3,348(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// bl 0x825aed30
	ctx.lr = 0x82418D70;
	sub_825AED30(ctx, base);
loc_82418D70:
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

__attribute__((alias("__imp__sub_82418D88"))) PPC_WEAK_FUNC(sub_82418D88);
PPC_FUNC_IMPL(__imp__sub_82418D88) {
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
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lis r30,-32150
	ctx.r30.s64 = -2106982400;
	// addi r31,r11,-27840
	ctx.r31.s64 = ctx.r11.s64 + -27840;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r11.u32);
	// lwz r11,-12448(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12448);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82418dd0
	if (!ctx.cr6.gt) goto loc_82418DD0;
loc_82418DBC:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x825b3c00
	ctx.lr = 0x82418DC4;
	sub_825B3C00(ctx, base);
	// lwz r10,-12448(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12448);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x82418dbc
	if (ctx.cr6.gt) goto loc_82418DBC;
loc_82418DD0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82418DF4"))) PPC_WEAK_FUNC(sub_82418DF4);
PPC_FUNC_IMPL(__imp__sub_82418DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82418DF8"))) PPC_WEAK_FUNC(sub_82418DF8);
PPC_FUNC_IMPL(__imp__sub_82418DF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x82418E00;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82418e50
	if (!ctx.cr6.eq) goto loc_82418E50;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stw r29,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r29.u32);
	// bl 0x82366620
	ctx.lr = 0x82418E34;
	sub_82366620(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r9,100(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// subf r3,r9,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_82418E50:
	// lwz r9,104(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82418e9c
	if (!ctx.cr6.gt) goto loc_82418E9C;
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
loc_82418E64:
	// add r11,r3,r30
	ctx.r11.u64 = ctx.r3.u64 + ctx.r30.u64;
	// lbz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// lbz r7,9(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// rotlwi r6,r8,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// lbz r5,10(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10);
	// lbz r4,11(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 11);
	// or r11,r6,r7
	ctx.r11.u64 = ctx.r6.u64 | ctx.r7.u64;
	// rlwinm r8,r11,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r7,r8,r5
	ctx.r7.u64 = ctx.r8.u64 | ctx.r5.u64;
	// rlwinm r6,r7,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r6,r4
	ctx.r11.u64 = ctx.r6.u64 | ctx.r4.u64;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82418e64
	if (ctx.cr6.lt) goto loc_82418E64;
loc_82418E9C:
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x82418ea8
	if (!ctx.cr6.gt) goto loc_82418EA8;
	// subf r30,r11,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r11.s64;
loc_82418EA8:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x82418ed8
	if (!ctx.cr6.gt) goto loc_82418ED8;
	// lwz r5,100(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// add r4,r3,r30
	ctx.r4.u64 = ctx.r3.u64 + ctx.r30.u64;
	// subf r5,r30,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r30.s64;
	// bl 0x8259d3a0
	ctx.lr = 0x82418EC0;
	sub_8259D3A0(ctx, base);
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// subf r11,r30,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r30.s64;
	// subf r10,r30,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r30.s64;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stw r10,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r10.u32);
loc_82418ED8:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r9,108(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// cmpw cr6,r29,r8
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x82418f38
	if (!ctx.cr6.gt) goto loc_82418F38;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x82366620
	ctx.lr = 0x82418EF8;
	sub_82366620(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82418f0c
	if (!ctx.cr6.eq) goto loc_82418F0C;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_82418F0C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,100(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r4,112(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// bl 0x8259d3a0
	ctx.lr = 0x82418F1C;
	sub_8259D3A0(ctx, base);
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// bl 0x82366680
	ctx.lr = 0x82418F24;
	sub_82366680(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r7,r10,r28
	ctx.r7.u64 = ctx.r10.u64 + ctx.r28.u64;
	// stw r7,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r7.u32);
loc_82418F38:
	// lwz r6,108(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// subf r3,r11,r6
	ctx.r3.s64 = ctx.r6.s64 - ctx.r11.s64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82418F48"))) PPC_WEAK_FUNC(sub_82418F48);
PPC_FUNC_IMPL(__imp__sub_82418F48) {
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
	// lwz r11,-27480(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27480);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82418f70
	if (!ctx.cr6.eq) goto loc_82418F70;
	// bl 0x82418818
	ctx.lr = 0x82418F6C;
	sub_82418818(ctx, base);
	// stw r3,-27480(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27480, ctx.r3.u32);
loc_82418F70:
	// li r3,752
	ctx.r3.s64 = 752;
	// bl 0x82366620
	ctx.lr = 0x82418F78;
	sub_82366620(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82418fa4
	if (ctx.cr6.eq) goto loc_82418FA4;
	// li r5,752
	ctx.r5.s64 = 752;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8259d300
	ctx.lr = 0x82418F90;
	sub_8259D300(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// sth r11,142(r31)
	PPC_STORE_U16(ctx.r31.u32 + 142, ctx.r11.u16);
loc_82418FA4:
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

__attribute__((alias("__imp__sub_82418FB8"))) PPC_WEAK_FUNC(sub_82418FB8);
PPC_FUNC_IMPL(__imp__sub_82418FB8) {
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
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82418fdc
	if (ctx.cr6.eq) goto loc_82418FDC;
	// bl 0x8241dd58
	ctx.lr = 0x82418FDC;
	sub_8241DD58(ctx, base);
loc_82418FDC:
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82418fec
	if (ctx.cr6.eq) goto loc_82418FEC;
	// bl 0x82366680
	ctx.lr = 0x82418FEC;
	sub_82366680(ctx, base);
loc_82418FEC:
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82418ffc
	if (ctx.cr6.eq) goto loc_82418FFC;
	// bl 0x82366680
	ctx.lr = 0x82418FFC;
	sub_82366680(ctx, base);
loc_82418FFC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82366680
	ctx.lr = 0x82419004;
	sub_82366680(ctx, base);
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

__attribute__((alias("__imp__sub_82419018"))) PPC_WEAK_FUNC(sub_82419018);
PPC_FUNC_IMPL(__imp__sub_82419018) {
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
	// lis r11,28783
	ctx.r11.s64 = 1886322688;
	// ori r10,r11,29300
	ctx.r10.u64 = ctx.r11.u64 | 29300;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82419050
	if (!ctx.cr6.eq) goto loc_82419050;
	// lhz r3,6(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// bl 0x824115c0
	ctx.lr = 0x8241903C;
	sub_824115C0(ctx, base);
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82419050:
	// lis r9,24932
	ctx.r9.s64 = 1633943552;
	// ori r8,r9,25714
	ctx.r8.u64 = ctx.r9.u64 | 25714;
	// cmpw cr6,r4,r8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82419078
	if (!ctx.cr6.eq) goto loc_82419078;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x824115d8
	ctx.lr = 0x82419068;
	sub_824115D8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82419078:
	// lis r7,27745
	ctx.r7.s64 = 1818296320;
	// ori r6,r7,25714
	ctx.r6.u64 = ctx.r7.u64 | 25714;
	// cmpw cr6,r4,r6
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x8241909c
	if (!ctx.cr6.eq) goto loc_8241909C;
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8241909C:
	// lis r5,27760
	ctx.r5.s64 = 1819279360;
	// ori r11,r5,29300
	ctx.r11.u64 = ctx.r5.u64 | 29300;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x824190c0
	if (!ctx.cr6.eq) goto loc_824190C0;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_824190C0:
	// lis r10,28514
	ctx.r10.s64 = 1868693504;
	// ori r9,r10,30054
	ctx.r9.u64 = ctx.r10.u64 | 30054;
	// cmpw cr6,r4,r9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x824190ec
	if (!ctx.cr6.eq) goto loc_824190EC;
	// lwz r8,100(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// lwz r7,104(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// subf r3,r7,r8
	ctx.r3.s64 = ctx.r8.s64 - ctx.r7.s64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_824190EC:
	// lis r6,26978
	ctx.r6.s64 = 1768030208;
	// ori r5,r6,30054
	ctx.r5.u64 = ctx.r6.u64 | 30054;
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x82419124
	if (!ctx.cr6.eq) goto loc_82419124;
	// lwz r4,124(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82419194
	if (ctx.cr6.eq) goto loc_82419194;
	// lwz r11,116(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// lwz r10,120(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// subf r3,r10,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82419124:
	// lis r9,29556
	ctx.r9.s64 = 1936982016;
	// ori r8,r9,24948
	ctx.r8.u64 = ctx.r9.u64 | 24948;
	// cmpw cr6,r4,r8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82419148
	if (!ctx.cr6.eq) goto loc_82419148;
	// lwz r3,92(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82419148:
	// lis r7,29541
	ctx.r7.s64 = 1935998976;
	// ori r6,r7,25461
	ctx.r6.u64 = ctx.r7.u64 | 25461;
	// cmpw cr6,r4,r6
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x82419170
	if (!ctx.cr6.eq) goto loc_82419170;
	// lhz r5,140(r3)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r3.u32 + 140);
	// extsh r3,r5
	ctx.r3.s64 = ctx.r5.s16;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82419170:
	// lis r11,25458
	ctx.r11.s64 = 1668415488;
	// ori r10,r11,31088
	ctx.r10.u64 = ctx.r11.u64 | 31088;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82419194
	if (!ctx.cr6.eq) goto loc_82419194;
	// lwz r3,228(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82419194:
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

__attribute__((alias("__imp__sub_824191A8"))) PPC_WEAK_FUNC(sub_824191A8);
PPC_FUNC_IMPL(__imp__sub_824191A8) {
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
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824191d8
	if (ctx.cr6.eq) goto loc_824191D8;
	// bl 0x8241dd58
	ctx.lr = 0x824191D4;
	sub_8241DD58(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_824191D8:
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824191ec
	if (ctx.cr6.eq) goto loc_824191EC;
	// bl 0x82366680
	ctx.lr = 0x824191E8;
	sub_82366680(ctx, base);
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
loc_824191EC:
	// li r11,4
	ctx.r11.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82419210"))) PPC_WEAK_FUNC(sub_82419210);
PPC_FUNC_IMPL(__imp__sub_82419210) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x82419224
	if (!ctx.cr6.eq) goto loc_82419224;
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r11,140(r3)
	PPC_STORE_U16(ctx.r3.u32 + 140, ctx.r11.u16);
	// blr 
	return;
loc_82419224:
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,140(r3)
	PPC_STORE_U16(ctx.r3.u32 + 140, ctx.r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82419230"))) PPC_WEAK_FUNC(sub_82419230);
PPC_FUNC_IMPL(__imp__sub_82419230) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8241927c
	if (ctx.cr6.eq) goto loc_8241927C;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8241927c
	if (ctx.cr6.eq) goto loc_8241927C;
	// cmplwi cr6,r5,84
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 84, ctx.xer);
	// bne cr6,0x8241927c
	if (!ctx.cr6.eq) goto loc_8241927C;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r10,r9,144
	ctx.r10.s64 = ctx.r9.s64 + 144;
	// li r8,21
	ctx.r8.s64 = 21;
	// sth r7,142(r9)
	PPC_STORE_U16(ctx.r9.u32 + 142, ctx.r7.u16);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82419264:
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82419264
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82419264;
	// blr 
	return;
loc_8241927C:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r9,228
	ctx.r3.s64 = ctx.r9.s64 + 228;
	// sth r5,142(r9)
	PPC_STORE_U16(ctx.r9.u32 + 142, ctx.r5.u16);
	// b 0x8241ea28
	sub_8241EA28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82419290"))) PPC_WEAK_FUNC(sub_82419290);
PPC_FUNC_IMPL(__imp__sub_82419290) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x82419298;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,12
	ctx.r28.s64 = 12;
	// li r30,255
	ctx.r30.s64 = 255;
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82419324
	if (!ctx.cr6.eq) goto loc_82419324;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82419324
	if (!ctx.cr6.eq) goto loc_82419324;
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824192d4
	if (ctx.cr6.eq) goto loc_824192D4;
	// bl 0x82366680
	ctx.lr = 0x824192D4;
	sub_82366680(ctx, base);
loc_824192D4:
	// li r3,13
	ctx.r3.s64 = 13;
	// stw r28,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r28.u32);
	// stw r28,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r28.u32);
	// bl 0x82366620
	ctx.lr = 0x824192E4;
	sub_82366620(ctx, base);
	// li r11,254
	ctx.r11.s64 = 254;
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r3,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r3.u32);
	// stb r30,3(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3, ctx.r30.u8);
	// stb r30,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r30.u8);
	// stb r30,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r30.u8);
	// stb r30,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r30.u8);
	// stb r11,7(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7, ctx.r11.u8);
	// stb r11,6(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6, ctx.r11.u8);
	// stb r11,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r11.u8);
	// stb r11,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r11.u8);
	// stb r26,10(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10, ctx.r26.u8);
	// stb r26,9(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9, ctx.r26.u8);
	// stb r26,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r26.u8);
	// stb r28,11(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11, ctx.r28.u8);
	// stw r9,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r9.u32);
loc_82419324:
	// lwz r8,92(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// bne cr6,0x82419348
	if (!ctx.cr6.eq) goto loc_82419348;
	// lwz r7,112(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82419348
	if (ctx.cr6.eq) goto loc_82419348;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r26,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r26.u32);
	// stw r6,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r6.u32);
loc_82419348:
	// lwz r5,92(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// li r27,3
	ctx.r27.s64 = 3;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bne cr6,0x824193e8
	if (!ctx.cr6.eq) goto loc_824193E8;
	// li r11,16
	ctx.r11.s64 = 16;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x8241dd90
	ctx.lr = 0x82419374;
	sub_8241DD90(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x824197e0
	if (ctx.cr6.eq) goto loc_824197E0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8241dd58
	ctx.lr = 0x82419388;
	sub_8241DD58(ctx, base);
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stw r27,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r27.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r26,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r26.u32);
	// beq cr6,0x824193a4
	if (ctx.cr6.eq) goto loc_824193A4;
	// bl 0x82366680
	ctx.lr = 0x824193A4;
	sub_82366680(ctx, base);
loc_824193A4:
	// li r3,13
	ctx.r3.s64 = 13;
	// stw r28,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r28.u32);
	// stw r28,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r28.u32);
	// bl 0x82366620
	ctx.lr = 0x824193B4;
	sub_82366620(ctx, base);
	// stw r3,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r3.u32);
	// stb r30,3(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3, ctx.r30.u8);
	// stb r30,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r30.u8);
	// stb r30,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r30.u8);
	// stb r30,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r30.u8);
	// stb r30,7(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7, ctx.r30.u8);
	// stb r30,6(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6, ctx.r30.u8);
	// stb r30,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r30.u8);
	// stb r30,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r30.u8);
	// stb r26,10(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10, ctx.r26.u8);
	// stb r26,9(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9, ctx.r26.u8);
	// stb r26,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r26.u8);
	// stb r28,11(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11, ctx.r28.u8);
loc_824193E8:
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x82419574
	if (!ctx.cr6.eq) goto loc_82419574;
	// bl 0x82418818
	ctx.lr = 0x824193F8;
	sub_82418818(ctx, base);
	// lwz r9,96(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82419484
	if (!ctx.cr6.gt) goto loc_82419484;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82419414
	if (ctx.cr6.eq) goto loc_82419414;
	// bl 0x8241dd58
	ctx.lr = 0x82419414;
	sub_8241DD58(ctx, base);
loc_82419414:
	// bl 0x8241dd10
	ctx.lr = 0x82419418;
	sub_8241DD10(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// beq cr6,0x824197e0
	if (ctx.cr6.eq) goto loc_824197E0;
	// lhz r3,6(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// bl 0x824115c0
	ctx.lr = 0x8241942C;
	sub_824115C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x824115d8
	ctx.lr = 0x82419438;
	sub_824115D8(ctx, base);
	// lhz r8,140(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 140);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// bne cr6,0x82419450
	if (!ctx.cr6.eq) goto loc_82419450;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_82419450:
	// clrlwi r7,r29,16
	ctx.r7.u64 = ctx.r29.u32 & 0xFFFF;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r31,28
	ctx.r5.s64 = ctx.r31.s64 + 28;
	// bl 0x8241de28
	ctx.lr = 0x82419460;
	sub_8241DE28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x824197e0
	if (ctx.cr6.lt) goto loc_824197E0;
	// bl 0x82418818
	ctx.lr = 0x8241946C;
	sub_82418818(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r7,r11,30000
	ctx.r7.s64 = ctx.r11.s64 + 30000;
	// addi r3,r31,228
	ctx.r3.s64 = ctx.r31.s64 + 228;
	// stw r7,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r7.u32);
	// bl 0x8241ea28
	ctx.lr = 0x82419484;
	sub_8241EA28(ctx, base);
loc_82419484:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824197e0
	if (ctx.cr6.eq) goto loc_824197E0;
	// bl 0x8241e048
	ctx.lr = 0x82419494;
	sub_8241E048(ctx, base);
	// lis r4,29556
	ctx.r4.s64 = 1936982016;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,24948
	ctx.r4.u64 = ctx.r4.u64 | 24948;
	// bl 0x8241e938
	ctx.lr = 0x824194AC;
	sub_8241E938(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x824197e0
	if (!ctx.cr6.gt) goto loc_824197E0;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x824194d8
	if (!ctx.cr6.eq) goto loc_824194D8;
	// lis r4,28773
	ctx.r4.s64 = 1885667328;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r5,r31,4
	ctx.r5.s64 = ctx.r31.s64 + 4;
	// ori r4,r4,25970
	ctx.r4.u64 = ctx.r4.u64 | 25970;
	// bl 0x8241e938
	ctx.lr = 0x824194D8;
	sub_8241E938(ctx, base);
loc_824194D8:
	// lis r4,25193
	ctx.r4.s64 = 1651048448;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// ori r4,r4,28260
	ctx.r4.u64 = ctx.r4.u64 | 28260;
	// bl 0x8241e938
	ctx.lr = 0x824194F0;
	sub_8241E938(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82419518
	if (!ctx.cr6.eq) goto loc_82419518;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x824115d8
	ctx.lr = 0x82419500;
	sub_824115D8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lhz r3,98(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 98);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bl 0x824115c0
	ctx.lr = 0x82419510;
	sub_824115C0(ctx, base);
	// clrlwi r5,r3,16
	ctx.r5.u64 = ctx.r3.u32 & 0xFFFF;
	// stw r5,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r5.u32);
loc_82419518:
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// stw r27,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r27.u32);
	// stw r26,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r26.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82419530
	if (ctx.cr6.eq) goto loc_82419530;
	// bl 0x82366680
	ctx.lr = 0x82419530;
	sub_82366680(ctx, base);
loc_82419530:
	// li r3,13
	ctx.r3.s64 = 13;
	// stw r28,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r28.u32);
	// stw r28,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r28.u32);
	// bl 0x82366620
	ctx.lr = 0x82419540;
	sub_82366620(ctx, base);
	// stw r3,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r3.u32);
	// stb r30,3(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3, ctx.r30.u8);
	// stb r30,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r30.u8);
	// stb r30,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r30.u8);
	// stb r30,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r30.u8);
	// stb r30,7(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7, ctx.r30.u8);
	// stb r30,6(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6, ctx.r30.u8);
	// stb r30,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r30.u8);
	// stb r30,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r30.u8);
	// stb r26,10(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10, ctx.r26.u8);
	// stb r26,9(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9, ctx.r26.u8);
	// stb r26,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r26.u8);
	// stb r28,11(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11, ctx.r28.u8);
loc_82419574:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824197e0
	if (ctx.cr6.eq) goto loc_824197E0;
	// bl 0x8241e048
	ctx.lr = 0x82419584;
	sub_8241E048(ctx, base);
	// lwz r9,112(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824195fc
	if (ctx.cr6.eq) goto loc_824195FC;
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x824195fc
	if (ctx.cr6.eq) goto loc_824195FC;
	// subf r5,r11,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r11.s64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bl 0x8241e750
	ctx.lr = 0x824195B0;
	sub_8241E750(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x824195d0
	if (!ctx.cr6.lt) goto loc_824195D0;
loc_824195BC:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8241dd58
	ctx.lr = 0x824195C4;
	sub_8241DD58(ctx, base);
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_824195D0:
	// ble cr6,0x824195e0
	if (!ctx.cr6.gt) goto loc_824195E0;
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// add r4,r11,r3
	ctx.r4.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r4,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r4.u32);
loc_824195E0:
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x824195fc
	if (!ctx.cr6.eq) goto loc_824195FC;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// bl 0x82366680
	ctx.lr = 0x824195F8;
	sub_82366680(ctx, base);
	// stw r26,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r26.u32);
loc_824195FC:
	// lwz r10,124(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82419714
	if (!ctx.cr6.eq) goto loc_82419714;
	// lwz r9,120(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lwz r8,116(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82419620
	if (!ctx.cr6.eq) goto loc_82419620;
	// stw r28,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r28.u32);
	// stw r26,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r26.u32);
loc_82419620:
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lwz r7,116(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r5,r11,r7
	ctx.r5.s64 = ctx.r7.s64 - ctx.r11.s64;
	// addi r4,r10,128
	ctx.r4.s64 = ctx.r10.s64 + 128;
	// bl 0x8241e810
	ctx.lr = 0x8241963C;
	sub_8241E810(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x824195bc
	if (ctx.cr6.lt) goto loc_824195BC;
	// ble cr6,0x82419658
	if (!ctx.cr6.gt) goto loc_82419658;
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// add r6,r11,r3
	ctx.r6.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r6,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r6.u32);
loc_82419658:
	// lwz r5,120(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lwz r4,116(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmpw cr6,r5,r4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x82419714
	if (!ctx.cr6.eq) goto loc_82419714;
	// addi r30,r31,128
	ctx.r30.s64 = ctx.r31.s64 + 128;
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r3,r31,228
	ctx.r3.s64 = ctx.r31.s64 + 228;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8241eaa0
	ctx.lr = 0x8241967C;
	sub_8241EAA0(ctx, base);
	// lbz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// lbz r11,9(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 9);
	// rotlwi r10,r3,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r3.u32, 8);
	// lbz r9,10(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 10);
	// lbz r8,11(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 11);
	// or r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 | ctx.r11.u64;
	// rlwinm r6,r7,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// or r5,r6,r9
	ctx.r5.u64 = ctx.r6.u64 | ctx.r9.u64;
	// rlwinm r4,r5,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r4,r8
	ctx.r11.u64 = ctx.r4.u64 | ctx.r8.u64;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// blt cr6,0x824195bc
	if (ctx.cr6.lt) goto loc_824195BC;
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r10,r3,32768
	ctx.r10.u64 = ctx.r3.u64 | 32768;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x824195bc
	if (ctx.cr6.gt) goto loc_824195BC;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// bl 0x82366620
	ctx.lr = 0x824196C8;
	sub_82366620(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r3.u32);
	// beq cr6,0x824195bc
	if (ctx.cr6.eq) goto loc_824195BC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,120(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// bl 0x8259d3a0
	ctx.lr = 0x824196E0;
	sub_8259D3A0(ctx, base);
	// lwz r9,120(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lwz r8,116(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82419714
	if (!ctx.cr6.eq) goto loc_82419714;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82419714
	if (ctx.cr6.eq) goto loc_82419714;
	// lwz r7,104(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r6,100(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x82419714
	if (!ctx.cr6.eq) goto loc_82419714;
	// bl 0x82366680
	ctx.lr = 0x82419710;
	sub_82366680(ctx, base);
	// stw r26,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r26.u32);
loc_82419714:
	// lwz r9,124(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824197e0
	if (ctx.cr6.eq) goto loc_824197E0;
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lwz r10,116(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x824197e0
	if (!ctx.cr6.lt) goto loc_824197E0;
	// subf r5,r11,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r11.s64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bl 0x8241e810
	ctx.lr = 0x82419740;
	sub_8241E810(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x824195bc
	if (ctx.cr6.lt) goto loc_824195BC;
	// ble cr6,0x8241975c
	if (!ctx.cr6.gt) goto loc_8241975C;
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// add r5,r11,r3
	ctx.r5.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r5,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r5.u32);
loc_8241975C:
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lwz r4,116(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmpw cr6,r3,r4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x824197b0
	if (!ctx.cr6.eq) goto loc_824197B0;
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// addi r30,r31,228
	ctx.r30.s64 = ctx.r31.s64 + 228;
	// addi r5,r3,-12
	ctx.r5.s64 = ctx.r3.s64 + -12;
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241eaa0
	ctx.lr = 0x82419784;
	sub_8241EAA0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,116(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// lwz r4,124(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// bl 0x8241eae8
	ctx.lr = 0x82419794;
	sub_8241EAE8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x824195bc
	if (ctx.cr6.lt) goto loc_824195BC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,116(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// bl 0x8241ebb0
	ctx.lr = 0x824197A8;
	sub_8241EBB0(ctx, base);
	// stw r3,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r3.u32);
	// stw r3,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r3.u32);
loc_824197B0:
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x824197e0
	if (!ctx.cr6.eq) goto loc_824197E0;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824197e0
	if (ctx.cr6.eq) goto loc_824197E0;
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r9,100(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x824197e0
	if (!ctx.cr6.eq) goto loc_824197E0;
	// bl 0x82366680
	ctx.lr = 0x824197DC;
	sub_82366680(ctx, base);
	// stw r26,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r26.u32);
loc_824197E0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824197E8"))) PPC_WEAK_FUNC(sub_824197E8);
PPC_FUNC_IMPL(__imp__sub_824197E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae8
	ctx.lr = 0x824197F0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x82419290
	ctx.lr = 0x8241980C;
	sub_82419290(ctx, base);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bge cr6,0x8241983c
	if (!ctx.cr6.lt) goto loc_8241983C;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8241981C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8241981c
	if (!ctx.cr6.eq) goto loc_8241981C;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r8,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// addi r28,r11,1
	ctx.r28.s64 = ctx.r11.s64 + 1;
loc_8241983C:
	// addi r26,r29,228
	ctx.r26.s64 = ctx.r29.s64 + 228;
	// addi r4,r28,12
	ctx.r4.s64 = ctx.r28.s64 + 12;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8241ebe0
	ctx.lr = 0x8241984C;
	sub_8241EBE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82418df8
	ctx.lr = 0x82419864;
	sub_82418DF8(ctx, base);
	// cmpw cr6,r3,r30
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x82419878
	if (!ctx.cr6.lt) goto loc_82419878;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
loc_82419878:
	// lwz r11,112(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 112);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// lwz r10,100(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ble cr6,0x8241989c
	if (!ctx.cr6.gt) goto loc_8241989C;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x8259d3a0
	ctx.lr = 0x8241989C;
	sub_8259D3A0(ctx, base);
loc_8241989C:
	// srawi r7,r30,24
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xFFFFFF) != 0);
	ctx.r7.s64 = ctx.r30.s32 >> 24;
	// lwz r11,100(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// srawi r6,r30,16
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xFFFF) != 0);
	ctx.r6.s64 = ctx.r30.s32 >> 16;
	// srawi r5,r30,8
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r30.s32 >> 8;
	// srawi r4,r27,24
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0xFFFFFF) != 0);
	ctx.r4.s64 = ctx.r27.s32 >> 24;
	// srawi r3,r27,16
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0xFFFF) != 0);
	ctx.r3.s64 = ctx.r27.s32 >> 16;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// srawi r10,r27,8
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r27.s32 >> 8;
	// srawi r9,r25,24
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0xFFFFFF) != 0);
	ctx.r9.s64 = ctx.r25.s32 >> 24;
	// srawi r8,r25,16
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r25.s32 >> 16;
	// srawi r28,r25,8
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0xFF) != 0);
	ctx.r28.s64 = ctx.r25.s32 >> 8;
	// stw r11,100(r29)
	PPC_STORE_U32(ctx.r29.u32 + 100, ctx.r11.u32);
	// stb r5,10(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10, ctx.r5.u8);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stb r4,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r4.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r3,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r3.u8);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stb r7,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r7.u8);
	// stb r6,9(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9, ctx.r6.u8);
	// stb r30,11(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11, ctx.r30.u8);
	// stb r10,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r10.u8);
	// stb r27,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r27.u8);
	// stb r9,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r9.u8);
	// stb r8,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r8.u8);
	// stb r28,6(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6, ctx.r28.u8);
	// stb r25,7(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7, ctx.r25.u8);
	// bl 0x8241ebf8
	ctx.lr = 0x8241990C;
	sub_8241EBF8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8241ec78
	ctx.lr = 0x8241991C;
	sub_8241EC78(ctx, base);
	// lis r5,16500
	ctx.r5.s64 = 1081344000;
	// ori r4,r5,26979
	ctx.r4.u64 = ctx.r5.u64 | 26979;
	// cmpw cr6,r27,r4
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x82419934
	if (!ctx.cr6.eq) goto loc_82419934;
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r3,142(r29)
	PPC_STORE_U16(ctx.r29.u32 + 142, ctx.r3.u16);
loc_82419934:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82419290
	ctx.lr = 0x8241993C;
	sub_82419290(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82419948"))) PPC_WEAK_FUNC(sub_82419948);
PPC_FUNC_IMPL(__imp__sub_82419948) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x82419950;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82419980
	if (ctx.cr6.eq) goto loc_82419980;
	// lwz r10,116(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// lwz r9,120(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x824199bc
	if (ctx.cr6.eq) goto loc_824199BC;
loc_82419980:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82419998
	if (!ctx.cr6.eq) goto loc_82419998;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82419998
	if (!ctx.cr6.eq) goto loc_82419998;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82419a60
	if (ctx.cr6.eq) goto loc_82419A60;
loc_82419998:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82419290
	ctx.lr = 0x824199A0;
	sub_82419290(ctx, base);
	// lwz r8,124(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82419a60
	if (ctx.cr6.eq) goto loc_82419A60;
	// lwz r10,116(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// lwz r7,120(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmpw cr6,r7,r10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82419a60
	if (!ctx.cr6.eq) goto loc_82419A60;
loc_824199BC:
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// addi r3,r10,-12
	ctx.r3.s64 = ctx.r10.s64 + -12;
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bge cr6,0x824199dc
	if (!ctx.cr6.lt) goto loc_824199DC;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r10,r10,3672
	ctx.r10.s64 = ctx.r10.s64 + 3672;
	// b 0x824199e4
	goto loc_824199E4;
loc_824199DC:
	// li r6,0
	ctx.r6.s64 = 0;
	// stbx r6,r10,r3
	PPC_STORE_U8(ctx.r10.u32 + ctx.r3.u32, ctx.r6.u8);
loc_824199E4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82419a18
	if (ctx.cr6.eq) goto loc_82419A18;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r9,r5,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r5.u32, 8);
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r7,3(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// or r6,r9,r4
	ctx.r6.u64 = ctx.r9.u64 | ctx.r4.u64;
	// rlwinm r5,r6,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// or r4,r5,r8
	ctx.r4.u64 = ctx.r5.u64 | ctx.r8.u64;
	// rlwinm r9,r4,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// or r8,r9,r7
	ctx.r8.u64 = ctx.r9.u64 | ctx.r7.u64;
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
loc_82419A18:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82419a4c
	if (ctx.cr6.eq) goto loc_82419A4C;
	// lbz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r6,5(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// rotlwi r5,r7,8
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// lbz r4,6(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r11,7(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// or r9,r5,r6
	ctx.r9.u64 = ctx.r5.u64 | ctx.r6.u64;
	// rlwinm r8,r9,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r7,r8,r4
	ctx.r7.u64 = ctx.r8.u64 | ctx.r4.u64;
	// rlwinm r6,r7,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// or r5,r6,r11
	ctx.r5.u64 = ctx.r6.u64 | ctx.r11.u64;
	// stw r5,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r5.u32);
loc_82419A4C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82419a64
	if (ctx.cr6.eq) goto loc_82419A64;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_82419A60:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82419A64:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82419A6C"))) PPC_WEAK_FUNC(sub_82419A6C);
PPC_FUNC_IMPL(__imp__sub_82419A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82419A70"))) PPC_WEAK_FUNC(sub_82419A70);
PPC_FUNC_IMPL(__imp__sub_82419A70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x82419A78;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// bl 0x82419948
	ctx.lr = 0x82419A90;
	sub_82419948(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82419ad4
	if (ctx.cr6.lt) goto loc_82419AD4;
	// cmpw cr6,r29,r30
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r30.s32, ctx.xer);
	// ble cr6,0x82419aa8
	if (!ctx.cr6.gt) goto loc_82419AA8;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_82419AA8:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82419ac4
	if (ctx.cr6.eq) goto loc_82419AC4;
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// bl 0x8259d3a0
	ctx.lr = 0x82419AC4;
	sub_8259D3A0(ctx, base);
loc_82419AC4:
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// bl 0x82366680
	ctx.lr = 0x82419ACC;
	sub_82366680(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
loc_82419AD4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82419AE0"))) PPC_WEAK_FUNC(sub_82419AE0);
PPC_FUNC_IMPL(__imp__sub_82419AE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x82419AE8;
	__savegprlr_26(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82419b14
	if (ctx.cr6.eq) goto loc_82419B14;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_82419B14:
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82419b2c
	if (ctx.cr6.eq) goto loc_82419B2C;
	// bl 0x82366680
	ctx.lr = 0x82419B28;
	sub_82366680(ctx, base);
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
loc_82419B2C:
	// li r26,2
	ctx.r26.s64 = 2;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// sth r26,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r26.u16);
	// bl 0x82411598
	ctx.lr = 0x82419B4C;
	sub_82411598(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// clrlwi r3,r27,16
	ctx.r3.u64 = ctx.r27.u32 & 0xFFFF;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82411580
	ctx.lr = 0x82419B5C;
	sub_82411580(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// sth r3,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r3.u16);
	// beq cr6,0x82419b80
	if (ctx.cr6.eq) goto loc_82419B80;
	// li r5,63
	ctx.r5.s64 = 63;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// bl 0x8259d2a0
	ctx.lr = 0x82419B78;
	sub_8259D2A0(ctx, base);
	// stb r30,91(r31)
	PPC_STORE_U8(ctx.r31.u32 + 91, ctx.r30.u8);
	// b 0x82419b9c
	goto loc_82419B9C;
loc_82419B80:
	// addi r11,r31,28
	ctx.r11.s64 = ctx.r31.s64 + 28;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// li r10,16
	ctx.r10.s64 = 16;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82419B90:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82419b90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82419B90;
loc_82419B9C:
	// lhz r10,142(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 142);
	// stw r26,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r26.u32);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// sth r30,140(r31)
	PPC_STORE_U16(ctx.r31.u32 + 140, ctx.r30.u16);
	// beq cr6,0x82419c04
	if (ctx.cr6.eq) goto loc_82419C04;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x8241e9c8
	ctx.lr = 0x82419BC4;
	sub_8241E9C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82419c00
	if (!ctx.cr6.gt) goto loc_82419C00;
	// lis r4,16244
	ctx.r4.s64 = 1064566784;
	// li r7,52
	ctx.r7.s64 = 52;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,26979
	ctx.r4.u64 = ctx.r4.u64 | 26979;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824197e8
	ctx.lr = 0x82419BE8;
	sub_824197E8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,228
	ctx.r3.s64 = ctx.r31.s64 + 228;
	// bl 0x8241ea28
	ctx.lr = 0x82419BF4;
	sub_8241EA28(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_82419C00:
	// sth r30,142(r31)
	PPC_STORE_U16(ctx.r31.u32 + 142, ctx.r30.u16);
loc_82419C04:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82419C10"))) PPC_WEAK_FUNC(sub_82419C10);
PPC_FUNC_IMPL(__imp__sub_82419C10) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82419c6c
	if (ctx.cr6.eq) goto loc_82419C6C;
	// addi r7,r11,32
	ctx.r7.s64 = ctx.r11.s64 + 32;
loc_82419C28:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// addi r8,r11,64
	ctx.r8.s64 = ctx.r11.s64 + 64;
loc_82419C34:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r5,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r5.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82419c54
	if (!ctx.cr0.eq) goto loc_82419C54;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82419c34
	if (!ctx.cr6.eq) goto loc_82419C34;
loc_82419C54:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r7,r7,76
	ctx.r7.s64 = ctx.r7.s64 + 76;
	// cmplw cr6,r3,r6
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x82419c28
	if (ctx.cr6.lt) goto loc_82419C28;
loc_82419C6C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82419C74"))) PPC_WEAK_FUNC(sub_82419C74);
PPC_FUNC_IMPL(__imp__sub_82419C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82419C78"))) PPC_WEAK_FUNC(sub_82419C78);
PPC_FUNC_IMPL(__imp__sub_82419C78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x82419C80;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r28,r11,-27476
	ctx.r28.s64 = ctx.r11.s64 + -27476;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82419cb0
	if (ctx.cr6.eq) goto loc_82419CB0;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_82419CB0:
	// addi r11,r29,-1
	ctx.r11.s64 = ctx.r29.s64 + -1;
	// mulli r11,r11,76
	ctx.r11.s64 = ctx.r11.s64 * 76;
	// addi r30,r11,108
	ctx.r30.s64 = ctx.r11.s64 + 108;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823665a0
	ctx.lr = 0x82419CC4;
	sub_823665A0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82419d04
	if (ctx.cr6.eq) goto loc_82419D04;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8259d300
	ctx.lr = 0x82419CDC;
	sub_8259D300(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// bl 0x82418818
	ctx.lr = 0x82419CE4;
	sub_82418818(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// bl 0x8241ef98
	ctx.lr = 0x82419CF0;
	sub_8241EF98(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82419d10
	if (!ctx.cr6.eq) goto loc_82419D10;
	// bl 0x82366600
	ctx.lr = 0x82419D04;
	sub_82366600(ctx, base);
loc_82419D04:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_82419D10:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r31,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r31.u32);
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82419D24"))) PPC_WEAK_FUNC(sub_82419D24);
PPC_FUNC_IMPL(__imp__sub_82419D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82419D28"))) PPC_WEAK_FUNC(sub_82419D28);
PPC_FUNC_IMPL(__imp__sub_82419D28) {
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
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-27476
	ctx.r31.s64 = ctx.r11.s64 + -27476;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bgt cr6,0x82419d78
	if (ctx.cr6.gt) goto loc_82419D78;
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// bl 0x8241efe8
	ctx.lr = 0x82419D64;
	sub_8241EFE8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82366600
	ctx.lr = 0x82419D6C;
	sub_82366600(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82419D78:
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

__attribute__((alias("__imp__sub_82419D90"))) PPC_WEAK_FUNC(sub_82419D90);
PPC_FUNC_IMPL(__imp__sub_82419D90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bad0
	ctx.lr = 0x82419D98;
	__savegprlr_18(ctx, base);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r20,r29,32
	ctx.r20.s64 = ctx.r29.s64 + 32;
	// bl 0x82418818
	ctx.lr = 0x82419DA8;
	sub_82418818(ctx, base);
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lis r11,4194
	ctx.r11.s64 = 274857984;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// ori r9,r11,19923
	ctx.r9.u64 = ctx.r11.u64 | 19923;
	// subf r8,r10,r25
	ctx.r8.s64 = ctx.r25.s64 - ctx.r10.s64;
	// mulhwu r7,r8,r9
	ctx.r7.u64 = (uint64_t(ctx.r8.u32) * uint64_t(ctx.r9.u32)) >> 32;
	// rlwinm r11,r7,26,6,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 26) & 0x3FFFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82419de4
	if (ctx.cr6.eq) goto loc_82419DE4;
	// mulli r9,r11,1000
	ctx.r9.s64 = ctx.r11.s64 * 1000;
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 8);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r6,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r6.u32);
	// stb r5,8(r29)
	PPC_STORE_U8(ctx.r29.u32 + 8, ctx.r5.u8);
loc_82419DE4:
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lis r3,20971
	ctx.r3.s64 = 1374355456;
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r19,0
	ctx.r19.s64 = 0;
	// ori r11,r3,34079
	ctx.r11.u64 = ctx.r3.u64 | 34079;
	// subf r8,r10,r25
	ctx.r8.s64 = ctx.r25.s64 - ctx.r10.s64;
	// mr r27,r19
	ctx.r27.u64 = ctx.r19.u64;
	// mulhwu r7,r8,r11
	ctx.r7.u64 = (uint64_t(ctx.r8.u32) * uint64_t(ctx.r11.u32)) >> 32;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r28,r19
	ctx.r28.u64 = ctx.r19.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// rlwinm r21,r7,27,5,31
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x7FFFFFF;
	// addi r18,r11,-14092
	ctx.r18.s64 = ctx.r11.s64 + -14092;
	// ble cr6,0x82419fa4
	if (!ctx.cr6.gt) goto loc_82419FA4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r6,0
	ctx.r6.s64 = 0;
	// addi r31,r20,66
	ctx.r31.s64 = ctx.r20.s64 + 66;
	// addi r26,r11,10368
	ctx.r26.s64 = ctx.r11.s64 + 10368;
	// ori r23,r6,32768
	ctx.r23.u64 = ctx.r6.u64 | 32768;
	// li r24,1
	ctx.r24.s64 = 1;
	// li r22,8192
	ctx.r22.s64 = 8192;
loc_82419E38:
	// lbz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 8);
	// lbz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82419eb8
	if (!ctx.cr6.eq) goto loc_82419EB8;
	// lbz r4,1(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// subf r3,r4,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r4.s64;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,60
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 60, ctx.xer);
	// blt cr6,0x82419ea0
	if (ctx.cr6.lt) goto loc_82419EA0;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r9,r31,-66
	ctx.r9.s64 = ctx.r31.s64 + -66;
	// mulli r11,r10,76
	ctx.r11.s64 = ctx.r10.s64 * 76;
	// add r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 + ctx.r20.u64;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// li r9,19
	ctx.r9.s64 = 19;
	// addi r11,r11,-76
	ctx.r11.s64 = ctx.r11.s64 + -76;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82419E7C:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82419e7c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82419E7C;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// stw r7,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r7.u32);
	// b 0x82419eb8
	goto loc_82419EB8;
loc_82419EA0:
	// sth r23,-2(r31)
	PPC_STORE_U16(ctx.r31.u32 + -2, ctx.r23.u16);
	// lbz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 8);
	// addi r6,r11,255
	ctx.r6.s64 = ctx.r11.s64 + 255;
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// stb r11,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r11.u8);
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
loc_82419EB8:
	// lhz r5,-2(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + -2);
	// rlwinm r4,r5,0,0,16
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82419f3c
	if (ctx.cr6.eq) goto loc_82419F3C;
	// cmplw cr6,r28,r21
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r21.u32, ctx.xer);
	// bge cr6,0x82419f3c
	if (!ctx.cr6.lt) goto loc_82419F3C;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stb r19,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r19.u8);
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82403a90
	ctx.lr = 0x82419EE8;
	sub_82403A90(ctx, base);
	// addi r30,r31,-66
	ctx.r30.s64 = ctx.r31.s64 + -66;
	// li r4,128
	ctx.r4.s64 = 128;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x82405fe0
	ctx.lr = 0x82419F00;
	sub_82405FE0(ctx, base);
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// lwz r3,28(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8241f038
	ctx.lr = 0x82419F14;
	sub_8241F038(ctx, base);
	// lhz r3,-2(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + -2);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// rlwimi r3,r24,14,0,19
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r24.u32, 14) & 0xFFFFF000) | (ctx.r3.u64 & 0xFFFFFFFF00000FFF);
	// sth r3,-2(r31)
	PPC_STORE_U16(ctx.r31.u32 + -2, ctx.r3.u16);
	// lbz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 8);
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r11.u8);
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// stw r25,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r25.u32);
loc_82419F3C:
	// lhz r10,-2(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + -2);
	// rlwinm r9,r10,0,17,17
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82419f90
	if (ctx.cr6.eq) goto loc_82419F90;
	// lbz r8,8(r29)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r29.u32 + 8);
	// lbz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// subf r11,r7,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r7.s64;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// clrlwi r5,r6,24
	ctx.r5.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r5,4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 4, ctx.xer);
	// bne cr6,0x82419f90
	if (!ctx.cr6.eq) goto loc_82419F90;
	// lwz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2);
	// sth r22,-2(r31)
	PPC_STORE_U16(ctx.r31.u32 + -2, ctx.r22.u16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82419f90
	if (ctx.cr6.eq) goto loc_82419F90;
	// lwz r5,6(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,-66
	ctx.r3.s64 = ctx.r31.s64 + -66;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82419F8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r19,2(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2, ctx.r19.u32);
loc_82419F90:
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r31,r31,76
	ctx.r31.s64 = ctx.r31.s64 + 76;
	// cmplw cr6,r27,r4
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x82419e38
	if (ctx.cr6.lt) goto loc_82419E38;
loc_82419FA4:
	// li r3,128
	ctx.r3.s64 = 128;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lwz r3,28(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// bl 0x8241f0f8
	ctx.lr = 0x82419FC0;
	sub_8241F0F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8241a12c
	if (ctx.cr6.eq) goto loc_8241A12C;
loc_82419FC8:
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82419ff8
	if (!ctx.cr6.eq) goto loc_82419FF8;
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82419ff8
	if (ctx.cr6.eq) goto loc_82419FF8;
	// lwz r5,24(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,164(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82419FF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8241a110
	goto loc_8241A110;
loc_82419FF8:
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// bl 0x82403840
	ctx.lr = 0x8241A004;
	sub_82403840(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82403c00
	ctx.lr = 0x8241A00C;
	sub_82403C00(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8241a05c
	if (ctx.cr6.lt) goto loc_8241A05C;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8241a05c
	if (!ctx.cr6.lt) goto loc_8241A05C;
	// mulli r11,r3,76
	ctx.r11.s64 = ctx.r3.s64 * 76;
	// add r31,r11,r20
	ctx.r31.u64 = ctx.r11.u64 + ctx.r20.u64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r8,r11,64
	ctx.r8.s64 = ctx.r11.s64 + 64;
loc_8241A034:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8241a054
	if (!ctx.cr0.eq) goto loc_8241A054;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8241a034
	if (!ctx.cr6.eq) goto loc_8241A034;
loc_8241A054:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8241a0cc
	if (ctx.cr6.eq) goto loc_8241A0CC;
loc_8241A05C:
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// ble cr6,0x8241a110
	if (!ctx.cr6.gt) goto loc_8241A110;
	// mr r7,r20
	ctx.r7.u64 = ctx.r20.u64;
loc_8241A070:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r8,r11,64
	ctx.r8.s64 = ctx.r11.s64 + 64;
loc_8241A07C:
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r3,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r3.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8241a09c
	if (!ctx.cr0.eq) goto loc_8241A09C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8241a07c
	if (!ctx.cr6.eq) goto loc_8241A07C;
loc_8241A09C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8241a0bc
	if (ctx.cr6.eq) goto loc_8241A0BC;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,76
	ctx.r7.s64 = ctx.r7.s64 + 76;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8241a070
	if (ctx.cr6.lt) goto loc_8241A070;
	// b 0x8241a110
	goto loc_8241A110;
loc_8241A0BC:
	// cmpwi cr6,r6,-1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -1, ctx.xer);
	// beq cr6,0x8241a110
	if (ctx.cr6.eq) goto loc_8241A110;
	// mulli r11,r6,76
	ctx.r11.s64 = ctx.r6.s64 * 76;
	// add r31,r11,r20
	ctx.r31.u64 = ctx.r11.u64 + ctx.r20.u64;
loc_8241A0CC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8241a110
	if (ctx.cr6.eq) goto loc_8241A110;
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmpwi cr6,r11,4095
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4095, ctx.xer);
	// ble cr6,0x8241a0e8
	if (!ctx.cr6.gt) goto loc_8241A0E8;
	// li r11,4095
	ctx.r11.s64 = 4095;
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
loc_8241A0E8:
	// sth r11,64(r31)
	PPC_STORE_U16(ctx.r31.u32 + 64, ctx.r11.u16);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8241a110
	if (ctx.cr6.eq) goto loc_8241A110;
	// lwz r5,72(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,164(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8241A10C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r19,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r19.u32);
loc_8241A110:
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r3,28(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// bl 0x8241f0f8
	ctx.lr = 0x8241A124;
	sub_8241F0F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82419fc8
	if (!ctx.cr6.eq) goto loc_82419FC8;
loc_8241A12C:
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x8259bb20
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8241A134"))) PPC_WEAK_FUNC(sub_8241A134);
PPC_FUNC_IMPL(__imp__sub_8241A134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241A138"))) PPC_WEAK_FUNC(sub_8241A138);
PPC_FUNC_IMPL(__imp__sub_8241A138) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x8241A140;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x82419c10
	ctx.lr = 0x8241A154;
	sub_82419C10(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8241a178
	if (ctx.cr6.eq) goto loc_8241A178;
	// mulli r11,r3,76
	ctx.r11.s64 = ctx.r3.s64 * 76;
	// lbz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r10,r10,255
	ctx.r10.s64 = ctx.r10.s64 + 255;
	// addi r31,r11,32
	ctx.r31.s64 = ctx.r11.s64 + 32;
	// stb r10,67(r31)
	PPC_STORE_U8(ctx.r31.u32 + 67, ctx.r10.u8);
	// b 0x8241a224
	goto loc_8241A224;
loc_8241A178:
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8241a1e0
	if (!ctx.cr6.eq) goto loc_8241A1E0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8241a1d4
	if (ctx.cr6.eq) goto loc_8241A1D4;
	// lbz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r9,r30,99
	ctx.r9.s64 = ctx.r30.s64 + 99;
loc_8241A1A8:
	// lbz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// subf r11,r3,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r3.s64;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8241a1c4
	if (!ctx.cr6.lt) goto loc_8241A1C4;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
loc_8241A1C4:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,76
	ctx.r9.s64 = ctx.r9.s64 + 76;
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x8241a1a8
	if (ctx.cr6.lt) goto loc_8241A1A8;
loc_8241A1D4:
	// mulli r11,r7,76
	ctx.r11.s64 = ctx.r7.s64 * 76;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// b 0x8241a1f0
	goto loc_8241A1F0;
loc_8241A1E0:
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// mulli r10,r11,76
	ctx.r10.s64 = ctx.r11.s64 * 76;
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// add r11,r10,r30
	ctx.r11.u64 = ctx.r10.u64 + ctx.r30.u64;
loc_8241A1F0:
	// addi r31,r11,32
	ctx.r31.s64 = ctx.r11.s64 + 32;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259d3a0
	ctx.lr = 0x8241A200;
	sub_8259D3A0(ctx, base);
	// li r8,-32768
	ctx.r8.s64 = -32768;
	// stw r29,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r29.u32);
	// stw r28,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r28.u32);
	// sth r8,64(r31)
	PPC_STORE_U16(ctx.r31.u32 + 64, ctx.r8.u16);
	// lbz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// addi r7,r11,255
	ctx.r7.s64 = ctx.r11.s64 + 255;
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// stb r11,67(r31)
	PPC_STORE_U8(ctx.r31.u32 + 67, ctx.r11.u8);
	// stb r11,66(r31)
	PPC_STORE_U8(ctx.r31.u32 + 66, ctx.r11.u8);
loc_8241A224:
	// lhz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 64);
	// rlwinm r6,r11,0,18,18
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8241a240
	if (ctx.cr6.eq) goto loc_8241A240;
	// li r3,-2
	ctx.r3.s64 = -2;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8241A240:
	// rlwinm r3,r11,0,20,15
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFF0FFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8241a250
	if (!ctx.cr6.eq) goto loc_8241A250;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8241A250:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8241A258"))) PPC_WEAK_FUNC(sub_8241A258);
PPC_FUNC_IMPL(__imp__sub_8241A258) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// stw r9,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r9.u32);
	// b 0x8241f090
	sub_8241F090(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8241A27C"))) PPC_WEAK_FUNC(sub_8241A27C);
PPC_FUNC_IMPL(__imp__sub_8241A27C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241A280"))) PPC_WEAK_FUNC(sub_8241A280);
PPC_FUNC_IMPL(__imp__sub_8241A280) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x8241A288;
	__savegprlr_29(ctx, base);
	// stwu r1,-1136(r1)
	ea = -1136 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8241a304
	if (ctx.cr6.eq) goto loc_8241A304;
	// addi r31,r30,7420
	ctx.r31.s64 = ctx.r30.s64 + 7420;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8241a2d8
	if (ctx.cr6.eq) goto loc_8241A2D8;
loc_8241A2B0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// li r10,32
	ctx.r10.s64 = 32;
	// cmplwi cr6,r9,32
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 32, ctx.xer);
	// beq cr6,0x8241a2c4
	if (ctx.cr6.eq) goto loc_8241A2C4;
	// li r10,42
	ctx.r10.s64 = 42;
loc_8241A2C4:
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8241a2b0
	if (!ctx.cr6.eq) goto loc_8241A2B0;
loc_8241A2D8:
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824037f0
	ctx.lr = 0x8241A2E8;
	sub_824037F0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,27360
	ctx.r5.s64 = ctx.r11.s64 + 27360;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82405fe0
	ctx.lr = 0x8241A300;
	sub_82405FE0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_8241A304:
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r4,28005
	ctx.r4.s64 = 1835335680;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// ori r4,r4,29543
	ctx.r4.u64 = ctx.r4.u64 | 29543;
	// bl 0x8240e2e0
	ctx.lr = 0x8241A31C;
	sub_8240E2E0(ctx, base);
	// addi r1,r1,1136
	ctx.r1.s64 = ctx.r1.s64 + 1136;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8241A324"))) PPC_WEAK_FUNC(sub_8241A324);
PPC_FUNC_IMPL(__imp__sub_8241A324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241A328"))) PPC_WEAK_FUNC(sub_8241A328);
PPC_FUNC_IMPL(__imp__sub_8241A328) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bacc
	ctx.lr = 0x8241A330;
	__savegprlr_17(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r18,r4
	ctx.r18.u64 = ctx.r4.u64;
	// addi r24,r27,6268
	ctx.r24.s64 = ctx.r27.s64 + 6268;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r17,r6
	ctx.r17.u64 = ctx.r6.u64;
	// lwz r11,124(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 124);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8241a64c
	if (!ctx.cr6.eq) goto loc_8241A64C;
	// lis r10,25455
	ctx.r10.s64 = 1668218880;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// ori r29,r10,28262
	ctx.r29.u64 = ctx.r10.u64 | 28262;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8240e778
	ctx.lr = 0x8241A368;
	sub_8240E778(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r30,r11,12256
	ctx.r30.s64 = ctx.r11.s64 + 12256;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82403840
	ctx.lr = 0x8241A378;
	sub_82403840(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x82403c00
	ctx.lr = 0x8241A380;
	sub_82403C00(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// beq cr6,0x8241a64c
	if (ctx.cr6.eq) goto loc_8241A64C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82403840
	ctx.lr = 0x8241A398;
	sub_82403840(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8241a64c
	if (!ctx.cr6.eq) goto loc_8241A64C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,12248
	ctx.r30.s64 = ctx.r11.s64 + 12248;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82403840
	ctx.lr = 0x8241A3B4;
	sub_82403840(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82403c00
	ctx.lr = 0x8241A3BC;
	sub_82403C00(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x8240e778
	ctx.lr = 0x8241A3CC;
	sub_8240E778(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82403840
	ctx.lr = 0x8241A3D4;
	sub_82403840(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82403c00
	ctx.lr = 0x8241A3DC;
	sub_82403C00(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// addi r30,r11,12240
	ctx.r30.s64 = ctx.r11.s64 + 12240;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82403840
	ctx.lr = 0x8241A3F4;
	sub_82403840(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82403c00
	ctx.lr = 0x8241A3FC;
	sub_82403C00(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x8240e778
	ctx.lr = 0x8241A40C;
	sub_8240E778(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82403840
	ctx.lr = 0x8241A414;
	sub_82403840(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82403c00
	ctx.lr = 0x8241A41C;
	sub_82403C00(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// addi r4,r11,12232
	ctx.r4.s64 = ctx.r11.s64 + 12232;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82403840
	ctx.lr = 0x8241A430;
	sub_82403840(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82403c00
	ctx.lr = 0x8241A438;
	sub_82403C00(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// addi r4,r10,27088
	ctx.r4.s64 = ctx.r10.s64 + 27088;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r21,r9,27,31,31
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bl 0x82403840
	ctx.lr = 0x8241A454;
	sub_82403840(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82403c00
	ctx.lr = 0x8241A45C;
	sub_82403C00(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 10, ctx.xer);
	// ble cr6,0x8241a46c
	if (!ctx.cr6.gt) goto loc_8241A46C;
	// li r29,10
	ctx.r29.s64 = 10;
loc_8241A46C:
	// li r20,0
	ctx.r20.s64 = 0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
	// ble cr6,0x8241a4f4
	if (!ctx.cr6.gt) goto loc_8241A4F4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r28,r1,148
	ctx.r28.s64 = ctx.r1.s64 + 148;
	// addi r26,r11,27072
	ctx.r26.s64 = ctx.r11.s64 + 27072;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r25,r11,27056
	ctx.r25.s64 = ctx.r11.s64 + 27056;
loc_8241A490:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8259d1b0
	ctx.lr = 0x8241A4A0;
	sub_8259D1B0(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82403840
	ctx.lr = 0x8241A4AC;
	sub_82403840(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82403c00
	ctx.lr = 0x8241A4B4;
	sub_82403C00(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r8,-4(r28)
	PPC_STORE_U32(ctx.r28.u32 + -4, ctx.r8.u32);
	// bl 0x8259d1b0
	ctx.lr = 0x8241A4CC;
	sub_8259D1B0(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82403840
	ctx.lr = 0x8241A4D8;
	sub_82403840(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82403c00
	ctx.lr = 0x8241A4E0;
	sub_82403C00(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x8241a490
	if (ctx.cr6.lt) goto loc_8241A490;
loc_8241A4F4:
	// li r5,1024
	ctx.r5.s64 = 1024;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r24,128
	ctx.r3.s64 = ctx.r24.s64 + 128;
	// bl 0x824178c8
	ctx.lr = 0x8241A504;
	sub_824178C8(ctx, base);
	// lis r4,28773
	ctx.r4.s64 = 1885667328;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// ori r4,r4,29299
	ctx.r4.u64 = ctx.r4.u64 | 29299;
	// bl 0x8240e778
	ctx.lr = 0x8241A514;
	sub_8240E778(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8240a668
	ctx.lr = 0x8241A520;
	sub_8240A668(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x8241a64c
	if (ctx.cr6.lt) goto loc_8241A64C;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stw r20,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r20.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r20,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82421818
	ctx.lr = 0x8241A558;
	sub_82421818(ctx, base);
	// cmplwi cr6,r3,122
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 122, ctx.xer);
	// bne cr6,0x8241a64c
	if (!ctx.cr6.eq) goto loc_8241A64C;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8241a64c
	if (ctx.cr6.eq) goto loc_8241A64C;
	// addi r31,r24,112
	ctx.r31.s64 = ctx.r24.s64 + 112;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r3,r7
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x8241a5a4
	if (ctx.cr6.eq) goto loc_8241A5A4;
	// lwz r11,108(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8241a594
	if (ctx.cr6.eq) goto loc_8241A594;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82366680
	ctx.lr = 0x8241A590;
	sub_82366680(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_8241A594:
	// bl 0x82366620
	ctx.lr = 0x8241A598;
	sub_82366620(ctx, base);
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r3,108(r24)
	PPC_STORE_U32(ctx.r24.u32 + 108, ctx.r3.u32);
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
loc_8241A5A4:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,108(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 108);
	// bl 0x8259d300
	ctx.lr = 0x8241A5B4;
	sub_8259D300(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x8241a5d0
	if (!ctx.cr6.gt) goto loc_8241A5D0;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// rlwinm r5,r29,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x8259d7c0
	ctx.lr = 0x8241A5CC;
	sub_8259D7C0(ctx, base);
	// b 0x8241a5f4
	goto loc_8241A5F4;
loc_8241A5D0:
	// lis r5,0
	ctx.r5.s64 = 0;
	// stw r21,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r21.u32);
	// lis r3,0
	ctx.r3.s64 = 0;
	// stw r22,12(r24)
	PPC_STORE_U32(ctx.r24.u32 + 12, ctx.r22.u32);
	// ori r4,r5,32778
	ctx.r4.u64 = ctx.r5.u64 | 32778;
	// ori r11,r3,32779
	ctx.r11.u64 = ctx.r3.u64 | 32779;
	// li r29,2
	ctx.r29.s64 = 2;
	// stw r4,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r4.u32);
	// stw r11,8(r24)
	PPC_STORE_U32(ctx.r24.u32 + 8, ctx.r11.u32);
loc_8241A5F4:
	// lwz r4,108(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 108);
	// addi r3,r24,80
	ctx.r3.s64 = ctx.r24.s64 + 80;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// clrlwi r7,r29,16
	ctx.r7.u64 = ctx.r29.u32 & 0xFFFF;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82421818
	ctx.lr = 0x8241A628;
	sub_82421818(ctx, base);
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// bne cr6,0x8241a64c
	if (!ctx.cr6.eq) goto loc_8241A64C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r18,116(r24)
	PPC_STORE_U32(ctx.r24.u32 + 116, ctx.r18.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r17,120(r24)
	PPC_STORE_U32(ctx.r24.u32 + 120, ctx.r17.u32);
	// stw r11,124(r24)
	PPC_STORE_U32(ctx.r24.u32 + 124, ctx.r11.u32);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x8259bb1c
	__restgprlr_17(ctx, base);
	return;
loc_8241A64C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x8259bb1c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8241A658"))) PPC_WEAK_FUNC(sub_8241A658);
PPC_FUNC_IMPL(__imp__sub_8241A658) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae8
	ctx.lr = 0x8241A660;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r29,r25,6268
	ctx.r29.s64 = ctx.r25.s64 + 6268;
	// lwz r11,124(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 124);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8241a744
	if (ctx.cr6.eq) goto loc_8241A744;
	// addi r3,r29,80
	ctx.r3.s64 = ctx.r29.s64 + 80;
	// bl 0x825af7b8
	ctx.lr = 0x8241A680;
	sub_825AF7B8(ctx, base);
	// cmplwi cr6,r3,996
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 996, ctx.xer);
	// beq cr6,0x8241a744
	if (ctx.cr6.eq) goto loc_8241A744;
	// lwz r10,108(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 108);
	// lwz r31,0(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x8241a728
	if (ctx.cr6.lt) goto loc_8241A728;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r26,r29,128
	ctx.r26.s64 = ctx.r29.s64 + 128;
	// addi r5,r11,12292
	ctx.r5.s64 = ctx.r11.s64 + 12292;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x824061e8
	ctx.lr = 0x8241A6B0;
	sub_824061E8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x8241a728
	if (!ctx.cr6.gt) goto loc_8241A728;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r28,r11,9332
	ctx.r28.s64 = ctx.r11.s64 + 9332;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r27,r11,12264
	ctx.r27.s64 = ctx.r11.s64 + 12264;
loc_8241A6CC:
	// lwz r9,108(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 108);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lbz r24,23(r11)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r11.u32 + 23);
	// lbz r10,22(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 22);
	// lbz r9,21(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// lbz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 20);
	// lbz r7,19(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 19);
	// lbz r6,18(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 18);
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// bl 0x82417800
	ctx.lr = 0x8241A704;
	sub_82417800(ctx, base);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x824061e8
	ctx.lr = 0x8241A718;
	sub_824061E8(ctx, base);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r30,r30,92
	ctx.r30.s64 = ctx.r30.s64 + 92;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8241a6cc
	if (!ctx.cr6.eq) goto loc_8241A6CC;
loc_8241A728:
	// addi r5,r29,128
	ctx.r5.s64 = ctx.r29.s64 + 128;
	// lwz r6,120(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 120);
	// lwz r4,116(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 116);
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// bl 0x8240e2e0
	ctx.lr = 0x8241A73C;
	sub_8240E2E0(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r8,124(r29)
	PPC_STORE_U32(ctx.r29.u32 + 124, ctx.r8.u32);
loc_8241A744:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8241A74C"))) PPC_WEAK_FUNC(sub_8241A74C);
PPC_FUNC_IMPL(__imp__sub_8241A74C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241A750"))) PPC_WEAK_FUNC(sub_8241A750);
PPC_FUNC_IMPL(__imp__sub_8241A750) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x8241A758;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lis r4,25455
	ctx.r4.s64 = 1668218880;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// ori r4,r4,28262
	ctx.r4.u64 = ctx.r4.u64 | 28262;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x8240e778
	ctx.lr = 0x8241A778;
	sub_8240E778(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,12304
	ctx.r4.s64 = ctx.r11.s64 + 12304;
	// bl 0x82403840
	ctx.lr = 0x8241A784;
	sub_82403840(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82403c00
	ctx.lr = 0x8241A78C;
	sub_82403C00(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8241a7a0
	if (!ctx.cr6.eq) goto loc_8241A7A0;
loc_8241A794:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_8241A7A0:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,27352
	ctx.r4.s64 = ctx.r11.s64 + 27352;
	// bl 0x82403840
	ctx.lr = 0x8241A7B0;
	sub_82403840(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82403d78
	ctx.lr = 0x8241A7B8;
	sub_82403D78(ctx, base);
	// rlwinm r11,r3,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x4000;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8241a794
	if (!ctx.cr6.eq) goto loc_8241A794;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,27360
	ctx.r4.s64 = ctx.r11.s64 + 27360;
	// bl 0x82403840
	ctx.lr = 0x8241A7D4;
	sub_82403840(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r27,7420
	ctx.r30.s64 = ctx.r27.s64 + 7420;
	// addi r6,r11,3672
	ctx.r6.s64 = ctx.r11.s64 + 3672;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82404528
	ctx.lr = 0x8241A7EC;
	sub_82404528(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r31,r27,4
	ctx.r31.s64 = ctx.r27.s64 + 4;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_8241A7F8:
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8241a834
	if (ctx.cr6.eq) goto loc_8241A834;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r31,r31,3132
	ctx.r31.s64 = ctx.r31.s64 + 3132;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x8241a7f8
	if (ctx.cr6.lt) goto loc_8241A7F8;
loc_8241A814:
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8241a280
	ctx.lr = 0x8241A828;
	sub_8241A280(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_8241A834:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r26,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r26.u32);
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// bl 0x824037f0
	ctx.lr = 0x8241A848;
	sub_824037F0(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r3,r31,1084
	ctx.r3.s64 = ctx.r31.s64 + 1084;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8241a87c
	if (ctx.cr6.eq) goto loc_8241A87C;
loc_8241A860:
	// extsb r7,r9
	ctx.r7.s64 = ctx.r9.s8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r7,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r7.u16);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8241a860
	if (!ctx.cr6.eq) goto loc_8241A860;
loc_8241A87C:
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r11,r4
	ctx.r11.s64 = ctx.r4.s8;
	// sth r11,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// stw r3,2(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2, ctx.r3.u32);
	// bl 0x8259de20
	ctx.lr = 0x8241A890;
	sub_8259DE20(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r8,r31,40
	ctx.r8.s64 = ctx.r31.s64 + 40;
	// li r30,12
	ctx.r30.s64 = 12;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r9,r31,12
	ctx.r9.s64 = ctx.r31.s64 + 12;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// addi r4,r10,-20492
	ctx.r4.s64 = ctx.r10.s64 + -20492;
	// stw r28,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r28.u32);
	// li r7,12
	ctx.r7.s64 = 12;
	// stw r28,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r28.u32);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// stw r28,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r28.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// bl 0x82420740
	ctx.lr = 0x8241A8D0;
	sub_82420740(ctx, base);
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// bne cr6,0x8241a814
	if (!ctx.cr6.eq) goto loc_8241A814;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8241A8EC"))) PPC_WEAK_FUNC(sub_8241A8EC);
PPC_FUNC_IMPL(__imp__sub_8241A8EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241A8F0"))) PPC_WEAK_FUNC(sub_8241A8F0);
PPC_FUNC_IMPL(__imp__sub_8241A8F0) {
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
	// li r3,8444
	ctx.r3.s64 = 8444;
	// bl 0x82366620
	ctx.lr = 0x8241A910;
	sub_82366620(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8241a934
	if (ctx.cr6.eq) goto loc_8241A934;
	// li r5,8444
	ctx.r5.s64 = 8444;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259d300
	ctx.lr = 0x8241A92C;
	sub_8259D300(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_8241A934:
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

__attribute__((alias("__imp__sub_8241A94C"))) PPC_WEAK_FUNC(sub_8241A94C);
PPC_FUNC_IMPL(__imp__sub_8241A94C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241A950"))) PPC_WEAK_FUNC(sub_8241A950);
PPC_FUNC_IMPL(__imp__sub_8241A950) {
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
	// lwz r3,6376(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6376);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8241a974
	if (ctx.cr6.eq) goto loc_8241A974;
	// bl 0x82366680
	ctx.lr = 0x8241A974;
	sub_82366680(ctx, base);
loc_8241A974:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82366680
	ctx.lr = 0x8241A97C;
	sub_82366680(ctx, base);
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

__attribute__((alias("__imp__sub_8241A990"))) PPC_WEAK_FUNC(sub_8241A990);
PPC_FUNC_IMPL(__imp__sub_8241A990) {
	PPC_FUNC_PROLOGUE();
	// lis r10,26481
	ctx.r10.s64 = 1735458816;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// ori r9,r10,30571
	ctx.r9.u64 = ctx.r10.u64 | 30571;
	// cmpw cr6,r4,r9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x8241a9d8
	if (ctx.cr6.eq) goto loc_8241A9D8;
	// lis r8,26483
	ctx.r8.s64 = 1735589888;
	// ori r7,r8,25953
	ctx.r7.u64 = ctx.r8.u64 | 25953;
	// cmpw cr6,r4,r7
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r7.s32, ctx.xer);
	// beq cr6,0x8241a9d8
	if (ctx.cr6.eq) goto loc_8241A9D8;
	// lis r5,28005
	ctx.r5.s64 = 1835335680;
	// ori r10,r5,29543
	ctx.r10.u64 = ctx.r5.u64 | 29543;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8241a9d0
	if (!ctx.cr6.eq) goto loc_8241A9D0;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// b 0x8241a750
	sub_8241A750(ctx, base);
	return;
loc_8241A9D0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8241A9D8:
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// b 0x8241a328
	sub_8241A328(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8241A9E0"))) PPC_WEAK_FUNC(sub_8241A9E0);
PPC_FUNC_IMPL(__imp__sub_8241A9E0) {
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
	// lis r11,11117
	ctx.r11.s64 = 728563712;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r11,29543
	ctx.r10.u64 = ctx.r11.u64 | 29543;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8241aa94
	if (!ctx.cr6.eq) goto loc_8241AA94;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,10856
	ctx.r4.s64 = ctx.r11.s64 + 10856;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bl 0x82403840
	ctx.lr = 0x8241AA24;
	sub_82403840(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82403d78
	ctx.lr = 0x8241AA2C;
	sub_82403D78(ctx, base);
	// rlwinm r8,r3,0,17,17
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x4000;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8241aa94
	if (!ctx.cr6.eq) goto loc_8241AA94;
	// lis r4,28773
	ctx.r4.s64 = 1885667328;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// ori r4,r4,29299
	ctx.r4.u64 = ctx.r4.u64 | 29299;
	// bl 0x8240e778
	ctx.lr = 0x8241AA48;
	sub_8240E778(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8240a668
	ctx.lr = 0x8241AA54;
	sub_8240A668(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x8241aa8c
	if (ctx.cr6.lt) goto loc_8241AA8C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-6308
	ctx.r4.s64 = ctx.r11.s64 + -6308;
	// bl 0x82403840
	ctx.lr = 0x8241AA70;
	sub_82403840(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x82404940
	ctx.lr = 0x8241AA7C;
	sub_82404940(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x824219c8
	ctx.lr = 0x8241AA8C;
	sub_824219C8(ctx, base);
loc_8241AA8C:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x8241aa98
	goto loc_8241AA98;
loc_8241AA94:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8241AA98:
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

__attribute__((alias("__imp__sub_8241AAB0"))) PPC_WEAK_FUNC(sub_8241AAB0);
PPC_FUNC_IMPL(__imp__sub_8241AAB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x8241AAB8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r28,2
	ctx.r28.s64 = 2;
	// addi r31,r30,52
	ctx.r31.s64 = ctx.r30.s64 + 52;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8241AACC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8241ab10
	if (ctx.cr6.eq) goto loc_8241AB10;
	// addi r3,r31,-36
	ctx.r3.s64 = ctx.r31.s64 + -36;
	// bl 0x825af7b8
	ctx.lr = 0x8241AAE0;
	sub_825AF7B8(ctx, base);
	// cmplwi cr6,r3,996
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 996, ctx.xer);
	// beq cr6,0x8241ab10
	if (ctx.cr6.eq) goto loc_8241AB10;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8241aafc
	if (!ctx.cr6.eq) goto loc_8241AAFC;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
loc_8241AAFC:
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241a280
	ctx.lr = 0x8241AB0C;
	sub_8241A280(ctx, base);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
loc_8241AB10:
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// addi r31,r31,3132
	ctx.r31.s64 = ctx.r31.s64 + 3132;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x8241aacc
	if (!ctx.cr6.eq) goto loc_8241AACC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241a658
	ctx.lr = 0x8241AB28;
	sub_8241A658(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8241AB30"))) PPC_WEAK_FUNC(sub_8241AB30);
PPC_FUNC_IMPL(__imp__sub_8241AB30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x8241AB38;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-27464
	ctx.r3.s64 = ctx.r11.s64 + -27464;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r11,264(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8241ab7c
	if (!ctx.cr6.eq) goto loc_8241AB7C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r6,10
	ctx.r6.s64 = 10;
	// addi r4,r11,13336
	ctx.r4.s64 = ctx.r11.s64 + 13336;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r5,-1
	ctx.r5.s64 = -1;
	// stw r11,264(r3)
	PPC_STORE_U32(ctx.r3.u32 + 264, ctx.r11.u32);
	// bl 0x8241ab30
	ctx.lr = 0x8241AB7C;
	sub_8241AB30(ctx, base);
loc_8241AB7C:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bge cr6,0x8241ab90
	if (!ctx.cr6.lt) goto loc_8241AB90;
	// neg r28,r28
	ctx.r28.s64 = -ctx.r28.s64;
	// b 0x8241abac
	goto loc_8241ABAC;
loc_8241AB90:
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_8241AB94:
	// stbx r8,r8,r31
	PPC_STORE_U8(ctx.r8.u32 + ctx.r31.u32, ctx.r8.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpwi cr6,r8,256
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 256, ctx.xer);
	// blt cr6,0x8241ab94
	if (ctx.cr6.lt) goto loc_8241AB94;
	// stb r11,256(r31)
	PPC_STORE_U8(ctx.r31.u32 + 256, ctx.r11.u8);
	// stw r11,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r11.u32);
loc_8241ABAC:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x8241abd8
	if (!ctx.cr6.lt) goto loc_8241ABD8;
	// lbz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8241ac6c
	if (ctx.cr6.eq) goto loc_8241AC6C;
loc_8241ABC4:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lbzx r8,r29,r30
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r30.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8241abc4
	if (!ctx.cr6.eq) goto loc_8241ABC4;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
loc_8241ABD8:
	// ble cr6,0x8241ac6c
	if (!ctx.cr6.gt) goto loc_8241AC6C;
	// rlwinm r5,r28,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 8) & 0xFFFFFF00;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x8241ac6c
	if (!ctx.cr6.gt) goto loc_8241AC6C;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r6,r8,12312
	ctx.r6.s64 = ctx.r8.s64 + 12312;
loc_8241ABF8:
	// divw r4,r11,r30
	ctx.r4.s32 = ctx.r11.s32 / ctx.r30.s32;
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// mullw r3,r4,r30
	ctx.r3.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r30.s32);
	// subf r8,r3,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r3.s64;
	// rlwinm r4,r9,24,8,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFFFF;
	// rotlwi r9,r11,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// twllei r30,0
	if (ctx.r30.u32 <= 0) __builtin_debugtrap();
	// lbzx r3,r8,r29
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r29.u32);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// xor r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 ^ ctx.r10.u64;
	// andc r3,r30,r9
	ctx.r3.u64 = ctx.r30.u64 & ~ctx.r9.u64;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// twlgei r3,-1
	if (ctx.r3.u32 >= 4294967295) __builtin_debugtrap();
	// lwzx r10,r8,r6
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// lbzx r8,r7,r31
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r31.u32);
	// xor r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r4.u64;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm r4,r10,24,8,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// xor r10,r9,r8
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// xor r9,r3,r4
	ctx.r9.u64 = ctx.r3.u64 ^ ctx.r4.u64;
	// clrlwi r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	// lbzx r4,r10,r31
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r31.u32);
	// stbx r4,r7,r31
	PPC_STORE_U8(ctx.r7.u32 + ctx.r31.u32, ctx.r4.u8);
	// stbx r8,r10,r31
	PPC_STORE_U8(ctx.r10.u32 + ctx.r31.u32, ctx.r8.u8);
	// blt cr6,0x8241abf8
	if (ctx.cr6.lt) goto loc_8241ABF8;
loc_8241AC6C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8241AC74"))) PPC_WEAK_FUNC(sub_8241AC74);
PPC_FUNC_IMPL(__imp__sub_8241AC74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241AC78"))) PPC_WEAK_FUNC(sub_8241AC78);
PPC_FUNC_IMPL(__imp__sub_8241AC78) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x8241AC80;
	__savegprlr_29(ctx, base);
	// lbz r6,256(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 256);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r9,260(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 260);
	// ble cr6,0x8241ad00
	if (!ctx.cr6.gt) goto loc_8241AD00;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// clrlwi r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	// addi r31,r8,12312
	ctx.r31.s64 = ctx.r8.s64 + 12312;
loc_8241ACA0:
	// lbzx r8,r11,r3
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// xor r6,r8,r10
	ctx.r6.u64 = ctx.r8.u64 ^ ctx.r10.u64;
	// rlwinm r10,r9,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r6,r7,24
	ctx.r6.u64 = ctx.r7.u32 & 0xFF;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwzx r9,r11,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// xor r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// clrlwi r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	// lbzx r8,r11,r3
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// lbzx r7,r10,r3
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r3.u32);
	// subf r30,r7,r8
	ctx.r30.s64 = ctx.r8.s64 - ctx.r7.s64;
	// clrlwi r30,r30,24
	ctx.r30.u64 = ctx.r30.u32 & 0xFF;
	// stbx r7,r11,r3
	PPC_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r7.u8);
	// stbx r8,r10,r3
	PPC_STORE_U8(ctx.r10.u32 + ctx.r3.u32, ctx.r8.u8);
	// lbz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// lbzx r7,r30,r3
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r3.u32);
	// xor r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 ^ ctx.r8.u64;
	// stb r8,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r8.u8);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// bgt cr6,0x8241aca0
	if (ctx.cr6.gt) goto loc_8241ACA0;
loc_8241AD00:
	// stb r6,256(r3)
	PPC_STORE_U8(ctx.r3.u32 + 256, ctx.r6.u8);
	// stw r9,260(r3)
	PPC_STORE_U32(ctx.r3.u32 + 260, ctx.r9.u32);
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8241AD0C"))) PPC_WEAK_FUNC(sub_8241AD0C);
PPC_FUNC_IMPL(__imp__sub_8241AD0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241AD10"))) PPC_WEAK_FUNC(sub_8241AD10);
PPC_FUNC_IMPL(__imp__sub_8241AD10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae8
	ctx.lr = 0x8241AD18;
	__savegprlr_24(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// stb r24,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r24.u8);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8241ab30
	ctx.lr = 0x8241AD50;
	sub_8241AB30(ctx, base);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// neg r6,r28
	ctx.r6.s64 = -ctx.r28.s64;
	// addi r27,r11,-27464
	ctx.r27.s64 = ctx.r11.s64 + -27464;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8241ab30
	ctx.lr = 0x8241AD6C;
	sub_8241AB30(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r4,r11,13348
	ctx.r4.s64 = ctx.r11.s64 + 13348;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8241ab30
	ctx.lr = 0x8241AD84;
	sub_8241AB30(ctx, base);
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 1, ctx.xer);
	// ble cr6,0x8241ae78
	if (!ctx.cr6.gt) goto loc_8241AE78;
	// addi r29,r25,-1
	ctx.r29.s64 = ctx.r25.s64 + -1;
	// lis r11,10922
	ctx.r11.s64 = 715784192;
	// subf r25,r29,r25
	ctx.r25.s64 = ctx.r25.s64 - ctx.r29.s64;
	// ori r31,r11,43691
	ctx.r31.u64 = ctx.r11.u64 | 43691;
loc_8241AD9C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x8241adcc
	if (!ctx.cr6.eq) goto loc_8241ADCC;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8241ac78
	ctx.lr = 0x8241ADB4;
	sub_8241AC78(ctx, base);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// clrlwi r11,r10,26
	ctx.r11.u64 = ctx.r10.u32 & 0x3F;
	// addi r9,r11,32
	ctx.r9.s64 = ctx.r11.s64 + 32;
	// clrlwi r28,r9,24
	ctx.r28.u64 = ctx.r9.u32 & 0xFF;
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r28.u8);
	// b 0x8241ade4
	goto loc_8241ADE4;
loc_8241ADCC:
	// lbz r28,0(r26)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r26.u32 + 0);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r28.u8);
	// bne cr6,0x8241ade4
	if (!ctx.cr6.eq) goto loc_8241ADE4;
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
loc_8241ADE4:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// blt cr6,0x8241adf8
	if (ctx.cr6.lt) goto loc_8241ADF8;
	// cmplwi cr6,r11,127
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 127, ctx.xer);
	// blt cr6,0x8241ae00
	if (ctx.cr6.lt) goto loc_8241AE00;
loc_8241ADF8:
	// li r28,127
	ctx.r28.s64 = 127;
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r28.u8);
loc_8241AE00:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8241ac78
	ctx.lr = 0x8241AE10;
	sub_8241AC78(ctx, base);
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// clrlwi r9,r28,24
	ctx.r9.u64 = ctx.r28.u32 & 0xFF;
	// mulhw r6,r11,r31
	ctx.r6.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r31.s32)) >> 32;
	// srawi r10,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 4;
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r4,r5,5,0,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// mulhw r3,r11,r31
	ctx.r3.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r31.s32)) >> 32;
	// srawi r10,r3,4
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 4;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r10,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r8,r11,32
	ctx.r8.s64 = ctx.r11.s64 + 32;
	// stb r8,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r8.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bne cr6,0x8241ad9c
	if (!ctx.cr6.eq) goto loc_8241AD9C;
loc_8241AE78:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// ble cr6,0x8241ae88
	if (!ctx.cr6.gt) goto loc_8241AE88;
	// stb r24,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r24.u8);
loc_8241AE88:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8241AE90"))) PPC_WEAK_FUNC(sub_8241AE90);
PPC_FUNC_IMPL(__imp__sub_8241AE90) {
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
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8241aecc
	if (ctx.cr6.eq) goto loc_8241AECC;
loc_8241AEB0:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bl 0x82366600
	ctx.lr = 0x8241AEC0;
	sub_82366600(ctx, base);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8241aeb0
	if (!ctx.cr6.eq) goto loc_8241AEB0;
loc_8241AECC:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82366600
	ctx.lr = 0x8241AED4;
	sub_82366600(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82366600
	ctx.lr = 0x8241AEDC;
	sub_82366600(ctx, base);
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

__attribute__((alias("__imp__sub_8241AEF0"))) PPC_WEAK_FUNC(sub_8241AEF0);
PPC_FUNC_IMPL(__imp__sub_8241AEF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x8241AEF8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bge cr6,0x8241af0c
	if (!ctx.cr6.lt) goto loc_8241AF0C;
	// li r4,1
	ctx.r4.s64 = 1;
loc_8241AF0C:
	// addi r29,r4,1
	ctx.r29.s64 = ctx.r4.s64 + 1;
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823665a0
	ctx.lr = 0x8241AF24;
	sub_823665A0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8241af38
	if (!ctx.cr6.eq) goto loc_8241AF38;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_8241AF38:
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// add r10,r30,r3
	ctx.r10.u64 = ctx.r30.u64 + ctx.r3.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// beq cr6,0x8241af70
	if (ctx.cr6.eq) goto loc_8241AF70;
loc_8241AF54:
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// stw r7,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r7.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8241af54
	if (!ctx.cr6.eq) goto loc_8241AF54;
loc_8241AF70:
	// addi r3,r29,-1
	ctx.r3.s64 = ctx.r29.s64 + -1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8241AF7C"))) PPC_WEAK_FUNC(sub_8241AF7C);
PPC_FUNC_IMPL(__imp__sub_8241AF7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241AF80"))) PPC_WEAK_FUNC(sub_8241AF80);
PPC_FUNC_IMPL(__imp__sub_8241AF80) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8241af94
	if (!ctx.cr6.eq) goto loc_8241AF94;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8241AF94:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8241aff4
	if (!ctx.cr6.eq) goto loc_8241AFF4;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
loc_8241AFB0:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// twllei r11,0
	if (ctx.r11.u32 <= 0) __builtin_debugtrap();
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// divw r5,r6,r11
	ctx.r5.s32 = ctx.r6.s32 / ctx.r11.s32;
	// rotlwi r10,r6,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// mullw r4,r5,r11
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r11.s32);
	// subf r8,r4,r6
	ctx.r8.s64 = ctx.r6.s64 - ctx.r4.s64;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// rotlwi r5,r8,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// andc r6,r11,r7
	ctx.r6.u64 = ctx.r11.u64 & ~ctx.r7.u64;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// twlgei r6,-1
	if (ctx.r6.u32 >= 4294967295) __builtin_debugtrap();
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// lwz r4,20(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwzx r8,r10,r4
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8241afb0
	if (ctx.cr6.eq) goto loc_8241AFB0;
loc_8241AFF4:
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r6,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r6.u32);
	// lwz r5,28(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8241B028"))) PPC_WEAK_FUNC(sub_8241B028);
PPC_FUNC_IMPL(__imp__sub_8241B028) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8241b064
	if (ctx.cr6.eq) goto loc_8241B064;
loc_8241B03C:
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// ble cr6,0x8241b050
	if (!ctx.cr6.gt) goto loc_8241B050;
	// andi. r11,r11,95
	ctx.r11.u64 = ctx.r11.u64 & 95;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mulli r10,r10,131
	ctx.r10.s64 = ctx.r10.s64 * 131;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_8241B050:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// lbz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// extsb r11,r9
	ctx.r11.s64 = ctx.r9.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8241b03c
	if (!ctx.cr6.eq) goto loc_8241B03C;
loc_8241B064:
	// clrlwi r8,r10,1
	ctx.r8.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	// lwz r7,16(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rotlwi r11,r8,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// divw r6,r8,r7
	ctx.r6.s32 = ctx.r8.s32 / ctx.r7.s32;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// mullw r4,r6,r7
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// andc r11,r7,r5
	ctx.r11.u64 = ctx.r7.u64 & ~ctx.r5.u64;
	// twllei r7,0
	if (ctx.r7.u32 <= 0) __builtin_debugtrap();
	// subf r3,r4,r8
	ctx.r3.s64 = ctx.r8.s64 - ctx.r4.s64;
	// twlgei r11,-1
	if (ctx.r11.u32 >= 4294967295) __builtin_debugtrap();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8241B090"))) PPC_WEAK_FUNC(sub_8241B090);
PPC_FUNC_IMPL(__imp__sub_8241B090) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x8241B098;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x8241b028
	ctx.lr = 0x8241B0AC;
	sub_8241B028(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8241b0f0
	if (!ctx.cr6.eq) goto loc_8241B0F0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,10
	ctx.r10.s64 = ctx.r11.s64 + 10;
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// addze r4,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r4.s64 = temp.s64;
	// bl 0x8241aef0
	ctx.lr = 0x8241B0DC;
	sub_8241AEF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt cr6,0x8241b0f0
	if (ctx.cr6.gt) goto loc_8241B0F0;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8241B0F0:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r8.u32);
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwzx r6,r7,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stwx r11,r5,r10
	PPC_STORE_U32(ctx.r5.u32 + ctx.r10.u32, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8241B134"))) PPC_WEAK_FUNC(sub_8241B134);
PPC_FUNC_IMPL(__imp__sub_8241B134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241B138"))) PPC_WEAK_FUNC(sub_8241B138);
PPC_FUNC_IMPL(__imp__sub_8241B138) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x8241B140;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x8241b028
	ctx.lr = 0x8241B150;
	sub_8241B028(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8241b18c
	if (ctx.cr6.eq) goto loc_8241B18C;
loc_8241B164:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r9,32(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8241B178;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8241b198
	if (ctx.cr6.eq) goto loc_8241B198;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8241b164
	if (!ctx.cr6.eq) goto loc_8241B164;
loc_8241B18C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_8241B198:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8241B1A4"))) PPC_WEAK_FUNC(sub_8241B1A4);
PPC_FUNC_IMPL(__imp__sub_8241B1A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241B1A8"))) PPC_WEAK_FUNC(sub_8241B1A8);
PPC_FUNC_IMPL(__imp__sub_8241B1A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x8241B1B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// bge cr6,0x8241b1d0
	if (!ctx.cr6.lt) goto loc_8241B1D0;
	// neg r11,r30
	ctx.r11.s64 = -ctx.r30.s64;
loc_8241B1D0:
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// divw r8,r11,r9
	ctx.r8.s32 = ctx.r11.s32 / ctx.r9.s32;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// mullw r6,r8,r9
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// andc r5,r9,r7
	ctx.r5.u64 = ctx.r9.u64 & ~ctx.r7.u64;
	// twllei r9,0
	if (ctx.r9.u32 <= 0) __builtin_debugtrap();
	// subf r29,r6,r11
	ctx.r29.s64 = ctx.r11.s64 - ctx.r6.s64;
	// twlgei r5,-1
	if (ctx.r5.u32 >= 4294967295) __builtin_debugtrap();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8241b234
	if (!ctx.cr6.eq) goto loc_8241B234;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,10
	ctx.r11.s64 = ctx.r11.s64 + 10;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r4,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r4.s64 = temp.s64;
	// bl 0x8241aef0
	ctx.lr = 0x8241B220;
	sub_8241AEF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt cr6,0x8241b234
	if (ctx.cr6.gt) goto loc_8241B234;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8241B234:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwzx r7,r8,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stwx r11,r6,r10
	PPC_STORE_U32(ctx.r6.u32 + ctx.r10.u32, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stw r5,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r5.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8241B278"))) PPC_WEAK_FUNC(sub_8241B278);
PPC_FUNC_IMPL(__imp__sub_8241B278) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// bge cr6,0x8241b288
	if (!ctx.cr6.lt) goto loc_8241B288;
	// neg r11,r4
	ctx.r11.s64 = -ctx.r4.s64;
loc_8241B288:
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// divw r7,r11,r9
	ctx.r7.s32 = ctx.r11.s32 / ctx.r9.s32;
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// mullw r5,r7,r9
	ctx.r5.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// subf r3,r5,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r5.s64;
	// andc r11,r9,r6
	ctx.r11.u64 = ctx.r9.u64 & ~ctx.r6.u64;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// twlgei r11,-1
	if (ctx.r11.u32 >= 4294967295) __builtin_debugtrap();
	// twllei r9,0
	if (ctx.r9.u32 <= 0) __builtin_debugtrap();
	// lwzx r11,r10,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8241b2d8
	if (ctx.cr6.eq) goto loc_8241B2D8;
loc_8241B2C0:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpw cr6,r9,r4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x8241b2e0
	if (ctx.cr6.eq) goto loc_8241B2E0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8241b2c0
	if (!ctx.cr6.eq) goto loc_8241B2C0;
loc_8241B2D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8241B2E0:
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8241B2E8"))) PPC_WEAK_FUNC(sub_8241B2E8);
PPC_FUNC_IMPL(__imp__sub_8241B2E8) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// bge cr6,0x8241b2f8
	if (!ctx.cr6.lt) goto loc_8241B2F8;
	// neg r11,r4
	ctx.r11.s64 = -ctx.r4.s64;
loc_8241B2F8:
	// lwz r8,16(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rotlwi r9,r11,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// divw r7,r11,r8
	ctx.r7.s32 = ctx.r11.s32 / ctx.r8.s32;
	// addi r6,r9,-1
	ctx.r6.s64 = ctx.r9.s64 + -1;
	// mullw r5,r7,r8
	ctx.r5.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// subf r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
	// andc r9,r8,r6
	ctx.r9.u64 = ctx.r8.u64 & ~ctx.r6.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// twllei r8,0
	if (ctx.r8.u32 <= 0) __builtin_debugtrap();
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// twlgei r9,-1
	if (ctx.r9.u32 >= 4294967295) __builtin_debugtrap();
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8241b354
	if (ctx.cr6.eq) goto loc_8241B354;
loc_8241B334:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmpw cr6,r8,r4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x8241b35c
	if (ctx.cr6.eq) goto loc_8241B35C;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8241b334
	if (!ctx.cr6.eq) goto loc_8241B334;
loc_8241B354:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8241B35C:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// lwz r6,12(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8241b378
	if (!ctx.cr6.eq) goto loc_8241B378;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r5,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
loc_8241B378:
	// lwz r4,28(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8241B398"))) PPC_WEAK_FUNC(sub_8241B398);
PPC_FUNC_IMPL(__imp__sub_8241B398) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8241B3A8"))) PPC_WEAK_FUNC(sub_8241B3A8);
PPC_FUNC_IMPL(__imp__sub_8241B3A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8241b420
	if (!ctx.cr6.eq) goto loc_8241B420;
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8241b3f4
	if (!ctx.cr6.lt) goto loc_8241B3F4;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
loc_8241B3C8:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8241b3f4
	if (!ctx.cr6.eq) goto loc_8241B3F4;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// rotlwi r5,r6,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8241b3c8
	if (ctx.cr6.lt) goto loc_8241B3C8;
loc_8241B3F4:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8241b408
	if (ctx.cr6.lt) goto loc_8241B408;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8241B408:
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// lwzx r7,r9,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
loc_8241B420:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r6,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r6.u32);
	// beq cr6,0x8241b43c
	if (ctx.cr6.eq) goto loc_8241B43C;
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r5,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r5.u32);
loc_8241B43C:
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8241B444"))) PPC_WEAK_FUNC(sub_8241B444);
PPC_FUNC_IMPL(__imp__sub_8241B444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241B448"))) PPC_WEAK_FUNC(sub_8241B448);
PPC_FUNC_IMPL(__imp__sub_8241B448) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x8241B450;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// bge cr6,0x8241b468
	if (!ctx.cr6.lt) goto loc_8241B468;
	// li r29,1
	ctx.r29.s64 = 1;
loc_8241B468:
	// cmpwi cr6,r30,16
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 16, ctx.xer);
	// bge cr6,0x8241b474
	if (!ctx.cr6.lt) goto loc_8241B474;
	// li r30,16
	ctx.r30.s64 = 16;
loc_8241B474:
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x823665a0
	ctx.lr = 0x8241B47C;
	sub_823665A0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,9
	ctx.r9.s64 = 9;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8241B490:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8241b490
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8241B490;
	// rlwinm r3,r30,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// bl 0x823665a0
	ctx.lr = 0x8241B4A8;
	sub_823665A0(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8259d300
	ctx.lr = 0x8241B4BC;
	sub_8259D300(ctx, base);
	// lis r11,-32192
	ctx.r11.s64 = -2109734912;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r10,r11,26096
	ctx.r10.s64 = ctx.r11.s64 + 26096;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// ble cr6,0x8241b4e0
	if (!ctx.cr6.gt) goto loc_8241B4E0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8241aef0
	ctx.lr = 0x8241B4DC;
	sub_8241AEF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8241B4E0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8241B4E8"))) PPC_WEAK_FUNC(sub_8241B4E8);
PPC_FUNC_IMPL(__imp__sub_8241B4E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x8241B4F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// stw r4,6120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6120, ctx.r4.u32);
	// bl 0x824150b0
	ctx.lr = 0x8241B510;
	sub_824150B0(ctx, base);
	// addi r30,r31,6128
	ctx.r30.s64 = ctx.r31.s64 + 6128;
	// li r5,36
	ctx.r5.s64 = 36;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259d2a0
	ctx.lr = 0x8241B524;
	sub_8259D2A0(ctx, base);
	// lis r6,28015
	ctx.r6.s64 = 1835991040;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// stw r28,6124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6124, ctx.r28.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r6,r6,30309
	ctx.r6.u64 = ctx.r6.u64 | 30309;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8240e260
	ctx.lr = 0x8241B548;
	sub_8240E260(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82414c28
	ctx.lr = 0x8241B554;
	sub_82414C28(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82414c28
	ctx.lr = 0x8241B560;
	sub_82414C28(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8241B568"))) PPC_WEAK_FUNC(sub_8241B568);
PPC_FUNC_IMPL(__imp__sub_8241B568) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x8241B570;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x82414d38
	ctx.lr = 0x8241B584;
	sub_82414D38(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8241b6e0
	if (ctx.cr6.eq) goto loc_8241B6E0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,27600
	ctx.r4.s64 = ctx.r11.s64 + 27600;
	// bl 0x82403840
	ctx.lr = 0x8241B5A0;
	sub_82403840(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x82403c00
	ctx.lr = 0x8241B5A8;
	sub_82403C00(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x8241b6e0
	if (ctx.cr6.lt) goto loc_8241B6E0;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82414d08
	ctx.lr = 0x8241B5C0;
	sub_82414D08(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r11,-21136
	ctx.r4.s64 = ctx.r11.s64 + -21136;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82403840
	ctx.lr = 0x8241B5D4;
	sub_82403840(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8241b690
	if (ctx.cr6.eq) goto loc_8241B690;
	// li r3,1652
	ctx.r3.s64 = 1652;
	// bl 0x823665a0
	ctx.lr = 0x8241B5E4;
	sub_823665A0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82411a58
	ctx.lr = 0x8241B5F0;
	sub_82411A58(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8241b278
	ctx.lr = 0x8241B5FC;
	sub_8241B278(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8241b65c
	if (ctx.cr6.eq) goto loc_8241B65C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82410e90
	ctx.lr = 0x8241B614;
	sub_82410E90(ctx, base);
	// li r5,1652
	ctx.r5.s64 = 1652;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8259d3a0
	ctx.lr = 0x8241B624;
	sub_8259D3A0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82410e10
	ctx.lr = 0x8241B634;
	sub_82410E10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82366600
	ctx.lr = 0x8241B63C;
	sub_82366600(ctx, base);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82414f78
	ctx.lr = 0x8241B654;
	sub_82414F78(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_8241B65C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82410d60
	ctx.lr = 0x8241B664;
	sub_82410D60(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8241b1a8
	ctx.lr = 0x8241B674;
	sub_8241B1A8(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82414f78
	ctx.lr = 0x8241B688;
	sub_82414F78(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_8241B690:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8241b278
	ctx.lr = 0x8241B69C;
	sub_8241B278(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8241b6e0
	if (ctx.cr6.eq) goto loc_8241B6E0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8241b2e8
	ctx.lr = 0x8241B6B4;
	sub_8241B2E8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82410f50
	ctx.lr = 0x8241B6C0;
	sub_82410F50(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82414f78
	ctx.lr = 0x8241B6D8;
	sub_82414F78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82366600
	ctx.lr = 0x8241B6E0;
	sub_82366600(ctx, base);
loc_8241B6E0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8241B6E8"))) PPC_WEAK_FUNC(sub_8241B6E8);
PPC_FUNC_IMPL(__imp__sub_8241B6E8) {
	PPC_FUNC_PROLOGUE();
	// lis r6,25205
	ctx.r6.s64 = 1651834880;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// ori r6,r6,25700
	ctx.r6.u64 = ctx.r6.u64 | 25700;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8240e260
	sub_8240E260(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8241B704"))) PPC_WEAK_FUNC(sub_8241B704);
PPC_FUNC_IMPL(__imp__sub_8241B704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241B708"))) PPC_WEAK_FUNC(sub_8241B708);
PPC_FUNC_IMPL(__imp__sub_8241B708) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x8241B710;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x82414d38
	ctx.lr = 0x8241B724;
	sub_82414D38(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8241b878
	if (ctx.cr6.eq) goto loc_8241B878;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82414d08
	ctx.lr = 0x8241B73C;
	sub_82414D08(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r11,-21136
	ctx.r4.s64 = ctx.r11.s64 + -21136;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82403840
	ctx.lr = 0x8241B750;
	sub_82403840(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8241b80c
	if (ctx.cr6.eq) goto loc_8241B80C;
	// li r3,1652
	ctx.r3.s64 = 1652;
	// bl 0x823665a0
	ctx.lr = 0x8241B760;
	sub_823665A0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82411a58
	ctx.lr = 0x8241B76C;
	sub_82411A58(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8241b278
	ctx.lr = 0x8241B778;
	sub_8241B278(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8241b7d8
	if (ctx.cr6.eq) goto loc_8241B7D8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82410e90
	ctx.lr = 0x8241B790;
	sub_82410E90(ctx, base);
	// li r5,1652
	ctx.r5.s64 = 1652;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8259d3a0
	ctx.lr = 0x8241B7A0;
	sub_8259D3A0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82410e10
	ctx.lr = 0x8241B7B0;
	sub_82410E10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82366600
	ctx.lr = 0x8241B7B8;
	sub_82366600(ctx, base);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82414f78
	ctx.lr = 0x8241B7D0;
	sub_82414F78(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_8241B7D8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82410d60
	ctx.lr = 0x8241B7E0;
	sub_82410D60(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8241b1a8
	ctx.lr = 0x8241B7F0;
	sub_8241B1A8(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82414f78
	ctx.lr = 0x8241B804;
	sub_82414F78(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_8241B80C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,27600
	ctx.r4.s64 = ctx.r11.s64 + 27600;
	// bl 0x82403840
	ctx.lr = 0x8241B81C;
	sub_82403840(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x82403c00
	ctx.lr = 0x8241B824;
	sub_82403C00(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8241b278
	ctx.lr = 0x8241B834;
	sub_8241B278(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8241b878
	if (ctx.cr6.eq) goto loc_8241B878;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241b2e8
	ctx.lr = 0x8241B84C;
	sub_8241B2E8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82410f50
	ctx.lr = 0x8241B858;
	sub_82410F50(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82414f78
	ctx.lr = 0x8241B870;
	sub_82414F78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82366600
	ctx.lr = 0x8241B878;
	sub_82366600(ctx, base);
loc_8241B878:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8241B880"))) PPC_WEAK_FUNC(sub_8241B880);
PPC_FUNC_IMPL(__imp__sub_8241B880) {
	PPC_FUNC_PROLOGUE();
	// lis r6,27503
	ctx.r6.s64 = 1802436608;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// ori r6,r6,29800
	ctx.r6.u64 = ctx.r6.u64 | 29800;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8240e260
	sub_8240E260(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8241B89C"))) PPC_WEAK_FUNC(sub_8241B89C);
PPC_FUNC_IMPL(__imp__sub_8241B89C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241B8A0"))) PPC_WEAK_FUNC(sub_8241B8A0);
PPC_FUNC_IMPL(__imp__sub_8241B8A0) {
	PPC_FUNC_PROLOGUE();
	// lis r6,26465
	ctx.r6.s64 = 1734410240;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// ori r6,r6,28005
	ctx.r6.u64 = ctx.r6.u64 | 28005;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8240e260
	sub_8240E260(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8241B8BC"))) PPC_WEAK_FUNC(sub_8241B8BC);
PPC_FUNC_IMPL(__imp__sub_8241B8BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241B8C0"))) PPC_WEAK_FUNC(sub_8241B8C0);
PPC_FUNC_IMPL(__imp__sub_8241B8C0) {
	PPC_FUNC_PROLOGUE();
	// lis r6,28012
	ctx.r6.s64 = 1835794432;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// ori r6,r6,28519
	ctx.r6.u64 = ctx.r6.u64 | 28519;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8240e260
	sub_8240E260(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8241B8DC"))) PPC_WEAK_FUNC(sub_8241B8DC);
PPC_FUNC_IMPL(__imp__sub_8241B8DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241B8E0"))) PPC_WEAK_FUNC(sub_8241B8E0);
PPC_FUNC_IMPL(__imp__sub_8241B8E0) {
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
	// stw r5,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r5.u32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r11,10856
	ctx.r4.s64 = ctx.r11.s64 + 10856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82403840
	ctx.lr = 0x8241B910;
	sub_82403840(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82403d78
	ctx.lr = 0x8241B918;
	sub_82403D78(ctx, base);
	// lis r6,25448
	ctx.r6.s64 = 1667760128;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// ori r6,r6,24948
	ctx.r6.u64 = ctx.r6.u64 | 24948;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8240e260
	ctx.lr = 0x8241B938;
	sub_8240E260(ctx, base);
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

__attribute__((alias("__imp__sub_8241B950"))) PPC_WEAK_FUNC(sub_8241B950);
PPC_FUNC_IMPL(__imp__sub_8241B950) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x8241B958;
	__savegprlr_29(ctx, base);
	// stwu r1,-1264(r1)
	ea = -1264 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82414d38
	ctx.lr = 0x8241B96C;
	sub_82414D38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8241baf8
	if (ctx.cr6.eq) goto loc_8241BAF8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,13364
	ctx.r4.s64 = ctx.r11.s64 + 13364;
	// bl 0x82403840
	ctx.lr = 0x8241B984;
	sub_82403840(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,768
	ctx.r5.s64 = 768;
	// addi r31,r11,3672
	ctx.r31.s64 = ctx.r11.s64 + 3672;
	// addi r4,r1,464
	ctx.r4.s64 = ctx.r1.s64 + 464;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x82404528
	ctx.lr = 0x8241B99C;
	sub_82404528(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,10880
	ctx.r4.s64 = ctx.r11.s64 + 10880;
	// bl 0x82403840
	ctx.lr = 0x8241B9AC;
	sub_82403840(ctx, base);
	// li r5,384
	ctx.r5.s64 = 384;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82404528
	ctx.lr = 0x8241B9BC;
	sub_82404528(ctx, base);
	// lbz r11,464(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 464);
	// addi r31,r1,464
	ctx.r31.s64 = ctx.r1.s64 + 464;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8241baf8
	if (ctx.cr6.eq) goto loc_8241BAF8;
loc_8241B9D0:
	// lbz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// extsb r11,r9
	ctx.r11.s64 = ctx.r9.s8;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// blt cr6,0x8241baf8
	if (ctx.cr6.lt) goto loc_8241BAF8;
loc_8241B9E4:
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// bgt cr6,0x8241ba14
	if (ctx.cr6.gt) goto loc_8241BA14;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// add r7,r4,r9
	ctx.r7.u64 = ctx.r4.u64 + ctx.r9.u64;
	// lbz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// rlwinm r9,r7,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// bge cr6,0x8241b9e4
	if (!ctx.cr6.lt) goto loc_8241B9E4;
loc_8241BA14:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8241baf8
	if (ctx.cr6.eq) goto loc_8241BAF8;
	// lbz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8241ba2c
	if (ctx.cr6.eq) goto loc_8241BA2C;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_8241BA2C:
	// lbz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// blt cr6,0x8241ba70
	if (ctx.cr6.lt) goto loc_8241BA70;
loc_8241BA40:
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// bgt cr6,0x8241ba70
	if (ctx.cr6.gt) goto loc_8241BA70;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// add r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 + ctx.r9.u64;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// bge cr6,0x8241ba40
	if (!ctx.cr6.lt) goto loc_8241BA40;
loc_8241BA70:
	// lbz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8241ba80
	if (ctx.cr6.eq) goto loc_8241BA80;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_8241BA80:
	// lbz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// extsb r11,r7
	ctx.r11.s64 = ctx.r7.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8241bad4
	if (ctx.cr6.eq) goto loc_8241BAD4;
loc_8241BA94:
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// blt cr6,0x8241bad4
	if (ctx.cr6.lt) goto loc_8241BAD4;
	// lbz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r10,r3
	ctx.r10.s64 = ctx.r3.s8;
	// cmpwi cr6,r10,57
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 57, ctx.xer);
	// bgt cr6,0x8241bad4
	if (ctx.cr6.gt) goto loc_8241BAD4;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// lbz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// extsb r11,r9
	ctx.r11.s64 = ctx.r9.s8;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r8,r6,r9
	ctx.r8.u64 = ctx.r6.u64 + ctx.r9.u64;
	// rlwinm r9,r8,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// bne cr6,0x8241ba94
	if (!ctx.cr6.eq) goto loc_8241BA94;
loc_8241BAD4:
	// lbz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8241bae4
	if (ctx.cr6.eq) goto loc_8241BAE4;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_8241BAE4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824150b0
	ctx.lr = 0x8241BAEC;
	sub_824150B0(ctx, base);
	// lbz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8241b9d0
	if (!ctx.cr6.eq) goto loc_8241B9D0;
loc_8241BAF8:
	// addi r1,r1,1264
	ctx.r1.s64 = ctx.r1.s64 + 1264;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8241BB00"))) PPC_WEAK_FUNC(sub_8241BB00);
PPC_FUNC_IMPL(__imp__sub_8241BB00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x8241BB08;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82414d38
	ctx.lr = 0x8241BB1C;
	sub_82414D38(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8241bd08
	if (ctx.cr6.eq) goto loc_8241BD08;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82414d08
	ctx.lr = 0x8241BB34;
	sub_82414D08(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r4,r11,31620
	ctx.r4.s64 = ctx.r11.s64 + 31620;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82403840
	ctx.lr = 0x8241BB48;
	sub_82403840(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8241bc4c
	if (ctx.cr6.eq) goto loc_8241BC4C;
	// li r3,292
	ctx.r3.s64 = 292;
	// bl 0x823665a0
	ctx.lr = 0x8241BB58;
	sub_823665A0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82412078
	ctx.lr = 0x8241BB64;
	sub_82412078(ctx, base);
	// addi r5,r31,32
	ctx.r5.s64 = ctx.r31.s64 + 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82414eb0
	ctx.lr = 0x8241BB74;
	sub_82414EB0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8241bbf8
	if (ctx.cr6.eq) goto loc_8241BBF8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82410e90
	ctx.lr = 0x8241BB8C;
	sub_82410E90(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8241bba8
	if (!ctx.cr6.eq) goto loc_8241BBA8;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8241bd00
	if (!ctx.cr6.eq) goto loc_8241BD00;
loc_8241BBA8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x8241b2e8
	ctx.lr = 0x8241BBB4;
	sub_8241B2E8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82366600
	ctx.lr = 0x8241BBBC;
	sub_82366600(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82410e10
	ctx.lr = 0x8241BBCC;
	sub_82410E10(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8241b1a8
	ctx.lr = 0x8241BBDC;
	sub_8241B1A8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82414f78
	ctx.lr = 0x8241BBF0;
	sub_82414F78(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_8241BBF8:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8241bc14
	if (!ctx.cr6.eq) goto loc_8241BC14;
	// lwz r11,7484(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 7484);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,7484(r29)
	PPC_STORE_U32(ctx.r29.u32 + 7484, ctx.r11.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8241BC14:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82410d60
	ctx.lr = 0x8241BC20;
	sub_82410D60(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8241b1a8
	ctx.lr = 0x8241BC30;
	sub_8241B1A8(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82414f78
	ctx.lr = 0x8241BC44;
	sub_82414F78(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_8241BC4C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,27408
	ctx.r4.s64 = ctx.r11.s64 + 27408;
	// bl 0x82403840
	ctx.lr = 0x8241BC5C;
	sub_82403840(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x82403c00
	ctx.lr = 0x8241BC64;
	sub_82403C00(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x8241bd08
	if (ctx.cr6.eq) goto loc_8241BD08;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8241b278
	ctx.lr = 0x8241BC7C;
	sub_8241B278(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8241bd08
	if (ctx.cr6.eq) goto loc_8241BD08;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82410e90
	ctx.lr = 0x8241BC94;
	sub_82410E90(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r8,8(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// rlwinm r7,r8,0,30,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8241bcd8
	if (ctx.cr6.eq) goto loc_8241BCD8;
	// bl 0x8241b2e8
	ctx.lr = 0x8241BCB4;
	sub_8241B2E8(ctx, base);
	// lwz r11,7484(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 7484);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r4,7484(r29)
	PPC_STORE_U32(ctx.r29.u32 + 7484, ctx.r4.u32);
	// stw r4,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r4.u32);
	// bl 0x8241b1a8
	ctx.lr = 0x8241BCD0;
	sub_8241B1A8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_8241BCD8:
	// bl 0x8241b2e8
	ctx.lr = 0x8241BCDC;
	sub_8241B2E8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82410f50
	ctx.lr = 0x8241BCE8;
	sub_82410F50(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82414f78
	ctx.lr = 0x8241BD00;
	sub_82414F78(ctx, base);
loc_8241BD00:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82366600
	ctx.lr = 0x8241BD08;
	sub_82366600(ctx, base);
loc_8241BD08:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8241BD10"))) PPC_WEAK_FUNC(sub_8241BD10);
PPC_FUNC_IMPL(__imp__sub_8241BD10) {
	PPC_FUNC_PROLOGUE();
	// lis r6,28780
	ctx.r6.s64 = 1886126080;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// ori r6,r6,24953
	ctx.r6.u64 = ctx.r6.u64 | 24953;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8240e260
	sub_8240E260(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8241BD2C"))) PPC_WEAK_FUNC(sub_8241BD2C);
PPC_FUNC_IMPL(__imp__sub_8241BD2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241BD30"))) PPC_WEAK_FUNC(sub_8241BD30);
PPC_FUNC_IMPL(__imp__sub_8241BD30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x8241BD38;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,6296(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6296);
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// blt cr6,0x8241be30
	if (ctx.cr6.lt) goto loc_8241BE30;
	// cmpwi cr6,r4,8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 8, ctx.xer);
	// bgt cr6,0x8241be30
	if (ctx.cr6.gt) goto loc_8241BE30;
	// bl 0x82414d38
	ctx.lr = 0x8241BD5C;
	sub_82414D38(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8241be30
	if (ctx.cr6.eq) goto loc_8241BE30;
	// li r3,160
	ctx.r3.s64 = 160;
	// bl 0x823665a0
	ctx.lr = 0x8241BD70;
	sub_823665A0(ctx, base);
	// addi r5,r26,5548
	ctx.r5.s64 = ctx.r26.s64 + 5548;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82411f58
	ctx.lr = 0x8241BD80;
	sub_82411F58(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r4,6296(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6296);
	// bl 0x82414d08
	ctx.lr = 0x8241BD8C;
	sub_82414D08(ctx, base);
	// addi r28,r31,12
	ctx.r28.s64 = ctx.r31.s64 + 12;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8241b138
	ctx.lr = 0x8241BDA0;
	sub_8241B138(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8241bdd0
	if (!ctx.cr6.eq) goto loc_8241BDD0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82410d60
	ctx.lr = 0x8241BDB8;
	sub_82410D60(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8241b090
	ctx.lr = 0x8241BDC8;
	sub_8241B090(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x8241be20
	goto loc_8241BE20;
loc_8241BDD0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82410e90
	ctx.lr = 0x8241BDD8;
	sub_82410E90(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// li r9,40
	ctx.r9.s64 = 40;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8241BDEC:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8241bdec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8241BDEC;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82410e10
	ctx.lr = 0x8241BE10;
	sub_82410E10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82366600
	ctx.lr = 0x8241BE18;
	sub_82366600(ctx, base);
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// li r6,0
	ctx.r6.s64 = 0;
loc_8241BE20:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,6296(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6296);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82414f78
	ctx.lr = 0x8241BE30;
	sub_82414F78(ctx, base);
loc_8241BE30:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8241BE38"))) PPC_WEAK_FUNC(sub_8241BE38);
PPC_FUNC_IMPL(__imp__sub_8241BE38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x8241BE40;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r31,r29,8348
	ctx.r31.s64 = ctx.r29.s64 + 8348;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,13388
	ctx.r4.s64 = ctx.r11.s64 + 13388;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// bl 0x82403840
	ctx.lr = 0x8241BE6C;
	sub_82403840(ctx, base);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82403c00
	ctx.lr = 0x8241BE74;
	sub_82403C00(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,13384
	ctx.r4.s64 = ctx.r11.s64 + 13384;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// bl 0x82403840
	ctx.lr = 0x8241BE8C;
	sub_82403840(ctx, base);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82403c00
	ctx.lr = 0x8241BE94;
	sub_82403C00(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,13380
	ctx.r4.s64 = ctx.r11.s64 + 13380;
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// bl 0x82403840
	ctx.lr = 0x8241BEAC;
	sub_82403840(ctx, base);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82403c00
	ctx.lr = 0x8241BEB4;
	sub_82403C00(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,13376
	ctx.r4.s64 = ctx.r11.s64 + 13376;
	// stw r7,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
	// bl 0x82403840
	ctx.lr = 0x8241BECC;
	sub_82403840(ctx, base);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82403c00
	ctx.lr = 0x8241BED4;
	sub_82403C00(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,13372
	ctx.r4.s64 = ctx.r11.s64 + 13372;
	// stw r6,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r6.u32);
	// bl 0x82403840
	ctx.lr = 0x8241BEEC;
	sub_82403840(ctx, base);
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82403c00
	ctx.lr = 0x8241BEF4;
	sub_82403C00(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,13368
	ctx.r4.s64 = ctx.r11.s64 + 13368;
	// stw r5,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r5.u32);
	// bl 0x82403840
	ctx.lr = 0x8241BF0C;
	sub_82403840(ctx, base);
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82403c00
	ctx.lr = 0x8241BF14;
	sub_82403C00(ctx, base);
	// lis r6,29556
	ctx.r6.s64 = 1936982016;
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// ori r6,r6,24948
	ctx.r6.u64 = ctx.r6.u64 | 24948;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8240e260
	ctx.lr = 0x8241BF38;
	sub_8240E260(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8241BF40"))) PPC_WEAK_FUNC(sub_8241BF40);
PPC_FUNC_IMPL(__imp__sub_8241BF40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baec
	ctx.lr = 0x8241BF48;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r4,r11,10680
	ctx.r4.s64 = ctx.r11.s64 + 10680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82403840
	ctx.lr = 0x8241BF64;
	sub_82403840(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x82403c00
	ctx.lr = 0x8241BF6C;
	sub_82403C00(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8241c0fc
	if (ctx.cr6.lt) goto loc_8241C0FC;
	// addi r26,r3,10
	ctx.r26.s64 = ctx.r3.s64 + 10;
	// addi r11,r26,-10
	ctx.r11.s64 = ctx.r26.s64 + -10;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x8241c0fc
	if (ctx.cr6.gt) goto loc_8241C0FC;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82414d38
	ctx.lr = 0x8241BF90;
	sub_82414D38(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8241c0fc
	if (ctx.cr6.eq) goto loc_8241C0FC;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82414d08
	ctx.lr = 0x8241BFA8;
	sub_82414D08(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r4,r11,31620
	ctx.r4.s64 = ctx.r11.s64 + 31620;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82403840
	ctx.lr = 0x8241BFBC;
	sub_82403840(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8241c090
	if (ctx.cr6.eq) goto loc_8241C090;
	// li r3,160
	ctx.r3.s64 = 160;
	// bl 0x823665a0
	ctx.lr = 0x8241BFCC;
	sub_823665A0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x824122f8
	ctx.lr = 0x8241BFD8;
	sub_824122F8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8241b278
	ctx.lr = 0x8241BFE4;
	sub_8241B278(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8241c05c
	if (ctx.cr6.eq) goto loc_8241C05C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82410e90
	ctx.lr = 0x8241BFFC;
	sub_82410E90(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// li r9,40
	ctx.r9.s64 = 40;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8241C010:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8241c010
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8241C010;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82410e10
	ctx.lr = 0x8241C034;
	sub_82410E10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82366600
	ctx.lr = 0x8241C03C;
	sub_82366600(ctx, base);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82414f78
	ctx.lr = 0x8241C054;
	sub_82414F78(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
loc_8241C05C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82410d60
	ctx.lr = 0x8241C064;
	sub_82410D60(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8241b1a8
	ctx.lr = 0x8241C074;
	sub_8241B1A8(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82414f78
	ctx.lr = 0x8241C088;
	sub_82414F78(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
loc_8241C090:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,27408
	ctx.r4.s64 = ctx.r11.s64 + 27408;
	// bl 0x82403840
	ctx.lr = 0x8241C0A0;
	sub_82403840(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82403c00
	ctx.lr = 0x8241C0A8;
	sub_82403C00(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8241b278
	ctx.lr = 0x8241C0B8;
	sub_8241B278(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8241c0fc
	if (ctx.cr6.eq) goto loc_8241C0FC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8241b2e8
	ctx.lr = 0x8241C0D0;
	sub_8241B2E8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82410f50
	ctx.lr = 0x8241C0DC;
	sub_82410F50(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82414f78
	ctx.lr = 0x8241C0F4;
	sub_82414F78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82366600
	ctx.lr = 0x8241C0FC;
	sub_82366600(ctx, base);
loc_8241C0FC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8241C104"))) PPC_WEAK_FUNC(sub_8241C104);
PPC_FUNC_IMPL(__imp__sub_8241C104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241C108"))) PPC_WEAK_FUNC(sub_8241C108);
PPC_FUNC_IMPL(__imp__sub_8241C108) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x8241C110;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82414d38
	ctx.lr = 0x8241C124;
	sub_82414D38(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8241c2d4
	if (ctx.cr6.eq) goto loc_8241C2D4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r4,r11,27408
	ctx.r4.s64 = ctx.r11.s64 + 27408;
	// bl 0x82403840
	ctx.lr = 0x8241C140;
	sub_82403840(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x82403c00
	ctx.lr = 0x8241C148;
	sub_82403C00(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x8241c2d4
	if (ctx.cr6.lt) goto loc_8241C2D4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82414d08
	ctx.lr = 0x8241C160;
	sub_82414D08(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r11,31620
	ctx.r4.s64 = ctx.r11.s64 + 31620;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82403840
	ctx.lr = 0x8241C174;
	sub_82403840(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8241c23c
	if (ctx.cr6.eq) goto loc_8241C23C;
	// li r3,580
	ctx.r3.s64 = 580;
	// bl 0x823665a0
	ctx.lr = 0x8241C184;
	sub_823665A0(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82412470
	ctx.lr = 0x8241C190;
	sub_82412470(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8241b278
	ctx.lr = 0x8241C19C;
	sub_8241B278(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8241c1e8
	if (ctx.cr6.eq) goto loc_8241C1E8;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82410e90
	ctx.lr = 0x8241C1B4;
	sub_82410E90(ctx, base);
	// li r5,580
	ctx.r5.s64 = 580;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8259d3a0
	ctx.lr = 0x8241C1C4;
	sub_8259D3A0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82410e10
	ctx.lr = 0x8241C1D4;
	sub_82410E10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82366600
	ctx.lr = 0x8241C1DC;
	sub_82366600(ctx, base);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x8241c204
	goto loc_8241C204;
loc_8241C1E8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82410d60
	ctx.lr = 0x8241C1F0;
	sub_82410D60(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8241b1a8
	ctx.lr = 0x8241C200;
	sub_8241B1A8(ctx, base);
	// li r29,1
	ctx.r29.s64 = 1;
loc_8241C204:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r11,0,10,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8241c224
	if (ctx.cr6.eq) goto loc_8241C224;
	// addi r3,r30,5540
	ctx.r3.s64 = ctx.r30.s64 + 5540;
	// li r5,580
	ctx.r5.s64 = 580;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8259d3a0
	ctx.lr = 0x8241C224;
	sub_8259D3A0(ctx, base);
loc_8241C224:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82414f78
	ctx.lr = 0x8241C238;
	sub_82414F78(ctx, base);
	// b 0x8241c28c
	goto loc_8241C28C;
loc_8241C23C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8241b278
	ctx.lr = 0x8241C248;
	sub_8241B278(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8241c28c
	if (ctx.cr6.eq) goto loc_8241C28C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8241b2e8
	ctx.lr = 0x8241C260;
	sub_8241B2E8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82410f50
	ctx.lr = 0x8241C26C;
	sub_82410F50(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82414f78
	ctx.lr = 0x8241C284;
	sub_82414F78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82366600
	ctx.lr = 0x8241C28C;
	sub_82366600(ctx, base);
loc_8241C28C:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r4,r11,13392
	ctx.r4.s64 = ctx.r11.s64 + 13392;
	// bl 0x82403840
	ctx.lr = 0x8241C29C;
	sub_82403840(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x82403c00
	ctx.lr = 0x8241C2A4;
	sub_82403C00(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,27300
	ctx.r4.s64 = ctx.r11.s64 + 27300;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82403840
	ctx.lr = 0x8241C2B8;
	sub_82403840(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82403c00
	ctx.lr = 0x8241C2C0;
	sub_82403C00(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r4,6120(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6120);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824150b0
	ctx.lr = 0x8241C2D4;
	sub_824150B0(ctx, base);
loc_8241C2D4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8241C2DC"))) PPC_WEAK_FUNC(sub_8241C2DC);
PPC_FUNC_IMPL(__imp__sub_8241C2DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241C2E0"))) PPC_WEAK_FUNC(sub_8241C2E0);
PPC_FUNC_IMPL(__imp__sub_8241C2E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x8241C2E8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x82414d38
	ctx.lr = 0x8241C2FC;
	sub_82414D38(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8241c3b4
	if (ctx.cr6.eq) goto loc_8241C3B4;
	// li r3,212
	ctx.r3.s64 = 212;
	// bl 0x823665a0
	ctx.lr = 0x8241C310;
	sub_823665A0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x824118f0
	ctx.lr = 0x8241C31C;
	sub_824118F0(ctx, base);
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82414d08
	ctx.lr = 0x8241C328;
	sub_82414D08(ctx, base);
	// addi r28,r31,40
	ctx.r28.s64 = ctx.r31.s64 + 40;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8241b138
	ctx.lr = 0x8241C33C;
	sub_8241B138(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8241c36c
	if (!ctx.cr6.eq) goto loc_8241C36C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82410d60
	ctx.lr = 0x8241C354;
	sub_82410D60(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8241b090
	ctx.lr = 0x8241C364;
	sub_8241B090(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x8241c3a4
	goto loc_8241C3A4;
loc_8241C36C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82410e90
	ctx.lr = 0x8241C374;
	sub_82410E90(ctx, base);
	// li r5,212
	ctx.r5.s64 = 212;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8259d3a0
	ctx.lr = 0x8241C384;
	sub_8259D3A0(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82410e10
	ctx.lr = 0x8241C394;
	sub_82410E10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82366600
	ctx.lr = 0x8241C39C;
	sub_82366600(ctx, base);
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// li r6,0
	ctx.r6.s64 = 0;
loc_8241C3A4:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82414f78
	ctx.lr = 0x8241C3B4;
	sub_82414F78(ctx, base);
loc_8241C3B4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8241C3BC"))) PPC_WEAK_FUNC(sub_8241C3BC);
PPC_FUNC_IMPL(__imp__sub_8241C3BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241C3C0"))) PPC_WEAK_FUNC(sub_8241C3C0);
PPC_FUNC_IMPL(__imp__sub_8241C3C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x8241C3C8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,27408
	ctx.r4.s64 = ctx.r11.s64 + 27408;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82403840
	ctx.lr = 0x8241C3E8;
	sub_82403840(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82403c00
	ctx.lr = 0x8241C3F0;
	sub_82403C00(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r11,31620
	ctx.r4.s64 = ctx.r11.s64 + 31620;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82403840
	ctx.lr = 0x8241C404;
	sub_82403840(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r31,7500
	ctx.r10.s64 = ctx.r31.s64 + 7500;
	// beq cr6,0x8241c468
	if (ctx.cr6.eq) goto loc_8241C468;
	// li r8,-1
	ctx.r8.s64 = -1;
loc_8241C418:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8241c428
	if (!ctx.cr6.eq) goto loc_8241C428;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_8241C428:
	// cmpw cr6,r9,r29
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r29.s32, ctx.xer);
	// beq cr6,0x8241c444
	if (ctx.cr6.eq) goto loc_8241C444;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,212
	ctx.r10.s64 = ctx.r10.s64 + 212;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x8241c418
	if (ctx.cr6.lt) goto loc_8241C418;
	// b 0x8241c448
	goto loc_8241C448;
loc_8241C444:
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_8241C448:
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// beq cr6,0x8241c4a0
	if (ctx.cr6.eq) goto loc_8241C4A0;
	// mulli r11,r8,212
	ctx.r11.s64 = ctx.r8.s64 * 212;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,7500
	ctx.r3.s64 = ctx.r11.s64 + 7500;
	// bl 0x824118f0
	ctx.lr = 0x8241C464;
	sub_824118F0(ctx, base);
	// b 0x8241c4a0
	goto loc_8241C4A0;
loc_8241C468:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r9,r29
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r29.s32, ctx.xer);
	// beq cr6,0x8241c488
	if (ctx.cr6.eq) goto loc_8241C488;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,212
	ctx.r10.s64 = ctx.r10.s64 + 212;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x8241c468
	if (ctx.cr6.lt) goto loc_8241C468;
	// b 0x8241c4a0
	goto loc_8241C4A0;
loc_8241C488:
	// mulli r11,r11,212
	ctx.r11.s64 = ctx.r11.s64 * 212;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r5,212
	ctx.r5.s64 = 212;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,7500
	ctx.r3.s64 = ctx.r11.s64 + 7500;
	// bl 0x8259d300
	ctx.lr = 0x8241C4A0;
	sub_8259D300(ctx, base);
loc_8241C4A0:
	// lis r6,30067
	ctx.r6.s64 = 1970470912;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// ori r6,r6,25972
	ctx.r6.u64 = ctx.r6.u64 | 25972;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8240e260
	ctx.lr = 0x8241C4C0;
	sub_8240E260(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8241C4C8"))) PPC_WEAK_FUNC(sub_8241C4C8);
PPC_FUNC_IMPL(__imp__sub_8241C4C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae4
	ctx.lr = 0x8241C4D0;
	__savegprlr_23(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r31,5540
	ctx.r3.s64 = ctx.r31.s64 + 5540;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// bl 0x82412470
	ctx.lr = 0x8241C4E8;
	sub_82412470(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,10676
	ctx.r4.s64 = ctx.r11.s64 + 10676;
	// bl 0x82403840
	ctx.lr = 0x8241C4F8;
	sub_82403840(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,36
	ctx.r5.s64 = 36;
	// addi r6,r11,-25004
	ctx.r6.s64 = ctx.r11.s64 + -25004;
	// addi r4,r31,6164
	ctx.r4.s64 = ctx.r31.s64 + 6164;
	// bl 0x82404ef8
	ctx.lr = 0x8241C50C;
	sub_82404EF8(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,13408
	ctx.r4.s64 = ctx.r11.s64 + 13408;
	// bl 0x82403840
	ctx.lr = 0x8241C51C;
	sub_82403840(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82403c00
	ctx.lr = 0x8241C524;
	sub_82403C00(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r11,13404
	ctx.r4.s64 = ctx.r11.s64 + 13404;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82403840
	ctx.lr = 0x8241C538;
	sub_82403840(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82403c00
	ctx.lr = 0x8241C540;
	sub_82403C00(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r4,r11,13392
	ctx.r4.s64 = ctx.r11.s64 + 13392;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82403840
	ctx.lr = 0x8241C554;
	sub_82403840(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x82403c00
	ctx.lr = 0x8241C55C;
	sub_82403C00(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r27,r31,5864
	ctx.r27.s64 = ctx.r31.s64 + 5864;
	// addi r29,r31,7500
	ctx.r29.s64 = ctx.r31.s64 + 7500;
	// li r26,4
	ctx.r26.s64 = 4;
loc_8241C56C:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
loc_8241C578:
	// cmpwi cr6,r6,4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 4, ctx.xer);
	// bge cr6,0x8241c5cc
	if (!ctx.cr6.lt) goto loc_8241C5CC;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// addi r11,r29,40
	ctx.r11.s64 = ctx.r29.s64 + 40;
loc_8241C588:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x8241c5ac
	if (ctx.cr6.eq) goto loc_8241C5AC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8241c588
	if (ctx.cr6.eq) goto loc_8241C588;
loc_8241C5AC:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8241c5b8
	if (!ctx.cr6.eq) goto loc_8241C5B8;
	// li r5,1
	ctx.r5.s64 = 1;
loc_8241C5B8:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,36
	ctx.r7.s64 = ctx.r7.s64 + 36;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8241c578
	if (ctx.cr6.eq) goto loc_8241C578;
	// b 0x8241c5e4
	goto loc_8241C5E4;
loc_8241C5CC:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x8241c5e4
	if (!ctx.cr6.eq) goto loc_8241C5E4;
	// li r5,212
	ctx.r5.s64 = 212;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8259d300
	ctx.lr = 0x8241C5E4;
	sub_8259D300(ctx, base);
loc_8241C5E4:
	// addi r26,r26,-1
	ctx.r26.s64 = ctx.r26.s64 + -1;
	// addi r29,r29,212
	ctx.r29.s64 = ctx.r29.s64 + 212;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x8241c56c
	if (!ctx.cr6.eq) goto loc_8241C56C;
	// lis r6,30067
	ctx.r6.s64 = 1970470912;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// ori r6,r6,25970
	ctx.r6.u64 = ctx.r6.u64 | 25970;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8240e260
	ctx.lr = 0x8241C614;
	sub_8240E260(ctx, base);
	// lwz r7,6120(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6120);
	// cmpw cr6,r28,r7
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r7.s32, ctx.xer);
	// beq cr6,0x8241c6c8
	if (ctx.cr6.eq) goto loc_8241C6C8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,13400
	ctx.r4.s64 = ctx.r11.s64 + 13400;
	// bl 0x82403840
	ctx.lr = 0x8241C630;
	sub_82403840(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,36
	ctx.r5.s64 = 36;
	// addi r6,r11,3672
	ctx.r6.s64 = ctx.r11.s64 + 3672;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82404528
	ctx.lr = 0x8241C644;
	sub_82404528(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,13396
	ctx.r4.s64 = ctx.r11.s64 + 13396;
	// bl 0x82403840
	ctx.lr = 0x8241C654;
	sub_82403840(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82403d78
	ctx.lr = 0x8241C65C;
	sub_82403D78(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// stw r28,6120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6120, ctx.r28.u32);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824150b0
	ctx.lr = 0x8241C678;
	sub_824150B0(ctx, base);
	// addi r30,r31,6128
	ctx.r30.s64 = ctx.r31.s64 + 6128;
	// li r5,36
	ctx.r5.s64 = 36;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259d2a0
	ctx.lr = 0x8241C68C;
	sub_8259D2A0(ctx, base);
	// lis r6,28015
	ctx.r6.s64 = 1835991040;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// stw r29,6124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6124, ctx.r29.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r6,r6,30309
	ctx.r6.u64 = ctx.r6.u64 | 30309;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8240e260
	ctx.lr = 0x8241C6B0;
	sub_8240E260(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82414c28
	ctx.lr = 0x8241C6BC;
	sub_82414C28(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82414c28
	ctx.lr = 0x8241C6C8;
	sub_82414C28(ctx, base);
loc_8241C6C8:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8259bb34
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8241C6D0"))) PPC_WEAK_FUNC(sub_8241C6D0);
PPC_FUNC_IMPL(__imp__sub_8241C6D0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32150
	ctx.r10.s64 = -2106982400;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// addi r10,r10,-12440
	ctx.r10.s64 = ctx.r10.s64 + -12440;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_8241C6EC:
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x8241c70c
	if (ctx.cr6.eq) goto loc_8241C70C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r9,r9,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8241c6ec
	if (!ctx.cr6.eq) goto loc_8241C6EC;
	// blr 
	return;
loc_8241C70C:
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// lwzx r6,r8,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8241C724"))) PPC_WEAK_FUNC(sub_8241C724);
PPC_FUNC_IMPL(__imp__sub_8241C724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241C728"))) PPC_WEAK_FUNC(sub_8241C728);
PPC_FUNC_IMPL(__imp__sub_8241C728) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x8241C730;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r11,13444
	ctx.r4.s64 = ctx.r11.s64 + 13444;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82403840
	ctx.lr = 0x8241C74C;
	sub_82403840(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x82403c00
	ctx.lr = 0x8241C754;
	sub_82403C00(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x8241c7a8
	if (ctx.cr6.lt) goto loc_8241C7A8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,13436
	ctx.r4.s64 = ctx.r11.s64 + 13436;
	// bl 0x82403840
	ctx.lr = 0x8241C770;
	sub_82403840(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x82403c00
	ctx.lr = 0x8241C778;
	sub_82403C00(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r11,13428
	ctx.r4.s64 = ctx.r11.s64 + 13428;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82403840
	ctx.lr = 0x8241C78C;
	sub_82403840(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82403c00
	ctx.lr = 0x8241C794;
	sub_82403C00(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824150b0
	ctx.lr = 0x8241C7A8;
	sub_824150B0(ctx, base);
loc_8241C7A8:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,27600
	ctx.r4.s64 = ctx.r11.s64 + 27600;
	// bl 0x82403840
	ctx.lr = 0x8241C7B8;
	sub_82403840(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82403c00
	ctx.lr = 0x8241C7C0;
	sub_82403C00(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r11,27700
	ctx.r4.s64 = ctx.r11.s64 + 27700;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82403840
	ctx.lr = 0x8241C7D4;
	sub_82403840(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82403c00
	ctx.lr = 0x8241C7DC;
	sub_82403C00(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r11,13420
	ctx.r4.s64 = ctx.r11.s64 + 13420;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82403840
	ctx.lr = 0x8241C7F0;
	sub_82403840(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x82403c00
	ctx.lr = 0x8241C7F8;
	sub_82403C00(ctx, base);
	// lwz r11,6120(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6120);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8241c860
	if (ctx.cr6.eq) goto loc_8241C860;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-21136
	ctx.r4.s64 = ctx.r11.s64 + -21136;
	// bl 0x82403840
	ctx.lr = 0x8241C818;
	sub_82403840(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,36
	ctx.r5.s64 = 36;
	// addi r6,r11,3672
	ctx.r6.s64 = ctx.r11.s64 + 3672;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82404528
	ctx.lr = 0x8241C82C;
	sub_82404528(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,13412
	ctx.r4.s64 = ctx.r11.s64 + 13412;
	// bl 0x82403840
	ctx.lr = 0x8241C83C;
	sub_82403840(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82403d78
	ctx.lr = 0x8241C844;
	sub_82403D78(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241b4e8
	ctx.lr = 0x8241C860;
	sub_8241B4E8(ctx, base);
loc_8241C860:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8241C868"))) PPC_WEAK_FUNC(sub_8241C868);
PPC_FUNC_IMPL(__imp__sub_8241C868) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x8241C870;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,-27196
	ctx.r31.s64 = ctx.r11.s64 + -27196;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8241c89c
	if (!ctx.cr6.eq) goto loc_8241C89C;
	// bl 0x82418818
	ctx.lr = 0x8241C898;
	sub_82418818(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_8241C89C:
	// bl 0x82418818
	ctx.lr = 0x8241C8A0;
	sub_82418818(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 + ctx.r10.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
loc_8241C8C4:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// lwzx r9,r9,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// blt cr6,0x8241c8c4
	if (ctx.cr6.lt) goto loc_8241C8C4;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8241c914
	if (ctx.cr6.eq) goto loc_8241C914;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241f1e0
	ctx.lr = 0x8241C904;
	sub_8241F1E0(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241f350
	ctx.lr = 0x8241C914;
	sub_8241F350(ctx, base);
loc_8241C914:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8241C91C"))) PPC_WEAK_FUNC(sub_8241C91C);
PPC_FUNC_IMPL(__imp__sub_8241C91C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241C920"))) PPC_WEAK_FUNC(sub_8241C920);
PPC_FUNC_IMPL(__imp__sub_8241C920) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x8241C928;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8241c94c
	if (ctx.cr6.eq) goto loc_8241C94C;
	// bl 0x82416780
	ctx.lr = 0x8241C948;
	sub_82416780(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_8241C94C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8241c968
	if (ctx.cr6.eq) goto loc_8241C968;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8241C964;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_8241C968:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r30.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r10,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r10.u32);
	// bne cr6,0x8241c994
	if (!ctx.cr6.eq) goto loc_8241C994;
	// lwz r3,288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8241c9e0
	if (ctx.cr6.eq) goto loc_8241C9E0;
	// bl 0x82366680
	ctx.lr = 0x8241C98C;
	sub_82366680(ctx, base);
	// stw r30,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r30.u32);
	// b 0x8241c9e0
	goto loc_8241C9E0;
loc_8241C994:
	// lwz r9,288(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8241c9e0
	if (!ctx.cr6.eq) goto loc_8241C9E0;
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,35008
	ctx.r3.u64 = ctx.r3.u64 | 35008;
	// bl 0x82366620
	ctx.lr = 0x8241C9AC;
	sub_82366620(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r3.u32);
	// beq cr6,0x8241c9e0
	if (ctx.cr6.eq) goto loc_8241C9E0;
	// lis r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r5,r5,35008
	ctx.r5.u64 = ctx.r5.u64 | 35008;
	// bl 0x8259d300
	ctx.lr = 0x8241C9C8;
	sub_8259D300(ctx, base);
	// lwz r8,288(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// li r4,0
	ctx.r4.s64 = 0;
	// addis r5,r8,1
	ctx.r5.s64 = ctx.r8.s64 + 65536;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r5,-31044
	ctx.r5.s64 = ctx.r5.s64 + -31044;
	// bl 0x8241c868
	ctx.lr = 0x8241C9E0;
	sub_8241C868(ctx, base);
loc_8241C9E0:
	// lwz r10,288(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8241ca88
	if (ctx.cr6.eq) goto loc_8241CA88;
	// addis r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 65536;
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r9,r9,-32332
	ctx.r9.s64 = ctx.r9.s64 + -32332;
	// lis r5,-1
	ctx.r5.s64 = -65536;
	// lis r3,-1
	ctx.r3.s64 = -65536;
	// ori r4,r5,32376
	ctx.r4.u64 = ctx.r5.u64 | 32376;
	// ori r7,r3,32328
	ctx.r7.u64 = ctx.r3.u64 | 32328;
	// addis r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 65536;
	// stw r6,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r6.u32);
	// subf r8,r10,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r10.s64;
	// addi r11,r11,-32328
	ctx.r11.s64 = ctx.r11.s64 + -32328;
	// subf r7,r10,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r10.s64;
loc_8241CA1C:
	// add r6,r8,r11
	ctx.r6.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stb r6,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r6.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// add r3,r7,r11
	ctx.r3.u64 = ctx.r7.u64 + ctx.r11.u64;
	// cmpw cr6,r3,r4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x8241ca1c
	if (ctx.cr6.lt) goto loc_8241CA1C;
	// lis r11,0
	ctx.r11.s64 = 0;
	// stw r30,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r30.u32);
	// lis r8,0
	ctx.r8.s64 = 0;
	// stw r30,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r30.u32);
	// ori r9,r11,32792
	ctx.r9.u64 = ctx.r11.u64 | 32792;
	// stw r30,16392(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16392, ctx.r30.u32);
	// lis r6,0
	ctx.r6.s64 = 0;
	// stw r30,16396(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16396, ctx.r30.u32);
	// lis r4,0
	ctx.r4.s64 = 0;
	// stw r30,16400(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16400, ctx.r30.u32);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r7,r8,32796
	ctx.r7.u64 = ctx.r8.u64 | 32796;
	// stwx r30,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r30.u32);
	// ori r5,r6,32804
	ctx.r5.u64 = ctx.r6.u64 | 32804;
	// ori r3,r4,32936
	ctx.r3.u64 = ctx.r4.u64 | 32936;
	// ori r9,r11,33068
	ctx.r9.u64 = ctx.r11.u64 | 33068;
	// stwx r30,r10,r7
	PPC_STORE_U32(ctx.r10.u32 + ctx.r7.u32, ctx.r30.u32);
	// stwx r30,r10,r5
	PPC_STORE_U32(ctx.r10.u32 + ctx.r5.u32, ctx.r30.u32);
	// stwx r30,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r30.u32);
	// stwx r30,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r30.u32);
loc_8241CA88:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x8241ca9c
	if (ctx.cr6.eq) goto loc_8241CA9C;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// li r3,-8
	ctx.r3.s64 = -8;
	// beq cr6,0x8241caa0
	if (ctx.cr6.eq) goto loc_8241CAA0;
loc_8241CA9C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8241CAA0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8241CAA8"))) PPC_WEAK_FUNC(sub_8241CAA8);
PPC_FUNC_IMPL(__imp__sub_8241CAA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae8
	ctx.lr = 0x8241CAB0;
	__savegprlr_24(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r31,288(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// cmplwi cr6,r11,15999
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15999, ctx.xer);
	// bgt cr6,0x8241cc78
	if (ctx.cr6.gt) goto loc_8241CC78;
	// addis r27,r31,1
	ctx.r27.s64 = ctx.r31.s64 + 65536;
	// li r29,4
	ctx.r29.s64 = 4;
	// addi r27,r27,-32468
	ctx.r27.s64 = ctx.r27.s64 + -32468;
	// li r24,4
	ctx.r24.s64 = 4;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8241cae8
	if (!ctx.cr6.gt) goto loc_8241CAE8;
	// li r29,20
	ctx.r29.s64 = 20;
loc_8241CAE8:
	// add r28,r29,r31
	ctx.r28.u64 = ctx.r29.u64 + ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r28,8
	ctx.r3.s64 = ctx.r28.s64 + 8;
	// mr r25,r29
	ctx.r25.u64 = ctx.r29.u64;
	// bl 0x8259d3a0
	ctx.lr = 0x8241CAFC;
	sub_8259D3A0(ctx, base);
	// lis r9,0
	ctx.r9.s64 = 0;
	// add r29,r29,r30
	ctx.r29.u64 = ctx.r29.u64 + ctx.r30.u64;
	// ori r8,r9,33200
	ctx.r8.u64 = ctx.r9.u64 | 33200;
	// lwzx r11,r31,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8241cb5c
	if (!ctx.cr6.gt) goto loc_8241CB5C;
	// divw r7,r30,r11
	ctx.r7.s32 = ctx.r30.s32 / ctx.r11.s32;
	// rotlwi r10,r30,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r30.u32, 1);
	// mullw r6,r7,r11
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// subf r5,r6,r30
	ctx.r5.s64 = ctx.r30.s64 - ctx.r6.s64;
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// subf r3,r5,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r5.s64;
	// andc r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 & ~ctx.r4.u64;
	// rotlwi r10,r3,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// divw r8,r3,r11
	ctx.r8.s32 = ctx.r3.s32 / ctx.r11.s32;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// mullw r6,r8,r11
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// andc r5,r11,r7
	ctx.r5.u64 = ctx.r11.u64 & ~ctx.r7.u64;
	// twllei r11,0
	if (ctx.r11.u32 <= 0) __builtin_debugtrap();
	// twllei r11,0
	if (ctx.r11.u32 <= 0) __builtin_debugtrap();
	// twlgei r9,-1
	if (ctx.r9.u32 >= 4294967295) __builtin_debugtrap();
	// subf r30,r6,r3
	ctx.r30.s64 = ctx.r3.s64 - ctx.r6.s64;
	// twlgei r5,-1
	if (ctx.r5.u32 >= 4294967295) __builtin_debugtrap();
	// b 0x8241cb60
	goto loc_8241CB60;
loc_8241CB5C:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8241CB60:
	// add r11,r29,r31
	ctx.r11.u64 = ctx.r29.u64 + ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x8259d300
	ctx.lr = 0x8241CB74;
	sub_8259D300(ctx, base);
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// add r26,r30,r29
	ctx.r26.u64 = ctx.r30.u64 + ctx.r29.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8241cbf0
	if (!ctx.cr6.gt) goto loc_8241CBF0;
	// lbz r11,16392(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16392);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// lbz r10,16393(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16393);
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// lbz r9,16394(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16394);
	// stb r9,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r9.u8);
	// lwz r8,16392(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16392);
	// stb r8,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r8.u8);
	// bl 0x82402fb8
	ctx.lr = 0x8241CBAC;
	sub_82402FB8(ctx, base);
	// addis r4,r31,1
	ctx.r4.s64 = ctx.r31.s64 + 65536;
	// lwz r5,0(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r4,-32464
	ctx.r4.s64 = ctx.r4.s64 + -32464;
	// bl 0x82402ff8
	ctx.lr = 0x8241CBC0;
	sub_82402FF8(ctx, base);
	// subf r5,r25,r26
	ctx.r5.s64 = ctx.r26.s64 - ctx.r25.s64;
	// addi r4,r28,8
	ctx.r4.s64 = ctx.r28.s64 + 8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82402ff8
	ctx.lr = 0x8241CBD0;
	sub_82402FF8(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82402ff8
	ctx.lr = 0x8241CBE0;
	sub_82402FF8(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824030d0
	ctx.lr = 0x8241CBF0;
	sub_824030D0(ctx, base);
loc_8241CBF0:
	// lwz r6,0(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r29,r26,-4
	ctx.r29.s64 = ctx.r26.s64 + -4;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x8241cc14
	if (!ctx.cr6.gt) goto loc_8241CC14;
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// addi r3,r3,-30786
	ctx.r3.s64 = ctx.r3.s64 + -30786;
	// bl 0x8241f350
	ctx.lr = 0x8241CC14;
	sub_8241F350(ctx, base);
loc_8241CC14:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x8241cc24
	if (!ctx.cr6.gt) goto loc_8241CC24;
	// li r24,3
	ctx.r24.s64 = 3;
	// stb r30,11(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11, ctx.r30.u8);
loc_8241CC24:
	// addi r11,r24,-1
	ctx.r11.s64 = ctx.r24.s64 + -1;
	// srawi r3,r29,8
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xFF) != 0);
	ctx.r3.s64 = ctx.r29.s32 >> 8;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stb r29,8(r9)
	PPC_STORE_U8(ctx.r9.u32 + 8, ctx.r29.u8);
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stb r10,8(r9)
	PPC_STORE_U8(ctx.r9.u32 + 8, ctx.r10.u8);
	// bne cr6,0x8241cc58
	if (!ctx.cr6.eq) goto loc_8241CC58;
	// li r8,1
	ctx.r8.s64 = 1;
	// rlwimi r10,r8,7,0,24
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r8.u32, 7) & 0xFFFFFF80) | (ctx.r10.u64 & 0xFFFFFFFF0000007F);
	// stb r10,8(r9)
	PPC_STORE_U8(ctx.r9.u32 + 8, ctx.r10.u8);
loc_8241CC58:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,16392(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16392);
	// stw r26,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r26.u32);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,16392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16392, ctx.r7.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
loc_8241CC78:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8241CC84"))) PPC_WEAK_FUNC(sub_8241CC84);
PPC_FUNC_IMPL(__imp__sub_8241CC84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241CC88"))) PPC_WEAK_FUNC(sub_8241CC88);
PPC_FUNC_IMPL(__imp__sub_8241CC88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x8241CC90;
	__savegprlr_27(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,288(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	// addi r11,r31,16408
	ctx.r11.s64 = ctx.r31.s64 + 16408;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,127
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 127, ctx.xer);
	// li r10,2
	ctx.r10.s64 = 2;
	// bgt cr6,0x8241ccb0
	if (ctx.cr6.gt) goto loc_8241CCB0;
	// li r10,3
	ctx.r10.s64 = 3;
loc_8241CCB0:
	// addis r28,r31,1
	ctx.r28.s64 = ctx.r31.s64 + 65536;
	// lwz r9,16400(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16400);
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r28,r28,-32600
	ctx.r28.s64 = ctx.r28.s64 + -32600;
	// subf r11,r30,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r30.s64;
	// lis r7,0
	ctx.r7.s64 = 0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// ori r27,r7,32792
	ctx.r27.u64 = ctx.r7.u64 | 32792;
	// lwz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r29,r11,16408
	ctx.r29.s64 = ctx.r11.s64 + 16408;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x8241cdb4
	if (!ctx.cr6.gt) goto loc_8241CDB4;
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r3,-31044
	ctx.r3.s64 = ctx.r3.s64 + -31044;
	// bl 0x8241f350
	ctx.lr = 0x8241CCF4;
	sub_8241F350(ctx, base);
	// add r11,r31,r27
	ctx.r11.u64 = ctx.r31.u64 + ctx.r27.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r6,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r6.u8);
	// lhz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// stb r5,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r5.u8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,24,8,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// stb r9,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r9.u8);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stb r7,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r7.u8);
	// bl 0x82402fb8
	ctx.lr = 0x8241CD24;
	sub_82402FB8(ctx, base);
	// addis r4,r31,1
	ctx.r4.s64 = ctx.r31.s64 + 65536;
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r4,-32596
	ctx.r4.s64 = ctx.r4.s64 + -32596;
	// bl 0x82402ff8
	ctx.lr = 0x8241CD38;
	sub_82402FF8(ctx, base);
	// addi r29,r29,-16
	ctx.r29.s64 = ctx.r29.s64 + -16;
	// addi r28,r30,16
	ctx.r28.s64 = ctx.r30.s64 + 16;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82402ff8
	ctx.lr = 0x8241CD50;
	sub_82402FF8(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82402ff8
	ctx.lr = 0x8241CD60;
	sub_82402FF8(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x824030d0
	ctx.lr = 0x8241CD70;
	sub_824030D0(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
loc_8241CD78:
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// subf. r9,r4,r5
	ctx.r9.s64 = ctx.r5.s64 - ctx.r4.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8241cd98
	if (!ctx.cr0.eq) goto loc_8241CD98;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8241cd78
	if (!ctx.cr6.eq) goto loc_8241CD78;
loc_8241CD98:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8241cda8
	if (ctx.cr6.eq) goto loc_8241CDA8;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x8241cdb4
	goto loc_8241CDB4;
loc_8241CDA8:
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// stw r29,16400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16400, ctx.r29.u32);
	// stw r29,16396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16396, ctx.r29.u32);
loc_8241CDB4:
	// add r11,r31,r27
	ctx.r11.u64 = ctx.r31.u64 + ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8241CDD0"))) PPC_WEAK_FUNC(sub_8241CDD0);
PPC_FUNC_IMPL(__imp__sub_8241CDD0) {
	PPC_FUNC_PROLOGUE();
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8241cde0
	if (ctx.cr6.eq) goto loc_8241CDE0;
	// stw r9,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r9.u32);
loc_8241CDE0:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8241cdec
	if (ctx.cr6.eq) goto loc_8241CDEC;
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
loc_8241CDEC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8241cdfc
	if (!ctx.cr6.eq) goto loc_8241CDFC;
loc_8241CDF4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8241CDFC:
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8241cdf4
	if (ctx.cr6.eq) goto loc_8241CDF4;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8241ce14
	if (ctx.cr6.eq) goto loc_8241CE14;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_8241CE14:
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8241cdf4
	if (ctx.cr6.eq) goto loc_8241CDF4;
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r11,127
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 127, ctx.xer);
	// ble cr6,0x8241ce64
	if (!ctx.cr6.gt) goto loc_8241CE64;
	// clrlwi r10,r11,25
	ctx.r10.u64 = ctx.r11.u32 & 0x7F;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8241ce64
	if (!ctx.cr6.gt) goto loc_8241CE64;
loc_8241CE40:
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8241cdf4
	if (ctx.cr6.eq) goto loc_8241CDF4;
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r8,r11,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// or r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 | ctx.r9.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x8241ce40
	if (ctx.cr6.gt) goto loc_8241CE40;
loc_8241CE64:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8241CE74"))) PPC_WEAK_FUNC(sub_8241CE74);
PPC_FUNC_IMPL(__imp__sub_8241CE74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241CE78"))) PPC_WEAK_FUNC(sub_8241CE78);
PPC_FUNC_IMPL(__imp__sub_8241CE78) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r6,r11,13648
	ctx.r6.s64 = ctx.r11.s64 + 13648;
loc_8241CE90:
	// addi r11,r6,4
	ctx.r11.s64 = ctx.r6.s64 + 4;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpw cr6,r4,r9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8241cee4
	if (ctx.cr6.lt) goto loc_8241CEE4;
	// addi r8,r6,8
	ctx.r8.s64 = ctx.r6.s64 + 8;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8241cedc
	if (ctx.cr6.eq) goto loc_8241CEDC;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_8241CEBC:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r7,r7,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x8241cedc
	if (!ctx.cr0.eq) goto loc_8241CEDC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8241cebc
	if (!ctx.cr6.eq) goto loc_8241CEBC;
loc_8241CEDC:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8241cf0c
	if (ctx.cr6.eq) goto loc_8241CF0C;
loc_8241CEE4:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r9,r10,r6
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8241ce90
	if (!ctx.cr6.eq) goto loc_8241CE90;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_8241CF0C:
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r5,r11
	ctx.r8.u64 = ctx.r5.u64 + ctx.r11.u64;
	// rlwinm r7,r8,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r3,r7,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8241CF24"))) PPC_WEAK_FUNC(sub_8241CF24);
PPC_FUNC_IMPL(__imp__sub_8241CF24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241CF28"))) PPC_WEAK_FUNC(sub_8241CF28);
PPC_FUNC_IMPL(__imp__sub_8241CF28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae0
	ctx.lr = 0x8241CF30;
	__savegprlr_22(ctx, base);
	// stwu r1,-1648(r1)
	ea = -1648 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r6,1692(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1692, ctx.r6.u32);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r5,1224
	ctx.r5.s64 = 1224;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// add r29,r31,r6
	ctx.r29.u64 = ctx.r31.u64 + ctx.r6.u64;
	// bl 0x8259d300
	ctx.lr = 0x8241CF58;
	sub_8259D300(ctx, base);
	// addi r6,r1,1692
	ctx.r6.s64 = ctx.r1.s64 + 1692;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241cdd0
	ctx.lr = 0x8241CF6C;
	sub_8241CDD0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8241dd00
	if (ctx.cr6.eq) goto loc_8241DD00;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// bne cr6,0x8241dd00
	if (!ctx.cr6.eq) goto loc_8241DD00;
	// addi r6,r1,1692
	ctx.r6.s64 = ctx.r1.s64 + 1692;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// bl 0x8241cdd0
	ctx.lr = 0x8241CF90;
	sub_8241CDD0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8241dcf4
	if (ctx.cr6.eq) goto loc_8241DCF4;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r10,48
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 48, ctx.xer);
	// bne cr6,0x8241dcf4
	if (!ctx.cr6.eq) goto loc_8241DCF4;
	// lwz r11,1692(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1692);
	// li r24,0
	ctx.r24.s64 = 0;
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addi r23,r11,4
	ctx.r23.s64 = ctx.r11.s64 + 4;
	// add r26,r3,r11
	ctx.r26.u64 = ctx.r3.u64 + ctx.r11.u64;
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// beq cr6,0x8241d034
	if (ctx.cr6.eq) goto loc_8241D034;
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8241d024
	if (ctx.cr6.eq) goto loc_8241D024;
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8241d024
	if (ctx.cr6.eq) goto loc_8241D024;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,127
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 127, ctx.xer);
	// ble cr6,0x8241d018
	if (!ctx.cr6.gt) goto loc_8241D018;
	// clrlwi r9,r10,25
	ctx.r9.u64 = ctx.r10.u32 & 0x7F;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8241d018
	if (!ctx.cr6.gt) goto loc_8241D018;
loc_8241CFF4:
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8241d024
	if (ctx.cr6.eq) goto loc_8241D024;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// rlwinm r7,r10,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// or r10,r7,r8
	ctx.r10.u64 = ctx.r7.u64 | ctx.r8.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt cr6,0x8241cff4
	if (ctx.cr6.gt) goto loc_8241CFF4;
loc_8241D018:
	// stw r10,1692(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1692, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8241d030
	if (!ctx.cr6.eq) goto loc_8241D030;
loc_8241D024:
	// li r3,-3
	ctx.r3.s64 = -3;
	// addi r1,r1,1648
	ctx.r1.s64 = ctx.r1.s64 + 1648;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8241D030:
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8241D034:
	// addi r6,r1,1692
	ctx.r6.s64 = ctx.r1.s64 + 1692;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x8241cdd0
	ctx.lr = 0x8241D044;
	sub_8241CDD0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8241dce8
	if (ctx.cr6.eq) goto loc_8241DCE8;
	// lwz r31,1692(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1692);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x8241dce8
	if (ctx.cr6.lt) goto loc_8241DCE8;
	// cmplwi cr6,r31,32
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 32, ctx.xer);
	// bgt cr6,0x8241dce8
	if (ctx.cr6.gt) goto loc_8241DCE8;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stw r31,452(r27)
	PPC_STORE_U32(ctx.r27.u32 + 452, ctx.r31.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r27,456
	ctx.r3.s64 = ctx.r27.s64 + 456;
	// bl 0x8259d3a0
	ctx.lr = 0x8241D078;
	sub_8259D3A0(ctx, base);
	// add r3,r30,r31
	ctx.r3.u64 = ctx.r30.u64 + ctx.r31.u64;
	// addi r6,r1,1692
	ctx.r6.s64 = ctx.r1.s64 + 1692;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x8241cdd0
	ctx.lr = 0x8241D08C;
	sub_8241CDD0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8241dcdc
	if (ctx.cr6.eq) goto loc_8241DCDC;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r6,48
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 48, ctx.xer);
	// bne cr6,0x8241dcdc
	if (!ctx.cr6.eq) goto loc_8241DCDC;
	// lwz r11,1692(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1692);
	// addi r6,r1,1692
	ctx.r6.s64 = ctx.r1.s64 + 1692;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// add r28,r3,r11
	ctx.r28.u64 = ctx.r3.u64 + ctx.r11.u64;
	// bl 0x8241cdd0
	ctx.lr = 0x8241D0B4;
	sub_8241CDD0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8241dcd0
	if (ctx.cr6.eq) goto loc_8241DCD0;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r5,6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 6, ctx.xer);
	// bne cr6,0x8241dcd0
	if (!ctx.cr6.eq) goto loc_8241DCD0;
	// lwz r4,1692(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1692);
	// bl 0x8241ce78
	ctx.lr = 0x8241D0D0;
	sub_8241CE78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r3,488(r27)
	PPC_STORE_U32(ctx.r27.u32 + 488, ctx.r3.u32);
	// bne cr6,0x8241d0e8
	if (!ctx.cr6.eq) goto loc_8241D0E8;
	// li r3,-7
	ctx.r3.s64 = -7;
	// addi r1,r1,1648
	ctx.r1.s64 = ctx.r1.s64 + 1648;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8241D0E8:
	// addi r6,r1,1692
	ctx.r6.s64 = ctx.r1.s64 + 1692;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8241cdd0
	ctx.lr = 0x8241D0FC;
	sub_8241CDD0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8241dcc4
	if (ctx.cr6.eq) goto loc_8241DCC4;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r4,48
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 48, ctx.xer);
	// bne cr6,0x8241dcc4
	if (!ctx.cr6.eq) goto loc_8241DCC4;
	// lwz r11,1692(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1692);
	// addi r6,r1,1692
	ctx.r6.s64 = ctx.r1.s64 + 1692;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// add r30,r3,r11
	ctx.r30.u64 = ctx.r3.u64 + ctx.r11.u64;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8241cdd0
	ctx.lr = 0x8241D12C;
	sub_8241CDD0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8241d340
	if (ctx.cr6.eq) goto loc_8241D340;
loc_8241D138:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// beq cr6,0x8241d320
	if (ctx.cr6.eq) goto loc_8241D320;
	// cmpwi cr6,r11,49
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 49, ctx.xer);
	// beq cr6,0x8241d320
	if (ctx.cr6.eq) goto loc_8241D320;
	// lwz r4,1692(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1692);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x8241d168
	if (!ctx.cr6.eq) goto loc_8241D168;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241ce78
	ctx.lr = 0x8241D160;
	sub_8241CE78(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// b 0x8241d31c
	goto loc_8241D31C;
loc_8241D168:
	// cmpwi cr6,r11,19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19, ctx.xer);
	// beq cr6,0x8241d178
	if (ctx.cr6.eq) goto loc_8241D178;
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// bne cr6,0x8241d31c
	if (!ctx.cr6.eq) goto loc_8241D31C;
loc_8241D178:
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// bne cr6,0x8241d1bc
	if (!ctx.cr6.eq) goto loc_8241D1BC;
	// addi r11,r27,4
	ctx.r11.s64 = ctx.r27.s64 + 4;
	// li r10,32
	ctx.r10.s64 = 32;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8241d314
	if (!ctx.cr6.gt) goto loc_8241D314;
	// addi r9,r4,-32
	ctx.r9.s64 = ctx.r4.s64 + -32;
	// subf r8,r11,r31
	ctx.r8.s64 = ctx.r31.s64 - ctx.r11.s64;
loc_8241D198:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// ble cr6,0x8241d30c
	if (!ctx.cr6.gt) goto loc_8241D30C;
	// lbzx r3,r8,r11
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// add. r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stb r3,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r3.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bgt 0x8241d198
	if (ctx.cr0.gt) goto loc_8241D198;
	// b 0x8241d30c
	goto loc_8241D30C;
loc_8241D1BC:
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// bne cr6,0x8241d200
	if (!ctx.cr6.eq) goto loc_8241D200;
	// addi r11,r27,36
	ctx.r11.s64 = ctx.r27.s64 + 36;
	// li r10,32
	ctx.r10.s64 = 32;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8241d314
	if (!ctx.cr6.gt) goto loc_8241D314;
	// addi r9,r4,-32
	ctx.r9.s64 = ctx.r4.s64 + -32;
	// subf r8,r11,r31
	ctx.r8.s64 = ctx.r31.s64 - ctx.r11.s64;
loc_8241D1DC:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// ble cr6,0x8241d30c
	if (!ctx.cr6.gt) goto loc_8241D30C;
	// lbzx r6,r8,r11
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// add. r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stb r6,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r6.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bgt 0x8241d1dc
	if (ctx.cr0.gt) goto loc_8241D1DC;
	// b 0x8241d30c
	goto loc_8241D30C;
loc_8241D200:
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// bne cr6,0x8241d244
	if (!ctx.cr6.eq) goto loc_8241D244;
	// addi r11,r27,68
	ctx.r11.s64 = ctx.r27.s64 + 68;
	// li r10,32
	ctx.r10.s64 = 32;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8241d314
	if (!ctx.cr6.gt) goto loc_8241D314;
	// addi r9,r4,-32
	ctx.r9.s64 = ctx.r4.s64 + -32;
	// subf r8,r11,r31
	ctx.r8.s64 = ctx.r31.s64 - ctx.r11.s64;
loc_8241D220:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// ble cr6,0x8241d30c
	if (!ctx.cr6.gt) goto loc_8241D30C;
	// lbzx r3,r8,r11
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// add. r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stb r3,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r3.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bgt 0x8241d220
	if (ctx.cr0.gt) goto loc_8241D220;
	// b 0x8241d30c
	goto loc_8241D30C;
loc_8241D244:
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// bne cr6,0x8241d288
	if (!ctx.cr6.eq) goto loc_8241D288;
	// addi r11,r27,100
	ctx.r11.s64 = ctx.r27.s64 + 100;
	// li r10,32
	ctx.r10.s64 = 32;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8241d314
	if (!ctx.cr6.gt) goto loc_8241D314;
	// addi r9,r4,-32
	ctx.r9.s64 = ctx.r4.s64 + -32;
	// subf r8,r11,r31
	ctx.r8.s64 = ctx.r31.s64 - ctx.r11.s64;
loc_8241D264:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// ble cr6,0x8241d30c
	if (!ctx.cr6.gt) goto loc_8241D30C;
	// lbzx r6,r8,r11
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// add. r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stb r6,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r6.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bgt 0x8241d264
	if (ctx.cr0.gt) goto loc_8241D264;
	// b 0x8241d30c
	goto loc_8241D30C;
loc_8241D288:
	// cmpwi cr6,r7,5
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 5, ctx.xer);
	// bne cr6,0x8241d2cc
	if (!ctx.cr6.eq) goto loc_8241D2CC;
	// addi r11,r27,132
	ctx.r11.s64 = ctx.r27.s64 + 132;
	// li r10,32
	ctx.r10.s64 = 32;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8241d314
	if (!ctx.cr6.gt) goto loc_8241D314;
	// addi r9,r4,-32
	ctx.r9.s64 = ctx.r4.s64 + -32;
	// subf r8,r11,r31
	ctx.r8.s64 = ctx.r31.s64 - ctx.r11.s64;
loc_8241D2A8:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// ble cr6,0x8241d30c
	if (!ctx.cr6.gt) goto loc_8241D30C;
	// lbzx r3,r8,r11
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// add. r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stb r3,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r3.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bgt 0x8241d2a8
	if (ctx.cr0.gt) goto loc_8241D2A8;
	// b 0x8241d30c
	goto loc_8241D30C;
loc_8241D2CC:
	// cmpwi cr6,r7,6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 6, ctx.xer);
	// bne cr6,0x8241d318
	if (!ctx.cr6.eq) goto loc_8241D318;
	// addi r11,r27,164
	ctx.r11.s64 = ctx.r27.s64 + 164;
	// li r10,32
	ctx.r10.s64 = 32;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8241d314
	if (!ctx.cr6.gt) goto loc_8241D314;
	// addi r9,r4,-32
	ctx.r9.s64 = ctx.r4.s64 + -32;
	// subf r8,r11,r31
	ctx.r8.s64 = ctx.r31.s64 - ctx.r11.s64;
loc_8241D2EC:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// ble cr6,0x8241d30c
	if (!ctx.cr6.gt) goto loc_8241D30C;
	// lbzx r6,r8,r11
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// add. r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stb r6,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r6.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bgt 0x8241d2ec
	if (ctx.cr0.gt) goto loc_8241D2EC;
loc_8241D30C:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8241d318
	if (!ctx.cr6.gt) goto loc_8241D318;
loc_8241D314:
	// stb r24,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r24.u8);
loc_8241D318:
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
loc_8241D31C:
	// add r31,r31,r4
	ctx.r31.u64 = ctx.r31.u64 + ctx.r4.u64;
loc_8241D320:
	// addi r6,r1,1692
	ctx.r6.s64 = ctx.r1.s64 + 1692;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241cdd0
	ctx.lr = 0x8241D334;
	sub_8241CDD0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8241d138
	if (!ctx.cr6.eq) goto loc_8241D138;
loc_8241D340:
	// addi r6,r1,1692
	ctx.r6.s64 = ctx.r1.s64 + 1692;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241cdd0
	ctx.lr = 0x8241D354;
	sub_8241CDD0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8241dcb8
	if (ctx.cr6.eq) goto loc_8241DCB8;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r4,48
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 48, ctx.xer);
	// bne cr6,0x8241dcb8
	if (!ctx.cr6.eq) goto loc_8241DCB8;
	// addi r6,r1,1692
	ctx.r6.s64 = ctx.r1.s64 + 1692;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8241cdd0
	ctx.lr = 0x8241D378;
	sub_8241CDD0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8241dcac
	if (ctx.cr6.eq) goto loc_8241DCAC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 23, ctx.xer);
	// bne cr6,0x8241dcac
	if (!ctx.cr6.eq) goto loc_8241DCAC;
	// lwz r7,1692(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1692);
	// addi r11,r27,388
	ctx.r11.s64 = ctx.r27.s64 + 388;
	// li r10,32
	ctx.r10.s64 = 32;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x8241d3d0
	if (!ctx.cr6.gt) goto loc_8241D3D0;
	// addi r9,r7,-32
	ctx.r9.s64 = ctx.r7.s64 + -32;
	// subf r8,r11,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r11.s64;
loc_8241D3A8:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// ble cr6,0x8241d3c8
	if (!ctx.cr6.gt) goto loc_8241D3C8;
	// lbzx r6,r8,r11
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// add. r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stb r6,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r6.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bgt 0x8241d3a8
	if (ctx.cr0.gt) goto loc_8241D3A8;
loc_8241D3C8:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8241d3d4
	if (!ctx.cr6.gt) goto loc_8241D3D4;
loc_8241D3D0:
	// stb r24,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r24.u8);
loc_8241D3D4:
	// add r3,r3,r7
	ctx.r3.u64 = ctx.r3.u64 + ctx.r7.u64;
	// addi r6,r1,1692
	ctx.r6.s64 = ctx.r1.s64 + 1692;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8241cdd0
	ctx.lr = 0x8241D3E8;
	sub_8241CDD0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8241dca0
	if (ctx.cr6.eq) goto loc_8241DCA0;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r4,23
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 23, ctx.xer);
	// bne cr6,0x8241dca0
	if (!ctx.cr6.eq) goto loc_8241DCA0;
	// lwz r7,1692(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1692);
	// addi r11,r27,420
	ctx.r11.s64 = ctx.r27.s64 + 420;
	// li r10,32
	ctx.r10.s64 = 32;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x8241d440
	if (!ctx.cr6.gt) goto loc_8241D440;
	// addi r9,r7,-32
	ctx.r9.s64 = ctx.r7.s64 + -32;
	// subf r8,r11,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r11.s64;
loc_8241D418:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// ble cr6,0x8241d438
	if (!ctx.cr6.gt) goto loc_8241D438;
	// lbzx r6,r8,r11
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// add. r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stb r6,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r6.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bgt 0x8241d418
	if (ctx.cr0.gt) goto loc_8241D418;
loc_8241D438:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8241d444
	if (!ctx.cr6.gt) goto loc_8241D444;
loc_8241D440:
	// stb r24,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r24.u8);
loc_8241D444:
	// add r3,r3,r7
	ctx.r3.u64 = ctx.r3.u64 + ctx.r7.u64;
	// addi r6,r1,1692
	ctx.r6.s64 = ctx.r1.s64 + 1692;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8241cdd0
	ctx.lr = 0x8241D458;
	sub_8241CDD0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8241dc94
	if (ctx.cr6.eq) goto loc_8241DC94;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r4,48
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 48, ctx.xer);
	// bne cr6,0x8241dc94
	if (!ctx.cr6.eq) goto loc_8241DC94;
	// lwz r11,1692(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1692);
	// addi r6,r1,1692
	ctx.r6.s64 = ctx.r1.s64 + 1692;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// add r30,r3,r11
	ctx.r30.u64 = ctx.r3.u64 + ctx.r11.u64;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8241cdd0
	ctx.lr = 0x8241D488;
	sub_8241CDD0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8241d69c
	if (ctx.cr6.eq) goto loc_8241D69C;
loc_8241D494:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// beq cr6,0x8241d67c
	if (ctx.cr6.eq) goto loc_8241D67C;
	// cmpwi cr6,r11,49
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 49, ctx.xer);
	// beq cr6,0x8241d67c
	if (ctx.cr6.eq) goto loc_8241D67C;
	// lwz r4,1692(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1692);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x8241d4c4
	if (!ctx.cr6.eq) goto loc_8241D4C4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241ce78
	ctx.lr = 0x8241D4BC;
	sub_8241CE78(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// b 0x8241d678
	goto loc_8241D678;
loc_8241D4C4:
	// cmpwi cr6,r11,19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19, ctx.xer);
	// beq cr6,0x8241d4d4
	if (ctx.cr6.eq) goto loc_8241D4D4;
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// bne cr6,0x8241d678
	if (!ctx.cr6.eq) goto loc_8241D678;
loc_8241D4D4:
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// bne cr6,0x8241d518
	if (!ctx.cr6.eq) goto loc_8241D518;
	// addi r11,r27,196
	ctx.r11.s64 = ctx.r27.s64 + 196;
	// li r10,32
	ctx.r10.s64 = 32;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8241d670
	if (!ctx.cr6.gt) goto loc_8241D670;
	// addi r9,r4,-32
	ctx.r9.s64 = ctx.r4.s64 + -32;
	// subf r8,r11,r31
	ctx.r8.s64 = ctx.r31.s64 - ctx.r11.s64;
loc_8241D4F4:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// ble cr6,0x8241d668
	if (!ctx.cr6.gt) goto loc_8241D668;
	// lbzx r3,r8,r11
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// add. r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stb r3,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r3.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bgt 0x8241d4f4
	if (ctx.cr0.gt) goto loc_8241D4F4;
	// b 0x8241d668
	goto loc_8241D668;
loc_8241D518:
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// bne cr6,0x8241d55c
	if (!ctx.cr6.eq) goto loc_8241D55C;
	// addi r11,r27,228
	ctx.r11.s64 = ctx.r27.s64 + 228;
	// li r10,32
	ctx.r10.s64 = 32;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8241d670
	if (!ctx.cr6.gt) goto loc_8241D670;
	// addi r9,r4,-32
	ctx.r9.s64 = ctx.r4.s64 + -32;
	// subf r8,r11,r31
	ctx.r8.s64 = ctx.r31.s64 - ctx.r11.s64;
loc_8241D538:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// ble cr6,0x8241d668
	if (!ctx.cr6.gt) goto loc_8241D668;
	// lbzx r6,r8,r11
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// add. r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stb r6,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r6.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bgt 0x8241d538
	if (ctx.cr0.gt) goto loc_8241D538;
	// b 0x8241d668
	goto loc_8241D668;
loc_8241D55C:
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// bne cr6,0x8241d5a0
	if (!ctx.cr6.eq) goto loc_8241D5A0;
	// addi r11,r27,260
	ctx.r11.s64 = ctx.r27.s64 + 260;
	// li r10,32
	ctx.r10.s64 = 32;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8241d670
	if (!ctx.cr6.gt) goto loc_8241D670;
	// addi r9,r4,-32
	ctx.r9.s64 = ctx.r4.s64 + -32;
	// subf r8,r11,r31
	ctx.r8.s64 = ctx.r31.s64 - ctx.r11.s64;
loc_8241D57C:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// ble cr6,0x8241d668
	if (!ctx.cr6.gt) goto loc_8241D668;
	// lbzx r3,r11,r8
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// add. r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stb r3,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r3.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bgt 0x8241d57c
	if (ctx.cr0.gt) goto loc_8241D57C;
	// b 0x8241d668
	goto loc_8241D668;
loc_8241D5A0:
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// bne cr6,0x8241d5e4
	if (!ctx.cr6.eq) goto loc_8241D5E4;
	// addi r11,r27,292
	ctx.r11.s64 = ctx.r27.s64 + 292;
	// li r10,32
	ctx.r10.s64 = 32;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8241d670
	if (!ctx.cr6.gt) goto loc_8241D670;
	// addi r9,r4,-32
	ctx.r9.s64 = ctx.r4.s64 + -32;
	// subf r8,r11,r31
	ctx.r8.s64 = ctx.r31.s64 - ctx.r11.s64;
loc_8241D5C0:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// ble cr6,0x8241d668
	if (!ctx.cr6.gt) goto loc_8241D668;
	// lbzx r6,r11,r8
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// add. r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stb r6,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r6.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bgt 0x8241d5c0
	if (ctx.cr0.gt) goto loc_8241D5C0;
	// b 0x8241d668
	goto loc_8241D668;
loc_8241D5E4:
	// cmpwi cr6,r7,5
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 5, ctx.xer);
	// bne cr6,0x8241d628
	if (!ctx.cr6.eq) goto loc_8241D628;
	// addi r11,r27,324
	ctx.r11.s64 = ctx.r27.s64 + 324;
	// li r10,32
	ctx.r10.s64 = 32;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8241d670
	if (!ctx.cr6.gt) goto loc_8241D670;
	// addi r9,r4,-32
	ctx.r9.s64 = ctx.r4.s64 + -32;
	// subf r8,r11,r31
	ctx.r8.s64 = ctx.r31.s64 - ctx.r11.s64;
loc_8241D604:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// ble cr6,0x8241d668
	if (!ctx.cr6.gt) goto loc_8241D668;
	// lbzx r3,r11,r8
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// add. r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stb r3,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r3.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bgt 0x8241d604
	if (ctx.cr0.gt) goto loc_8241D604;
	// b 0x8241d668
	goto loc_8241D668;
loc_8241D628:
	// cmpwi cr6,r7,6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 6, ctx.xer);
	// bne cr6,0x8241d674
	if (!ctx.cr6.eq) goto loc_8241D674;
	// addi r11,r27,356
	ctx.r11.s64 = ctx.r27.s64 + 356;
	// li r10,32
	ctx.r10.s64 = 32;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8241d670
	if (!ctx.cr6.gt) goto loc_8241D670;
	// addi r9,r4,-32
	ctx.r9.s64 = ctx.r4.s64 + -32;
	// subf r8,r11,r31
	ctx.r8.s64 = ctx.r31.s64 - ctx.r11.s64;
loc_8241D648:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// ble cr6,0x8241d668
	if (!ctx.cr6.gt) goto loc_8241D668;
	// lbzx r6,r11,r8
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// add. r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stb r6,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r6.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bgt 0x8241d648
	if (ctx.cr0.gt) goto loc_8241D648;
loc_8241D668:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8241d674
	if (!ctx.cr6.gt) goto loc_8241D674;
loc_8241D670:
	// stb r24,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r24.u8);
loc_8241D674:
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
loc_8241D678:
	// add r31,r31,r4
	ctx.r31.u64 = ctx.r31.u64 + ctx.r4.u64;
loc_8241D67C:
	// addi r6,r1,1692
	ctx.r6.s64 = ctx.r1.s64 + 1692;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241cdd0
	ctx.lr = 0x8241D690;
	sub_8241CDD0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8241d494
	if (!ctx.cr6.eq) goto loc_8241D494;
loc_8241D69C:
	// addi r6,r1,1692
	ctx.r6.s64 = ctx.r1.s64 + 1692;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241cdd0
	ctx.lr = 0x8241D6B0;
	sub_8241CDD0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8241dc88
	if (ctx.cr6.eq) goto loc_8241DC88;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r4,48
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 48, ctx.xer);
	// bne cr6,0x8241dc88
	if (!ctx.cr6.eq) goto loc_8241DC88;
	// addi r6,r1,1692
	ctx.r6.s64 = ctx.r1.s64 + 1692;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8241cdd0
	ctx.lr = 0x8241D6D4;
	sub_8241CDD0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8241dc7c
	if (ctx.cr6.eq) goto loc_8241DC7C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// bne cr6,0x8241dc7c
	if (!ctx.cr6.eq) goto loc_8241DC7C;
	// lwz r11,1692(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1692);
	// addi r6,r1,1692
	ctx.r6.s64 = ctx.r1.s64 + 1692;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// add r31,r3,r11
	ctx.r31.u64 = ctx.r3.u64 + ctx.r11.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8241cdd0
	ctx.lr = 0x8241D700;
	sub_8241CDD0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8241dc70
	if (ctx.cr6.eq) goto loc_8241DC70;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// bne cr6,0x8241dc70
	if (!ctx.cr6.eq) goto loc_8241DC70;
	// lwz r4,1692(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1692);
	// bl 0x8241ce78
	ctx.lr = 0x8241D71C;
	sub_8241CE78(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r6,r1,1692
	ctx.r6.s64 = ctx.r1.s64 + 1692;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,624(r27)
	PPC_STORE_U32(ctx.r27.u32 + 624, ctx.r11.u32);
	// bl 0x8241cdd0
	ctx.lr = 0x8241D738;
	sub_8241CDD0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8241dc64
	if (ctx.cr6.eq) goto loc_8241DC64;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// bne cr6,0x8241dc64
	if (!ctx.cr6.eq) goto loc_8241DC64;
	// lwz r11,1692(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1692);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x8241dc64
	if (ctx.cr6.lt) goto loc_8241DC64;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// bgt cr6,0x8241dc64
	if (ctx.cr6.gt) goto loc_8241DC64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// addi r30,r27,696
	ctx.r30.s64 = ctx.r27.s64 + 696;
	// addi r4,r3,1
	ctx.r4.s64 = ctx.r3.s64 + 1;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r8,692(r27)
	PPC_STORE_U32(ctx.r27.u32 + 692, ctx.r8.u32);
	// bl 0x8259d3a0
	ctx.lr = 0x8241D77C;
	sub_8259D3A0(ctx, base);
	// addi r6,r1,1692
	ctx.r6.s64 = ctx.r1.s64 + 1692;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8241cdd0
	ctx.lr = 0x8241D790;
	sub_8241CDD0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8241dc58
	if (ctx.cr6.eq) goto loc_8241DC58;
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r7,48
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 48, ctx.xer);
	// bne cr6,0x8241dc58
	if (!ctx.cr6.eq) goto loc_8241DC58;
	// lwz r11,1692(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1692);
	// addi r6,r1,1692
	ctx.r6.s64 = ctx.r1.s64 + 1692;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// add r31,r3,r11
	ctx.r31.u64 = ctx.r3.u64 + ctx.r11.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8241cdd0
	ctx.lr = 0x8241D7BC;
	sub_8241CDD0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8241dc4c
	if (ctx.cr6.eq) goto loc_8241DC4C;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r6,6
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 6, ctx.xer);
	// bne cr6,0x8241dc4c
	if (!ctx.cr6.eq) goto loc_8241DC4C;
	// lwz r4,1692(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1692);
	// bl 0x8241ce78
	ctx.lr = 0x8241D7D8;
	sub_8241CE78(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r6,r1,1692
	ctx.r6.s64 = ctx.r1.s64 + 1692;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,488(r27)
	PPC_STORE_U32(ctx.r27.u32 + 488, ctx.r11.u32);
	// bl 0x8241cdd0
	ctx.lr = 0x8241D7F4;
	sub_8241CDD0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8241dc40
	if (ctx.cr6.eq) goto loc_8241DC40;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x8241dc40
	if (!ctx.cr6.eq) goto loc_8241DC40;
	// lwz r10,1692(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1692);
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x8241dc40
	if (ctx.cr0.lt) goto loc_8241DC40;
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r5,128
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 128, ctx.xer);
	// bgt cr6,0x8241dc40
	if (ctx.cr6.gt) goto loc_8241DC40;
	// addi r28,r27,496
	ctx.r28.s64 = ctx.r27.s64 + 496;
	// stw r11,492(r27)
	PPC_STORE_U32(ctx.r27.u32 + 492, ctx.r11.u32);
	// addi r4,r3,1
	ctx.r4.s64 = ctx.r3.s64 + 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8259d3a0
	ctx.lr = 0x8241D834;
	sub_8259D3A0(ctx, base);
	// lwz r9,624(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 624);
	// cmpwi cr6,r9,7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 7, ctx.xer);
	// bne cr6,0x8241d948
	if (!ctx.cr6.eq) goto loc_8241D948;
	// lwz r11,692(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 692);
	// addi r6,r1,1692
	ctx.r6.s64 = ctx.r1.s64 + 1692;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,696
	ctx.r4.s64 = ctx.r11.s64 + 696;
	// bl 0x8241cdd0
	ctx.lr = 0x8241D85C;
	sub_8241CDD0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8241d9a8
	if (ctx.cr6.eq) goto loc_8241D9A8;
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r8,48
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 48, ctx.xer);
	// bne cr6,0x8241d9a8
	if (!ctx.cr6.eq) goto loc_8241D9A8;
	// addi r6,r1,1692
	ctx.r6.s64 = ctx.r1.s64 + 1692;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8241cdd0
	ctx.lr = 0x8241D87C;
	sub_8241CDD0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8241d99c
	if (ctx.cr6.eq) goto loc_8241D99C;
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// bne cr6,0x8241d99c
	if (!ctx.cr6.eq) goto loc_8241D99C;
	// lwz r31,1692(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1692);
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// blt cr6,0x8241d99c
	if (ctx.cr6.lt) goto loc_8241D99C;
	// cmplwi cr6,r31,129
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 129, ctx.xer);
	// bgt cr6,0x8241d99c
	if (ctx.cr6.gt) goto loc_8241D99C;
	// lbz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// addi r3,r27,956
	ctx.r3.s64 = ctx.r27.s64 + 956;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8241d8cc
	if (!ctx.cr6.eq) goto loc_8241D8CC;
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// addi r5,r31,-1
	ctx.r5.s64 = ctx.r31.s64 + -1;
	// addi r4,r30,1
	ctx.r4.s64 = ctx.r30.s64 + 1;
	// stw r11,952(r27)
	PPC_STORE_U32(ctx.r27.u32 + 952, ctx.r11.u32);
	// b 0x8241d8d8
	goto loc_8241D8D8;
loc_8241D8CC:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stw r31,952(r27)
	PPC_STORE_U32(ctx.r27.u32 + 952, ctx.r31.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_8241D8D8:
	// bl 0x8259d3a0
	ctx.lr = 0x8241D8DC;
	sub_8259D3A0(ctx, base);
	// lwz r11,692(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 692);
	// add r3,r30,r31
	ctx.r3.u64 = ctx.r30.u64 + ctx.r31.u64;
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// addi r6,r1,1692
	ctx.r6.s64 = ctx.r1.s64 + 1692;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,696
	ctx.r4.s64 = ctx.r11.s64 + 696;
	// bl 0x8241cdd0
	ctx.lr = 0x8241D8F8;
	sub_8241CDD0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8241d990
	if (ctx.cr6.eq) goto loc_8241D990;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x8241d990
	if (!ctx.cr6.eq) goto loc_8241D990;
	// lwz r5,1692(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1692);
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// blt cr6,0x8241d990
	if (ctx.cr6.lt) goto loc_8241D990;
	// cmplwi cr6,r5,129
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 129, ctx.xer);
	// bgt cr6,0x8241d990
	if (ctx.cr6.gt) goto loc_8241D990;
	// lbz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// addi r3,r27,1092
	ctx.r3.s64 = ctx.r27.s64 + 1092;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8241d988
	if (!ctx.cr6.eq) goto loc_8241D988;
	// addi r8,r5,-1
	ctx.r8.s64 = ctx.r5.s64 + -1;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// stw r8,1088(r27)
	PPC_STORE_U32(ctx.r27.u32 + 1088, ctx.r8.u32);
loc_8241D944:
	// bl 0x8259d3a0
	ctx.lr = 0x8241D948;
	sub_8259D3A0(ctx, base);
loc_8241D948:
	// addi r10,r27,356
	ctx.r10.s64 = ctx.r27.s64 + 356;
	// addi r11,r25,8
	ctx.r11.s64 = ctx.r25.s64 + 8;
loc_8241D950:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r7,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq cr6,0x8241d974
	if (ctx.cr6.eq) goto loc_8241D974;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8241d950
	if (ctx.cr6.eq) goto loc_8241D950;
loc_8241D974:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8241d9b4
	if (ctx.cr6.eq) goto loc_8241D9B4;
	// li r3,-24
	ctx.r3.s64 = -24;
	// addi r1,r1,1648
	ctx.r1.s64 = ctx.r1.s64 + 1648;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8241D988:
	// stw r5,1088(r27)
	PPC_STORE_U32(ctx.r27.u32 + 1088, ctx.r5.u32);
	// b 0x8241d944
	goto loc_8241D944;
loc_8241D990:
	// li r3,-23
	ctx.r3.s64 = -23;
	// addi r1,r1,1648
	ctx.r1.s64 = ctx.r1.s64 + 1648;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8241D99C:
	// li r3,-22
	ctx.r3.s64 = -22;
	// addi r1,r1,1648
	ctx.r1.s64 = ctx.r1.s64 + 1648;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8241D9A8:
	// li r3,-21
	ctx.r3.s64 = -21;
	// addi r1,r1,1648
	ctx.r1.s64 = ctx.r1.s64 + 1648;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8241D9B4:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r10,r11,14280
	ctx.r10.s64 = ctx.r11.s64 + 14280;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8241daf8
	if (ctx.cr6.eq) goto loc_8241DAF8;
	// addi r7,r27,4
	ctx.r7.s64 = ctx.r27.s64 + 4;
loc_8241D9D0:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_8241D9D4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r6,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r6.s64;
	// beq cr6,0x8241d9f8
	if (ctx.cr6.eq) goto loc_8241D9F8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8241d9d4
	if (ctx.cr6.eq) goto loc_8241D9D4;
loc_8241D9F8:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8241dad0
	if (!ctx.cr6.eq) goto loc_8241DAD0;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r10,r27,36
	ctx.r10.s64 = ctx.r27.s64 + 36;
loc_8241DA08:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r5,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r5.s64;
	// beq cr6,0x8241da2c
	if (ctx.cr6.eq) goto loc_8241DA2C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8241da08
	if (ctx.cr6.eq) goto loc_8241DA08;
loc_8241DA2C:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8241dad0
	if (!ctx.cr6.eq) goto loc_8241DAD0;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r10,r27,68
	ctx.r10.s64 = ctx.r27.s64 + 68;
loc_8241DA3C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r4,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r4.s64;
	// beq cr6,0x8241da60
	if (ctx.cr6.eq) goto loc_8241DA60;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8241da3c
	if (ctx.cr6.eq) goto loc_8241DA3C;
loc_8241DA60:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8241dad0
	if (!ctx.cr6.eq) goto loc_8241DAD0;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// addi r10,r27,100
	ctx.r10.s64 = ctx.r27.s64 + 100;
loc_8241DA70:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r3,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r3.s64;
	// beq cr6,0x8241da94
	if (ctx.cr6.eq) goto loc_8241DA94;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8241da70
	if (ctx.cr6.eq) goto loc_8241DA70;
loc_8241DA94:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8241dad0
	if (!ctx.cr6.eq) goto loc_8241DAD0;
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// addi r10,r27,164
	ctx.r10.s64 = ctx.r27.s64 + 164;
loc_8241DAA4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x8241dac8
	if (ctx.cr6.eq) goto loc_8241DAC8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8241daa4
	if (ctx.cr6.eq) goto loc_8241DAA4;
loc_8241DAC8:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8241daec
	if (ctx.cr6.eq) goto loc_8241DAEC;
loc_8241DAD0:
	// addi r29,r29,36
	ctx.r29.s64 = ctx.r29.s64 + 36;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8241d9d0
	if (!ctx.cr6.eq) goto loc_8241D9D0;
	// li r3,-25
	ctx.r3.s64 = -25;
	// addi r1,r1,1648
	ctx.r1.s64 = ctx.r1.s64 + 1648;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8241DAEC:
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8241db04
	if (!ctx.cr6.eq) goto loc_8241DB04;
loc_8241DAF8:
	// li r3,-25
	ctx.r3.s64 = -25;
	// addi r1,r1,1648
	ctx.r1.s64 = ctx.r1.s64 + 1648;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8241DB04:
	// lwz r6,492(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 492);
	// lwz r5,28(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// cmplw cr6,r5,r6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x8241db20
	if (ctx.cr6.eq) goto loc_8241DB20;
	// li r3,-26
	ctx.r3.s64 = -26;
	// addi r1,r1,1648
	ctx.r1.s64 = ctx.r1.s64 + 1648;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8241DB20:
	// lwz r11,488(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 488);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x8241db6c
	if (ctx.cr6.eq) goto loc_8241DB6C;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x8241db3c
	if (ctx.cr6.eq) goto loc_8241DB3C;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// b 0x8241db98
	goto loc_8241DB98;
loc_8241DB3C:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8241f648
	ctx.lr = 0x8241DB44;
	sub_8241F648(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8241f698
	ctx.lr = 0x8241DB54;
	sub_8241F698(ctx, base);
	// li r5,20
	ctx.r5.s64 = 20;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8241f790
	ctx.lr = 0x8241DB64;
	sub_8241F790(ctx, base);
	// li r31,20
	ctx.r31.s64 = 20;
	// b 0x8241db98
	goto loc_8241DB98;
loc_8241DB6C:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82402fb8
	ctx.lr = 0x8241DB74;
	sub_82402FB8(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82402ff8
	ctx.lr = 0x8241DB84;
	sub_82402FF8(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x824030d0
	ctx.lr = 0x8241DB94;
	sub_824030D0(ctx, base);
	// li r31,16
	ctx.r31.s64 = 16;
loc_8241DB98:
	// li r7,4
	ctx.r7.s64 = 4;
	// lwz r30,492(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 492);
	// addi r6,r29,32
	ctx.r6.s64 = ctx.r29.s64 + 32;
	// lwz r5,28(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// lwz r4,24(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// bl 0x8241ff58
	ctx.lr = 0x8241DBB4;
	sub_8241FF58(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82420080
	ctx.lr = 0x8241DBC4;
	sub_82420080(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82420088
	ctx.lr = 0x8241DBCC;
	sub_82420088(ctx, base);
	// rlwinm r4,r30,0,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r10,r1,256
	ctx.r10.s64 = ctx.r1.s64 + 256;
	// subf r11,r31,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r31.s64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259d3a0
	ctx.lr = 0x8241DBE8;
	sub_8259D3A0(ctx, base);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8241dc20
	if (ctx.cr6.eq) goto loc_8241DC20;
	// add r8,r11,r31
	ctx.r8.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_8241DC00:
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r9,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r9.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8241dc20
	if (!ctx.cr0.eq) goto loc_8241DC20;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8241dc00
	if (!ctx.cr6.eq) goto loc_8241DC00;
loc_8241DC20:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8241dc34
	if (ctx.cr6.eq) goto loc_8241DC34;
	// li r3,-27
	ctx.r3.s64 = -27;
	// addi r1,r1,1648
	ctx.r1.s64 = ctx.r1.s64 + 1648;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8241DC34:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,1648
	ctx.r1.s64 = ctx.r1.s64 + 1648;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8241DC40:
	// li r3,-20
	ctx.r3.s64 = -20;
	// addi r1,r1,1648
	ctx.r1.s64 = ctx.r1.s64 + 1648;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8241DC4C:
	// li r3,-19
	ctx.r3.s64 = -19;
	// addi r1,r1,1648
	ctx.r1.s64 = ctx.r1.s64 + 1648;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8241DC58:
	// li r3,-18
	ctx.r3.s64 = -18;
	// addi r1,r1,1648
	ctx.r1.s64 = ctx.r1.s64 + 1648;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8241DC64:
	// li r3,-16
	ctx.r3.s64 = -16;
	// addi r1,r1,1648
	ctx.r1.s64 = ctx.r1.s64 + 1648;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8241DC70:
	// li r3,-15
	ctx.r3.s64 = -15;
	// addi r1,r1,1648
	ctx.r1.s64 = ctx.r1.s64 + 1648;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8241DC7C:
	// li r3,-14
	ctx.r3.s64 = -14;
	// addi r1,r1,1648
	ctx.r1.s64 = ctx.r1.s64 + 1648;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8241DC88:
	// li r3,-13
	ctx.r3.s64 = -13;
	// addi r1,r1,1648
	ctx.r1.s64 = ctx.r1.s64 + 1648;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8241DC94:
	// li r3,-12
	ctx.r3.s64 = -12;
	// addi r1,r1,1648
	ctx.r1.s64 = ctx.r1.s64 + 1648;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8241DCA0:
	// li r3,-11
	ctx.r3.s64 = -11;
	// addi r1,r1,1648
	ctx.r1.s64 = ctx.r1.s64 + 1648;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8241DCAC:
	// li r3,-10
	ctx.r3.s64 = -10;
	// addi r1,r1,1648
	ctx.r1.s64 = ctx.r1.s64 + 1648;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8241DCB8:
	// li r3,-9
	ctx.r3.s64 = -9;
	// addi r1,r1,1648
	ctx.r1.s64 = ctx.r1.s64 + 1648;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8241DCC4:
	// li r3,-8
	ctx.r3.s64 = -8;
	// addi r1,r1,1648
	ctx.r1.s64 = ctx.r1.s64 + 1648;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8241DCD0:
	// li r3,-6
	ctx.r3.s64 = -6;
	// addi r1,r1,1648
	ctx.r1.s64 = ctx.r1.s64 + 1648;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8241DCDC:
	// li r3,-5
	ctx.r3.s64 = -5;
	// addi r1,r1,1648
	ctx.r1.s64 = ctx.r1.s64 + 1648;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8241DCE8:
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,1648
	ctx.r1.s64 = ctx.r1.s64 + 1648;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8241DCF4:
	// li r3,-2
	ctx.r3.s64 = -2;
	// addi r1,r1,1648
	ctx.r1.s64 = ctx.r1.s64 + 1648;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8241DD00:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,1648
	ctx.r1.s64 = ctx.r1.s64 + 1648;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8241DD0C"))) PPC_WEAK_FUNC(sub_8241DD0C);
PPC_FUNC_IMPL(__imp__sub_8241DD0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241DD10"))) PPC_WEAK_FUNC(sub_8241DD10);
PPC_FUNC_IMPL(__imp__sub_8241DD10) {
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
	// li r3,292
	ctx.r3.s64 = 292;
	// bl 0x82366620
	ctx.lr = 0x8241DD28;
	sub_82366620(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8241dd44
	if (ctx.cr6.eq) goto loc_8241DD44;
	// li r5,292
	ctx.r5.s64 = 292;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8259d300
	ctx.lr = 0x8241DD40;
	sub_8259D300(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8241DD44:
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

__attribute__((alias("__imp__sub_8241DD58"))) PPC_WEAK_FUNC(sub_8241DD58);
PPC_FUNC_IMPL(__imp__sub_8241DD58) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8241c920
	ctx.lr = 0x8241DD74;
	sub_8241C920(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82366680
	ctx.lr = 0x8241DD7C;
	sub_82366680(ctx, base);
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

__attribute__((alias("__imp__sub_8241DD90"))) PPC_WEAK_FUNC(sub_8241DD90);
PPC_FUNC_IMPL(__imp__sub_8241DD90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x8241DD98;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x8241de18
	if (!ctx.cr6.eq) goto loc_8241DE18;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82416940
	ctx.lr = 0x8241DDBC;
	sub_82416940(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8241de18
	if (ctx.cr6.eq) goto loc_8241DE18;
	// li r3,292
	ctx.r3.s64 = 292;
	// bl 0x82366620
	ctx.lr = 0x8241DDD0;
	sub_82366620(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8241de10
	if (ctx.cr6.eq) goto loc_8241DE10;
	// li r5,292
	ctx.r5.s64 = 292;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8259d300
	ctx.lr = 0x8241DDE8;
	sub_8259D300(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,264
	ctx.r3.s64 = ctx.r31.s64 + 264;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8259d3a0
	ctx.lr = 0x8241DDFC;
	sub_8259D3A0(ctx, base);
	// li r11,20
	ctx.r11.s64 = 20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8241DE10:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82416780
	ctx.lr = 0x8241DE18;
	sub_82416780(ctx, base);
loc_8241DE18:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8241DE24"))) PPC_WEAK_FUNC(sub_8241DE24);
PPC_FUNC_IMPL(__imp__sub_8241DE24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241DE28"))) PPC_WEAK_FUNC(sub_8241DE28);
PPC_FUNC_IMPL(__imp__sub_8241DE28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baec
	ctx.lr = 0x8241DE30;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// bl 0x8241c920
	ctx.lr = 0x8241DE48;
	sub_8241C920(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8241e008
	if (!ctx.cr6.eq) goto loc_8241E008;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82416688
	ctx.lr = 0x8241DE60;
	sub_82416688(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// bne cr6,0x8241de78
	if (!ctx.cr6.eq) goto loc_8241DE78;
	// li r3,-9
	ctx.r3.s64 = -9;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
loc_8241DE78:
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r31,264
	ctx.r3.s64 = ctx.r31.s64 + 264;
	// li r25,2
	ctx.r25.s64 = 2;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r9,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r9.u32);
	// stw r9,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r9.u32);
	// sth r25,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r25.u16);
	// sth r9,266(r31)
	PPC_STORE_U16(ctx.r31.u32 + 266, ctx.r9.u16);
	// stw r9,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r9.u32);
	// bne cr6,0x8241dea8
	if (!ctx.cr6.eq) goto loc_8241DEA8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r29,r11,3672
	ctx.r29.s64 = ctx.r11.s64 + 3672;
loc_8241DEA8:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bgt cr6,0x8241dec4
	if (ctx.cr6.gt) goto loc_8241DEC4;
	// lwz r11,288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// li r26,443
	ctx.r26.s64 = 443;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8241dec4
	if (!ctx.cr6.eq) goto loc_8241DEC4;
	// li r26,80
	ctx.r26.s64 = 80;
loc_8241DEC4:
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8241df04
	if (ctx.cr6.eq) goto loc_8241DF04;
loc_8241DED8:
	// cmpwi cr6,r10,58
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 58, ctx.xer);
	// beq cr6,0x8241df04
	if (ctx.cr6.eq) goto loc_8241DF04;
	// cmplwi cr6,r30,255
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 255, ctx.xer);
	// bge cr6,0x8241df04
	if (!ctx.cr6.lt) goto loc_8241DF04;
	// add r10,r30,r31
	ctx.r10.u64 = ctx.r30.u64 + ctx.r31.u64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stb r11,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, ctx.r11.u8);
	// lbzx r11,r30,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r29.u32);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8241ded8
	if (!ctx.cr6.eq) goto loc_8241DED8;
loc_8241DF04:
	// add r8,r30,r31
	ctx.r8.u64 = ctx.r30.u64 + ctx.r31.u64;
	// addi r28,r31,8
	ctx.r28.s64 = ctx.r31.s64 + 8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stb r9,8(r8)
	PPC_STORE_U8(ctx.r8.u32 + 8, ctx.r9.u8);
	// bl 0x824111f8
	ctx.lr = 0x8241DF18;
	sub_824111F8(ctx, base);
	// lbz r7,268(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 268);
	// lbz r5,269(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 269);
	// rotlwi r6,r7,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// lbz r4,270(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 270);
	// lbz r11,271(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 271);
	// or r3,r6,r5
	ctx.r3.u64 = ctx.r6.u64 | ctx.r5.u64;
	// rlwinm r10,r3,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 | ctx.r4.u64;
	// rlwinm r8,r9,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 | ctx.r11.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x8241df68
	if (!ctx.cr6.eq) goto loc_8241DF68;
	// rlwinm r11,r27,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 24) & 0xFFFFFF;
	// stb r27,271(r31)
	PPC_STORE_U8(ctx.r31.u32 + 271, ctx.r27.u8);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r4,r11,24,8,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// stb r5,270(r31)
	PPC_STORE_U8(ctx.r31.u32 + 270, ctx.r5.u8);
	// stb r11,269(r31)
	PPC_STORE_U8(ctx.r31.u32 + 269, ctx.r11.u8);
	// stb r4,268(r31)
	PPC_STORE_U8(ctx.r31.u32 + 268, ctx.r4.u8);
loc_8241DF68:
	// add r11,r30,r29
	ctx.r11.u64 = ctx.r30.u64 + ctx.r29.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,58
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 58, ctx.xer);
	// bne cr6,0x8241dfa0
	if (!ctx.cr6.eq) goto loc_8241DFA0;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259dbd0
	ctx.lr = 0x8241DF84;
	sub_8259DBD0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// srawi r9,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 8;
	// stb r9,266(r31)
	PPC_STORE_U8(ctx.r31.u32 + 266, ctx.r9.u8);
	// bl 0x8259dbd0
	ctx.lr = 0x8241DF98;
	sub_8259DBD0(ctx, base);
	// stb r3,267(r31)
	PPC_STORE_U8(ctx.r31.u32 + 267, ctx.r3.u8);
	// b 0x8241dfac
	goto loc_8241DFAC;
loc_8241DFA0:
	// srawi r5,r26,8
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r26.s32 >> 8;
	// stb r26,267(r31)
	PPC_STORE_U8(ctx.r31.u32 + 267, ctx.r26.u8);
	// stb r5,266(r31)
	PPC_STORE_U8(ctx.r31.u32 + 266, ctx.r5.u8);
loc_8241DFAC:
	// lbz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 268);
	// lbz r11,269(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 269);
	// rotlwi r10,r3,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r3.u32, 8);
	// lbz r9,270(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 270);
	// lbz r8,271(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 271);
	// or r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 | ctx.r11.u64;
	// rlwinm r6,r7,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// or r5,r6,r9
	ctx.r5.u64 = ctx.r6.u64 | ctx.r9.u64;
	// rlwinm r4,r5,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// or r3,r4,r8
	ctx.r3.u64 = ctx.r4.u64 | ctx.r8.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8241e000
	if (!ctx.cr6.eq) goto loc_8241E000;
	// li r4,30000
	ctx.r4.s64 = 30000;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82416fc8
	ctx.lr = 0x8241DFE8;
	sub_82416FC8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
loc_8241E000:
	// stw r25,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r25.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8241E008:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8241E010"))) PPC_WEAK_FUNC(sub_8241E010);
PPC_FUNC_IMPL(__imp__sub_8241E010) {
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
	// lwz r11,288(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	// li r4,1
	ctx.r4.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8241e030
	if (!ctx.cr6.eq) goto loc_8241E030;
	// li r4,0
	ctx.r4.s64 = 0;
loc_8241E030:
	// bl 0x8241c920
	ctx.lr = 0x8241E034;
	sub_8241C920(ctx, base);
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

__attribute__((alias("__imp__sub_8241E048"))) PPC_WEAK_FUNC(sub_8241E048);
PPC_FUNC_IMPL(__imp__sub_8241E048) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bac0
	ctx.lr = 0x8241E050;
	__savegprlr_14(ctx, base);
	// stwu r1,-2656(r1)
	ea = -2656 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,1
	ctx.r27.s64 = 1;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r31,288(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 288);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8241e1d0
	if (ctx.cr6.eq) goto loc_8241E1D0;
	// lwz r11,280(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 280);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// blt cr6,0x8241e1d0
	if (ctx.cr6.lt) goto loc_8241E1D0;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bgt cr6,0x8241e1d0
	if (ctx.cr6.gt) goto loc_8241E1D0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8241e0dc
	if (!ctx.cr6.lt) goto loc_8241E0DC;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// subf r5,r11,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r4,r9,8
	ctx.r4.s64 = ctx.r9.s64 + 8;
	// bl 0x824169d0
	ctx.lr = 0x8241E0B0;
	sub_824169D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8241e0c4
	if (!ctx.cr6.gt) goto loc_8241E0C4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8241E0C4:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8241e0dc
	if (!ctx.cr6.eq) goto loc_8241E0DC;
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
loc_8241E0DC:
	// lwz r11,16400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16400);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bge cr6,0x8241e12c
	if (!ctx.cr6.lt) goto loc_8241E12C;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// subfic r5,r11,4
	ctx.xer.ca = ctx.r11.u32 <= 4;
	ctx.r5.s64 = 4 - ctx.r11.s64;
	// addi r4,r10,16408
	ctx.r4.s64 = ctx.r10.s64 + 16408;
	// bl 0x82416a80
	ctx.lr = 0x8241E108;
	sub_82416A80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8241e124
	if (!ctx.cr6.gt) goto loc_8241E124;
	// lwz r11,16400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16400);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r11,16400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16400, ctx.r11.u32);
	// stw r11,16396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16396, ctx.r11.u32);
loc_8241E124:
	// bge cr6,0x8241e12c
	if (!ctx.cr6.lt) goto loc_8241E12C;
	// stw r27,284(r30)
	PPC_STORE_U32(ctx.r30.u32 + 284, ctx.r27.u32);
loc_8241E12C:
	// lwz r8,16400(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16400);
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// bne cr6,0x8241e180
	if (!ctx.cr6.eq) goto loc_8241E180;
	// lbz r7,16408(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16408);
	// lis r5,0
	ctx.r5.s64 = 0;
	// lbz r6,16409(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16409);
	// rotlwi r3,r7,8
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// ori r4,r5,32768
	ctx.r4.u64 = ctx.r5.u64 | 32768;
	// or r11,r3,r6
	ctx.r11.u64 = ctx.r3.u64 | ctx.r6.u64;
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// stw r11,16400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16400, ctx.r11.u32);
	// bge cr6,0x8241e174
	if (!ctx.cr6.lt) goto loc_8241E174;
	// lbz r10,16410(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16410);
	// clrlwi r11,r11,18
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// stw r11,16400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16400, ctx.r11.u32);
	// b 0x8241e180
	goto loc_8241E180;
loc_8241E174:
	// clrlwi r11,r11,17
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFF;
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// stw r10,16400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16400, ctx.r10.u32);
loc_8241E180:
	// lwz r10,16400(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16400);
	// lwz r11,16396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16396);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8241e1d0
	if (!ctx.cr6.lt) goto loc_8241E1D0;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// subf r5,r11,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r4,r9,16408
	ctx.r4.s64 = ctx.r9.s64 + 16408;
	// bl 0x82416a80
	ctx.lr = 0x8241E1B0;
	sub_82416A80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8241e1c8
	if (!ctx.cr6.gt) goto loc_8241E1C8;
	// lwz r11,16396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16396);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r9,16396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16396, ctx.r9.u32);
loc_8241E1C8:
	// bge cr6,0x8241e1d0
	if (!ctx.cr6.lt) goto loc_8241E1D0;
	// stw r27,284(r30)
	PPC_STORE_U32(ctx.r30.u32 + 284, ctx.r27.u32);
loc_8241E1D0:
	// lwz r8,280(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 280);
	// li r14,2
	ctx.r14.s64 = 2;
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// bne cr6,0x8241e250
	if (!ctx.cr6.eq) goto loc_8241E250;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8241E1F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8241e250
	if (ctx.cr6.eq) goto loc_8241E250;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8241e214
	if (!ctx.cr6.eq) goto loc_8241E214;
	// li r5,4097
	ctx.r5.s64 = 4097;
	// stw r5,280(r30)
	PPC_STORE_U32(ctx.r30.u32 + 280, ctx.r5.u32);
	// b 0x8241e240
	goto loc_8241E240;
loc_8241E214:
	// stw r14,280(r30)
	PPC_STORE_U32(ctx.r30.u32 + 280, ctx.r14.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// stb r4,271(r30)
	PPC_STORE_U8(ctx.r30.u32 + 271, ctx.r4.u8);
	// rlwinm r9,r11,24,8,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// stb r10,270(r30)
	PPC_STORE_U8(ctx.r30.u32 + 270, ctx.r10.u8);
	// stb r11,269(r30)
	PPC_STORE_U8(ctx.r30.u32 + 269, ctx.r11.u8);
	// stb r9,268(r30)
	PPC_STORE_U8(ctx.r30.u32 + 268, ctx.r9.u8);
loc_8241E240:
	// lwz r6,12(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8241E24C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r28.u32);
loc_8241E250:
	// lwz r5,280(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 280);
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// bne cr6,0x8241e274
	if (!ctx.cr6.eq) goto loc_8241E274;
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r30,264
	ctx.r4.s64 = ctx.r30.s64 + 264;
	// bl 0x82416868
	ctx.lr = 0x8241E26C;
	sub_82416868(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r4,280(r30)
	PPC_STORE_U32(ctx.r30.u32 + 280, ctx.r4.u32);
loc_8241E274:
	// lwz r3,280(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 280);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x8241e2cc
	if (!ctx.cr6.eq) goto loc_8241E2CC;
	// lis r4,29556
	ctx.r4.s64 = 1936982016;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,24948
	ctx.r4.u64 = ctx.r4.u64 | 24948;
	// bl 0x82416bf8
	ctx.lr = 0x8241E298;
	sub_82416BF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8241e2bc
	if (!ctx.cr6.gt) goto loc_8241E2BC;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// li r11,10
	ctx.r11.s64 = 10;
	// bne cr6,0x8241e2b0
	if (!ctx.cr6.eq) goto loc_8241E2B0;
	// li r11,20
	ctx.r11.s64 = 20;
loc_8241E2B0:
	// stw r11,280(r30)
	PPC_STORE_U32(ctx.r30.u32 + 280, ctx.r11.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r28,284(r30)
	PPC_STORE_U32(ctx.r30.u32 + 284, ctx.r28.u32);
loc_8241E2BC:
	// bge cr6,0x8241e2cc
	if (!ctx.cr6.lt) goto loc_8241E2CC;
	// li r11,4098
	ctx.r11.s64 = 4098;
	// stw r27,284(r30)
	PPC_STORE_U32(ctx.r30.u32 + 284, ctx.r27.u32);
	// stw r11,280(r30)
	PPC_STORE_U32(ctx.r30.u32 + 280, ctx.r11.u32);
loc_8241E2CC:
	// lwz r10,280(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 280);
	// lis r9,0
	ctx.r9.s64 = 0;
	// lis r8,0
	ctx.r8.s64 = 0;
	// ori r20,r9,33204
	ctx.r20.u64 = ctx.r9.u64 | 33204;
	// ori r21,r8,33208
	ctx.r21.u64 = ctx.r8.u64 | 33208;
	// cmpwi cr6,r10,10
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10, ctx.xer);
	// bne cr6,0x8241e380
	if (!ctx.cr6.eq) goto loc_8241E380;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r10,r1,185
	ctx.r10.s64 = ctx.r1.s64 + 185;
	// addi r9,r11,13888
	ctx.r9.s64 = ctx.r11.s64 + 13888;
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// add r29,r31,r20
	ctx.r29.u64 = ctx.r31.u64 + ctx.r20.u64;
	// addi r3,r1,188
	ctx.r3.s64 = ctx.r1.s64 + 188;
	// add r4,r31,r21
	ctx.r4.u64 = ctx.r31.u64 + ctx.r21.u64;
	// lbz r5,1(r9)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// sth r28,8(r11)
	PPC_STORE_U16(ctx.r11.u32 + 8, ctx.r28.u16);
	// lbz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// lbz r11,2(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// li r9,3
	ctx.r9.s64 = 3;
	// stb r27,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r27.u8);
	// stb r28,177(r1)
	PPC_STORE_U8(ctx.r1.u32 + 177, ctx.r28.u8);
	// stb r14,178(r1)
	PPC_STORE_U8(ctx.r1.u32 + 178, ctx.r14.u8);
	// stb r28,179(r1)
	PPC_STORE_U8(ctx.r1.u32 + 179, ctx.r28.u8);
	// stb r9,180(r1)
	PPC_STORE_U8(ctx.r1.u32 + 180, ctx.r9.u8);
	// stb r6,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r6.u8);
	// stb r5,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r5.u8);
	// stb r11,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r11.u8);
	// stb r28,181(r1)
	PPC_STORE_U8(ctx.r1.u32 + 181, ctx.r28.u8);
	// stb r28,182(r1)
	PPC_STORE_U8(ctx.r1.u32 + 182, ctx.r28.u8);
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// srawi r7,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 8;
	// stb r7,183(r1)
	PPC_STORE_U8(ctx.r1.u32 + 183, ctx.r7.u8);
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stb r5,184(r1)
	PPC_STORE_U8(ctx.r1.u32 + 184, ctx.r5.u8);
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8259d3a0
	ctx.lr = 0x8241E364;
	sub_8259D3A0(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r11,12
	ctx.r5.s64 = ctx.r11.s64 + 12;
	// bl 0x8241caa8
	ctx.lr = 0x8241E378;
	sub_8241CAA8(ctx, base);
	// li r10,11
	ctx.r10.s64 = 11;
	// stw r10,280(r30)
	PPC_STORE_U32(ctx.r30.u32 + 280, ctx.r10.u32);
loc_8241E380:
	// lwz r9,280(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 280);
	// lis r8,0
	ctx.r8.s64 = 0;
	// lis r7,0
	ctx.r7.s64 = 0;
	// lis r6,0
	ctx.r6.s64 = 0;
	// ori r16,r8,32800
	ctx.r16.u64 = ctx.r8.u64 | 32800;
	// ori r24,r7,33232
	ctx.r24.u64 = ctx.r7.u64 | 33232;
	// ori r25,r6,33236
	ctx.r25.u64 = ctx.r6.u64 | 33236;
	// cmpwi cr6,r9,11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 11, ctx.xer);
	// bne cr6,0x8241e46c
	if (!ctx.cr6.eq) goto loc_8241E46C;
	// lwz r11,16400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16400);
	// lwz r5,16396(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16396);
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8241e46c
	if (!ctx.cr6.eq) goto loc_8241E46C;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// ble cr6,0x8241e46c
	if (!ctx.cr6.gt) goto loc_8241E46C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241cc88
	ctx.lr = 0x8241E3C4;
	sub_8241CC88(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addis r4,r31,1
	ctx.r4.s64 = ctx.r31.s64 + 65536;
	// addi r27,r11,11
	ctx.r27.s64 = ctx.r11.s64 + 11;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r4,-32268
	ctx.r4.s64 = ctx.r4.s64 + -32268;
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r7,7(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// lbz r9,6(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// rotlwi r8,r10,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r6,9(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// rotlwi r10,r7,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// lbz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// or r26,r8,r9
	ctx.r26.u64 = ctx.r8.u64 | ctx.r9.u64;
	// lbz r11,10(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10);
	// rotlwi r9,r6,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r6.u32, 8);
	// or r23,r10,r5
	ctx.r23.u64 = ctx.r10.u64 | ctx.r5.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// or r29,r9,r11
	ctx.r29.u64 = ctx.r9.u64 | ctx.r11.u64;
	// bl 0x8241cf28
	ctx.lr = 0x8241E414;
	sub_8241CF28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x8241e428
	if (!ctx.cr6.lt) goto loc_8241E428;
	// li r8,4099
	ctx.r8.s64 = 4099;
	// stw r8,280(r30)
	PPC_STORE_U32(ctx.r30.u32 + 280, ctx.r8.u32);
	// b 0x8241e46c
	goto loc_8241E46C;
loc_8241E428:
	// add r11,r27,r26
	ctx.r11.u64 = ctx.r27.u64 + ctx.r26.u64;
	// add r10,r31,r16
	ctx.r10.u64 = ctx.r31.u64 + ctx.r16.u64;
	// add r4,r11,r23
	ctx.r4.u64 = ctx.r11.u64 + ctx.r23.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// add r3,r31,r25
	ctx.r3.u64 = ctx.r31.u64 + ctx.r25.u64;
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r7,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r7.u8);
	// lbz r6,1(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stb r6,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r6.u8);
	// lbz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// stb r11,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r11.u8);
	// stwx r29,r31,r24
	PPC_STORE_U32(ctx.r31.u32 + ctx.r24.u32, ctx.r29.u32);
	// bl 0x8259d3a0
	ctx.lr = 0x8241E45C;
	sub_8259D3A0(ctx, base);
	// li r10,12
	ctx.r10.s64 = 12;
	// stw r10,280(r30)
	PPC_STORE_U32(ctx.r30.u32 + 280, ctx.r10.u32);
	// stw r28,16400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16400, ctx.r28.u32);
	// stw r28,16396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16396, ctx.r28.u32);
loc_8241E46C:
	// lwz r9,280(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 280);
	// lis r8,0
	ctx.r8.s64 = 0;
	// lis r7,0
	ctx.r7.s64 = 0;
	// ori r22,r8,32808
	ctx.r22.u64 = ctx.r8.u64 | 32808;
	// ori r23,r7,32804
	ctx.r23.u64 = ctx.r7.u64 | 32804;
	// li r15,16
	ctx.r15.s64 = 16;
	// cmpwi cr6,r9,12
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 12, ctx.xer);
	// bne cr6,0x8241e600
	if (!ctx.cr6.eq) goto loc_8241E600;
	// addis r19,r31,1
	ctx.r19.s64 = ctx.r31.s64 + 65536;
	// addis r29,r31,1
	ctx.r29.s64 = ctx.r31.s64 + 65536;
	// addi r19,r19,-32734
	ctx.r19.s64 = ctx.r19.s64 + -32734;
	// add r26,r31,r23
	ctx.r26.u64 = ctx.r31.u64 + ctx.r23.u64;
	// addi r29,r29,-31044
	ctx.r29.s64 = ctx.r29.s64 + -31044;
	// add r27,r31,r22
	ctx.r27.u64 = ctx.r31.u64 + ctx.r22.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lbz r6,0(r19)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r19.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// rlwinm r4,r6,29,3,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r4,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r4.u32);
	// bl 0x8241c868
	ctx.lr = 0x8241E4BC;
	sub_8241C868(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82402fb8
	ctx.lr = 0x8241E4C4;
	sub_82402FB8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// bl 0x82402ff8
	ctx.lr = 0x8241E4D4;
	sub_82402FF8(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-26176
	ctx.r4.s64 = ctx.r11.s64 + -26176;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82402ff8
	ctx.lr = 0x8241E4E8;
	sub_82402FF8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r4,r31,r21
	ctx.r4.u64 = ctx.r31.u64 + ctx.r21.u64;
	// lwzx r5,r31,r20
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r20.u32);
	// bl 0x82402ff8
	ctx.lr = 0x8241E4F8;
	sub_82402FF8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r4,r31,r25
	ctx.r4.u64 = ctx.r31.u64 + ctx.r25.u64;
	// lwzx r5,r31,r24
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r24.u32);
	// bl 0x82402ff8
	ctx.lr = 0x8241E508;
	sub_82402FF8(ctx, base);
	// addis r17,r31,1
	ctx.r17.s64 = ctx.r31.s64 + 65536;
	// addis r18,r31,1
	ctx.r18.s64 = ctx.r31.s64 + 65536;
	// addi r17,r17,-32600
	ctx.r17.s64 = ctx.r17.s64 + -32600;
	// addi r18,r18,-32596
	ctx.r18.s64 = ctx.r18.s64 + -32596;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// stw r15,0(r17)
	PPC_STORE_U32(ctx.r17.u32 + 0, ctx.r15.u32);
	// bl 0x824030d0
	ctx.lr = 0x8241E52C;
	sub_824030D0(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// lwz r5,0(r17)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8241f1e0
	ctx.lr = 0x8241E540;
	sub_8241F1E0(ctx, base);
	// lis r5,0
	ctx.r5.s64 = 0;
	// addis r29,r31,1
	ctx.r29.s64 = ctx.r31.s64 + 65536;
	// ori r3,r5,34356
	ctx.r3.u64 = ctx.r5.u64 | 34356;
	// addi r29,r29,-31316
	ctx.r29.s64 = ctx.r29.s64 + -31316;
	// addis r6,r31,1
	ctx.r6.s64 = ctx.r31.s64 + 65536;
	// addis r4,r31,1
	ctx.r4.s64 = ctx.r31.s64 + 65536;
	// addi r6,r6,-31176
	ctx.r6.s64 = ctx.r6.s64 + -31176;
	// lwzx r7,r31,r3
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	// addi r4,r4,-31312
	ctx.r4.s64 = ctx.r4.s64 + -31312;
	// addi r3,r1,1200
	ctx.r3.s64 = ctx.r1.s64 + 1200;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8241ff58
	ctx.lr = 0x8241E570;
	sub_8241FF58(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,1200
	ctx.r3.s64 = ctx.r1.s64 + 1200;
	// lwz r5,0(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// bl 0x8241ff98
	ctx.lr = 0x8241E580;
	sub_8241FF98(ctx, base);
	// addi r3,r1,1200
	ctx.r3.s64 = ctx.r1.s64 + 1200;
	// bl 0x82420088
	ctx.lr = 0x8241E588;
	sub_82420088(ctx, base);
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// addi r4,r1,1200
	ctx.r4.s64 = ctx.r1.s64 + 1200;
	// addi r3,r1,186
	ctx.r3.s64 = ctx.r1.s64 + 186;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// sth r28,8(r11)
	PPC_STORE_U16(ctx.r11.u32 + 8, ctx.r28.u16);
	// stb r28,10(r11)
	PPC_STORE_U8(ctx.r11.u32 + 10, ctx.r28.u8);
	// lis r11,0
	ctx.r11.s64 = 0;
	// stb r14,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r14.u8);
	// lbzx r9,r31,r16
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r16.u32);
	// ori r10,r11,32801
	ctx.r10.u64 = ctx.r11.u64 | 32801;
	// stb r9,177(r1)
	PPC_STORE_U8(ctx.r1.u32 + 177, ctx.r9.u8);
	// lbzx r8,r31,r10
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// stb r8,178(r1)
	PPC_STORE_U8(ctx.r1.u32 + 178, ctx.r8.u8);
	// lbz r7,0(r19)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r19.u32 + 0);
	// stb r7,179(r1)
	PPC_STORE_U8(ctx.r1.u32 + 179, ctx.r7.u8);
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// srawi r5,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 8;
	// stb r5,182(r1)
	PPC_STORE_U8(ctx.r1.u32 + 182, ctx.r5.u8);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stb r10,183(r1)
	PPC_STORE_U8(ctx.r1.u32 + 183, ctx.r10.u8);
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8259d3a0
	ctx.lr = 0x8241E5E4;
	sub_8259D3A0(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r11,10
	ctx.r5.s64 = ctx.r11.s64 + 10;
	// bl 0x8241caa8
	ctx.lr = 0x8241E5F8;
	sub_8241CAA8(ctx, base);
	// li r8,13
	ctx.r8.s64 = 13;
	// stw r8,280(r30)
	PPC_STORE_U32(ctx.r30.u32 + 280, ctx.r8.u32);
loc_8241E600:
	// lwz r7,280(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 280);
	// cmpwi cr6,r7,13
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 13, ctx.xer);
	// bne cr6,0x8241e63c
	if (!ctx.cr6.eq) goto loc_8241E63C;
	// lwz r11,16400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16400);
	// lwz r6,16396(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16396);
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8241e63c
	if (!ctx.cr6.eq) goto loc_8241E63C;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// ble cr6,0x8241e63c
	if (!ctx.cr6.gt) goto loc_8241E63C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241cc88
	ctx.lr = 0x8241E62C;
	sub_8241CC88(ctx, base);
	// li r5,14
	ctx.r5.s64 = 14;
	// stw r5,280(r30)
	PPC_STORE_U32(ctx.r30.u32 + 280, ctx.r5.u32);
	// stw r28,16400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16400, ctx.r28.u32);
	// stw r28,16396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16396, ctx.r28.u32);
loc_8241E63C:
	// lwz r4,280(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 280);
	// cmpwi cr6,r4,14
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 14, ctx.xer);
	// bne cr6,0x8241e70c
	if (!ctx.cr6.eq) goto loc_8241E70C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82402fb8
	ctx.lr = 0x8241E650;
	sub_82402FB8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r4,r31,r22
	ctx.r4.u64 = ctx.r31.u64 + ctx.r22.u64;
	// lwzx r5,r31,r23
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r23.u32);
	// bl 0x82402ff8
	ctx.lr = 0x8241E660;
	sub_82402FF8(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-26172
	ctx.r4.s64 = ctx.r11.s64 + -26172;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82402ff8
	ctx.lr = 0x8241E674;
	sub_82402FF8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r4,r31,r21
	ctx.r4.u64 = ctx.r31.u64 + ctx.r21.u64;
	// lwzx r5,r31,r20
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r20.u32);
	// bl 0x82402ff8
	ctx.lr = 0x8241E684;
	sub_82402FF8(ctx, base);
	// add r29,r31,r24
	ctx.r29.u64 = ctx.r31.u64 + ctx.r24.u64;
	// add r27,r31,r25
	ctx.r27.u64 = ctx.r31.u64 + ctx.r25.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82402ff8
	ctx.lr = 0x8241E69C;
	sub_82402FF8(ctx, base);
	// addis r25,r31,1
	ctx.r25.s64 = ctx.r31.s64 + 65536;
	// addis r26,r31,1
	ctx.r26.s64 = ctx.r31.s64 + 65536;
	// addi r25,r25,-32468
	ctx.r25.s64 = ctx.r25.s64 + -32468;
	// addi r26,r26,-32464
	ctx.r26.s64 = ctx.r26.s64 + -32464;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r15,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r15.u32);
	// bl 0x824030d0
	ctx.lr = 0x8241E6C0;
	sub_824030D0(ctx, base);
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,0(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r3,-30786
	ctx.r3.s64 = ctx.r3.s64 + -30786;
	// bl 0x8241f1e0
	ctx.lr = 0x8241E6D8;
	sub_8241F1E0(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,177
	ctx.r3.s64 = ctx.r1.s64 + 177;
	// stb r11,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r11.u8);
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8259d3a0
	ctx.lr = 0x8241E6F0;
	sub_8259D3A0(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x8241caa8
	ctx.lr = 0x8241E704;
	sub_8241CAA8(ctx, base);
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r10,280(r30)
	PPC_STORE_U32(ctx.r30.u32 + 280, ctx.r10.u32);
loc_8241E70C:
	// lwz r9,280(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 280);
	// cmpwi cr6,r9,15
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 15, ctx.xer);
	// bne cr6,0x8241e744
	if (!ctx.cr6.eq) goto loc_8241E744;
	// lwz r11,16400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16400);
	// lwz r8,16396(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16396);
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8241e744
	if (!ctx.cr6.eq) goto loc_8241E744;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// ble cr6,0x8241e744
	if (!ctx.cr6.gt) goto loc_8241E744;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241cc88
	ctx.lr = 0x8241E738;
	sub_8241CC88(ctx, base);
	// stw r28,16400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16400, ctx.r28.u32);
	// stw r28,16396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16396, ctx.r28.u32);
	// stw r15,280(r30)
	PPC_STORE_U32(ctx.r30.u32 + 280, ctx.r15.u32);
loc_8241E744:
	// addi r1,r1,2656
	ctx.r1.s64 = ctx.r1.s64 + 2656;
	// b 0x8259bb10
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8241E74C"))) PPC_WEAK_FUNC(sub_8241E74C);
PPC_FUNC_IMPL(__imp__sub_8241E74C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241E750"))) PPC_WEAK_FUNC(sub_8241E750);
PPC_FUNC_IMPL(__imp__sub_8241E750) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x8241E758;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r9,288(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 288);
	// bge cr6,0x8241e79c
	if (!ctx.cr6.lt) goto loc_8241E79C;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8241E780:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8241e780
	if (!ctx.cr6.eq) goto loc_8241E780;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// rotlwi r31,r7,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
loc_8241E79C:
	// cmpwi cr6,r31,16000
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 16000, ctx.xer);
	// ble cr6,0x8241e7a8
	if (!ctx.cr6.gt) goto loc_8241E7A8;
	// li r31,16000
	ctx.r31.s64 = 16000;
loc_8241E7A8:
	// lwz r6,280(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 280);
	// cmpwi cr6,r6,16
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 16, ctx.xer);
	// bne cr6,0x8241e7e0
	if (!ctx.cr6.eq) goto loc_8241E7E0;
	// lwz r5,4(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x8241e7e0
	if (!ctx.cr6.eq) goto loc_8241E7E0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241caa8
	ctx.lr = 0x8241E7D4;
	sub_8241CAA8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8241e7e0
	if (ctx.cr6.lt) goto loc_8241E7E0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8241E7E0:
	// lwz r4,280(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 280);
	// cmpwi cr6,r4,20
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 20, ctx.xer);
	// bne cr6,0x8241e808
	if (!ctx.cr6.eq) goto loc_8241E808;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824169d0
	ctx.lr = 0x8241E808;
	sub_824169D0(ctx, base);
loc_8241E808:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8241E810"))) PPC_WEAK_FUNC(sub_8241E810);
PPC_FUNC_IMPL(__imp__sub_8241E810) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baec
	ctx.lr = 0x8241E818;
	__savegprlr_25(ctx, base);
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
	// li r30,-1
	ctx.r30.s64 = -1;
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r11,280(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 280);
	// lwz r31,288(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 288);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bne cr6,0x8241e8e8
	if (!ctx.cr6.eq) goto loc_8241E8E8;
	// addis r28,r31,1
	ctx.r28.s64 = ctx.r31.s64 + 65536;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// addi r28,r28,-32740
	ctx.r28.s64 = ctx.r28.s64 + -32740;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8241e890
	if (!ctx.cr6.eq) goto loc_8241E890;
	// lwz r11,16400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16400);
	// lwz r9,16396(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16396);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8241e890
	if (!ctx.cr6.eq) goto loc_8241E890;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// ble cr6,0x8241e880
	if (!ctx.cr6.gt) goto loc_8241E880;
	// stw r25,16404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16404, ctx.r25.u32);
	// bl 0x8241cc88
	ctx.lr = 0x8241E878;
	sub_8241CC88(ctx, base);
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// b 0x8241e890
	goto loc_8241E890;
loc_8241E880:
	// lwz r8,284(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 284);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8241e890
	if (ctx.cr6.eq) goto loc_8241E890;
	// li r30,-1
	ctx.r30.s64 = -1;
loc_8241E890:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8241e8e8
	if (ctx.cr6.eq) goto loc_8241E8E8;
	// lwz r11,16404(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16404);
	// lwz r7,16400(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16400);
	// subf r30,r11,r7
	ctx.r30.s64 = ctx.r7.s64 - ctx.r11.s64;
	// cmpw cr6,r26,r30
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x8241e8b4
	if (!ctx.cr6.lt) goto loc_8241E8B4;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_8241E8B4:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8259d3a0
	ctx.lr = 0x8241E8C4;
	sub_8259D3A0(ctx, base);
	// lwz r11,16404(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16404);
	// lwz r6,16400(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16400);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// stw r11,16404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16404, ctx.r11.u32);
	// blt cr6,0x8241e8e8
	if (ctx.cr6.lt) goto loc_8241E8E8;
	// stw r25,16400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16400, ctx.r25.u32);
	// stw r25,16396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16396, ctx.r25.u32);
	// stw r25,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r25.u32);
loc_8241E8E8:
	// lwz r5,280(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 280);
	// cmpwi cr6,r5,20
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 20, ctx.xer);
	// bne cr6,0x8241e914
	if (!ctx.cr6.eq) goto loc_8241E914;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82416a80
	ctx.lr = 0x8241E910;
	sub_82416A80(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_8241E914:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ble cr6,0x8241e92c
	if (!ctx.cr6.gt) goto loc_8241E92C;
	// cmpw cr6,r30,r26
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r26.s32, ctx.xer);
	// bge cr6,0x8241e92c
	if (!ctx.cr6.lt) goto loc_8241E92C;
	// stbx r25,r30,r27
	PPC_STORE_U8(ctx.r30.u32 + ctx.r27.u32, ctx.r25.u8);
loc_8241E92C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8241E934"))) PPC_WEAK_FUNC(sub_8241E934);
PPC_FUNC_IMPL(__imp__sub_8241E934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241E938"))) PPC_WEAK_FUNC(sub_8241E938);
PPC_FUNC_IMPL(__imp__sub_8241E938) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8241e9b0
	if (ctx.cr6.eq) goto loc_8241E9B0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82416bf8
	ctx.lr = 0x8241E96C;
	sub_82416BF8(ctx, base);
	// lis r11,29556
	ctx.r11.s64 = 1936982016;
	// ori r10,r11,24948
	ctx.r10.u64 = ctx.r11.u64 | 24948;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8241e9b0
	if (!ctx.cr6.eq) goto loc_8241E9B0;
	// lwz r11,280(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 280);
	// cmpwi cr6,r11,4096
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4096, ctx.xer);
	// blt cr6,0x8241e98c
	if (ctx.cr6.lt) goto loc_8241E98C;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8241E98C:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8241e9ac
	if (ctx.cr6.eq) goto loc_8241E9AC;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8241e9b0
	if (!ctx.cr6.gt) goto loc_8241E9B0;
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// beq cr6,0x8241e9b0
	if (ctx.cr6.eq) goto loc_8241E9B0;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// beq cr6,0x8241e9b0
	if (ctx.cr6.eq) goto loc_8241E9B0;
loc_8241E9AC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8241E9B0:
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

__attribute__((alias("__imp__sub_8241E9C8"))) PPC_WEAK_FUNC(sub_8241E9C8);
PPC_FUNC_IMPL(__imp__sub_8241E9C8) {
	PPC_FUNC_PROLOGUE();
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8241e9f8
	if (ctx.cr6.eq) goto loc_8241E9F8;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r8,32
	ctx.r8.s64 = 32;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8241E9E4:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r8,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r8.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x8241e9e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8241E9E4;
loc_8241E9F8:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8241ea20
	if (ctx.cr6.eq) goto loc_8241EA20;
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// li r9,13
	ctx.r9.s64 = 13;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8241EA0C:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8241ea0c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8241EA0C;
loc_8241EA20:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8241EA28"))) PPC_WEAK_FUNC(sub_8241EA28);
PPC_FUNC_IMPL(__imp__sub_8241EA28) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x8241ea84
	if (ctx.cr6.eq) goto loc_8241EA84;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r31,266
	ctx.r3.s64 = ctx.r31.s64 + 266;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8241f1e0
	ctx.lr = 0x8241EA70;
	sub_8241F1E0(ctx, base);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x8241f1e0
	ctx.lr = 0x8241EA84;
	sub_8241F1E0(ctx, base);
loc_8241EA84:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
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

__attribute__((alias("__imp__sub_8241EAA0"))) PPC_WEAK_FUNC(sub_8241EAA0);
PPC_FUNC_IMPL(__imp__sub_8241EAA0) {
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
	// beq cr6,0x8241ead0
	if (ctx.cr6.eq) goto loc_8241EAD0;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x8241f350
	ctx.lr = 0x8241EAC8;
	sub_8241F350(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_8241EAD0:
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

__attribute__((alias("__imp__sub_8241EAE4"))) PPC_WEAK_FUNC(sub_8241EAE4);
PPC_FUNC_IMPL(__imp__sub_8241EAE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241EAE8"))) PPC_WEAK_FUNC(sub_8241EAE8);
PPC_FUNC_IMPL(__imp__sub_8241EAE8) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8241eb90
	if (ctx.cr6.eq) goto loc_8241EB90;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8241eb90
	if (ctx.cr6.eq) goto loc_8241EB90;
	// cmpwi cr6,r31,8
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 8, ctx.xer);
	// bge cr6,0x8241eb2c
	if (!ctx.cr6.lt) goto loc_8241EB2C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8241eb94
	goto loc_8241EB94;
loc_8241EB2C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82402fb8
	ctx.lr = 0x8241EB34;
	sub_82402FB8(ctx, base);
	// addi r5,r31,-8
	ctx.r5.s64 = ctx.r31.s64 + -8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82402ff8
	ctx.lr = 0x8241EB44;
	sub_82402FF8(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824030d0
	ctx.lr = 0x8241EB54;
	sub_824030D0(ctx, base);
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
loc_8241EB64:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8241eb84
	if (!ctx.cr0.eq) goto loc_8241EB84;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8241eb64
	if (!ctx.cr6.eq) goto loc_8241EB64;
loc_8241EB84:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// li r3,-2
	ctx.r3.s64 = -2;
	// bne cr6,0x8241eb94
	if (!ctx.cr6.eq) goto loc_8241EB94;
loc_8241EB90:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8241EB94:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
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

__attribute__((alias("__imp__sub_8241EBAC"))) PPC_WEAK_FUNC(sub_8241EBAC);
PPC_FUNC_IMPL(__imp__sub_8241EBAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241EBB0"))) PPC_WEAK_FUNC(sub_8241EBB0);
PPC_FUNC_IMPL(__imp__sub_8241EBB0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r3,8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 8, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8241EBE0"))) PPC_WEAK_FUNC(sub_8241EBE0);
PPC_FUNC_IMPL(__imp__sub_8241EBE0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r3,r4,8
	ctx.r3.s64 = ctx.r4.s64 + 8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8241EBF8"))) PPC_WEAK_FUNC(sub_8241EBF8);
PPC_FUNC_IMPL(__imp__sub_8241EBF8) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r31,r5,-8
	ctx.r31.s64 = ctx.r5.s64 + -8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8241ec58
	if (ctx.cr6.eq) goto loc_8241EC58;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge cr6,0x8241ec30
	if (!ctx.cr6.lt) goto loc_8241EC30;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8241ec5c
	goto loc_8241EC5C;
loc_8241EC30:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82402fb8
	ctx.lr = 0x8241EC38;
	sub_82402FB8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82402ff8
	ctx.lr = 0x8241EC48;
	sub_82402FF8(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// add r4,r31,r30
	ctx.r4.u64 = ctx.r31.u64 + ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824030d0
	ctx.lr = 0x8241EC58;
	sub_824030D0(ctx, base);
loc_8241EC58:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8241EC5C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
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

__attribute__((alias("__imp__sub_8241EC74"))) PPC_WEAK_FUNC(sub_8241EC74);
PPC_FUNC_IMPL(__imp__sub_8241EC74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241EC78"))) PPC_WEAK_FUNC(sub_8241EC78);
PPC_FUNC_IMPL(__imp__sub_8241EC78) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r3,r3,266
	ctx.r3.s64 = ctx.r3.s64 + 266;
	// b 0x8241f350
	sub_8241F350(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8241EC8C"))) PPC_WEAK_FUNC(sub_8241EC8C);
PPC_FUNC_IMPL(__imp__sub_8241EC8C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8241EC90"))) PPC_WEAK_FUNC(sub_8241EC90);
PPC_FUNC_IMPL(__imp__sub_8241EC90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x8241EC98;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,296
	ctx.r3.s64 = 296;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x82366620
	ctx.lr = 0x8241ECB4;
	sub_82366620(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8241ecc8
	if (!ctx.cr6.eq) goto loc_8241ECC8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_8241ECC8:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,37
	ctx.r9.s64 = 37;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8241ECD8:
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x8241ecd8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8241ECD8;
	// stw r28,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r28.u32);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
	// bge cr6,0x8241ed2c
	if (!ctx.cr6.lt) goto loc_8241ED2C;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8241ED0C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8241ed0c
	if (!ctx.cr6.eq) goto loc_8241ED0C;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r8,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
loc_8241ED2C:
	// cmpwi cr6,r31,256
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 256, ctx.xer);
	// ble cr6,0x8241ed3c
	if (!ctx.cr6.gt) goto loc_8241ED3C;
	// li r31,256
	ctx.r31.s64 = 256;
	// b 0x8241ed44
	goto loc_8241ED44;
loc_8241ED3C:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x8241ed54
	if (ctx.cr6.eq) goto loc_8241ED54;
loc_8241ED44:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r30,40
	ctx.r3.s64 = ctx.r30.s64 + 40;
	// bl 0x8259d3a0
	ctx.lr = 0x8241ED54;
	sub_8259D3A0(ctx, base);
loc_8241ED54:
	// stw r31,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r31.u32);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8241ed78
	if (ctx.cr6.eq) goto loc_8241ED78;
loc_8241ED68:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8241ed68
	if (!ctx.cr6.eq) goto loc_8241ED68;
loc_8241ED78:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8241ED88"))) PPC_WEAK_FUNC(sub_8241ED88);
PPC_FUNC_IMPL(__imp__sub_8241ED88) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8241edf8
	if (ctx.cr6.eq) goto loc_8241EDF8;
loc_8241EDB0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8241edd0
	if (ctx.cr6.eq) goto loc_8241EDD0;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8241edb0
	if (!ctx.cr6.eq) goto loc_8241EDB0;
	// b 0x8241edf8
	goto loc_8241EDF8;
loc_8241EDD0:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,24(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8241ede4
	if (ctx.cr6.eq) goto loc_8241EDE4;
	// bl 0x82420d10
	ctx.lr = 0x8241EDE4;
	sub_82420D10(ctx, base);
loc_8241EDE4:
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// bl 0x82366680
	ctx.lr = 0x8241EDF8;
	sub_82366680(ctx, base);
loc_8241EDF8:
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

__attribute__((alias("__imp__sub_8241EE10"))) PPC_WEAK_FUNC(sub_8241EE10);
PPC_FUNC_IMPL(__imp__sub_8241EE10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x8241EE18;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8241ef80
	if (ctx.cr6.eq) goto loc_8241EF80;
	// li r28,4
	ctx.r28.s64 = 4;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,3
	ctx.r29.s64 = 3;
	// li r27,1
	ctx.r27.s64 = 1;
loc_8241EE38:
	// lis r3,28526
	ctx.r3.s64 = 1869479936;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r3,r3,27758
	ctx.r3.u64 = ctx.r3.u64 | 27758;
	// bl 0x8240a8f0
	ctx.lr = 0x8241EE4C;
	sub_8240A8F0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8241ee58
	if (ctx.cr6.eq) goto loc_8241EE58;
	// stw r28,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r28.u32);
loc_8241EE58:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bge cr6,0x8241ef08
	if (!ctx.cr6.lt) goto loc_8241EF08;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8241ee78
	if (!ctx.cr6.eq) goto loc_8241EE78;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
loc_8241EE78:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8241ef08
	if (!ctx.cr6.eq) goto loc_8241EF08;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8241ef08
	if (!ctx.cr6.eq) goto loc_8241EF08;
	// lis r3,26735
	ctx.r3.s64 = 1752104960;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r3,r3,29556
	ctx.r3.u64 = ctx.r3.u64 | 29556;
	// bl 0x8240a8f0
	ctx.lr = 0x8241EEA0;
	sub_8240A8F0(ctx, base);
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lis r3,29541
	ctx.r3.s64 = 1935998976;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r3,r3,29302
	ctx.r3.u64 = ctx.r3.u64 | 29302;
	// bl 0x8240a8f0
	ctx.lr = 0x8241EEB8;
	sub_8240A8F0(ctx, base);
	// addi r9,r31,24
	ctx.r9.s64 = ctx.r31.s64 + 24;
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r8,r1,116
	ctx.r8.s64 = ctx.r1.s64 + 116;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82420c90
	ctx.lr = 0x8241EEF4;
	sub_82420C90(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r11,2
	ctx.r11.s64 = 2;
	// beq cr6,0x8241ef04
	if (ctx.cr6.eq) goto loc_8241EF04;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_8241EF04:
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
loc_8241EF08:
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// bne cr6,0x8241ef60
	if (!ctx.cr6.eq) goto loc_8241EF60;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lbz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 8);
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8241ef60
	if (ctx.cr6.eq) goto loc_8241EF60;
	// lhz r11,22(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 22);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne cr6,0x8241ef40
	if (!ctx.cr6.eq) goto loc_8241EF40;
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// b 0x8241ef4c
	goto loc_8241EF4C;
loc_8241EF40:
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x8241ef4c
	if (!ctx.cr6.eq) goto loc_8241EF4C;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_8241EF4C:
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// lhz r5,12(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 12);
	// lhz r4,10(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 10);
	// subf r3,r5,r4
	ctx.r3.s64 = ctx.r4.s64 - ctx.r5.s64;
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
loc_8241EF60:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8241ef8c
	if (ctx.cr6.eq) goto loc_8241EF8C;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8241ef8c
	if (ctx.cr6.eq) goto loc_8241EF8C;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8241ee38
	if (!ctx.cr6.eq) goto loc_8241EE38;
loc_8241EF80:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_8241EF8C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8241EF98"))) PPC_WEAK_FUNC(sub_8241EF98);
PPC_FUNC_IMPL(__imp__sub_8241EF98) {
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
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82366620
	ctx.lr = 0x8241EFAC;
	sub_82366620(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8241efc4
	if (!ctx.cr6.eq) goto loc_8241EFC4;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8241EFC4:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
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
}

__attribute__((alias("__imp__sub_8241EFE8"))) PPC_WEAK_FUNC(sub_8241EFE8);
PPC_FUNC_IMPL(__imp__sub_8241EFE8) {
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
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8241f01c
	if (ctx.cr6.eq) goto loc_8241F01C;
loc_8241F008:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241ed88
	ctx.lr = 0x8241F010;
	sub_8241ED88(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8241f008
	if (!ctx.cr6.eq) goto loc_8241F008;
loc_8241F01C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82366680
	ctx.lr = 0x8241F024;
	sub_82366680(ctx, base);
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

__attribute__((alias("__imp__sub_8241F038"))) PPC_WEAK_FUNC(sub_8241F038);
PPC_FUNC_IMPL(__imp__sub_8241F038) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8241ec90
	ctx.lr = 0x8241F058;
	sub_8241EC90(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8241f078
	if (ctx.cr6.eq) goto loc_8241F078;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x824085b0
	ctx.lr = 0x8241F074;
	sub_824085B0(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_8241F078:
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

__attribute__((alias("__imp__sub_8241F090"))) PPC_WEAK_FUNC(sub_8241F090);
PPC_FUNC_IMPL(__imp__sub_8241F090) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x8241F098;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r3,29541
	ctx.r3.s64 = 1935998976;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r3,r3,25461
	ctx.r3.u64 = ctx.r3.u64 | 25461;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x8240a8f0
	ctx.lr = 0x8241F0BC;
	sub_8240A8F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8241f0d0
	if (!ctx.cr6.eq) goto loc_8241F0D0;
loc_8241F0C4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_8241F0D0:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241ec90
	ctx.lr = 0x8241F0E4;
	sub_8241EC90(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8241f0c4
	if (ctx.cr6.eq) goto loc_8241F0C4;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8241F0F8"))) PPC_WEAK_FUNC(sub_8241F0F8);
PPC_FUNC_IMPL(__imp__sub_8241F0F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x8241F100;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x8241ee10
	ctx.lr = 0x8241F118;
	sub_8241EE10(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8241f12c
	if (!ctx.cr6.eq) goto loc_8241F12C;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_8241F12C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8241f18c
	if (ctx.cr6.eq) goto loc_8241F18C;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,22
	ctx.r10.s64 = 22;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8241F144:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8241f144
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8241F144;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
	// lwz r9,32(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x8241f174
	if (ctx.cr6.eq) goto loc_8241F174;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8241F174:
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r8.u32);
	// bl 0x82408640
	ctx.lr = 0x8241F18C;
	sub_82408640(ctx, base);
loc_8241F18C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8241f1c0
	if (ctx.cr6.eq) goto loc_8241F1C0;
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8241f1a8
	if (!ctx.cr6.gt) goto loc_8241F1A8;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_8241F1A8:
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8241f1c0
	if (ctx.cr6.eq) goto loc_8241F1C0;
	// addi r4,r30,40
	ctx.r4.s64 = ctx.r30.s64 + 40;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8259d3a0
	ctx.lr = 0x8241F1C0;
	sub_8259D3A0(ctx, base);
loc_8241F1C0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r31,4(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8241ed88
	ctx.lr = 0x8241F1D0;
	sub_8241ED88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8241F1DC"))) PPC_WEAK_FUNC(sub_8241F1DC);
PPC_FUNC_IMPL(__imp__sub_8241F1DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241F1E0"))) PPC_WEAK_FUNC(sub_8241F1E0);
PPC_FUNC_IMPL(__imp__sub_8241F1E0) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bad8
	ctx.lr = 0x8241F1E8;
	__savegprlr_20(ctx, base);
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// bge cr6,0x8241f1f4
	if (!ctx.cr6.lt) goto loc_8241F1F4;
	// li r6,1
	ctx.r6.s64 = 1;
loc_8241F1F4:
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// stb r24,256(r3)
	PPC_STORE_U8(ctx.r3.u32 + 256, ctx.r24.u8);
	// stb r24,257(r3)
	PPC_STORE_U8(ctx.r3.u32 + 257, ctx.r24.u8);
loc_8241F204:
	// stbx r11,r11,r3
	PPC_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r11.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// blt cr6,0x8241f204
	if (ctx.cr6.lt) goto loc_8241F204;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x8241f34c
	if (!ctx.cr6.gt) goto loc_8241F34C;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x8241f34c
	if (!ctx.cr6.gt) goto loc_8241F34C;
	// subfic r27,r3,1
	ctx.xer.ca = ctx.r3.u32 <= 1;
	ctx.r27.s64 = 1 - ctx.r3.s64;
	// subfic r26,r3,2
	ctx.xer.ca = ctx.r3.u32 <= 2;
	ctx.r26.s64 = 2 - ctx.r3.s64;
	// subfic r25,r3,3
	ctx.xer.ca = ctx.r3.u32 <= 3;
	ctx.r25.s64 = 3 - ctx.r3.s64;
loc_8241F234:
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8241F23C:
	// divwu r8,r10,r5
	ctx.r8.u32 = ctx.r10.u32 / ctx.r5.u32;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// clrlwi r29,r7,24
	ctx.r29.u64 = ctx.r7.u32 & 0xFF;
	// mullw r7,r8,r5
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// subf r31,r7,r10
	ctx.r31.s64 = ctx.r10.s64 - ctx.r7.s64;
	// add r28,r27,r11
	ctx.r28.u64 = ctx.r27.u64 + ctx.r11.u64;
	// add r22,r26,r11
	ctx.r22.u64 = ctx.r26.u64 + ctx.r11.u64;
	// divwu r23,r28,r5
	ctx.r23.u32 = ctx.r28.u32 / ctx.r5.u32;
	// add r21,r25,r11
	ctx.r21.u64 = ctx.r25.u64 + ctx.r11.u64;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// lbzx r30,r31,r4
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r4.u32);
	// mullw r31,r23,r5
	ctx.r31.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r5.s32);
	// add r30,r30,r9
	ctx.r30.u64 = ctx.r30.u64 + ctx.r9.u64;
	// subf r23,r31,r28
	ctx.r23.s64 = ctx.r28.s64 - ctx.r31.s64;
	// add r30,r30,r29
	ctx.r30.u64 = ctx.r30.u64 + ctx.r29.u64;
	// divwu r28,r22,r5
	ctx.r28.u32 = ctx.r22.u32 / ctx.r5.u32;
	// clrlwi r30,r30,24
	ctx.r30.u64 = ctx.r30.u32 & 0xFF;
	// mullw r28,r28,r5
	ctx.r28.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r5.s32);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// subf r22,r28,r22
	ctx.r22.s64 = ctx.r22.s64 - ctx.r28.s64;
	// divwu r28,r21,r5
	ctx.r28.u32 = ctx.r21.u32 / ctx.r5.u32;
	// addi r7,r11,2
	ctx.r7.s64 = ctx.r11.s64 + 2;
	// mullw r20,r28,r5
	ctx.r20.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r5.s32);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// lbzx r30,r29,r3
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r3.u32);
	// addi r31,r11,3
	ctx.r31.s64 = ctx.r11.s64 + 3;
	// subf r21,r20,r21
	ctx.r21.s64 = ctx.r21.s64 - ctx.r20.s64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// twllei r5,0
	if (ctx.r5.u32 <= 0) __builtin_debugtrap();
	// twllei r5,0
	if (ctx.r5.u32 <= 0) __builtin_debugtrap();
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// twllei r5,0
	if (ctx.r5.u32 <= 0) __builtin_debugtrap();
	// stbx r9,r29,r3
	PPC_STORE_U8(ctx.r29.u32 + ctx.r3.u32, ctx.r9.u8);
	// twllei r5,0
	if (ctx.r5.u32 <= 0) __builtin_debugtrap();
	// lbz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// cmplwi cr6,r10,256
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 256, ctx.xer);
	// lbzx r30,r23,r4
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r23.u32 + ctx.r4.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// add r30,r30,r9
	ctx.r30.u64 = ctx.r30.u64 + ctx.r9.u64;
	// add r30,r30,r28
	ctx.r30.u64 = ctx.r30.u64 + ctx.r28.u64;
	// clrlwi r30,r30,24
	ctx.r30.u64 = ctx.r30.u32 & 0xFF;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// lbzx r28,r29,r3
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r3.u32);
	// stb r28,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r28.u8);
	// stbx r9,r29,r3
	PPC_STORE_U8(ctx.r29.u32 + ctx.r3.u32, ctx.r9.u8);
	// lbz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// lbzx r8,r22,r4
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r22.u32 + ctx.r4.u32);
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 + ctx.r30.u64;
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// lbzx r8,r30,r3
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r3.u32);
	// stb r8,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r8.u8);
	// stbx r9,r30,r3
	PPC_STORE_U8(ctx.r30.u32 + ctx.r3.u32, ctx.r9.u8);
	// lbz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lbzx r8,r21,r4
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r21.u32 + ctx.r4.u32);
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r7,r8,r29
	ctx.r7.u64 = ctx.r8.u64 + ctx.r29.u64;
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// lbzx r30,r8,r3
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r3.u32);
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// stbx r9,r8,r3
	PPC_STORE_U8(ctx.r8.u32 + ctx.r3.u32, ctx.r9.u8);
	// blt cr6,0x8241f23c
	if (ctx.cr6.lt) goto loc_8241F23C;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bgt cr6,0x8241f234
	if (ctx.cr6.gt) goto loc_8241F234;
loc_8241F34C:
	// b 0x8259bb28
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8241F350"))) PPC_WEAK_FUNC(sub_8241F350);
PPC_FUNC_IMPL(__imp__sub_8241F350) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,256(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 256);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lbz r10,257(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 257);
	// ble cr6,0x8241f3b0
	if (!ctx.cr6.gt) goto loc_8241F3B0;
loc_8241F360:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lbzx r9,r11,r3
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// lbzx r8,r10,r3
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r3.u32);
	// add r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// clrlwi r8,r6,24
	ctx.r8.u64 = ctx.r6.u32 & 0xFF;
	// stbx r9,r11,r3
	PPC_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r9.u8);
	// stbx r7,r10,r3
	PPC_STORE_U8(ctx.r10.u32 + ctx.r3.u32, ctx.r7.u8);
	// lbz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// lbzx r6,r8,r3
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r3.u32);
	// xor r9,r6,r7
	ctx.r9.u64 = ctx.r6.u64 ^ ctx.r7.u64;
	// stb r9,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r9.u8);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// bgt cr6,0x8241f360
	if (ctx.cr6.gt) goto loc_8241F360;
loc_8241F3B0:
	// stb r11,256(r3)
	PPC_STORE_U8(ctx.r3.u32 + 256, ctx.r11.u8);
	// stb r10,257(r3)
	PPC_STORE_U8(ctx.r3.u32 + 257, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8241F3BC"))) PPC_WEAK_FUNC(sub_8241F3BC);
PPC_FUNC_IMPL(__imp__sub_8241F3BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241F3C0"))) PPC_WEAK_FUNC(sub_8241F3C0);
PPC_FUNC_IMPL(__imp__sub_8241F3C0) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae0
	ctx.lr = 0x8241F3C8;
	__savegprlr_22(ctx, base);
	// addi r9,r1,-416
	ctx.r9.s64 = ctx.r1.s64 + -416;
	// addi r11,r4,2
	ctx.r11.s64 = ctx.r4.s64 + 2;
	// li r10,16
	ctx.r10.s64 = 16;
loc_8241F3D4:
	// lbz r8,-2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lbz r7,-1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// rotlwi r6,r8,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// or r8,r6,r7
	ctx.r8.u64 = ctx.r6.u64 | ctx.r7.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r7,r8,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// or r6,r7,r5
	ctx.r6.u64 = ctx.r7.u64 | ctx.r5.u64;
	// rlwinm r5,r6,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// or r4,r5,r4
	ctx.r4.u64 = ctx.r5.u64 | ctx.r4.u64;
	// stw r4,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r4.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne cr6,0x8241f3d4
	if (!ctx.cr6.eq) goto loc_8241F3D4;
	// addi r11,r1,-408
	ctx.r11.s64 = ctx.r1.s64 + -408;
	// li r10,64
	ctx.r10.s64 = 64;
loc_8241F41C:
	// lwz r9,44(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lwz r8,24(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r7,-8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// xor r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// xor r4,r6,r7
	ctx.r4.u64 = ctx.r6.u64 ^ ctx.r7.u64;
	// xor r9,r4,r5
	ctx.r9.u64 = ctx.r4.u64 ^ ctx.r5.u64;
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// or r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stw r6,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r6.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne cr6,0x8241f41c
	if (!ctx.cr6.eq) goto loc_8241F41C;
	// lwz r28,8(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r4,23170
	ctx.r4.s64 = 1518469120;
	// lwz r27,12(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r5,r1,-416
	ctx.r5.s64 = ctx.r1.s64 + -416;
	// lwz r26,16(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r6,20
	ctx.r6.s64 = 20;
	// lwz r25,20(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lwz r24,24(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// ori r29,r4,31129
	ctx.r29.u64 = ctx.r4.u64 | 31129;
loc_8241F490:
	// and r30,r9,r11
	ctx.r30.u64 = ctx.r9.u64 & ctx.r11.u64;
	// lwz r31,0(r5)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// andc r4,r8,r11
	ctx.r4.u64 = ctx.r8.u64 & ~ctx.r11.u64;
	// rlwinm r23,r10,5,27,31
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0x1F;
	// rlwinm r22,r10,5,0,26
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// or r4,r4,r30
	ctx.r4.u64 = ctx.r4.u64 | ctx.r30.u64;
	// or r30,r23,r22
	ctx.r30.u64 = ctx.r23.u64 | ctx.r22.u64;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// add r4,r4,r30
	ctx.r4.u64 = ctx.r4.u64 + ctx.r30.u64;
	// rlwinm r30,r11,30,2,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// add r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 + ctx.r31.u64;
	// rlwinm r31,r11,30,0,1
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0xC0000000;
	// add r7,r4,r7
	ctx.r7.u64 = ctx.r4.u64 + ctx.r7.u64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// add r4,r7,r29
	ctx.r4.u64 = ctx.r7.u64 + ctx.r29.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// or r9,r31,r30
	ctx.r9.u64 = ctx.r31.u64 | ctx.r30.u64;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// bne cr6,0x8241f490
	if (!ctx.cr6.eq) goto loc_8241F490;
	// lis r4,28377
	ctx.r4.s64 = 1859715072;
	// addi r5,r1,-336
	ctx.r5.s64 = ctx.r1.s64 + -336;
	// li r6,20
	ctx.r6.s64 = 20;
	// ori r29,r4,60321
	ctx.r29.u64 = ctx.r4.u64 | 60321;
loc_8241F4F8:
	// xor r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// lwz r31,0(r5)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r23,r10,5,27,31
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0x1F;
	// rlwinm r22,r10,5,0,26
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// xor r30,r4,r11
	ctx.r30.u64 = ctx.r4.u64 ^ ctx.r11.u64;
	// or r4,r23,r22
	ctx.r4.u64 = ctx.r23.u64 | ctx.r22.u64;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// add r4,r4,r30
	ctx.r4.u64 = ctx.r4.u64 + ctx.r30.u64;
	// rlwinm r30,r11,30,2,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// add r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 + ctx.r31.u64;
	// rlwinm r31,r11,30,0,1
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0xC0000000;
	// add r7,r4,r7
	ctx.r7.u64 = ctx.r4.u64 + ctx.r7.u64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// add r4,r7,r29
	ctx.r4.u64 = ctx.r7.u64 + ctx.r29.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// or r9,r31,r30
	ctx.r9.u64 = ctx.r31.u64 | ctx.r30.u64;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// bne cr6,0x8241f4f8
	if (!ctx.cr6.eq) goto loc_8241F4F8;
	// lis r4,28900
	ctx.r4.s64 = 1893990400;
	// addi r5,r1,-256
	ctx.r5.s64 = ctx.r1.s64 + -256;
	// li r6,20
	ctx.r6.s64 = 20;
	// ori r29,r4,17188
	ctx.r29.u64 = ctx.r4.u64 | 17188;
loc_8241F55C:
	// or r31,r9,r11
	ctx.r31.u64 = ctx.r9.u64 | ctx.r11.u64;
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// and r30,r9,r11
	ctx.r30.u64 = ctx.r9.u64 & ctx.r11.u64;
	// and r31,r31,r8
	ctx.r31.u64 = ctx.r31.u64 & ctx.r8.u64;
	// rlwinm r23,r10,5,27,31
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0x1F;
	// rlwinm r22,r10,5,0,26
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// or r31,r31,r30
	ctx.r31.u64 = ctx.r31.u64 | ctx.r30.u64;
	// or r30,r23,r22
	ctx.r30.u64 = ctx.r23.u64 | ctx.r22.u64;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// add r31,r31,r30
	ctx.r31.u64 = ctx.r31.u64 + ctx.r30.u64;
	// rlwinm r30,r11,30,2,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// add r7,r31,r7
	ctx.r7.u64 = ctx.r31.u64 + ctx.r7.u64;
	// rlwinm r31,r11,30,0,1
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0xC0000000;
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// subf r4,r29,r7
	ctx.r4.s64 = ctx.r7.s64 - ctx.r29.s64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// or r9,r31,r30
	ctx.r9.u64 = ctx.r31.u64 | ctx.r30.u64;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// bne cr6,0x8241f55c
	if (!ctx.cr6.eq) goto loc_8241F55C;
	// lis r4,13725
	ctx.r4.s64 = 899481600;
	// addi r5,r1,-176
	ctx.r5.s64 = ctx.r1.s64 + -176;
	// li r6,20
	ctx.r6.s64 = 20;
	// ori r29,r4,15914
	ctx.r29.u64 = ctx.r4.u64 | 15914;
loc_8241F5C8:
	// xor r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// lwz r31,0(r5)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r23,r10,5,27,31
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0x1F;
	// rlwinm r22,r10,5,0,26
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// xor r30,r4,r11
	ctx.r30.u64 = ctx.r4.u64 ^ ctx.r11.u64;
	// or r4,r23,r22
	ctx.r4.u64 = ctx.r23.u64 | ctx.r22.u64;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// add r4,r4,r30
	ctx.r4.u64 = ctx.r4.u64 + ctx.r30.u64;
	// rlwinm r30,r11,30,2,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// add r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 + ctx.r31.u64;
	// rlwinm r31,r11,30,0,1
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0xC0000000;
	// add r7,r4,r7
	ctx.r7.u64 = ctx.r4.u64 + ctx.r7.u64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// subf r4,r29,r7
	ctx.r4.s64 = ctx.r7.s64 - ctx.r29.s64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// or r9,r31,r30
	ctx.r9.u64 = ctx.r31.u64 | ctx.r30.u64;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// bne cr6,0x8241f5c8
	if (!ctx.cr6.eq) goto loc_8241F5C8;
	// add r6,r28,r4
	ctx.r6.u64 = ctx.r28.u64 + ctx.r4.u64;
	// add r5,r27,r11
	ctx.r5.u64 = ctx.r27.u64 + ctx.r11.u64;
	// add r4,r26,r9
	ctx.r4.u64 = ctx.r26.u64 + ctx.r9.u64;
	// add r11,r25,r8
	ctx.r11.u64 = ctx.r25.u64 + ctx.r8.u64;
	// add r10,r24,r7
	ctx.r10.u64 = ctx.r24.u64 + ctx.r7.u64;
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// stw r5,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8241F648"))) PPC_WEAK_FUNC(sub_8241F648);
PPC_FUNC_IMPL(__imp__sub_8241F648) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-4147
	ctx.r8.s64 = -271777792;
	// lis r10,26437
	ctx.r10.s64 = 1732575232;
	// ori r7,r8,43913
	ctx.r7.u64 = ctx.r8.u64 | 43913;
	// lis r6,-26438
	ctx.r6.s64 = -1732640768;
	// lis r4,4146
	ctx.r4.s64 = 271712256;
	// lis r8,-15406
	ctx.r8.s64 = -1009647616;
	// ori r9,r10,8961
	ctx.r9.u64 = ctx.r10.u64 | 8961;
	// ori r5,r6,56574
	ctx.r5.u64 = ctx.r6.u64 | 56574;
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r10,r4,21622
	ctx.r10.u64 = ctx.r4.u64 | 21622;
	// ori r6,r8,57840
	ctx.r6.u64 = ctx.r8.u64 | 57840;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r5,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r5.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stw r6,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8241F694"))) PPC_WEAK_FUNC(sub_8241F694);
PPC_FUNC_IMPL(__imp__sub_8241F694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241F698"))) PPC_WEAK_FUNC(sub_8241F698);
PPC_FUNC_IMPL(__imp__sub_8241F698) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x8241F6A0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8241f724
	if (ctx.cr6.eq) goto loc_8241F724;
	// subfic r27,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r27.s64 = 64 - ctx.r11.s64;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// cmplw cr6,r27,r30
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r30.u32, ctx.xer);
	// bgt cr6,0x8241f6d0
	if (ctx.cr6.gt) goto loc_8241F6D0;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
loc_8241F6D0:
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,28
	ctx.r3.s64 = ctx.r11.s64 + 28;
	// bl 0x8259d3a0
	ctx.lr = 0x8241F6E4;
	sub_8259D3A0(ctx, base);
	// add r29,r28,r29
	ctx.r29.u64 = ctx.r28.u64 + ctx.r29.u64;
	// subf r30,r28,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r28.s64;
	// cmplw cr6,r28,r27
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x8241f718
	if (!ctx.cr6.eq) goto loc_8241F718;
	// addi r4,r31,28
	ctx.r4.s64 = ctx.r31.s64 + 28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241f3c0
	ctx.lr = 0x8241F700;
	sub_8241F3C0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,64
	ctx.r9.s64 = ctx.r11.s64 + 64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// b 0x8241f724
	goto loc_8241F724;
loc_8241F718:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r8,r28,r11
	ctx.r8.u64 = ctx.r28.u64 + ctx.r11.u64;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
loc_8241F724:
	// cmplwi cr6,r30,64
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 64, ctx.xer);
	// blt cr6,0x8241f75c
	if (ctx.cr6.lt) goto loc_8241F75C;
	// rlwinm r28,r30,26,6,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 26) & 0x3FFFFFF;
loc_8241F730:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241f3c0
	ctx.lr = 0x8241F73C;
	sub_8241F3C0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// addi r7,r11,64
	ctx.r7.s64 = ctx.r11.s64 + 64;
	// addi r30,r30,-64
	ctx.r30.s64 = ctx.r30.s64 + -64;
	// addi r29,r29,64
	ctx.r29.s64 = ctx.r29.s64 + 64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// bne cr6,0x8241f730
	if (!ctx.cr6.eq) goto loc_8241F730;
loc_8241F75C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8241f788
	if (ctx.cr6.eq) goto loc_8241F788;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r3,r11,28
	ctx.r3.s64 = ctx.r11.s64 + 28;
	// bl 0x8259d3a0
	ctx.lr = 0x8241F77C;
	sub_8259D3A0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r6,r30,r11
	ctx.r6.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
loc_8241F788:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8241F790"))) PPC_WEAK_FUNC(sub_8241F790);
PPC_FUNC_IMPL(__imp__sub_8241F790) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x8241F798;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r10,128
	ctx.r10.s64 = 128;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// subfic r8,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r8.s64 = 64 - ctx.r11.s64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r8,9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 9, ctx.xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// bge cr6,0x8241f818
	if (!ctx.cr6.lt) goto loc_8241F818;
	// add r7,r11,r3
	ctx.r7.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stb r10,28(r7)
	PPC_STORE_U8(ctx.r7.u32 + 28, ctx.r10.u8);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// bge cr6,0x8241f808
	if (!ctx.cr6.lt) goto loc_8241F808;
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// subfic r10,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r10.s64 = 64 - ctx.r11.s64;
	// addi r11,r9,28
	ctx.r11.s64 = ctx.r9.s64 + 28;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8241f808
	if (ctx.cr6.eq) goto loc_8241F808;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8241F7FC:
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8241f7fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8241F7FC;
loc_8241F808:
	// addi r4,r3,28
	ctx.r4.s64 = ctx.r3.s64 + 28;
	// bl 0x8241f3c0
	ctx.lr = 0x8241F810;
	sub_8241F3C0(ctx, base);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
loc_8241F818:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r6,r3,r11
	ctx.r6.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stb r10,28(r6)
	PPC_STORE_U8(ctx.r6.u32 + 28, ctx.r10.u8);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,56
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 56, ctx.xer);
	// bge cr6,0x8241f85c
	if (!ctx.cr6.lt) goto loc_8241F85C;
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// subfic r10,r11,56
	ctx.xer.ca = ctx.r11.u32 <= 56;
	ctx.r10.s64 = 56 - ctx.r11.s64;
	// addi r11,r9,28
	ctx.r11.s64 = ctx.r9.s64 + 28;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8241f85c
	if (ctx.cr6.eq) goto loc_8241F85C;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8241F850:
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8241f850
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8241F850;
loc_8241F85C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r3,28
	ctx.r4.s64 = ctx.r3.s64 + 28;
	// stb r31,84(r3)
	PPC_STORE_U8(ctx.r3.u32 + 84, ctx.r31.u8);
	// rlwinm r5,r11,11,21,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0x7FF;
	// stb r31,85(r3)
	PPC_STORE_U8(ctx.r3.u32 + 85, ctx.r31.u8);
	// rlwinm r10,r11,19,13,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0x7FFFF;
	// stb r31,86(r3)
	PPC_STORE_U8(ctx.r3.u32 + 86, ctx.r31.u8);
	// rlwinm r9,r11,27,5,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r7,r11,3,29,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x7;
	// stb r5,88(r3)
	PPC_STORE_U8(ctx.r3.u32 + 88, ctx.r5.u8);
	// stb r10,89(r3)
	PPC_STORE_U8(ctx.r3.u32 + 89, ctx.r10.u8);
	// stb r9,90(r3)
	PPC_STORE_U8(ctx.r3.u32 + 90, ctx.r9.u8);
	// stb r8,91(r3)
	PPC_STORE_U8(ctx.r3.u32 + 91, ctx.r8.u8);
	// stb r7,87(r3)
	PPC_STORE_U8(ctx.r3.u32 + 87, ctx.r7.u8);
	// bl 0x8241f3c0
	ctx.lr = 0x8241F89C;
	sub_8241F3C0(ctx, base);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,20
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 20, ctx.xer);
	// ble cr6,0x8241f8ac
	if (!ctx.cr6.gt) goto loc_8241F8AC;
	// li r9,20
	ctx.r9.s64 = 20;
loc_8241F8AC:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8241f8e8
	if (ctx.cr6.eq) goto loc_8241F8E8;
loc_8241F8B8:
	// rlwinm r10,r11,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// clrlwi r8,r11,30
	ctx.r8.u64 = ctx.r11.u32 & 0x3;
	// addi r7,r10,2
	ctx.r7.s64 = ctx.r10.s64 + 2;
	// subfic r6,r8,3
	ctx.xer.ca = ctx.r8.u32 <= 3;
	ctx.r6.s64 = 3 - ctx.r8.s64;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r6,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r10,r5,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r3.u32);
	// srw r8,r10,r4
	ctx.r8.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r4.u8 & 0x3F));
	// stbx r8,r11,r29
	PPC_STORE_U8(ctx.r11.u32 + ctx.r29.u32, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8241f8b8
	if (!ctx.cr6.eq) goto loc_8241F8B8;
loc_8241F8E8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8241F8F0"))) PPC_WEAK_FUNC(sub_8241F8F0);
PPC_FUNC_IMPL(__imp__sub_8241F8F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259badc
	ctx.lr = 0x8241F8F8;
	__savegprlr_21(ctx, base);
	// stwu r1,-1200(r1)
	ea = -1200 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// rlwinm r28,r30,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
	// addi r29,r1,592
	ctx.r29.s64 = ctx.r1.s64 + 592;
	// bl 0x8259d300
	ctx.lr = 0x8241F92C;
	sub_8259D300(ctx, base);
	// rlwinm r11,r30,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r26,r11,-1
	ctx.r26.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// blt cr6,0x8241fb04
	if (ctx.cr6.lt) goto loc_8241FB04;
	// addi r10,r1,592
	ctx.r10.s64 = ctx.r1.s64 + 592;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// subf r11,r26,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r26.s64;
	// neg r4,r10
	ctx.r4.s64 = -ctx.r10.s64;
	// neg r3,r9
	ctx.r3.s64 = -ctx.r9.s64;
	// addi r24,r11,-1
	ctx.r24.s64 = ctx.r11.s64 + -1;
	// li r22,1
	ctx.r22.s64 = 1;
loc_8241F958:
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// add r6,r28,r31
	ctx.r6.u64 = ctx.r28.u64 + ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// ble cr6,0x8241f9a0
	if (!ctx.cr6.gt) goto loc_8241F9A0;
loc_8241F978:
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// addi r9,r9,-2
	ctx.r9.s64 = ctx.r9.s64 + -2;
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// rlwinm r5,r8,16,16,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF;
	// sth r8,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r8.u16);
	// bdnz 0x8241f978
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8241F978;
loc_8241F9A0:
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x8241f9f8
	if (!ctx.cr6.gt) goto loc_8241F9F8;
	// subf r11,r31,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r31.s64;
	// add r8,r4,r27
	ctx.r8.u64 = ctx.r4.u64 + ctx.r27.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
loc_8241F9C0:
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// lhzx r6,r8,r11
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r11.u32);
	// lhz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// subf r6,r6,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r6.s64;
	// subf r9,r9,r6
	ctx.r9.s64 = ctx.r6.s64 - ctx.r9.s64;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// rlwinm r9,r9,16,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0x1;
	// sth r7,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r7.u16);
	// bdnz 0x8241f9c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8241F9C0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8241f9f8
	if (ctx.cr6.eq) goto loc_8241F9F8;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8241fa10
	if (ctx.cr6.eq) goto loc_8241FA10;
loc_8241F9F8:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
loc_8241FA10:
	// srawi r6,r26,4
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0xF) != 0);
	ctx.r6.s64 = ctx.r26.s32 >> 4;
	// addze r5,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r5.s64 = temp.s64;
	// srawi r11,r24,4
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r24.s32 >> 4;
	// rlwinm r10,r5,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// addze r9,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r9.s64 = temp.s64;
	// subf r8,r10,r26
	ctx.r8.s64 = ctx.r26.s64 - ctx.r10.s64;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r7,r23
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r23.u32);
	// slw r5,r22,r8
	ctx.r5.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r8.u8 & 0x3F));
	// and r11,r5,r6
	ctx.r11.u64 = ctx.r5.u64 & ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8241faf4
	if (ctx.cr6.eq) goto loc_8241FAF4;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// add r5,r28,r31
	ctx.r5.u64 = ctx.r28.u64 + ctx.r31.u64;
	// add r11,r28,r25
	ctx.r11.u64 = ctx.r28.u64 + ctx.r25.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// ble cr6,0x8241fa84
	if (!ctx.cr6.gt) goto loc_8241FA84;
	// subf r7,r11,r5
	ctx.r7.s64 = ctx.r5.s64 - ctx.r11.s64;
loc_8241FA60:
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// rlwinm r6,r9,16,16,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// sthx r9,r7,r11
	PPC_STORE_U16(ctx.r7.u32 + ctx.r11.u32, ctx.r9.u16);
	// bdnz 0x8241fa60
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8241FA60;
loc_8241FA84:
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x8241fadc
	if (!ctx.cr6.gt) goto loc_8241FADC;
	// subf r11,r31,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r31.s64;
	// add r8,r4,r27
	ctx.r8.u64 = ctx.r4.u64 + ctx.r27.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
loc_8241FAA4:
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// lhzx r7,r8,r11
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r11.u32);
	// lhz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// subf r7,r7,r5
	ctx.r7.s64 = ctx.r5.s64 - ctx.r7.s64;
	// subf r9,r9,r7
	ctx.r9.s64 = ctx.r7.s64 - ctx.r9.s64;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// rlwinm r9,r9,16,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0x1;
	// sth r5,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r5.u16);
	// bdnz 0x8241faa4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8241FAA4;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8241fadc
	if (ctx.cr6.eq) goto loc_8241FADC;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x8241faf4
	if (ctx.cr6.eq) goto loc_8241FAF4;
loc_8241FADC:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
loc_8241FAF4:
	// addi r26,r26,-1
	ctx.r26.s64 = ctx.r26.s64 + -1;
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bge cr6,0x8241f958
	if (!ctx.cr6.lt) goto loc_8241F958;
loc_8241FB04:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8259d3a0
	ctx.lr = 0x8241FB14;
	sub_8259D3A0(ctx, base);
	// addi r1,r1,1200
	ctx.r1.s64 = ctx.r1.s64 + 1200;
	// b 0x8259bb2c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8241FB1C"))) PPC_WEAK_FUNC(sub_8241FB1C);
PPC_FUNC_IMPL(__imp__sub_8241FB1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241FB20"))) PPC_WEAK_FUNC(sub_8241FB20);
PPC_FUNC_IMPL(__imp__sub_8241FB20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x8241FB28;
	__savegprlr_28(ctx, base);
	// stwu r1,-1664(r1)
	ea = -1664 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// srawi r10,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 1;
	// addi r9,r6,1
	ctx.r9.s64 = ctx.r6.s64 + 1;
	// addze r29,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r29.s64 = temp.s64;
	// srawi r6,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addze r31,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r31.s64 = temp.s64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// addi r9,r1,592
	ctx.r9.s64 = ctx.r1.s64 + 592;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// cmpw cr6,r29,r31
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r31.s32, ctx.xer);
	// beq cr6,0x8241fb6c
	if (ctx.cr6.eq) goto loc_8241FB6C;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r9,r1,594
	ctx.r9.s64 = ctx.r1.s64 + 594;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r31,-1
	ctx.r10.s64 = ctx.r31.s64 + -1;
	// sth r5,592(r1)
	PPC_STORE_U16(ctx.r1.u32 + 592, ctx.r5.u16);
loc_8241FB6C:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8241fb9c
	if (!ctx.cr6.gt) goto loc_8241FB9C;
loc_8241FB74:
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lbz r6,1(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rotlwi r5,r3,8
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r3.u32, 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// or r3,r5,r6
	ctx.r3.u64 = ctx.r5.u64 | ctx.r6.u64;
	// sth r3,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r3.u16);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// bgt cr6,0x8241fb74
	if (ctx.cr6.gt) goto loc_8241FB74;
loc_8241FB9C:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r9,r1,1104
	ctx.r9.s64 = ctx.r1.s64 + 1104;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// cmpw cr6,r29,r31
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r31.s32, ctx.xer);
	// beq cr6,0x8241fbc4
	if (ctx.cr6.eq) goto loc_8241FBC4;
	// lbz r5,0(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// addi r9,r1,1106
	ctx.r9.s64 = ctx.r1.s64 + 1106;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// addi r10,r31,-1
	ctx.r10.s64 = ctx.r31.s64 + -1;
	// sth r5,1104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1104, ctx.r5.u16);
loc_8241FBC4:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8241fbf4
	if (!ctx.cr6.gt) goto loc_8241FBF4;
loc_8241FBCC:
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lbz r3,1(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rotlwi r6,r4,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r4.u32, 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// or r5,r6,r3
	ctx.r5.u64 = ctx.r6.u64 | ctx.r3.u64;
	// sth r5,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r5.u16);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// bgt cr6,0x8241fbcc
	if (ctx.cr6.gt) goto loc_8241FBCC;
loc_8241FBF4:
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x8241fe88
	if (!ctx.cr6.gt) goto loc_8241FE88;
loc_8241FC04:
	// lbzx r3,r11,r7
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// rlwinm r10,r30,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 8) & 0xFFFFFF00;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// or r30,r3,r10
	ctx.r30.u64 = ctx.r3.u64 | ctx.r10.u64;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8241fc04
	if (ctx.cr6.lt) goto loc_8241FC04;
	// cmplwi cr6,r30,3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 3, ctx.xer);
	// bne cr6,0x8241fc58
	if (!ctx.cr6.eq) goto loc_8241FC58;
	// addi r7,r1,592
	ctx.r7.s64 = ctx.r1.s64 + 592;
	// addi r6,r1,1104
	ctx.r6.s64 = ctx.r1.s64 + 1104;
	// addi r5,r1,1104
	ctx.r5.s64 = ctx.r1.s64 + 1104;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241f8f0
	ctx.lr = 0x8241FC3C;
	sub_8241F8F0(ctx, base);
	// addi r7,r1,592
	ctx.r7.s64 = ctx.r1.s64 + 592;
	// addi r6,r1,1104
	ctx.r6.s64 = ctx.r1.s64 + 1104;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241f8f0
	ctx.lr = 0x8241FC54;
	sub_8241F8F0(ctx, base);
	// b 0x8241ff08
	goto loc_8241FF08;
loc_8241FC58:
	// cmplwi cr6,r30,17
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 17, ctx.xer);
	// bne cr6,0x8241fcdc
	if (!ctx.cr6.eq) goto loc_8241FCDC;
	// addi r7,r1,592
	ctx.r7.s64 = ctx.r1.s64 + 592;
	// addi r6,r1,1104
	ctx.r6.s64 = ctx.r1.s64 + 1104;
	// addi r5,r1,1104
	ctx.r5.s64 = ctx.r1.s64 + 1104;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241f8f0
	ctx.lr = 0x8241FC78;
	sub_8241F8F0(ctx, base);
	// addi r7,r1,592
	ctx.r7.s64 = ctx.r1.s64 + 592;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241f8f0
	ctx.lr = 0x8241FC90;
	sub_8241F8F0(ctx, base);
	// addi r7,r1,592
	ctx.r7.s64 = ctx.r1.s64 + 592;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241f8f0
	ctx.lr = 0x8241FCA8;
	sub_8241F8F0(ctx, base);
	// addi r7,r1,592
	ctx.r7.s64 = ctx.r1.s64 + 592;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241f8f0
	ctx.lr = 0x8241FCC0;
	sub_8241F8F0(ctx, base);
	// addi r7,r1,592
	ctx.r7.s64 = ctx.r1.s64 + 592;
	// addi r6,r1,1104
	ctx.r6.s64 = ctx.r1.s64 + 1104;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241f8f0
	ctx.lr = 0x8241FCD8;
	sub_8241F8F0(ctx, base);
	// b 0x8241ff08
	goto loc_8241FF08;
loc_8241FCDC:
	// lis r9,1
	ctx.r9.s64 = 65536;
	// ori r8,r9,1
	ctx.r8.u64 = ctx.r9.u64 | 1;
	// cmplw cr6,r30,r8
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8241fe88
	if (!ctx.cr6.eq) goto loc_8241FE88;
	// addi r7,r1,592
	ctx.r7.s64 = ctx.r1.s64 + 592;
	// addi r6,r1,1104
	ctx.r6.s64 = ctx.r1.s64 + 1104;
	// addi r5,r1,1104
	ctx.r5.s64 = ctx.r1.s64 + 1104;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241f8f0
	ctx.lr = 0x8241FD04;
	sub_8241F8F0(ctx, base);
	// addi r7,r1,592
	ctx.r7.s64 = ctx.r1.s64 + 592;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241f8f0
	ctx.lr = 0x8241FD1C;
	sub_8241F8F0(ctx, base);
	// addi r7,r1,592
	ctx.r7.s64 = ctx.r1.s64 + 592;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241f8f0
	ctx.lr = 0x8241FD34;
	sub_8241F8F0(ctx, base);
	// addi r7,r1,592
	ctx.r7.s64 = ctx.r1.s64 + 592;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241f8f0
	ctx.lr = 0x8241FD4C;
	sub_8241F8F0(ctx, base);
	// addi r7,r1,592
	ctx.r7.s64 = ctx.r1.s64 + 592;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241f8f0
	ctx.lr = 0x8241FD64;
	sub_8241F8F0(ctx, base);
	// addi r7,r1,592
	ctx.r7.s64 = ctx.r1.s64 + 592;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241f8f0
	ctx.lr = 0x8241FD7C;
	sub_8241F8F0(ctx, base);
	// addi r7,r1,592
	ctx.r7.s64 = ctx.r1.s64 + 592;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241f8f0
	ctx.lr = 0x8241FD94;
	sub_8241F8F0(ctx, base);
	// addi r7,r1,592
	ctx.r7.s64 = ctx.r1.s64 + 592;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241f8f0
	ctx.lr = 0x8241FDAC;
	sub_8241F8F0(ctx, base);
	// addi r7,r1,592
	ctx.r7.s64 = ctx.r1.s64 + 592;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241f8f0
	ctx.lr = 0x8241FDC4;
	sub_8241F8F0(ctx, base);
	// addi r7,r1,592
	ctx.r7.s64 = ctx.r1.s64 + 592;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241f8f0
	ctx.lr = 0x8241FDDC;
	sub_8241F8F0(ctx, base);
	// addi r7,r1,592
	ctx.r7.s64 = ctx.r1.s64 + 592;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241f8f0
	ctx.lr = 0x8241FDF4;
	sub_8241F8F0(ctx, base);
	// addi r7,r1,592
	ctx.r7.s64 = ctx.r1.s64 + 592;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241f8f0
	ctx.lr = 0x8241FE0C;
	sub_8241F8F0(ctx, base);
	// addi r7,r1,592
	ctx.r7.s64 = ctx.r1.s64 + 592;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241f8f0
	ctx.lr = 0x8241FE24;
	sub_8241F8F0(ctx, base);
	// addi r7,r1,592
	ctx.r7.s64 = ctx.r1.s64 + 592;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241f8f0
	ctx.lr = 0x8241FE3C;
	sub_8241F8F0(ctx, base);
	// addi r7,r1,592
	ctx.r7.s64 = ctx.r1.s64 + 592;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241f8f0
	ctx.lr = 0x8241FE54;
	sub_8241F8F0(ctx, base);
	// addi r7,r1,592
	ctx.r7.s64 = ctx.r1.s64 + 592;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241f8f0
	ctx.lr = 0x8241FE6C;
	sub_8241F8F0(ctx, base);
	// addi r7,r1,592
	ctx.r7.s64 = ctx.r1.s64 + 592;
	// addi r6,r1,1104
	ctx.r6.s64 = ctx.r1.s64 + 1104;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241f8f0
	ctx.lr = 0x8241FE84;
	sub_8241F8F0(ctx, base);
	// b 0x8241ff08
	goto loc_8241FF08;
loc_8241FE88:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,64
	ctx.r9.s64 = 64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8241FE98:
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x8241fe98
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8241FE98;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r7,1
	ctx.r7.s64 = 1;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// sth r7,-2(r6)
	PPC_STORE_U16(ctx.r6.u32 + -2, ctx.r7.u16);
	// beq cr6,0x8241ff08
	if (ctx.cr6.eq) goto loc_8241FF08;
loc_8241FEC0:
	// clrlwi r5,r30,31
	ctx.r5.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8241fee4
	if (ctx.cr6.eq) goto loc_8241FEE4;
	// addi r7,r1,592
	ctx.r7.s64 = ctx.r1.s64 + 592;
	// addi r6,r1,1104
	ctx.r6.s64 = ctx.r1.s64 + 1104;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241f8f0
	ctx.lr = 0x8241FEE4;
	sub_8241F8F0(ctx, base);
loc_8241FEE4:
	// addi r7,r1,592
	ctx.r7.s64 = ctx.r1.s64 + 592;
	// addi r6,r1,1104
	ctx.r6.s64 = ctx.r1.s64 + 1104;
	// addi r5,r1,1104
	ctx.r5.s64 = ctx.r1.s64 + 1104;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,1104
	ctx.r3.s64 = ctx.r1.s64 + 1104;
	// bl 0x8241f8f0
	ctx.lr = 0x8241FEFC;
	sub_8241F8F0(ctx, base);
	// rlwinm r30,r30,31,1,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8241fec0
	if (!ctx.cr6.eq) goto loc_8241FEC0;
loc_8241FF08:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// subf r4,r11,r31
	ctx.r4.s64 = ctx.r31.s64 - ctx.r11.s64;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// ble cr6,0x8241ff50
	if (!ctx.cr6.gt) goto loc_8241FF50;
loc_8241FF28:
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r3,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r3.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lhz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// stb r8,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r8.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bgt cr6,0x8241ff28
	if (ctx.cr6.gt) goto loc_8241FF28;
loc_8241FF50:
	// addi r1,r1,1664
	ctx.r1.s64 = ctx.r1.s64 + 1664;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8241FF58"))) PPC_WEAK_FUNC(sub_8241FF58);
PPC_FUNC_IMPL(__imp__sub_8241FF58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x8241FF60;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// addi r3,r31,1028
	ctx.r3.s64 = ctx.r31.s64 + 1028;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// stw r5,1024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1024, ctx.r5.u32);
	// stw r30,1160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1160, ctx.r30.u32);
	// bl 0x8259d3a0
	ctx.lr = 0x8241FF80;
	sub_8259D3A0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,1164
	ctx.r3.s64 = ctx.r31.s64 + 1164;
	// bl 0x8259d3a0
	ctx.lr = 0x8241FF90;
	sub_8259D3A0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8241FF98"))) PPC_WEAK_FUNC(sub_8241FF98);
PPC_FUNC_IMPL(__imp__sub_8241FF98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x8241FFA0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82418818
	ctx.lr = 0x8241FFB4;
	sub_82418818(ctx, base);
	// lwz r10,1024(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1024);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8241fffc
	if (!ctx.cr6.gt) goto loc_8241FFFC;
	// li r9,1
	ctx.r9.s64 = 1;
loc_8241FFCC:
	// clrlwi r8,r11,27
	ctx.r8.u64 = ctx.r11.u32 & 0x1F;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// slw r7,r9,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r8.u8 & 0x3F));
	// and r5,r7,r3
	ctx.r5.u64 = ctx.r7.u64 & ctx.r3.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8241ffe8
	if (!ctx.cr6.eq) goto loc_8241FFE8;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
loc_8241FFE8:
	// stbx r10,r11,r31
	PPC_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r10,1024(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1024);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8241ffcc
	if (ctx.cr6.lt) goto loc_8241FFCC;
loc_8241FFFC:
	// lwz r8,1024(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1024);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x8242004c
	if (!ctx.cr6.gt) goto loc_8242004C;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// ori r8,r7,3533
	ctx.r8.u64 = ctx.r7.u64 | 3533;
loc_82420014:
	// add r7,r9,r31
	ctx.r7.u64 = ctx.r9.u64 + ctx.r31.u64;
	// lbz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
loc_8242001C:
	// addi r5,r3,1
	ctx.r5.s64 = ctx.r3.s64 + 1;
	// mullw r3,r5,r8
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r8.s32);
	// xor r4,r11,r3
	ctx.r4.u64 = ctx.r11.u64 ^ ctx.r3.u64;
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8242001c
	if (ctx.cr6.eq) goto loc_8242001C;
	// stb r10,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r10.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r11,1024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1024);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82420014
	if (ctx.cr6.lt) goto loc_82420014;
loc_8242004C:
	// lwz r10,1024(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1024);
	// li r9,2
	ctx.r9.s64 = 2;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stb r6,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r6.u8);
	// subf r11,r30,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r30.s64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stb r9,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r9.u8);
	// stb r6,-1(r3)
	PPC_STORE_U8(ctx.r3.u32 + -1, ctx.r6.u8);
	// bl 0x8259d3a0
	ctx.lr = 0x82420074;
	sub_8259D3A0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8242007C"))) PPC_WEAK_FUNC(sub_8242007C);
PPC_FUNC_IMPL(__imp__sub_8242007C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82420080"))) PPC_WEAK_FUNC(sub_82420080);
PPC_FUNC_IMPL(__imp__sub_82420080) {
	PPC_FUNC_PROLOGUE();
	// b 0x8259d3a0
	sub_8259D3A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82420084"))) PPC_WEAK_FUNC(sub_82420084);
PPC_FUNC_IMPL(__imp__sub_82420084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82420088"))) PPC_WEAK_FUNC(sub_82420088);
PPC_FUNC_IMPL(__imp__sub_82420088) {
	PPC_FUNC_PROLOGUE();
	// lwz r8,1160(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1160);
	// addi r7,r3,1164
	ctx.r7.s64 = ctx.r3.s64 + 1164;
	// lwz r6,1024(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1024);
	// addi r5,r3,1028
	ctx.r5.s64 = ctx.r3.s64 + 1028;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8241fb20
	sub_8241FB20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824200A0"))) PPC_WEAK_FUNC(sub_824200A0);
PPC_FUNC_IMPL(__imp__sub_824200A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baec
	ctx.lr = 0x824200A8;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
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
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// bl 0x825b3c18
	ctx.lr = 0x824200CC;
	sub_825B3C18(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x824200fc
	if (!ctx.cr0.eq) goto loc_824200FC;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825c6bcc
	ctx.lr = 0x824200FC;
	__imp__XamUserReadProfileSettings(ctx, base);
loc_824200FC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82420104"))) PPC_WEAK_FUNC(sub_82420104);
PPC_FUNC_IMPL(__imp__sub_82420104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82420108"))) PPC_WEAK_FUNC(sub_82420108);
PPC_FUNC_IMPL(__imp__sub_82420108) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae8
	ctx.lr = 0x82420110;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
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
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// bl 0x825b3c18
	ctx.lr = 0x82420138;
	sub_825B3C18(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8242016c
	if (!ctx.cr0.eq) goto loc_8242016C;
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825c6bcc
	ctx.lr = 0x8242016C;
	__imp__XamUserReadProfileSettings(ctx, base);
loc_8242016C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82420174"))) PPC_WEAK_FUNC(sub_82420174);
PPC_FUNC_IMPL(__imp__sub_82420174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82420178"))) PPC_WEAK_FUNC(sub_82420178);
PPC_FUNC_IMPL(__imp__sub_82420178) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r9,4
	ctx.r9.s64 = 4;
	// extsw r8,r4
	ctx.r8.s64 = ctx.r4.s32;
	// lwz r10,512(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 512);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// std r8,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r8.u64);
	// lwz r3,512(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 512);
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// stw r10,512(r11)
	PPC_STORE_U32(ctx.r11.u32 + 512, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824201A8"))) PPC_WEAK_FUNC(sub_824201A8);
PPC_FUNC_IMPL(__imp__sub_824201A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x824201B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-720(r1)
	ea = -720 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r3,740(r1)
	PPC_STORE_U32(ctx.r1.u32 + 740, ctx.r3.u32);
	// stw r4,748(r1)
	PPC_STORE_U32(ctx.r1.u32 + 748, ctx.r4.u32);
	// li r3,518
	ctx.r3.s64 = 518;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// stw r5,756(r1)
	PPC_STORE_U32(ctx.r1.u32 + 756, ctx.r5.u32);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// stw r30,672(r1)
	PPC_STORE_U32(ctx.r1.u32 + 672, ctx.r30.u32);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// bl 0x82420e48
	ctx.lr = 0x824201E4;
	sub_82420E48(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x824202d4
	if (ctx.cr0.lt) goto loc_824202D4;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,136(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,132
	ctx.r7.s64 = ctx.r1.s64 + 132;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82420ec0
	ctx.lr = 0x8242020C;
	sub_82420EC0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x824202d4
	if (ctx.cr0.lt) goto loc_824202D4;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x825c6c0c
	ctx.lr = 0x82420224;
	__imp__XamAlloc(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x824202d4
	if (ctx.cr0.lt) goto loc_824202D4;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r7,r1,148
	ctx.r7.s64 = ctx.r1.s64 + 148;
	// lwz r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// addi r11,r1,140
	ctx.r11.s64 = ctx.r1.s64 + 140;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// li r3,518
	ctx.r3.s64 = 518;
	// lwz r7,128(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// bl 0x82420f60
	ctx.lr = 0x82420270;
	sub_82420F60(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x824202d4
	if (ctx.cr0.lt) goto loc_824202D4;
	// addi r4,r1,740
	ctx.r4.s64 = ctx.r1.s64 + 740;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82420178
	ctx.lr = 0x82420284;
	sub_82420178(ctx, base);
	// addi r4,r1,748
	ctx.r4.s64 = ctx.r1.s64 + 748;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82420178
	ctx.lr = 0x82420290;
	sub_82420178(ctx, base);
	// addi r4,r1,756
	ctx.r4.s64 = ctx.r1.s64 + 756;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82420178
	ctx.lr = 0x8242029C;
	sub_82420178(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82420178
	ctx.lr = 0x824202A8;
	sub_82420178(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82420178
	ctx.lr = 0x824202B4;
	sub_82420178(ctx, base);
	// lis r4,5
	ctx.r4.s64 = 327680;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// lwz r5,140(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// ori r4,r4,32800
	ctx.r4.u64 = ctx.r4.u64 | 32800;
	// li r3,252
	ctx.r3.s64 = 252;
	// bl 0x825c6bfc
	ctx.lr = 0x824202CC;
	__imp__XMsgInProcessCall(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x824202f4
	if (!ctx.cr0.lt) goto loc_824202F4;
loc_824202D4:
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824202e4
	if (ctx.cr6.eq) goto loc_824202E4;
	// bl 0x825c6bec
	ctx.lr = 0x824202E4;
	__imp__XamFree(ctx, base);
loc_824202E4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825afbb0
	ctx.lr = 0x824202EC;
	sub_825AFBB0(ctx, base);
	// li r30,1627
	ctx.r30.s64 = 1627;
	// b 0x824202fc
	goto loc_824202FC;
loc_824202F4:
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825c6bec
	ctx.lr = 0x824202FC;
	__imp__XamFree(ctx, base);
loc_824202FC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82420308"))) PPC_WEAK_FUNC(sub_82420308);
PPC_FUNC_IMPL(__imp__sub_82420308) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82420310;
	__savegprlr_29(ctx, base);
	// stwu r1,-720(r1)
	ea = -720 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r3,740(r1)
	PPC_STORE_U32(ctx.r1.u32 + 740, ctx.r3.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// li r3,1414
	ctx.r3.s64 = 1414;
	// stw r30,672(r1)
	PPC_STORE_U32(ctx.r1.u32 + 672, ctx.r30.u32);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// bl 0x82420e48
	ctx.lr = 0x82420338;
	sub_82420E48(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82420404
	if (ctx.cr0.lt) goto loc_82420404;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,136(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,132
	ctx.r7.s64 = ctx.r1.s64 + 132;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82420ec0
	ctx.lr = 0x82420360;
	sub_82420EC0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82420404
	if (ctx.cr0.lt) goto loc_82420404;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x825c6c0c
	ctx.lr = 0x82420378;
	__imp__XamAlloc(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82420404
	if (ctx.cr0.lt) goto loc_82420404;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r7,r1,148
	ctx.r7.s64 = ctx.r1.s64 + 148;
	// lwz r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// addi r11,r1,140
	ctx.r11.s64 = ctx.r1.s64 + 140;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// li r3,1414
	ctx.r3.s64 = 1414;
	// lwz r7,128(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// bl 0x82420f60
	ctx.lr = 0x824203C4;
	sub_82420F60(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82420404
	if (ctx.cr0.lt) goto loc_82420404;
	// addi r4,r1,740
	ctx.r4.s64 = ctx.r1.s64 + 740;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82420178
	ctx.lr = 0x824203D8;
	sub_82420178(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82420178
	ctx.lr = 0x824203E4;
	sub_82420178(ctx, base);
	// lis r4,5
	ctx.r4.s64 = 327680;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// lwz r5,140(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// ori r4,r4,32803
	ctx.r4.u64 = ctx.r4.u64 | 32803;
	// li r3,252
	ctx.r3.s64 = 252;
	// bl 0x825c6bfc
	ctx.lr = 0x824203FC;
	__imp__XMsgInProcessCall(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x82420424
	if (!ctx.cr0.lt) goto loc_82420424;
loc_82420404:
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82420414
	if (ctx.cr6.eq) goto loc_82420414;
	// bl 0x825c6bec
	ctx.lr = 0x82420414;
	__imp__XamFree(ctx, base);
loc_82420414:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825afbb0
	ctx.lr = 0x8242041C;
	sub_825AFBB0(ctx, base);
	// li r30,1627
	ctx.r30.s64 = 1627;
	// b 0x8242042c
	goto loc_8242042C;
loc_82420424:
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825c6bec
	ctx.lr = 0x8242042C;
	__imp__XamFree(ctx, base);
loc_8242042C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82420438"))) PPC_WEAK_FUNC(sub_82420438);
PPC_FUNC_IMPL(__imp__sub_82420438) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x82420440;
	__savegprlr_27(ctx, base);
	// stwu r1,-800(r1)
	ea = -800 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r3,820(r1)
	PPC_STORE_U32(ctx.r1.u32 + 820, ctx.r3.u32);
	// stw r4,828(r1)
	PPC_STORE_U32(ctx.r1.u32 + 828, ctx.r4.u32);
	// li r3,3329
	ctx.r3.s64 = 3329;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// stw r31,736(r1)
	PPC_STORE_U32(ctx.r1.u32 + 736, ctx.r31.u32);
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// bl 0x82420e48
	ctx.lr = 0x82420474;
	sub_82420E48(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824206e4
	if (ctx.cr0.lt) goto loc_824206E4;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,132
	ctx.r7.s64 = ctx.r1.s64 + 132;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82420ec0
	ctx.lr = 0x8242049C;
	sub_82420EC0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824206e4
	if (ctx.cr0.lt) goto loc_824206E4;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// li r3,3586
	ctx.r3.s64 = 3586;
	// addi r30,r11,1500
	ctx.r30.s64 = ctx.r11.s64 + 1500;
	// bl 0x82420e48
	ctx.lr = 0x824204B8;
	sub_82420E48(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824206e4
	if (ctx.cr0.lt) goto loc_824206E4;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,132
	ctx.r7.s64 = ctx.r1.s64 + 132;
	// li r6,256
	ctx.r6.s64 = 256;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82420ec0
	ctx.lr = 0x824204E0;
	sub_82420EC0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824206e4
	if (ctx.cr0.lt) goto loc_824206E4;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// li r3,1408
	ctx.r3.s64 = 1408;
	// add r30,r30,r11
	ctx.r30.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x82420e48
	ctx.lr = 0x824204FC;
	sub_82420E48(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824206e4
	if (ctx.cr0.lt) goto loc_824206E4;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,132
	ctx.r7.s64 = ctx.r1.s64 + 132;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82420ec0
	ctx.lr = 0x82420524;
	sub_82420EC0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824206e4
	if (ctx.cr0.lt) goto loc_824206E4;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// li r3,1411
	ctx.r3.s64 = 1411;
	// add r30,r30,r11
	ctx.r30.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x82420e48
	ctx.lr = 0x82420540;
	sub_82420E48(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824206e4
	if (ctx.cr0.lt) goto loc_824206E4;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,132
	ctx.r7.s64 = ctx.r1.s64 + 132;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x82420ec0
	ctx.lr = 0x82420568;
	sub_82420EC0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824206e4
	if (ctx.cr0.lt) goto loc_824206E4;
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x825c6c0c
	ctx.lr = 0x82420580;
	__imp__XamAlloc(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824206e4
	if (ctx.cr0.lt) goto loc_824206E4;
	// lwz r11,828(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 828);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// beq cr6,0x824205ac
	if (ctx.cr6.eq) goto loc_824205AC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8259de20
	ctx.lr = 0x824205A0;
	sub_8259DE20(ctx, base);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// b 0x824205bc
	goto loc_824205BC;
loc_824205AC:
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r29,r11,16128
	ctx.r29.s64 = ctx.r11.s64 + 16128;
	// stw r10,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
loc_824205BC:
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r5,r1,156
	ctx.r5.s64 = ctx.r1.s64 + 156;
	// lwz r7,136(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// addi r11,r1,140
	ctx.r11.s64 = ctx.r1.s64 + 140;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// li r3,1411
	ctx.r3.s64 = 1411;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r31,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r31.u32);
	// bl 0x82420f60
	ctx.lr = 0x82420604;
	sub_82420F60(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824206e4
	if (ctx.cr0.lt) goto loc_824206E4;
	// addi r4,r1,820
	ctx.r4.s64 = ctx.r1.s64 + 820;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82420178
	ctx.lr = 0x82420618;
	sub_82420178(ctx, base);
	// addi r4,r1,828
	ctx.r4.s64 = ctx.r1.s64 + 828;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82420178
	ctx.lr = 0x82420624;
	sub_82420178(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82420178
	ctx.lr = 0x82420630;
	sub_82420178(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82420178
	ctx.lr = 0x8242063C;
	sub_82420178(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82420178
	ctx.lr = 0x82420648;
	sub_82420178(ctx, base);
	// addi r4,r1,148
	ctx.r4.s64 = ctx.r1.s64 + 148;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82420178
	ctx.lr = 0x82420654;
	sub_82420178(ctx, base);
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82420178
	ctx.lr = 0x82420660;
	sub_82420178(ctx, base);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r8,r1,224
	ctx.r8.s64 = ctx.r1.s64 + 224;
	// lwz r9,156(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r6,5
	ctx.r6.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82421048
	ctx.lr = 0x82420684;
	sub_82421048(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824206e4
	if (ctx.cr0.lt) goto loc_824206E4;
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// lwz r9,140(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// li r7,40
	ctx.r7.s64 = 40;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r3,252
	ctx.r3.s64 = 252;
	// stw r10,28(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28, ctx.r10.u32);
	// std r31,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r31.u64);
	// std r31,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r31.u64);
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// std r31,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r31.u64);
	// std r31,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r31.u64);
	// clrlwi r4,r10,16
	ctx.r4.u64 = ctx.r10.u32 & 0xFFFF;
	// std r31,32(r11)
	PPC_STORE_U64(ctx.r11.u32 + 32, ctx.r31.u64);
	// li r10,5
	ctx.r10.s64 = 5;
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// rlwimi r4,r10,16,0,15
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r4.u64 & 0xFFFFFFFF0000FFFF);
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// bl 0x825c6c1c
	ctx.lr = 0x824206DC;
	__imp__XMsgStartIORequest(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82420710
	if (!ctx.cr0.lt) goto loc_82420710;
loc_824206E4:
	// li r31,1627
	ctx.r31.s64 = 1627;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x824206f8
	if (ctx.cr6.eq) goto loc_824206F8;
	// stw r3,24(r28)
	PPC_STORE_U32(ctx.r28.u32 + 24, ctx.r3.u32);
	// b 0x824206fc
	goto loc_824206FC;
loc_824206F8:
	// bl 0x825b3c80
	ctx.lr = 0x824206FC;
	sub_825B3C80(ctx, base);
loc_824206FC:
	// lwz r3,136(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82420730
	if (ctx.cr6.eq) goto loc_82420730;
	// bl 0x825c6bec
	ctx.lr = 0x8242070C;
	__imp__XamFree(ctx, base);
	// b 0x82420730
	goto loc_82420730;
loc_82420710:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82420720
	if (ctx.cr6.eq) goto loc_82420720;
	// li r31,997
	ctx.r31.s64 = 997;
	// b 0x82420730
	goto loc_82420730;
loc_82420720:
	// bl 0x825b3cd0
	ctx.lr = 0x82420724;
	sub_825B3CD0(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// andi. r31,r11,1627
	ctx.r31.u64 = ctx.r11.u64 & 1627;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
loc_82420730:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,800
	ctx.r1.s64 = ctx.r1.s64 + 800;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8242073C"))) PPC_WEAK_FUNC(sub_8242073C);
PPC_FUNC_IMPL(__imp__sub_8242073C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82420740"))) PPC_WEAK_FUNC(sub_82420740);
PPC_FUNC_IMPL(__imp__sub_82420740) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x82420748;
	__savegprlr_26(ctx, base);
	// stwu r1,-800(r1)
	ea = -800 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r3,820(r1)
	PPC_STORE_U32(ctx.r1.u32 + 820, ctx.r3.u32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r5,836(r1)
	PPC_STORE_U32(ctx.r1.u32 + 836, ctx.r5.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// li r3,2049
	ctx.r3.s64 = 2049;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// stw r31,736(r1)
	PPC_STORE_U32(ctx.r1.u32 + 736, ctx.r31.u32);
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// bl 0x82420e48
	ctx.lr = 0x82420784;
	sub_82420E48(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82420928
	if (ctx.cr0.lt) goto loc_82420928;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,136
	ctx.r7.s64 = ctx.r1.s64 + 136;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82420ec0
	ctx.lr = 0x824207AC;
	sub_82420EC0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82420928
	if (ctx.cr0.lt) goto loc_82420928;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lwz r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x825c6c0c
	ctx.lr = 0x824207C4;
	__imp__XamAlloc(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82420928
	if (ctx.cr0.lt) goto loc_82420928;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x825c6c2c
	ctx.lr = 0x824207D4;
	__imp__XNetLogonGetTitleID(ctx, base);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stw r3,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r3.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_824207E0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x824207e0
	if (!ctx.cr6.eq) goto loc_824207E0;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwz r8,136(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// addi r10,r1,152
	ctx.r10.s64 = ctx.r1.s64 + 152;
	// lwz r7,144(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r6,r1,148
	ctx.r6.s64 = ctx.r1.s64 + 148;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r5,r1,156
	ctx.r5.s64 = ctx.r1.s64 + 156;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lwz r29,836(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 836);
	// li r3,2049
	ctx.r3.s64 = 2049;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// sth r11,132(r1)
	PPC_STORE_U16(ctx.r1.u32 + 132, ctx.r11.u16);
	// sth r29,140(r1)
	PPC_STORE_U16(ctx.r1.u32 + 140, ctx.r29.u16);
	// bl 0x82420f60
	ctx.lr = 0x82420848;
	sub_82420F60(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82420928
	if (ctx.cr0.lt) goto loc_82420928;
	// addi r4,r1,820
	ctx.r4.s64 = ctx.r1.s64 + 820;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82420178
	ctx.lr = 0x8242085C;
	sub_82420178(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82420178
	ctx.lr = 0x82420868;
	sub_82420178(ctx, base);
	// addi r4,r1,836
	ctx.r4.s64 = ctx.r1.s64 + 836;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82420178
	ctx.lr = 0x82420874;
	sub_82420178(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82420178
	ctx.lr = 0x82420880;
	sub_82420178(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82420178
	ctx.lr = 0x8242088C;
	sub_82420178(ctx, base);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82420178
	ctx.lr = 0x82420898;
	sub_82420178(ctx, base);
	// addi r4,r1,140
	ctx.r4.s64 = ctx.r1.s64 + 140;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82420178
	ctx.lr = 0x824208A4;
	sub_82420178(ctx, base);
	// addi r10,r1,148
	ctx.r10.s64 = ctx.r1.s64 + 148;
	// addi r8,r1,224
	ctx.r8.s64 = ctx.r1.s64 + 224;
	// lwz r9,156(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82421048
	ctx.lr = 0x824208C8;
	sub_82421048(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82420928
	if (ctx.cr0.lt) goto loc_82420928;
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// lwz r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// li r7,40
	ctx.r7.s64 = 40;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r3,252
	ctx.r3.s64 = 252;
	// stw r10,28(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28, ctx.r10.u32);
	// std r31,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r31.u64);
	// std r31,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r31.u64);
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// std r31,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r31.u64);
	// std r31,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r31.u64);
	// clrlwi r4,r10,16
	ctx.r4.u64 = ctx.r10.u32 & 0xFFFF;
	// std r31,32(r11)
	PPC_STORE_U64(ctx.r11.u32 + 32, ctx.r31.u64);
	// li r10,5
	ctx.r10.s64 = 5;
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// rlwimi r4,r10,16,0,15
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r4.u64 & 0xFFFFFFFF0000FFFF);
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// bl 0x825c6c1c
	ctx.lr = 0x82420920;
	__imp__XMsgStartIORequest(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82420954
	if (!ctx.cr0.lt) goto loc_82420954;
loc_82420928:
	// li r31,1627
	ctx.r31.s64 = 1627;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8242093c
	if (ctx.cr6.eq) goto loc_8242093C;
	// stw r3,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r3.u32);
	// b 0x82420940
	goto loc_82420940;
loc_8242093C:
	// bl 0x825b3c80
	ctx.lr = 0x82420940;
	sub_825B3C80(ctx, base);
loc_82420940:
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82420974
	if (ctx.cr6.eq) goto loc_82420974;
	// bl 0x825c6bec
	ctx.lr = 0x82420950;
	__imp__XamFree(ctx, base);
	// b 0x82420974
	goto loc_82420974;
loc_82420954:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82420964
	if (ctx.cr6.eq) goto loc_82420964;
	// li r31,997
	ctx.r31.s64 = 997;
	// b 0x82420974
	goto loc_82420974;
loc_82420964:
	// bl 0x825b3cd0
	ctx.lr = 0x82420968;
	sub_825B3CD0(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// andi. r31,r11,1627
	ctx.r31.u64 = ctx.r11.u64 & 1627;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
loc_82420974:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,800
	ctx.r1.s64 = ctx.r1.s64 + 800;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82420980"))) PPC_WEAK_FUNC(sub_82420980);
PPC_FUNC_IMPL(__imp__sub_82420980) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825c6c3c
	__imp__NetDll_WSAStartup(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82420990"))) PPC_WEAK_FUNC(sub_82420990);
PPC_FUNC_IMPL(__imp__sub_82420990) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825c6c4c
	__imp__NetDll_WSACleanup(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82420998"))) PPC_WEAK_FUNC(sub_82420998);
PPC_FUNC_IMPL(__imp__sub_82420998) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825c6c5c
	__imp__NetDll_socket(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824209AC"))) PPC_WEAK_FUNC(sub_824209AC);
PPC_FUNC_IMPL(__imp__sub_824209AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824209B0"))) PPC_WEAK_FUNC(sub_824209B0);
PPC_FUNC_IMPL(__imp__sub_824209B0) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825c6c6c
	__imp__NetDll_closesocket(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824209BC"))) PPC_WEAK_FUNC(sub_824209BC);
PPC_FUNC_IMPL(__imp__sub_824209BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824209C0"))) PPC_WEAK_FUNC(sub_824209C0);
PPC_FUNC_IMPL(__imp__sub_824209C0) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825c6c7c
	__imp__NetDll_shutdown(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824209D0"))) PPC_WEAK_FUNC(sub_824209D0);
PPC_FUNC_IMPL(__imp__sub_824209D0) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825c6c8c
	__imp__NetDll_ioctlsocket(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824209E4"))) PPC_WEAK_FUNC(sub_824209E4);
PPC_FUNC_IMPL(__imp__sub_824209E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824209E8"))) PPC_WEAK_FUNC(sub_824209E8);
PPC_FUNC_IMPL(__imp__sub_824209E8) {
	PPC_FUNC_PROLOGUE();
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825c6c9c
	__imp__NetDll_setsockopt(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82420A04"))) PPC_WEAK_FUNC(sub_82420A04);
PPC_FUNC_IMPL(__imp__sub_82420A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82420A08"))) PPC_WEAK_FUNC(sub_82420A08);
PPC_FUNC_IMPL(__imp__sub_82420A08) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825c6cac
	__imp__NetDll_getsockname(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82420A1C"))) PPC_WEAK_FUNC(sub_82420A1C);
PPC_FUNC_IMPL(__imp__sub_82420A1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82420A20"))) PPC_WEAK_FUNC(sub_82420A20);
PPC_FUNC_IMPL(__imp__sub_82420A20) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825c6cbc
	__imp__NetDll_getpeername(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82420A34"))) PPC_WEAK_FUNC(sub_82420A34);
PPC_FUNC_IMPL(__imp__sub_82420A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82420A38"))) PPC_WEAK_FUNC(sub_82420A38);
PPC_FUNC_IMPL(__imp__sub_82420A38) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825c6ccc
	__imp__NetDll_bind(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82420A4C"))) PPC_WEAK_FUNC(sub_82420A4C);
PPC_FUNC_IMPL(__imp__sub_82420A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82420A50"))) PPC_WEAK_FUNC(sub_82420A50);
PPC_FUNC_IMPL(__imp__sub_82420A50) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825c6cdc
	__imp__NetDll_connect(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82420A64"))) PPC_WEAK_FUNC(sub_82420A64);
PPC_FUNC_IMPL(__imp__sub_82420A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82420A68"))) PPC_WEAK_FUNC(sub_82420A68);
PPC_FUNC_IMPL(__imp__sub_82420A68) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825c6cec
	__imp__NetDll_listen(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82420A78"))) PPC_WEAK_FUNC(sub_82420A78);
PPC_FUNC_IMPL(__imp__sub_82420A78) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825c6cfc
	__imp__NetDll_accept(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82420A8C"))) PPC_WEAK_FUNC(sub_82420A8C);
PPC_FUNC_IMPL(__imp__sub_82420A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82420A90"))) PPC_WEAK_FUNC(sub_82420A90);
PPC_FUNC_IMPL(__imp__sub_82420A90) {
	PPC_FUNC_PROLOGUE();
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825c6d0c
	__imp__NetDll_select(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82420AAC"))) PPC_WEAK_FUNC(sub_82420AAC);
PPC_FUNC_IMPL(__imp__sub_82420AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82420AB0"))) PPC_WEAK_FUNC(sub_82420AB0);
PPC_FUNC_IMPL(__imp__sub_82420AB0) {
	PPC_FUNC_PROLOGUE();
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825c6d1c
	__imp__NetDll_WSAGetOverlappedResult(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82420ACC"))) PPC_WEAK_FUNC(sub_82420ACC);
PPC_FUNC_IMPL(__imp__sub_82420ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82420AD0"))) PPC_WEAK_FUNC(sub_82420AD0);
PPC_FUNC_IMPL(__imp__sub_82420AD0) {
	PPC_FUNC_PROLOGUE();
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825c6d2c
	__imp__NetDll_recv(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82420AE8"))) PPC_WEAK_FUNC(sub_82420AE8);
PPC_FUNC_IMPL(__imp__sub_82420AE8) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825c6d3c
	__imp__NetDll_WSARecv(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82420B0C"))) PPC_WEAK_FUNC(sub_82420B0C);
PPC_FUNC_IMPL(__imp__sub_82420B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82420B10"))) PPC_WEAK_FUNC(sub_82420B10);
PPC_FUNC_IMPL(__imp__sub_82420B10) {
	PPC_FUNC_PROLOGUE();
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825c6d4c
	__imp__NetDll_recvfrom(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82420B30"))) PPC_WEAK_FUNC(sub_82420B30);
PPC_FUNC_IMPL(__imp__sub_82420B30) {
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
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// lwz r9,196(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x825c6d5c
	ctx.lr = 0x82420B70;
	__imp__NetDll_WSARecvFrom(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82420B80"))) PPC_WEAK_FUNC(sub_82420B80);
PPC_FUNC_IMPL(__imp__sub_82420B80) {
	PPC_FUNC_PROLOGUE();
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825c6d6c
	__imp__NetDll_send(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82420B98"))) PPC_WEAK_FUNC(sub_82420B98);
PPC_FUNC_IMPL(__imp__sub_82420B98) {
	PPC_FUNC_PROLOGUE();
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825c6d7c
	__imp__NetDll_sendto(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82420BB8"))) PPC_WEAK_FUNC(sub_82420BB8);
PPC_FUNC_IMPL(__imp__sub_82420BB8) {
	PPC_FUNC_PROLOGUE();
	// b 0x825c6d8c
	__imp__NetDll_WSAGetLastError(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82420BBC"))) PPC_WEAK_FUNC(sub_82420BBC);
PPC_FUNC_IMPL(__imp__sub_82420BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82420BC0"))) PPC_WEAK_FUNC(sub_82420BC0);
PPC_FUNC_IMPL(__imp__sub_82420BC0) {
	PPC_FUNC_PROLOGUE();
	// b 0x825c6d9c
	__imp__NetDll_WSACreateEvent(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82420BC4"))) PPC_WEAK_FUNC(sub_82420BC4);
PPC_FUNC_IMPL(__imp__sub_82420BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82420BC8"))) PPC_WEAK_FUNC(sub_82420BC8);
PPC_FUNC_IMPL(__imp__sub_82420BC8) {
	PPC_FUNC_PROLOGUE();
	// b 0x825c6dac
	__imp__NetDll_WSACloseEvent(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82420BCC"))) PPC_WEAK_FUNC(sub_82420BCC);
PPC_FUNC_IMPL(__imp__sub_82420BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82420BD0"))) PPC_WEAK_FUNC(sub_82420BD0);
PPC_FUNC_IMPL(__imp__sub_82420BD0) {
	PPC_FUNC_PROLOGUE();
	// b 0x825c6dbc
	__imp__NetDll_WSASetEvent(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82420BD4"))) PPC_WEAK_FUNC(sub_82420BD4);
PPC_FUNC_IMPL(__imp__sub_82420BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82420BD8"))) PPC_WEAK_FUNC(sub_82420BD8);
PPC_FUNC_IMPL(__imp__sub_82420BD8) {
	PPC_FUNC_PROLOGUE();
	// b 0x825c6dcc
	__imp__NetDll_WSAResetEvent(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82420BDC"))) PPC_WEAK_FUNC(sub_82420BDC);
PPC_FUNC_IMPL(__imp__sub_82420BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82420BE0"))) PPC_WEAK_FUNC(sub_82420BE0);
PPC_FUNC_IMPL(__imp__sub_82420BE0) {
	PPC_FUNC_PROLOGUE();
	// b 0x825c6ddc
	__imp__NetDll_WSAWaitForMultipleEvents(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82420BE4"))) PPC_WEAK_FUNC(sub_82420BE4);
PPC_FUNC_IMPL(__imp__sub_82420BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82420BE8"))) PPC_WEAK_FUNC(sub_82420BE8);
PPC_FUNC_IMPL(__imp__sub_82420BE8) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825c6dec
	__imp__NetDll_XNetStartup(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82420BF4"))) PPC_WEAK_FUNC(sub_82420BF4);
PPC_FUNC_IMPL(__imp__sub_82420BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82420BF8"))) PPC_WEAK_FUNC(sub_82420BF8);
PPC_FUNC_IMPL(__imp__sub_82420BF8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825c6dfc
	__imp__NetDll_XNetCleanup(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82420C00"))) PPC_WEAK_FUNC(sub_82420C00);
PPC_FUNC_IMPL(__imp__sub_82420C00) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825c6e0c
	__imp__NetDll_XNetCreateKey(ctx, base);
	return;
}


#pragma once

// Included only by the graphics slice. Other harnesses keep their dispatch ABI.
struct PPCContext;
void BurnoutCallIndirect(PPCContext& ctx, unsigned char* base, unsigned int target);
#define PPC_CALL_INDIRECT_FUNC(x) BurnoutCallIndirect(ctx, base, (unsigned int)(x))

extern "C" void BurnoutPpcMmStoreU32(unsigned char* base, unsigned int address, unsigned int value);
#define PPC_MM_STORE_U32(x, y) BurnoutPpcMmStoreU32(base, (unsigned int)(x), (unsigned int)(y))

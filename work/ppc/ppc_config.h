#pragma once
#ifndef PPC_CONFIG_H_INCLUDED
#define PPC_CONFIG_H_INCLUDED


#define PPC_IMAGE_BASE 0x82000000ull
#define PPC_IMAGE_SIZE 0xDA0000ull
#define PPC_CODE_BASE 0x82090000ull
#define PPC_CODE_SIZE 0x54D7E8ull

extern "C" unsigned int BurnoutPpcLoadU32(
    unsigned char* base,
    unsigned int address);

#define PPC_LOAD_U32(x) BurnoutPpcLoadU32(base, (unsigned int)(x))

#ifdef PPC_INCLUDE_DETAIL
#include "ppc_detail.h"
#endif

#endif

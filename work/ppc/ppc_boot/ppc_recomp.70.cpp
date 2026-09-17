#include "graphics_dispatch.h"
#include "ppc_recomp_shared.h"
__attribute__((alias("__imp__sub_824AFEC8"))) PPC_WEAK_FUNC(sub_824AFEC8);
PPC_FUNC_IMPL(__imp__sub_824AFEC8) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

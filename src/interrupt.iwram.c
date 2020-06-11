#include "interrupt.h"

void interrupt(void) {
	u32 irqs = IO_IF & IO_IE;
	if(irqs & vblank_IRQ) {
		key_update();
	}
	IO_IFBIOS = irqs;
	IO_IF = irqs;
}
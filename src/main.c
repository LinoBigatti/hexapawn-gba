#include <basics/types.h>
#include <IO.h>
#include <basics/vsync.h>

#include "interrupt.h"
#include "gfx.h"
#include "game.h"

int main(void) {
	loadGfx(); //Init graphics
	setupBoard(); //Set up board variables.
	
	//Load interrupts
	IO_ISR = interrupt;
	IO_DISPSTAT |= dispstat_vblank_IRQ;
	IO_IE = vblank_IRQ;
	IO_IME = 1;

	//Main loop
	while(1) {
		VBlankIntrWait();

		tick();
	}

	return 0;
}

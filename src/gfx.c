//Graphic functions

#include "gfx.h"

obj_attributes *selectionA = &obj_reg_memory[0];
obj_attributes *selectionB = &obj_reg_memory[1];
obj_attributes *playerA = &obj_reg_memory[2];
obj_attributes *playerB = &obj_reg_memory[5];

void loadGfx(void) {
	obj_clear_all();
	
	LZ77UnCompVRAM(&bgTiles, (u16*)&tile_vram[0][0]);
	LZ77UnCompVRAM(&bgPal, &bg_pal_memory[0]);
	LZ77UnCompVRAM(&bgMap, &se_memory[31][0]);

	LZ77UnCompVRAM(&selectionTiles, &tile8_vram[4][0]);
	LZ77UnCompVRAM(&playerATiles, &tile8_vram[4][16]);
	LZ77UnCompVRAM(&playerAPal, &obj_pal_memory[0]);
	LZ77UnCompVRAM(&playerBPal, &obj_pal_memory[16]);
	
	IO_DISPCNT = dispcnt_OBJ | dispcnt_obj_mapping_1D | dispcnt_mode(0) | dispcnt_BG0;
	IO_BG0CNT = bg0cnt_cbb(0) | bg0cnt_sbb(31) | bg0cnt_8bpp | bg0cnt_size(BG_32x32);

	loadPiece(selectionA, 1, 2, 0, 0);
	loadPiece(selectionB, 1, 0, 1, 0);
	toggleSelection(selectionB);
	loadPiece((obj_attributes *)&playerA[0], 0, 2, 0, 32);
	loadPiece((obj_attributes *)&playerA[1], 1, 2, 0, 32);
	loadPiece((obj_attributes *)&playerA[2], 2, 2, 0, 32);
	loadPiece((obj_attributes *)&playerB[0], 0, 0, 1, 32);
	loadPiece((obj_attributes *)&playerB[1], 1, 0, 1, 32);
	loadPiece((obj_attributes *)&playerB[2], 2, 0, 1, 32);
}

void loadPiece(obj_attributes *obj, u32 x, u32 y, int pal, int tile) {
	obj->attr0 = attr0_build(attr0_Y(boardY(y)), attr0_regular, attr0_normal, 0, attr0_4bpp, attr0_square);
	obj->attr1 = attr1_regular_build(attr1_X(boardX(x)), 0, 0, attr1_size(OBJ_32x32));
	obj->attr2 = attr2_build(attr2_base_tile(tile), attr2_priority(0), attr2_palbank(pal));
}
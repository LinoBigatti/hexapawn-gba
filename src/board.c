//Board management

#include "board.h"

int boardState[3][3] = {{2, 2, 2}, 
						 {0, 0, 0}, 
						 {1, 1, 1}};

obj_attributes *boardPieces[3][3];

void moveObj(void *obj_, u32 x, u32 y) {
	obj_attributes *obj = (obj_attributes*)obj_;
	obj->attr0 &= !0xFF;
	obj->attr1 &= 0xFE00;
	obj->attr0 |= boardY(y) & 0xFF;
	obj->attr1 |= boardX(x) & 0x1FF;
}

void movePiece(u32 x, u32 y, u32 xPrev, u32 yPrev, u32 type) {
	obj_attributes *obj = boardPieces[yPrev][xPrev];
	moveObj(obj, x, y);

	if(boardPieces[y][x] != 0) {
		toggleSelection(boardPieces[y][x]);
	}

	boardPieces[yPrev][xPrev] = 0;
	boardState[yPrev][xPrev] = 0;
	boardPieces[y][x] = obj;
	boardState[y][x] = type;
}

void setupBoard(void) {
	boardPieces[0][0] = (obj_attributes *)&playerB[0];
	boardPieces[0][1] = (obj_attributes *)&playerB[1];
	boardPieces[0][2] = (obj_attributes *)&playerB[2];
	boardPieces[2][0] = (obj_attributes *)&playerA[0];
	boardPieces[2][1] = (obj_attributes *)&playerA[1];
	boardPieces[2][2] = (obj_attributes *)&playerA[2];
}
#include "ai.h"

int aiState = 0;
int prevXai = 1;
int prevYai = 2;

void aiTick(void) {
	s32 selectionX_ = randomRange(0, 2);
	s32 selectionY_ = randomRange(0, 2);	
	int selectedPlace = boardState[selectionY_][selectionX_];

	if(aiState == 0) {
		if(selectedPlace == 2) {
			prevXai = selectionX_;
			prevYai = selectionY_;

			aiState = 1;
		}
	} else {
		if(selectedPlace == 0) {
			movePiece(selectionX_, selectionY_, prevXai, prevYai, 2);

			aiState = 0;
			toggleSelection(selectionB);
			toggleSelection(selectionA);

			moveObj(selectionB, 1, 0);
			turn = PLAYER;
		}
	}
}
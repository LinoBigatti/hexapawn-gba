//Game system

#include "game.h"

int turn = PLAYER; //Human starts

int selectionX = 1;
int selectionY = 2;
int prevX = 1;
int prevY = 2;
int playerState = 0;

int aiState = 0;
int prevXai = 1;
int prevYai = 2;

void tick(void) {
	if(turn == PLAYER) {
		playerTick();
	} else {
		aiTick();
	}
}

void playerTick(void) {
	if(key_start_pressing(BUTTON_UP) && selectionY != 0) { selectionY -= 1; }
	if(key_start_pressing(BUTTON_DOWN) && selectionY != 2) { selectionY += 1; }
	if(key_start_pressing(BUTTON_RIGHT) && selectionX != 2) { selectionX += 1; }
	if(key_start_pressing(BUTTON_LEFT) && selectionX != 0) { selectionX -= 1; }

	moveObj(selectionA, selectionX, selectionY);

	if(key_start_pressing(BUTTON_A)) {
		int selectedPlace = boardState[selectionY][selectionX];

		if(playerState == 0) {
			if(selectedPlace == 1) {
				prevX = selectionX;
				prevY = selectionY;

				playerState = 1;
			}
		} else {
			if(selectedPlace == 0) {
				movePiece(selectionX, selectionY, prevX, prevY, 1);
				
				playerState = 0;
				toggleSelection(selectionB);
				toggleSelection(selectionA);

				selectionX = 1;
				selectionY = 2;
				moveObj(selectionA, selectionX, selectionY);

				turn = AI;
			}
		}
	}
}

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
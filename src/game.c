//Game system

#include "game.h"

int turn = PLAYER; //Human starts

int selectionX = 1;
int selectionY = 2;
int prevX = 1;
int prevY = 2;
int playerState = 0;

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
				if(selectionY == prevY - 1 && selectionX == prevX) {
					movePiece(selectionX, selectionY, prevX, prevY, 1);
				
					playerState = 0;
					toggleSelection(selectionB);
					toggleSelection(selectionA);

					selectionX = 1;
					selectionY = 2;
					moveObj(selectionA, selectionX, selectionY);

					turn = AI;
				}
			} else if(selectedPlace == 2) {
				if(selectionY == prevY - 1 && (selectionX == prevX - 1 ||
											  selectionX == prevX + 1)) {
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
}
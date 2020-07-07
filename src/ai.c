#include "ai.h"

int aiState = 0;
int prevXai = 1;
int prevYai = 2;

#define TURN(x) (x-2)/2

state *allStates = {(state*)&states2[0]};

int checkBoard(int a[3][3], int b[3][3]) {
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {
			if(a[i][j] != b[i][j]) {
				return 0;
			}
		}
	}
	return 1;
}

state getBoard(int possibilities) {
	for(int i = 0; i < possibilities; i++) {
		state *candidate = (state*)states2[i];
		if(checkBoard(boardState, candidate->board)) {
			
			return *candidate;
		}
	}
	state a = { .extra = 1 };
	return a;
}

void aiTick(void) {
	state situation = getBoard(3);
	movement move = {.valid = 0};

	while(move.valid == 0) {
		int i = randomRange(0, 4);
		move = situation.moves[i];
	}

	movePiece(move.endX, move.endY, move.startX, move.startY, 2);
	turn = PLAYER;
}
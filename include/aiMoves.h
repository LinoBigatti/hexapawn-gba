#ifndef AI_MOVES_H
#define AI_MOVES_H

#include <basics/types.h>

typedef struct movement_ {
	u32 startX, startY;
	u32 endX, endY;
} movement;

typedef struct state_ {
	int board[3][3];
	movement moves[4];
} state;

extern state *states2[3];

#endif
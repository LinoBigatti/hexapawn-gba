#ifndef AI_H
#define AI_H

#include <basics/types.h>

typedef struct movement_ {
	u32 startX, startY;
	u32 endX, endY;
} movement;

typedef struct state_ {
	int board[3][3];
	movement moves[3];
} state;

#endif
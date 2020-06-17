//Game system

#ifndef GAME_H
#define GAME_H

#include <input.h>

#include "board.h"
#include "gfx.h"
#include "rng.h"

#define PLAYER 0
#define AI 1

extern int turn;
extern int selectionX;
extern int selectionY;

extern void tick(void);

extern void playerTick(void);
extern void aiTick(void);

#endif
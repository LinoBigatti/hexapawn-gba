//Board management

#ifndef BOARD_H
#define BOARD_H

#include <basics/types.h>
#include <object.h>

#include "gfx.h"

extern int boardState[3][3];

extern obj_attributes *boardPieces[3][3];

static inline u32 boardX(u32 x)
{ return 72 + (x * 32); }

static inline u32 boardY(u32 y)
{ return 32 + (y * 32); }

static inline void toggleSelection(obj_attributes *obj)
{ obj->attr0 ^= attr0_hide; }

extern void moveObj(void *obj_, u32 x, u32 y);
extern void movePiece(u32 x, u32 y, u32 xPrev, u32 yPrev, u32 type);

extern void setupBoard(void);

#endif
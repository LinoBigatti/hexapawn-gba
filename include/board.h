//Board management

#ifndef BOARD_H
#define BOARD_H

static inline u32 boardX(u32 x)
{ return 72 + (x * 32); }

static inline u32 boardY(u32 y)
{ return 32 + (y * 32); }

#endif
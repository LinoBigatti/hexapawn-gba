//Graphic functions

#ifndef GFX_H
#define GFX_H

#include <basics/types.h>
#include <basics/bios.h>
#include <IO.h>
#include <background.h>
#include <object.h>

#include "board.h"

#include "gfx/bg.h"
#include "gfx/selection.h"
#include "gfx/playerA.h"
#include "gfx/playerB.h"

extern obj_attributes *selectionA;
extern obj_attributes *selectionB;
extern obj_attributes *playerA;
extern obj_attributes *playerB;

extern void loadPiece(obj_attributes *obj, u32 x, u32 y, int pal, int tile);

extern void loadGfx(void);

#endif
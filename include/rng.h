#ifndef RNG_H
#define RNG_H

#include <basics/types.h>

extern void randomSeed(u64 newSeed);
extern u32 random(void);
extern s32 randomRange(s32 min, s32 max);

#endif
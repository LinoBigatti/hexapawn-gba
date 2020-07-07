#include "ai.h"

state option0 = {
	.board = {{2, 2, 2}, {1, 0, 0}, {0, 1, 1}},
	.moves = {
		{
			.valid = 1,
			.startX = 1,
			.startY = 0,
			.endX = 0,
			.endY = 1,
		},
		{
			.valid = 1,
			.startX = 1,
			.startY = 0,
			.endX = 1,
			.endY = 1,
		},
		{
			.valid = 1,
			.startX = 2,
			.startY = 0,
			.endX = 2,
			.endY = 1,
		},
		{.valid=0}
	}
};

state option1 = {
	.board = {{2, 2, 2}, {0, 0, 1}, {1, 1, 0}},
	.moves = {
		{
			.valid = 1,
			.startX = 1,
			.startY = 0,
			.endX = 2,
			.endY = 1,
		},
		{
			.valid = 1,
			.startX = 1,
			.startY = 0,
			.endX = 1,
			.endY = 1,
		},
		{
			.valid = 1,
			.startX = 0,
			.startY = 0,
			.endX = 0,
			.endY = 1,
		},
		{.valid=0}
	}
};

state option2 = {
	.board = {{2, 2, 2}, {0, 1, 0}, {1, 0, 1}},
	.moves = {
		{
			.valid = 1,
			.startX = 0,
			.startY = 0,
			.endX = 0,
			.endY = 1,
		},
		{
			.valid = 1,
			.startX = 0,
			.startY = 0,
			.endX = 1,
			.endY = 1,
		},
		{
			.valid = 1,
			.startX = 2,
			.startY = 0,
			.endX = 1,
			.endY = 1,
		},
		{
			.valid = 1,
			.startX = 2,
			.startY = 0,
			.endX = 2,
			.endY = 1,
		}
	}
};

state *states2[3] = {&option0, &option1, &option2};
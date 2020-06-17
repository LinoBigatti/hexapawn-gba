#include "aiMoves.h"

state option0 = {
	.board = {{'2', '2', '2'}, {'1', '0', '0'}, {'0', '1', '1'}},
	.moves = {
		{
			.startX = 0,
			.startY = 1,
			.endX = 1,
			.endY = 0,
		},
		{
			.startX = 0,
			.startY = 1,
			.endX = 1,
			.endY = 1,
		},
		{
			.startX = 0,
			.startY = 2,
			.endX = 1,
			.endY = 2,
		},
		{}
	}
};

state option1 = {
	.board = {{'2', '2', '2'}, {'0', '0', '1'}, {'1', '1', '0'}},
	.moves = {
		{
			.startX = 2,
			.startY = 1,
			.endX = 1,
			.endY = 0,
		},
		{
			.startX = 2,
			.startY = 1,
			.endX = 1,
			.endY = 1,
		},
		{
			.startX = 2,
			.startY = 2,
			.endX = 1,
			.endY = 2,
		},
		{}
	}
};

state option2 = {
	.board = {{'2', '2', '2'}, {'0', '1', '0'}, {'1', '0', '1'}},
	.moves = {
		{
			.startX = 0,
			.startY = 0,
			.endX = 1,
			.endY = 0,
		},
		{
			.startX = 0,
			.startY = 0,
			.endX = 1,
			.endY = 1,
		},
		{
			.startX = 0,
			.startY = 2,
			.endX = 1,
			.endY = 1,
		},
		{
			.startX = 0,
			.startY = 2,
			.endX = 1,
			.endY = 2,
		}
	}
};

state *states2[3] = {&option0, &option1, &option2};
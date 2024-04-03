#include <stdio.h>
#include <stdlib.h>
#include "Info.h"

MOVEMENT playerAI(MAPDATA map, POSITION p, POSITION e, int turn)
{
	int a = abs(e.x - p.x) + abs(e.y - p.y);
	int b = rand() % 8 +1;


	switch (b) {
	case 1:
		if (map[p.y][p.x + 1] == 1 && !(a <= 3 && e.x > p.x)) { return RIGHT; }
		else if (map[p.y + 1][p.x] == 1 && !(a <= 3 && e.y > p.y)) { return DOWN; }
		else if (map[p.y][p.x - 1] == 1 && !(a <= 3 && e.x < p.x)) { return LEFT; }
		else if (map[p.y - 1][p.x] == 1 && !(a <= 3 && e.y < p.y)) { return UP; }
		else if (map[p.y][p.x - 1] == 0 && !(a <= 3 && e.x < p.x)) { return LEFT; }
		else if (map[p.y - 1][p.x] == 0 && !(a <= 3 && e.y < p.y)) { return UP; }
		else if (map[p.y][p.x + 1] == 0 && !(a <= 3 && e.x > p.x)) { return RIGHT; }
		else if (map[p.y + 1][p.x] == 0 && !(a <= 3 && e.y > p.y)) { return DOWN; }
		else { return STAY; }
		break;

	case 2:
		if (map[p.y + 1][p.x] == 1 && !(a <= 3 && e.y > p.y)) { return DOWN; }
		else if (map[p.y][p.x - 1] == 1 && !(a <= 3 && e.x < p.x)) { return LEFT; }
		else if (map[p.y - 1][p.x] == 1 && !(a <= 3 && e.y < p.y)) { return UP; }
		else if (map[p.y][p.x + 1] == 1 && !(a <= 3 && e.x > p.x)) { return RIGHT; }
		else if (map[p.y + 1][p.x] == 0 && !(a <= 3 && e.y > p.y)) { return DOWN; }
		else if (map[p.y][p.x - 1] == 0 && !(a <= 3 && e.x < p.x)) { return LEFT; }
		else if (map[p.y - 1][p.x] == 0 && !(a <= 3 && e.y < p.y)) { return UP; }
		else if (map[p.y][p.x + 1] == 0 && !(a <= 3 && e.x > p.x)) { return RIGHT; }
		else { return STAY; }
		break;

	case 3:
		if (map[p.y][p.x - 1] == 1 && !(a <= 3 && e.x < p.x)) { return LEFT; }
		else if (map[p.y - 1][p.x] == 1 && !(a <= 3 && e.y < p.y)) { return UP; }
		else if (map[p.y][p.x + 1] == 1 && !(a <= 3 && e.x > p.x)) { return RIGHT; }
		else if (map[p.y + 1][p.x] == 1 && !(a <= 3 && e.y > p.y)) { return DOWN; }
		else if (map[p.y][p.x - 1] == 0 && !(a <= 3 && e.x < p.x)) { return LEFT; }
		else if (map[p.y - 1][p.x] == 0 && !(a <= 3 && e.y < p.y)) { return UP; }
		else if (map[p.y][p.x + 1] == 0 && !(a <= 3 && e.x > p.x)) { return RIGHT; }
		else if (map[p.y + 1][p.x] == 0 && !(a <= 3 && e.y > p.y)) { return DOWN; }
		else { return STAY; }
		break;

	case 4:
		if (map[p.y - 1][p.x] == 1 && !(a <= 3 && e.y < p.y)) { return UP; }
		else if (map[p.y][p.x + 1] == 1 && !(a <= 3 && e.x > p.x)) { return RIGHT; }
		else if (map[p.y + 1][p.x] == 1 && !(a <= 3 && e.y > p.y)) { return DOWN; }
		else if (map[p.y][p.x - 1] == 1 && !(a <= 3 && e.x < p.x)) { return LEFT; }
		else if (map[p.y - 1][p.x] == 0 && !(a <= 3 && e.y < p.y)) { return UP; }
		else if (map[p.y][p.x + 1] == 0 && !(a <= 3 && e.x > p.x)) { return RIGHT; }
		else if (map[p.y + 1][p.x] == 0 && !(a <= 3 && e.y > p.y)) { return DOWN; }
		else if (map[p.y][p.x - 1] == 0 && !(a <= 3 && e.x < p.x)) { return LEFT; }
		else { return STAY; }
		break;

	case 5:
		if (map[p.y][p.x - 1] == 1 && !(a <= 3 && e.x < p.x)) { return LEFT; }
		else if (map[p.y - 1][p.x] == 1 && !(a <= 3 && e.y < p.y)) { return UP; }
		else if (map[p.y][p.x + 1] == 1 && !(a <= 3 && e.x > p.x)) { return RIGHT; }
		else if (map[p.y + 1][p.x] == 1 && !(a <= 3 && e.y > p.y)) { return DOWN; }
		else if (map[p.y][p.x + 1] == 0 && !(a <= 3 && e.x > p.x)) { return RIGHT; }
		else if (map[p.y + 1][p.x] == 0 && !(a <= 3 && e.y > p.y)) { return DOWN; }
		else if (map[p.y][p.x - 1] == 0 && !(a <= 3 && e.x < p.x)) { return LEFT; }
		else if (map[p.y - 1][p.x] == 0 && !(a <= 3 && e.y < p.y)) { return UP; }
		else { return STAY; }
		break;
	case 6:
		if (map[p.y - 1][p.x] == 1 && !(a <= 3 && e.y < p.y)) { return UP; }
		else if (map[p.y][p.x + 1] == 1 && !(a <= 3 && e.x > p.x)) { return RIGHT; }
		else if (map[p.y + 1][p.x] == 1 && !(a <= 3 && e.y > p.y)) { return DOWN; }
		else if (map[p.y][p.x - 1] == 1 && !(a <= 3 && e.x < p.x)) { return LEFT; }
		else if (map[p.y - 1][p.x] == 0 && !(a <= 3 && e.y < p.y)) { return UP; }
		else if (map[p.y][p.x + 1] == 0 && !(a <= 3 && e.x > p.x)) { return RIGHT; }
		else if (map[p.y + 1][p.x] == 0 && !(a <= 3 && e.y > p.y)) { return DOWN; }
		else if (map[p.y][p.x - 1] == 0 && !(a <= 3 && e.x < p.x)) { return LEFT; }
		else { return STAY; }
		break;
	case 7:
		if (map[p.y][p.x + 1] == 1 && !(a <= 3 && e.x > p.x)) { return RIGHT; }
		else if (map[p.y + 1][p.x] == 1 && !(a <= 3 && e.y > p.y)) { return DOWN; }
		else if (map[p.y][p.x - 1] == 1 && !(a <= 3 && e.x < p.x)) { return LEFT; }
		else if (map[p.y - 1][p.x] == 1 && !(a <= 3 && e.y < p.y)) { return UP; }
		else if (map[p.y][p.x + 1] == 0 && !(a <= 3 && e.x > p.x)) { return RIGHT; }
		else if (map[p.y][p.x - 1] == 0 && !(a <= 3 && e.x < p.x)) { return LEFT; }
		else if (map[p.y - 1][p.x] == 0 && !(a <= 3 && e.y < p.y)) { return UP; }
		else if (map[p.y + 1][p.x] == 0 && !(a <= 3 && e.y > p.y)) { return DOWN; }
		else { return STAY; }
		break;
	case 8:
		if (map[p.y + 1][p.x] == 1 && !(a <= 3 && e.y > p.y)) { return DOWN; }
		else if (map[p.y - 1][p.x] == 1 && !(a <= 3 && e.y < p.y)) { return UP; }
		else if (map[p.y][p.x + 1] == 1 && !(a <= 3 && e.x > p.x)) { return RIGHT; }
		else if (map[p.y][p.x - 1] == 1 && !(a <= 3 && e.x < p.x)) { return LEFT; }
		else if (map[p.y + 1][p.x] == 0 && !(a <= 3 && e.y > p.y)) { return DOWN; }
		else if (map[p.y - 1][p.x] == 0 && !(a <= 3 && e.y < p.y)) { return UP; }
		else if (map[p.y][p.x + 1] == 0 && !(a <= 3 && e.x > p.x)) { return RIGHT; }
		else if (map[p.y][p.x - 1] == 0 && !(a <= 3 && e.x < p.x)) { return LEFT; }
		else { return STAY; }
		break;
	}
}


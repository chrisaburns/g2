
// GAME.H

#ifndef GAME_H
#define GAME_H

#include <vector>

#include "area.h"
#include "character.h"

typedef struct Game
{
	bool b_gameIsRunning = true;
	int i_keysPressed = 0;
	int i_numAreas;
	int i_numCharacters;
	int i_numItems;

	std::vector<Area_t> areas;
	std::vector<Character_t> characters;

} Game_t;

#endif

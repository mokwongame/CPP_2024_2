#include <conio.h>
#include "CarRaceGame.h"

int main(void)
{
	CarRaceGame game;
	game.start();
	while (!_kbhit());

	return 0;
}
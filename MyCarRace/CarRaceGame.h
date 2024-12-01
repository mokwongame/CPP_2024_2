#pragma once

#include "Road.h"
#include "Car.h"

class CarRaceGame
{
public:
	CarRaceGame(void);
	~CarRaceGame()
	{
	}

	void start(void);

protected:
	Road m_road;
	Car m_car; // 게임 주인공
	Car m_enemy; // 적
	int m_fps;	// frame per second
	int m_score;

	void drawScore(void);
	void makeEnemy(void);
};


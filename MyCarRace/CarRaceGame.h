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
	Car m_car; // ���� ���ΰ�
	Car m_enemy; // ��
	int m_fps;	// frame per second
	int m_score;

	void drawScore(void);
	void makeEnemy(void);
};


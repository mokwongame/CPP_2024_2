#pragma once

#include "RectWall.h"
#include "Fruit.h"
#include "Snake.h"

class SnakeGame
{
public:
	SnakeGame(void);
	~SnakeGame()
	{}

	void start(void);

protected:
	int m_nScore = 0; // m_: ¸â¹ö(member)¶ó´Â ¶æ
	int m_nWallWid = 100;
	int m_nWallHt = 25;
	int m_nSleep = 200;
	RectWall m_rectWall;
	Fruit m_fruit;
	Snake m_snake;

	void drawLogo(void);
	void drawScore(void);
};

//inline void SnakeGame::start(void)
//{
//}

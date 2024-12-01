#include <conio.h>
#include <Windows.h>
#include "CarRaceGame.h"
#include "LibGameTool.hpp"
#include <string>

CarRaceGame::CarRaceGame(void)
{
	m_fps = 20;
	m_score = 0;

	mglib::hidecursor();
	mglib::randseed();

	m_road.draw();

	m_car.setRoadCol(m_road.getRoadCol());
	m_car.draw();

	m_enemy.setCarCol(mglib::GREEN);
	m_enemy.setRoadCol(m_road.getRoadCol());
	makeEnemy();
}

void CarRaceGame::start(void)
{
	int delay = 1000 / m_fps;
	while (1)
	{
		m_road.moveDown();
		m_road.update();

		if (m_enemy.bottom() >= m_road.bottom())
		{
			m_enemy.erase();
			makeEnemy();
		}
		else m_enemy.updateDown();

		if (m_car.isHit(m_enemy.getRect()))
		{
			return;
		}

		if (_kbhit())
		{
			int key = mglib::getkey();
			if (key == mglib::IK_LEFT)
			{
				m_car.updateLeft();
			}
			else if (key == mglib::IK_RIGHT)
			{
				m_car.updateRight();
			}
			else if (key == mglib::IK_UP)
			{
				m_fps += 10;
				delay = 1000 / m_fps;
				if (delay <= 10) delay = 10;
			}
			else if (key == mglib::IK_DOWN)
			{
				m_fps -= 10;
				if (m_fps <= 0) m_fps = 1;
				delay = 1000 / m_fps;
			}
		}
		else
		{
			m_car.draw();
		}

		m_score++;
		drawScore();
		::Sleep(delay);
	}
}

void CarRaceGame::drawScore(void)
{
	Point2 pt(52, 0);
	std::string str = "score = " + std::to_string(m_score);
	pt.printStr(str, mglib::YELLOW, mglib::BLACK);
}

void CarRaceGame::makeEnemy(void)
{
	int x = mglib::randrange(5, 45);
	m_enemy.make(Point2(x, 3), 4, 4);
	m_enemy.draw();
}

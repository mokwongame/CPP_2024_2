#include <conio.h>
#include <Windows.h> // Sleep�� ����
#include "SnakeGame.h"

SnakeGame::SnakeGame(void)
{
	// ���� �ʱ�ȭ
	mglib::randseed();

	m_rectWall.setColor(mglib::YELLOW, mglib::BLUE);
	m_rectWall.make(Point2(0, 0), Point2(m_nWallWid, m_nWallHt));

	m_fruit.setShape('O');
	m_fruit.setColor(mglib::SKYBLUE, mglib::RED);
	m_fruit.draw(Point2(1, 1), Point2(m_nWallWid - 1, m_nWallHt - 1));

	m_snake.setShape('.');
	m_snake.setColor(mglib::RED, mglib::GREEN);
	m_snake.setDir(SnakeDir::DEF_NULL);
	m_snake.draw(Point2(m_nWallWid / 2, m_nWallHt / 2));

	mglib::hidecursor(); // Ŀ�� �����
}

// �Ʒ� �Լ� ���Ǹ� ��� ���Ϸ� �ű� ���� �տ� inline �߰�
void SnakeGame::start(void)
{
	while (1)
	{
		if (_kbhit()) // Ű����(kb: keyboard)�� ��������(if hit)
		{
			int key = mglib::getkey();
			switch (key)
			{
			case mglib::IK_LEFT:
				m_snake.setDir(SnakeDir::LEFT);
				m_snake.setShape('<');
				break;
			case mglib::IK_RIGHT:
				m_snake.setDir(SnakeDir::RIGHT);
				m_snake.setShape('>');
				break;
			case mglib::IK_UP:
				m_snake.setDir(SnakeDir::UP);
				m_snake.setShape('^');
				break;
			case mglib::IK_DOWN:
				m_snake.setDir(SnakeDir::DOWN);
				m_snake.setShape('v');
				break;
			}
		}
		m_snake.move();
		// ���ϰ� ���� �浹�ߴ��� Ȯ��
		if (m_fruit.isHit(m_snake.getPt()))
		{
			m_nScore++;
		}
		else if (m_rectWall.isHit(m_snake.getPt()))
		{
			std::cout << "Game Over!";
			break;
		}
		// :: �ǹ� -> �տ� ���ӽ����̽����� ���� -> ���� ���ӽ����̽�(global namespace) -> ����� ���� ���� Ȥ�� ���
		::Sleep(100); // ���� ������ ��� ����(���ڱ�, sleep); ������ msec
	}
}

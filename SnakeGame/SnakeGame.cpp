#include <conio.h>
#include <Windows.h> // Sleep이 정의
#include "SnakeGame.h"

SnakeGame::SnakeGame(void)
{
	// 난수 초기화
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

	mglib::hidecursor(); // 커서 숨기기
}

// 아래 함수 정의를 헤더 파일로 옮길 때는 앞에 inline 추가
void SnakeGame::start(void)
{
	while (1)
	{
		if (_kbhit()) // 키보드(kb: keyboard)가 눌러지면(if hit)
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
		// 과일과 벽에 충돌했는지 확인
		if (m_fruit.isHit(m_snake.getPt()))
		{
			m_nScore++;
		}
		else if (m_rectWall.isHit(m_snake.getPt()))
		{
			std::cout << "Game Over!";
			break;
		}
		// :: 의미 -> 앞에 네임스페이스명이 없음 -> 전역 네임스페이스(global namespace) -> 사실은 전역 변수 혹은 멤버
		::Sleep(100); // 현재 실행을 잠시 정지(잠자기, sleep); 단위는 msec
	}
}

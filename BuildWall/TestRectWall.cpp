#include <conio.h>
#include <Windows.h> // Sleep이 정의
#include "RectWall.h"
#include "Fruit.h"
#include "Snake.h"

// 난수 발생기는 LibGameTool.hpp에 정의: GitHub > MgHead에서 다운로드
// - mglib::randseed(): 난수를 무작위로 초기화
// - mglib::randrange(min, max): min~max-1까지 정수를 난수로 발생 

int main(void)
{
	int nScore = 0;

	// 난수 초기화
	mglib::randseed();

	RectWall rectWall(mglib::YELLOW, mglib::BLUE);
	rectWall.make(Point2(0, 0), Point2(100, 25));

	Fruit fruit(mglib::SKYBLUE, mglib::RED);
	fruit.draw(Point2(1, 1), Point2(99, 24));

	Snake snake(mglib::RED, mglib::GREEN);
	snake.draw(Point2(50, 12));

	while (1)
	{
		if (_kbhit()) // 키보드(kb: keyboard)가 눌러지면(if hit)
		{
			int key = mglib::getkey();
			switch (key)
			{
			case mglib::IK_LEFT:
				snake.setDir(SnakeDir::LEFT);
				snake.setShape('<');
				break;
			case mglib::IK_RIGHT:
				snake.setDir(SnakeDir::RIGHT);
				snake.setShape('>');
				break;
			case mglib::IK_UP:
				snake.setDir(SnakeDir::UP);
				snake.setShape('^');
				break;
			case mglib::IK_DOWN:
				snake.setDir(SnakeDir::DOWN);
				snake.setShape('v');
				break;
			}
		}
		snake.move();
		// 과일과 벽에 충돌했는지 확인
		if (fruit.isHit(snake.getPt()))
		{
			nScore++;
			//Point2 pt(0, 27);
			//pt.printStr("과일 획득");
			//std::cout << "과일 획득";
		}
		else if (rectWall.isHit(snake.getPt()))
		{
			std::cout << "Game Over!";
			break;
		}
		// :: 의미 -> 앞에 네임스페이스명이 없음 -> 전역 네임스페이스(global namespace) -> 사실은 전역 변수 혹은 멤버
		::Sleep(100); // 현재 실행을 잠시 정지(잠자기, sleep); 단위는 msec
	}
	return 0;
}
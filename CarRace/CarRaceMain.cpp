// 자동차 경주 게임
// 자동차: 좌우 화살표로 자동차 이동; 상하 화살표로 자동차 가속/감속 선택
// 도로: 차선; 차선을 움직여서 자동차의 속도감 표현(상하 화살표 사용)
// 상대방 자동차: 우리 자동차를 상속받아서 사용

#include <conio.h>
#include <Windows.h>
#include "Road.h"
#include "Car.h"
#include "LibGameTool.hpp"

void drawScore(int score)
{
	Point2 pt(80, 0);
	std::string str;
	str = "score = ";
	str += std::to_string(score); // 정수인 score를 문자열(string)로 바꿈(to)
	pt.printStr(str, mglib::YELLOW, mglib::BLACK);
}

int main(void)
{
	int nScore = 0;
	mglib::randseed(); // 난수 초기화
	mglib::hidecursor(); // 깜박이는 커서 숨기기

	Road road;
	road.draw();

	Car car; // Car 클래스로 인스턴스 car를 생성 -> 생성자가 저절로 호출
	car.makeCar(Point2(35, 25), 6, 4);
	car.setCarCol(mglib::GREEN);
	car.setRoadCol(road.getRoadCol());
	car.setStep(2);
	car.draw();

	Car enemy;
	enemy.makeCar(road.makeRandPt(), 6, 4);
	enemy.setCarCol(mglib::DARK_RED);
	enemy.setRoadCol(road.getRoadCol());
	enemy.setStep(1);
	enemy.draw();

	while (1)
	{
		if (_kbhit())
		{
			int key = mglib::getkey();
			if (key == mglib::IK_LEFT)
			{
				car.erase();
				car.moveLeft();
			}
			else if (key == mglib::IK_RIGHT)
			{
				car.erase();
				car.moveRight();
			}
		}

		road.moveDown();
		road.drawAllLines();

		enemy.erase();
		enemy.moveDown();
		if (enemy.bottom() > road.bottom())
		{
			enemy.makeCar(road.makeRandPt(), 6, 4);
		}
		enemy.draw();

		// 충돌 감지
		if (car.getRect().rectInRect(enemy.getRect()))
		{
			break; // 게임 종료
		}
		car.draw();

		nScore++;
		drawScore(nScore);
		::Sleep(100);
	}

	while (!_kbhit()); // 사용자가 키보드(kb)를 히트(hit)하지 않으면(!) 계속 반복(while)
	return 0;
}
// �ڵ��� ���� ����
// �ڵ���: �¿� ȭ��ǥ�� �ڵ��� �̵�; ���� ȭ��ǥ�� �ڵ��� ����/���� ����
// ����: ����; ������ �������� �ڵ����� �ӵ��� ǥ��(���� ȭ��ǥ ���)
// ���� �ڵ���: �츮 �ڵ����� ��ӹ޾Ƽ� ���

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
	str += std::to_string(score); // ������ score�� ���ڿ�(string)�� �ٲ�(to)
	pt.printStr(str, mglib::YELLOW, mglib::BLACK);
}

int main(void)
{
	int nScore = 0;
	mglib::randseed(); // ���� �ʱ�ȭ
	mglib::hidecursor(); // �����̴� Ŀ�� �����

	Road road;
	road.draw();

	Car car; // Car Ŭ������ �ν��Ͻ� car�� ���� -> �����ڰ� ������ ȣ��
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

		// �浹 ����
		if (car.getRect().rectInRect(enemy.getRect()))
		{
			break; // ���� ����
		}
		car.draw();

		nScore++;
		drawScore(nScore);
		::Sleep(100);
	}

	while (!_kbhit()); // ����ڰ� Ű����(kb)�� ��Ʈ(hit)���� ������(!) ��� �ݺ�(while)
	return 0;
}
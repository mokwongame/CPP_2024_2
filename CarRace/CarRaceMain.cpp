// �ڵ��� ���� ����
// �ڵ���: �¿� ȭ��ǥ�� �ڵ��� �̵�; ���� ȭ��ǥ�� �ڵ��� ����/���� ����
// ����: ����; ������ �������� �ڵ����� �ӵ��� ǥ��(���� ȭ��ǥ ���)
// ���� �ڵ���: �츮 �ڵ����� ��ӹ޾Ƽ� ���

#include <conio.h>
#include <Windows.h>
#include "Road.h"
#include "Car.h"

int main(void)
{
	mglib::hidecursor(); // �����̴� Ŀ�� �����

	Road road;
	road.draw();

	Car car; // Car Ŭ������ �ν��Ͻ� car�� ���� -> �����ڰ� ������ ȣ��
	car.makeCar(Point2(35, 24), 6, 4);
	car.setCarCol(mglib::GREEN);
	car.setRoadCol(road.getRoadCol());
	car.setStep(2);
	car.draw();

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

		car.draw();

		::Sleep(100);
	}

	while (!_kbhit()); // ����ڰ� Ű����(kb)�� ��Ʈ(hit)���� ������(!) ��� �ݺ�(while)
	return 0;
}
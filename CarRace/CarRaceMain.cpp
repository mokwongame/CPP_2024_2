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
	Road road;
	road.draw();

	Car car; // Car Ŭ������ �ν��Ͻ� car�� ���� -> �����ڰ� ������ ȣ��
	car.makeCar(Point2(35, 24), 6, 4);
	car.setCarCol(mglib::GREEN);
	car.setRoadCol(road.getRoadCol());
	car.draw();

	while (1)
	{
		road.moveDown();
		road.drawAllLines();
		::Sleep(100);
	}

	while (!_kbhit()); // ����ڰ� Ű����(kb)�� ��Ʈ(hit)���� ������(!) ��� �ݺ�(while)
	return 0;
}
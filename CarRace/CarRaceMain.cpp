// �ڵ��� ���� ����
// �ڵ���: �¿� ȭ��ǥ�� �ڵ��� �̵�; ���� ȭ��ǥ�� �ڵ��� ����/���� ����
// ����: ����; ������ �������� �ڵ����� �ӵ��� ǥ��(���� ȭ��ǥ ���)
// ���� �ڵ���: �츮 �ڵ����� ��ӹ޾Ƽ� ���

#include <conio.h>
#include <Windows.h>
#include "Road.h"

int main(void)
{
	Road road;
	road.draw();

	while (1)
	{
		road.moveDown();
		road.drawAllLines();
		::Sleep(100);
	}

	while (!_kbhit()); // ����ڰ� Ű����(kb)�� ��Ʈ(hit)���� ������(!) ��� �ݺ�(while)
	return 0;
}
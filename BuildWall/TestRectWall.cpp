#include <conio.h>
#include "RectWall.h"
#include "Fruit.h"

// ���� �߻���� LibGameTool.hpp�� ����: GitHub > MgHead���� �ٿ�ε�
// - mglib::randseed(): ������ �������� �ʱ�ȭ
// - mglib::randrange(min, max): min~max-1���� ������ ������ �߻� 

int main(void)
{
	// ���� �ʱ�ȭ
	mglib::randseed();

	RectWall rectWall(mglib::YELLOW, mglib::BLUE);
	rectWall.make(Point2(0, 0), Point2(100, 25));

	Fruit fruit(mglib::SKYBLUE, mglib::RED);
	fruit.draw(Point2(1, 1), Point2(99, 24));

	while (!_kbhit());
	return 0;
}
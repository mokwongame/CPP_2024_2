#include <conio.h>
#include "RectWall.h"
#include "Fruit.h"
#include "Snake.h"

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

	Snake snake(mglib::RED, mglib::GREEN);
	snake.draw(Point2(50, 12));

	while (1)
	{
		if (_kbhit()) // Ű����(kb: keyboard)�� ��������(if hit)
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
			//snake.move();
		}
	}
	return 0;
}
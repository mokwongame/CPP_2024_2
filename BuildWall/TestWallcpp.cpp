#include <conio.h>
#include "Wall.h"

int main(void)
{
	Wall wall;
	// ������(�Է�_����) �ǹ�: �����ڸ� �Է� ������ ȣ�� 
	wall.makeHWall(Point2(0, 0), 80);
	wall.makeHWall(Point2(0, 20), 80);
	wall.makeVWall(Point2(0, 0), 20);
	wall.makeVWall(Point2(79, 0), 20);

	while (!_kbhit());
}
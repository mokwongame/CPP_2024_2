#include <conio.h>
#include "Wall.h"

int main(void)
{
	Wall wall;
	// ������(�Է�_����) �ǹ�: �����ڸ� �Է� ������ ȣ�� 
	wall.makeHWall(Point2(0, 0), 40);
	wall.makeHWall(Point2(0, 20), 40);

	while (!_kbhit());
}
#include <conio.h>
#include "Wall.h"

int main(void)
{
	using namespace mglib;

	Wall wall;
	// 생성자(입력_변수) 의미: 생성자를 입력 변수로 호출
	wall.setShape('=');
	wall.setColor(BLUE, GREEN);
	wall.makeHWall(Point2(0, 0), 80);
	wall.makeHWall(Point2(0, 20), 80);
	wall.setShape('|');
	wall.setColor(RED, BLUE);
	wall.makeVWall(Point2(0, 0), 20);
	wall.makeVWall(Point2(79, 0), 20);

	while (!_kbhit());
}
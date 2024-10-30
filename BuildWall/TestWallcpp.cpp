#include <conio.h>
#include "Wall.h"

int main(void)
{
	Wall wall;
	// 생성자(입력_변수) 의미: 생성자를 입력 변수로 호출 
	wall.makeHWall(Point2(0, 0), 40);
	wall.makeHWall(Point2(0, 20), 40);

	while (!_kbhit());
}
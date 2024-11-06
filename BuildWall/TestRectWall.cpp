#include <conio.h>
#include "RectWall.h"
#include "Fruit.h"

// 난수 발생기는 LibGameTool.hpp에 정의: GitHub > MgHead에서 다운로드
// - mglib::randseed(): 난수를 무작위로 초기화
// - mglib::randrange(min, max): min~max-1까지 정수를 난수로 발생 

int main(void)
{
	// 난수 초기화
	mglib::randseed();

	RectWall rectWall(mglib::YELLOW, mglib::BLUE);
	rectWall.make(Point2(0, 0), Point2(100, 25));

	Fruit fruit(mglib::SKYBLUE, mglib::RED);
	fruit.draw(Point2(1, 1), Point2(99, 24));

	while (!_kbhit());
	return 0;
}
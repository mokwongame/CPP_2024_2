#include <conio.h>
#include "RectWall.h"

int main(void)
{
	RectWall rectWall(mglib::YELLOW, mglib::BLUE);
	rectWall.make(Point2(0, 0), Point2(100, 25));

	while (!_kbhit());
	return 0;
}
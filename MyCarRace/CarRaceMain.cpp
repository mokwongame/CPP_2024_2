#include <conio.h>
#include <Windows.h>
#include "Road.h"
#include "Car.h"

int main(void)
{

	Road road;
	road.draw();
	Car car;
	car.setRoadCol(road.getRoadCol());
	car.draw();
	for (int i = 0; i < 100; i++)
	{
		road.moveDown();
		road.update();
		//car.updateLeft();
		//car.updateRight();
		//car.updateDown();
		car.updateUp();
		::Sleep(100);
	}

	while (!_kbhit());

	return 0;
}
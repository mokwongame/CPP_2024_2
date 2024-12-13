#include "Car.h"

void Car::makeCar(const Point2 ptCtr, int nWid, int nHt)
{
	Point2 pt1 = Point2(ptCtr.getX() - nWid / 2, ptCtr.getY() - nHt / 2);
	Point2 pt2 = Point2(ptCtr.getX() + nWid / 2, ptCtr.getY() + nHt / 2);
	m_rect = Rect(pt1, pt2);
}

void Car::draw(void)
{
}

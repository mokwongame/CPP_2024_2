#include "Car.h"

void Car::makeCar(const Point2 ptCtr, int nWid, int nHt)
{
	Point2 pt1 = Point2(ptCtr.getX() - nWid / 2, ptCtr.getY() - nHt / 2);
	Point2 pt2 = Point2(ptCtr.getX() + nWid / 2, ptCtr.getY() + nHt / 2);
	m_rect = Rect(pt1, pt2);
}

void Car::draw(void)
{
	// 사각형 색칠하기
	for (int x = m_rect.left(); x <= m_rect.right(); x++)
	{
		for (int y = m_rect.top(); y <= m_rect.bottom(); y++)
		{
			Point2 pt(x, y);
			pt.printChar('-', mglib::BLACK, m_nCarCol);
		}
	}
	// 바퀴 그리기
	Point2 pt;
	pt = Point2(m_rect.left() - 1, m_rect.top());
	pt.printChar('|', mglib::YELLOW, mglib::BLACK);
	pt = Point2(m_rect.left() - 1, m_rect.bottom());
	pt.printChar('|', mglib::YELLOW, mglib::BLACK);
	pt = Point2(m_rect.right() + 1, m_rect.top());
	pt.printChar('|', mglib::YELLOW, mglib::BLACK);
	pt = Point2(m_rect.right() + 1, m_rect.bottom());
	pt.printChar('|', mglib::YELLOW, mglib::BLACK);
	// 바퀴 사이는 도로 색깔로 그리기
	for (int y = m_rect.top() + 1; y <= m_rect.bottom() - 1; y++)
	{
		pt = Point2(m_rect.left() - 1, y);
		pt.printChar(' ', m_nRoadCol, m_nRoadCol);
		pt = Point2(m_rect.right() + 1, y);
		pt.printChar(' ', m_nRoadCol, m_nRoadCol);
	}
}

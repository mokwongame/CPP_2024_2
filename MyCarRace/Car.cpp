#include "Car.h"

Car::Car(void)
{
	make(Point2(25, 24), 4, 4);
	m_nCarCol = mglib::RED;
	m_nRoadCol = mglib::DARK_BLUE;
}

void Car::make(const Point2& ptCtr, int wid, int ht)
{
	Point2 pt1 = ptCtr - Point2(wid / 2, ht / 2);
	Point2 pt2 = ptCtr + Point2(wid / 2, ht / 2);
	m_rect = Rect(pt1, pt2);
}

void Car::draw(void)
{
	for (int x = m_rect.left(); x <= m_rect.right(); x++)
	{
		for (int y = m_rect.top(); y <= m_rect.bottom(); y++)
		{
			Point2 pt(x, y);
			pt.printChar('-', mglib::YELLOW, m_nCarCol);
		}
	}
	Point2 pt;
	pt = Point2(m_rect.left() - 1, m_rect.top());
	pt.printChar('|', mglib::GRAY, mglib::BLACK);
	pt = Point2(m_rect.right() + 1, m_rect.top());
	pt.printChar('|', mglib::GRAY, mglib::BLACK);
	pt = Point2(m_rect.left() - 1, m_rect.bottom());
	pt.printChar('|', mglib::GRAY, mglib::BLACK);
	pt = Point2(m_rect.right() + 1, m_rect.bottom());
	pt.printChar('|', mglib::GRAY, mglib::BLACK);
	for (int y = m_rect.top() + 1; y <= m_rect.bottom() - 1; y++)
	{
		Point2 pt1(m_rect.left() - 1, y);
		pt1.printChar(' ', m_nRoadCol, m_nRoadCol);
		Point2 pt2(m_rect.right() + 1, y);
		pt2.printChar(' ', m_nRoadCol, m_nRoadCol);
	}
}

void Car::updateLeft(void)
{
	eraseV(m_rect.right() + 1);
	moveLeft();
	draw();
}

void Car::updateRight(void)
{
	eraseV(m_rect.left() - 1);
	moveRight();
	draw();
}

void Car::updateUp(void)
{
	eraseH(m_rect.bottom());
	moveUp();
	draw();
}

void Car::updateDown(void)
{
	eraseH(m_rect.top());
	moveDown();
	draw();
}

void Car::erase(void)
{
	for (int x = m_rect.left() - 1; x <= m_rect.right() + 1; x++)
	{
		for (int y = m_rect.top(); y <= m_rect.bottom(); y++)
		{
			Point2 pt(x, y);
			pt.printChar(' ', m_nRoadCol, m_nRoadCol);
		}
	}
}

void Car::eraseV(int x)
{
	for (int y = m_rect.top(); y <= m_rect.bottom(); y++)
	{
		Point2 pt(x, y);
		pt.printChar(' ', m_nRoadCol, m_nRoadCol);
	}
}

void Car::eraseH(int y)
{
	for (int x = m_rect.left() - 1; x <= m_rect.right() + 1; x++)
	{
		Point2 pt(x, y);
		pt.printChar(' ', m_nRoadCol, m_nRoadCol);
	}
}

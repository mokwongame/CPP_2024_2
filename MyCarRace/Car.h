#pragma once

#include "Rect.h"

class Car
{
public:
	Car(void);
	~Car()
	{
	}

	// getter
	Rect getRect(void) const
	{
		return m_rect;
	}

	// setter
	void setCarCol(int carCol)
	{
		m_nCarCol = carCol;
	}
	void setRoadCol(int roadCol)
	{
		m_nRoadCol = roadCol;
	}

	int bottom(void) const
	{
		return m_rect.bottom();
	}

	void make(const Point2& ptCtr, int wid, int ht);
	void draw(void);
	void move(int stepX, int stepY)
	{
		Point2 pt1 = m_rect.topLeft();
		Point2 pt2 = m_rect.bottomRight();
		pt1.move(stepX, stepY);
		pt2.move(stepX, stepY);
		m_rect = Rect(pt1, pt2);
	}
	void moveLeft(void)
	{
		move(-1, 0);
	}
	void moveRight(void)
	{
		move(1, 0);
	}
	void moveUp(void)
	{
		move(0, -1);
	}
	void moveDown(void)
	{
		move(0, 1);
	}

	void updateLeft(void);
	void updateRight(void);
	void updateUp(void);
	void updateDown(void);

	void erase(void);
	bool isHit(const Rect& rect)
	{
		return m_rect.rectInRect(rect);
	}

protected:
	Rect m_rect;
	int m_nCarCol;
	int m_nRoadCol;

	void eraseV(int x);
	void eraseH(int y);
};


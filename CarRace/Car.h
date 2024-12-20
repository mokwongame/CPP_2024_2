#pragma once

#include "Rect.h"

class Car
{
public:
	Car(void)
	{}
	~Car()
	{}

	// getter
	Rect getRect(void) const
	{
		return m_rect;
	}

	// setter
	void setRect(const Rect& rect)
	{
		m_rect = rect;
	}
	void setCarCol(int col)
	{
		m_nCarCol = col;
	}
	void setRoadCol(int col)
	{
		m_nRoadCol = col;
	}
	void setStep(int step)
	{
		m_step = step;
	}

	void makeCar(const Point2 ptCtr, int nWid, int nHt);
	void draw(void);

	void moveLeft(void)
	{
		move(-m_step, 0);
	}
	void moveRight(void)
	{
		move(m_step, 0);
	}
	void moveDown(void)
	{
		move(0, m_step);
	}

	void erase(void);

	int bottom(void) const
	{
		return m_rect.bottom();
	}

protected:
	Rect m_rect;
	int m_nCarCol;
	int m_nRoadCol;
	int m_step = 1;

	void move(int dx, int dy);
};


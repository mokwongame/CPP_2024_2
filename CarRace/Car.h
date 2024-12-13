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

	void makeCar(const Point2 ptCtr, int nWid, int nHt);
	void draw(void);

protected:
	Rect m_rect;
	int m_nCarCol;
	int m_nRoadCol;
};


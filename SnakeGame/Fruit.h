#pragma once

#include "LibGameTool.hpp"
#include "Point2.h"

class Fruit
{
public:
	Fruit(void)
	{}
	Fruit(int textCol, int backCol)
	{
		setShape('O');
		setColor(textCol, backCol);
	}
	~Fruit()
	{}

	// getter
	char getShape(void) const
	{
		return m_shape;
	}
	int getTextColor(void) const
	{
		return m_textCol;
	}
	int getBackColor(void) const
	{
		return m_backCol;
	}

	// setter
	void setShape(char shape)
	{
		m_shape = shape;
	}
	void setColor(int textCol, int backCol)
	{
		m_textCol = textCol;
		m_backCol = backCol;
	}

	void draw(const Point2& pt1, const Point2& pt2)
	{
		int xpos = mglib::randrange(pt1.getX(), pt2.getX() + 1);
		int ypos = mglib::randrange(pt1.getY(), pt2.getY() + 1);
		m_pt = Point2(xpos, ypos);
		m_pt.printChar(m_shape, m_textCol, m_backCol);
	}

	bool isHit(const Point2& pt) const
	{
		return m_pt == pt;
	}

protected:
	char m_shape;
	int m_textCol;
	int m_backCol;
	Point2 m_pt;
};
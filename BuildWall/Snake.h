#pragma once

#include "Point2.h"

class Snake
{
public:
	Snake(int textCol, int backCol)
	{
		setShape('.');
		setColor(textCol, backCol);
	}
	~Snake()
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

	void draw(const Point2& pt)
	{
		m_pt = pt;
		m_pt.printChar(m_shape, m_textCol, m_backCol);
	}

protected:
	char m_shape;
	int m_textCol;
	int m_backCol;
	Point2 m_pt;
};
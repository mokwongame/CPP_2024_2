#pragma once

#include "Rect.h"

class Road
{
public:
	Road(void);
	~Road(void)
	{
	}

	// getter
	int getSizeX(void) const
	{
		return m_rect.getSizeX();
	}
	int getSizeY(void) const
	{
		return m_rect.getSizeY();
	}
	int getRoadCol(void) const
	{
		return m_nRoadCol;
	}

	// setter
	void setRect(const Rect& rect)
	{
		m_rect = rect;
	}

	int bottom(void) const
	{
		return m_rect.bottom();
	}

	void draw(void);
	void update(void)
	{
		drawAllLines();
	}
	void moveDown(void)
	{
		m_nLineOffset = (m_nLineOffset + 1) % getSizeY();
	}

protected:
	Rect m_rect;
	int m_nRoadCol;
	int m_nLineCol;
	int m_nLineLen;
	int m_nLaneSize;
	int m_nLineOffset;

	// getter

	void drawRoadBack(void);
	void drawLine(int x);
	void drawBottomLine(int x);
	void drawTopLine(int x);
	void drawAllLines(void);
};


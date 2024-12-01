#include "Road.h"

Road::Road(void)
{
	m_rect = Rect(Point2(0, 0), Point2(49, 28));
	m_nRoadCol = mglib::DARK_BLUE;
	m_nLineCol = mglib::YELLOW;
	m_nLineLen = 5;
	m_nLaneSize = 10;
	m_nLineOffset = 0;
}

void Road::draw(void)
{
	drawRoadBack();
	drawAllLines();
}

void Road::drawRoadBack(void)
{
	for (int i = 0; i < getSizeX(); i++)
	{
		Point2 pt(m_rect.left() + i, m_rect.top());
		for (int j = 0; j < getSizeY(); j++)
		{
			pt.printChar(' ', m_nRoadCol, m_nRoadCol);
			pt.moveDown();
		}
	}
}

void Road::drawLine(int x)
{
	if (x > m_rect.right()) return;
	drawBottomLine(x);
	drawTopLine(x);
}

void Road::drawBottomLine(int x)
{
	Point2 pt(x, m_rect.top() + m_nLineOffset);
	while (1)
	{
		// line
		for (int j = 0; j < m_nLineLen; j++)
		{
			if (pt.getY() > m_rect.bottom()) return;
			pt.printChar(' ', m_nLineCol, m_nLineCol);
			pt.moveDown();
		}
		// blank
		for (int j = 0; j < m_nLineLen; j++)
		{
			if (pt.getY() > m_rect.bottom()) return;
			pt.printChar(' ', m_nRoadCol, m_nRoadCol);
			pt.moveDown();
		}
	}
}

void Road::drawTopLine(int x)
{
	Point2 pt(x, m_rect.top() + m_nLineOffset - 1);
	while (1)
	{
		// blank
		for (int j = 0; j < m_nLineLen; j++)
		{
			if (pt.getY() < m_rect.top()) return;
			pt.printChar(' ', m_nRoadCol, m_nRoadCol);
			pt.moveUp();
		}
		// line
		for (int j = 0; j < m_nLineLen; j++)
		{
			if (pt.getY() < m_rect.top()) return;
			pt.printChar(' ', m_nLineCol, m_nLineCol);
			pt.moveUp();
		}
	}
}

void Road::drawAllLines(void)
{
	int nLineSize = getSizeX() / m_nLaneSize;
	for (int i = 0; i < nLineSize; i++)
	{
		int x = m_rect.left() + (i + 1) * m_nLaneSize;
		drawLine(x);
	}
}

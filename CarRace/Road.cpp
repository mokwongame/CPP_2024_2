#include "Road.h"

Road::Road(void)
{
	m_pt1 = Point2(0, 0);
	m_pt2 = Point2(78, 27);
	m_roadCol = mglib::DARK_BLUE;
	m_lineCol = mglib::YELLOW;

	m_nLineLen = 4;
	m_nLaneSize = 20;
	m_nLineOffset = 0;
}

int Road::getSizeX(void) const
{
	return m_pt2.getX() - m_pt1.getX() + 1;
}

int Road::getSizeY(void) const
{
	return m_pt2.getY() - m_pt1.getY() + 1;
}

void Road::draw(void)
{
	drawBack();
	drawAllLines();
}

void Road::drawBack(void)
{
	// 도로 색칠: x축으로 좌표 이동
	for (int i = 0; i < getSizeX(); i++)
	{
		int x = m_pt1.getX() + i;
		Point2 pt(x, m_pt1.getY());
		// y방향으로 도로 색칠
		for (int j = 0; j < getSizeY(); j++)
		{
			pt.printChar(' ', m_roadCol, m_roadCol);
			pt.moveDown();
		}
	}
}

void Road::drawAllLines(void)
{
	int nLineCount = getSizeX() / m_nLaneSize;
	for (int i = 1; i <= nLineCount; i++)
	{
		int x = i * m_nLaneSize;
		drawBottomLine(x);
		drawTopLine(x);
	}
}

void Road::moveDown(void)
{
	m_nLineOffset++;
	if (m_nLineOffset >= getSizeY())
		m_nLineOffset = 0;
}

void Road::drawBottomLine(int x)
{
	int y = m_pt1.getY() + m_nLineOffset;
	Point2 pt(x, y);
	while (1)
	{
		for (int j = 0; j < m_nLineLen; j++)
		{
			if (pt.getY() > m_pt2.getY()) return;
			pt.printChar(' ', m_lineCol, m_lineCol);
			pt.moveDown();
		}
		for (int j = 0; j < m_nLineLen; j++)
		{
			if (pt.getY() > m_pt2.getY()) return;
			pt.printChar(' ', m_roadCol, m_roadCol);
			pt.moveDown();
		}
	}
}

void Road::drawTopLine(int x)
{
	int y = m_pt1.getY() + m_nLineOffset - 1;
	Point2 pt(x, y);
	while (1)
	{
		for (int j = 0; j < m_nLineLen; j++)
		{
			if (pt.getY() < m_pt1.getY()) return;
			pt.printChar(' ', m_roadCol, m_roadCol);
			pt.moveUp();
		}
		for (int j = 0; j < m_nLineLen; j++)
		{
			if (pt.getY() < m_pt1.getY()) return;
			pt.printChar(' ', m_lineCol, m_lineCol);
			pt.moveUp();
		}
	}
}

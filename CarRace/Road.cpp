#include "Road.h"

Road::Road(void)
{
	m_pt1 = Point2(0, 0);
	m_pt2 = Point2(80, 27);
	m_roadCol = mglib::DARK_BLUE;
	m_lineCol = mglib::YELLOW;

	m_nLineLen = 4;
	m_nLaneSize = 20;
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
	// ���� ��ĥ: x������ ��ǥ �̵�
	for (int i = 0; i < getSizeX(); i++)
	{
		int x = m_pt1.getX() + i;
		Point2 pt(x, m_pt1.getY());
		// y�������� ���� ��ĥ
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
}

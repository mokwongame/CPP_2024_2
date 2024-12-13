#pragma once

#include "Point2.h"

class Road
{
public:
	Road(void);
	~Road(void)
	{}

	// getter
	int getSizeX(void) const;
	int getSizeY(void) const;
	int getRoadCol(void) const
	{
		return m_roadCol;
	}

	void draw(void);
	void drawAllLines(void);

	void moveDown(void);

	Point2 makeRandPt(void) const;

	int bottom(void) const
	{
		return m_pt2.getY();
	}

protected:
	// property
	Point2 m_pt1; // ���� ��� ��
	Point2 m_pt2; // ������ �ϴ� ��
	int m_roadCol;	// ���� ����
	int m_lineCol;	// ���� ����

	int m_nLineLen; // ���� ����
	int m_nLaneSize; // ���� ����
	int m_nLineOffset;

	void drawBack(void);
	void drawBottomLine(int x);
	void drawTopLine(int x);
};


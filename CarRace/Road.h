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
	Point2 m_pt1; // 왼쪽 상단 점
	Point2 m_pt2; // 오른쪽 하단 점
	int m_roadCol;	// 도로 색깔
	int m_lineCol;	// 차선 색깔

	int m_nLineLen; // 차선 길이
	int m_nLaneSize; // 차선 간격
	int m_nLineOffset;

	void drawBack(void);
	void drawBottomLine(int x);
	void drawTopLine(int x);
};


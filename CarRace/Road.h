#pragma once

#include "Point2.h"

class Road
{
public:
	Road(void);
	~Road(void)
	{}

protected:
	// property
	Point2 m_pt1; // 왼쪽 상단 점
	Point2 m_pt2; // 오른쪽 하단 점
	int m_roadCol;	// 도로 색깔
};


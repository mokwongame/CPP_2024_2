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
	Point2 m_pt1; // ���� ��� ��
	Point2 m_pt2; // ������ �ϴ� ��
	int m_roadCol;	// ���� ����
};


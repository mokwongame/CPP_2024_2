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

	void draw(void);

protected:
	// property
	Point2 m_pt1; // ���� ��� ��
	Point2 m_pt2; // ������ �ϴ� ��
	int m_roadCol;	// ���� ����
	int m_lineCol;	// ���� ����

	int m_nLineLen; // ���� ����
	int m_nLaneSize; // ���� ����

	void drawBack(void);
	void drawAllLines(void);
};


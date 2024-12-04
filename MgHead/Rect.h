#pragma once

#include "Point2.h"

class Rect
{
public:
	Rect(void)
	{
	}
	Rect(int l, int t, int r, int b)
	{
		m_pt1 = Point2(l, t);
		m_pt2 = Point2(r, b);
	}
	Rect(const Point2& pt1, const Point2& pt2)
	{
		setPts(pt1, pt2);
	}
	// 복사 생성자
	Rect(const Rect& rect)
	{
		setPts(rect.m_pt1, rect.m_pt2);
	}
	~Rect()
	{
	}

	// getter
	int getSizeX(void) const
	{
		return m_pt2.getX() - m_pt1.getX() + 1;
	}
	int getSizeY(void) const
	{
		return m_pt2.getY() - m_pt1.getY() + 1;
	}

	// setter
	void setPts(const Point2& pt1, const Point2& pt2)
	{
		m_pt1 = pt1;
		m_pt2 = pt2;
	}

	int left(void) const
	{
		return m_pt1.getX();
	}

	int right(void) const
	{
		return m_pt2.getX();
	}

	int top(void) const
	{
		return m_pt1.getY();
	}

	int bottom(void) const
	{
		return m_pt2.getY();
	}

	Point2 topLeft(void) const
	{
		return m_pt1;
	}

	Point2 bottomRight(void) const
	{
		return m_pt2;
	}

	Point2 topRight(void) const
	{
		return Point2(right(), top());
	}

	Point2 bottomLeft(void) const
	{
		return Point2(left(), bottom());
	}

	Point2 centerPt(void) const
	{
		return Point2((left() + right()) / 2, (top() + bottom()) / 2);
	}

	Rect& operator=(const Rect& rect)
	{
		setPts(rect.m_pt1, rect.m_pt2);
		return (*this);
	}

	bool ptInRect(const Point2& pt) const;
	bool rectInRect(const Rect& rect) const;

protected:
	Point2 m_pt1; // (left, top)
	Point2 m_pt2; // (right, bottom)
};


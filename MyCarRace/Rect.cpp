#include "Rect.h"

bool Rect::ptInRect(const Point2& pt) const
{
	if (pt.getX() >= left() && pt.getX() <= right() && pt.getY() >= top() && pt.getY() <= bottom()) return true;
	else return false;
}

bool Rect::rectInRect(const Rect& rect) const
{
	if (ptInRect(rect.topLeft()) || ptInRect(rect.topRight()) || ptInRect(rect.bottomLeft()) || ptInRect(rect.bottomRight())) return true;
	else if (rect.ptInRect(topLeft()) || rect.ptInRect(topRight()) || rect.ptInRect(bottomLeft()) || rect.ptInRect(bottomRight())) return true;
	else return false;
}

#pragma once

#include "Point2.h"

// C 언어: enum 사용
// C++ 언어: enum class 사용; 멤버 상수에 접근할 때는 클래스명::상수명 사용
enum class SnakeDir
{
	//DEF_NULL = 0, LEFT = 1, RIGHT = 2, UP = 3, DOWN = 4
	// 아래도 동일한 결과: 정수 할당을 생략하면 1씩 증가
	DEF_NULL = 0, LEFT, RIGHT, UP, DOWN
	// 맨처음 상수에 정수를 할당하지 않으면 0으로 간주
};

class Snake
{
public:
	Snake(int textCol, int backCol)
	{
		setShape('.');
		setColor(textCol, backCol);
		m_nDir = SnakeDir::DEF_NULL; // 방향이 없음(null)
	}
	~Snake()
	{}

	// getter
	char getShape(void) const
	{
		return m_shape;
	}
	int getTextColor(void) const
	{
		return m_textCol;
	}
	int getBackColor(void) const
	{
		return m_backCol;
	}
	SnakeDir getDir(void) const
	{
		return m_nDir;
	}

	// setter
	void setShape(char shape)
	{
		m_shape = shape;
	}
	void setColor(int textCol, int backCol)
	{
		m_textCol = textCol;
		m_backCol = backCol;
	}
	void setDir(SnakeDir nDir)
	{
		m_nDir = nDir;
	}

	void draw(const Point2& pt)
	{
		m_pt = pt;
		m_pt.printChar(m_shape, m_textCol, m_backCol);
	}

	void move(void)
	{
		switch (m_nDir)
		{
		case SnakeDir::LEFT:
			m_pt = m_pt - Point2(1, 0);
			break;
		case SnakeDir::RIGHT:
			m_pt = m_pt + Point2(1, 0);
			break;
		case SnakeDir::UP:
			m_pt = m_pt - Point2(0, 1);
			break;
		case SnakeDir::DOWN:
			m_pt = m_pt + Point2(0, 1);
			break;
		}
		m_pt.printChar(m_shape, m_textCol, m_backCol);
	}

protected:
	char m_shape;
	int m_textCol;
	int m_backCol;
	Point2 m_pt;
	SnakeDir m_nDir; // 뱀의 이동 방향 저장
};
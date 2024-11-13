#pragma once

#include "Point2.h"

// C ���: enum ���
// C++ ���: enum class ���; ��� ����� ������ ���� Ŭ������::����� ���
enum class SnakeDir
{
	//DEF_NULL = 0, LEFT = 1, RIGHT = 2, UP = 3, DOWN = 4
	// �Ʒ��� ������ ���: ���� �Ҵ��� �����ϸ� 1�� ����
	DEF_NULL = 0, LEFT, RIGHT, UP, DOWN
	// ��ó�� ����� ������ �Ҵ����� ������ 0���� ����
};

class Snake
{
public:
	Snake(int textCol, int backCol)
	{
		setShape('.');
		setColor(textCol, backCol);
		m_nDir = SnakeDir::DEF_NULL; // ������ ����(null)
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
	SnakeDir m_nDir; // ���� �̵� ���� ����
};
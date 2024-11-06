#pragma once

#include <iostream>
#include "LibConsole.hpp"

// Ŭ������ ��ü(������ Ǫ�� �⺻ ����)�� ���赵
// Ŭ���� ����: class Ŭ������ {...}
// Ŭ�������� ���� ���ϸ�� ����
// {...} �ȿ� ���(member) ����
// ��� ���(�ܺ� ����): public(������: O), protected(��ȣ��: X), private(������: X)
class Point2
{
	// public �׷�(�ܺο��� ���� ����): public ����� ����ü
public: // : �ǹ̴� �׷��� ����
	// Ŭ���� �ȿ� �ִ� �Լ� ���Ǵ� inline �Լ� ����: inline�� ����
	// Ŭ���� �ۿ� ������ inline�� ��� ��

	// ������(constructor): �� Ŭ������ �ν��Ͻ��� ������ �� �ڵ����� ȣ��Ǵ� �Լ� -> �ʱ�ȭ; Ŭ������� ���� �̸��� �Լ�
	Point2(void) // ��� �ڷ����� ���� �ȵ�
	{
		setPt(0, 0); // ���� �ʱ�ȭ
	}
	Point2(int x, int y)
	{
		setPt(x, y);
	}
	// ���� ������(copy constructor): Ŭ������(const Ŭ������& ������)
	// ������ �ν��Ͻ�(Ŭ�������� ����)�� ���۷���(&: �б�, ���� O)�� ���(const: ���� X) ���·� �޾Ƽ� ���� Ŭ������ �ʱ�ȭ
	Point2(const Point2& pt)
	{
		//setPt(pt.m_x, pt.m_y);
		setPt(pt);
	}

	// �Ҹ���(destructor): �� Ŭ������ �ν��Ͻ��� �Ҹ�� �� �ڵ����� ȣ��Ǵ� �Լ� -> ������; Ŭ������ �տ� ~(not ����)�� ���� �Լ�
	~Point2() // �Է°� ��¿� �ƹ��͵� �ȵ�
	{
		//std::cout << "�Ҹ�Ǿ���" << std::endl;
	}


	// ��� �Լ�(�޼ҵ�, method)
	// getter, setter: ������Ƽ ���� �Լ�
	int getX(void) const // const ���� �ǹ�: ����(variable)�� ���(constant number)�� ���; �޼ҵ� �ڿ� �ִ� const �ǹ�: ������Ƽ�� ����� ���
	{
		return m_x;
	}
	int getY(void) const
	{
		return m_y;
	}
	Point2 getPt(void) const
	{
		return Point2(m_x, m_y);
	}

	void setX(int x)
	{
		m_x = x;
	}
	void setY(int y)
	{
		m_y = y;
	}
	void setPt(int x, int y)
	{
		setX(x);
		setY(y);
	}
	void setPt(const Point2& pt)
	{
		setPt(pt.m_x, pt.m_y);
	}

	// ���� ��ġ�� (stepX, stepY)��ŭ �̵�
	void move(int stepX, int stepY)
	{
		m_x += stepX; // m_x = m_x + stepX
		m_y += stepY;
	}
	void moveLeft(int step = 1)
	{
		move(-step, 0); // x ��ǥ�� �پ���(-) �������� �̵�
	}
	void moveRight(int step = 1)
	{
		move(step, 0); // x ��ǥ�� �þ��(+) ���������� �̵�
	}
	void moveUp(int step = 1)
	{
		move(0, -step); // y ��ǥ�� �پ���(-) ���� �̵�
	}
	void moveDown(int step = 1)
	{
		move(0, step); // y ��ǥ�� �þ��(+) �Ʒ��� �̵�
	}

	void print(void) // protected, private ����� Ŭ���� �ȿ����� �����Ӱ� ����
	{
		// ���ӽ����̽��� ��� ���� = ���ӽ����̽���::���
		std::cout << '(' << m_x << ", " << m_y << ')';
	}
	void printChar(char ch)
	{
		// Ŀ���� (m_x, m_y)�� �̵�
		mglib::gotoxy(m_x, m_y); // mglib�� namespace�̰� LibConsole.hpp�� ����
		std::cout << ch;
	}
	// C++������ ���� �̸��� �Լ��� ����: ��� �Է� ������ �޶�� ��
	//  �Լ� �Է¿� �ִ� =�� �ǹ�: �Է����� ������ ���Ǵ� ����Ʈ ��
	void printChar(char ch, int textCol, int backCol = mglib::BLACK)
	{
		mglib::setbacktextcol(backCol, textCol);
		printChar(ch);
	}

	// protected �׷�(�ܺο��� ���� �Ұ���)
protected:
	// ��� ����(������Ƽ, property) ���� -> ���ǵ� ����
	int m_x = 0; // m_ �ǹ�: ���(member)�� ��
	int m_y = 0;
};
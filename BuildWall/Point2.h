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

	void setX(int x)
	{
		m_x = x;
	}
	void setY(int y)
	{
		m_y = y;
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

// protected �׷�(�ܺο��� ���� �Ұ���)
protected:
	// ��� ����(������Ƽ, property) ���� -> ���ǵ� ����
	int m_x = 0; // m_ �ǹ�: ���(member)�� ��
	int m_y = 0;
};
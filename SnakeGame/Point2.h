#pragma once

#include <iostream>
#include <string> // Ȯ���� h�� ����: C++ ǥ�� ��� �����̶�
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

	// ����(static) ���(����Ǵ� ����� �޸𸮸� �����ؼ� ���: �޸� ȿ�� ���) ������ �ڵ�
	static void printStr(const std::string& str) // �Ʒ� �ڵ�� ��� ����(property)�� �������� ���� -> ���� ����� �����ϸ� ȿ������
	{
		using namespace std;
		//std::cout << "static test code" << std::endl;
		// string Ŭ������ ���� ã��: Microsoft Learn���� string Ŭ������ �˻�
		std::cout << str << std::endl;
		// string ���� ���: length()
		cout << str.length() << endl;
		string str2 = "[" + str + "]"; // ���ڿ��� �ٸ� ���ڿ� ���̱�
		cout << str2 << endl;
		cout << str2.length() << endl;
	}

	// ������ �ߺ�(operator overloading)
	// �ڷ��� operator �ߺ���ų_������_��ȣ(�Է� ���� ����): ��ġ �޼ҵ�ó�� ����
	Point2& operator=(const Point2& pt) // �Ҵ� �������� �ߺ�: ��� = �Է�; x(���� ��: &) = y(������ ��: const)
	{
		m_x = pt.m_x;
		m_y = pt.m_y;
		// ���۷��� �ѱ�� ���: *pointer -> *this
		// ���� �ν��Ͻ��� �����ʹ�? this
		return *this; // w = x = y;
	}

	// ������ �Լ�: �޼ҵ�� �ƴ����� ����� ���� ������ �Լ�
	// ��� ���: �Լ� ���� �տ� friend ����
	friend Point2 operator+(const Point2& pt1, const Point2& pt2);
	friend Point2 operator-(const Point2& pt1, const Point2& pt2);

	// protected �׷�(�ܺο��� ���� �Ұ���)
protected:
	// ��� ����(������Ƽ, property) ���� -> ���ǵ� ����
	int m_x = 0; // m_ �ǹ�: ���(member)�� ��
	int m_y = 0;
};

// ostream: output stream; cout
inline std::ostream& operator<<(std::ostream& stream, const Point2& pt)
{
	stream << "(" << pt.getX() << ", " << pt.getY() << ")";
	return stream;
}

// + ������ �ߺ�: c = a+b
// �Ʒ� ����(���� 2��) �����ڴ� �ζ��� �Լ��� protected ����� ���� �Ұ��� -> ������(friend) �Լ� ��� ����
inline Point2 operator+(const Point2& pt1, const Point2& pt2)
{
	return Point2(pt1.m_x + pt2.m_x, pt1.m_y + pt2.m_y);
}

inline Point2 operator-(const Point2& pt1, const Point2& pt2)
{
	return Point2(pt1.m_x - pt2.m_x, pt1.m_y - pt2.m_y);
}

// ��ȣ ������ �ߺ�
inline bool operator==(const Point2& pt1, const Point2& pt2)
{
	return (pt1.getX() == pt2.getX()) && (pt1.getY() == pt2.getY());
}
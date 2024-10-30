#pragma once

#include <iostream>
#include "LibConsole.hpp"

// 클래스는 객체(문제를 푸는 기본 구조)의 설계도
// 클래스 정의: class 클래스명 {...}
// 클래스명은 보통 파일명과 같음
// {...} 안에 멤버(member) 정의
// 멤버 등급(외부 접근): public(공공의: O), protected(보호된: X), private(사적인: X)
class Point2
{
// public 그룹(외부에서 접근 가능): public 멤버의 집합체
public: // : 의미는 그룹을 뜻함
	// 클래스 안에 있는 함수 정의는 inline 함수 정의: inline을 생략
	// 클래스 밖에 있으면 inline을 써야 함
	
	// 멤버 함수(메소드, method)
	// getter, setter: 프로퍼티 접근 함수
	int getX(void) const // const 원래 의미: 변수(variable)를 상수(constant number)로 취급; 메소드 뒤에 있는 const 의미: 프로퍼티를 상수로 취급
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
	void setPt(int x, int y)
	{
		setX(x);
		setY(y);
	}
	// 현재 위치를 (stepX, stepY)만큼 이동
	void move(int stepX, int stepY)
	{
		m_x += stepX; // m_x = m_x + stepX
		m_y += stepY;
	}
	void moveLeft(int step = 1)
	{
		move(-step, 0); // x 좌표가 줄어들면(-) 왼쪽으로 이동
	}
	void moveRight(int step = 1)
	{
		move(step, 0); // x 좌표가 늘어나면(+) 오른쪽으로 이동
	}
	void moveUp(int step = 1)
	{
		move(0, -step); // y 좌표가 줄어들면(-) 위로 이동
	}
	void moveDown(int step = 1)
	{
		move(0, step); // y 좌표가 늘어나면(+) 아래로 이동
	}

	void print(void) // protected, private 멤버는 클래스 안에서는 자유롭게 접근
	{
		// 네임스페이스의 멤버 접근 = 네임스페이스명::멤버
		std::cout << '(' << m_x << ", " << m_y << ')';
	}
	void printChar(char ch)
	{
		// 커서를 (m_x, m_y)로 이동
		mglib::gotoxy(m_x, m_y); // mglib는 namespace이고 LibConsole.hpp에 정의
		std::cout << ch;
	}
	// C++에서는 같은 이름의 함수가 허용됨: 대신 입력 변수가 달라야 함
	//  함수 입력에 있는 =의 의미: 입력하지 않으면 사용되는 디폴트 값
	void printChar(char ch, int textCol, int backCol = mglib::BLACK)
	{
		mglib::setbacktextcol(backCol, textCol);
		printChar(ch);
	}

// protected 그룹(외부에서 접근 불가능)
protected:
	// 멤버 변수(프로퍼티, property) 선언 -> 정의도 가능
	int m_x = 0; // m_ 의미: 멤버(member)란 뜻
	int m_y = 0;
};
#pragma once

// 클래스는 객체(문제를 푸는 기본 구조)의 설계도
// 클래스 정의: class 클래스명 {...}
// 클래스명은 보통 파일명과 같음
// {...} 안에 멤버(member) 정의
// 멤버 등급(외부 접근): public(공공의: O), protected(보호된: X), private(사적인: X)
class Point2
{
// public 그룹(외부에서 접근 가능): public 멤버의 집합체
public: // : 의미는 그룹을 뜻함

// protected 그룹(외부에서 접근 불가능)
protected:
	// 멤버 변수(프로퍼티,  property) 선언 -> 정의도 가능
	int m_x = 0; // m_ 의미: 멤버(member)란 뜻
	int m_y = 0;
};
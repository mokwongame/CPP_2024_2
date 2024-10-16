// pragma: pragmatic(개선하는), 컴파일러를 개선
#pragma once // once 의미: 이 헤더 파일을 한 번만 포함(include)

#include <stdio.h> // 예전 C 방식
// 입출력(I/O)을 위한 스트리밍 클래스
#include <iostream>	// 현재 C++ 방식: C++ 협회가 제공하는 함수나 객체의 헤더 파일은 확장자가 없음

// namespace 중에서 std(standard: 표준, C++이 제공하는 표준 함수용 네임스페이스)가 많이 쓰임

// 이름 공간(namespace): namespace 네임스페이스명 {...}
namespace mokwon
{
	// 헤더 파일 원칙: 함수 선언은 들어가도 되지만 함수 정의(코드 블록까지 포함된 형태)는 불가 -> inline을 쓰면 해결됨
	inline void printName(void) // 인라인 함수(inline function): 함수처럼 보이지만 함수로 동작하지 않고, 함수명을 만나면 인라인 함수의 코드 블록으로 이 함수명을 교체
		// 인라인 함수는 코드를 교체하는 일종의 매크로라서 헤더 파일에 있어도 됨
		// 장점: 함수를 호출하지 않고 코드 블록을 교체해서 속도가 빨라짐
		// 단점: 프로그램 크기가 커짐(코드를 교체헤서 커짐)
	{
		//printf("목원대학교");
		std::cout << "목원대학교"; // cout: console ouput
	}

	inline void intro(void)
	{
		while (1) // 무한 반복의 대표적 코드
		{

		}
	}
}


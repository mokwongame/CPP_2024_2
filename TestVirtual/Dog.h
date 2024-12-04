#pragma once

#include "Animal.h"

class Dog : public Animal // class 정의에 나오는 : -> 상속 의미
{
public:
	Dog(void) : // 생성자 정의에 나오는 : -> 프로퍼티 정의를 의미
		Animal("강아지", true),
		m_address("대전시 서구 도안북로 88")
	{
		//m_name = "강아지";
		//m_bPet = true;
	}
	~Dog()
	{}

	// overloading: 부모 메소드에 추가하여 코드 블록을 구현
	// overriding: 부모 메소드를 제거하고 현재 코드 블록을 구현
	virtual void print(void) const
	{
		std::cout << "[Dog]" << std::endl;
		// :: -> 클래스 Animal의 멤버 접근
		Animal::print(); // 코멘트 처리하면 overriding
		// :: -> 네임스페이스 std의 멤버 접근
		std::cout << std::endl << "- 강아지의 주소는 " << m_address << std::endl;
	}

protected:
	std::string m_address;
};
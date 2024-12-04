#pragma once

#include <iostream>
#include <string>

class Animal
{
public:
	Animal(void)
	{
		m_name = "동물";
		m_bPet = false;
	}
	Animal(const std::string name, bool bPet)
	{
		m_name = name;
		m_bPet = bPet;
	}
	~Animal()
	{}

	// 가상 함수: 메소드 정의 앞에 virtual 추가; 부모 포인터가 자식 메소드를 호출할 수 있는 함수(수단: binding)
	virtual void print(void) const
	{
		std::cout << "[Animal]" << std::endl;
		std::cout << "나는 " << m_name << "입니다." << std::endl;
		if (m_bPet)
			std::cout << "- 나는 애완동물입니다.";
		else std::cout << "- 나는 애완동물이 아닙니다.";
	}

protected:
	std::string m_name;
	bool m_bPet;
};
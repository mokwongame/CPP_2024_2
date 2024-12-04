#pragma once

#include <iostream>
#include <string>

class Animal
{
public:
	Animal(void)
	{
		m_name = "����";
		m_bPet = false;
	}
	Animal(const std::string name, bool bPet)
	{
		m_name = name;
		m_bPet = bPet;
	}
	~Animal()
	{}

	// ���� �Լ�: �޼ҵ� ���� �տ� virtual �߰�; �θ� �����Ͱ� �ڽ� �޼ҵ带 ȣ���� �� �ִ� �Լ�(����: binding)
	virtual void print(void) const
	{
		std::cout << "[Animal]" << std::endl;
		std::cout << "���� " << m_name << "�Դϴ�." << std::endl;
		if (m_bPet)
			std::cout << "- ���� �ֿϵ����Դϴ�.";
		else std::cout << "- ���� �ֿϵ����� �ƴմϴ�.";
	}

protected:
	std::string m_name;
	bool m_bPet;
};
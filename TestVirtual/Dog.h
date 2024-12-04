#pragma once

#include "Animal.h"

class Dog : public Animal // class ���ǿ� ������ : -> ��� �ǹ�
{
public:
	Dog(void) : // ������ ���ǿ� ������ : -> ������Ƽ ���Ǹ� �ǹ�
		Animal("������", true),
		m_address("������ ���� ���ȺϷ� 88")
	{
		//m_name = "������";
		//m_bPet = true;
	}
	~Dog()
	{}

	// overloading: �θ� �޼ҵ忡 �߰��Ͽ� �ڵ� ����� ����
	// overriding: �θ� �޼ҵ带 �����ϰ� ���� �ڵ� ����� ����
	virtual void print(void) const
	{
		std::cout << "[Dog]" << std::endl;
		// :: -> Ŭ���� Animal�� ��� ����
		Animal::print(); // �ڸ�Ʈ ó���ϸ� overriding
		// :: -> ���ӽ����̽� std�� ��� ����
		std::cout << std::endl << "- �������� �ּҴ� " << m_address << std::endl;
	}

protected:
	std::string m_address;
};
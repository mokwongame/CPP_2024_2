#pragma once

#include "Car.h"

class Bus : public Car
{
public:
	Bus(void);
	~Bus()
	{}

	// getter
	int getSwitch(void) const
	{
		return m_nSwitch;
	}

protected:
	int m_nSwitch;
};

inline std::ostream& operator<<(std::ostream& stream, const Bus& bus)
{
	stream << Car(bus) << std::endl; // Car(bus) �ǹ�: Bus Ŭ������ �ν��Ͻ��� bus�� Car�� type casting�ؼ� ���
	stream << "����ġ ���� = " << bus.getSwitch();
	return stream;
}
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
	stream << Car(bus) << std::endl; // Car(bus) 의미: Bus 클래스의 인스턴스인 bus를 Car로 type casting해서 출력
	stream << "스위치 개수 = " << bus.getSwitch();
	return stream;
}
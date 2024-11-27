#pragma once

#include <iostream>
#include <string>

class Car
{
public:
	Car(void); // 생성자
	~Car() // 소멸자
	{}

	// getter
	std::string getName(void) const
	{
		return m_name;
	}
	double getMaxSpeed(void) const
	{
		return m_maxSpeed;
	}
	// setter

protected:
	// property
	std::string m_name;
	double m_maxSpeed;
	int m_nPeople;
	int m_nWheel;
};

inline std::ostream& operator<<(std::ostream& stream, const Car& car)
{
	stream << "이름 = " << car.getName() << std::endl;
	stream << "최고 속도 = " << car.getMaxSpeed() << " km/h";
	return stream;
}


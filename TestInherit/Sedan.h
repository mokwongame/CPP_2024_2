#pragma once

#include "Car.h"

// 상속 표시는 :으로 함
// public 의미: 상속 접근 그룹 설정을 public으로
class Sedan : public Car
	//class Sedan : protected Car
	//class Sedan : private Car
{
public:
	Sedan(void);
	~Sedan()
	{}

protected:
};


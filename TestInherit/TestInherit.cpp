// 상속의 예시
// 자동차 특성을 관리
// 부모(parent) 클래스: Car
// 자식(children) 클래스: Sedan, Bus, Truck(이 클래스는 형제(sibling) 클래스)
#include "Car.h"
#include "Sedan.h"
#include "Bus.h"

int main(void)
{
	Car car;
	std::cout << car << std::endl;

	using namespace std;
	Sedan sonata;
	cout << endl << sonata << endl;

	Bus bus;
	cout << endl << bus << endl;

	return 0;
}
// ����� ����
// �ڵ��� Ư���� ����
// �θ�(parent) Ŭ����: Car
// �ڽ�(children) Ŭ����: Sedan, Bus, Truck(�� Ŭ������ ����(sibling) Ŭ����)
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
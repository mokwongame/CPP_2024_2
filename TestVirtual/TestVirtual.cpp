#include "Animal.h"
#include "Dog.h"

int main(void)
{
	using namespace std;

	Animal animal;
	animal.print();

	Dog dog;
	cout << endl << endl;
	dog.print();

	// 자식인 Dog의 메모리를 생성해서 부모 클래스의 포인터에 할당
	Animal* pAn = new Dog;
	cout << endl << endl;
	pAn->print();

	delete pAn;

	return 0;
}
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

	// �ڽ��� Dog�� �޸𸮸� �����ؼ� �θ� Ŭ������ �����Ϳ� �Ҵ�
	Animal* pAn = new Dog;
	cout << endl << endl;
	pAn->print();

	delete pAn;

	return 0;
}
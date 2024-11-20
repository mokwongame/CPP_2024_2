#include <iostream>

int main(void)
{
	using namespace std;

	// �������� �迭
	int ar[1000]; // �ڷ����� int�� �迭�� ����; �̶� �迭�� ���� ������ 1000��
	// �迭�� ũ�� 1000�� ����(compile time)�Ǿ ������(runtime, ���� �ð�) ����� �� ����

	// �迭�� �ʱ�ȭ
	for (int i = 0; i < 1000; i++)
		ar[i] = i;
	// �迭 ���
	for (int i = 0; i < 1000; i++)
		cout << ar[i] << " @ i = " << i << endl;

	// C++�� �迭
	int* ptr = nullptr; // nullptr: null pointer
	ptr = new int[1000]; // �޸� �Ҵ�(new): int �ڷ��� 1000���� �Ҵ�
	// -> �޸� �Ҵ��ϴ� �κ��� ��κ� �����ڿ� �ۼ�
	// �迭�� ũ�� 1000�� ��Ÿ�ӿ��� ���� ����

	for (int i = 0; i < 1000; i++)
		ptr[i] = i;
	// �迭 ���
	for (int i = 0; i < 1000; i++)
		cout << ptr[i] << " @ i = " << i << endl;

	// �� ���� ���� �ݵ�� �޸� ����(delete)
	delete[] ptr; // delete[]: �迭�� �Ҵ�� �޸𸮸� ����
	// -> �޸� �����ϴ� �κ��� ��κ� �Ҹ��ڿ� �ۼ�

	return 0;
}
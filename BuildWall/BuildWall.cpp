#include "Point2.h"	// "..." �ǹ�: ���� �������� ��� ���� �˻�

// class(Ŭ����)�� ��� ���Ͽ� ����
int main(void)
{
	using namespace mglib;
	// Ŭ���� ����, �ν��Ͻ�(instance: Ŭ������ ����ü) ����: Ŭ������ ��ġ �ڷ���ó�� ���
	Point2 pt, pt2;
	// Ŭ������ ��� ����� ����
	// Ŭ���� ��� ���� = Ŭ������::�����
	// �ν��Ͻ� ��� ���� = �ν��Ͻ���.�����(struct�� ����)
	pt.setX(10);
	pt.setY(20);

	pt.print();
	pt2.print();
	
	//pt.printChar('*', mglib::BLUE, mglib::YELLOW);
	//pt.printChar('*', BLUE, RED);
	for (int i = 0; i < 10; i++)
	{
		pt.printChar('=', RED);
		pt.moveUp();
	}

	// �Է� ���
	while (!_kbhit()) ; // kbhit(): keyborad hit�̸� true, �ƴϸ� false
	return 0;
}
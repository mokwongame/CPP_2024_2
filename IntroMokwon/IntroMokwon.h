// pragma: pragmatic(�����ϴ�), �����Ϸ��� ����
#pragma once // once �ǹ�: �� ��� ������ �� ���� ����(include)

#include <stdio.h> // ���� C ���
// �����(I/O)�� ���� ��Ʈ���� Ŭ����
#include <iostream>	// ���� C++ ���: C++ ��ȸ�� �����ϴ� �Լ��� ��ü�� ��� ������ Ȯ���ڰ� ����

// namespace �߿��� std(standard: ǥ��, C++�� �����ϴ� ǥ�� �Լ��� ���ӽ����̽�)�� ���� ����
//using namespace std; // �� ��� ������ �����ϴ� ��� �ڵ� ���Ͽ��� std namespace�� ���� -> ���� ����� �ƴ�

// �̸� ����(namespace): namespace ���ӽ����̽��� {...}
namespace mokwon
{
	// ��� ���� ��Ģ: �Լ� ������ ���� ������ �Լ� ����(�ڵ� ���ϱ��� ���Ե� ����)�� �Ұ� -> inline�� ���� �ذ��
	inline void printName(void) // �ζ��� �Լ�(inline function): �Լ�ó�� �������� �Լ��� �������� �ʰ�, �Լ����� ������ �ζ��� �Լ��� �ڵ� �������� �� �Լ����� ��ü
		// �ζ��� �Լ��� �ڵ带 ��ü�ϴ� ������ ��ũ�ζ� ��� ���Ͽ� �־ ��
		// ����: �Լ��� ȣ������ �ʰ� �ڵ� ������ ��ü�ؼ� �ӵ��� ������
		// ����: ���α׷� ũ�Ⱑ Ŀ��(�ڵ带 ��ü�켭 Ŀ��)
	{
		//printf("������б�");
		std::cout << "������б�"; // cout: console ouput
	}

	inline int printMenu(void)
	{
		using namespace std;
		cout << "======================" << endl; // << �ǹ�: ��Ʈ���� ���
		cout << "1. ������" << endl;
		cout << "2. �ּ�" << endl;
		cout << "3. ���л���" << endl;
		cout << "4. �ܰ��� �Ұ�" << endl; // ����ڰ� ���ĺ��� �Է��ϸ� �ܰ��� �̸��� ����ϴ� ���
		cout << "======================" << endl;
		// �޴� �Է�
		int nMenu = 0;
		cout << "�޴� ��ȣ�� �����ϼ���: ";
		cin >> nMenu; // >> �ǹ�: ��Ʈ���� �Է�
		return nMenu;
	}

	inline void printEngName(void)
	{
		using namespace std;
		cout << endl << "������б��� �������� Mokwon University�Դϴ�." << endl << endl;
	}

	inline void printCollegeName(char ch)
	{
		using namespace std;
		ch = toupper(ch); // toupper() �Լ�: �빮�ڷ� �ٲٴ� �Լ�
		// if ... else ... �� ����
		switch (ch)
		{
		case 'D':
			cout << "D�� ���������Դϴ�.";
			break;
		default: 
			cout << ch << "�� �߸��� �Է��Դϴ�.";
		}
		cout << endl;
	}

	inline void printCollege(void)
	{
		using namespace std;
		cout << endl << "�ܰ����� ���ĺ��� �Է��ϼ���: ";
		char ch;
		cin >> ch;
		cout << endl << "�Է��� ���ĺ��� " << ch << "�Դϴ�." << endl;
		printCollegeName(ch);
	}

	inline void intro(void)
	{
		using namespace std;
		printName(); // mokwon::printName(): namespace ���ο����� namepace �̸��� �� �ʿ䰡 ����
		cout << " �Ұ� ���α׷�" << endl; // ����: endl(end of line)
		while (1) // ���� �ݺ��� ��ǥ�� �ڵ�
		{
			int nMenu = printMenu();
			// ������ �Ǵ��ؼ� ���ǹ��� ������ ���� if/else���� switch/case�� �� ����
			switch (nMenu)
			{
			case 1: printEngName();
				break;
			case 4: printCollege();
			default: cout << endl << "�߸��� �޴� ��ȣ�Դϴ�." << endl << endl;
			}
		}
	}
}

#include <stdio.h>
#include <conio.h> // console I/O�� ����� �����ϱ�

// ���� ��ǥ: �ܼ� ����
// - �Է��� char�� �޾Ƽ� ���ڷ� ���: ���� �Է� + ������ ���� ��ȯ �ʿ�
// - ���: +-*/%
// - �Է��� 2���� �޾ƾ� ��
// - ���� �Լ��� ���: sctel
// - �Լ��� �ϳ� �̻� ���

int getInt()
{
	//char ch = getchar(); // ���� �ϳ��� Ű���忡�� �Է�: stdio.h�� ����
	char ch = _getche(); // ����(ch) �ϳ��� Ű���忡�� �Է¹ް�(get) ����Ϳ� ����(e): conio.h�� ����
	//printf("���� = %c\n", ch);
	int x = ch - '0'; // ���� -> ���ڷ� �ٲٴ� ���
	//printf("���� = %d\n", x);
	return x; // �� ��ȯ ���: return ������(���)
}

int main()
{
	// x, y �Է�
	printf("�� x�� �Է��ϼ���: ");
	int x = getInt();
	printf("\n�Է��� ���� x = %d\n", x);
	printf("�� y�� �Է��ϼ���: ");
	int y = getInt();
	printf("\n�Է��� ���� y = %d\n", y);

	// ������ �Է�
	printf("������(+-*/%%sctel)�� �Է��ϼ���: ");
	char op = _getche();
	printf("\n�Է��� �����ڴ� op = %c\n", op);

	// ���ǹ��� ����� ���
	// �ܼ� ���ǹ��� switch ������ ����
	// switch (�Ǵܽ�) { case ��: ����; break; }
	int z;
	switch (op)
	{
	case '+': z = x + y; break;
	}

	// ��� ���
	printf("\n=== ��: %d ===\n", z);

	return 0; // ���� 0���� ��ȯ(return)
}
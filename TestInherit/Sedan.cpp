#include "Sedan.h"

// pulblic ���
// �θ��� public ��� -> public���� ����(�ڽ��� ��밡)
// �θ��� protected ��� -> protected�� ����(�ڽ��� ��밡)
// �θ��� private ��� -> private���� ����(�ڽ��� ��� �Ұ�)

// protected ���
// �θ��� public ��� -> protected�� ����(�ڽ��� ��밡)
// �θ��� protected ��� -> protected�� ����(�ڽ��� ��밡)
// �θ��� private ��� -> private���� ����(�ڽ��� ��� �Ұ�)

// private ���
// �θ��� public ��� -> private���� ����(�ڽ��� ��� �Ұ�)
// �θ��� protected ��� -> private���� ����(�ڽ��� ��� �Ұ�)
// �θ��� private ��� -> private���� ����(�ڽ��� ��� �Ұ�)

Sedan::Sedan(void)
{
	// m_name�� m_maxSpeed�� Car�� ���; ����� ���ؼ� �θ� Ŭ������ ��� ���� ����
	m_name = "�¿���";
	m_maxSpeed = 300.;
}

#include "SnakeGame.h"

SnakeGame::SnakeGame(void)
{
	// ���� �ʱ�ȭ
	mglib::randseed();

	m_rectWall.setColor(mglib::YELLOW, mglib::BLUE);
	m_rectWall.make(Point2(0, 0), Point2(m_nWallWid, m_nWallHt));
}

// �Ʒ� �Լ� ���Ǹ� ��� ���Ϸ� �ű� ���� �տ� inline �߰�
void SnakeGame::start(void)
{
}

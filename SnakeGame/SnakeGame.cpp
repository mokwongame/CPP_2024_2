#include "SnakeGame.h"

SnakeGame::SnakeGame(void)
{
	// 난수 초기화
	mglib::randseed();

	m_rectWall.setColor(mglib::YELLOW, mglib::BLUE);
	m_rectWall.make(Point2(0, 0), Point2(m_nWallWid, m_nWallHt));
}

// 아래 함수 정의를 헤더 파일로 옮길 때는 앞에 inline 추가
void SnakeGame::start(void)
{
}

#include "Point2.h"	// "..." 의미: 현재 폴더에서 헤더 파일 검색

// class(클래스)는 헤더 파일에 정의
int main(void)
{
	using namespace mglib;
	// 클래스 선언, 인스턴스(instance: 클래스의 구현체) 생성: 클래스를 마치 자료형처럼 취급
	Point2 pt, pt2;
	// 클래스는 멤버 사용이 가능
	// 클래스 멤버 접근 = 클래스명::멤버명
	// 인스턴스 멤버 접근 = 인스턴스명.멤버명(struct와 동일)
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

	// 입력 대기
	while (!_kbhit()) ; // kbhit(): keyborad hit이면 true, 아니면 false
	return 0;
}
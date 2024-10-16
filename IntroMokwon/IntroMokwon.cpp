#include "IntroMokwon.h" // "..." 의미: 현재 프로젝트 폴더에서 헤더 파일 검색

// 모든 프로그램의 시작점은 main 함수
//void printName(void) // 예전 C 언어 스타일: 함수는 cpp인 소스 파일에만 정의되어야 함
//{
//	printf("전역 함수");
//}

int main(void)
{
	// printName()은 namespace 안에 있어서 그냥은 접근이 안된
	//printName();
	// 접근 방법 (1) - 네임스페이스명::멤버명
	//mokwon::printName();
	// 접근 방법 (II) - using namespace 네임스페이스명
	//using namespace mokwon; // 이후부터는 mokwon namespace를 생략 가능
	//printName();
	mokwon::intro(); // 목원대 소개 프로그램

	return 0;
}




#include <iostream>

int main(void)
{
	using namespace std;

	// 전통적인 배열
	int ar[1000]; // 자료형이 int인 배열을 선언; 이때 배열의 원소 개수는 1000개
	// 배열의 크기 1000은 고정(compile time)되어서 런터임(runtime, 실행 시간) 변경될 수 없음

	// 배열의 초기화
	for (int i = 0; i < 1000; i++)
		ar[i] = i;
	// 배열 출력
	for (int i = 0; i < 1000; i++)
		cout << ar[i] << " @ i = " << i << endl;

	// C++의 배열
	int* ptr = nullptr; // nullptr: null pointer
	ptr = new int[1000]; // 메모리 할당(new): int 자료형 1000개를 할당
	// -> 메모리 할당하는 부분은 대부분 생성자에 작성
	// 배열의 크기 1000은 런타임에서 변경 가능

	for (int i = 0; i < 1000; i++)
		ptr[i] = i;
	// 배열 출력
	for (int i = 0; i < 1000; i++)
		cout << ptr[i] << " @ i = " << i << endl;

	// 다 쓰고 나면 반드시 메모리 해제(delete)
	delete[] ptr; // delete[]: 배열로 할당된 메모리를 해제
	// -> 메모리 해제하는 부분은 대부분 소멸자에 작성

	return 0;
}
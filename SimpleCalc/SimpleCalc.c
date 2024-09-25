#include <stdio.h>
#include <conio.h> // console I/O의 기능을 포함하기

// 개발 목표: 단순 계산기
// - 입력을 char로 받아서 숫자로 계산: 문자 입력 + 문자의 숫자 변환 필요
// - 계산: +-*/%
// - 입력을 2개를 받아야 함
// - 수학 함수도 계산: sctel
// - 함수는 하나 이상 사용

int getInt()
{
	//char ch = getchar(); // 문자 하나를 키보드에서 입력: stdio.h에 정의
	char ch = _getche(); // 문자(ch) 하나를 키보드에서 입력받고(get) 모니터에 에코(e): conio.h에 정의
	//printf("문자 = %c\n", ch);
	int x = ch - '0'; // 문자 -> 숫자로 바꾸는 방법
	//printf("숫자 = %d\n", x);
	return x; // 값 반환 방법: return 변수명(상수)
}

int main()
{
	// x, y 입력
	printf("값 x를 입력하세요: ");
	int x = getInt();
	printf("\n입력한 값은 x = %d\n", x);
	printf("값 y를 입력하세요: ");
	int y = getInt();
	printf("\n입력한 값은 y = %d\n", y);

	// 연산자 입력
	printf("연산자(+-*/%%sctel)를 입력하세요: ");
	char op = _getche();
	printf("\n입력한 연산자는 op = %c\n", op);

	// 조건문을 사용해 계산
	// 단순 조건문은 switch 구문이 유리
	// switch (판단식) { case 값: 구문; break; }
	int z;
	switch (op)
	{
	case '+': z = x + y; break;
	}

	// 결과 출력
	printf("\n=== 답: %d ===\n", z);

	return 0; // 값을 0으로 반환(return)
}
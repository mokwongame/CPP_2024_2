#include <stdio.h>

// 함수 정의: 출력자료형 함수명(입력 선언) {...}
void printAscii(int i) // 출력이 없으면 자료형을 void로 선택
{
	char ch = (char)i;
	printf("문자: %c = 번호 %d\n", ch, i);
}

int main()
{
	// ASCII(0!255) 출력: 컴퓨터에 문자, 숫자, 기호, 제어 기호 등을 출력하기 위한 규약
	// 0~127까지 출력 가능
	char c = 'a'; // '': 문자 하나를 상수로 정의
	int n = c; // char를 정수로 저장
	printf("문자: %c = 번호 %d", c, n);
	c = 'b';
	n = c;
	printf("문자: %c = 번호 %d", c, n);
	// 반복 구문의 필요성: 코드를 간략화
	// for 구문: 시작점, 판단식, 간격을 설정해서 반복 -> 숫자를 반복 계산할 때 유리
	// for (초기값; 판단식; 간격) {...}
	// 0~127까지 반복: 초기값은 0; 값은 127보다 작거나 같아야 함; 간격은 1만큼 증가
	for (int i = 0; i < 128; i++) // i를 하나씩 증가: i++; i = i + 1;
	{
		// 변수 앞에 나오는 괄호 의미: 자료형(data type)을 강제로 선정(casting)
		//char ch = (char)i; // i는 정수(4B), ch는 문자(1B); (char) 의미: 자료형을 강제로 char로 선정
		//printf("문자: %c = 번호 %d\n", ch, i);
		// 문자열 "..." 안에 있는 \ 의미: 자판에 없는 특수 기호를 넣는다는 뜻 == 이스케이프(escape) 문자
		// \n: newline(쉽게 말하면 엔터)
		// \r: carriage return

		// 함수 호출: 함수명(입력)
		printAscii(i);
	}
	printf("\n\n\n\n");

	// for 구문의 대안으로 while 구문도 가능
	// while (판단식) {...}; 판단식이 참(0이 아니면 참)이면 {}를 계속 실행
	int i = 0;
	while (i < 128) // 판단식만 보고 반복 여부를 단순하게 결정할 때는 while 구문이 유리
	{
		//char ch = (char)i;
		//printf("문자: %c = 번호 %d\n", ch, i);

		// 함수 호출
		printAscii(i);
		i++;
	}
}
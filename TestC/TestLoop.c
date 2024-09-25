#include <stdio.h>

int main()
{
	// ASCII(0!255) 출력: 컴퓨터에 문자, 숫자, 기호, 제어 기호 등을 출력하기 위한 규약
	// 0~127까지 출력 가능
	char c = 'a';
	int n = c; // char를 정수로 저장
	printf("문자: %c = 번호 %d", c, n);
	c = 'b';
	n = c;
	printf("문자: %c = 번호 %d", c, n);
	// 반복 구문의 필요성: 코드를 간략화
}
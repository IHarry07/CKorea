// C언어 기본포멧
#include <stdio.h>

void main14() {
	// 숫자 2개 입력받아서
	// 더하기, 빼기, 곱하기, 나누기구하기

	/*
	[입력 예시]
	더하기 : 10
	빼기 : 0
	곱하기 : 25
	나누기 : 1
	나머지 구하기 : 0
	*/

	int num1;
	int num2;

	printf("두 정수를 입력하세요\n");
	scanf_s("%d", &num1);
	scanf_s("%d", &num2);
	
	int 더하기 = num1 + num2;
	int 빼기 = num1 - num2;
	int 곱하기 = num1 * num2;
	int 나누기 = num1 / num2;

	printf("더하기 : %d\n, 빼기 : %d\n, 곱하기 : %d\n, 나누기 : %d\n", 더하기, 빼기, 곱하기, 나누기);
	


}


	
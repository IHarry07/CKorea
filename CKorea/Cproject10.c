#include <stdio.h>

void main10() {
	// 1. 
	// 국어, 수학, 영어 :입력을 받아서 
	// <예시>
	// 총점:300
	// 평균:100

	// 2.
	// 숫자1, 숫자2 : 입력 받아서
	// 더하기, 빼기, 곱하기, 나누기
	/*
	<예시>
	num1 + num2 = 5
	num1 - num2 = -2
	num1 * num2 = 30
	num1 / num2 = 3.333
	num1 % num2 = 1
	*/

	int 국어, 영어, 수학;

	printf("국어점수를 입력하세요");
	scanf_s("%d", &국어);

	printf("수학점수를 입력하세요");
	scanf_s("%d", &수학);

	printf("영어점수를 입력하세요");
	scanf_s("%d", &영어);

	int 총점 = 국어 + 수학 + 영어;
	float 평균 = 총점 / 3.0f;

	printf("당신의 총점은 %d점이고, 평균은 %.1f점입니다\n", 총점, 평균);


	int num1, num2;

	printf("첫번째 정수를 입력하세요");
	scanf_s("%d", &num1);

	printf("두번째 정수를 입력하세요");
	scanf_s("%d", &num2);

	int 합 = num1 + num2;
	int 차 = num1 - num2;
	int 곱 = num1 * num2;
	int 몫 = num1 / num2;
	

	printf("두 정수의 합은 %d이고 차는 %d입니다\n", 합, 차);
	printf("두 정수의 곱은 %d이고 몫은 %d입니다", 곱, 몫);
	


	
		




}
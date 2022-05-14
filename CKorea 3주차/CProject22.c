#include <stdio.h>

void main22() {

	// 출력
	// 변수와 자료형 
	// 입력
	// 조건문
	// 반복문

	// 출력
	printf("아무거나 막 입력해\n");
	printf("다음문장\n");

	// 자료형 변수(저장공간)
	// 변수 선언(공간생성)
	int 정수;
	float 실수;
	double 실수2;
	char 문자;
	char 문자여러개[128] = "aaaaaa";

	// 변수 대입(수학에서의 = 과는 다르다!)
	정수 = 123;
	실수 = 3.14f;
	실수2 = 3.14;
	문자 = 'a';

	// 변수 출력
	printf("%d\n", 정수);
	printf("%f\n", 실수);
	printf("%lf\n", 실수2);
	printf("%c\n", 문자);
	printf("%s\n", 문자여러개);

	// 연산 (+, -, ×, ÷, %)
	float 결과1 = 실수 + 실수2;
	int 결과2 = 정수 - 실수2;
	int 결과3 = 정수 * 정수;
	float 결과4 = 정수 / 실수;
	int 결과5 = 정수 % 2;

	// 변수 출력
	printf("더하기 결과 : %f\n", 결과1);
	printf("빼기 결과 : %d\n", 결과2);
	printf("곱하기 결과 : %d\n", 결과3);
	printf("나누기 결과 : %f\n", 결과4);
	printf("2로 나눈 나머지 : %d\n", 결과5);

	int num = 11;
	// 조건문
	if (num > 10) {
		printf("num은 10보다 크다\n");
	}
	else if (num == 10) {
		printf("num은 10이다\n");
	}
	else {
		printf("num은 10보다 작다\n");
	}
	// 퀴즈1 : 양수인지 음수인지 판단하기
	// 퀴즈2 : 변수의 값이 홀수인지 짝수인지 판별하기(구글검색 : 2로 나눈 나머지가 1이면 홀수, 2로 나눈 나머지가 0이면 짝수이다.)

	int num1 = 0;
	if (num1 < 0) {
		printf("음수입니다\n");
	}
	else if (num1 == 0) {
		printf("0입니다\n");
	}
	else {
		printf("양수입니다\n");
	}

	int num2 = 5;

	if (num2 % 2 == 0) {
		printf("짝수입니다\n");
	}
	else {
		printf("홀수입니다\n");
	}
	// 조건문 switch
	// switch : 소괄호 안에 있는 값과 case 옆에 있는 값이 일치하면 해당 부분 실행
	switch ('c') {
	case 'A':
		printf("A\n");
		break;
		switch ('B')
	case 'B':
		printf("B\n");
		break;
		switch ('C')
	case 'C':
		printf("C\n");
		break;
	default:
		printf("A,B,C 다 아닙니다!\n");

	}

	// 반복문 while, for
	// for(처음값;조건;증감량){반복할 문장;}
	for (int i = 0; i < 5; i++) {
		printf("%d번Hello For\n", i + 1);
	}
	// while (조건){조건이 맞으면 반복할 문장;}
	int flag = 0;
	while (flag < 5) {
		printf("%d번 Hello while\n", flag + 1);
		flag++;
	}

	// 반복문을 통해서 1~10 까지 출력
	num = 0;
	for (int j = 0; j < 10; j++) {

		printf("%d\n", j + 1);

		num = num + j + 1;
	}
	printf("%d", num);}
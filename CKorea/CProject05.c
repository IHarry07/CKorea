#include <stdio.h>

void main5 ()  {
	// 정수선언 (소수점 없는 숫자)
	int num;
	// 실수선언 (소수점 있는 숫자)
	float fnum;
	// 문자선언 (한글자)
	char c;
	// 문자열 초기화 (여러글자)
	char cc[128] = "hello world!";
    
    // 정수 값 대입 = 
	num = 1;
	// 실수 값 대입 = 
	fnum = 3.14;
	// 문자 값 대입 = 
	c = 'g';

	// 정수 출력 %d
	printf("%d\n", num);
	// 실수 출력 %f
	printf("%f\n", fnum);
	// 문자 대입 %c
	printf("%c\n", c);
	// 문자열 출력 %s
	printf("%s\n", cc);

	// 여러 변수 출력
	printf("%d, %f, %c, %s\n", num, fnum, c, cc);

	

}
// C언어 기본포멧
#include <stdio.h>

void main13() {
	// 출력
	printf("Hallo world\n");

	// 변수 (저장공간)
	// 변수 선언(공간생성)
	int num;         // 정수의 저장공간(4byte)
	float var1;      // 실수의 저장공간 (4byte)
	char var2;       // 문자 형태의 저장공간(1byte)
	char var3[255] = "hello world"; // 변수 초기화

	// 대입
	num = 33;
	var1 = 3.14;
	var2 = 'a';

	// 변수 출력
	printf("%d, %f, %c, %s\n", num, var1, var2, var3);

	// 입력
	scanf_s("%d", &num);
	printf("%d\n", num);

	scanf_s("%s", &var3, 255);      // 문자열은 총 길이까지 적어주기
	printf("%s\n", var3);
}
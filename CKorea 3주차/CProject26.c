#include <stdio.h>

int main26() {
	// 배열 (변수를 나열, 쓰기좋게)

	// 배역 자료형[개수] = {1,2,3,4};
	char c1 = 'H';
	char c2 = 'e';
	char c3 = 'l';
	char c4 = 'l';
	char c5 = 'o';
	char hello[5] = { 'h','e','l','l','o' };
	char str[6] = "Hello";

	printf("%c%c%c%c%c\n", c1, c2, c3, c4, c5);
	printf("%s\n", hello);
	printf("%s\n", str);

	// 출석번호
	int num1 = 1;
	int num2 = 2; 
	int num3 = 3;
	int num4 = 4;
	int num5 = 5;
	int num6 = 6;
	int num7 = 7;
	int num8 = 8;
	int num9 = 9;
	int num10 = 10;

	printf("%d\n", num1);
	printf("%d\n", num2);
	printf("%d\n", num3);
	printf("%d\n", num4);
	printf("%d\n", num5);
	printf("%d\n", num6);
	printf("%d\n", num7);
	printf("%d\n", num8);
	printf("%d\n", num9);
	printf("%d\n", num10);
	
	int num[10] = {1,2,3,4,5,6,7,8,9,10};

	for (int i = 0; i < 10; i++) {
		printf("%d\n", num[i]);
		
	}

	return 0;
}
#include <stdio.h>

void main18() {

	int num1;

	printf("나이를 입력하세요\n");
	scanf_s("%d", &num1);

	if (65 < num1) {
		printf("노약자입니다");
	}
	else if (num1 < 65 && 20 < num1) {
		printf("성인입니다");
	}
	else if (num1 <= 20 && num1 >= 14) {
		printf("청소년 입니다");
	}
	else {
		printf("어린이입니다");
	}

	int num;

	printf("윤년 구해드립니다. 연도를 써보세요\n");
	scanf_s("%d", &num);

	if (num % 4 == 0 && num % 100 != 0) {
		printf("%d년은 윤년입니다", num);
	}
	else if (num % 400 == 0) {
		printf("%d년은 윤년입니다.", num);
	}
	else {
		printf("%d년은 윤년이 아닙니다.", num);
	}
}

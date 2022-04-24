#include <stdio.h>

void main11() {
	// 비교 연산자   (1. 맞다, 0. 아니다)
	int num1, num2;

	scanf_s("%d", &num1);
	scanf_s("%d", &num2);

	// 1. 같다  == 
	printf("같다 : %d\n", num1 == num2);
	// 2. 다르다 !=
	printf("다르다 : %d\n", num1 != num2);
	// 3. 작다  <
	printf("작다 : %d\n", num1 < num2);
	// 4. 작거나 같다  <=
	printf("작거나 같다 : %d\n", num1 <= num2);
	// 5. 크다  >
	printf("크다 : %d\n", num1 > num2);
	// 6. 크거나 같다  >=
	printf("크거나 같다 : %d\n", num1 >= num2);

	// 관계연산자 (&& : and, || : or, ! : not)
	int num3 = 0;
	// && : 앞뒤 모두 맞아야 맞는것 아니면 틀림
	printf("\n그리고%d\n", num1 == num2 && num1 == num3);        // 그리고 and
	// || : 앞 또는 뒤 하나만 맞아도 맞는것
	printf("혹은%d\n", num1 == num2 || num1 == num3);            // 혹은 or 
	// ! : 반대로 (참이면 거짓으로, 거짓이면 참으로)
	printf("not : %d\n", !(num1 > num2));                        // not







}
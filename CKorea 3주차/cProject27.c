#include <stdio.h>

int main27() {
	//char arr1[20] = "홍길동";
	//int num1[20] = { 1,2,3 };
	//int num2[3][2] = { {1,2},{3,4},{5,6} };



	//num2[2][0] = 5;

	//printf("%d", num2[2][0]);
	//char names[5][16] = { "홍길동","아무개","김영희","김철수","갑을병정무" };

	//printf("%s은 %d번이다", names[0],num2[2][0]);

	//// 배열 출력
	//for (int i = 0; i < 3; num1[i]) {
	//	printf("%d", num1[i]);
	//}

	char menu[6][10] = { "아메리카노","에스프레소","카페라떼","고구마라떼","허니브레드","아이스티"};
	int price[6] = {1500,1700,2000,3000,15000,3000};
	for (int i = 0; i < 5; i++) {
		printf("%s : %d\n", menu[i], price[i]);
	}
	return 0;



}
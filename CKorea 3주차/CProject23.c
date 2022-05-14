#include <stdio.h>

// 함수 : 코드를 저장하는 기술(C언어에서 주어지는 문법으로는 할 수 없는 계산을 개발자가 직접 만들어서 사용한다)
// 기능 단위로 저장, 소괄호가 붙어있음

// Sum이라는 이름의 함수
void Sum1(int var1,int var2, int var3) {
	printf("%d\n", var1 + var2 + var3);
}

// Sub : 두 수를 뺀다. 대신에음수가 있으면 절댓값으로 바꿔서 뺀다
void Sub1(int var4, int var5) {
	if (var4 > 0) {
		var4 = var4 * 1;
	}
	else {
		var4 = var4 * -1;
	}
	if (var5 > 0) {
		var5 = var5 * 1;
	}
	else {
		var5 = var5 * -1;
	}
    printf("%d\n", var4 - var5);
}
// Div : 나누기 기능을 만들되 0으로 나누려하면 0을 출력하게 만들기
void Div1(float var6, float var7) {
	if (var7 == 0) {
		printf("0으로 나눌수 없습니다");
	}
	else {
		printf("%f\n", (float)var6 / var7);
	}
}


// main이라는 이름의 함수
void main23() {
	Sum1(1, 2, 3);
	Sum1(10, 20, 30);
	Sum1(100, 200, 300);

	Sub1(-10, -5);

	Div1(8564, 0);
}         
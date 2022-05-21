#include <stdio.h>
#include "CProject29.h"

// 복습 : 함수, 배열, 포인터 

// 함수 
/*
함수 만드는 방법 (함수정의)
자료형 함수 이름(변수1선언, 변수2선언){
return 0;
}
*/
// 숫자 2개를 입력받아서 곱하기 해주는 함수 정의(만든다)

int main() {
	// 함수 사용
	
	num = Mul(3, 5);

	printf("%d",num);
	Print(); 
	Print();
	Print();
	Print();
	
	div_result = Div(10.0f, 5.0f);
	printf("%.2f\n",div_result);
	div_result = Div(5, 0);
	printf("%.1f\n", div_result);
	
	int cal_result = Calc(3);
	printf("%d", cal_result);
	return 0;

}
int Mul(int num, int num1)
{
	int result = num * num1;
	return result;
	Print();
}

void Print() {
	printf("Print 함수를 사용하셨습니다.\n");
}
// 실수 2개를 전달받아서 첫번째 숫자/두번째숫자를 꼐산하고 돌려줌(리턴)
float Div(float num1,float num2) {
	float result = 0.0f;
	if (num2 != 0.0f) {
		result = num1 / num2;
	}
	else {
		printf("0으로는 나눌수없습니다.\n");
	}
	return result;
}
int Calc(int num)
{
	num = num * num + num + num + 11;
	return num;
}
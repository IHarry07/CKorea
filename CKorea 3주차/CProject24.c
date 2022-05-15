#include <stdio.h>
// 함수 : 코드를 저장하는 기술 (기능단위로 저장)
// 넘겨줄땐()
// 결과를 받을땐 return


// Sum 함수 인자는 2개, 리턴값은 두개를 더한값으로
int Sum(int var, int var1) {
	return var + var1;
}

int main24(){
	int result1 = Sum(10,20);
	printf("%d\n", result1);
	return result1;
}
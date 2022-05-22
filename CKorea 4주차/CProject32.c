#include <stdio.h>
void myPow(int* num) {
      *num = (*num)* (*num);
	
	

}

int main32(){
	int num = 3;
	int* pNum = &num;
	myPow(pNum);

	printf("%d", num);

}
// 선언할때의 * : 포인터 변수선언
// 사용할때의 * : 역참조
// & : 주소값
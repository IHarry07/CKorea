#include <stdio.h>

/*
자료형 함수이름 (입력받을 개수만큼 변수 선언){

 return 돌려줄 값;
}
*/
void 함수1(int num1) {
	printf("함수1이 사용(호출) 되었습니다");
	return;
}
int 함수2(char var1, char var2) {
	if (var1 != NULL) {
		printf("함수2가 사용(호출) 되었습니다");
		return 0;
	}
	else {
		printf("오류발생!");
		return -1;

	}
}

	float 함수3() {
		printf("함수3이 사용(호출)되었습니다");
		return 3.141592f;
	}

	int main25() {
	함수1(34);

	return 0;
}


// 변수 : 값을 저장하는 공간
// 함수 : 코드를 저장하는 그룹( 기능단위로 제작 )




#include <stdio.h>

int A(int num) {
	num++;
	return 0;
}
int B(int* num) {
	(*num)++;
	return 0;
	
}


int main30() {
	int no = 3;
	A(no);
	printf("%d", no);
	B(&no);
	printf("%d", no);


	int* pNum;               // 포인터 변수선언
	pNum = &no;              // 주소참조(주소대입)
	*pNum;                   // 역참조(값사용)

	printf("\n%p\n", &no);
	printf("%d\n", no);
	printf("%p\n", pNum);
	printf("%d\n", *pNum);

	return 0;
}

// 1. 변수선언(변수를 만든다)
// 2. 포인터변수를 만들고 변수의 주소를 담는다
// 3. 사용할때는 역참조를 사용한다
// 포인터변수를 선언하려면 선언시(자료형을 적을때)에 변수앞에 *을 적는다
// 역참조를 하려면 변수앞에 *을 적는다(변수 사용시에 앞에 *을 적음)
// 변수의 주소는 변수앞에 &적는다
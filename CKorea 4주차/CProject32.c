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
// �����Ҷ��� * : ������ ��������
// ����Ҷ��� * : ������
// & : �ּҰ�
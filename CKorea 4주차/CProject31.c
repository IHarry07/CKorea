#include <stdio.h>

void Swap(int *num1, int *num2) {              // �����ҋ� �տ� *���̱�
	int num3 = *num2;                           // ������ ��������Ϸ��� �տ� * ���̱�
	*num2 = *num1;
	*num1 = num3;
}
int Swap2(int num1, int num2) {
	
	
	
	return num1;
}
int main31(){

	int num1 = 10;
	int num2 = 20;
	int num3 = Swap2(num1, num2);
	int num4 = Swap2(num2, num1);
	num1 = num4;
	num2 = num3;

	/*Swap(&num1, &num2);*/

	printf("%d\n", num1);
	printf("%d\n", num2);



	return 0;

}
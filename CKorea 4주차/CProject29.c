#include <stdio.h>
#include "CProject29.h"

// ���� : �Լ�, �迭, ������ 

// �Լ� 
/*
�Լ� ����� ��� (�Լ�����)
�ڷ��� �Լ� �̸�(����1����, ����2����){
return 0;
}
*/
// ���� 2���� �Է¹޾Ƽ� ���ϱ� ���ִ� �Լ� ����(�����)

int main() {
	// �Լ� ���
	
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
	printf("Print �Լ��� ����ϼ̽��ϴ�.\n");
}
// �Ǽ� 2���� ���޹޾Ƽ� ù��° ����/�ι�°���ڸ� �����ϰ� ������(����)
float Div(float num1,float num2) {
	float result = 0.0f;
	if (num2 != 0.0f) {
		result = num1 / num2;
	}
	else {
		printf("0���δ� �����������ϴ�.\n");
	}
	return result;
}
int Calc(int num)
{
	num = num * num + num + num + 11;
	return num;
}
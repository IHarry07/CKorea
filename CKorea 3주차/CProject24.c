#include <stdio.h>
// �Լ� : �ڵ带 �����ϴ� ��� (��ɴ����� ����)
// �Ѱ��ٶ�()
// ����� ������ return


// Sum �Լ� ���ڴ� 2��, ���ϰ��� �ΰ��� ���Ѱ�����
int Sum(int var, int var1) {
	return var + var1;
}

int main24(){
	int result1 = Sum(10,20);
	printf("%d\n", result1);
	return result1;
}
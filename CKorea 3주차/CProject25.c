#include <stdio.h>

/*
�ڷ��� �Լ��̸� (�Է¹��� ������ŭ ���� ����){

 return ������ ��;
}
*/
void �Լ�1(int num1) {
	printf("�Լ�1�� ���(ȣ��) �Ǿ����ϴ�");
	return;
}
int �Լ�2(char var1, char var2) {
	if (var1 != NULL) {
		printf("�Լ�2�� ���(ȣ��) �Ǿ����ϴ�");
		return 0;
	}
	else {
		printf("�����߻�!");
		return -1;

	}
}

	float �Լ�3() {
		printf("�Լ�3�� ���(ȣ��)�Ǿ����ϴ�");
		return 3.141592f;
	}

	int main25() {
	�Լ�1(34);

	return 0;
}


// ���� : ���� �����ϴ� ����
// �Լ� : �ڵ带 �����ϴ� �׷�( ��ɴ����� ���� )




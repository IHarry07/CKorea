// C��� �⺻����
#include <stdio.h>

void main13() {
	// ���
	printf("Hallo world\n");

	// ���� (�������)
	// ���� ����(��������)
	int num;         // ������ �������(4byte)
	float var1;      // �Ǽ��� ������� (4byte)
	char var2;       // ���� ������ �������(1byte)
	char var3[255] = "hello world"; // ���� �ʱ�ȭ

	// ����
	num = 33;
	var1 = 3.14;
	var2 = 'a';

	// ���� ���
	printf("%d, %f, %c, %s\n", num, var1, var2, var3);

	// �Է�
	scanf_s("%d", &num);
	printf("%d\n", num);

	scanf_s("%s", &var3, 255);      // ���ڿ��� �� ���̱��� �����ֱ�
	printf("%s\n", var3);
}
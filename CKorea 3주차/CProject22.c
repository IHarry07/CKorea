#include <stdio.h>

void main22() {

	// ���
	// ������ �ڷ��� 
	// �Է�
	// ���ǹ�
	// �ݺ���

	// ���
	printf("�ƹ��ų� �� �Է���\n");
	printf("��������\n");

	// �ڷ��� ����(�������)
	// ���� ����(��������)
	int ����;
	float �Ǽ�;
	double �Ǽ�2;
	char ����;
	char ���ڿ�����[128] = "aaaaaa";

	// ���� ����(���п����� = ���� �ٸ���!)
	���� = 123;
	�Ǽ� = 3.14f;
	�Ǽ�2 = 3.14;
	���� = 'a';

	// ���� ���
	printf("%d\n", ����);
	printf("%f\n", �Ǽ�);
	printf("%lf\n", �Ǽ�2);
	printf("%c\n", ����);
	printf("%s\n", ���ڿ�����);

	// ���� (+, -, ��, ��, %)
	float ���1 = �Ǽ� + �Ǽ�2;
	int ���2 = ���� - �Ǽ�2;
	int ���3 = ���� * ����;
	float ���4 = ���� / �Ǽ�;
	int ���5 = ���� % 2;

	// ���� ���
	printf("���ϱ� ��� : %f\n", ���1);
	printf("���� ��� : %d\n", ���2);
	printf("���ϱ� ��� : %d\n", ���3);
	printf("������ ��� : %f\n", ���4);
	printf("2�� ���� ������ : %d\n", ���5);

	int num = 11;
	// ���ǹ�
	if (num > 10) {
		printf("num�� 10���� ũ��\n");
	}
	else if (num == 10) {
		printf("num�� 10�̴�\n");
	}
	else {
		printf("num�� 10���� �۴�\n");
	}
	// ����1 : ������� �������� �Ǵ��ϱ�
	// ����2 : ������ ���� Ȧ������ ¦������ �Ǻ��ϱ�(���۰˻� : 2�� ���� �������� 1�̸� Ȧ��, 2�� ���� �������� 0�̸� ¦���̴�.)

	int num1 = 0;
	if (num1 < 0) {
		printf("�����Դϴ�\n");
	}
	else if (num1 == 0) {
		printf("0�Դϴ�\n");
	}
	else {
		printf("����Դϴ�\n");
	}

	int num2 = 5;

	if (num2 % 2 == 0) {
		printf("¦���Դϴ�\n");
	}
	else {
		printf("Ȧ���Դϴ�\n");
	}
	// ���ǹ� switch
	// switch : �Ұ�ȣ �ȿ� �ִ� ���� case ���� �ִ� ���� ��ġ�ϸ� �ش� �κ� ����
	switch ('c') {
	case 'A':
		printf("A\n");
		break;
		switch ('B')
	case 'B':
		printf("B\n");
		break;
		switch ('C')
	case 'C':
		printf("C\n");
		break;
	default:
		printf("A,B,C �� �ƴմϴ�!\n");

	}

	// �ݺ��� while, for
	// for(ó����;����;������){�ݺ��� ����;}
	for (int i = 0; i < 5; i++) {
		printf("%d��Hello For\n", i + 1);
	}
	// while (����){������ ������ �ݺ��� ����;}
	int flag = 0;
	while (flag < 5) {
		printf("%d�� Hello while\n", flag + 1);
		flag++;
	}

	// �ݺ����� ���ؼ� 1~10 ���� ���
	num = 0;
	for (int j = 0; j < 10; j++) {

		printf("%d\n", j + 1);

		num = num + j + 1;
	}
	printf("%d", num);}
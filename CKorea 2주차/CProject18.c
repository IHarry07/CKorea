#include <stdio.h>

void main18() {

	int num1;

	printf("���̸� �Է��ϼ���\n");
	scanf_s("%d", &num1);

	if (65 < num1) {
		printf("������Դϴ�");
	}
	else if (num1 < 65 && 20 < num1) {
		printf("�����Դϴ�");
	}
	else if (num1 <= 20 && num1 >= 14) {
		printf("û�ҳ� �Դϴ�");
	}
	else {
		printf("����Դϴ�");
	}

	int num;

	printf("���� ���ص帳�ϴ�. ������ �Ẹ����\n");
	scanf_s("%d", &num);

	if (num % 4 == 0 && num % 100 != 0) {
		printf("%d���� �����Դϴ�", num);
	}
	else if (num % 400 == 0) {
		printf("%d���� �����Դϴ�.", num);
	}
	else {
		printf("%d���� ������ �ƴմϴ�.", num);
	}
}

#include <stdio.h>

void main21()
{
	// ��� : ���ǹ�, �ݺ���
	// �ݺ�Ƚ���� �����ϱ� ���ؼ��÷��װ� �ʿ�
	// while (����){������ ������ ��� ������ ����}

	//int i = 0;
	//while (i< 5) {
	//	printf("�ȳ�!\n");
	//	i++;    // i=i+1
	//}
	//int i = 0;
	//while (i < 10000000) {
	//	printf("%d\n", i + 1);
	//	i++;
	//}
	//int i = 0;
	//while (i < 5) {
	//	printf("Hello World!\n");
	//	i++;
	//}

	//int i = 1;
	//int num;
	//int sum = 0;

	//printf("��ĥ ���ڸ� �Է��ϼ���\n");          // �Է�
	//scanf_s("%d", &num);					      // ���

	//while (i <= num) {
		//sum = sum = i;
		//i++;
		//printf("%d\n",i);
	//}
	//for (int j = 1; j <= num; j++) {
		//sum = sum + j;

	//}
	//printf("1~%d�� �հ�� %d", num, sum);

	//for (int i = 0; i < 10; i++) {
	//	if (i %2==0) {
	//		continue;
	//	}printf("%d Hello World!\n",i);
	//}


	// break : �ݺ����� ����
	// continue : 1ȸ�� ���, �ؿ� �ִ� ������ �������� �ʰ� ���ǰ˻��ϴ� ������ �̵�

	int num = 5;
	int i = 1;

	for (int i = 0; i < 6; i++) {
		if (i >= 5) {
				printf("�Է�Ƚ���� �ʰ��߽��ϴ�.");
				break;
			}
		printf("��й�ȣ�� �Է��ϼ���.\n");
		scanf_s("%d", &num);
		if (num != 5) {
			printf("��й�ȣ�� ���� �ʽ��ϴ�.\n");
		}
		else {
			printf("��й�ȣ�� �½��ϴ�");
		}
		
		
	}

}
#include <stdio.h>

void main5 ()  {
	// �������� (�Ҽ��� ���� ����)
	int num;
	// �Ǽ����� (�Ҽ��� �ִ� ����)
	float fnum;
	// ���ڼ��� (�ѱ���)
	char c;
	// ���ڿ� �ʱ�ȭ (��������)
	char cc[128] = "hello world!";
    
    // ���� �� ���� = 
	num = 1;
	// �Ǽ� �� ���� = 
	fnum = 3.14;
	// ���� �� ���� = 
	c = 'g';

	// ���� ��� %d
	printf("%d\n", num);
	// �Ǽ� ��� %f
	printf("%f\n", fnum);
	// ���� ���� %c
	printf("%c\n", c);
	// ���ڿ� ��� %s
	printf("%s\n", cc);

	// ���� ���� ���
	printf("%d, %f, %c, %s\n", num, fnum, c, cc);

	

}
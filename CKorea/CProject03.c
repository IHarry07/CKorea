#include <stdio.h> 

void main3() {
	//�޸� (RAM) : ��ǻ�Ͱ� ������ �����ϴ� ����
	/*
	bit<byte<KByte<MByte<GByte<TByte
	������ ������ �� �ִ� �ּҴ��� : bit
	1bit : 0 �Ǵ� 1(�ѱ���)
	2bit : 00,01,10,11�� �ϳ��� ������ �� ����


	== �ڷ���==
	char : 1byte(-128~127)                    : �ѱ��� (����)
	short : 2byte (-32000~32000)
	int : 4byte (-21��~21��)                  : �Ҽ��� ���� ���� (����)
	long long : 8byte
	float : 4byte (-21��~21��)                : �Ҽ��� �ִ� ����(�Ǽ�)
	double : 8byte

	c��� : ���� ��ǻ�Ͱ� ���� ������ ���ڰ� �뷮�� ������ ������� ���

	== ���� ==
	���� : �����͸� ������ �� �ִ� ������� (���α׷���), ���ϴ� ��(����)

	*/

	// �ڷ��� ��������� �̸�=������ ��;
	char var1 = 'a';                                   // 1byte ������ a ��� ���ڸ� ����
	int var2 = 3;                                      // 4byte ������ 3�̶�� ���ڸ� ����
	double var3 = 3.14;                                // 8byte ������ 3.14��� �Ҽ��� �ִ� ���ڸ� ����
	char var4[100] = "�ȳ��ϼ��� �ݰ����ϴ�.";         // 1byte ������ 256�� ����
	printf("���ڴ� %d! \n", var2);
	printf("���ڴ� %c! \n", var1);
	printf("�Ҽ��� �ִ� ���ڴ� %f! \n", var3);
	printf("���ڿ��� %s! \n", var4);
	//���� : ������� 
	//�ڷ��� ������;
	int num;                //���� ���� (����)
	num = 5;                //����(�������)
	num = 8;
	num = 1;
	printf("%d", num);

	int num2 = 31111;              //���� ���� + ���� : �ʱ�ȭ (�ʱⰪ ����) 
}
#include <stdio.h>

int main27() {
	//char arr1[20] = "ȫ�浿";
	//int num1[20] = { 1,2,3 };
	//int num2[3][2] = { {1,2},{3,4},{5,6} };



	//num2[2][0] = 5;

	//printf("%d", num2[2][0]);
	//char names[5][16] = { "ȫ�浿","�ƹ���","�迵��","��ö��","����������" };

	//printf("%s�� %d���̴�", names[0],num2[2][0]);

	//// �迭 ���
	//for (int i = 0; i < 3; num1[i]) {
	//	printf("%d", num1[i]);
	//}

	char menu[6][10] = { "�Ƹ޸�ī��","����������","ī���","������","��Ϻ극��","���̽�Ƽ"};
	int price[6] = {1500,1700,2000,3000,15000,3000};
	for (int i = 0; i < 5; i++) {
		printf("%s : %d\n", menu[i], price[i]);
	}
	return 0;



}
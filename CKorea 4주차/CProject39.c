#include <stdio.h>

// ����ü
// ī���[],�޴�[],����[]
// �Լ�

typedef struct Starbucks{
	int menu_num[2];
	char* cafe_name;
	char menu_name[2][64];
	int menu_price[2];
}SB;
void MenuOrder(SB* cafe);
void MenuModify(SB* cafe);

int main() {
	int num = 0;
	struct Starbucks ������ = { {1,2},"��Ÿ���� ������",{"�Ƹ޸�ī��", "ī���"},{1500,2000} };
	struct Starbucks ����� = { {1,2},"��Ÿ���� �����",{"�Ƹ޸�ī��", "ī���"},{2000,2500} };
	struct Starbucks ������ = { {1,2},"��Ÿ���� ������",{"�Ƹ޸�ī��", "ī���"},{2000,2500} };

	MenuOrder(&������);
	MenuModify(&�����);
	MenuOrder(&�����);

	return 0;
}

void MenuOrder(SB* cafe) {
	int num = 0;
	printf("�ֹ��� �޴��� ��ȣ�� �Է��ϼ���.\n");
	scanf_s("%d", &num);
	printf("%s���� %s�� %d���� �ֹ��߽��ϴ�.\n", cafe->cafe_name, cafe->menu_name[num - 1], cafe->menu_price[num - 1]);
	if (num > 3) {
		printf("1���� 2������ �������ּ���\n");
	}
}

void MenuModify(SB* cafe) {
	int num = 0;
	int price = 0;
	printf("������ �޴��� ��ȣ�� �Է��ϼ���.\n");
	scanf_s("%d",&num);
	printf("������ �Է��ϼ���.\n");
	scanf_s("%d", &price);

	(*cafe).menu_price[num - 1] = price;


}

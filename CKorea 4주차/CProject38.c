#include <stdio.h>
// C��� : �Լ� + ������ + ����ü
// �Լ� : �ڵ��� ��ȭ�� ���
// ����ü : �ڷ����� ��ȭ�� ���
// ������ : �Լ����� ���
typedef struct MyInfo {
	char name[64];
	int age;
	float height;
}MI;

int ModifyAge(MI* person) {
	printf("���̸� �����մϴ�.\n");
	scanf_s("%d", &((*person).age));

	return 0;
}

void ModifyName(MI* person) {
	printf("�̸��� �����մϴ�.\n");
	scanf_s("%s", &*(*person).name, 64);

	return 0;
}

int main38() {
	MI ö�� = {"��ö��",20};
	MI ¯�� = {"��¯��",20};
	

	ModifyAge(&¯��);
	printf("%s, %d\n", ¯��.name, ¯��.age);

	ModifyName(&ö��);
	printf("%s, %d\n", ö��.name, ö��.age);
	ModifyAge(&ö��);
	printf("%s, %d\n", ö��.name, ö��.age);
	return 0;
}
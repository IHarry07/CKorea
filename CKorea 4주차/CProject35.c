#include <stdio.h>

// ����ü : ������ ����ü(�ϳ��� ������ ���� ���õ�  ������ ��Ƴ�)
// ĳ���� ���� ����ü

struct character {
	char *name;
	int health;
	int damage;
};

typedef struct monster {
	char name[30];
	int health;
	int damage;
	char item[64];
}mon;

int main35() {
	// ������ ĳ������
	int health1, health2;  // ü��
    char *name1, *name2;  // �̸�
	int damage1, damage2;  // ���ݷ�

	int health[500];    // ü�� �迭
	char *name[500];     // �̸� �迭 
	int damage[500];    // ���·� �迭

	struct character �����;
	struct character ��������;
	struct character ���ٳ� = { "���ٳ�", 700, 65 };

	mon ���������� = { "������ ����",5000,100,"������ ��" };
	mon ȭ���巡�� = { "ȭ���巡��", 5500, 100, NULL};


	�����.name = "�����";
	�����.health = 600;
	�����.damage = 60;

	��������.name = "��������";
	��������.health = 700;
	��������.damage = 70;


#define ĳ������ 3
	// ĳ���� ��� ���
		printf("ĳ���͸�: %s\nü��: %d\n���ݷ�: %d\n\n", �����.name, �����.health, �����.damage);
		printf("���͸�: %s\nü��: %d\n���ݷ�: %d\n������: %s\n", ����������.name, ����������.health, ����������.damage, ����������.item);
		return 0;
}
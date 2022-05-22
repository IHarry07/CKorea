#include <stdio.h>

// 구조체 : 변수의 집합체(하나의 주제를 갖고 관련된  변수를 담아놈)
// 캐릭터 정보 구조체

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
	// 게임의 캐릭정보
	int health1, health2;  // 체력
    char *name1, *name2;  // 이름
	int damage1, damage2;  // 공격력

	int health[500];    // 체력 배열
	char *name[500];     // 이름 배열 
	int damage[500];    // 공력력 배열

	struct character 이즈리얼;
	struct character 마스터이;
	struct character 쉬바나 = { "쉬바나", 700, 65 };

	mon 협곡의전령 = { "협곡의 전령",5000,100,"전령의 알" };
	mon 화염드래곤 = { "화염드래곤", 5500, 100, NULL};


	이즈리얼.name = "이즈리얼";
	이즈리얼.health = 600;
	이즈리얼.damage = 60;

	마스터이.name = "마스터이";
	마스터이.health = 700;
	마스터이.damage = 70;


#define 캐릭개수 3
	// 캐릭터 목록 출력
		printf("캐릭터명: %s\n체력: %d\n공격력: %d\n\n", 이즈리얼.name, 이즈리얼.health, 이즈리얼.damage);
		printf("몬스터명: %s\n체력: %d\n공격력: %d\n아이템: %s\n", 협곡의전령.name, 협곡의전령.health, 협곡의전령.damage, 협곡의전령.item);
		return 0;
}
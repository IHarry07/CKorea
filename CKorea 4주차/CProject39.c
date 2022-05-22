#include <stdio.h>

// 구조체
// 카페명[],메뉴[],가격[]
// 함수

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
	struct Starbucks 부평점 = { {1,2},"스타벅스 부평점",{"아메리카노", "카페라떼"},{1500,2000} };
	struct Starbucks 백운점 = { {1,2},"스타벅스 백운점",{"아메리카노", "카페라떼"},{2000,2500} };
	struct Starbucks 동암점 = { {1,2},"스타벅스 동암점",{"아메리카노", "카페라떼"},{2000,2500} };

	MenuOrder(&부평점);
	MenuModify(&백운점);
	MenuOrder(&백운점);

	return 0;
}

void MenuOrder(SB* cafe) {
	int num = 0;
	printf("주문할 메뉴의 번호를 입력하세요.\n");
	scanf_s("%d", &num);
	printf("%s에서 %s를 %d원에 주문했습니다.\n", cafe->cafe_name, cafe->menu_name[num - 1], cafe->menu_price[num - 1]);
	if (num > 3) {
		printf("1번과 2번으로 선택해주세요\n");
	}
}

void MenuModify(SB* cafe) {
	int num = 0;
	int price = 0;
	printf("수정할 메뉴의 번호를 입력하세요.\n");
	scanf_s("%d",&num);
	printf("가격을 입력하세요.\n");
	scanf_s("%d", &price);

	(*cafe).menu_price[num - 1] = price;


}

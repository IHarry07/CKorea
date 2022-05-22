#include <stdio.h>

// 구조체 Person (이름, 나이, 키, 몸무게)

struct Person {
	char* 이름;
	int 나이;
	int 키;
	int 몸무게;
};

int main36() {
	// 구조체 변수 3개(김철수, 신짱구, 홍길동)
	
	struct Person 신짱구 = { "신짱구",5,120,25 };
	struct Person 김철수 = { "김철수",13,167,47 };
	struct Person 홍길동 = { "홍길동",16,158,41 };
	
	printf("이름 : %s\n나이 : %d\n키 : %dcm\n몸무게 : %dkg\n", 신짱구.이름, 신짱구.나이, 신짱구.키, 신짱구.몸무게);
	printf("\n이름 : %s\n나이 : %d\n키 : %dcm\n몸무게 : %dkg\n", 김철수.이름, 김철수.나이, 김철수.키, 김철수.몸무게);
	printf("\n이름 : %s\n나이 : %d\n키 : %dcm\n몸무게 : %dkg\n", 홍길동.이름, 홍길동.나이, 홍길동.키, 홍길동.몸무게);

	return 0;
}

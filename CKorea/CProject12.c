#include <stdio.h>

void main12() {
	// 조건연산자 (삼항연산자)
	//(3 > 1) ? printf("맞네") : printf("아니네");

	// 1. 나이를 입력을 받아서 20이상이면 성인, 20미만이면 미성년자

	int num1;
	
	printf("\n나이를 입력해주세요\n");
	scanf_s("%d", &num1);
	(num1 >= 20) ? printf("성인입니다") : printf("미성년자입니다");
	
	// 교재 98p 1,2
	// 1. 사용자 나이를 입력받아 20살 이상이면 1250원,  20살 미만이면 800원을 받는 지하철 요금안내 프로그램

	// 2. 나이와 키를 입력받아 12살 이상, 신장이 120cm이상일때만 놀이기구 탑승을 허용하는 프로그램



	printf("\n나이를 입력하세요\n");
	scanf_s("%d", &num1);
	(num1 >= 20) ? printf("1250원 입니다\n") : ("800원 입니다\n");

	int 신장, 나이;
	printf("나이를 입력하세요\n");
	scanf_s("%d", &나이);
	(나이 >= 12) ? printf("키도 입력하세요\n"), scanf_s("%d", &신장) : printf("죄송하지만 나이제한으로 탑승하실수 없습니다");
	(신장 >= 120) ? printf("놀이기구에 탑승하실수 있습니다\n") : printf("죄송하지만 키 제한으로 탑승하실수 없습니다\n");
	
	




}
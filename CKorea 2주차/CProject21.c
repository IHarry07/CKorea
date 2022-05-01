#include <stdio.h>

void main21()
{
	// 제어문 : 조건문, 반복문
	// 반복횟수를 저장하기 위해선플래그가 필요
	// while (조건){조건이 맞으면 계속 실행할 문장}

	//int i = 0;
	//while (i< 5) {
	//	printf("안녕!\n");
	//	i++;    // i=i+1
	//}
	//int i = 0;
	//while (i < 10000000) {
	//	printf("%d\n", i + 1);
	//	i++;
	//}
	//int i = 0;
	//while (i < 5) {
	//	printf("Hello World!\n");
	//	i++;
	//}

	//int i = 1;
	//int num;
	//int sum = 0;

	//printf("합칠 숫자를 입력하세요\n");          // 입력
	//scanf_s("%d", &num);					      // 출력

	//while (i <= num) {
		//sum = sum = i;
		//i++;
		//printf("%d\n",i);
	//}
	//for (int j = 1; j <= num; j++) {
		//sum = sum + j;

	//}
	//printf("1~%d의 합계는 %d", num, sum);

	//for (int i = 0; i < 10; i++) {
	//	if (i %2==0) {
	//		continue;
	//	}printf("%d Hello World!\n",i);
	//}


	// break : 반복문을 끝냄
	// continue : 1회성 취소, 밑에 있는 문장을 실행하지 않고 조건검사하는 곳으로 이동

	int num = 5;
	int i = 1;

	for (int i = 0; i < 6; i++) {
		if (i >= 5) {
				printf("입력횟수를 초과했습니다.");
				break;
			}
		printf("비밀번호를 입력하세요.\n");
		scanf_s("%d", &num);
		if (num != 5) {
			printf("비밀번호가 맞지 않습니다.\n");
		}
		else {
			printf("비밀번호가 맞습니다");
		}
		
		
	}

}
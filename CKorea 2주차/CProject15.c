#include <stdio.h>

void main15(){
	
	
	int 나이;

	printf("나이를 입력하세요\n");
	scanf_s("%d", &나이);

	if (나이 >= 20) {
		printf("성인입니다. \n");}
	
	printf("프로그램 종료\n");

	int value = 564;

	if (value > 10) {
	printf("value는 10보다 큰 수 입니다\n");}

	printf("프로그램 종료\n"); 
	
	
	
	int age = -1;
	scanf_s("%d", &age);
	if (age >= 20) {
		printf("성인입니다\n");}
	if (age >= 0 && age < 20) {
		printf("미성년자 입니다\n");}
	if (age < 0 || age > 100) {
		printf("?\n");}
	



}
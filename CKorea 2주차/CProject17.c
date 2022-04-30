#include <stdio.h>

void main17() {


	
	int num = 15;
	if (num < 10) {
		printf("한자리 수\n");
	}
    else if (num < 100) {
		printf("두자리 수\n");
	}
	else if (num < 1000) {
		printf("세자리 수\n");
	}
	else {
		printf("그 외\n");
	} 
	
}
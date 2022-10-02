#include <stdio.h>

void main3() {
	int num;
	int 회차 = 1;
	int 합산 = 0;			//1, 2
	printf("정수를 입력하세요 : ");
	scanf("%d", &num);

	while (회차 <= num) {
		합산 += 회차;
		회차++;
	}
	printf("1부터 %d까지의 합은 %d입니다.\n", 회차-1, 합산);


	// 131
	// do ~ while 과 while 의 차이
	// do ~ while : 무조건 1번은 실행
	// while은 조건이 틀리면 실행 안함

	// 틀린 조건
	while (0 > 3) {
		printf("while 실행 안됨\n");					//무시
	}

	//do while
	do {
		printf("do~while 실행 안됨\n");					// 적어도 1회 실행
	} while (0 > 3);



}
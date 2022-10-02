#include <stdio.h>

void main0() {
	//조건문
	//if(){}\
	//else if(){}
	//else{}

	//if : ()의 내용이 맞으면 {}실행
	//else if : 위에 있는 if의 ()가 틀리고 else if의 소괄호가 맞으면 {}실행
	//else : if와 else if의 ()가 모두 틀리면 실행

	int num1 = 3;
	if (num1 != 4) {
		printf("4가 아니다\n");
	}

	//===========================================================
	
	if (num1 == 0) {
		//if의 조건이 맞을때만 실행
		printf("0과 같을 때 실행\n");
	}
	else if (num1 == 1) {
		//else if는 위에 있는 if나 else if가 모두 틀리면 실행
		printf("1과 같을 때 실행\n");
	}
	else if (num1 == 2){
		//위에 있는 if나 else if가 모두 틀리면 실행
		printf("2와 같을 때 실행\n");
	}
	else if (num1 == 3) {
		//위에 있는 if나 else if가 모두 틀리면 실행
		printf("3과 같을 때 실행\n");
	}
	else {
		//if 와 else if 모두 틀리면 실행
		printf("하나도 업을 때 실행");
	}

	// 페이지 122 1번

	int num = 3;

	if (num == 2) {
		printf("state 1\n");
	}
	else if (num > 2 && num < 4) {
		printf("state 2\n");
	}
	else if (num == 3) {
		printf("state 3\n");
	}
	else {
		printf("state 4\n");
	}

	//2번
	
	/*int num12;

	printf("정수를 입력하세요 >>>");
	scanf("%d", &num12);
	(num12 % 2) ? printf("홀수") : printf("짝수");
	*/

	int num12;

	printf("정수를 입력하세요 >>>");
	scanf("%d", &num12);

	if (num % 1) {
		printf("홀수");
	}
	else {
		printf("짝수");
	}


	
	//3번

	int num777;

	printf("\n\n나이를 입력하세요 >>>");
	scanf("%d", &num777);
	
	if (num777 < 6) {
		printf("가격은 무료입니다");
	}
	else if (num777 < 13) {
		printf("가격은 500원입니다");
	}
	else if (num777 < 19) {
		printf("가격은 900원입니다");
	}
	else if (num777 < 65) {
		printf("가격은 1250원입니다");
	}
}
#include <stdio.h>

int main123123123123123123() {

	// 조건문 : if, switch ()안에 있는 내용이 맞으면 실행
	// 반복문 : while, for
	// if : 만약 () 라면, while : ()동안

	// 안녕하세요 15번
	printf("안녕하세요\n");
	printf("안녕하세요\n");
	printf("안녕하세요\n");
	printf("안녕하세요\n");
	printf("안녕하세요\n");
	printf("안녕하세요\n");
	printf("안녕하세요\n");
	printf("안녕하세요\n");
	printf("안녕하세요\n");
	printf("안녕하세요\n");
	printf("안녕하세요\n");
	printf("안녕하세요\n");
	printf("안녕하세요\n");
	printf("안녕하세요\n");
	printf("안녕하세요\n");
	
	
	/*
	1. 15개인지 확신할 수가 없다.
	2. 개수가 많아질수록 관리가 힘들어진다.

	--> 반복문
	*/

	//반복문 1
	int num1 = 3;
	int 횟수 = 0;

	while (횟수 < 3) {
		// () : 조건
		// {} : 내용 --> 조건이 맞으면 실행 --> 실행했으면 조건 검사하는 부분으로 되돌아감
		if (num1 < 10) {
			printf("10보다 작다\n");
		}
		//무한반복을 피하기 위해 값을 증감시켜 언젠가 조건을 틀리게 해줘야함

		// 3번만
		횟수 ++;				// 조건에 들어있는 변수를 내부에서 변경
	}
	/*
	int num = 0;

	while (num < 3) {
		printf("num is %d now\n", num);
		num++;
	}
	*/
	/*
	int num = 0;

	while (num != -1) {
		printf("숫자를 입력하세요(-1입력시 종료):");
		scanf("%d", &num);
		if (num == -1)
			printf("종료합니다.");
		else {
			printf("%d을(를) 입력하셨네요. \n", num);
		}
	}
	*/

	int num;

	while (1) {
		printf("무한 반복중.. 숫자를 입력하세요:");
		scanf("%d", &num);
		printf("%d을(를) 입력하셨네요\n", num);
	}

	return 0;

}
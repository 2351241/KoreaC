#include <stdio.h>

int main1() {
	// while로 3번 반복하기
	int num1 = 0;
	while (num1 < 3) {
		printf("while [%d]\n", num1);
		num1++;

	}


	// for로 3번 반복하기
	for (int num2 = 0; num2 < 3; num2++) {
		printf("for [%d]\n", num2);
	}


	//  while 또는 for가 사용할 수 있는 문법
	// 1. break; 반복문 강제 종료
	// 2. continue; 조건검사로 돌아감
	for (int num3 = 0; num3 < 3; num3++) {
		break;				//자신을 감싸고 있는 반복문을 종료
		printf("break[%d]\n", num3);
	}

	for (num1 = 0; num1 < 3; num1++) {
		continue;			//continue를 만나는 순간 밑에 부분 무시하고 증감 및 조건검사하는 부분으로 올라감
		printf("continue[%d]\n", num1);
	}

	for (num1 = 0; num1 < 3; num1++) {
		if (num1 == 1) {
			continue;			//밑에 부분 무시하고 위로 올라감
		}
		printf("continue +if[%d]\n", num1);
	}

	for (num1 = 0; num1 < 5; num1++) {
		if (num1 == 1) {
			break;			//반복문 강제종료
		}
		printf("continue +if[%d]\n", num1);
	}

	for (num1 = 0; num1 < 3; num1++) {
		if (num1 == 2) {
			printf("숫자는 2\n");    //반복문 안에서 조건문 : 안에 조건문 실행이 끝나고 반복문 마저 실행
		}
		printf("반복문 실행 중! \n");
	}

	for (num1 = 0; num1 < 3; num1++) {
		for (int num4 = 0; num4 < 3; num4++) {
			printf("반복문 안에꺼 실행중[%d]\n", num4);			//반복문 안에서 반복문: 안에 반복문 실행이 끝나고 (바깥)반복문 마저 실행
		}
		printf("================반복문 바깥거 실행중 [%d]\n================", num1);
	}





	return 0;
}
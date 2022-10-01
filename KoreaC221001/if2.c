#include <stdio.h>

void main123() {
	// 홀수면 홀수
	// 짝수면 짝수
	int num = 0;

	// 조건문 if(){}
	// 소괄호 안에 내용이 맞으면 {}를 실행하고
	// 소괄호 안에 내용이 틀리면 {}를 무시한다.
	// ()안에는 조건을 적고, {}안에는 조건이 맞을때만 실행할 코드를 적는다.
	if (num % 2 == 0)
	{
		printf("짝수\n");
	}

	if (num % 2 == 1)
	{
		printf("홀수\n");
	}

	// 교재 105

	num = 3;
	if (num < 3) {
		printf("num is smaller than 3!");
	}
	if (num == 3) {
		printf("num is 3!");
	}
	if (num > 3) {
		printf("num is bigger than 3");
	}

	if (num < 3) {
		// if가 맞았을 때
		printf("3보다 작다!");
	}

	else {
		//if가 틀렸을 때
		printf("if조건이 틀렸다, 그러므로 3보다 크거나 같다.");
	}

	//age라는 변수를 만들고,
	//20이상이면 성인, 20미만이면 미성년자

	int age = 23;

	if (age >= 20) {
		printf("\n성인");
	}
	else {
		printf("미성년자");
	}

	// 10보다 작으면 어린이
	// 10 ~ 19이면 10대
	// 20 ~ 29이면 20대
	// 30 ~ 39이면 30대
	// 기타
	age = 22;

	if (age < 10) {
		printf("\n어린이");
	}
	else if (age < 20) {
		//if가 틀리면 그 다음 검사할 if
		//위에 if가 맞았다면 무시됨
		printf("\n10대");
	}
	else if (age < 30) {
		//if가 틀리면 그 다음 검사할 if
		//위에 if가 맞았다면 무시됨
		printf("\n20대");
	}
	else {
		// if와 else if 모두 틀리면 실행
		printf("\n그 밖에 기타");
	}

}
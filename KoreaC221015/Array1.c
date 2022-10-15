#define _CRT_SECURE_NO_WARNING
#include <stdio.h>

int main123() {
	//배열: 변수를 뭉쳐놓은 것
	
	/*
	char arr1[100];			//char변수 100개 뭉쳐놓음


	// 왜 뭉쳐놓냐?
	// 1. 변수를 여러개 만들기 번거로움(변수명 100개 짓기 어려움)
	// 2. 하나의 변수명으로 여러개의 값을 관리하기 위해서(ex. 카페메뉴 변수명 100개 -> 변수명 1개)
	// 3. 배열의 장점은 반복문을 통해서 전체 조회가 가능 (변수를 100개 따로 만들면 전체 보여주기 불가능)

	int num1 = 0;
	int num2 = 10;
	int num3 = 100;


	//100개면 100번 해줘야함

	printf("%d\n", num1);
	printf("%d\n", num2);
	printf("%d\n", num3);

	int num[3] = {1, 10 ,100};			//0번 ~ 9999번

	for (int i = 0; i < sizeof(num)/sizeof(int); i++) {
		printf("%d", num[i]);
	}

	char str1[100] = { 'h','i','\0'};
	char str2[100] = "hi";
	int num1[100] = { 0,1,2,3 };
	float fNum1[100] = { 0.0f, 1.0f, };

	//page 150
	int numbers[3] = { 1,2,3 };
	char characters[] = { 'a','b','c','d','e' };		//처음에 준 5개만큼 공간이 생성됨

	numbers[0] = 0;
	numbers[1] = 10;
	numbers[2] = 33;


	printf("%d\n", numbers[0]);
	printf("%d\n", numbers[1]);
	printf("%d\n", numbers[2]);
	
	// num[0] == num1
	// num[1] == num2
	// num[2] == num3
	// num[3] == num4
	// num[4] == num5
	// num[5] == num6

	//정수를 사용할 때
	//num1;   --> num[0]
	//num1 = 10; --> num[0] = 10;

	*/
	//page 152, 154
	int i;
	int odd[3];
	int even[5] = { 2,4,6,8,10 };
	odd[0] = 1;
	odd[1] = 3;
	odd[2] = 5;

	printf("%d %d %d\n", odd[0], odd[1], odd[2]);

	for (i = 0; i < 5; i++) {
		printf("%d", even[i]);
	}
	printf("\n");

	// 배열 방개수 구하는 법
	// sizeof(배열명)/sizeof(자료형)

	char greet[] = "Hello, Guys!";
	printf("1차원 배열 greet의 길이는 : %d\n", sizeof(greet));

	//page 158 1번

	int a;
	int num456[5] = { 1,2,3,4,5 };
	int total = 0;

	for (a = 0; a < 5; a++) {
		total += num456[a];
	}
	printf("총합은 %d이고, 평균은 %f입니다.", total, (float)total / 5);

	// 2번
#define ARR_SIZE 10000
	char eng[10000] = { 0, };				//0~9999
	char oper[10000] = {0,};

	printf("\n영단어 입력:");
	scanf("%s", eng);

	for (int i = 10000; i > 0; i--) {
		if (eng[i-1] == 0) {
			continue;
		}
		oper[10000-i] = eng[i-1];
		printf("%c", oper[10000 - i]);
	
	}
	
	

	// 3번
#define ENG_SIZE   100
	
	char ee[ENG_SIZE];
	char bk = 0;
	scanf("%s", ee);
	printf("영어단어 입력 :");
	scanf("%s", ee);
	bk == ee[0];
	for (int i = 0; i < ENG_SIZE; i++) {
		if (i == ENG_SIZE - 1) {
			break;
		}
		if (ee[i] >= ee[i + 1]) {
			ee[i + 1] == ee[i];
		}
		else { bk = ee[i + 1]; }
	}

	printf("아스키코드가 가장 큰 문자 : %c", bk);

	int num[10000];
	//9999번까지 있음

	return 0;
}
#define _CRT_SECURE_NO_WARNINGS					//_s 검출설정 제거
//#define 설정값 조정
#include <stdio.h>
#define THREE			3				// THREE를 쓰면 3이라고 인식하게끔 설정값 세팅 (전처리기)

int main123() {
	//page 140
	/*
	int num;

	while (1) {
		printf("-1입력시 종료:");
		scanf("%d", &num);
		if (num == -1)
			break;
	}
	// page 141
	for (num = 1; num <= 5; num++) {
		if (num == 3)
			continue;
		printf("%d\n", num);
	}
	*/
	/*
	char ascil1 = '\0';			//NULL문자 (비어있다)
	if (ascil1 == 0) {
		printf("널문자는 0과 같네요");
	}

	char ascil2 = 'a';
	printf("소문자 a는 %d과 같습니다.\n", ascil2);			//97
	
	char ascil3 = 'A';
	printf("대문자 A는 %d과 같습니다.\n", ascil3);			//65
	if (ascil3 <= 97) {
		printf("대문자\n");
	}
	*/
	//대문자 : 65 ~ 90
	//소문자 : 97 ~ 122 

	char ascil0 = 0;
	while (1) {
		printf("입력하세요:");
		scanf("%c", &ascil0);
		if (ascil0 <= 90) {
			printf("[%c]을 입력했습니다. 종료합니다.\n", ascil0);
			break;
		}
		printf("[%c]을 입력했습니다.\n", ascil0);
		rewind(stdin);						//scanf 다시 사용할때 char형은 버그가 있어서 해줘야함.
	}

	
	int 피연산자1 = 0;
	char ascil1 = '\0';
	int 피연산자2 = 1;
	while (1) {
		printf("피연산자 1 :");
		scanf("%d", &피연산자1);
		printf("연산자 :");
		rewind(stdin);
		scanf("%c", &ascil1);
		printf("피연산자 2 :");
		scanf("%d", &피연산자2);
		if (ascil1 == 42) {
			printf("%d * %d=%d\n", 피연산자1, 피연산자2, 피연산자1 * 피연산자2);
		}
		else if (ascil1 == 43) {
			printf("%d + %d=%d\n", 피연산자1, 피연산자2, 피연산자1 + 피연산자2);
		}
		else if (ascil1 == 45) {
			printf("%d - %d=%d\n", 피연산자1, 피연산자2, 피연산자1 - 피연산자2);
		}
		else if (ascil1 == 47) {
			printf("%d / %d=%d\n", 피연산자1, 피연산자2, 피연산자1 / 피연산자2);
		}
	
	}





	return 0;
}
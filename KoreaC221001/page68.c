#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main2(){
	int num1, num2, num3;
	float fnum1, fnum2;

	printf("세 개의 정수 입력 : ");
	scanf("%d %d %d", &num1, &num2, &num3);
	printf("입력된 정수들 : %d %d %d \n", num1, num2, num3);

	printf("실수, 정수, 실수, 차례대로 입력 : ");
	scanf("%f %d %f", &fnum1, &num1, &fnum2);
	printf("입력된 값들 : %0.2f %d %0.2f \n", fnum1, num1, fnum2);


	// #define이란? 설정값 셋팅
#define My_NUMBER			"123"
	//MY_number라고 적으면 123을 적은것처럼 동작함
	printf("%s \n", My_NUMBER);

	char my_str[100];
	scanf("%s", my_str);
	printf("내가 입력한 글은 %s", my_str);
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main2() {

	// 배열 : 여러개의 변수를 하나로 관리하기 위해 
	int num[3] = { 1, 2, 3 };
	// 포인터 : 변수의 주소를 저장하는 변수
	int num1 = 10;
	int* p_num1 = &num1;				// & : 주소

	p_num1 = &(num[0]);			// num의 첫번째 방의 주소를 저장

	printf("첫번째 방의 주소 : %p\n", p_num1);
	printf("배열의 이름 : %p\n", num);
	printf("첫번째 방의 주소 : %p\n", &num[0]);
	printf("두번째 방의 주소 : %p\n", &num[1]);
	printf("세번째 방의 주소 : %p\n", &num[2]);


	char str[50];
	scanf("%s", str);					// 배열의 이름은 첫번째 칸의 주소를 나타냄

	scanf("%d", &num1);					// 일반변수는 주소 표시를 해줘야함


	return 0;
}
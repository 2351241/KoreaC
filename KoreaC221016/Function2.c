#include <stdio.h>
#include "Function2.h"



int getbigger(int n1, int n2) {
	if (n1 > n2) {
		return n1;
	}
	else if (n1 < n2) {
		return n2;
	}
	else {
		return 0;
	}
}



void guide(void) {
	printf("inputNumber 함수를 통해 정수를 입력할 수 있습니다.\n");
	printf("또한 printNumber 함수를 통해 입력한 정수를 출력할 수도 있습니다.\n");
}

void printNumber(int num) {
	printf("당신이 입력한 정수는 %d입니다.\n", num);
}

int inputNumber(void) {
	int num;
	printf("정수를 입력하세요:");
	scanf("%d", &num);

	return num;
}

int main3(void) {

	guide();
	int num = inputNumber();
	printNumber(num);
	num = inputNumber();
	printNumber(num);

	return 0;
}
int add(int a, int b) {


	return a + b;
}
#include <stdio.h>

//num1과 num2의 값을 서로 바꾼다.
void Swap1(int a_num1, int a_num2) {
	int bk = a_num1;
	a_num1 = a_num2;
	a_num2 = bk;

	printf("함수내부에서 num1 : %d, num2 : %d\n", a_num1, a_num2);

}

void Swap2(int* p_num1, int* p_num2) {
	int bk = *p_num1;			// bk = num1
	*p_num1 = *p_num2;			// num1 = num2
	*p_num2 = bk;				// num2 = bk
}

void swapNumber(int* ptr1, int* ptr2) {

	int temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
	printf("함수 안에서 확인한 결과, num1 : %d, num2 : %d\n", *ptr1, *ptr2);
}


int main2() {

	// 함수의 매개변수 : 값을 전달
	int num1 = 3, num2 = 4;

	printf("num1 : %d, num2 : %d\n", num1, num2);
	//Swap1(num1, num2);			// main에 있는 num1과 Swap의 num1은 다른 공간, 값만 전달
	Swap2(&num1, &num2);			// 값이 아닌 주소를 전달
	printf("num1 : %d, num2 : %d\n", num1, num2);

	// 매개변수에 공간 자체를 전달하려면? -> 포인터
	// 값을 전달 -> 주소(위치)를 전달

	int number1 = 33, number2 = 99;
	swapNumber(&number1, &number2);
	printf("함수 호출 완료 후 확인한 결과, number1 = %d, number2 : %d\n", number1, number2);

	return 0;
}
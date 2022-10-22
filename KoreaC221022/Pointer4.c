#include <stdio.h>

int main4() {
	// 포인터 배열 (포인터값을 저장하는 배열)
	int num1 = 1;
	int num2 = 2;
	int num3 = 3;
	int* p_num1 = &num1;
	int* p_num2 = &num2;
	int* p_num3 = &num3;

	int num[3] = { num1, num2, num3 };				// 정수를 담고있는 배열
	int* p_num[3] = { p_num1, p_num2, p_num3 };					// 주소를 담고있는 배열


	int n1 = 3, n2 = 6, n3 = 9;

	int* ptr1 = &n1;
	int* ptr2 = &n2;
	int* ptr3 = &n3;

	int* parr[3] = { ptr1, ptr2, ptr3 };

	printf("%d %d %d\n", *parr[0], *parr[1], *parr[2]); // 역참조
	printf("%p %p %p\n", parr[0], parr[1], parr[2]); // 저장된 주소값

	// page 181 #1

	int arr[5] = { 10, 20, 30, 40, 50 };
	int*arr_ptr = arr;
	printf("%d %d %d %d %d\n", *arr, *(arr + 1), *(arr + 2), *(arr + 3), *(arr + 4));
	printf("%d %d %d %d %d\n", arr[0], arr[1], arr[2], arr[3], arr[4]);		// 줄인말 (배열이 0부터 시작하는 이유)

}
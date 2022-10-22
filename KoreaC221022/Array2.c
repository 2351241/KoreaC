#include <stdio.h>

int main() {
	
	int i, j;
	int arr[2][3] = {
		{1,2,3},
		{4,5,6}
	};

	for (i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++) {
			printf("%d", arr[i][j]);
		}
		printf("\n");
	}

	for (i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++) {
			arr[i][j] = 10;
		}
	}


	for (i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++) {
			printf("%d", arr[i][j]);
		}
		printf("\n");
	}

	int array2[2][3] = {
		{1,2,3},
		{4,5,6}
	};

	// 포인터 배열
	// 배열은 값을 담기도 하지만 주소도 담을 수 있다.
	//int(*p_array2)[3] = array2;				// 2차원배열
	//int p_array2[][3] = array2;// 2행 3열
	
	char* str1 = "hello";
	char str[] = "hello";


// page 191
	int __arr[2][3] = {
		{1,2,3},
		{4,5,6} };
	int _i, _j;

	int(*arrptr)[3] = __arr;

	for (_i = 0; _i < 2; _i++)
	{
		for (_j = 0; _j < 3; _j++) {
			printf("%d", arrptr[i][j]);
		}
		printf("\n");
	}
	

	char bingo[3][3];
	int a, b;
		for (a = 0; a < 3; a++) {
			for (b = 0; b < 3; b++) {
				if (a == b) {
				bingo[a][b] = 'O';
			}
				else { bingo[a][b] = 'X'; }
		}
		printf("\n");
	}
	
	

	int(*_arrptr)[3] = bingo;

	for (a = 0; a < 3; a++) {
		for (b = 0; b < 3; b++) {
			printf("%c", bingo[a][b]);
		}
		printf("\n");
	}


	


	return 0;
}
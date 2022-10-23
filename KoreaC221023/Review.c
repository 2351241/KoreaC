#include <stdio.h>

// int : return값의 자료형
// Add : 함수의 이름
// () : 매개변수, 사용하는 곳에서 넘겨줄 값을 미리 정해놓음
int Add(int num1, int num2) {
	return num1 + num2;
	// return : 함수가 끝날 때 사용하는 곳에 알려줄 값
	// return을 실행하면 함수가 바로 종료가 된다.
	int num;				// return을 실행하면 함수가 바로 종료됨, int num은 실행 x
	printf("%d\n", num);			// 죽은 코드
}

int main0() {
	// 변수 : 저장공간
	int num = 0;		// 변수 선언 및 초기화

	// 배열 : 변수를 하나의 이름으로 뭉쳐놓음
	int nun_arr[5] = { 1,2,3,4,5 };

	// 포인터 : 변수의 주소를 저장하는 공간
	int* p_num = &num;
	*p_num = 5;
	printf("%d\n", num);

	// 함수 : 내가 만드는 기능(코드저장 -> 코드 재활용)
	3 + 5;					// C언어 제공기능
	Add(3, 5);				// 사용자 정의기능(함수)

	// 이차원 배열과 이중포인터
	// 이중포인터 : 포인터 변수의 주소를 저장하는 공간
	int** pp_num = &p_num;
	// 이차원배열 : 배열을 묶는 배열
	int num_arr[2][5] = 
	{
		{1,2,3,4,5},
		{5,6,7,8,9}
	};

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%d", num_arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}
#include <stdio.h>

int main5() {
	// 배열 : 변수를 뭉쳐놓은 것
	int num[3] = { 1,2,3 };

	// 이차원 배열 : 배열을 뭉쳐놓은 것
	int dnum[2][3] = {
		{1,2,3},
		{4,5,6}
	};

	num[0] = 1;
	num[1] = 2;
	num[2] = 3;
	// 반복문 돌릴때 []의 값을 늘려주면댐
	
	dnum[0][0] = 1;
	dnum[0][1] = 2;
	dnum[0][2] = 3;
	dnum[1][0] = 4;
	dnum[1][1] = 5;
	dnum[1][2] = 6;
	// 반복문 돌릴때 앞쪽[]는 고정해놓고 뒤쪽 []를 먼저 늘려주기

	// 1차원 배열 전부보기
	for (int i = 0; i < 3; i++) {
		printf("%d\n", num[i]);
	}

	// 2차원 배열 전부보기
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			printf("%d\n", dnum[i][j]);
			// 반복문 안에 반복문이 있을 때 : 안쪽 반복문을 만날때마다 다 해결하고 진행
			// 반복문 안에 조건문이 있다 : 조건문 만날때마다 실행하고 나머지 마저 실행

			//i = 0 일때 반복문 계속해서 실행
			//i = 1 일때 반복문 계속해서 실행
		}
	}


	return 0;
}
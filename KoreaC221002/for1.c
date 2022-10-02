#include <stdio.h>

int main() {
	//반복문 : while, for

	int flag = 0;					//기준점
	while (flag < 3) {
		printf("%d번", flag);
		printf("\n");

		flag++;				//기준점 변경(무한반복을 피하기 위해)
	}

	// while : 변수도 따로 만들어 줘야하고, 기준점도 증감시켜줘야함
	// for : 기준점 관련된 것은 한 곳에 뭉쳐두자 (생김새만 다름)
	for (int plat = 0; plat < 3; plat++) {
		printf("%d번", plat);
		printf("\n");
	}

	/*
	for(초기값; 조건식; 증감량;){
	반복할 내용;
	}
	*/


	// 135
	// i = i +1; i += 1; i++;
	/*
	int i;

	for (i = 0; i < 3; i += 1) {
		if (i < 2) {
			printf("22");				//반복문 안에서 if 사용 가능
		}
		printf("i is % d now\n", i);
	}
	/*
	
	*/
	/*
	1. for문 사용해서 1~10 출력
	2. 짝수만 출력
	*/
	/*
	for (int a = 1; a < 11; a+=1) {
		if (a % 2 == 0){
		printf("\n%d", a);
		}
	}
	*/
	// 143 page
	for (int b = 1; b <= 100; b += 1) {
		if (b % 6 == 0) {
			printf("\n%d ", b);
		}
	}
	return 0;
}
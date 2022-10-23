#include <stdio.h>

// 자기자신을 사용하는 함수 (재귀함수)
int CallSelf1(int count) {
	printf("Callself 사용\n");
	if (count != 5) {
		CallSelf1(count + 1);
	}				// 자기 자신을 사용
	return 0;

}

// 247 페이지
int sayHello(int count) {
	printf("Hello!\n");
	if (count != 3) {
		sayHello(count + 1);
	}
	return 0;
}


int main3() {


	CallSelf1(1);
	//sayHello(1);

	return 0;
}
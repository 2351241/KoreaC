#include <stdio.h>

int number = 0;

void __printNumber(void) {
	printf("전역 변수 number는 %d을 저장하고 있다.\n", number);

	//함수에 return이 없을 때 함수의 자료형은 void

}



void __staticNumber() {
	// static 변수 (데이터영역)	
	static int s_number = 4;					// static변수 (지역에서 생성되나 프로그램 종료될 때 삭제됨)
	s_number++;
	printf("%d\n", s_number);
}

void increaseNumber() {
	static int number = 0;
	number++;
	printf("number :%d\n", number);
}


int main5() {

	int number = 3;				//지역변수(만약 지역변수의 이름이 전역변수와 같으면 지역변수를 우선으로 사용)
	printf("지역 변수 number는 %d를 저장하고 있다.\n", number);  // 전역변수가 사용 안되고 지역변수가 사용됨
	__printNumber();


	__staticNumber();
	__staticNumber();
	__staticNumber();

	increaseNumber();
	increaseNumber();
	increaseNumber();
	increaseNumber();
	increaseNumber();
	


	return 0;
}

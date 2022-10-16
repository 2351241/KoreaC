#include"Function2.h"


int g_num = 3;			// 전역변수 (프로그램 종료시에 삭제되는 변수)
// 지역변수 (함수 종료시에 삭제되는 변수)
// 전역변수로 모두 사용 시 프로그램 성능 저하
// 전역변수 데이터이라는 공간에 생성, 지역변수는 스택이라는 공간에 생성(데이터는 공간이 적고, 스택은 공간이 크다)

//변수는 {}안에서 만들어지면 해당 {}를 벗어나면 삭제된다.
int localFunc(int num) {
	int num3 = 1;				// localfunc 안에서만 사용 가능한 변수
	//printf("%d\n", num2);			// main에서 만들어지고 없어지는 변수 -- 지역변수
	printf("%d\n", g_num);			
	
	
	if (num > 90) {
		num++;
	}


	int result = 0;
	return result + num;
}


int main4() {

	int num2 = 0;		// main 안에서만 사용 가능한 변수
	//printf("%d\n", num3);			// localFunc에서 만들어지고 없어지는 변수 -- 지역변수
	printf("%d\n", g_num);			
	


	//조건문, 반복문 안에서 만든 변수
	if (num2 == 0) {
		int num4 = 5;
	}
	//printf("%d\n", num4);

	int num = 5;
	int result = localFunc(num);

	printf("결과 : %d\n", result);

	


	return 0;				//main의 리턴은 프로그램이 종료될 때 알려줄 메시지
}
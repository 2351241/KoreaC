#include <stdio.h>


// 함수 : 코드를 저장하는 기술(내가 만들어놓은 코드를 언제든지 재사용할 수 있게 백업)
// 1. 재사용
// 2. 사용자 정의 연산자 (가능)



// 절댓값더하기라는 이름으로 코드를 백업하고 값을 전달받고 동작 후에 결과를 알려준다.
// () : 값을 전달받는 매개변수들(임시변수)
// return : 옆에 적은 값을 사용한 곳에 전달(결과 알려주기)
// 함수 왼쪽에 자료형 : 함수의 자료형, return의 자료형과 일치해줘야함

int 절댓값더하기(int n1, int n2) {
	// 절댓값으로 더하기(음수면 양수로 바꾼다음 더하기)
	int result = 0;
	
	if (n1 < 0) {
		n1 = n1 * -1;
	}

	if (n2 < 0) {
		n2 = -n2;
	}

	result = n1 + n2;
	return result;		//결과값을 사용한 곳에 전달
}


int 제곱승(int value, int n) {
	int result = 0;
	switch (n) {
	case 0:
		result = 1;
		break;
	case 1:
		result = value;
		break;
	case 2:
		result = value * value;
		break;
	case 3:
		result = value * value * value;
		break;
	}

	return result;
}

int main2() {
	int num1 = 3;
	int num2 = -4;
	int result = 0;
	
	result = num1 + num2;

	result = 절댓값더하기(num1, num2);			// 내가 정한 기호 
	printf("절댓값 더하기의 결과는 %d\n", result);



	// 제곱하기
	int result1 = 제곱승(num2, 2);
	printf("제곱결과 : %d", result);
	
	// 세제곱하기
	int result2 = 제곱승(num2, 3);
	printf("세제곱결과 : %d", result);

	// 제곱한 것과 세제곱한 것의 절댓값 더하기
	result = 절댓값더하기(result1,result2);
	printf("절댓값의 합은 %d", result);





	return 0;
}
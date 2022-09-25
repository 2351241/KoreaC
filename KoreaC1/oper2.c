#include <stdio.h>

void main() {
	int number1 = 3 + 4 + 5;
	int number2 = 3 + 4 * 5;			// 23
	int number3 = (3 + 4) * 5;			// 35
	float number4 = number3 / 3.0f;			// 11.xxxx

	//page 86 #3

	int korea = 86;
	int english = 75;
	int math = 88;
	int society = 60;
	int science = 97;

	float average = (korea + english + math + society + science) / (float)5;

	printf("평균은 %.2f입니다.\n", average);

	//문제 #2
	float num1 = 136.4f;
	float num2 = 37.11f;

	int a = (int)num1 % 10;
	int b = (int)num2 % 10;

	printf("%d\n", a);
	printf("%d\n", b);

	// 일의자리 수만 변수로 저장해서 출력

	// 문제 #3
	// 바구니가 몇개 필요할까
	// 바구니가 한개에 복숭아 10개가 들어간다.
	// 바구니가 몇개 필요한지 계산하는 코드를 만들어주세요.

	int 복숭아1 = 33;
	int 복숭아2 = 17;

	int 바구니1 = 복숭아1 / 10 +1;
	int 바구니2 = 복숭아2 / 10 +1;


	printf("\n\n%d\n", 바구니1);
	printf("%d", 바구니2);
}
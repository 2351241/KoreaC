#include <stdio.h>

void main4() {
	char name[] = "홍길동";
	int age = 23;
	float weight = 79.3;
	int height = 180;
	char gender = 'M'; //char : 한글자(영어)

	printf("%s는 %d살이고 몸무게는 %fkg, 키는 %dcm, 성별은 %c입니다.", name, age, weight, height, gender);

	int number1 = 3;
	printf("\n%d\n", number1);
	int number2 = 5;
	printf("%d\n", number2);

}
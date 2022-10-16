#include <stdio.h>

//page 237 2번

int Sum(int n1, int n2) {
	int result123 = 0;
	int total = 0;

	for (int i = n1+1; i < n2; i++) {
		total += i;
	}
	return total;
}

//page 237 3번

int __num(int n1) {
	int result123123 = 0;

	for (int i = n1; i <= n1 + 200; i++) {
		if ( % 7 = 0) {

		}
	}

}

int main() {
	int num1 = 5;
	int num2 = 9;

	int result123 = 0;

	result123 = Sum(num1, num2);

	printf("%d와 %d사이의 정수의 총합은 %d\n", num1, num2, result123);
}
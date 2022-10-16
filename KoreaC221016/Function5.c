#include <stdio.h>

int Plus(int n1, int n2) {
	int __result;

	
	__result = n1 + n2;

	return __result;
}

int minus(int n1, int n2) {
	int __result1;


	__result1 = n1 - n2;

	return __result1;
}

int multi(int n1, int n2) {
	int __result2;


	__result2 = n1 * n2;

	return __result2;
}

int divide(int n1, int n2) {
	int __result3;


	__result3 = n1 / n2;

	return __result3;
}

int main12334() {

	int __result = 0;
	int __result1 = 0;
	int __result2 = 0;
	int __result3 = 0;

	__result = Plus(3,5);

	printf("더하기 값은 %d\n", __result);

	__result2 = multi(4, 5);

	printf("곱하기 값은 %d\n", __result2);

}

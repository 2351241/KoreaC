#include <stdio.h>

int getDiffByValue(int num1, int num2) {
	int result = 0;

	result = num1 - num2;

	return result;
	
}

int CallDiffByRef(int*p_num1, int*p_num2) {
	int bk = 0;
	if (*p_num1 < *p_num2) {
		bk = *p_num1;
		*p_num1 = *p_num2;
		*p_num2 = bk;
	}
	

}

int recursiveSum(int n) {
	static int total = 0;
	total += n;
	if(n!=0){
	recursiveSum(n - 1);
}

	return total;
}

int main4() {
	// page 250 #1

	int number1 = 2, number2 = 10;
	int result___ = 0;
	result___ = getDiffByValue(number1, number2)  ;
	printf("%d - %d = %d\n", number1, number2, result___);
	CallDiffByRef(&number1, &number2);
	printf("num1 : %d, num2 : %d", number1, number2);

	// page 251 #2
	int n;
	printf("n을 입력하세요 : ");
	scanf("%d", &n);
	int result2 = recursiveSum(n);
	printf("1부터 n까지의 합 : %d\n", result2);
	return 0;

	return 0;
}
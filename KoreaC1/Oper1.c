#include <stdio.h>

void main1(){
	//연산 기능을 담당하는 연산자

	// 대입연산자 = 
	// 산술연산자 +, -, *, /, %
	// 비교연산자 >, <, ==, >=, <=, !=
	// 증감연산자 +=, -=, ++, --, *=, /=, %=
	// 논리연산자 &&, ||, !
	
	/* 대입연산자 */
	// 대입연산자 = : =을 기준으로 오른쪽에 있는 값을 왼쪽에 적힌 변수에 저장한다.
	int n1 = 0;
	n1 = 33;

	/* 산술연산자 */
	// 산술연산자 +,*,-,/ : 산술기능
	int result1 = n1 + 30;				// 더하기
	int result2 = n1 - 30;				// 빼기
	int result3 = n1 * 30;				// 곱하기
	int result4 = n1 / 30;				// 나누기
	int result5 = n1 % 30;				// 30으로 num1을 나눈 나머지를 구해주는 기호

	//page 74 예제
	int num1 = 7,
		num2 = 3;
	printf("%d + %d = %d\n", num1, num2, num1 + num2);
	printf("%d - %d = %d\n", num1, num2, num1 - num2);
	printf("%d * %d = %d\n", num1, num2, num1 * num2);
	printf("%d / %d = %d\n", num1, num2, num1 / num2);
	printf("%d %% %d = %d\n", num1, num2, num1 % num2);

	printf("result : %d %d %d %d %d\n", result1, result2, result3, result4, result5);

	/* 비교 연산자 */
	// 비교연산자 >,<,>=,<=,==,!= : 비교를 해서 맞으면 1, 틀리면 0으로 결과를 알려준다.
	// num1 == 7, num2 == 3
	// 같다 ==
	5 == 5;			// 1(맞았다)
	3 == 5;			// 0(틀렸다)
	num1 == 7;      // 1
	num1 == 3;      // 0
	num1 == num2;   // 0 (틀렸다)
	printf("%d\n", num1 == num2);			// 0
	printf("%d\n", num1 == 3);				// 1

	//다르다 !=
	num1 != num2;
	num2 != 3;
	printf("%d\n", num1 != num2);			// 1
	printf("%d\n", num1 != 3);				// 0

	// page 79 비교연산자
	int a = 10, b = 11;

	printf("a == b : %d\n", a == b);
	printf("a > b : %d\n", a > b);
	printf("a < b : %d\n", a < b);
	printf("a >= b : %d\n", a >= b);
	printf("a <= b : %d\n", a <= b);
	printf("a != b : %d\n", a != b);

	/* 누적&증감 연산자*/
	// 누적/증감연산자 +=, -=, *=, /=, ++, --
	n1 = n1 + 30;					//n1의 값에 30을 더하고 n1공간에 저장

	// 주의할점 : =을 기준으로 오른쪽의 변수는 안에 들어있는 값으로, 왼쪽의 변수는 공간의 개념으로 사용
	n1 = n1;					//같다의 표시 X -> n1안에 값을 n1공간에 담는다
	// =을 기준으로 왼족은 공간의 n1, 오른쪽은 들어있는 값의 n1

	int n2 = 1;
	n2 = n2 + 1;       //n2 = 1+1;
	n2 + 1;			
	printf("결과는 %d\n", n2);

	n2 = n2 + 1;			//n2 += 1;
	n2 = n2 - 1;			//n2 -= 1;
	n2 = n2 * 2;			//n2 *= 2;
	n2 = n2 / 2;			//n2 /= 2;

	//page 77
	num1 = 3;
	num2 = 4;

	num1 += 3;
	num2 *= 4;

	printf("num1 += 3의 결과 : %d\n", num1);
	printf("num2 *= 4의 결과 : %d\n", num2);

	//증감연산자 ++, --
	n1 = 0;
	n1 = n1 + 1;
	n1 += 1;
	n1++;          // ++n1;

	n2 = 5;
	n2 = n2 - 1;
	n2 -= 1;
	n2--;				//--n2;

	// ++기호를 앞에 쓰면 우선적용
	// ++기호가 뒤에 있으면 문장 끝나고 ;후에 적용(증가)
	// 해당 변수의 값에 1을 더함

	n1++;					//n1 = n1 + 1;
	int n3 = 0;
	//n3++;
	printf("%d\n", ++n3);
	// n3 == 1;

	//page 81 예제
	a = 10, b = 10;

	printf("a :%d\n", a);
	printf("a :%d\n", ++a);
	printf("a :%d\n", a);

	printf("b :%d\n", b);
	printf("b :%d\n", b++);
	printf("b :%d\n", b);

	/* 논리연산자 */
	// 논리연산자 &&, ||, ! : 이미 비교를 한 값에 대해 추가연산
	3 > 1;					// 1
	5 > 1;					// 1

	// && : 그리고 AND, 앞뒤 모두 맞으면 1, 하나라도 틀릴 시 0
	// || : 혹은 OR, 앞뒤 둘 중 하나라도 맞으면 1, 둘다 틀리면 0
	// ! : NOT, 맞으면 0, 틀리면 1 (반대로 바꿈)

	// 논리연산자 양 옆에는 비교연산자를 적음
	//&&
	3 > 1 && 5 > 1;			// 1
	3 > 1 && 5 < 1;			// 0
	3 < 1 && 5 < 1;			// 0

	// ||
	3 > 1 || 5 > 1;			// 1
	3 > 1 || 5 < 1;			// 1
	3 < 1 || 5 < 1;			// 0

	// !
	3 > 1;					// 1 (맞다)
	!(3 > 1);				// 0 (틀리다)

	//교재 page 91 예제
	num1 = 20, num2 = 10;
	int result;

	result = 1 && 1;
	printf("result1 : %d\n", result);

	result = num1 == 20 && num2 == 10;
	printf("result2 : %d\n", result);

	result = num1 > num2 && num1 == num2;
	printf("result3 : %d\n", result);
}
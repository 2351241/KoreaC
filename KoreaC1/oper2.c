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

	printf("����� %.2f�Դϴ�.\n", average);

	//���� #2
	float num1 = 136.4f;
	float num2 = 37.11f;

	int a = (int)num1 % 10;
	int b = (int)num2 % 10;

	printf("%d\n", a);
	printf("%d\n", b);

	// �����ڸ� ���� ������ �����ؼ� ���

	// ���� #3
	// �ٱ��ϰ� � �ʿ��ұ�
	// �ٱ��ϰ� �Ѱ��� ������ 10���� ����.
	// �ٱ��ϰ� � �ʿ����� ����ϴ� �ڵ带 ������ּ���.

	int ������1 = 33;
	int ������2 = 17;

	int �ٱ���1 = ������1 / 10 +1;
	int �ٱ���2 = ������2 / 10 +1;


	printf("\n\n%d\n", �ٱ���1);
	printf("%d", �ٱ���2);
}
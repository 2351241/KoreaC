#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main2(){
	int num1, num2, num3;
	float fnum1, fnum2;

	printf("�� ���� ���� �Է� : ");
	scanf("%d %d %d", &num1, &num2, &num3);
	printf("�Էµ� ������ : %d %d %d \n", num1, num2, num3);

	printf("�Ǽ�, ����, �Ǽ�, ���ʴ�� �Է� : ");
	scanf("%f %d %f", &fnum1, &num1, &fnum2);
	printf("�Էµ� ���� : %0.2f %d %0.2f \n", fnum1, num1, fnum2);


	// #define�̶�? ������ ����
#define My_NUMBER			"123"
	//MY_number��� ������ 123�� ������ó�� ������
	printf("%s \n", My_NUMBER);

	char my_str[100];
	scanf("%s", my_str);
	printf("���� �Է��� ���� %s", my_str);
}
#define _CRT_SECURE_NO_WARNING
#include <stdio.h>

int main123() {
	//�迭: ������ ���ĳ��� ��
	
	/*
	char arr1[100];			//char���� 100�� ���ĳ���


	// �� ���ĳ���?
	// 1. ������ ������ ����� ���ŷο�(������ 100�� ���� �����)
	// 2. �ϳ��� ���������� �������� ���� �����ϱ� ���ؼ�(ex. ī��޴� ������ 100�� -> ������ 1��)
	// 3. �迭�� ������ �ݺ����� ���ؼ� ��ü ��ȸ�� ���� (������ 100�� ���� ����� ��ü �����ֱ� �Ұ���)

	int num1 = 0;
	int num2 = 10;
	int num3 = 100;


	//100���� 100�� �������

	printf("%d\n", num1);
	printf("%d\n", num2);
	printf("%d\n", num3);

	int num[3] = {1, 10 ,100};			//0�� ~ 9999��

	for (int i = 0; i < sizeof(num)/sizeof(int); i++) {
		printf("%d", num[i]);
	}

	char str1[100] = { 'h','i','\0'};
	char str2[100] = "hi";
	int num1[100] = { 0,1,2,3 };
	float fNum1[100] = { 0.0f, 1.0f, };

	//page 150
	int numbers[3] = { 1,2,3 };
	char characters[] = { 'a','b','c','d','e' };		//ó���� �� 5����ŭ ������ ������

	numbers[0] = 0;
	numbers[1] = 10;
	numbers[2] = 33;


	printf("%d\n", numbers[0]);
	printf("%d\n", numbers[1]);
	printf("%d\n", numbers[2]);
	
	// num[0] == num1
	// num[1] == num2
	// num[2] == num3
	// num[3] == num4
	// num[4] == num5
	// num[5] == num6

	//������ ����� ��
	//num1;   --> num[0]
	//num1 = 10; --> num[0] = 10;

	*/
	//page 152, 154
	int i;
	int odd[3];
	int even[5] = { 2,4,6,8,10 };
	odd[0] = 1;
	odd[1] = 3;
	odd[2] = 5;

	printf("%d %d %d\n", odd[0], odd[1], odd[2]);

	for (i = 0; i < 5; i++) {
		printf("%d", even[i]);
	}
	printf("\n");

	// �迭 �氳�� ���ϴ� ��
	// sizeof(�迭��)/sizeof(�ڷ���)

	char greet[] = "Hello, Guys!";
	printf("1���� �迭 greet�� ���̴� : %d\n", sizeof(greet));

	//page 158 1��

	int a;
	int num456[5] = { 1,2,3,4,5 };
	int total = 0;

	for (a = 0; a < 5; a++) {
		total += num456[a];
	}
	printf("������ %d�̰�, ����� %f�Դϴ�.", total, (float)total / 5);

	// 2��
#define ARR_SIZE 10000
	char eng[10000] = { 0, };				//0~9999
	char oper[10000] = {0,};

	printf("\n���ܾ� �Է�:");
	scanf("%s", eng);

	for (int i = 10000; i > 0; i--) {
		if (eng[i-1] == 0) {
			continue;
		}
		oper[10000-i] = eng[i-1];
		printf("%c", oper[10000 - i]);
	
	}
	
	

	// 3��
#define ENG_SIZE   100
	
	char ee[ENG_SIZE];
	char bk = 0;
	scanf("%s", ee);
	printf("����ܾ� �Է� :");
	scanf("%s", ee);
	bk == ee[0];
	for (int i = 0; i < ENG_SIZE; i++) {
		if (i == ENG_SIZE - 1) {
			break;
		}
		if (ee[i] >= ee[i + 1]) {
			ee[i + 1] == ee[i];
		}
		else { bk = ee[i + 1]; }
	}

	printf("�ƽ�Ű�ڵ尡 ���� ū ���� : %c", bk);

	int num[10000];
	//9999������ ����

	return 0;
}
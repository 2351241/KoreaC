#include <stdio.h>

void main0() {
	printf("Hello World\n"); 

	// ���� : �������
	int number = 0;				// (4ĭ)
	float number2 = 0.0f;		// (4ĭ)
	char monzza = 'C';		//���� 1��(1ĭ)

	//���ڸ� ������ �������� char�� ���ĳ��ƾ���
	char moonzza2[100] = "100���� char������ ���ĳ��ҽ��ϴ�.";

	//������ ���� ����ϰų� ����Ǵ� ���� �����ϱ� ���� ����� ����

	// �ڷ��� : �����ȿ� ��氪�� ���¸� ����
	// ������ ó�� ���鶧�� �ڷ����� ���´�
	//int float char....
	int var1;
	//int var1;		�ߺ� ����(������ ������ ���� ó�� �ѹ��� �ڷ����� �����ش�.)
	var1;
	var1 = 0;

	int var2 = 3.14f;			//�ڷ����� ���� �ʴ� ���� ������ ���� �ջ�ȴ�.
	printf("\n%d\n", var2);

	1 + 1;			// ���ϱ�
	2 - 2;			// ����
	3 * 3;			// ���ϱ�
	4 / 4;			// ������
	5 % 5;			// ���������ϱ�

	3 > 1;
	1 < 3;
	3 == 3;
	3 != 4;
	2 >= 2;
	3 <= 4;

	1 == 1 && 2 != 1;			// �յ� ��� �¾ƾ� ���� (1)
	1 == 1 || 2 >= 3;			// ���� �ϳ��� �¾Ƶ� ���� (1)
}
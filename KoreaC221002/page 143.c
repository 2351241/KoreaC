#include <stdio.h>

void main3() {
	int num;
	int ȸ�� = 1;
	int �ջ� = 0;			//1, 2
	printf("������ �Է��ϼ��� : ");
	scanf("%d", &num);

	while (ȸ�� <= num) {
		�ջ� += ȸ��;
		ȸ��++;
	}
	printf("1���� %d������ ���� %d�Դϴ�.\n", ȸ��-1, �ջ�);


	// 131
	// do ~ while �� while �� ����
	// do ~ while : ������ 1���� ����
	// while�� ������ Ʋ���� ���� ����

	// Ʋ�� ����
	while (0 > 3) {
		printf("while ���� �ȵ�\n");					//����
	}

	//do while
	do {
		printf("do~while ���� �ȵ�\n");					// ��� 1ȸ ����
	} while (0 > 3);



}
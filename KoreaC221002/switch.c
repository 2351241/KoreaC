#include <stdio.h>

void main123123123() {
	//���ǹ� if, switch

	//if(){}
	//else if(){}
	//else(){}

	//switch(){} : ���� ���� ���� �� ���� (����X, ������O)

	int num1 = 3;
	switch (num1) {
		//(): ����(���� ���)
		//{}: ����
	case 0:				//case ���� �ִ� ���� ()�� �ִ� ���� ��
		// num1 == 0
		printf("0�� ���� �� ����\n");
		break;								//�� ���̽��� break;�� �־���(���� �ȳ����� �ؿ� ���̽������ ��� �����)
	case 1:
	//num1 == 1
		printf("1�� ���� �� ����\n");
		break;
	case 2:
	 //num1 == 2
		printf("2�� ���� �� ����\n");
		break;
	case 3:
	 //num1 == 3
		printf("3�� ���� �� ����\n");
		break;
	default:
	//else{}
		printf("�ϳ��� �´°� ���� �� ����\n");
	}

	int num;
	printf("input some positive number : ");
	scanf("%d", &num);

	switch (num) {
	case 1:
	case 3:
	case 5:
		printf("odd\n");
		break;

	case 2:
	case 4:
	case 6:
		printf("even\n");
		break;
	default:
		printf("maybe bigger than 6\n");
	}
	printf("switch state end.\n");

	switch (num1) {
	case 1:
		printf("num is 1\n");
		break;
	case 2:
		printf("num is 2\n");
		break;
	case 3:
		printf("num is 3\n");
		break;
	default:
		printf("maybe bigger than 3\n");
		break;
	}
	printf("switch state end.\n");
}

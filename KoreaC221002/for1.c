#include <stdio.h>

int main() {
	//�ݺ��� : while, for

	int flag = 0;					//������
	while (flag < 3) {
		printf("%d��", flag);
		printf("\n");

		flag++;				//������ ����(���ѹݺ��� ���ϱ� ����)
	}

	// while : ������ ���� ����� ����ϰ�, �������� �������������
	// for : ������ ���õ� ���� �� ���� ���ĵ��� (������� �ٸ�)
	for (int plat = 0; plat < 3; plat++) {
		printf("%d��", plat);
		printf("\n");
	}

	/*
	for(�ʱⰪ; ���ǽ�; ������;){
	�ݺ��� ����;
	}
	*/


	// 135
	// i = i +1; i += 1; i++;
	/*
	int i;

	for (i = 0; i < 3; i += 1) {
		if (i < 2) {
			printf("22");				//�ݺ��� �ȿ��� if ��� ����
		}
		printf("i is % d now\n", i);
	}
	/*
	
	*/
	/*
	1. for�� ����ؼ� 1~10 ���
	2. ¦���� ���
	*/
	/*
	for (int a = 1; a < 11; a+=1) {
		if (a % 2 == 0){
		printf("\n%d", a);
		}
	}
	*/
	// 143 page
	for (int b = 1; b <= 100; b += 1) {
		if (b % 6 == 0) {
			printf("\n%d ", b);
		}
	}
	return 0;
}
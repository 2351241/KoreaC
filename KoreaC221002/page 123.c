#include <stdio.h>

void main1() {
	int ���� = 88;
	int ���� = 90;
	int ���� = 58;
	int ��ȸ = 81;
	int ���� = 72;

	int sum = (���� + ���� + ���� + ���� + ��ȸ);
	
	float avg = sum / 5;

	if (avg >= 90) {
		printf("����� %f�̰�, ����� 'A'�̴�.", avg);
	}
	else if (avg >= 80) {
		printf("����� %f�̰�, ����� 'B'�̴�.", avg);
	}
	else if (avg >= 70) {
		printf("����� %f�̰�, ����� 'C'�̴�.", avg);
	}
	else if (avg >= 60) {
		printf("����� %f�̰�, ����� 'D'�̴�.", avg);
	}
	else {
		printf("����� %f�̰�, ����� 'F'�̴�.", avg);
	}
}
#include <stdio.h>

void main5() {
	// page 45
	char name[] = "������ �ڷ���";
	char name2[] = "ȫ�浿";
	int year = 2021;
	int month = 2;
	int day = 23;                          //���� ���� ������ �ÿ� ctrl+d������ �ش� Ŀ�� �ִ� �� �����
	printf("\n������ ���� : %s\n���α׷� �ۼ��� : %s\n���α׷� �ۼ��� : %d.%02d.%d", name, name2, year, month, day);
}
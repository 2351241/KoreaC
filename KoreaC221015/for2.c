#define _CRT_SECURE_NO_WARNINGS					//_s ���⼳�� ����
//#define ������ ����
#include <stdio.h>
#define THREE			3				// THREE�� ���� 3�̶�� �ν��ϰԲ� ������ ���� (��ó����)

int main123() {
	//page 140
	/*
	int num;

	while (1) {
		printf("-1�Է½� ����:");
		scanf("%d", &num);
		if (num == -1)
			break;
	}
	// page 141
	for (num = 1; num <= 5; num++) {
		if (num == 3)
			continue;
		printf("%d\n", num);
	}
	*/
	/*
	char ascil1 = '\0';			//NULL���� (����ִ�)
	if (ascil1 == 0) {
		printf("�ι��ڴ� 0�� ���׿�");
	}

	char ascil2 = 'a';
	printf("�ҹ��� a�� %d�� �����ϴ�.\n", ascil2);			//97
	
	char ascil3 = 'A';
	printf("�빮�� A�� %d�� �����ϴ�.\n", ascil3);			//65
	if (ascil3 <= 97) {
		printf("�빮��\n");
	}
	*/
	//�빮�� : 65 ~ 90
	//�ҹ��� : 97 ~ 122 

	char ascil0 = 0;
	while (1) {
		printf("�Է��ϼ���:");
		scanf("%c", &ascil0);
		if (ascil0 <= 90) {
			printf("[%c]�� �Է��߽��ϴ�. �����մϴ�.\n", ascil0);
			break;
		}
		printf("[%c]�� �Է��߽��ϴ�.\n", ascil0);
		rewind(stdin);						//scanf �ٽ� ����Ҷ� char���� ���װ� �־ �������.
	}

	
	int �ǿ�����1 = 0;
	char ascil1 = '\0';
	int �ǿ�����2 = 1;
	while (1) {
		printf("�ǿ����� 1 :");
		scanf("%d", &�ǿ�����1);
		printf("������ :");
		rewind(stdin);
		scanf("%c", &ascil1);
		printf("�ǿ����� 2 :");
		scanf("%d", &�ǿ�����2);
		if (ascil1 == 42) {
			printf("%d * %d=%d\n", �ǿ�����1, �ǿ�����2, �ǿ�����1 * �ǿ�����2);
		}
		else if (ascil1 == 43) {
			printf("%d + %d=%d\n", �ǿ�����1, �ǿ�����2, �ǿ�����1 + �ǿ�����2);
		}
		else if (ascil1 == 45) {
			printf("%d - %d=%d\n", �ǿ�����1, �ǿ�����2, �ǿ�����1 - �ǿ�����2);
		}
		else if (ascil1 == 47) {
			printf("%d / %d=%d\n", �ǿ�����1, �ǿ�����2, �ǿ�����1 / �ǿ�����2);
		}
	
	}





	return 0;
}
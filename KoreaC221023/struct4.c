#include <stdio.h>


typedef struct {
	int x; int y;

}POINT;

typedef struct __person{
	char name[30];
	int age;
}__PERSON;

// page 295 #2

typedef struct worker {
	char name[30];
	char phone[30];
	int pay;

}WORKER;

typedef struct {
	char name[30];
	int age;
	double height;
}PPERSON;



int main() {
	POINT position = { 30, 60 };
	__PERSON saram = { "�����", 10 };
	printf("%d %d\n", position.x, position.y);
	printf("%s %d\n", saram.name, saram.age);

	// #310 ������ 1��

	PPERSON _____person = { "�տ���", 30, 180.35 };
	PPERSON* ptr = &_____person;
	
	printf("�̸� : %s\n���� : %d\n����: %.2f\n", ptr->name, ptr->age, ptr->height); // ����ü �������� ��� ->�� ���



	WORKER human = { "���ӽ�", "010 - 1234 - 5678", 1000000 };


	WORKER*p_e = &human;			//����ü�� �ּҸ� ����  

	printf("������ �̸� : %s\n������ ��ȭ��ȣ : %s\n������ ���޿� : %d\n", human.name, human.phone, human.pay);

	printf("������ �̸� : %s\n������ ��ȭ��ȣ : %s\n������ ���޿� : %d\n", (*p_e).name, (*p_e).phone, (*p_e).pay);//����ü �����͸� ������ �� �� name�� ���

	printf("������ �̸� : %s\n������ ��ȭ��ȣ : %s\n������ ���޿� : %d\n", p_e->name, p_e->phone, p_e->pay);		//����ü �����͸� �������� ������ �ȿ��ִ� name�� ���
}


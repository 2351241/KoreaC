#include <stdio.h>
#include <string.h>

// strcpy : ù��° ���ڿ� �ι�° ���ڸ� ����ٿ��ֱ�
struct person {
	char name[30];
	int age;
};

int main6() {
	struct person boy, girl;

	strcpy(boy.name, "��ҳ�");
	strcpy(girl.name, "�̼ҳ�");

	boy.age = 12;
	girl.age = 9;
	printf("�ҳ��� �̸��� %s, ���̴� %d��\n", boy.name, boy.age);
	printf("�ҳ��� �̸��� %s, ���̴� %d��\n", girl.name, girl.age);

	return 0;
}
#include <stdio.h>

int number = 0;

void __printNumber(void) {
	printf("���� ���� number�� %d�� �����ϰ� �ִ�.\n", number);

	//�Լ��� return�� ���� �� �Լ��� �ڷ����� void

}



void __staticNumber() {
	// static ���� (�����Ϳ���)	
	static int s_number = 4;					// static���� (�������� �����ǳ� ���α׷� ����� �� ������)
	s_number++;
	printf("%d\n", s_number);
}

void increaseNumber() {
	static int number = 0;
	number++;
	printf("number :%d\n", number);
}


int main5() {

	int number = 3;				//��������(���� ���������� �̸��� ���������� ������ ���������� �켱���� ���)
	printf("���� ���� number�� %d�� �����ϰ� �ִ�.\n", number);  // ���������� ��� �ȵǰ� ���������� ����
	__printNumber();


	__staticNumber();
	__staticNumber();
	__staticNumber();

	increaseNumber();
	increaseNumber();
	increaseNumber();
	increaseNumber();
	increaseNumber();
	


	return 0;
}

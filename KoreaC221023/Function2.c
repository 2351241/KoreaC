#include <stdio.h>

// �ڱ��ڽ��� ����ϴ� �Լ� (����Լ�)
int CallSelf1(int count) {
	printf("Callself ���\n");
	if (count != 5) {
		CallSelf1(count + 1);
	}				// �ڱ� �ڽ��� ���
	return 0;

}

// 247 ������
int sayHello(int count) {
	printf("Hello!\n");
	if (count != 3) {
		sayHello(count + 1);
	}
	return 0;
}


int main3() {


	CallSelf1(1);
	//sayHello(1);

	return 0;
}
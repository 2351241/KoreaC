#include"Function2.h"


int g_num = 3;			// �������� (���α׷� ����ÿ� �����Ǵ� ����)
// �������� (�Լ� ����ÿ� �����Ǵ� ����)
// ���������� ��� ��� �� ���α׷� ���� ����
// �������� �������̶�� ������ ����, ���������� �����̶�� ������ ����(�����ʹ� ������ ����, ������ ������ ũ��)

//������ {}�ȿ��� ��������� �ش� {}�� ����� �����ȴ�.
int localFunc(int num) {
	int num3 = 1;				// localfunc �ȿ����� ��� ������ ����
	//printf("%d\n", num2);			// main���� ��������� �������� ���� -- ��������
	printf("%d\n", g_num);			
	
	
	if (num > 90) {
		num++;
	}


	int result = 0;
	return result + num;
}


int main4() {

	int num2 = 0;		// main �ȿ����� ��� ������ ����
	//printf("%d\n", num3);			// localFunc���� ��������� �������� ���� -- ��������
	printf("%d\n", g_num);			
	


	//���ǹ�, �ݺ��� �ȿ��� ���� ����
	if (num2 == 0) {
		int num4 = 5;
	}
	//printf("%d\n", num4);

	int num = 5;
	int result = localFunc(num);

	printf("��� : %d\n", result);

	


	return 0;				//main�� ������ ���α׷��� ����� �� �˷��� �޽���
}
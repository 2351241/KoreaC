#include <stdio.h>

int main1() {
	// ������ : �ּҸ� ����ϴ� �ڷ���
	// ���� : ���� ���

	// �ý� -> ������� -> ������� �ּ�
	// ��ǻ�� -> ����1 -> ����1�� �ּ�


	//������ ���� ����
	int num = 3;
	printf("%d\n", num);

	// �����ʹ� �ּҸ� ����
	int* p_num = &num;			//�տ� & ��ȣ��	���̸� �ּҰ����� ����

	printf("%d\n", p_num);
	printf("%d\n", &num);			//���� (�ּҰ�)
	printf("%d\n", *p_num);			//������ (�ּҷ� ã�ư��� �ȿ� ����ִ� ���� Ȯ��)

	// page 163
	char cnum = 5;
	int inum = 999;
	double dnum = 3.14;

	char* cptr = &cnum;
	int* iptr = &inum;
	double* dptr = &dnum;

	printf("%p\n", cptr);
	printf("%p\n", iptr);
	printf("%p\n", dptr);

	// �ڷ��� �տ� *�� ���̸� �����ͺ��� ������ �ǹ�
	// �̹� ������ ������ �տ� *�� ���̸� �������� �ǹ�
	// ������ �տ� &�� ���̸� �ּ������� �ǹ�

	printf("����� %d\n", (* p_num)+2);			// *p_num == num
	(*p_num) += 4;			// num = 3 + 4
	printf("����� %d\n", *p_num);

	// page 166

	int num123 = 10;
	int* pnum;
	pnum = &num;

	*pnum = 20;
	printf("num : %d\n", num);
	(*pnum)++; (*pnum)++;
	printf("num :%d\n", num);
	printf("pnum :%d\n", *pnum);


	int a = 10;
	int* p = &a;
	

	// p = a; --> ������ ������ �ּ� ����
	// *p = 20; --> a = 20; �������ؼ� ������ ������ �� ����
	*p = 20;
	printf("%d\n", a);
	*p = 50;
	printf("%d\n", a);


	// page 168 2��
	int b = 10;
	int* p222 = &b;

	printf("%d\n", *p222);
	printf("%p\n", p222);

	// page 169 3��
	int* ptr;
	int num1 = 5;
	int num2 = 8;


	ptr = &num1;
	printf("%d\n", *ptr);

	ptr = &num2;
	printf("%d\n", *ptr);

	//page 170
	int n1 = 100, n2 = 200;
	int* ptr1 = &n1;
	int* ptr2 = &n2;

	printf("%d %d\n", *ptr1, *ptr2);

	int* ptr3 = &n1;
	ptr1 = ptr2;			//ptr1 = &n2;
	ptr2 = ptr3;


	printf("%d %d\n", *ptr1, *ptr2);






	return 0;
}
#include <stdio.h>
#include <stdlib.h>


int outer = 10;				// ��������


int main1() {
	int inner = 3;			// ��������
	static int s_inner = 5;
	inner++;
	printf("%d\n", inner);
	inner++;

	// malloc : �޸𸮸� �����Ҵ�
	// ������ ȭ���� �׸��� ���� ū �۾��� �ʿ��ϸ� �����Ҵ� �ʿ��� �� ����
	// �����Ҵ� : ����ڰ� �޸� ũ�⸦ �ʿ��� �� ��������ŭ �ְ� �ʿ���� �� �������� ����(�� ������ ����)
	char* str;
	str = (char*)malloc(sizeof(char) * 10);				// char 10ĭ�� �Ҵ�
	str[0] = 'h';
	str[1] = 'e';
	str[2] = 'l';
	str[3] = 'l';
	str[4] = 'o';
	str[5] = '\0';
	
	printf("%s, %d\n", str, sizeof(str));
	free(str);				// �����Ҵ��� �ϸ� �ʿ������ ��  free�� ����

	int* iptr = (int*)malloc(sizeof(int) * 5);			//int�� 5ĭ  int[5]
	double* dptr = (double*)malloc(sizeof(double) * 3);		// double dptr[3]
	int i;

	for (i = 0; i < 5; i++) {
		iptr[i] = 10 * (i + 1);
	}
	for (i = 0; i < 5; i++) {
		printf("%d ", iptr[i]);
	}
	printf("\n");

	dptr[0] = 3.14; dptr[1] = 4.31; dptr[2] = 1.34;
	printf("%g %g %g\n", dptr[0], dptr[1], dptr[2]);

	if (iptr != NULL)free(iptr);
	if (dptr!= NULL)free(dptr);

	 









	return 0;
}


/*
  ======= ��ǻ�� �޸� ����=======
  �ڵ� ����(code) : �ڵ带 ����
  ������ ����(Data) : �������� / static���� ����
  �� ����(Heap) : �������� �Ҵ�� ������ ����
  ���� ����(Stack) : �������� / �Ű����� ����


  ���� ������ ���� ������ Ȥ�� �������� ������ �۱� ������ �����ϸ� ���������� ���
  ��������/�Ű����� : �Լ����� ��������� �� �Լ��� ����Ǹ� �����Ǵ� ����
  ����/static/���� ���� : �Լ��� ������ ������� (�޸𸮸� ������ �� ����, ���α׷� �ӵ��� ������ ��������.)
*/
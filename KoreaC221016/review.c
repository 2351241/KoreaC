#include <stdio.h>


int main0() {
	//배열
	char a;				// []
	char a1;			// []
	char a2;			// []
	char a3;			// []
	char a4;			// []
	char a5;			// []
	
	//변수를 5개 따로 만들면 전체 조회가 불가능
	char aa[5];     //[][][][][] 0~4
	//aa라는 키워드로 5개의 공간을 한번에 확인할 수 있음(반복문)

	//묶음
	a1 = 0;
	a2 = 1;
	a3 = 2;
	a4 = 3;
	a5 = 4;

	// 전체값조회 
	printf("%c\n", a1);
	printf("%c\n", a2);
	printf("%c\n", a3);
	printf("%c\n", a4);
	printf("%c\n", a5);

	//aa묶음
	aa[0] = 0;
	aa[1] = 1;
	aa[2] = 2;
	aa[3] = 3;
	aa[4] = 4;

	//전체값조회
	printf("%c\n", aa[0]);
	printf("%c\n", aa[1]);
	printf("%c\n", aa[2]);
	printf("%c\n", aa[3]);
	printf("%c\n", aa[4]);

	//전체값조회2
	for (int i = 0; i < sizeof(aa)/sizeof(char); i++) {
		printf("%c\n", aa[1]);
	}

	printf("%c\n", aa[0]);
	printf("%c\n", aa[0]+1);
	printf("%c\n", aa[1]);






	return 0;
}

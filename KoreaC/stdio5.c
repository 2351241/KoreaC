#include <stdio.h>

void main5() {
	// page 45
	char name[] = "변수와 자료형";
	char name2[] = "홍길동";
	int year = 2021;
	int month = 2;
	int day = 23;                          //같은 문장 복붙할 시에 ctrl+d누르면 해당 커서 있는 줄 복사됨
	printf("\n오늘의 주제 : %s\n프로그램 작성자 : %s\n프로그램 작성일 : %d.%02d.%d", name, name2, year, month, day);
}
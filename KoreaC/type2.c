#include <stdio.h>

void main() {
	printf("%d\n", (short)3.1415);
	printf("%d\n", (int)3.1415);
	printf("%f\n", (double)10);
	printf("%f\n", (float)10);
}

/*
	1. printf 출력
	   - printf("");
	   - 출력 : 화면에 보여짐
	
	2. 변수
	   - 저장공간
	   - 자주 사용되거나 수정될 수 있는 값을 미리 저장
	   - %c, %d, %f, %s

	3. 자료형
	   - 저장 공간에 저장될 값의 형태
	   - 개발자의 실수를 미리 방지
	   
	4. 자료형 변환
	   - 변수앞에 ()를 사용해서 바꿈
	   - (int)num

	5. 주석
	   - 메모
	   - //
*/
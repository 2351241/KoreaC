#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main1(){
	char character;
	int inum;
	float fnum;

	scanf("%c", &character);
	scanf("%d", &inum);
	scanf("%f", &fnum);

	printf("%c %d %f\n", character, inum, fnum);
}
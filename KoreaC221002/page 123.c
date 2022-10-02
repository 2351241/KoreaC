#include <stdio.h>

void main1() {
	int 국어 = 88;
	int 영어 = 90;
	int 수학 = 58;
	int 사회 = 81;
	int 과학 = 72;

	int sum = (국어 + 과학 + 수학 + 영어 + 사회);
	
	float avg = sum / 5;

	if (avg >= 90) {
		printf("평균은 %f이고, 등급은 'A'이다.", avg);
	}
	else if (avg >= 80) {
		printf("평균은 %f이고, 등급은 'B'이다.", avg);
	}
	else if (avg >= 70) {
		printf("평균은 %f이고, 등급은 'C'이다.", avg);
	}
	else if (avg >= 60) {
		printf("평균은 %f이고, 등급은 'D'이다.", avg);
	}
	else {
		printf("평균은 %f이고, 등급은 'F'이다.", avg);
	}
}
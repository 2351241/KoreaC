#include <stdio.h>
#include <string.h>

typedef unsigned int uInt;						//unsigned : 마이너스 값이 없는


typedef struct Person {
	char name[30];
	int age;
}Per;			// struct Person == Per

int main7() {
	Per boy[3] = {

		{"김소년", 12},
		{"유소년", 14},
		{"청소년", 16}
	};

	Per girl[3];
	strcpy(girl[0].name, "이소녀");
	strcpy(girl[1].name, "오소녀");
	strcpy(girl[2].name, "하소녀");
	girl[0].age = 9;
	girl[1].age = 13;
	girl[2].age = 7;

	for (int i = 0; i < 3; i++) {
		printf("소년의 이름은 %s, 나이는 %d세\n", boy[i].name, boy[i].age);
		printf("소녀의 이름은 %s, 나이는 %d세\n", girl[i].name, girl[i].age);
	}


	return 0;
}
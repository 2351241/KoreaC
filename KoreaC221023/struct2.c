#include <stdio.h>
#include <string.h>

// strcpy : 첫번째 인자에 두번째 인자를 복사붙여넣기
struct person {
	char name[30];
	int age;
};

int main6() {
	struct person boy, girl;

	strcpy(boy.name, "김소년");
	strcpy(girl.name, "이소녀");

	boy.age = 12;
	girl.age = 9;
	printf("소년의 이름은 %s, 나이는 %d세\n", boy.name, boy.age);
	printf("소녀의 이름은 %s, 나이는 %d세\n", girl.name, girl.age);

	return 0;
}
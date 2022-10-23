#include <stdio.h>


struct Character // 구조체 : 변수들을 모아놓음
{			
	char* name;
	int health;
	int atk;
};


int main5() {
	// 대전게임 캐릭1 vs 캐릭2
	// 캐릭터 : 이름, 체력, 공격력

	// 일반 변수 : 변수가 너무 많아짐
	char* c1 = "캐릭1";
	char* c2 = "캐릭2";

	int c1_health = 300;
	int c2_health = 200;

	int c1_atk = 20;
	int c2_atk = 40;

	// 배열 : 몇번방에 어느 캐릭터인지 메모해야함
	char* c[100];
	int c_health[100];
	int c_atk[100];

	c[0] = "캐릭1";
	c[1] = "캐릭2";

	// 구조체 : 개발자가 직접 만드는 자료형
	int num1 = 1;
	int num2 = 2;
	struct Character 캐릭1 = { "캐릭1", 300, 20 };
	struct Character 캐릭2 = { "캐릭2", 200, 40 };


	// 변수명 하나로 관리, 방번호를 기억할 필요 없음
	캐릭1.name;
	캐릭1.health;
	캐릭1.atk;

	캐릭2.name;
	캐릭2.health;
	캐릭2.atk;

	printf("캐릭명은 %s, 체력은 %d, 공격력은 %d\n", 캐릭1.name, 캐릭1.health, 캐릭1.atk);
	printf("캐릭명은 %s, 체력은 %d, 공격력은 %d\n", 캐릭2.name, 캐릭2.health, 캐릭2.atk);

	// 변수 : 너무 많아짐
	// 배열 : 구분하기 힘듦
	// 구조체 : 내가 직접 만들어 구분 O

	return 0;
}
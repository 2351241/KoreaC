#include <stdio.h>


typedef struct {
	int x; int y;

}POINT;

typedef struct __person{
	char name[30];
	int age;
}__PERSON;

// page 295 #2

typedef struct worker {
	char name[30];
	char phone[30];
	int pay;

}WORKER;

typedef struct {
	char name[30];
	int age;
	double height;
}PPERSON;



int main() {
	POINT position = { 30, 60 };
	__PERSON saram = { "강사람", 10 };
	printf("%d %d\n", position.x, position.y);
	printf("%s %d\n", saram.name, saram.age);

	// #310 페이지 1번

	PPERSON _____person = { "손오공", 30, 180.35 };
	PPERSON* ptr = &_____person;
	
	printf("이름 : %s\n나이 : %d\n신장: %.2f\n", ptr->name, ptr->age, ptr->height); // 구조체 포인터일 경우 ->를 사용



	WORKER human = { "제임스", "010 - 1234 - 5678", 1000000 };


	WORKER*p_e = &human;			//구조체의 주소를 저장  

	printf("직원의 이름 : %s\n직원의 전화번호 : %s\n직원의 월급여 : %d\n", human.name, human.phone, human.pay);

	printf("직원의 이름 : %s\n직원의 전화번호 : %s\n직원의 월급여 : %d\n", (*p_e).name, (*p_e).phone, (*p_e).pay);//구조체 포인터를 역참조 한 후 name을 사용

	printf("직원의 이름 : %s\n직원의 전화번호 : %s\n직원의 월급여 : %d\n", p_e->name, p_e->phone, p_e->pay);		//구조체 포인터를 역참조한 다음에 안에있는 name을 사용
}


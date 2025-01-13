#include <stdio.h>

struct score
{
	int kor;
	int eng;
	int math;
};

struct address
{
	char name[20];
	int age;
	char tel[20];
	char addr[80];
};

struct list
{
	int num;
	struct list *next;
};

struct student1
{
	int num;
	double grade;
};
typedef struct student1 Student;

union student
{
	int num;
	double grade;
};

enum season {SPRING, SUMMER, FALL, WINTER};

void print_list(struct address* lp);
void print_data(Student* ps);

int main(void)
{
	struct score yuni = { 90,80,70 };
	struct score* ps = &yuni;

	printf("국어 : %d\n", (*ps).kor);
	printf("영어 : %d\n", ps -> eng);
	printf("수학 : %d\n", ps -> math);

	struct address list[5] = {
		{"홍길동",23,"111-1111","울릉도 독도"},
		{"이순신",35,"222-2222","서울 건천동"},
		{"장보고",19,"333-3333","완도 청해진"},
		{"유관순",15,"444-4444","충남 천안"},
		{"안중근",45,"555-5555","황해도 해주"}
	};
	int i;

	for (i = 0; i < 5; i++)
	{
		printf("%10s%5d%15s%20s\n", list[i].name, list[i].age, list[i].tel, list[i].addr);
	}

	print_list(list);

	struct list a = { 10,0 }, b = { 20, 0 }, c = { 30, 0 };
	struct list *head = &a, * current;

	a.next = &b;
	b.next = &c;

	printf("head -> num : %d\n", head->num);
	printf("head -> next -> num : %d\n", head -> next -> num);
	
	printf("list all : ");
	current = head;
	while (current != NULL)
	{
		printf("%d ", current->num);
		current = current->next;
	}
	printf("\n");

	union student s1 = { 315 };

	printf("학번 : %d\n", s1.num);
	s1.grade = 4.4;
	printf("학점 : %.1lf\n", s1.grade);
	printf("학번 : %d\n", s1.num);

	enum season ss;
	char* pc = NULL;

	ss = SPRING;
	switch (ss)
	{
	case SPRING:
		pc = "inline"; break;
	case SUMMER:
		pc = "swimming"; break;
	case FALL:
		pc = "trip"; break;
	case WINTER:
		pc = "skiing"; break;
	}
	printf("나의 레저 활동 => %s\n", pc);

	Student s2 = { 315, 4.2 };

	print_data(&s2);

	return 0;
}

void print_list(struct address* lp)
{
	int i;

	for (i = 0; i < 5; i++)
	{
		printf("%10s%5d%15s%20s\n", (lp+i) -> name, (lp + i)-> age, (lp + i)-> tel, (lp + i)-> addr);
	}
}

void print_data(Student* ps)
{
	printf("학번 : %d\n", ps->num);
	printf("학점 : %.1lf\n", ps->grade);
}
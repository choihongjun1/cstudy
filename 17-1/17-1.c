#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student
{
	int num;
	double grade;
};

struct profile
{
	char name[20];
	int age;
	double height;
	char* intro;
};

struct profile1
{
	int age;
	double height;
};

struct student1
{
	struct profile1 pf;
	int id;
	double grade;
};

struct student2
{
	int id;
	char name[20];
	double grade;
};

struct vision
{
	double left;
	double right;
};

struct vision exchange(struct vision robot);

int main(void)
{
	struct student s1;

	s1.num = 2;
	s1.grade = 2.7;
	printf("학번 : %d\n", s1.num);
	printf("학점 : %.1lf\n", s1.grade);

	struct profile yuni;

	strcpy(yuni.name, "서하윤");
	yuni.age = 17;
	yuni.height = 164.5;

	yuni.intro = (char*)malloc(80);
	printf("자기소개 : ");
	gets(yuni.intro);

	printf("이름 : %s\n", yuni.name);
	printf("나이 : %d\n", yuni.age);
	printf("키 : %.1lf\n", yuni.height);
	printf("자기소개 : %s\n", yuni.intro);
	free(yuni.intro);

	struct student1 yuni1;

	yuni1.pf.age = 17;
	yuni1.pf.height = 164.5;
	yuni1.id = 315;
	yuni1.grade = 4.3;

	printf("나이 : %d\n", yuni1.pf.age);
	printf("키 : %.1lf\n", yuni1.pf.height);
	printf("학번 : %d\n", yuni1.id);
	printf("학점 : %.1lf\n", yuni1.grade);

	struct student2 s2 = { 315, "홍길동", 2.4 },
					s3 = { 316, "이순신", 3.7 },
					s4 = { 317, "세종대왕", 4.4 };

	struct student2 max;

	max = s2;
	if (s3.grade > max.grade) max = s3;
	if (s4.grade > max.grade) max = s4;

	printf("학번 : %d\n", max.id);
	printf("이름 : %s\n", max.name);
	printf("학점 : %.1lf\n", max.grade);

	struct vision robot;

	printf("시력 입력 : ");
	scanf("%lf%lf", &(robot.left), &(robot.right));
	robot = exchange(robot);
	printf("바뀐 시력 : %.1lf %.1lf\n", robot.left, robot.right);

	return 0;
}

struct vision exchange(struct vision robot)
{
	double temp;

	temp = robot.left;
	robot.left = robot.right;
	robot.right = temp;

	return robot;
}
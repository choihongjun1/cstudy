#include <stdio.h>
#include "student.h"
#define PI 3.14159
#define LIMIT 100.0
#define MSG "passed!"
#define ERR_PRN printf("허용 범위를 벗어났습니다!\n")
#define SUM(a, b) ((a) + (b))
#define MUL(a, b) ((a) * (b))
#define PRINT_EXPR(x) printf(#x " = %d\n", x)
#define NAME_CAT(x, y) (x ## y)
#define VER 7
#define BIT16

#pragma pack(push, 1)
typedef struct
{
	char ch;
	int in;
} Sample1;

#pragma pack(pop)
typedef struct
{
	char ch;
	int in;
} Sample2;

void func(void);

int main(void)
{
	Student c = { 315, "홍길동" };

	printf("학번 : %d, 이름 : %s\n", c.num, c.name);

	double radius, area;

	printf("반지름을 입력하세요(10 이하) : ");
	scanf("%lf", &radius);
	area = PI * radius * radius;
	if (area > LIMIT) ERR_PRN;
	else printf("원의 면적 : %.2lf (%s)\n", area, MSG);

	int a = 10, b = 20;
	int x = 30, y = 40;
	int res;

	printf("a + b : %d\n", SUM(a, b));
	printf("x + y : %d\n", SUM(x, y));
	res = 30 / MUL(2, 5);
	printf("res : %d\n", res);

	printf("컴파일 날짜와 시간 : %s, %s\n\n", __DATE__, __TIME__);
	printf("파일명 : %s\n", __FILE__);
	printf("함수명 : %s\n", __FUNCTION__);
	printf("행번호 : %d\n", __LINE__);

#line 100 "macro.c"
	func();

	int k1, k2;

	NAME_CAT(k, 1) = 10;
	NAME_CAT(k, 2) = 20;
	PRINT_EXPR(k1 + k2);
	PRINT_EXPR(k2 - k1);

	int max;

#if VER >= 6
	printf("버전 %d입니다.\n", VER);
#endif

#ifdef BIT16
	max = 32767;
#else
	max = 2147483647;
#endif

	printf("int형 변수의 최댓값 : %d\n", max);

	printf("Sample1 구조체의 크기 : %d바이트\n", sizeof(Sample1));
	printf("Sample2 구조체의 크기 : %d바이트\n", sizeof(Sample2));

	return 0;
}

void func(void)
{
	printf("\n");
	printf("파일명 : %s\n", __FILE__);
	printf("함수명 : %s\n", __FUNCTION__);
	printf("행번호 : %d\n", __LINE__);
}
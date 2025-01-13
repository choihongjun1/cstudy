#include <stdio.h>

void assign(void);
void assign10(void);
void assign20(void);
void auto_func(void);
void static_func(void);

int d;

int main(void)
{
	auto int a = 0;

	assign();
	printf("main함수 a : %d\n", a);

	int b = 10, c = 20;

	printf("교환 전 b와 c의 값 : %d, %d\n", b, c);
	{
		int temp;

		temp = b;
		b = c;
		c = temp;
	}
	printf("교환 후 b와 c의 값 : %d, %d\n", b, c);

	printf("함수 호출 전 d값 : %d\n", d);
	assign10();
	assign20();
	printf("함수 호출 후 d값 : %d\n", d);

	int i;

	printf("일반 지역 변수(auto)를 사용한 함수...\n");
	for (i = 0; i < 3; i++)
	{
		auto_func();
	}

	printf("정적 지역 변수(static)를 사용한 함수...\n");
	for (i = 0; i < 3; i++)
	{
		static_func();
	}

	register int j;
	auto int sum = 0;

	for (j = 0; j <= 10000; j++)
	{
		sum += j;
	}

	printf("%d\n", sum);

	return 0;
}

void assign(void)
{
	int a;

	a = 10;
	printf("assign함수 a : %d\n", a);
}

void assign10(void)
{
	d = 10;
}

void assign20(void)
{
	int d;

	d = 20;
}

void auto_func(void)
{
	auto int a = 0;

	a++;
	printf("%d\n", a);
}

void static_func(void)
{
	static int a;

	a++;
	printf("%d\n", a);
}
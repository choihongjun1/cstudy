#include <stdio.h>

int add_ten(int a);
void add_ten2(int *pa);
int *sum(int a, int b);

int main(void)
{
	int a = 10;

	a = add_ten(a);
	printf("a : %d\n", a);

	int b = 10;

	add_ten2(&b);
	printf("b : %d\n", b);

	int *resp;

	resp = sum(10, 20);
	printf("두 정수의 합 : %d\n", *resp);

	return 0;
}

int add_ten(int a)
{
	a = a + 10;

	return a;
}

void add_ten2(int *pa)
{
	*pa = *pa + 10;
}

int *sum(int a, int b)
{
	static int res;

	res = a + b;

	return &res;
}
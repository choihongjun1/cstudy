#include <stdio.h>

int main(void)
{
	int a;
	double b;
	char c;

	printf("int형 변수의 주소 : %p\n", &a);
	printf("double형 변수의 주소 : %p\n", &b);
	printf("char형 변수의 주소 : %p\n", &c);

	int d;
	int *pd;

	pd = &d;
	*pd = 10;

	printf("포인터로 d값 출력 : %d\n", *pd);
	printf("변수명으로 d값 출력 : %d\n", d);

	int e = 10, f = 15, total;
	double avg;
	int *pe, *pf;
	int *pt = &total;
	double *pg = &avg;

	pe = &e;
	pf = &f;

	*pt = *pe + *pf;
	*pg = *pt / 2.0;

	printf("두 정수의 값 : %d, %d\n", *pe, *pf);
	printf("두 정수의 합 : %d\n", *pt);
	printf("두 정수의 평균 : %.1lf\n", *pg);

	int i = 10, h = 20;
	const int *pi = &i;

	printf("변수 i의 값 : %d\n", *pi);
	pi = &h;
	printf("변수 h의 값 : %d\n", *pi);
	pi = &i;
	i = 20;
	printf("변수 i의 값 : %d\n", *pi);

	return 0;
}
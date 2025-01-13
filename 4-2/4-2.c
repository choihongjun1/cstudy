#include <stdio.h>

int main(void)
{
	int a = 20, b = 3;
	double res;

	res = ((double)a) / ((double)b);
	printf("a = %d, b = %d\n", a, b);
	printf("a / b의 결과 : %.1lf\n", res);

	a = (int)res;
	printf("(int)%.1lf의 결과 : %d\n", res, a);

	int c = 10;
	double d = 3.4;

	printf("int형 변수의 크기 : %d\n", sizeof(c));
	printf("double형 변수의 크기 : %d\n", sizeof(d));
	printf("정수형 상수의 크기 : %d\n", sizeof(10));
	printf("수식의 결괏값의 크기 : %d\n", sizeof(1.5 + 3.4));
	printf("char 자료형의 크기 : %d\n", sizeof(char));

	int e = 10, f = 20;
	int res2 = 2;

	e += 20;
	res2 *= f + 10;

	printf("e = %d, f = %d\n", e, f);
	printf("res2 = %d\n", res2);

	int g = 10, h = 20;
	int res3;

	res3 = (++g, ++h);

	printf("g : %d, h : %d\n", g, h);
	printf("res3 : %d\n", res3);

	res3 = (g > h) ? g : h;
	printf("큰 값 : %d\n", res3);

	int i = 10, j = 12;

	printf("i & j : %d\n", i & j);
	printf("i ^ j : %d\n", i ^ j);
	printf("i | j : %d\n", i | j);
	printf("~i : %d\n", ~i);
	printf("i << 1 : %d\n", i << 1);
	printf("i >> 2 : %d\n", i >> 2);

	int k = 10, l = 5;
	int res4;

	res4 = k / l * 2;
	printf("res4 = %d\n", res4);
	res4 = ++k * 3;
	printf("res4 = %d\n", res4);
	res4 = k > l && k != 5;
	printf("res4 = %d\n", res4);
	res4 = k % 3 == 0;
	printf("res4 = %d\n", res4);

	return 0;
}
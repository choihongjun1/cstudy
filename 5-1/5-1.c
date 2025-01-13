#include <stdio.h>

int main(void)
{
	int a = 20;
	int b = 0;

	if (a > 10)
	{
		b = a;
	}

	printf("a : %d, b : %d\n", a, b);

	int c = 10;

	if (c >= 10)
	{
		c = 1;
	}
	else
	{
		c = -1;
	}

	printf("c : %d\n", c);

	int d = 0, e = 0;

	if (d > 0)
	{
		e = 1;
	}
	else if (d == 0)
	{
		e = 2;
	}
	else if (d == -1)
	{
		e = 3;
	}
	else
	{
		e = 4;
	}

	printf("e : %d\n", e);

	return 0;
}
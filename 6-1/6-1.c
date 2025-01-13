#include <stdio.h>

int main(void)
{
	int a = 1;

	while (a < 10)
	{
		a = a * 2;
	}

	printf("a : %d\n", a);

	int b = 1;
	int i;

	for (i = 0; i < 3; i++)
	{
		b = b * 2;
	}
	printf("b : %d\n", b);

	int c = 1;

	do
	{
		c = c * 2;
	} while (c < 10);
	printf("c : %d\n", c);

	return 0;
}
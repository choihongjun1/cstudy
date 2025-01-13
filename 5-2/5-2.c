#include <stdio.h>

int main(void)
{
	int a = 20, b = 10;

	if (a > 10)
	{
		if (b >= 0)
		{
			b = 1;
		}
		else
		{
			b = -1;
		}
	}

	printf("a : %d, b : %d\n", a, b);

	int c = 10, d = 20;

	if (d < 0)
	{
		if (d > 0)
		{
			printf("ok");
		}
	}
	else
	{
		printf("ok\n");
	}

	int rank = 2, m = 0;

	switch (rank)
	{
	case 1:
		m = 300;
		break;
	case 2:
		m = 200;
		break;
	case 3:
		m = 300;
		break;
	default:
		m = 10;
		break;
	}

	printf("m : %d\n", m);

	return 0;
}
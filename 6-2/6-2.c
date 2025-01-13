#include <stdio.h>

int main(void)
{
	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	int k, l;

	for (k = 2; k <= 9; k++)
	{
		for (l = 1; l <= 9; l++)
		{
			printf("%d * %d = %d\n", k, l, k * l);
		}
	}

	int m;
	int sum = 0;

	for (m = 1; m <= 10; m++)
	{
		sum += m;
		if (sum > 30) break;
	}

	printf("누적한 값 : %d\n", sum);
	printf("마지막으로 더한 값 : %d\n", m);

	int n;
	int sum2 = 0;

	for (n = 1; n <= 100; n++)
	{
		if ((n % 3) == 0)
		{
			continue;
		}
		sum2 += n;
	}

	printf("3배수 제외 1부터 100까지 합 : %d\n", sum2);

	return 0;
}
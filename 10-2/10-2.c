#include <stdio.h>

void print_ary(int *pa);
void print_ary2(int *pa, int size);
void input_ary(double *pa, int size);
double find_max(double *pa, int size);

int main(void)
{
	int ary[5] = { 10, 20, 30, 40, 50 };

	print_ary(ary);
	printf("\n");

	int ary1[5] = { 10, 20, 30, 40, 50 };
	int ary2[7] = { 10, 20, 30, 40, 50, 60, 70 };

	print_ary2(ary1, 5);
	printf("\n");
	print_ary2(ary2, sizeof(ary2) / sizeof(ary2[0]));
	printf("\n");

	double ary3[5];
	double max;
	int size = sizeof(ary3) / sizeof(ary3[0]);

	input_ary(ary3, size);
	max = find_max(ary3, size);
	printf("배열의 최댓값 : %.1lf\n", max);

	return 0;
}

void print_ary(int *pa)
{
	int i;

	for (i = 0; i < 5; i++)
	{
		printf("%d ", pa[i]);
	}
}

void print_ary2(int *pa, int size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		printf("%d ", pa[i]);
	}
}

void input_ary(double *pa, int size)
{
	int i;

	printf("%d개의 실수값 입력 : ", size);
	for (i = 0; i < size; i++)
	{
		scanf("%lf", pa + i);
	}
}

double find_max(double *pa, int size)
{
	double max;
	int i;

	max = pa[0];
	for (i = 1; i < size; i++)
	{
		if (pa[i] > max) max = pa[i];
	}

	return max;
}
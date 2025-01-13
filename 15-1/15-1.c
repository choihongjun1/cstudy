#include <stdio.h>

void swap_ptr(char **ppa, char **ppb);
void print_str(char **pps, int cnt);
void print_ary(int (*)[4]);

int main(void)
{
	int a = 10;
	int *pi;
	int **ppi;

	pi = &a;
	ppi = &pi;

	printf("----------------------------------------------------\n");
	printf("변수    변숫값     &연산       *연산       **연산\n");
	printf("----------------------------------------------------\n");
	printf("  a%12d%12u\n", a, &a);
	printf(" pi%12u%12u%12d\n", pi, &pi, *pi);
	printf("ppi%12u%12u%12u%12u\n", ppi, &ppi, *ppi, **ppi);
	printf("----------------------------------------------------\n");

	char *pa = "success";
	char *pb = "failure";

	printf("pa -> %s, pb -> %s\n", pa, pb);
	swap_ptr(&pa, &pb);
	printf("pa -> %s, pb -> %s\n", pa, pb);

	char* ptr_ary[] = { "eagel", "tiger", "lion", "squirrel" };
	int count;

	count = sizeof(ptr_ary) / sizeof(ptr_ary[0]);
	print_str(ptr_ary, count);

	int ary[5];

	printf("ary의 값 : %u\t", ary);
	printf("ary의 주소 : %u\n", &ary);
	printf("ary + 1 : %u\t", ary + 1);
	printf("&ary + 1 : %u\n", &ary + 1);

	int ary2[3][4] = { {1,2,3,4}, {5,6,7,8}, {9,10,11,12} };
	int(*pc)[4];
	int i, j;

	pc = ary2;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%5d", pc[i][j]); 
		}
		printf("\n");
	}

	print_ary(ary2);

	return 0;

}

void swap_ptr(char **ppa, char **ppb)
{
	char *pt;

	pt = *ppa;
	*ppa = *ppb;
	*ppb = pt;
}

void print_str(char **pps, int cnt)
{
	int i;

	for (i = 0; i < cnt; i++)
	{
		printf("%s\n", pps[i]);
	}
}

void print_ary(int (*pa)[4])
{
	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%5d", pa[i][j]);
		}
		printf("\n");
	}
}
#include <stdio.h>

int main(void)
{
	int ary[3];
	int i;

	*(ary + 0) = 10;
	*(ary + 1) = *(ary + 0) + 10;

	printf("세 번째 배열 요소에 키보드 입력 : ");
	scanf("%d", ary + 2);

	for (i = 0; i < 3; i++)
	{
		printf("%5d", *(ary + i));
	}
	printf("\n");

	int ary2[3];
	int *pa = ary2;
	int j;

	*pa = 10;
	*(pa + 1) = 20;
	pa[2] = pa[0] + pa[1];

	for (j = 0; j < 3; j++)
	{
		printf("%5d", pa[j]); 
	}
	printf("\n");

	int ary3[3] = { 10, 20, 30 };
	int* pa2 = ary3;
	int k;

	printf("배열의 값 : ");
	for (k = 0; k < 3; k++)
	{
		printf("%d ", *pa2);
		pa2++;
	}
	printf("\n");

	int ary4[5] = { 10,20,30,40,50 };
	int *pa3 = ary4;
	int *pa4 = pa3 + 3;

	printf("pa3 : %u\n", pa3);
	printf("pa4 : %u\n", pa4);
	pa3++;
	printf("pa4 - pa3 : %u\n", pa4 - pa3);

	printf("앞에 있는 배열 요소의 값 출력 : ");
	if (pa3 < pa4) printf("%d\n", *pa3);
	else printf("%d\n", *pa4);

	return 0;
}
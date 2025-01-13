#include <stdio.h>

int get_num(void);
void print_char(char ch, int count);
void print_line(void);
void fruit(int count);

int main(void)
{
	int result;
	result = get_num();
	printf("반환값 : %d\n", result);

	print_char('@', 5);

	print_line();
	printf("학번	이름	전공	학점\n");
	print_line();

	fruit(1);

	return 0;
}

int get_num(void)
{
	int num;

	printf("양수 입력 : ");
	scanf("%d", &num);
	while (num < 0)
	{
		printf("양수를 입력하세요\n");
		printf("양수 입력 : ");
		scanf("%d", &num);
	}

	return num;
}

void print_char(char ch, int count)
{
	int i;
	
	for (i = 0; i < count; i++)
	{
		printf("%c", ch);
	}

	return;
}

void print_line(void)
{
	int i;

	for (i = 0; i < 50; i++)
	{
		printf("-");
	}
	printf("\n");
}

void fruit(int count)
{
	printf("apple\n");
	if (count == 3) return;
	fruit(count + 1);
}
#include <stdio.h>

void my_gets(char *str, int size);

int main(void)
{
	char ch;
	int i;

	for (i = 0; i < 3; i++)
	{
		scanf("%c", &ch);
		printf("%c", ch);
	}
	printf("\n");

	int res;
	char ch2;

	while (1)
	{
		res = scanf("%c", &ch2);
		if (res == -1) break;
		printf("%d ", ch2);
	}

	char str[7];

	my_gets(str, sizeof(str));
	printf("입력한 문자열 : %s\n", str);

	int num, grade;

	printf("학번 입력 : ");
	scanf("%d", &num);
	getchar();
	printf("학점 입력 : ");
	grade = getchar();
	printf("학점 : %d, 학점 : %c", num, grade);

	return 0;
}

void my_gets(char *str, int size)
{
	int ch;
	int i = 0;

	ch = getchar();
	while ((ch != '\n') && (i < size - 1))
	{
		str[i] = ch;
		i++;
		ch = getchar();
	}
	str[i] = '\0';
}
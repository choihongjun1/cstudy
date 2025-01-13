#include <stdio.h>

int main(void)
{
	char small, cap = 'G';

	if ((cap >= 'A') && (cap <= 'Z'))
	{
		small = cap + ('a' - 'A');
	}

	printf("대문자 : %c %c", cap, '\n');
	printf("소문자 : %c %c", small, '\n');

	char ch1, ch2;

	scanf("%c%c", &ch1, &ch2);
	printf("[%c%c]", ch1, ch2);
	printf("\n");

	while (getchar() != '\n');

	int ch;

	ch = getchar();
	printf("입력한 문자 : ");
	putchar(ch);
	putchar('\n');

	return 0;
}
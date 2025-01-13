#include <stdio.h>

int main(void)
{
	printf("%d\n", 12);
	printf("%d\n", 014);
	printf("%d\n", 0xc);
	printf("%o\n", 12);
	printf("%x\n", 12);
	printf("%X\n", 12);
	printf("%.1lf\n", 1e6);
	printf("%.7lf\n", 3.14e-5);
	printf("%le\n", 0.0000314);
	printf("%.2le\n", 0.0000314);
	printf("%c\n", 'A');
	printf("%s\n", "A");
	printf("%c은 %s입니다.\n", '1', "first");

	return 0;
}
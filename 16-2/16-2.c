#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_str(char** ps);

int main(int argc, char **argv)
{
	char temp[80];
	char* str[3];
	int i;

	for (i = 0; i < 3; i++)
	{
		printf("문자열을 입력하세요 : ");
		gets(temp);
		str[i] = (char*)malloc(strlen(temp) + 1);
		strcpy(str[i], temp);
	}

	for (i = 0; i < 3; i++)
	{
		printf("%s\n", str[i]);
	}

	for (i = 0; i < 3; i++)
	{
		free(str[i]);
	}

	char temp1[80];
	char* str1[21] = { 0 };
	int j = 0;

	while (j < 20)
	{
		printf("문자열을 입력하세요 : ");
		gets(temp1);
		if (strcmp(temp1, "end") == 0) break;
		str1[j] = (char*)malloc(strlen(temp1) + 1);
		strcpy(str1[j], temp1);
		j++;
	}
	print_str(str1);

	for (j = 0; str1[j] != NULL; j++)
	{
		free(str1[j]);
	}

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return 0;
}

void print_str(char** ps)
{
	while (*ps != NULL)
	{
		printf("%s\n", *ps);
		ps++;
	}
}
#include <stdio.h>
#include <string.h>

int main(void)
{
	FILE* fp;
	int ch;
	char str[] = "banana";
	int i;

	fp = fopen("a.txt", "r");
	if (fp == NULL)
	{
		printf("파일이 열리지 않았습니다.\n");
		return 1;
	}
	printf("파일이 열렸습니다.\n");

	while (1)
	{
		ch = fgetc(fp);
		if (ch == EOF)
		{
			break;
		}
		putchar(ch);
	}
	fclose(fp);
	printf("\n");

	fp = fopen("b.txt", "w");
	if (fp == NULL)
	{
		printf("파일을 만들지 못했습니다.\n");
		return 1;
	}

	i = 0;
	while (str[i] != '\0')
	{
		fputc(str[i], fp);
		i++;
	}
	fputc('\n', fp);
	fclose(fp);

	int ch1;

	while (1)
	{
		ch1 = getchar();
		if (ch1 == EOF)
		{
			break;
		}
		putchar(ch1);
	}

	int ch2;

	while (1)
	{
		ch2 = fgetc(stdin);
		if (ch2 == EOF)
		{
			break;
		}
		fputc(ch2, stdout);
	}

	int ary[10] = {13,10,13,13,10,26,13,10,13,10};
	int res;

	fp = fopen("c.txt", "wb");
	for (i = 0; i < 10; i++)
	{
		fputc(ary[i], fp);
	}
	fclose(fp);

	fp = fopen("c.txt", "rt");
	while (1)
	{
		res = fgetc(fp);
		if (res == EOF) break;
		printf("%4d", res);
	}
	fclose(fp);

	char str1[20];

	fp = fopen("d.txt", "a+");
	if (fp == NULL)
	{
		printf("파일을 만들지 못했습니다\n");
		return 1;
	}

	printf("\n");

	while (1)
	{
		printf("파일 이름 ");
		scanf("%s", str1);
		if (strcmp(str1, "end") == 0)
		{
			break;
		}
		else if (strcmp(str1, "list") == 0)
		{
			fseek(fp, 0, SEEK_SET);
			while (1)
			{
				fgets(str1, sizeof(str1), fp);
				if (feof(fp))
				{
					break;
				}
				printf("%s", str1);
			}
		}
		else
		{
			fprintf(fp, "%s\n", str1);
		}
	}
	fclose(fp);

	return 0;
}
#include <stdio.h>
#include <string.h>

char *my_strcpy(char *pd, char *ps);
char *my_strcat(char *pd, char *ps);
int my_strlen(char *ps);
int my_strcmp(char *pa, char *pb);

int main(void)
{
	char str1[80] = "strawberry";
	char str2[80] = "apple";
	char *ps1 = "banana";
	char *ps2 = str2;

	printf("최초 문자열 : %s\n", str1);
	strcpy(str1, str2);
	printf("바뀐 문자열 : %s\n", str1);
	strcpy(str1, ps1);
	printf("바뀐 문자열 : %s\n", str1);
	strcpy(str1, ps2);
	printf("바뀐 문자열 : %s\n", str1);
	strcpy(str1, "banana");
	printf("바뀐 문자열 : %s\n", str1);

	char str[20] = "mango tree";

	strncpy(str, "apple-pie", 5);
	printf("%s\n", str);

	char str3[80] = "straw";

	strcat(str3, "berry");
	printf("%s\n", str3);
	strncat(str3, "piece", 3);
	printf("%s\n", str3);

	char str4[80], str5[80];
	char *resp;

	printf("2개의 과일 이름 입력 : ");
	scanf("%s%s", str4, str5);
	if (strlen(str4) > strlen(str5))
		resp = str4;
	else
		resp = str5;
	printf("이름이 긴 과일은 : %s\n", resp);

	char str6[80] = "pear";
	char str7[80] = "peach";

	printf("사전에 나중에 나오는 과일 이름 : ");
	if (strcmp(str6, str7) > 0)
		printf("%s\n", str6);
	else
		printf("%s\n", str7);

	char str8[80] = "strawberry";

	printf("바꾸기 전 문자열 : %s\n", str8);
	my_strcpy(str8, "apple");
	printf("바꾼 후 문자열 : %s\n", str8);
	printf("다른 문자열 대입 : %s\n", my_strcpy(str8, "kiwi"));

	return 0;
}

char *my_strcpy(char *pd, char *ps)
{
	char *po = pd;

	while (*ps != '\0')
	{
		*pd = *ps;
		pd++;
		ps++;
	}
	*pd = '\0';

	return po;
}

char *my_strcat(char *pd, char *ps)
{
	char *po = pd;

	while (*pd != '\0')
	{
		pd++;
	}
	while (*ps != '\0')
	{
		*pd = *ps;
		pd++;
		ps++;
	}
	*pd = '\0';
	return po;
}

int my_strlen(char *ps)
{
	int cnt = 0;
	while (*ps != '\0')
	{
		cnt++;
		ps++;
	}
	return cnt;
}

int my_strcmp(char *pa, char *pb)
{
	while ((*pa == *pb) && (*pa != '\0'))
	{
		pa++;
		pb++;
	}

	if (*pa > *pb) return 1;
	else if (*pa < *pb) return -1;
	else return 0;
}
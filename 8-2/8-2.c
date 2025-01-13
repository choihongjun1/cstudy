#include <stdio.h>
#include <string.h>

int main(void) 
{
	char str[80] = "applejam";

	printf("최초 문자열 : %s\n", str);
	printf("문자열 입력 : ");
	scanf("%s", str);
	printf("입력 후 문자열 : %s\n", str);

	char str1[80] = "cat";
	char str2[80];

	strcpy(str1, "tiger");
	strcpy(str2, str1);
	printf("%s, %s\n", str1, str2);

	char str3[80];

	printf("문자열 입력 : ");
	gets(str3);
	puts("입력된 문자열 : ");
	puts(str3);

	return 0; 
}
#include <stdio.h>
#include <string.h>

int main(void)
{
	printf("apple이 저장된 시작 주소 값 : %p\n", "apple");
	printf("두 번째 문자의 주소 값 : %p\n", "apple" + 1);
	printf("첫 번째 문자 : %c\n", *"apple");
	printf("두 번째 문자 : %c\n", *("apple" + 1));
	printf("배열로 표현한 세 번째 문자 : %c\n", "apple"[2]);

	char *dessert = "apple";

	printf("오늘 후식은 %s입니다.\n", dessert);
	dessert = "banana";
	printf("내일 후식은 %s입니다.\n", dessert);

	char str[80];

	printf("문자열 입력 : ");
	scanf("%s", str);
	printf("첫 번째 단어 : %s\n", str);
	scanf("%s", str);
	printf("버퍼에 남아 있는 두 번째 단어 : %s\n", str);

	while (getchar() != '\n');

	char str2[80];

	printf("공백이 포함된 문자열 입력 : ");
	gets(str2);
	printf("입력한 문자열은 %s입니다.\n", str2);

	char str3[80];

	printf("공백이 포함된 문자열 입력 : ");
	fgets(str3, sizeof(str3), stdin);
	str3[strlen(str3) - 1] = '\0';
	printf("입력된 문자열은 %s입니다.\n", str3);

	int age;
	char name[20];

	printf("나이 입력 : ");
	scanf("%d", &age);
	fgetc(stdin);

	printf("이름 입력 : ");
	gets(name);
	printf("나이 : %d, 이름 : %s\n", age, name);

	char str4[80] = "apple juice";
	char *ps = "banana";

	puts(str4);
	fputs(ps, stdout);
	puts("milk");

	int i = 0;
	char str5[20];
	char ch;

	do
	{
		ch = getchar();
		str5[i] = ch;
		i++;
	} while (ch != '\n');

	str5[--i] = '\0';
	printf("%s", str5);

	return 0;
}
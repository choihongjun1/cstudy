#include <stdio.h>
#include <string.h>

int main(void)
{
	FILE* ifp, * ofp;
	char str[80];
	char* res;

	ifp = fopen("a.txt", "r");
	if (ifp == NULL)
	{
		printf("입력 파일을 열지 못했습니다.\n");
		return 1;
	}

	ofp = fopen("b.txt", "w");
	if (ofp == NULL)
	{
		printf("출력 파일을 열지 못했습니다.\n");
		return 1;
	}

	while (1)
	{
		res = fgets(str, sizeof(str), ifp);
		if (res == NULL)
		{
			break;
		}
		str[strlen(str) - 1] = '\0';
		fputs(str, ofp);
		fputs(" ", ofp);
	}

	fclose(ofp);
	fclose(ifp);

	char name[20];
	int kor, eng, math;
	int total;
	double avg;
	int res1;

	ifp = fopen("c.txt", "r");
	if (ifp == NULL)
	{
		printf("입력 파일을 열지 못했습니다.\n");
		return 1;
	}

	ofp = fopen("d.txt", "w");
	if (ofp == NULL)
	{
		printf("출력 파일을 열지 못했습니다.\n");
		return 1;
	}

	while (1)
	{
		res1 = fscanf(ifp, "%s%d%d%d", name, &kor, &eng, &math);
		if (res1 == EOF)
		{
			break;
		}
		total = kor + eng + math;
		avg = total / 3.0;
		fprintf(ofp, "%s%5d%7.1lf\n", name, total, avg);
	}

	fclose(ifp);
	fclose(ofp);

	FILE* fp;
	int age;
	char name1[20];

	fp = fopen("e.txt", "r");

	fscanf(fp, "%d", &age);
	fgets(name1, sizeof(name1), fp);
	
	printf("나이 : %d, 이름 : %s", age, name1);
	fclose(fp);

	int num = 10;
	int res2;

	ifp = fopen("f.txt", "wt");
	fprintf(ifp, "%d", num);

	ofp = fopen("g.txt", "wb");
	fwrite(&num, sizeof(num), 1, ofp);

	fclose(ifp);
	fclose(ofp);

	ofp = fopen("g.txt", "rb");
	fread(&res2, sizeof(res2), 1, ofp);
	printf("%d", res2);

	fclose(ofp);

	return 0;
}
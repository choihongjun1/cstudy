#include <stdio.h>
#include "point.h"
#include "line.h"

void input_data(int*, int*);
double average(int a, int b);
int input_data1(void);
double average1(void);
void print_data(double);

int count = 0;
static int total = 0;

int main(void)
{
	int a, b;
	double avg;

	input_data(&a, &b);
	avg = average(a, b);
	printf("%d와 %d의 평균 : %.1lf\n", a, b, avg);

	total = input_data1();
	avg = average1();
	print_data(avg);

	Line aa = { {1,2},{5,6} };
	Point bb;

	bb.x = (aa.first.x + aa.second.x) / 2;
	bb.y = (aa.first.y + aa.second.y) / 2;
	printf("선의 가운데 점의 좌표 : (%d, %d)\n", bb.x, bb.y);

	return 0;
}

void print_data(double avg)
{
	printf("입력한 양수의 개수 : %d\n", count);
	printf("전체 합과 평균 : %d, %.1lf\n", total, avg);
}
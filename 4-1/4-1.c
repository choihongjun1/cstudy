#include <stdio.h>

int main(void)
{
	int a, b;
	int sum, sub, mul, inv;

	a = 10;
	b = 20;
	sum = a + b;
	sub = a - b;
	mul = a * b;
	inv = -a;

	printf("aÀÇ °ª : %d, bÀÇ °ª : %d\n", a, b);
	printf("µ¡¼À : %d\n", sum);
	printf("»¬¼À : %d\n", sub);
	printf("°ö¼À : %d\n", mul);
	printf("aÀÇ À½¼ö ¿¬»ê : %d\n", inv);

	double apple;
	int banana;
	int orange;

	apple = 5.0 / 2.0;
	banana = 5 / 2;
	orange = 5 % 2;

	printf("apple : %.1lf\n", apple);
	printf("banana : %d\n", banana);
	printf("orange : %d\n", orange);

	int aa = 10;
	int bb = 10;

	++aa;
	--bb;

	printf("aa : %d\n", aa);
	printf("bb : %d\n", bb);

	int c = 5, d = 5;
	int pre, post;

	pre = (++c) * 3;
	post = (d++) * 3;

	printf("Áõ°¨ ¿¬»ê ÈÄ ÃÊ±ê°ª c = %d, d = %d\n", c, d);
	printf("ÀüÀ§Çü : (++c) * 3 = %d, ÈÄÀ§Çü : (d++) * 3 = %d\n", pre, post);

	int e = 10, f = 20, g = 10;
	int res;

	res = (e > f);
	printf("e > f : %d\n", res);
	res = (e >= f);
	printf("e >= f : %d\n", res);
	res = (e < f);
	printf("e < f : %d\n", res);
	res = (e <= f);
	printf("e <= f : %d\n", res);
	res = (e <= g);
	printf("e <= g : %d\n", res);
	res = (e == f);
	printf("e == f : %d\n", res);
	res = (e != g);
	printf("e != g : %d\n", res);

	int cc = 30;
	int res2;

	res2 = (cc > 10) && (cc < 20);
	printf("(cc > 10) && (cc < 20): %d\n", res2);
	res2 = (cc < 10) || (cc > 20);
	printf("(cc < 10) || (cc > 20): %d\n", res2);
	res2 = !(cc >= 30);
	printf("!(cc >= 30) : %d", res2);

	return 0;
}
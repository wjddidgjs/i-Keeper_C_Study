#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int money;
	int a, b, c, d = 0;
	scanf("%d", &money);
	a = money / 500;
	money %= 500;
	b = money / 100;
	money %= 100;
	c = money / 50;
	money %= 50;
	d = money / 10;

	printf("%d %d %d %d", a, b, c, d);
}

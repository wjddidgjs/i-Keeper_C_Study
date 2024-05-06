#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main()
{
	int a[30] = { 0 };
	int b;
	for (int i = 0; i < 28; i++)
	{
		scanf("%d", &b);
		a[b - 1] += 1;
	}

	for (int i = 0; i < 30; i++)
	{
		if (a[i] != 1)
			printf("%d\n", i + 1);
	}

	return 0;
}

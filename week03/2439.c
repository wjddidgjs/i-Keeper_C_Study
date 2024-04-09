#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int count;
	scanf("%d", &count);
	int count_1 = count;
	for (int i = 0; i < count; i++)
	{
		for (int q = count_1; q > 1; q--)
			printf(" ");
		for (int j = 0; j < i+1; j++)
			printf("*");
		count_1--;

		printf("\n");
	}
	return 0;
}

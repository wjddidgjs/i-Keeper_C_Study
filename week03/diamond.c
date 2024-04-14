#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n, count_1, count_2;
	int count = 1;
	scanf("%d", &n);
	count_1 = n;
	count_2 = n-1;
	for (int i = 0; i < n; i++)
	{
		for (int j = count_1; j > 1; j--)
		{
			printf(" ");
		}
		count_1--;

		for (int q = 0; q < 2 * i + 1; q++)
		{
			printf("*");
		}
		printf("\n");
	}

	for (int k = 0; k < n - 1; k++)
	{
		for (int a = 0; a < k+1; a++)
		{
			printf(" ");
		}
		for (int b = 0; b <2*count_2 -1; b++)
		{
			printf("*");
		}
		count_2--;
		printf("\n");
	}
	return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int factorial(int n)
{
	int result = 1; //항등원
	for (int i = 1; i < n + 1; i++)
		result *= i;

	return result;
}


int main()
{
	int n;
	scanf("%d", &n);
	printf("%d", factorial(n));
}

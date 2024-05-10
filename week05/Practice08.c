#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int fibonacci(int n)
{
	if (n < 2)
		return n;
	return (fibonacci(n - 1) + fibonacci(n - 2));
}

int main()
{
	int inputNum;
	scanf("%d", &inputNum);
	printf("%d", fibonacci(inputNum));
	return 0;
}

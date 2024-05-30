#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int fac(int n) 
{
	if (n < 2)
		return;
	return n * f(n-1);
}
int main()
{
	int n;
	scanf("%d", &n);
	printf("%d", fac(n));

  return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main()
{
	char a[100] = { 0 };
	scanf("%s", &a);
	printf("%d", strlen(a));
	return 0;
}

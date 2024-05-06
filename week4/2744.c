#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main()
{
	char a[100] = { 0 };
	scanf("%s", &a);
	for (int i = 0; i < strlen(a); i++) //a의 아스키 코드 값 : 97, A의 아스키 코드 값 : 65
	{
		if (a[i] > 96)
			a[i] = a[i] - 32; // a[i] -= 32
		else if (a[i] < 91)
			a[i] = a[i] + 32; // a[i] += 32
	}

	for (int i = 0; i < strlen(a); i++)
		printf("%c", a[i]);
  return 0;
}

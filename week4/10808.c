#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main()
{
	int a[26] = { 0 };
	char b[100] = { 0 };
	int c = 0;
	scanf("%s", &b);
	for (int i = 0; i < strlen(b); i++) // a의 아스키 코드의 값 : 97
	{
		c = b[i] - 97; //만약 b[0]이 a라면 c의 값은 0이 된다
		a[c] += 1; //c의 값에 따라 a의 배열에 해당하는 값이 1증가한다
	}
	for (int i = 0; i < 26; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}

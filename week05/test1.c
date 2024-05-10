#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int sum(int inputNum)
{
	int sumNum = 0;
	for (int i = 1; i < inputNum+1; i++)
	sumNum += i;

	return sumNum;
}

int main()
{
	int inputNum;
	scanf("%d", &inputNum);
	printf("%d",sum(inputNum));
}

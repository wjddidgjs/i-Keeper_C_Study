#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main()
{
	int a, b, c;
	int d[100][100], e[100][100] = { 0 };
	scanf("%d %d", &a, &b);
	for (int i = 0; i < a; i++) //d라는 행렬을 설정
	{
		for (int j = 0; j < b; j++)
		{
			scanf("%d ", &c);
			d[i][j] = c; 
		}
	}

	for (int i = 0; i < a; i++) //e라는 행렬을 설정
	{
		for (int j = 0; j < b; j++)
		{
			scanf("%d ", &c);
			e[i][j] = c;
		}
	}

	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
			printf("%d ", d[i][j] + e[i][j]); //행렬의 합들을 출력
		printf("\n");
	}
	return 0;
}

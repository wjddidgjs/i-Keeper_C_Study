#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int arrSort(int n, int arr[])
{
	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < n - i; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				//내림차순으로 정렬
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	return arr[0];
}

int main()
{
	int n;
	scanf("%d", &n);
	int arr[100];
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	printf("%d", arrSort(n,arr));
}

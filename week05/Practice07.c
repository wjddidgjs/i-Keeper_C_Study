#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void printSort(int size, int arr[])
{
	for (int i = 1; i < size; i++)
	{
		for (int j = 0; j < size - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}

	for (int i = 0; i < size; i++)
		printf("%d", arr[i]);
	return 0;
}

int main()
{
	int size;
	int arr[100];

	scanf("%d", &size);
	for (int i = 0; i < size; i++)
		scanf("%d", &arr[i]);

	printSort(size, arr);
	return 0;
}

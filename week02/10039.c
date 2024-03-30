#include <stdio.h>

int main()
{
	int A, B;
	int i = 0;
	B = 0;
	for (i == 0; i < 5; i++)
	{
		scanf_s("%d", &A);
		if (A < 40)
			A = 40;
		B += A;
	}
	printf("%d", B / 5);
  // scanf로 5줄을 사용하니 입력이 6개가 나와서 for문으로 사용했습니다..
}

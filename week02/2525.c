#include <stdio.h>

int main()
{
	int A, B, C;
	scanf_s("%d %d", &A, &B);
	scanf_s("%d", &C);
	if (B + C >= 60)
	{
		A += (B + C) / 60;
		B = (B + C) - ((B + C) / 60) * 60;
	}
	else if (B + C < 60)
		B = B + C;

	if (A >= 24)
		A = A - 24;
	printf("%d %d", A, B);

	return 0;
}

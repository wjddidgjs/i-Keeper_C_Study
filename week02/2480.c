#include <stdio.h>

int main()
{
	int A, B, C;
	int D = 0;
	scanf_s("%d %d %d", &A, &B, &C);
	if (A == B && B == C && C == A)
		D = 10000 + A * 1000;
	else if (A == B)
		D = 1000 + A * 100;
	else if (B == C)
		D = 1000 + B * 100;
	else if (C == A)
		D = 1000 + C * 100;
	else
	{
	if (A > B && A > C)
		D = A * 100;
	else if (B > A && B > C)
		D = B * 100;
	else if (C > A && C > B)
		D = C * 100;
	}
	printf("%d", D);
}

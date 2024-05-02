#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n, m;
	int c, d;
	int temp;
	scanf("%d %d", &n, &m); //n : 바구니 개수, m : 바구니의 공을 바꾸는 횟수
	int a[100]; //a라는 배열의 크기를 100으로 만듦
	for (int i = 0; i < n; i++)
		a[i] = i + 1; //바구니의 번호에 맞게 값을 넣음 ex : 1번 바구니의 값 -> 1
	for (int i = 0; i < m; i++) //바구니의 공을 바꾸는 횟수만큼 반복
	{
		scanf("%d %d", &c, &d); //바구니의 어떤 번호와 바꿀지 입력 
		temp = a[d-1];
		a[d-1] = a[c-1];
		a[c-1] = temp; //스왑코드
	}
	for (int i = 0; i < n; i++)
		printf("%d ", a[i]); //바꾼 바구니의 값을 출력
}

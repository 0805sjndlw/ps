#include <stdio.h>

int main()
{
	int a, b, c;
	printf("세 개의 정수 입력: ");
	scanf_s("%d %d %d", &a, &b, &c);

	int max = (a > b) ? a : b;
	max = (max > c) ? max : c;

	printf("가장 큰 수: %d\n", max);
	return 0;
}
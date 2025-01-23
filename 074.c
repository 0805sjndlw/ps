#include <stdio.h>

int main()
{
	int smallSum, bigSum = 0;
	for (int i = 1; i <= 100; i++) {
		smallSum = 0;
		for (int j = 1; j <= i; j++) {
			smallSum += j;
		}
		bigSum += smallSum;
	}
	printf("1 + (1+2) + (1+2+3) + ... + (1+2+3+...+99+100): %d\n", bigSum);
	return 0;
}
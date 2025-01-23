#include <stdio.h>

void deci2hexa(int n);
void printNumber(int n);

int main()
{
	int n;
	printf("변환할 10진수를 입력: ");
	scanf_s("%d", &n);

	deci2hexa(n);

	return 0;
}

void deci2hexa(int n) {
	if (n) {
		deci2hexa(n / 16);
		printNumber(n % 16);
	}
}
void printNumber(int n) {
	if (n < 10) {
		printf("%c", n + 48);
	} else {
		printf("%c", n + 55);
	}
}
#include <stdio.h>

double calculateFinalValue(double a, double r, int n);

int main()
{
	double a, r;
	printf("월초 불입액을 입력하세요(단위: 만원): ");
	scanf_s("%lf", &a);
	printf("월이율을 입력하세요(단위: %%): ");
	scanf_s("%lf", &r);

	int n;
	printf("몇 개월만큼의 불입액을 보시겠습니까?");
	scanf_s("%d", &n);

	printf("%d 개월만큼의 불입액: %.2lf만원\n", n, calculateFinalValue(a, r, n));
	return 0;
}

double calculateFinalValue(double a, double r, int n) {
	double finalValue = a;
	for (int i = 0; i < n; i++) {
		finalValue *= ((100 + r) / 100);
	}
	return finalValue;
}
#include <stdio.h>

int main()
{
	double a, b;
	printf("2°³ÀÇ ºÎµ¿ ¼Ò¼öÁ¡ ÀÔ·Â: ");
	scanf_s("%lf %lf", &a, &b);

	printf("ÇÕ: %lf\n", a + b);
	printf("Â÷: %lf\n", a - b);
	printf("°ö: %lf\n", a * b);
	printf("¸ò(%lf / %lf): %lf\n", a, b, a / b);
	printf("¸ò(%lf / %lf): %lf\n", b, a, b / a);
	return 0;
}

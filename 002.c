#include <stdio.h>

int main()
{
	double a, b;
	printf("2���� �ε� �Ҽ��� �Է�: ");
	scanf_s("%lf %lf", &a, &b);

	printf("��: %lf\n", a + b);
	printf("��: %lf\n", a - b);
	printf("��: %lf\n", a * b);
	printf("��(%lf / %lf): %lf\n", a, b, a / b);
	printf("��(%lf / %lf): %lf\n", b, a, b / a);
	return 0;
}

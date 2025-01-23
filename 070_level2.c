#include <stdio.h>
#include <math.h>


typedef struct {
	// r = �Ǽ���(real part)
	double r;
	// i = (�����(imaginary part)
	double i;
}complexNumber;

char op(double n);

int main()
{
	complexNumber n1;
	printf("ù ��° ���Ҽ� �Է�(�Ǽ���, ����� ������ �Է�): ");
	scanf_s("%lf %lf", &n1.r, &n1.i);

	complexNumber n2;
	printf("�� ��° ���Ҽ� �Է�(�Ǽ���, ����� ������ �Է�): ");
	scanf_s("%lf %lf", &n2.r, &n2.i);

	// ����
	printf("����: (%.2lf %c %.2lfi) + (%.2lf %c %.2lfi) = (%.2lf %c %.2lfi)\n", n1.r, op(n1.i), fabs(n1.i), n2.r, op(n2.i), fabs(n2.i), n1.r + n2.r, op(n1.i + n2.i), fabs(n1.i + n2.i));
	// ����
	printf("����: (%.2lf %c %.2lfi) - (%.2lf %c %.2lfi) = (%.2lf %c %.2lfi)\n", n1.r, op(n1.i), fabs(n1.i), n2.r, op(n2.i), fabs(n2.i), n1.r - n2.r, op(n1.i - n2.i), fabs(n1.i - n2.i));
	// ����
	printf("���: (%.2lf %c %.2lfi) * (%.2lf %c %.2lfi) = (%.2lf %c %.2lfi)\n", n1.r, op(n1.i), fabs(n1.i), n2.r, op(n2.i), fabs(n2.i), (n1.r * n2.r - n1.i * n2.i), op(n1.r * n2.i + n1.i * n2.r), fabs(n1.r * n2.i + n1.i * n2.r));
	// ����
	printf("n1�� ����: |(%.2lf %c %.2lf)| = %.3lf\n", n1.r, op(n1.i), fabs(n1.i), sqrt(pow(n1.r, 2) + pow(n1.i, 2)));
	printf("n2�� ����: |(%.2lf %c %.2lf)| = %.3lf\n", n2.r, op(n2.i), fabs(n2.i), sqrt(pow(n2.r, 2) + pow(n2.i, 2)));
	return 0;
}

char op(double n) {
	return (n >= 0) ? '+' : '-';
}
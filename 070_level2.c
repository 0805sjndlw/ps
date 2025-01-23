#include <stdio.h>
#include <math.h>


typedef struct {
	// r = ½Ç¼öºÎ(real part)
	double r;
	// i = (Çã¼öºÎ(imaginary part)
	double i;
}complexNumber;

char op(double n);

int main()
{
	complexNumber n1;
	printf("Ã¹ ¹øÂ° º¹¼Ò¼ö ÀÔ·Â(½Ç¼öºÎ, Çã¼öºÎ ¼ø¼­·Î ÀÔ·Â): ");
	scanf_s("%lf %lf", &n1.r, &n1.i);

	complexNumber n2;
	printf("µÎ ¹øÂ° º¹¼Ò¼ö ÀÔ·Â(½Ç¼öºÎ, Çã¼öºÎ ¼ø¼­·Î ÀÔ·Â): ");
	scanf_s("%lf %lf", &n2.r, &n2.i);

	// µ¡¼À
	printf("µ¡¼À: (%.2lf %c %.2lfi) + (%.2lf %c %.2lfi) = (%.2lf %c %.2lfi)\n", n1.r, op(n1.i), fabs(n1.i), n2.r, op(n2.i), fabs(n2.i), n1.r + n2.r, op(n1.i + n2.i), fabs(n1.i + n2.i));
	// »¬¼À
	printf("»¬¼À: (%.2lf %c %.2lfi) - (%.2lf %c %.2lfi) = (%.2lf %c %.2lfi)\n", n1.r, op(n1.i), fabs(n1.i), n2.r, op(n2.i), fabs(n2.i), n1.r - n2.r, op(n1.i - n2.i), fabs(n1.i - n2.i));
	// °ö¼À
	printf("é¼À: (%.2lf %c %.2lfi) * (%.2lf %c %.2lfi) = (%.2lf %c %.2lfi)\n", n1.r, op(n1.i), fabs(n1.i), n2.r, op(n2.i), fabs(n2.i), (n1.r * n2.r - n1.i * n2.i), op(n1.r * n2.i + n1.i * n2.r), fabs(n1.r * n2.i + n1.i * n2.r));
	// Àý´ñ°ª
	printf("n1ÀÇ Àý´ñ°ª: |(%.2lf %c %.2lf)| = %.3lf\n", n1.r, op(n1.i), fabs(n1.i), sqrt(pow(n1.r, 2) + pow(n1.i, 2)));
	printf("n2ÀÇ Àý´ñ°ª: |(%.2lf %c %.2lf)| = %.3lf\n", n2.r, op(n2.i), fabs(n2.i), sqrt(pow(n2.r, 2) + pow(n2.i, 2)));
	return 0;
}

char op(double n) {
	return (n >= 0) ? '+' : '-';
}
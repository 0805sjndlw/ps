#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

typedef struct circle {
	int centerX;
	int centerY;
	int radius;
}CIRCLE;

int main()
{
	CIRCLE circle1;
	printf("���� �߽� x��ǥ �Է�: ");
	scanf_s("%d", &circle1.centerX);
	printf("���� �߽� y��ǥ �Է�: ");
	scanf_s("%d", &circle1.centerY);
	printf("���� ������ �Է�: ");
	scanf_s("%d", &circle1.radius);

	printf("���� �߽���: (%d, %d)\n", circle1.centerX, circle1.centerY);
	printf("���� ����: %lf\n", M_PI * (double)circle1.radius * (double)circle1.radius);
	printf("���� �ѷ�: %lf\n", 2 * M_PI * (double)circle1.radius);

	return 0;
}
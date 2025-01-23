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
	printf("원의 중심 x좌표 입력: ");
	scanf_s("%d", &circle1.centerX);
	printf("원의 중심 y좌표 입력: ");
	scanf_s("%d", &circle1.centerY);
	printf("원의 반지름 입력: ");
	scanf_s("%d", &circle1.radius);

	printf("원의 중심점: (%d, %d)\n", circle1.centerX, circle1.centerY);
	printf("원의 면적: %lf\n", M_PI * (double)circle1.radius * (double)circle1.radius);
	printf("원의 둘레: %lf\n", 2 * M_PI * (double)circle1.radius);

	return 0;
}
#include <stdio.h>

void calculateTime(int *hour, int *minute, int *second);

int main()
{
	int hour, minute, second;
	printf("초 단위 시간 입력: ");
	scanf_s("%d", &second);

	calculateTime(&hour, &minute, &second);

	printf("%d시 %d분 %d초\n", hour, minute, second);
	return 0;
}

void calculateTime(int *hour, int *minute, int *second) {
	*hour = *second / 3600;
	*minute = (*second % 3600) / 60;
	*second = (*second % 3600) % 60;
}
#include <stdio.h>

void swap(int *a, int *b);

int main()
{
	int b[10];
	printf("열 개의 정수를 입력: ");
	for (int i = 0; i < 10; i++) {
		scanf_s("%d", b + i);
	}
	
	// 버블 정렬
	for (int i = 0; i < sizeof(b) / sizeof(b[0]); i++) {
		for (int j = i; j < sizeof(b) / sizeof(b[0]); j++) {
			if (b[i] > b[j]) {
				swap(&b[i], &b[j]);
			}
		}
	}

	for (int i = 0; i < sizeof(b) / sizeof(b[0]); i++) {
		printf("%d ", b[i]);
	}
	return 0;
}

void swap(int *a, int *b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
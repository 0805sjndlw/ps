#include <stdio.h>

void swap(int *a, int *b);

int main()
{
	int b[10];
	printf("�� ���� ������ �Է�: ");
	for (int i = 0; i < 10; i++) {
		scanf_s("%d", b + i);
	}
	
	// ���� ����
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
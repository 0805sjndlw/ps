#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
	int n;
	printf("�Է��� ������ ������ �Է�: ");
	scanf_s("%d", &n);

	int max = INT_MIN;
	int* arr = malloc(n * sizeof(int));
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &arr[i]);
		max = (arr[i] > max) ? arr[i] : max;
	}
	printf("���� ū ��: %d\n", max);

	free(arr);
	return 0;
}
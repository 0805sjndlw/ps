#include <stdio.h>

void exchange(int *a, int *b);

int main()
{
	int a, b;
	printf("a, b �Է�: ");
	scanf_s("%d %d", &a, &b);
	
	printf("exchange() ��: a = %d b = %d\n", a, b);
	exchange(&a, &b);
	printf("exchange() ��: a = %d b = %d\n", a, b);
	return 0;
}

void exchange(int* a, int* b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
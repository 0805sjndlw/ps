#include <stdio.h>
#include <string.h>

int myItoa(char str[]);

int main()
{
	char str[100];
	printf("digit���� ������ ���ڿ� �Է�: ");
	gets(str);
	printf("%d\n", myItoa(str));
	return 0;
}

int myItoa(char str[]) {
	int value = 0, digit = 1;
	for (int i = strlen(str) - 1; i >= 0; i--) {
		value += ((str[i] - 48) * digit);
		digit *= 10;
	}
	return value;
}
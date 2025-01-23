#include <stdio.h>

int main()
{
	char ch;
	printf("문자 입력 : ");
	scanf_s("%c", &ch);

	printf("10진수: %d\n", ch);
	printf("8진수: %o\n", ch);
	printf("16진수: %x\n", ch);
	printf("2진수: ");
	int compare = 128;
	while (compare) {
		printf(((int)ch & compare) ? "1" : "0");
		compare /= 2;
	}
	printf("\n");
	return 0;
}
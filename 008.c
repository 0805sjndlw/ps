#include <stdio.h>

int main()
{
	char ch;
	printf("���� �Է� : ");
	scanf_s("%c", &ch);

	printf("10����: %d\n", ch);
	printf("8����: %o\n", ch);
	printf("16����: %x\n", ch);
	printf("2����: ");
	int compare = 128;
	while (compare) {
		printf(((int)ch & compare) ? "1" : "0");
		compare /= 2;
	}
	printf("\n");
	return 0;
}
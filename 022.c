#include <stdio.h>

int main()
{
	int binary;
	scanf_s("%d", &binary);

	int decimal = 0;
	for (int i = 1; binary; i *= 2) {
		decimal += i * (binary % 10);
		binary /= 10;
	}
	printf("%d", decimal);
	return 0;
}
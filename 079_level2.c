#include <stdio.h>

int main()
{
	// 1.
	for (char i = 'A'; i <= 'Z'; i++) {
		for (char j = 'A'; j <= i; j++) {
			printf("%c", j);
		}
		printf("\n");
	}
	// 2.
	for (char i = 'A'; i <= 'Z'; i++) {
		for (char j = i; j <= 'Z'; j++) {
			printf("%c", j);
		}
		printf("\n");
	}
	// 3.
	for (int i = 0; i < 26; i++) {
		for (int j = 25 - i; j > 0; j--) {
			printf(" ");
		}
		for (char j = 'A'; j <= 'A' + i; j++) {
			printf("%c", j);
		}
		printf("\n");
	}
	// 4.
	for (int i = 0; i < 13; i++) {
		for (char j = 'A'; j <= 'A' + i; j++) {
			printf("%c", j);
		}
		for (int j = 24 - 2 * i; j > 0; j--) {
			printf(" ");
		}
		for (char j = 'Z' - i; j <= 'Z'; j++) {
			printf("%c", j);
		}
		printf("\n");
	}
	return 0;
}
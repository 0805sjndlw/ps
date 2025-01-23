#include <stdio.h>
#include <string.h>

int main()
{
	char str[100];
	printf("문장입력: ");
	gets(str);

	int lower[26] = { 0 }, upper[26] = { 0 };
	for (int i = 0; i < strlen(str); i++) {
		if (97 <= *(str + i) && *(str + i) <= 122) {
			lower[(int)str[i] - 97]++;
		}
		if (65 <= *(str + i) && *(str + i) <= 90) {
			upper[(int)str[i] - 65]++;
		}
	}

	for (int i = 0; i < 26; i++) {
		if (lower[i]) {
			printf("%c:%d ", i + 97, lower[i]);
		}
	}
	printf("\n");

	for (int i = 0; i < 26; i++) {
		if (upper[i]) {
			printf("%c:%d ", i + 65, upper[i]);
		}
	}
	printf("\n");

	return 0;
}
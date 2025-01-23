#include <stdio.h>
#include <string.h>

int main()
{
	char str[100];
	printf("입력: ");
	gets(str);

	printf("출력: ");
	for (int i = strlen(str); i >= 0; i--) {
		if (str[i] == ' ') {
			printf("%s ", str + i + 1);
			str[i] = '\0';
		}
		if (i == 0) {
			printf("%s", str);
		}
	}
	return 0;
}
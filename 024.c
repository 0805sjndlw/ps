#include <stdio.h>
#include <string.h>

int main()
{
	char str[20] = {""};
	int i, j, len;
	printf("문자열 입력: ");
	gets(str);
	len = 0;
	for (i = 0; str[i] != '\0'; i++)
		len++;
	printf("문자열길이=%d\n", len);
	for (i = (int)strlen(str); i > 0; i--) {
		for (j = 0; j < i; j++) {
			printf("%c", str[j]);
		}
		printf("\n");
	}
	return 0;
}
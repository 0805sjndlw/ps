#include <stdio.h>
#include <string.h>

int main()
{
	char str[20] = {""};
	int i, j, len;
	printf("���ڿ� �Է�: ");
	gets(str);
	len = 0;
	for (i = 0; str[i] != '\0'; i++)
		len++;
	printf("���ڿ�����=%d\n", len);
	for (i = (int)strlen(str); i > 0; i--) {
		for (j = 0; j < i; j++) {
			printf("%c", str[j]);
		}
		printf("\n");
	}
	return 0;
}
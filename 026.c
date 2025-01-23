#include <stdio.h>
#include <string.h>

int main()
{
	char str1[100];
	printf("입력: ");
	fgets(str1, sizeof(str1), stdin);
	
	char str2[100] = {str1[0]};
	char ch = str1[0];
	for (int i = 1; str1[i] != '\0'; i++) {
		if (ch != str1[i]) {
			str2[strlen(str2)] = str1[i];
			ch = str1[i];
		}
	}
	printf("출력: %s", str2);
	return 0;
}
#include <stdio.h>
#include <string.h>

int main()
{
	char arr[100];
	printf("문자열을 입력하세요: ");
	fgets(arr, sizeof(arr), stdin);

	for (int i = 0; i < strlen(arr); i++) {
		if (arr[i] == ' ') {
			for (int j = i + 1; j < strlen(arr); j++) {
				printf("%c", arr[j]);
			}
			break;
		}
	}
	printf("\n");

	return 0;
}
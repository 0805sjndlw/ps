#include <stdio.h>

int main()
{
	char arr[100];
	printf("���ڿ��� �Է��ϼ���: ");
	fgets(arr, sizeof(arr), stdin);

	for (int i = 0; i < strlen(arr); i++) {
		if (arr[i] != ' ') {
			printf("%c", arr[i]);
		}
	}
	printf("\n");
	return 0;
}
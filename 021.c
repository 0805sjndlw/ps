#include <stdio.h>
#include <string.h>

int main() {
	char ch1[100], ch2[100];
	printf("ù ��° ���ڿ��� �Է��ϼ��� : ");
	gets(ch1, sizeof(ch1));
	printf("�� ��° ���ڿ��� �Է��ϼ��� : ");
	gets(ch2, sizeof(ch2));

	for (int i = 0; i < strlen(ch1); i++) {
		ch1[i] = tolower(ch1[i]);
	}
	for (int i = 0; i < strlen(ch2); i++) {
		ch2[i] = tolower(ch2[i]);
	}

	for (int i = 0; i < strlen(ch1); i++) {
		if (ch1[i] > ch2[i]) {
			printf("%s��(��) %s���� �� ū ���ڿ��Դϴ�.\n", ch1, ch2); break;
		} else if (ch1[i] < ch2[i]) {
			printf("%s��(��) %s���� �� ū ���ڿ��Դϴ�.\n", ch2, ch1); break;
		}
	}
	return 0;
}
#include <stdio.h>
#include <string.h>

int main() {
	char ch1[100], ch2[100];
	printf("첫 번째 문자열을 입력하세요 : ");
	gets(ch1, sizeof(ch1));
	printf("두 번째 문자열을 입력하세요 : ");
	gets(ch2, sizeof(ch2));

	for (int i = 0; i < strlen(ch1); i++) {
		ch1[i] = tolower(ch1[i]);
	}
	for (int i = 0; i < strlen(ch2); i++) {
		ch2[i] = tolower(ch2[i]);
	}

	for (int i = 0; i < strlen(ch1); i++) {
		if (ch1[i] > ch2[i]) {
			printf("%s이(가) %s보다 더 큰 문자열입니다.\n", ch1, ch2); break;
		} else if (ch1[i] < ch2[i]) {
			printf("%s이(가) %s보다 더 큰 문자열입니다.\n", ch2, ch1); break;
		}
	}
	return 0;
}
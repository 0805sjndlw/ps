#include <stdio.h>
#include <string.h>

int isPalindrome(char* ps, char* pe);

int main()
{
	char stmt[80] = {""};
	printf("문자열 입력: ");
	gets(stmt);
	char* ps = stmt, * pe = stmt + strlen(stmt) - 1;

	while (1) {
		if (isPalindrome(ps, pe)) {
			if (pe - ps < 2) {
				printf("%s는 회문입니다.\n", stmt); break;
			} else {
				ps++, pe--;
			}
		} else {
			printf("%s는 회문이 아닙니다.\n", stmt); break;
		}
	}
	return 0;
}

int isPalindrome(char* ps, char* pe) {
	if (*ps == *pe) {
		return 1;
	} else {
		return 0;
	}
}
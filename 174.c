#include <stdio.h>
#include <string.h>

int isPalindrome(char* ps, char* pe);

int main()
{
	char stmt[80] = {""};
	printf("���ڿ� �Է�: ");
	gets(stmt);
	char* ps = stmt, * pe = stmt + strlen(stmt) - 1;

	while (1) {
		if (isPalindrome(ps, pe)) {
			if (pe - ps < 2) {
				printf("%s�� ȸ���Դϴ�.\n", stmt); break;
			} else {
				ps++, pe--;
			}
		} else {
			printf("%s�� ȸ���� �ƴմϴ�.\n", stmt); break;
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
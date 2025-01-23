#include <stdio.h>
#include <string.h>

int main()
{
	char id[100], password[100];
	printf("아이디 : ");
	fgets(id, sizeof(id), stdin);

	if (strcmp(id, "Hansung\n")) {
		printf("등록되지 않은 아이디 입니다.\n");
	} else {
		printf("비밀번호 : ");
		fgets(password, sizeof(password), stdin);
		if (strcmp(password, "Computer\n")) {
			printf("비밀번호가 틀렸습니다.\n");
		} else {
			printf("Hansung님 환영합니다\n");
		}
	}

	return 0;
}
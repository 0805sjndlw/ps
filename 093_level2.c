#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
	// 아이디 입력
	char id[100], password[100];
	printf("아이디: ");
	gets(id);

	// 아이디 불일치(일치 시엔 밑으로 계속 진행)
	if (strcmp(id, "Hansung")) {
		printf("등록되지 않은 아이디입니다!\n");
		return 0;
	}

	/*
	// 1.
	// 비번 입력
	printf("비밀번호: ");
	scanf_s("%s", password, sizeof(password));
	// 1.
	// 비번 일치
	if (!strcmp(password, "computer")) {
		printf("환영합니다!\n");
	}
	// 비번 불일치
	else {
		printf("비밀번호가 잘못되었습니다!\n");
	}
	*/

	// 2.
	// 비번 입력
	int i = 0;
	while ((password[i] = _getch()) != '\r') {
		printf("*");
		i++;
	}
	password[i] = '\0';
	printf("\n");

	// 비번 일치
	if (!strcmp(password, "computer")) {
		printf("환영합니다!\n");
	}
	// 비번 불일치
	else {
		printf("비밀번호(%s)가 잘못되었습니다!\n", password);
	}

	return 0;
}
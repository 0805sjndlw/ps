#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isGood(char pw[]);

int main()
{
	char pw1[100], pw2[100];
	printf("비밀번호를 등록합니다\n");
	while (1) {
		printf("비밀번호는 영문, 숫자 포함 최소한 8자리 이어야 합니다.\n");
		printf("새로운 비밀번호 입력 : ");
		fgets(pw1, sizeof(pw1), stdin);
		// 영문, 숫자 포함 8자리 이상임
		if (isGood(pw1)) {
			printf("비밀번호 한번더 입력 : ");
			fgets(pw2, sizeof(pw2), stdin);
			// 영문, 숫자 포함 8자리 이상임
			if (isGood(pw2)) {
				// pw1 == pw2임
				if (!strcmp(pw1, pw2)) {
					printf("비밀번호가 등록되었습니다.\n"); break;
				} else {
					printf("비밀번호를 정확히 입력하세요:\n");
				}
			}
		}
	}
	return 0;
}

int isGood(char pw[]) {
	int alpha = 0, digit = 0;

	for (int i = 0; i < strlen(pw); i++) {
		alpha += isalpha(pw[i]);
		digit += isdigit(pw[i]);
	}

	if (alpha && digit && strlen(pw) >= 8) {
		return 1;
	} else {
		return 0;
	}
}
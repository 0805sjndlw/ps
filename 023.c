#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	printf("여러 줄에 원하는 문장을 입력하세요. 입력이 다 되었으면\n");
	printf("새로운 줄 처음에 crtlz+Z, 그리고 Enter 를 입력하세요.\n\n");

	int i = 0;
	char temp[100], perm[100] = {""};
	while (1) {
		fgets(temp, sizeof(temp), stdin);
		temp[strlen(temp) - 1] = '\0';
		// 김성동 교수님이 봐주셨는데 crtl+Z가 입력이 안됨 - 2일차 아침시간
		// crtl+Z 대신 '0'으로 대체
		if (!strcmp(temp, "0")) {
			break;
		}
		else {
			if (strlen(temp) > strlen(perm)) {
				strcpy_s(perm, strlen(temp) + 1, temp);
				i++;
			}
		}
	}

	printf("가장 큰 문장 %s 길이 %d 위치 %d\n", perm, (int)strlen(perm), i);
	return 0;
}
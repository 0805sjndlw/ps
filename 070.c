#include <stdio.h>
#include <string.h>

int main()
{	
	int a, b, c;
	char quit[10];
	while (1) {
		// 입력
		printf("0부터 90 사이의 세 개의 숫자를 선택: ");
		scanf_s("%d %d %d", &a, &b, &c);
		if (!(a >= 0 && a <= 90) || !(b >= 0 && b <= 90) || !(c >= 0 && c <= 90)) {
			continue;
		}
		// 출력
		printf("\n");
		printf("----------------\n");
		printf("| %2d | %2d | %2d |\n", a, b, c);
		printf("----------------\n\n");
		if (a == b && a == c) {
			printf("축하드립니다!\n");
		}
		// 종료
		printf("그만하시겠습니까?(Y / N): ");
		scanf_s("%5s", quit, sizeof(quit));
		if (!strcmp(quit, "Y")) {
			break;
		} else if (strcmp(quit, "N")) {
			printf("잘못 입력하셨습니다. 계속 진행하겠습니다.\n");
		}
	}
	return 0;
}

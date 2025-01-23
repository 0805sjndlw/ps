#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL));

	int a, b, answer;

	printf("종료는 99를 입력하세요.\n");
	while (1) {
		a = rand() % 7 + 2;
		b = rand() % 7 + 2;
		printf("%d + %d =? ", a, b);
		scanf_s("%d", &answer);
		if (answer == 99) {
			break;
		} else {
			printf((a + b == answer) ? "맞았습니다.\n" : "틀렸습니다.\n");
		}
	}
	return 0;
}

// 룸메형들한테 검사받음, 잘했다고 한다
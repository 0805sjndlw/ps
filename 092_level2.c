#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL));

	int a, b, answer;

	printf("����� 99�� �Է��ϼ���.\n");
	while (1) {
		a = rand() % 7 + 2;
		b = rand() % 7 + 2;
		printf("%d + %d =? ", a, b);
		scanf_s("%d", &answer);
		if (answer == 99) {
			break;
		} else {
			printf((a + b == answer) ? "�¾ҽ��ϴ�.\n" : "Ʋ�Ƚ��ϴ�.\n");
		}
	}
	return 0;
}

// ����������� �˻����, ���ߴٰ� �Ѵ�
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL));

	int answer = rand() % 100 + 1, submit;
	int min = 1, max = 100;
	int i = 0;
	while (1) {
		// Ƚ�� ����
		i++;
		// �Է�
		printf("%d���� %d ������ ���� �Է��Ͻÿ�: ", min, max);
		scanf_s("%d", &submit);
		// �Ǻ�
		if (submit == answer) {
			printf("%d�� ���� ã�ҽ��ϴ�.\n", i); break;
		} else if (submit > answer && min < submit && submit < max) {
			max = --submit;
		} else if (submit < answer && min < submit && submit < max) {
			min = ++submit;
		}
	}
	return 0;
}
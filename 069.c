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
		// 횟수 증가
		i++;
		// 입력
		printf("%d부터 %d 사이의 수를 입력하시오: ", min, max);
		scanf_s("%d", &submit);
		// 판별
		if (submit == answer) {
			printf("%d번 만에 찾았습니다.\n", i); break;
		} else if (submit > answer && min < submit && submit < max) {
			max = --submit;
		} else if (submit < answer && min < submit && submit < max) {
			min = ++submit;
		}
	}
	return 0;
}
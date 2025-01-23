#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL));
	
	int i = 1;
	int player, computer;
	int win = 0, lose = 0, draw = 0;
	printf("가위, 바위, 보 게임입니다. 종료를 원하시면 0을 입력하세요.\n");
	// 루프 시작
	while (1) {
		// 입력
		printf("%d번째 게임: 1(가위), 2(바위), 3(보), 0(종료) : ", i);
		scanf_s("%d", &player);
		// 0 입력: 종료
		if (!player) {
			printf("게임을 종료합니다.\n");
			printf("게임수 %d전 %d승, %d패, %d무 입니다.\n", win + lose + draw, win, lose, draw); break;
		}
		// ~(0~3) 입력: 잘못된 입력
		else if (player > 3) {
			for (int i = 0; i < player; i++) {
				printf("?");
			}
			printf(" ");
			printf("잘못입력하셨습니다.\n");
			continue;
		}
		// 컴퓨터의 hand
		computer = rand() % 3 + 1;
		switch (computer) {
			case 1:
					printf("컴퓨터는 1(가위) 입니다. "); break;
			case 2:
				printf("컴퓨터는 2(바위) 입니다. "); break;
			case 3:
				printf("컴퓨터는 3(보) 입니다. ");
		}
		// 결과
		if ((player - computer == 1) || (computer == 3 && player == 1)) {
			printf("^_^ 이겼습니다\n");
			win++;
		} else if ((computer - player == 1) || (computer == 1 && player == 3)) {
			printf("ㅜ.ㅜ 졌습니다!\n");
			lose++;
		} else {
			printf("== 비겼습니다. ==\n");
			draw++;
		}
	}
	return 0;
}
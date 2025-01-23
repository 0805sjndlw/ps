#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL));
	
	int i = 1;
	int player, computer;
	int win = 0, lose = 0, draw = 0;
	printf("����, ����, �� �����Դϴ�. ���Ḧ ���Ͻø� 0�� �Է��ϼ���.\n");
	// ���� ����
	while (1) {
		// �Է�
		printf("%d��° ����: 1(����), 2(����), 3(��), 0(����) : ", i);
		scanf_s("%d", &player);
		// 0 �Է�: ����
		if (!player) {
			printf("������ �����մϴ�.\n");
			printf("���Ӽ� %d�� %d��, %d��, %d�� �Դϴ�.\n", win + lose + draw, win, lose, draw); break;
		}
		// ~(0~3) �Է�: �߸��� �Է�
		else if (player > 3) {
			for (int i = 0; i < player; i++) {
				printf("?");
			}
			printf(" ");
			printf("�߸��Է��ϼ̽��ϴ�.\n");
			continue;
		}
		// ��ǻ���� hand
		computer = rand() % 3 + 1;
		switch (computer) {
			case 1:
					printf("��ǻ�ʹ� 1(����) �Դϴ�. "); break;
			case 2:
				printf("��ǻ�ʹ� 2(����) �Դϴ�. "); break;
			case 3:
				printf("��ǻ�ʹ� 3(��) �Դϴ�. ");
		}
		// ���
		if ((player - computer == 1) || (computer == 3 && player == 1)) {
			printf("^_^ �̰���ϴ�\n");
			win++;
		} else if ((computer - player == 1) || (computer == 1 && player == 3)) {
			printf("��.�� �����ϴ�!\n");
			lose++;
		} else {
			printf("== �����ϴ�. ==\n");
			draw++;
		}
	}
	return 0;
}
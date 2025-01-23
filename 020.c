#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isGood(char pw[]);

int main()
{
	char pw1[100], pw2[100];
	printf("��й�ȣ�� ����մϴ�\n");
	while (1) {
		printf("��й�ȣ�� ����, ���� ���� �ּ��� 8�ڸ� �̾�� �մϴ�.\n");
		printf("���ο� ��й�ȣ �Է� : ");
		fgets(pw1, sizeof(pw1), stdin);
		// ����, ���� ���� 8�ڸ� �̻���
		if (isGood(pw1)) {
			printf("��й�ȣ �ѹ��� �Է� : ");
			fgets(pw2, sizeof(pw2), stdin);
			// ����, ���� ���� 8�ڸ� �̻���
			if (isGood(pw2)) {
				// pw1 == pw2��
				if (!strcmp(pw1, pw2)) {
					printf("��й�ȣ�� ��ϵǾ����ϴ�.\n"); break;
				} else {
					printf("��й�ȣ�� ��Ȯ�� �Է��ϼ���:\n");
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
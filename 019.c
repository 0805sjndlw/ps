#include <stdio.h>
#include <string.h>

int main()
{
	char id[100], password[100];
	printf("���̵� : ");
	fgets(id, sizeof(id), stdin);

	if (strcmp(id, "Hansung\n")) {
		printf("��ϵ��� ���� ���̵� �Դϴ�.\n");
	} else {
		printf("��й�ȣ : ");
		fgets(password, sizeof(password), stdin);
		if (strcmp(password, "Computer\n")) {
			printf("��й�ȣ�� Ʋ�Ƚ��ϴ�.\n");
		} else {
			printf("Hansung�� ȯ���մϴ�\n");
		}
	}

	return 0;
}
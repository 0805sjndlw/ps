#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
	// ���̵� �Է�
	char id[100], password[100];
	printf("���̵�: ");
	gets(id);

	// ���̵� ����ġ(��ġ �ÿ� ������ ��� ����)
	if (strcmp(id, "Hansung")) {
		printf("��ϵ��� ���� ���̵��Դϴ�!\n");
		return 0;
	}

	/*
	// 1.
	// ��� �Է�
	printf("��й�ȣ: ");
	scanf_s("%s", password, sizeof(password));
	// 1.
	// ��� ��ġ
	if (!strcmp(password, "computer")) {
		printf("ȯ���մϴ�!\n");
	}
	// ��� ����ġ
	else {
		printf("��й�ȣ�� �߸��Ǿ����ϴ�!\n");
	}
	*/

	// 2.
	// ��� �Է�
	int i = 0;
	while ((password[i] = _getch()) != '\r') {
		printf("*");
		i++;
	}
	password[i] = '\0';
	printf("\n");

	// ��� ��ġ
	if (!strcmp(password, "computer")) {
		printf("ȯ���մϴ�!\n");
	}
	// ��� ����ġ
	else {
		printf("��й�ȣ(%s)�� �߸��Ǿ����ϴ�!\n", password);
	}

	return 0;
}
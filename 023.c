#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	printf("���� �ٿ� ���ϴ� ������ �Է��ϼ���. �Է��� �� �Ǿ�����\n");
	printf("���ο� �� ó���� crtlz+Z, �׸��� Enter �� �Է��ϼ���.\n\n");

	int i = 0;
	char temp[100], perm[100] = {""};
	while (1) {
		fgets(temp, sizeof(temp), stdin);
		temp[strlen(temp) - 1] = '\0';
		// �輺�� �������� ���̴ּµ� crtl+Z�� �Է��� �ȵ� - 2���� ��ħ�ð�
		// crtl+Z ��� '0'���� ��ü
		if (!strcmp(temp, "0")) {
			break;
		}
		else {
			if (strlen(temp) > strlen(perm)) {
				strcpy_s(perm, strlen(temp) + 1, temp);
				i++;
			}
		}
	}

	printf("���� ū ���� %s ���� %d ��ġ %d\n", perm, (int)strlen(perm), i);
	return 0;
}
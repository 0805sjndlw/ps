#include <stdio.h>
#include <string.h>

int main()
{	
	int a, b, c;
	char quit[10];
	while (1) {
		// �Է�
		printf("0���� 90 ������ �� ���� ���ڸ� ����: ");
		scanf_s("%d %d %d", &a, &b, &c);
		if (!(a >= 0 && a <= 90) || !(b >= 0 && b <= 90) || !(c >= 0 && c <= 90)) {
			continue;
		}
		// ���
		printf("\n");
		printf("----------------\n");
		printf("| %2d | %2d | %2d |\n", a, b, c);
		printf("----------------\n\n");
		if (a == b && a == c) {
			printf("���ϵ帳�ϴ�!\n");
		}
		// ����
		printf("�׸��Ͻðڽ��ϱ�?(Y / N): ");
		scanf_s("%5s", quit, sizeof(quit));
		if (!strcmp(quit, "Y")) {
			break;
		} else if (strcmp(quit, "N")) {
			printf("�߸� �Է��ϼ̽��ϴ�. ��� �����ϰڽ��ϴ�.\n");
		}
	}
	return 0;
}
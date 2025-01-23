#include <stdio.h>

void int2str(int n);

int main()
{
	int n;
	printf("10000���� ���� ���� �ϳ��� �Է��ϼ���. -> ");
	scanf_s("%d", &n);
	int2str(n);
	return 0;
}

void int2str(int n) {
	char num[][4] = { "��\0", "��\0", "��\0", "��\0", "��\0", "��\0", "��\0", "ĥ\0", "��\0", "��\0" };
	char digit[][4] = { "õ\0", "��\0", "��\0" };

	printf("�Է��Ͻ� ������ [");
	if (n / 1000) {
		printf("%s%s ", num[n / 1000], digit[0]);
		n -= (n / 1000) * 1000;
	}
	if (n / 100) {
		printf("%s%s ", num[n / 100], digit[1]);
		n -= (n / 100) * 100;
	}
	if (n / 10) {
		printf("%s%s ", num[n / 10], digit[2]);
		n -= (n / 10) * 10;
	}
	if (n) {
		printf("%s", num[n]);
	}
	printf("]�Դϴ�.\n");
}
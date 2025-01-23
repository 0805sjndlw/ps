#include <stdio.h>

double calculateFinalValue(double a, double r, int n);

int main()
{
	double a, r;
	printf("���� ���Ծ��� �Է��ϼ���(����: ����): ");
	scanf_s("%lf", &a);
	printf("�������� �Է��ϼ���(����: %%): ");
	scanf_s("%lf", &r);

	int n;
	printf("�� ������ŭ�� ���Ծ��� ���ðڽ��ϱ�?");
	scanf_s("%d", &n);

	printf("%d ������ŭ�� ���Ծ�: %.2lf����\n", n, calculateFinalValue(a, r, n));
	return 0;
}

double calculateFinalValue(double a, double r, int n) {
	double finalValue = a;
	for (int i = 0; i < n; i++) {
		finalValue *= ((100 + r) / 100);
	}
	return finalValue;
}
#include <stdio.h>

void int2str(int n);

int main()
{
	int n;
	printf("10000보다 작은 정수 하나를 입력하세요. -> ");
	scanf_s("%d", &n);
	int2str(n);
	return 0;
}

void int2str(int n) {
	char num[][4] = { "영\0", "일\0", "이\0", "삼\0", "사\0", "오\0", "육\0", "칠\0", "팔\0", "구\0" };
	char digit[][4] = { "천\0", "백\0", "십\0" };

	printf("입력하신 정수는 [");
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
	printf("]입니다.\n");
}
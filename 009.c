#include <stdio.h>
#include <math.h>

int main()
{
	int n;
	printf("1000보다 작은 정수 입력: ");
	scanf_s("%d", &n);

	printf("8진수: 0");
	int compare = pow(8, 3);
	int turn = 0;
	while (compare) {
		if (n / compare || turn) {
			printf("%d", n / compare);
			n %= compare;
			turn++;
		}
		compare /= 8;
	}
	printf("\n");
	return 0;
}
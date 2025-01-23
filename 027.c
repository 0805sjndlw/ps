#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int getDigitCount(int v, int base);
char* int2str(int v, int base);

int main()
{
	int tmp1[] = { 0, 1, 23, 123, 123467, 12345678, 123456789 };
	int tmp2[] = { 0x1, 0xFF, 0xEEF, 0x8FEF };

	for (int i = 0; i < sizeof(tmp1) / sizeof(int); i++) {
		char* p = int2str(tmp1[i], 10);
		printf("%s ", p);
		free(p);
	}
	printf("\n");

	for (int i = 0; i < sizeof(tmp2) / sizeof(int); i++) {
		char* p = int2str(tmp2[i], 2);
		printf("%s ", p);
		free(p);
	}
	printf("\n");
	return 0;
}

int getDigitCount(int v, int base) {
	int count = 1;
	while (v > base) {
		count++;
		v /= base;
	}
	return count;
}
char* int2str(int v, int base) {
	// 0 - 9, A - Z까지가 담긴 배열
	char num[36];
	for (int i = 0; i < 36; i++) {
		if (i < 10) {
			num[i] = i + 48;
		} else {
			num[i] = i + 55;
		}
	}

	// 적절한 제곱수 찾기
	int power = 1;
	while (power <= v / base) {
		power *= base;
	}

	// 동적할당을 사용해 int2string할 배열
	char* str;
	str = (char*)malloc((getDigitCount(v, base) + 1) * sizeof(char));
	// NULL 역참조 방지
	if (str == NULL) {
		return NULL;
	}

	// str에 적절한 num값 넣기
	for (int i = 0; i < getDigitCount(v, base); i++) {
		if (v / power > 35) {
			return "적절하지 않은 정수와 base입니다.\0";
		} else {
			str[i] = num[v / power];
			v %= power;
			power /= base;
		}
	}
	str[getDigitCount(v, base)] = '\0';

	return str;
}
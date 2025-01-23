#include <stdio.h>
#include <limits.h>

void merge(int a[], int b[]);

int main()
{
	int a[5] = { 1, 2, 4, 6, 9 };
	int b[5] = { 3, 5, 7, 8, 10 };
	merge(a, b);
	return 0;
}

void merge(int a[], int b[]) {
	int c[10] = {0}, ai = 0, bi = 0;
	// 병합
	for (int i = 0; i < 10; i++) {
		// b[]가 먼저 끝남 || a[] <= b[]
		if (a[ai] <= b[bi]) {
			c[i] = a[ai];
			if (ai < 4) {
				ai++;
			} else {
				a[ai] = INT_MAX;
			}
		}
		// a[]가 먼저 끝남 || b[] < a[]
		else {
			c[i] = b[bi];
			if (bi < 4) {
				bi++;
			} else {
				b[bi] = INT_MAX;
			}
		}
	}
	// 출력
	for (int i = 0; i < 10; i++) {
		printf("%d", c[i]);
		if (i < 10 - 1) {
			printf(", ");
		}
	}
}
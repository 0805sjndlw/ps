#include <stdio.h>
#define ROWS 4
#define COLS 5
int main()
{
	int a[4][5] = {
		{5, 7, 4, 3},
		{6, 1, 8, 3},
		{3, 2, 7, 6}
	};

	// 행의 합
	for (int i = 0; i < ROWS - 1; i++) {
		for (int j = 0; j < COLS - 1; j++) {
			a[i][COLS - 1] += a[i][j];
		}
	}
	// 열의 합
	for (int i = 0; i < COLS; i++) {
		for (int j = 0; j < ROWS - 1; j++) {
			a[ROWS - 1][i] += a[j][i];
		}
	}
	

	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			printf("%2d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
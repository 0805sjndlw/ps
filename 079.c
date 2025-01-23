#include <stdio.h>

int main()
{
	// 1.
	for (int i = 0; i <= 5; i++) {
		for (int j = 0; j <= i; j++) {
			printf("%d", j);
		}
		printf("\n");
	}
	
	// 2.
	for (int i = 5; i >= 0; i--) {
		for (int j = 0; j <= i; j++) {
			printf("%d", j);
		}
		printf("\n");
	}

	// 3. 
	for (int i = 5; i >= 0; i--) {
		for (int j = i; j >= 0; j--) {
			printf("%d", j);
		}
		printf("\n");
	}
	return 0;
}
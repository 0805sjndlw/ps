#include <stdio.h>

int main() {
	for (int i = 10; i < 100; i++) {
		if ((i / 10) + (i % 10) == 14)
			printf("%d%d + %d%d = 154\n", i / 10, i % 10, i % 10, i / 10);
	}
	return 0;
}
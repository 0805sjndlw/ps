#include <stdio.h>
#include <math.h>

typedef struct powers {
	int power1;
	int power2;
	int power3;
}POWER;

int main()
{
	POWER from1to20[20];
	for (int i = 0; i < sizeof(from1to20) / sizeof(*from1to20); i++) {
		from1to20[i].power1 = pow(i + 1, 1);
		from1to20[i].power2 = pow(i + 1, 2);
		from1to20[i].power3 = pow(i + 1, 3);

		printf("%d %d %d\n", from1to20[i].power1, from1to20[i].power2, from1to20[i].power3);
	}
	return 0;
}
#include <stdio.h>

int main()
{
	int k[3] = { 10, 20, 30 };
	int* p = k;

	//보고 싶은 결과 있으면 주석 지우면 됨
	
	//int a = *p + 1;
	//printf("%d\n", a);

	//int b = *(p + 1);
	//printf("%d\n", b);

	//int c = *p++;
	//printf("%d\n", c);
	
	//int d = (*p)++;
	//printf("%d\n", d);

	//int e = *++p;
	//printf("%d\n", e);
	
	//int f = ++ * p;
	//printf("%d\n", f);


	return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL));
	
	char* str1 = "Yes\0";
	char* str2 = "No\0";
	char* str3 = "Maybe. Rephrase the question\0";
	
	char question[100];
	printf("질문하세요: ");
	gets(question);

	if (rand() % 3 == 1) {
		printf("%s", str1);
	} else if (rand() % 3 == 2) {
		printf("%s", str2);
	} else {
		printf("%s", str3);
	}
	return 0;
}
#include <stdio.h>
#include <string.h>

int main()
{
	char* ptr = "program";
	for (int i = 0; i < strlen(ptr); i++) {
		printf("%c ", toupper(*(ptr + i)));
		printf("%s\n", ptr + i);
	}
	return 0;
}
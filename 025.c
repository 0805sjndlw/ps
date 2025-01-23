#include <stdio.h>
#include <string.h>

int main()
{
	char str1[] = "한성대학교";
	char str2[] = "컴퓨터공학과";
	char str3[100] = "";
	strcpy_s(str3, strlen(str1) + 1, str1);
	printf("(1)str3=%s\n", str3);
	strcat_s(str3, strlen(str3) + strlen(str2) + 1, str2);
	printf("(2)str3=%s\n", str3);
	return 0;
}
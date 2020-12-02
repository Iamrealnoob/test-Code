#include<stdio.h>

/*
Ä£ÄâÊµÏÖstrlen
*/
size_t My_Strlen(const char* str)
{
	int num = 0;
	const char* head = str;
	while (*head != '\0') {
		num++;
		head++;
	}
	return num;
}
int main()
{
	const char* str = "ABCDEF";
	size_t num = My_Strlen(str);
	printf("%d", num);
	return 0;
}
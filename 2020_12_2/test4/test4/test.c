#include<stdio.h>

/*
Ä£ÄâÊµÏÖstrcpy
*/

char* My_Strcpy(char* dst, const char* src)
{
	if (dst == NULL || src == NULL) {
		return NULL;
	}
	char* ret = dst;
	int num = strlen(src);
	while (num>0) {
		*dst = *src;
		dst++;
		src++;
		num--;
	}
	return ret;
}
int main()
{
	char str1[] = "ABCD";
	char str2[32] = { 0 };
	My_Strcpy(str2, str1);
	printf("%s\n", str2);
	return 0;
}
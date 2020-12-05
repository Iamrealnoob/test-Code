#include<stdio.h>
#include<string.h>

/*
Ä£ÄâÊµÏÖstrstr
*/
char* My_Strstr(const char* str1, const char* str2)
{
	if (*str1 == NULL || *str2 == NULL) {
		return NULL;
	}
	const char* star = str1;
	while (*star) {
		const char* p = star;
		const char* q = str2;
		while (*p == *q && *p) {
			p++;
			q++;
		}
		if (*q == '\0') {
			return star;
		}
		star++;
	}
	return NULL;
}
int main()
{
	const char* str1 = "ABCDEF";
	const char* str2 = "BCD";
	const char* str = My_Strstr(str1,str2);
	printf("%s", str);
	return 0;
}
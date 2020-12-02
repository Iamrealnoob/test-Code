#include<stdio.h>
#include<string.h>

/*
Ä£ÄâÊµÏÖstrcat
*/
char* My_Strcat(char* str1, const char* str2)
{
	if (*str1 == NULL || *str2 == NULL) {
		return NULL;
	}
	while (*str1) {
		str1++;
	}
	while (*str1 = *str2) {
		str1++;
		str2++;
	}
	return str1;

}
int main()
{
	char str1[16] = "ABCD";
	const char str2[8] = "EF";
	My_Strcat(str1,str2);
	printf("%s", str1);
	return 0;
}
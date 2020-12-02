#include<stdio.h>

/*
Ä£ÄâÊµÏÖstrcmp
*/
int My_Strcmp(const char* str1, const char* str2)
{
	int flag = 0;
	if (str1 == NULL || str2 == NULL) {
		return NULL;
	}
	while (1) {
		int num = *str1 - *str2;
		str1++;
		str2++;
		flag = flag + num;
		if (flag != 0)
		{
			break;
		}
		if (*str1 == 0 || *str2 == 0)
		{
			break;
		}
	}
	if (flag < 0) {
		return -1;
	}
	else if (flag> 0) {
		return 1;
	}
	else {
		return 0;
	}
}
int main()
{
	const char* str1 = "ABCDE";
	const char* str2 = "ABCDE";
	int num = My_Strcmp(str1,str2);
	printf("%d", num);
	return 0;

}
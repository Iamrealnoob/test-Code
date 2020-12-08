#include<stdio.h>
#include<assert.h>

/*
Ä£ÄâÊµÏÖstrncat
*/
char* mystrncat(char* str1, const char* str2, size_t num)
{
	assert(str1);
	assert(str2);
	char* str = str1;
	while (*str1) {
		str1++;
	}
	while (num) {
		*str1 = *str2;
		num--;
		str1++;
		str2++;
	}
	return str;
}

int main()
{
	char str1[20] = "Hello ";
	const char str2[20] = "World!123456";
	size_t num = 6;
	char* p = mystrncat(str1, str2, num);
	printf("%s", p);
	return 0;
}
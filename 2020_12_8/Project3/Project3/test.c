#include<stdio.h>
#include<assert.h>

/*
Ä£ÄâÊµÏÖstrncpy
*/
char* mystrncpy(char* str1, const char* str2, size_t num)
{
	assert(str1);
	assert(str2);
	size_t i = 0;
	for (i = 0; str1[i] && i < num; i++) {
		str1[i] = str2[i];
	}
	if (i < num) {
		str1[i] = '\0';
	}
	return str1;
}

int main()
{
	char str1[16] = "Hello";
	char str2[16] = "HELLO";
	int num = 3;
	char* p = mystrncpy(str1, str2, num);
	printf("%s", p);
	return 0;
}
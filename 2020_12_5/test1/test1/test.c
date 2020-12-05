#include"test.h"
/*
* Ä£ÄâÊµÏÖmemmove
*/
void* my_memmove(void* str1, const void* str2, size_t num)
{
	assert(str1);
	assert(str2);
	void* ret = str1;
	if ((char*)str1 >= (char*)str2 ) {
		while (num--) {
			*(char*)str1 = *(char*)str2;
			str1 = (char*)str1 + 1;
			str2 = (char*)str2 + 1;
		}
	}
	else {
		str1 = (char*)str1 + num - 1;
		str2 = (char*)str2 + num - 1;
		while (num--) {
			*(char*)str1 = *(char*)str2;
			str1 = (char*)str1 - 1;
			str2 = (char*)str2 - 1;
		}
	}
	return ret;
}
int main()
{
	char str1[16] = "ABCDE";
	char str2[] = "FGH";
	size_t num = 3;
	char* str = my_memmove(str1, str2, num);
	printf("%s", str);
	return 0;
}
#include<stdio.h>
#include<assert.h>

void* my_memcpy(void* str1, const void* str2, size_t num)
{
	assert(str1);
	assert(str2);
	void* ret = str1;
	while (num--) {
		*(char*)str1 = *(char*)str2;
		str1 = (char*)str1 + 1;
		str2 = (char*)str2 + 1;
	}
	return ret;
}

int main()
{
	char str1[16] = "ABCD";
	char str2[] = "EFG";
	size_t num = 3;
	char* str = my_memcpy(str1, str2, num);
	printf("%s", str);
	return 0;
}
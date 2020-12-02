#include<stdio.h>
#include<string.h>


/*
写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。
例如：给定s1 =AABCD和s2 = BCDAA，返回1
给定s1=abcd和s2=ACBD，返回0.
AABCD左旋一个字符得到ABCDA
AABCD左旋两个字符得到BCDAA
AABCD右旋一个字符得到DAABC
*/

int My_Judge(char str1[], char str2[])
{
	int num = strlen(str1);
	int i = 0;
	int j = 0;
	for (i = 0; i < num; i++) {
		char temp = str1[0];
		for (j = 0; j < num - 1; j++) {
			str1[j] = str1[j + 1];
		}
		str1[j] = temp;
		int A = strcmp(str1, str2);
		if (A == 0) {
			return 1;
		}
	}
	return 0;
}
int main()
{
	char str1[] = "AABCD";
	char str2[] = "BCDAA";
	int num = My_Judge(str1,str2);
	if (num == 1) {
		printf("str2是由str1旋转得到的\n");
	}
	else {
		printf("str2不是由str1旋转得到的\n");
	}
	return 0;

}
#include<stdio.h>
#include<string.h>


/*
дһ���������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
���磺����s1 =AABCD��s2 = BCDAA������1
����s1=abcd��s2=ACBD������0.
AABCD����һ���ַ��õ�ABCDA
AABCD���������ַ��õ�BCDAA
AABCD����һ���ַ��õ�DAABC
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
		printf("str2����str1��ת�õ���\n");
	}
	else {
		printf("str2������str1��ת�õ���\n");
	}
	return 0;

}
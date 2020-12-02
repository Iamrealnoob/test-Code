#include<stdio.h>


/*
实现一个函数，可以左旋字符串中的k个字符。
例如：
ABCD左旋一个字符得到BCDA
ABCD左旋两个字符得到CDAB
*/
void Exchange(char str[], int num, int k)
{
	int i, j;
	for (i = 0; i < k; i++) {
		char temp = str[0];
		for (j = 0; j < num - 2; j++) {
			str[j] = str[j + 1];
		}
		str[j] = temp;
	}
}
int main()
{
	char str[] = { "ABCDE" };
	int num = sizeof(str) / sizeof(str[0]);
	int K = 0;
	printf("请输入需要字符串左旋的位数：");
	scanf_s("%d", &K);
	Exchange(str, num, K);
	printf("%s", str);
	return 0;
}
#include<stdio.h>


/*
ʵ��һ�����������������ַ����е�k���ַ���
���磺
ABCD����һ���ַ��õ�BCDA
ABCD���������ַ��õ�CDAB
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
	printf("��������Ҫ�ַ���������λ����");
	scanf_s("%d", &K);
	Exchange(str, num, K);
	printf("%s", str);
	return 0;
}
#include<stdio.h>


/*
�ҵ���
һ��������ֻ�����������ǳ���һ�Σ������������ֶ����������Ρ�
��дһ�������ҳ�������ֻ����һ�ε����֡�
*/

void My_Bubble(int arr[], int num)
{
	for (int i = 0; i < num - 1; i++) {
		for (int j = 0; j < num - 1 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
int Find(int arr[], int num)
{
	My_Bubble(arr,num);
	int i = 0;
	while (num) {
		if (arr[i] == arr[i + 1]) {
			i += 2;
		}
		else {
			if (arr[i] == arr[i - 1]) {
				return arr[i+1];
			}
			else {
				return arr[i];
			}
		}
		num = num-2;
	}
	return -1;
}

int main()
{
	int arr[] = { 7, 9, 66, 7, 25, 9,25, 18, 33, 19, 18, 33,29,29,19 };
	int num = sizeof(arr) / sizeof(arr[0]);
	int result = Find(arr, num);
	if (result != -1) {
		printf("������:%d\n", result);
	}
	else {
		printf("û�е�����\n");

	}
	return 0;
}
#include<stdio.h>

/*
ÑîÊÏ¾ØÕó
*/

int Find(int arr[3][3], int row, int col, int num)
{
	int i = 0;
	int j = col-1;
	while (i <row && j >= 0){
		if (arr[i][j] < num) {
			i++;
		}
		else if (arr[i][j] > num) {
			j--;
		}
		else {
			printf("arr[%d][%d]\n", i+1, j+1);
			return 1;
		}
	}
	return 0;
}
int main()
{
	int num = 8;
	int arr[3][3] = {
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};
	int answer = Find(arr, 3, 3, num);
	if (answer == 1) {
		printf("Find It!\n");
	}
	else {
		printf("Not Find It!\n");
	}
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS     //这个宏定义最好要放到.c文件的第一行
#pragma warning(disable:4996)	//或者使用这个
#include <stdio.h>
#include <stdlib.h>

void printIntArr(int *arr, int len) {
	for (int i = 0; i < len; i++)
	{
		printf("%d\t", arr[i]);
	}
	printf("\n");
}

void swap(int *a,int *b) {
	int c = *a;
	*a = *b;
	*b = c;
}
void bubbleSort(int *arr,int len) {
	
	for (int i = len - 1; i >= 1; i--)
	{
		for (int j = 1; j <= i; j++)
		{
			if (arr[j - 1]>arr[j])
			{
				swap(&arr[j], &arr[j - 1]);
			}
		}
	}
}

int main() {
	int arr[5];
	int len = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i <len; i++)
	{
		scanf("%d", &arr[i]);
	}
	printIntArr(arr,len);
	bubbleSort(arr, len);
	printIntArr(arr, len);




	
	system("pause");
	return 0;
}
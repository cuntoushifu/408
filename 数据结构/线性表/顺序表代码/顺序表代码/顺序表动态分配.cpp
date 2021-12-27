#pragma warning(disable:4996)	//或者使用这个
#include <stdio.h>
#include <stdlib.h>
#define InitSize 5

typedef struct {
	int *data;
	int MaxSize;
	int length;
}SeqList;
void initList(SeqList &sq) {
	sq.data = (int *)malloc(sizeof(int)*InitSize);
	sq.length = 0;
	sq.MaxSize = InitSize;
}
void increaseSize(SeqList &sq, int len)
{
	int *p=sq.data;
	sq.data = (int *)malloc(sizeof(int)*(len + sq.MaxSize));
	for (int i = 0; i < sq.length; i++)
		sq.data[i] = p[i];
	sq.MaxSize = len + sq.MaxSize;
	
	free(p);
}

void printSq(SeqList sq) {
	for (int i = 0; i < sq.length; i++)
		printf("%d ", sq.data[i]);
	printf("\n");
}

/*
 malloc()
 free()
 
 new 
 delete
*/
//int main() {
//	SeqList sq;
//	initList(sq);
//	for (int i = 0; i < sq.MaxSize; i++) 
//		scanf("%d", &sq.data[i]);
//	sq.length = sq.MaxSize;
//
//	printSq(sq);
//
//	increaseSize(sq, 5);
//	sq.length = sq.MaxSize;
//	printSq(sq);
//
//
//
//	system("pause");
//	return 0;
//}

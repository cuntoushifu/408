//using namespace std;
#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>
#define MaxSize 100

/*
 * 静态分配
 */
typedef struct {
	int data[MaxSize];
	int length;
}SqList;
void initList(SqList &sq) {
	//for (int i = 0; i < sq.length; i++)
	//	sq.data[i] = 0;
	sq.length = 0;

}
void printSq(SqList sq) {
	printf("长度：%d\n", sq.length);
	for (int i = 0; i < sq.length; i++)
		printf("%d ", sq.data[i]);

	printf("\n");
}
/*
      x
  1 2 3 4 5
        3 4 5

*/
bool listInsert(SqList &sq,int i,int e) {

	if (sq.length+1 > MaxSize||i>sq.length+1||i<1) return 0;
	printf("%d位置插入%d\n", i, e);
	for (int j = sq.length;  j > i-1;  j--)
		sq.data[j] = sq.data[j -1];
	sq.data[i-1] = e;
	sq.length++;
	return 1;

}
int  listDelete(SqList &sq,int i,int &e) {
	printf("%d位置删除%d\n", i, e);


	if (i<1 || i>sq.length) return 0;

	e = sq.data[i - 1];

	for (int j = i; j<sq.length; j++)
		sq.data[j-1] = sq.data[j];
	 
	
	sq.length--;
	return 1;
}

void scanfSq(SqList &sq) {
	int len=0;
	puts("输入长度：");
	scanf("%d", &len);
	fflush(stdin);
	puts("输入元素：");
	sq.length = len;
	for (int i = 0; i < len; i++)
		scanf("%d", &sq.data[i]);
	fflush(stdin);
	
}


int main() {
	SqList sq;
	initList(sq);
	scanfSq(sq);
	printSq(sq);
	int insertTmp=0,insertI=0;
	printf("位置元素 :\n");
	scanf("%d", &insertI);
	scanf("%d", &insertTmp);
	listInsert(sq, insertI, insertTmp);
	printSq(sq);
	fflush(stdin);

	printf("删除第几个元素:\n");
	int tmp = 0,result=0;
	scanf("%d", &tmp);
	listDelete(sq, tmp,result);
	

	printSq(sq);
	
	system("pause");
	return 0;
}
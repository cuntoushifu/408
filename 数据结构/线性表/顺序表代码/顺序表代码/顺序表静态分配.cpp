//using namespace std;
#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>
#define MaxSize 100

/*
 * ��̬����
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
	printf("���ȣ�%d\n", sq.length);
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
	printf("%dλ�ò���%d\n", i, e);
	for (int j = sq.length;  j > i-1;  j--)
		sq.data[j] = sq.data[j -1];
	sq.data[i-1] = e;
	sq.length++;
	return 1;

}
int  listDelete(SqList &sq,int i,int &e) {
	printf("%dλ��ɾ��%d\n", i, e);


	if (i<1 || i>sq.length) return 0;

	e = sq.data[i - 1];

	for (int j = i; j<sq.length; j++)
		sq.data[j-1] = sq.data[j];
	 
	
	sq.length--;
	return 1;
}

void scanfSq(SqList &sq) {
	int len=0;
	puts("���볤�ȣ�");
	scanf("%d", &len);
	fflush(stdin);
	puts("����Ԫ�أ�");
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
	printf("λ��Ԫ�� :\n");
	scanf("%d", &insertI);
	scanf("%d", &insertTmp);
	listInsert(sq, insertI, insertTmp);
	printSq(sq);
	fflush(stdin);

	printf("ɾ���ڼ���Ԫ��:\n");
	int tmp = 0,result=0;
	scanf("%d", &tmp);
	listDelete(sq, tmp,result);
	

	printSq(sq);
	
	system("pause");
	return 0;
}
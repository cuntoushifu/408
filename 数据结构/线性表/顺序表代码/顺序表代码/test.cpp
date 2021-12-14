using namespace std;
#include <ostream>
#define MaxSize 100

/*
 * æ≤Ã¨∑÷≈‰
 */
typedef struct {
	int data[MaxSize];
	int length;
}SqList;
void initList(SqList &sq) {
	for (int i = 0; i < sq.length; i++)
		sq.data[i] = 0;
	sq.length = 0;
}
void printSq(SqList sq) {
	for (int i = 0; i < sq.length; i++)
		printf("%d:%d\n", i, sq.data[i]);
}

int main() {
	SqList sq;
	initList(sq);
	printSq(sq);
	
	system("pause");
	return 0;
}
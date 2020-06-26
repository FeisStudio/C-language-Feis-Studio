#include<stdio.h>
//取值運算子(*)
//	相對地，我們可以利用間接運算子(*)從記憶體位址取得開頭
//   位於該位址的變數(別跟宣告指標變數用的 * 搞混）
//
//
//	int count = 9;
//	int *countAddr = &count;
//	int result = *countAddr;
//
//	表示式	資料型別		值	
//	count	  int		 9
//	&count	  int*	  2293620
// countAddr  int*	  2293620
// *countAddr int		 9
//	result	  int		 9


//int main() {
//	int count = 9;
//
//	int a;
//	int* b;
//
//	a = count;	//	 (int)  = (int)		O
//	b = count;	//	(int *)!= (int)		X
//
//	a = &count;	//	 (int) != (int *)	X
//	b = &count;	//	(int *) = (int *)	O	
//
//	count = *a;	//	 (int) != (int *)	X
//	count = *b;	//	(int *) = (int *)	O	
//
//	return 0;
//}
int main() {
	int countA = 9;
	int countB = 10;
	int *countAddr;

	countAddr = &countA;
	*countAddr = 0;
	printf("%d\n", &countA);

	countAddr = &countB;
	*countAddr = 0;
	printf("%d\n", &countB);

	return 0;
}
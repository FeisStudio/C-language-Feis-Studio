#include<stdio.h>
//指標變數宣告(type*)
//	『指標』(Pointer)是C語言的主要特性，是種儲存『記憶體
//	  位址』的資料型別
//	指標變數宣告語法：
//		  資料型別 *變數名稱；
//		表示變數內存放的是一個存放這種『資料型別』值的『記
//		 憶體位址』
//
//取值運算子(&)
//	變數依照資料型別會佔據一定的記憶體空間。我們可以利用取
//   取值運算子(&)去取得變數開頭的記憶體位址
//	
//	int count = 9;
//	int *countAddr = &count;
//
//
//	表示式	資料型別		值	
//	count	  int		 9
//	&count	  int*	  2293620
// countAddr  int*	  2293620

int main() {
	int count = 9;
	
	int a;
	int* b;

	a = count;	//	 (int)  = (int)		O
	b = count;	//	(int *)!= (int)		X

	a = &count;	//	 (int) != (int *)	X
	b = &count;	//	(int *) = (int *)	O	


	return 0;
}
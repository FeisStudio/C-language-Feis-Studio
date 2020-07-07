#include<stdio.h>

//const修飾字 靜態常量
//	資料型別被const修飾的變數在「初始化」之外不能再被賦值
//		在C語言裡可以看待成一個唯獨(read-only)的屬性



int main() {
	
	int a = 3;			// (O) 
	const int b = 5;	// (O) 
	const int c;		// (?) 
	a = 4;				// (O) 
	b = 6;				// (X) 編譯失敗
	
	int a[3] = { 3,4,5 };			// (O) 
	const int b[3] = { 5,6,7 };		// (O) 

	a[0] = 4;						// (O) 
	b[0] = 6;						// (X) 編譯失敗




	return 0;
}
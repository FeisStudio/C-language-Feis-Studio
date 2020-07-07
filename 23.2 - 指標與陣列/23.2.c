#include<stdio.h>

int main() {

	int v[5];	//宣告定義一個有 5 個元素的 int 陣列，佔據 5 個 int 大小的記憶體
	int* n;		//宣告定義一個 int 指標，佔據 1 個 int * 大小的記憶體
	n = &v[0];
				//陣列型別可隱性轉型成該陣列第一個元素記憶體位址的指標
	n = v;		//相等於 n = &v[0]


	int v[5];
	int* n = v;
	n == &v[0];			*n		 == v[0];			// *n = 0 等價於 v[0] = 0
	n + 1 = &v[0];		*(n + 1) == v[1];		// *(n+1) 等價於 v[1] = 0
	n + 2 = &v[1];		*(n + 2) == v[2];		// *(n+2) 等價於 v[2] = 0

	
	return 0;
}
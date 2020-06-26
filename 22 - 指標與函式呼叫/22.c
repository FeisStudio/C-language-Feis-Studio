#pragma warning(disable:4996)
#include<stdio.h>

//函式呼叫的特性
//	呼叫函式時，做爲引數的變數會被複製一份到函式內成爲參數
//	 。 在被呼叫的函式內對參數做任何的變動都不會改變到原本
//	 的變數。

//	對函式addone來說他只是得到一個int的複製品，無法知道是
//	 該整數『原本』存放的地方或來源。

//函式呼叫時複製記憶體位址
//	在呼叫函式時，可以將變數的『記憶體位址』做爲引數傳入函
//	 式執行。此時在函式內部對該參數透過『間接運算子』賦予
//	 新的數值時就可以改變原本的變數值。


void addone(int* n) {
	*n = *n + 1;
}

int main() {
	int a = 3;
	addone(&a);//複製 a 的值给 addone
	printf("%d", a);

	return 0;
}
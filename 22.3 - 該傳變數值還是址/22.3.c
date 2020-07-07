#include<stdio.h>
void swap(int*, int*);

//該傳變數值還是址
//	基本原則：
//		可以傳值就傳值
//			複製一份比較安全，不怕被偷改，確保函式間乾淨
//			 的關係
//	例外規則：
//		做爲引數的變數在呼叫函式後值會改動的時候（例如數值
//		 交換的範例
//		無法直接複製值的時候（例如陣列和字串）
//		複製的成本太高的時候（例如較複雜的結構）



int main() {
	int a = 5, b = 3;
	swap(&a, &b);
	printf("a: %d\n", a);
	printf("b: %d\n", b);
	return 0;
}


void swap(int* a, int* b) {
	int t = *a;
	*a = *b;
	*b = t;
}
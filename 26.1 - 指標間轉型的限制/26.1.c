#include<stdio.h>

//————————————————————————————————————————————————————————————
	//儘可以處理一個指標陣列
void print(int *(*q)[]) {								//int **q等同於 int *(*q)	一個指標指向一個整數的指標
	int i;												//int **q=&v（int  **）不等於(int (*)[5])(?)
	for (i = 0; i < sizeof(*q) / sizeof((*q)[0]); i++) {//sizeof(int[3])/sizeof(int)
		printf("%d ", (*q)[i]);							//共用同一個函式
	}
	printf("\n");
}
int main() {
	int v[] = { 1,2,3 };
	print(&v);
	return 0;
}

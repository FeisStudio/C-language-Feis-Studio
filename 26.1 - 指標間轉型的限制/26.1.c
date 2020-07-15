#include<stdio.h>

	
void print(int *(*q)[]) {								//int **q等同於 int *(*q)	一個指標指向一個整數的指標
	int i;												//int **q=&v（int  **）不等於(int (*)[5])(?)
	for (i = 0; i < sizeof(*q) / sizeof((*q)[0]); i++) {//sizeof(int[3])/sizeof(int)
		printf("%d ", (*q)[i]);							
	}
	printf("\n");
}
int main() {					//int *n=v;  //(int *)=(int [5])	(O)  一個整數的陣列(轉成第一個元素的位址）可以直接轉成一個整數的指標  隱性轉型
	int v[] = { 1,2,3 };
	print(&v);					//int **q=&v;//	(int **)=(int (*)[5])	(?}  一個指向整數陣列的指標 無法轉成 一個指向整數指標的指標
	return 0;
}

//————————————————————————————————————————————————————————————
//指標間的轉型
//絕大部分的情況下，指向不同型別的指標間是不能直接隱性轉型的
int intVar;
double doubleVar;
int intArray[3];

int* intPointer = &doubleVar;			// (int *)=(double *)		(?)	指標之間的互轉絕大部分都是不行的
double* doublePointer = &intVar;		// (double *)=(int *)		(?)
int** intPointerPointer1 = &intVar;		// (int **)=(int *)			(?)
int** intPointerPointer2 = &intArray;	// (int **)=(int (*)[3])	(?)一個指向長度爲3的陣列的指標 無法轉成 一個指向整數指標的指標
int** intPointerPointer3 = intArray;	// (int **)=(int [3])		(?)一個整數的陣列 無法轉成 一個整數的指標的指標

const int* c = &a;						//(const int *)=(int *)		(O)一個指向整數的指標 可以轉成 一個指向靜態整數的指標
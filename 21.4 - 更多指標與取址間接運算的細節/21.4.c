#include<stdio.h>
//指標型別與取值和間接運算
//	指標(type *):可儲存記憶體位址的型別
//	取值運算子(&):可取得變數的記憶體起始位址
//		&變數
//	間接運算子(*):取得以該記憶體位址起始的變數
//		*記憶體位址

//看到相鄰的*&可以抵消
int main() {

	int count = 9;
	int* countAddr = &count;
	printf("%d\n", countAddr);

	int result = *countAddr;
	*countAddr = 10;
	printf("%d\n", *countAddr);

	*&*&*&*&result = 20;
	printf("%d\n", result);


	return 0;
}
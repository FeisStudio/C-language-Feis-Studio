#pragma warning(disable:4996)
#include<stdio.h>
#include<stdlib.h>

//——————————————————————————————————————————————————————————————————————————————————————————————————
int main() {
	int *numbers;		//儲存輸入的數字
	int length = 0;			//目前已經輸入的數字個數

	while (1) {
		int input;
		scanf("%d", &input);	//從鍵盤輸入數字
		if (input == 0) {		//如果輸入數字爲0則結束
			break;
		}

		int larger[length + 1];		//產生一個大一個的新陣列
		for (int i = 0; i < length; i++) {
			larger[i] = numbers[i];		//複製舊陣列到新陣列
		}
		numbers = larger;			//將 numbers 設爲剛產生的新陣列

		numbers[length] = input;	//將輸入數字加在最後面
		length++;					//將輸入的數字個數加1
	}

	printf("Numbers:");
	for (int i = 0; i < length; i++) {
		printf("%-2d", numbers[i]);
	}
	printf("\n");
	return 0;
}

//————————————————————————————————————————————————————————————————
//int main() {
//	int* numbers;
//	int length = 0;
//
//	int larger1[1] = { 1 };
//	numbers = larger1;	//numbers=larger[0]
//	length++;
//	for (int i = 0; i < length; i++) {
//		printf("%d ", numbers[i]);	//等同於 printf("%d ",larger1[i]);
//	}
//	printf("\n");
//
//	int larger2[2] = { 2,3 };
//	numbers = larger2;	//numbers=larger[0]
//	length++;
//	for (int i = 0; i < length; i++) {
//		printf("%d ", numbers[i]);	//等同於 printf("%d ",larger2[i]);
//	}
//	printf("\n");
//	
//	//指標變數可以改變所指向的陣列
//
//	return 0;
//}

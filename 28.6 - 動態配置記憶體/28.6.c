#pragma warning(disable:4996)
#include<stdio.h>
#include<stdlib.h>


//使用 malloc 函式讓我們動態配置記憶體
	//void* malloc(size_t size);
	//size 爲非負整數形態（size_t)，表示要配置的記憶體空間大小（位元組）
		//可使用sizeof運算子算出需要配置多少記憶體空間
	//回傳值形態爲 void * 表示可以隱性轉型成其他資料型態的指標
int main() {
	int* numbers;			//儲存輸入的數字
	int length = 0;			//目前已經輸入的數字個數

	while (1) {
		int input;
		scanf("%d", &input);			//從鍵盤輸入數字(假設我們依序輸入1，2，3，4，……）
		if (input == 0) {				//如果輸入數字爲 0 則結束
			break;
		}
													//動態配置記憶體
		int* larger = malloc(sizeof(int) * (length + 1));		//產生一個大一個的新陣列
													//使用 malloc 配置的記憶體不會自動釋放
		for (int i = 0; i < length; i++) {
			larger[i] = numbers[i];		//複製舊陣列到新陣列
		}
		numbers = larger;				//將 numbers 設爲剛產生的新陣列
		numbers[length] = input;		//將輸入數字加在最後面
		length++;						//將輸入的數字個數加 1
	}

	//存取未配置的記憶體空間爲《未定義行爲》

	printf("Numbers:");
	for (int i = 0; i < length; i++) {	//數每個輸入的數字
		printf("%-2d", numbers[i]);
	}
	printf("\n");
	return 0;
}

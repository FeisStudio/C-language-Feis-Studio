#pragma warning(disable:4996)
#include<stdio.h>
#include<stdlib.h>

	int main() {
		int* numbers;			//儲存輸入的數字
		int length = 0;			//目前已經輸入的數字個數

		while (1) {
			int input;
			scanf("%d", &input);			//從鍵盤輸入數字(假設我們依序輸入1，2，3，4，……）
			if (input == 0) {				//如果輸入數字爲 0 則結束
				break;
			}
			int larger[length + 1];		//產生一個大一個的新陣列
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
	 
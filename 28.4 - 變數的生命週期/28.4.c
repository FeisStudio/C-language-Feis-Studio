#pragma warning(disable:4996)
#include<stdio.h>
#include<stdlib.h>

//變數的生命週期（Life time）
//	每個變數需要配置「專屬」的記憶體空間
//		透過sizeof運算子可以知道需要多少空間（位元組）
//		專屬表示記憶體空間不會被挪爲它用
//		記憶體空間有限，用完了怎麼辦？
//			有借有還，再借不難

//自動變數的生命週期
//	記憶體空間的配置：執行到進入變數可視範圍時
//	記憶體空間的釋放：執行到離開變數可視範圍時
	{
		int a
		/*其他程序片段*/
	}
		//在變數可視範圍外的程序嗎不可以使用該變數名稱存取變數


//——————————————————————————————————————————————————————————————————————————————————————————————————
int main() {
	int* numbers;		//儲存輸入的數字
	int length = 0;			//目前已經輸入的數字個數

	while (1) {
		int input;
		scanf("%d", &input);	//從鍵盤輸入數字
		if (input == 0) {		//如果輸入數字爲0則結束
			break;
		}

		{
			int larger[length + 1];		//產生一個大一個的新陣列
		}
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

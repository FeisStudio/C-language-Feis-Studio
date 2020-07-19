#pragma warning(disable:4996)
#include<stdio.h>
#include<stdlib.h>

//怎麼讓陣列變大
//	我們遇到的問題
//		陣列的大小在宣告定義的時候就決定了
//	需要變大的時候
//		1）產生一個較大的新陣列
//		2）將舊有的資料複製到新的陣列
//		3）用新陣列取代舊陣列

//——————————————————————————————————————————————————————————————————————————————————————————————————
int main() {
	int numbers[0];		//儲存輸入的數字
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


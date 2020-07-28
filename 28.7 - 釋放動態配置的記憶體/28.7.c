#pragma warning(disable:4996)
#include<stdio.h>
#include<stdlib.h>

//使用 free 函式釋放動態配置的記憶體
	//<stdilb.h>提供 free 函式釋放動態配置的記憶體
		//void free(void* ptr);	
		//ptr就是要釋放的動態記憶體位址
			//該記憶體空間是由 malloc 或其他動態配置記憶體函式所配置的
		//回傳值形態爲 void * 表示可以隱性轉型成其他資料型態的指標

int main() {
	int* numbers = 0;		//0 表示空指標（NULL)
	int length = 0;			//目前已經輸入的數字個數

	while (1) {
		int input;
		scanf("%d", &input);			//從鍵盤輸入數字
		if (input == 0) {				//如果輸入數字爲 0 則結束
			break;
		}
		//動態配置記憶體
		int* larger = malloc(sizeof(int) * (length + 1));		//產生一個大一個的新陣列
													//使用 malloc 配置的記憶體不會自動釋放
		for (int i = 0; i < length; i++) {
			larger[i] = numbers[i];		//複製舊陣列到新陣列
		}
		free(numbers);
		numbers = larger;				//將 numbers 設爲剛產生的新陣列
		
		numbers[length] = input;		//將輸入數字加在最後面
		length++;						//將輸入的數字個數加 1
	}

	//記憶體洩漏(Memory leak)

	printf("Numbers:");
	for (int i = 0; i < length; i++) {	//數每個輸入的數字
		printf("%-2d", numbers[i]);
	}
	printf("\n");
	return 0;
}

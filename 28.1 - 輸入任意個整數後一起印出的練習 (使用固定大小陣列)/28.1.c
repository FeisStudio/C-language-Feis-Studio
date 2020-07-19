#pragma warning(disable:4996)
#include<stdio.h>
#include<stdlib.h>

int main() {
	int numbers[10];		//儲存輸入的數字
	int length = 0;			//目前已經輸入的數字個數

	while (length < 10) {
		int input;
		scanf("%d", &input);	//從鍵盤輸入數字
		if (input == 0) {		//如果輸入數字爲0則結束
			break;
		}
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


#pragma warning(disable:4996)
#include<stdio.h>



int count(void) {//void表示函式沒有叄數
	static int k = 0;//静態（static）的區域孌數只有會有一份且只 會 初始化一次
	k++;
	return k;
}

int main() {
	for (int i = 1; i <= 5; i++) {
		printf("%d\n", count());
	}
	return 0;
}
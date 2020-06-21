//1.在函式間傳送陣列型態時，與一般資料型態行爲不一樣
//		一般資料型態會將引數複製一份後傳入函式，但是陣列型
//	態卻不會複製一份陣列。
//2.當函式回傳值是陣列型態時，這是不合法的。
//		爲了作出等效於函式回傳的效果，我們可以將陣列作爲引
//	數傳入。當陣列作爲引數傳入時，陣列內容的修改會套用到這
//	個入的陣列本身。
//3.爲了與一般資料型態的行爲相符，C語言導入了指標來處理各種
//陣列複製與存取的行爲。
#include<stdlib.h>
#include<stdio.h>
#include<time.h>


void arrayPrint(int v[10]);
int arrayMax(int v[10]);
void arrayRand(int v[10]);

//陣列賦值時不能是陣列，不能複製
//函式的回傳值不能指定成陣列型態，函式的參數可以是陣列型態
//陣列可以當做函式的參數傳入
int main() {
	srand(time(0));//种子
	int v[10];//建立10個空間
	arrayRand(v);//生成隨機數
	arrayPrint(v);//印出隨機數
	printf("Max: %d\n", arrayMax(v));//印出最大值
	return 0;
}

void arrayRand(int v[10]) {
	int i;
	for (i = 0; i < 10; i++) {
		v[i] = rand() % 100;
	}
}

void arrayPrint(int v[10]) {
	int i;
	for (i = 0; i < 10; i++) {
		printf("%d", v[i]);
	}
	printf("\n");
}

int arrayMax(int v[10]) {
	int max=v[0],i;
	for (i = 0; i < 10; i++) {
		if (v[i] > max) {
			max = v[i];
		}
	}
	return max;
}


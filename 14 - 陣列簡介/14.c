#pragma warning(disable:4996)
#include<stdio.h>
//陣列的孌數定義
//  元素資料型態 阵列變數名稱｛元素個數｝

int main() {
	int v[3];
	v[0] = 3;
	v[1] = 5;
	v[2] = 0;
	int max = v[0];
	if (v[1] > max) {
		max = v[1];
	}
	if (v[2] > max) {
		max = v[2];
	}
	printf("Max:%d\n", max);

}

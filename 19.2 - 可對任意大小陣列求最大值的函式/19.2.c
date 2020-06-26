#pragma warning(disable:4996)
#include<stdlib.h>
#include<stdio.h>
#include<time.h>

int maxv(int[], int n);

int main() {
	int a[3] = { 3,9,7 };
	printf("Max: %d\n", maxv(a, 3));//a代表讀取的陣列，3代表讀取的陣列大
	int b[5] = { 3,9,1,2,7 };
	printf("Max: %d\n", maxv(b, 3));
	return 0;
}
//作爲函式參數時，陣列大小不能用其它參數，也可以不给大小。
//陣列作爲函式參數的時候，可以不給大小。
//函式參數是陣列型態的時候，陣列的大小並不重要。
int maxv(int v[], int n) {//int v[]代表讀取的陣列，int n代表讀取的陣列大小
	int i, max = v[0];
	for (i = 1; i < n; i++) {
		if (v[i] > max) {
			max = v[i];
		}
	}
	return max;
}


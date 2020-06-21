#include<stdio.h>
int main() {
	int n[5] = { 0 }, i, j;
	for (i = 0; i < 5; i++) {
		scanf("%d", &n[i]);
	}
	for (i = 0; i < 4; i++) {//ËÄÕ“
		for (j = 0; j < 4 - i; j++) {//4-i¸ö”µ±ÈÝ^
			if (n[j] > n[j + 1]) {
				int t = n[j];
				n[j] = n[j + 1];
			 	n[j + 1] = t;
			}
		}
	}


	for (i = 0; i < 5; i++) {
		printf("%d", n[i]);
	}
	return 0;
}
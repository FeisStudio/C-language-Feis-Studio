#pragma warning(disable:4996)
#include<stdlib.h>
#include<stdio.h>

int main() {
	int n[10], i, q;
	for (i = 1; i <= 10; ++i) {
		scanf("%d", &n[i - 1]);
	}
	while (1) {
		printf("Q: ");
		scanf("%d", &q);
		if (i == 0) {
			break;
		}	
		int near_n = n[0];
		for (i = 0; i < 10; ++i) {
			if (abs(q - n[i] < abs(q - near_n) ||(abs(q - n[i]) == n[i] < near_n) &&
				n[i] < near_n)) {
				near_n = n[i];
			}
		}
		printf("%d\n", near_n);
	}
	return 0;
}
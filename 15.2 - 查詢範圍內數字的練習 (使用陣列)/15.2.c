#pragma warning(disable:4996)
#include<stdio.h>

int main() {
	
	int n[10], i;
	for (i = 1; i <= 10; i++) {
		scanf("%d", &n[i - 1]);
	}
	
	int l, r;
	while (1) {
		printf("L R: ");
		scanf("%d%d", &l, &r);
		if ((l == 0 && r == 0)){
			break;
		}
		printf("Ans: ");
		for (i = 0; i < 10; i++) {
			if (n[i] >= l && n[i] <= r) {
				printf("%d ", n[i]);
			}
		}
		printf("\n");
	}	
	return 0;
}
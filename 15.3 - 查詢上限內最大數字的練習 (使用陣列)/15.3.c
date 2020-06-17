#pragma warning(disable:4996)
#include<stdio.h>

//叄考寫法一
int main() {
	int i, n[10];
	for (i = 1; i <= 10; ++i) {
		scanf("%d", &n[i - 1]);
	}
	
	int q;
	while (1) {
		int max = -1;
		printf("Q: ");
		scanf("%d", &q);
		if (i == 0) {
			break;
		}
		for (i = 0; i < 10; ++i) {
			if (n[i] <= q && n[i] > max) {
				max = n[i];
			}
		}
		if (max != -1) {
			printf("%d\n", max);
			break;
		}
	}
	return 0;
}
//叄考寫法二
int main() {
	int i, n[10];
	for (i = 1; i <= 10; ++i) {
		scanf("%d", &n[i - 1]);
	}

	int q;
	while (1) {
		int max_i = -1;
		printf("Q: ");
		scanf("%d", &q);
		if (i == 0) {
			break;
		}
		for (i = 0; i < 10; ++i) {
			if (n[i] <= q && (max_i==-1||n[i] > n[max_i])) {
				max_i = i;
			}
		}
		if (max_i != -1) {
			printf("%d\n", max_i);
			break;
		}
	}
	return 0;
}

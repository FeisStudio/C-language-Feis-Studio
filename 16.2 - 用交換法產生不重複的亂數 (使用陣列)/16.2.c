#include<stdlib.h>
#include<stdio.h>
#include<time.h>

int main() {
	srand(time(0));
	int i, n[10];
	for (i = 1; i <= 10; i++) {
		n[i - 1] = 1;
	}

	for (i = 1; i <= 10; i++) {
		int j = rand() % (11-i) + i;
		int t = n[i - 1];
		n[i - 1] = n[j - 1];
		n[j - 1] = t;
		printf(" %d ", n[i - 1]);
	}
	printf("\n");
	return 0;
}
#include<stdlib.h>
#include<stdio.h>
#include<time.h>

int main() {
	srand(time(0));

	int counter[6] = { 0 };

	int i, j;
	for (int i = 1; i <= 6000;) {
		int dice = rand() % 6 + 1;
		for (j= 1; j <= 6; ++j) {
			if (dice == j) {
				counter[j - 1]++;
			}
		}
	}
	for (j = 1; j <= 6; ++j) {
		printf("%d:%d\n", j, counter[j - 1]);
	}
	return 0;
}
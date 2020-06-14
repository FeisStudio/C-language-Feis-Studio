#include<stdlib.h>
#include<stdio.h>
#include<time.h>

//int main() {
//	int v[4] = { 3,5,0,7 };
//
//	int i;
//	int max =v[0];
//	for (i = 1; i <= 3; i++) {
//		if (v[i] > max) {
//			max = v[i];
//		}
//	}
//	printf("max :%d\n", max);
//	return 0;
//}


int main() {
	srand(time(0));

	//int counter[6] = {0,0,0,0,0,0};
	//int counter[] = { 0,0,0,0,0,0 };
	int counter[6] = { 0 };

	int i, j;
	for (int i = 1; i <= 6000; ++i) {
		int dice = rand() % 6 + 1;
		for (j = 1; j <= 6;++j) {
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

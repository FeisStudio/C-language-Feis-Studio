#include<stdlib.h>
#include<stdio.h>
#include<time.h>

//¶þ¾S
//int main() {
//	srand(time(0));
//	int v[3][3] = { {1,2,3,},{4,5,6},{7,8,9,} };
//	int i, j,k=0;
//	for (i = 0; i < 3; i++) {//™M
//		for (j = 0; j < 3; j++) {//¸w
//			int r = rand() % (9 - k) + k;
//			int m = r / 3;
//			int n = r % 3;
//			int t = v[i][j];
//			v[i][j] = v[m][n];
//			v[m][n] = t;
//			k++;
//		}
//	}
//	for (i = 0; i < 3; i++) {//™M
//		for (j = 0; j < 3; j++) {//¸w
//			printf("%2d", v[i][j]);
//		}
//		printf("\n");
//	}

//Ò»¾S
	int main() {
		srand(time(0));
		int v[9] = { 1,2,3,4,5,6,7,8,9 };
		int i;
		for (i = 0; i < 3; i++) {//™M
			for (j = 0; j < 3; j++) {//¸w
				int m = rand() % (9 - i) + i;
				int t = v[i];
				v[i] = v[m];
				v[m] = t;
			}
		}
		for (i = 0; i < 3; i++) {//™M
			printf("%2d", v[i]);
			if (i % 3 == 2) {//¸w
				printf("\n");
			}
		}

	return 0;
}

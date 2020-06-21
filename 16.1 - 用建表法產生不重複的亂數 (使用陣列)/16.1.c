#include<stdlib.h>
#include<stdio.h>
#include<time.h>

//叄考寫法一
//int main() {
//	srand(time(0));
//	
//	int i, n, counter[10] = { 0 };
//	for (i = 0; i < 10; i++) {
//		do {
//			n = rand() % 10;
//		} while (counter[n] != 0);
//		printf("%d\n", n+1);
//		counter[n]++;
//	}
//	printf("\n");
//	return 0;
//}
//叄考寫法二
int main() {
	srand(time(0));

	int i, n, counter[10] = { 0 };
	for (i = 1; i <= 10; i++) {
		do {
			n = rand() % 10 + 1;
		} while (counter[n-1] != 0);
		printf("%d\n", n);
		counter[n-1]++;
	}
	printf("\n");
	return 0;
}
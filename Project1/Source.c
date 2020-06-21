#include<stdio.h>

void increase(int [3]);

int main() {
	int i, n[3] = { 1,2,3 };
	increase(n);
	for (i = 0; i < 3; i++) {
		printf("n[%d]=%d\n",i,n[i]);
	}
	return 0;
}

void increase(int n[3]) {
	int i;
	for (i = 0; i < 3; i++) {
		n++;
	}
}
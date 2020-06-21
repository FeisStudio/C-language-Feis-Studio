#include<stdlib.h>
#include<stdio.h>
#include<time.h>


int main() {
	
	int n[10], i, v[10];
	for (i = 0; i < 10; i++) {
		n[i] = rand() % 100;
	}

	for (i = 0; i < 10; i++) {
		v[i] = n[i];
	}

	for (i = 0; i < 10; i++) {
		printf("%d ",n[i]);
	}
	printf("\n");

	for (i = 0; i < 10; i++) {
		printf("%d ", v[i]);
	}
	printf("\n");

	
	
	
	return 0;
}
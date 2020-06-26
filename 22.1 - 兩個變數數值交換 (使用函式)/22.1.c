#pragma warning(disable 4996)
#include<stdio.h>
void swap(int* a, int* b);


int main() {
	int a = 3, b = 5;

	swap(&a, &b);

	printf("a: %d\n", a);
	printf("b: %d\n", b);

	return 0;
}

void swap(int* a, int* b) {
	int t = *a;
	*a = *b;
	*b = t;
}


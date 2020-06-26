#include<stdio.h>
void sort(int *, int *);
void swap(int *, int *);

int main() {
	int a = 5, b = 3;
	sort(&a, &b);
	printf("a: %d\n", a);
	printf("b: %d\n", b);
	return 0;
}

void sort(int *a, int *b) {
	if (*a > *b) {
		swap(*&a, *&b);
	}
}

void swap(int *a, int *b) {
	int t = *a;
	*a = *b;
	*b = t;
}
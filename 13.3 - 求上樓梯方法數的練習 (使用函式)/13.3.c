#pragma warning(disable:4996)
#include<stdio.h>
int s(int n);

int main() {
	int n;
	printf("Please enter the number of stairs:");
	scanf("%d", &n);
	printf("%d methods", s(n));
	return 0;
}

int s(int n) {
	if (n <= 2) {
		return n;
	}
	return s(n - 1) + s(n - 2);
}
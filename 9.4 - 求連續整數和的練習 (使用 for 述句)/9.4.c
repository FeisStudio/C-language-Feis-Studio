#pragma warning(disable:4996)
#include<stdio.h>
int main() {
	int n;
	printf("Please enter a integer:");
	scanf("%d",&n);
	int sum = (1 + n) * n / 2;
	printf("%d\n", sum);

	return 0;
}
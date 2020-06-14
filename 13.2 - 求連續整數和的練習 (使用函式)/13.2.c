#pragma warning(disable:4996)
#include<stdio.h>
int sum(int n);

int main() {
	int n;
	printf("Please enter a integer:");
	scanf("%d", &n);
	printf("%d\n",sum(n));
	return 0;
}

int sum(int n) {
	if (n == 1) {
		return 1;
	}
	else {
		return sum(n - 1) + n;
	}
}

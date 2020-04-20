#pragma warning(disable:4996)
#include<stdio.h>
int main() 
{
	int n, i;
	printf("Please enter a integer:");
	scanf("%d", &n);
	for (i = 1; i <= n;i++) {
		printf("*");
	}
	return 0;
}
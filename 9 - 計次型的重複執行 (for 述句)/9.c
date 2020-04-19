#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	int i;
	short n;
	printf("Please enter a integer:");
	scanf("%hd", &n);
	for (i = 1;i <= n; i++) {
		printf("%d\n", i);
	}
	return 0;
}
#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	int integer1, integer2, integer3, sum;
	printf("Please enter thr first integer:");
	scanf("%d", &integer1);
	printf("Please enter thr second integer:");
	scanf("%d", &integer2);
	printf("Please enter thr third integer:");
	scanf("%d", &integer3);
	sum = integer1 + integer2;
	printf("Sum is %d.\n", sum);
	return 0;
}
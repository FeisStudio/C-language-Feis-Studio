#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	int integer1;
	int integer2;
	int sum;
	printf("Please enter thr first integer:");
	scanf("%d", &integer1);
	printf("Please enter thr second integer:");
	scanf("%d", &integer2);
	sum = integer1 + integer2;
	printf("Sum is %d.\n", sum);
	return 0;
}
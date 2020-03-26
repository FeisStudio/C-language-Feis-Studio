#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	int number, sum=0;

	printf("Please enter the numbers (quit:0):");
	scanf("%d", &number);

	while (number != 0) {
		sum += number;
		scanf("%d", &number);
	
	}

	printf("The sum is %d.\n", sum);
	return 0;
}
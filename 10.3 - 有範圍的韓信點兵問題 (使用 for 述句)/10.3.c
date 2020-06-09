#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	int min,max;
	printf("Please enter the maximum value:");
	scanf("%d", &max);
	printf("Please enter the minimum  value:");
	scanf("%d", &min);

	int i;
	for (i = max; i >= min; --i) {
		if (i % 3 == 2 && 
			i % 5 == 3 && 
			i % 7 == 2) {
			printf("%d\n", i);
		}			
	}

	return 0;
}
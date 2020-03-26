#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	int number, sum = 0, count = 0;
	float average = 0;
	
	printf("Please enter the numbers (quit:0):");
	scanf("%d", &number);
	while (number != 0) {
		count += 1;
		sum += number;
		scanf("%d", &number);
	}
	if (sum == 0){
		printf("The sum is N/A.\n");
	}
	else {
		average = (float)sum / count;
		printf("The sum is %.3f.\n", average);
	}	
	return 0;
}
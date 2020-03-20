#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	int grade;
	printf("Please enter the grade:");
	scanf("%d", &grade);
	if (grade >= 60)
	{
		printf("Congratulations you passed!\n");
	}
	else
	{
		printf("Sorry you failed");
	}
	return 0;
}
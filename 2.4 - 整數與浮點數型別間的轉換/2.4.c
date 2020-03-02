#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	int num1, num2, num3;
	printf("Please enter thr first integer:");
	scanf("%d", &num1);
	printf("Please enter thr second integer:");
	scanf("%d", &num2);
	printf("Please enter thr third integer:");
	scanf("%d", &num3);

	//int average = (num1 + num2 + num3) / 3;
	double average = (num1 + num2 + num3) / 3.;


	printf("Average %f.\n", average);
	return 0;
}
#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	int a, b,max;
	printf("Please enter the first integer:");
	scanf("%d", &a);
	printf("Please enter the second integer:");
	scanf("%d", &b);
	
	//�ο�д��һ
	if (a >= b) 
	{
		max = a;
	}
	if (a < b)
	{
		max = b;
	}

	//�ο�д����
	max = a;
	if (max < b)
	{
		max = b;
	}

	//�ο�д����
	int a, max;
	printf("Please enter the first integer:");
	scanf("%d", &a);
	max = a;
	printf("Please enter the second integer:");
	scanf("%d", &a);
	if (max < a)
	{
		max = a;
	}



	printf("The maxinum is %d", max);
	return 0;
}
#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	int a, b, c, max;
	printf("Please enter three integers:");
	scanf("%d%d%d", &a, &b, &c);
	
	//��������һ
	if (a >= b && a >= c)
	{
		max = a;
	}
	if (b > a && b >= c)
	{
		max = b;
	}
	if (c > a && c > b)
	{
		max = c;
	}
	
	//����������
	max = a;
	if (b > max)
	{
		max = b;
	}
	if (c > max)
	{
		max = c;
	}
	printf("The maxinum is %d.\n", max);
	return 0;
}
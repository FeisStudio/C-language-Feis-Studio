#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	int a, b, c, d,max;
	printf("Please enter four integers:");
	scanf("%d%d%d%d%",&a,&b,&c,&d);
	
	//��������һ
	if (a >= b && a >= c && a >= d) 
	{
		max = a;
	}
	if (b > a && b >= c && b >= d)
	{
		max = b;
	}
	if (c > a && c > d && c >= d)
	{
		max = c;
	}
	if (d > a && d > b && d > c)
	{
		max = d;
	}

	//����������
	max = a;
	if (b > a && b >= c && b >= d)
	{
		max = b;
	}
	if (c > a && c > d && c >= d)
	{
		max = c;
	}
	if (d > a && d > b && d > c)
	{
		max = d;
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
	if (d > max)
	{
		max = d;
	}


	printf("The maxinum is %d",max);
	return 0;
}
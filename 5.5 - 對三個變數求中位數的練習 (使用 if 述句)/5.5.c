#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	int a, b, c, med;
	printf("Please enter three integers:");
	scanf("%d%d%d", &a, &b, &c);
	
	//參考寫法一
	if (a <= b && a >= c || a <= c && a >= b)
	{
		med = a;
	}
	if (b < a && b >= c || b <= c && b > a)
	{
		med = b;
	}
	if (c < a && c > b || c < b && c > a)
	{
		med = c;
	}

	//參考寫法二
	med = a;
	if (b < a && b >= c || b <= c && b > a)
	{
		med = b;
	}
	if (c < a && c > b || c < b && c > a)
	{
		med = c;
	}

	printf("The maxinum is %d.\n", med);
	return 0;
}
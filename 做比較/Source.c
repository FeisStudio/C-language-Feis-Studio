#include<stdio.h>
int main()
{
	int a=9, b=3,c=5;
	if ((a + b > c && a - b < c)&&
		(a + c > b && a - c < b)&&
		(c + b > a && c - b < a))
	{
		printf("��������");
	}
	else
	{
		printf("����������");	

	}
	
	return 0;
}
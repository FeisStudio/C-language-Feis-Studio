#include<stdio.h>
int main()
{
	int a=9, b=3,c=5;
	if ((a + b > c && a - b < c)&&
		(a + c > b && a - c < b)&&
		(c + b > a && c - b < a))
	{
		printf("是三角形");
	}
	else
	{
		printf("不是三角形");	

	}
	
	return 0;
}
#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	int a, b,t;
	printf("Please enter two integers:");
	scanf("%d%d", &a, &b);
	printf("\nBefore:%d  %d\n", a, b);
	if (a > b)
	{
		t = a;
		a = b;
		b = t;
	 }
	printf("\n After:%d  %d\n", a, b);
	return 0;
}
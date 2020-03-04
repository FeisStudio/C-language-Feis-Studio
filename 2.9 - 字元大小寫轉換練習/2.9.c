#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	char variable;
	printf("Please enter a capital letter:");
	scanf("%c",&variable);
	printf("%c", variable+32);//'a'-'A'=32
	return 0;
}
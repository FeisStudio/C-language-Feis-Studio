#pragma warning(disable:4996)
#include<stdio.h>
int max2(int , int );

int main()
{
	int a, b;
	printf("Please enter the first integer:");
	scanf("%d", &a);
	printf("Please enter the second integer:");
	scanf("%d", &b);

	printf("The maxinum is %d", max2(a,b));
	return 0;
}
//��������һ
int max2(int a,int b)
{
	int max;
	if (a >=  b) {
		max = a;
	}
	else {
		max = b;
	}
	return max;
}

//����������
int max2(int a, int b)
{
	int max;
	if (a >= b) {
		return a;
	}
	else {
		return  b;
	}
}

//����������
int max2(int a, int b)
{
	int max;
	if (a >= b) {
		max = a;
	}
	else {
		max = b;
	}
	return max;
}


#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	//兩個變數求最小值
	int a, b,min;
	printf("Please enter two integers:");
	scanf("%d%d", &a, &b);
		//參考寫法一
		min = a;
		if (min > b)
		{
			printf("The mininum is %d", min);
		}
		//參考寫法二
		if (a < b)
		{
			min = a;
		}
		if (b > a)
		{
			min = b;
		}
		printf("The mininum is %d.\n", min);
		//參考寫法三
		min = a;
		if (b < a)
		{
			min = b;
		}
		printf("The mininum is %d.\n", min);

	//三個變數求最小值
	int a, b, c, min;
	printf("Please enter three integers:");
	scanf("%d%d%d", &a, &b,&c);
		//參考寫法一
		if (a <= b && a <= c)
		{
			min = a;
		}
		if (b < a && b <= c)
		{
			min = b;
		}
		if (c < b && c < a)
		{
			min = c;
		}
		//參考寫法二
		min = a;
		if (b < a && b <= c)
		{
			min = b;
		}
		if (c < b && c < a)
		{
			min = c;
		}
		//參考寫法三
		min = a;
		if (b < min)
		{
			min = b;
		}
		if (c < min)
		{
			min = c;
		}
		printf("The mininum is %d.\n", min);

	return 0;
}
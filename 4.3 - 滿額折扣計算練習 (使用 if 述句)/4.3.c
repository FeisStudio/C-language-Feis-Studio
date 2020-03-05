#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	int number, total;
	printf("Please enter the number of customers:");
	scanf("%d", &number);

	//參考寫法一
	if (300 * number < 3000)
	{
		total = 300 * number;
	}
	if (300 * number >= 3000)
	{
		total = 300 * number * 0.8;
	}
	//參考寫法二
	total = 300 * number;
	if (total < 3000) 
	{
		total = total;
	}
	if (total >= 3000)
	{
		total = total * 0.8;
	}
	//參考寫法三
	total = 300 * number;
	if (total >= 3000)
	{
		total = total * 0.8;
	}
	printf("Total:%d\n", total);
	return 0;
}
#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	int number=1;
	for (
		number = 1; 
		!(number % 3 == 2 && number % 5 == 3 && number % 7 == 2);
		++number);
	{
	}
	printf("%d\n", number);
	return 0;
}
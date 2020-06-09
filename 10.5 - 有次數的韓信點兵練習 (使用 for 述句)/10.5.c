#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	//前三小
	//int n, i, j=1;
	//printf("Please enter the maximum value:");
	//scanf("%d", &n);
	//
	//for (i = 1; i <= n; ++i)
	//{
	//	if (j<=3&&(i % 3 == 2 &&i % 5 == 3 &&i % 7 == 2)) 
	//	{
	//			++j;
	//			printf("%d\n", i);
	//	}
	//}
	//前三大
	//int n, i, j = 1;
	//printf("Please enter the maximum value:");
	//scanf("%d", &n);

	//for (i = n; i >= 1; --i)
	//{
	//	if (j <= 3 && (i % 3 == 2 && i % 5 == 3 && i % 7 == 2))
	//	{
	//		++j;
	//		printf("%d\n", i);
	//	}
	//}
	//第三小
	int n, i, j = 0;
	printf("Please enter the maximum value:");
	scanf("%d", &n);

	for (i = 1; i <= n; ++i)
	{
		if (j <= 3 && (i % 3 == 2 && i % 5 == 3 && i % 7 == 2))
		{				
			++j;
			if (j == 3) 
			{
				printf("%d\n", i);
			}
		}
	}


	return 0;

}
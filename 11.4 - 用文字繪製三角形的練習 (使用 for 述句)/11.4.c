#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	//實心
	//int i, j, n;
	//printf("Please enter a positive number:");
	//scanf("%d", &n);
	//for (i = 1; i <= n; ++i)
	//{
	//	for (j = 1; j <= i; ++j)
	//	{
	//		printf("*");
	//	}
	//	printf("\n");
	//}

	//空心
	//參考寫法一
	//int i, j, n;
	//printf("Please enter a positive number:");
	//scanf("%d", &n);
	//printf("*\n");
	//for (i = 1; i <= n-3; ++i)
	//{
	//	printf("*");
	//	for (j = 1; j <= i; ++j) {
	//		printf(" ");
	//	}
	//	printf("*\n");
	//}
	//for(j=1;j<=n;++j){
	//	printf("*");
	//}
	//printf("*\n");

	int i, j, n;
	printf("Please enter a positive number:");
	scanf("%d", &n);
	for (i = 1; i <= n; ++i)
	{
		for (j = 1; j <= i; ++j)
		{
			if (j == 1  || i == n || i==j)
			{
				printf("*");
			}
			else
				printf(" ");

		}
		printf("\n");
	}

	
	return 0;
}
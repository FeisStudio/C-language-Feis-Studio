#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	//參考寫法一
	//int i, j, n;
	//for (j = 1; j <= n; ++j) {
	//	printf("* ");
	//}
	//printf("\n");
	//for (i = 1; i <= n - 2; ++i) {
	//	printf("* ");
	//	for (j = 1; j <= n - 2; ++j) {
	//		printf("  ");
	//	}
	//	printf("\n");
	//}
	//for (j = 1; j <= n; ++j) {
	//	printf("* ");
	//}
	//printf("\n");

	//參考寫法二
	int i, j, n;
	printf("Please enter a positive number:");
	scanf("%d", &n);
	for (i = 1; i <= n; ++i) {
		for (j = 1; j <= n; ++j) {
			if ((j == 1 || j == n) || (i == 1 || i == n)) {
				printf("* ");
			}
			else
				printf("  ");
		}
		printf("\n");
	}


	return 0;
}
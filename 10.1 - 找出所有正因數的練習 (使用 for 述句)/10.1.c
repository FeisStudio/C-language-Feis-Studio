#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	int n,i,p_factor;
	printf("Please enter a positive integer:");
	//n的因數：可以整除n的整數（整除：餘數為零）
	//n的正因數：n的因數且大於零
	scanf("%d", &n);
	for (i = 1; i <= n; i++)//列出可能的候選者
	{
		//參考寫法一
		if (n % i != 0){//檢查合格條件
			continue;
		}
		printf(" %d ", i);

		//參考寫法二
		//if (n % i == 0) {//檢查合格條件
		//	printf("%d", i);
		//}
		
	}
	return 0;
}
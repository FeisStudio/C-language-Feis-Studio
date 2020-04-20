#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	int max;
	printf("Please enter a number:");
	scanf("%d", &max);

	//參考寫法一
	int answer=0,i;
	for (i = max; i >= 1&&answer==0; --i) {
		if (i % 3 == 2 && i % 5 == 3 && i % 7 == 2) {
			answer=i;
		}
	}
	printf("%d\n", answer != 0 ? answer:0);
	
	//break述句 中斷目前所屬的重複執行述句

	//參考寫法二
	int  i;
	for (i = max; i >= 1; --i) {
		if (i % 3 == 2 && i % 5 == 3 && i % 7 == 2) {
			break;
		}
	}
	printf("%d\n", i);
	//continue述句 在重複執行述句中跳過後面的程式區塊
	return 0;
}
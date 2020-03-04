#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	int integer1;
	int integer2;
	int sum;
	printf("Please enter the first integer:");
	scanf("%d", &integer1);
	printf("Please enter the second integer:");
	scanf("%d", &integer2);
	sum = integer1 + integer2;
	printf("Sum is %d.\n", sum);
	
	//無條件的執行一次(一般述句)
	//有條件的執行一次(if述句)
	//無條件的重複執行(無窮回圈)
	//有條件的重複執行(while述句)
	//計次型重複執行(for述句)
	//選擇性的執行一次(switch述句)
	//至少執行一次下有條件的重複執行(do-while述句)
	//使用頻率:if>for>while>switch>do-while

	return 0;
}
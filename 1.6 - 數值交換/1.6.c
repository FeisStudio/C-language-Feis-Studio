#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	int integer1, integer2;
	printf("Please enter thr first integer:");
	scanf("%d", &integer1);
	printf("Please enter thr second integer:");
	scanf("%d", &integer2);
	
	//參考寫法一
	//integer1 = integer2;
	//integer2 = integer1;

	//參考寫法二
	//int temp = integer1;
	//integer1 = integer2;
	//integer2 = temp;

	//參考寫法三
	integer1 = integer1 + integer2;
	integer2 = integer1 - integer2;
	integer1 = integer1 - integer2;

	printf("integer1:%d\n", integer1);
	printf("integer2:%d\n", integer2);
	return 0;
}
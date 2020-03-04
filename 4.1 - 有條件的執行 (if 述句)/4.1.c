#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	//if(表示式){程式片段}
		//如果"表示式"成立,就執行"程式片段"
	int a;
	printf("a=");
	scanf("%d", &a);
	if (a > 4)
	{
		printf("a is larger than 4.\n");
	}
	return 0;
}
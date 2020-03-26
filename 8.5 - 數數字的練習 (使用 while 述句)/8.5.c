#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	//1~n
	//int integer=0,times;
	//printf("Please enter the number:");
	//scanf("%d", &times);
	//while(integer<times){
	//	printf("%d\n", integer += 1);
	//}
	
	//10~20
	//printf("Please enter the number:");
	//scanf("%d", &times);
	//while (integer < 20) {
	//	printf("%d\n", integer += 1);
	//}

	//m~n
	int integer=0,times;
	printf("Please enter the number M:");
	scanf("%d", &integer);
	printf("Please enter the number N:");
	scanf("%d", &times);
	while(integer<times){ 
		integer += 1;
		printf("%d\n", integer);
	}


	return 0;
}
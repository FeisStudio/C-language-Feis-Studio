#include<stdio.h>
int main()
{
	//一個位元(bit)可以儲存一個0或1
	//一個位元組(byte)通常可以儲存8個位元，（2*2*2*2*2*2*2*2）256種不同的組合
	//256儲存   0~255（無號數） -128~127（有號數）
	printf("   double: %d.\n", sizeof(double));
	printf("     void: %d.\n", sizeof(void));

	return 0;
}
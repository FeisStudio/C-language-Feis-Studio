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
	
	//�o�l���Ĉ���һ��(һ������)
	//�Зl���Ĉ���һ��(if����)
	//�o�l�������}����(�o�F��Ȧ)
	//�Зl�������}����(while����)
	//Ӌ�������}����(for����)
	//�x���ԵĈ���һ��(switch����)
	//���و���һ�����Зl�������}����(do-while����)
	//ʹ���l��:if>for>while>switch>do-while

	return 0;
}
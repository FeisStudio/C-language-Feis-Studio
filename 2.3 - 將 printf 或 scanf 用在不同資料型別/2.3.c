#include<stdio.h>
int main()
{
	int sum = 10;
	printf("Sum is %d.", sum);

	int a = 123456789;
	unsigned int b = 3000000000;
	//d��i     ʮ�Mλ��̖����       123
	//u        ʮ�Mλ�o̖����       123
	//o        ���Mλ��̖����       173
	//x     ʮ���Mλ�o̖����(С��)   7b
	//X     ʮ���Mλ�o̖����(��)   7B
	printf("%u\n", b);//3000000000  (o)
	printf("%u\n", a);//123456789   (?)
	return 0;
}
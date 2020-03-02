#include<stdio.h>
int main()
{
	int sum = 10;
	printf("Sum is %d.", sum);

	int a = 123456789;
	unsigned int b = 3000000000;
	//d或i     十進位有號整數       123
	//u        十進位無號整數       123
	//o        八進位五號整數       173
	//x     十六進位無號整數(小寫)   7b
	//X     十六進位無號整數(大寫)   7B
	printf("%u\n", b);//3000000000  (o)
	printf("%u\n", a);//123456789   (?)
	return 0;
}
#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	//�ɂ�׃������Сֵ
	int a, b,min;
	printf("Please enter two integers:");
	scanf("%d%d", &a, &b);
		//��������һ
		min = a;
		if (min > b)
		{
			printf("The mininum is %d", min);
		}
		//����������
		if (a < b)
		{
			min = a;
		}
		if (b > a)
		{
			min = b;
		}
		printf("The mininum is %d.\n", min);
		//����������
		min = a;
		if (b < a)
		{
			min = b;
		}
		printf("The mininum is %d.\n", min);

	//����׃������Сֵ
	int a, b, c, min;
	printf("Please enter three integers:");
	scanf("%d%d%d", &a, &b,&c);
		//��������һ
		if (a <= b && a <= c)
		{
			min = a;
		}
		if (b < a && b <= c)
		{
			min = b;
		}
		if (c < b && c < a)
		{
			min = c;
		}
		//����������
		min = a;
		if (b < a && b <= c)
		{
			min = b;
		}
		if (c < b && c < a)
		{
			min = c;
		}
		//����������
		min = a;
		if (b < min)
		{
			min = b;
		}
		if (c < min)
		{
			min = c;
		}
		printf("The mininum is %d.\n", min);

	return 0;
}
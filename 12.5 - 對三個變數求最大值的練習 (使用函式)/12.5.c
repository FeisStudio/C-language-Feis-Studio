#pragma warning(disable:4996)
//三個變數
	//#include<stdio.h>
	//int max_adc(int a, int b, int c);
	//
	//int main()
	//{
	//	int a, b, c;
	//	printf("Please enter three integers:");
	//	scanf("%d%d%d", &a, &b, &c);
	//	printf("The maxinum is %d.\n", max_adc(a,b,c));
	//
	//	return 0;
	//}
	//
	//int max_adc(int a, int b, int c) {
	//	int max = a;
	//	if (b > max) {
	//		max = b;
	//	}
	//	if (c > max) {
	//		max = c;
	//	}
	//	return max;
	//}

//二個變數
	//叄考寫法一
	#include<stdio.h>
	int max2(int a, int b);
	int max3(int a, int b, int c);

	int main()
	{
		int a, b, c;
		printf("Please enter the first integer:");
		scanf("%d", &a);
		printf("Please enter the second integer:");
		scanf("%d", &b);
		printf("Please enter the third integer:");
		scanf("%d", &c);

		printf("The maxinum is %d.\n", max3(a,b,c));
		return 0;
	}

	int max2(int a, int b)
	{
		int max;
		if (a >= b) {
			return a;
		}
		else {
			return b;
		}
	}

	int max3(int a, int b, int c) {
		int max;
		if (max2(a,b) > c) {
			return max2(a,b);
		}
		else {
			return c;
		}

	}

	//叄考寫法二
	#include<stdio.h>
	int max2(int a, int b);
	int max3(int a, int b, int c);

	int main()
	{
		int a, b, c;
		printf("Please enter the first integer:");
		scanf("%d", &a);
		printf("Please enter the second integer:");
		scanf("%d", &b);
		printf("Please enter the third integer:");
		scanf("%d", &c);

		printf("The maxinum is %d.\n", max3(a, b, c));
		return 0;
	}

	int max2(int a, int b)
	{
		int max;
		if (a >= b) {
			return a;
		}
		else {
			return b;
		}
	}

	int max3(int a, int b, int c) {
			return max2(max2(a, b),c);
	}


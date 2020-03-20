#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	//兩個變數求最大值
	//int a, b, max;
	//printf("Please enter two integers:");
	//scanf("%d%d", &a, &b);
	//if (a >= b) {
	//	max = a;
	//}
	//else {
	//	max = b;
	//}
	//printf("The maximum is %d.", max);

	//三個變數求最大值
	//參考寫法一
		int a, b, c, max;
		printf("Please enter three integers:");
		scanf("%d%d%d", &a, &b, &c);

		if (a >= b && a >= c){
			max = a;
		}
		else if (b >= a&& b >= c){
			max = b;
		}
		else if (c >= a&& c >= b){z
			max = c;
		}
	//參考寫法二
		int a, b, c, max;
		printf("Please enter three integers:");
		scanf("%d%d%d", &a, &b, &c);

		if (a >= b && a >= c) {
			max = a;
		}
		else if (b >= a && b >= c) {
			max = b;
		}
		else {
			max = c;
		}



	return 0;
}
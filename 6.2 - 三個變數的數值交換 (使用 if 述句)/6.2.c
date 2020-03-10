#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	int a, b, c, t;
	printf("Please enter three integers:");
	scanf("%d%d%d",&a,&b,&c);
	printf("\nBefore:%d  %d  %d\n", a, b, c);
	
	//ABC-CAB
		//參考寫法一
		//t = a;
		//a = c;
		//c = b;
		//b = t;
		//參考寫法二
			//將a與c交換
			//t = a;
			//a = c;
			//c = t;
			//將b與c交換
			//t = b;
			//b = c;
			//c = t;
	//ABC-BCA
			//參考寫法一
			//t = a;
			//a = b;
			//b = c;
			//c = t;
			//參考寫法二
				//將a與b交換
				t = a;
				a = b;
				b = t;
				//將a與c交換
				t = b;
				b = c;
				c = t;

	printf("\n After:%d  %d  %d\n", a, b, c);
	return 0;
}
#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	int a, b, c, t;
	printf("Please enter three integers:");
	scanf("%d%d%d", &a, &b, &c);
	printf("\nBefore:  %d  %d  %d\n", a, b, c);

	//參考寫法一
	//將a,b,c中最小的數值換到變數a
		//將a,b中最小的數值換到變數a
	//	if (b < a) {
	//		t = b; b = a; a = t;
	//	}
	//	//將a,c中較小的數值換到變數a	
	//	if (c < a) {
	//		t = c; c = a; a = t;
	//	}
	////將b,c中最小的數值換到變數b
	//if (c < b) {
	//	t = c; c = b; b = t;
	//}

	//參考寫法二
	//將a,b,c中大的數值換到變數c
		//將a,c中最大的數值換到變數c
		if (c < a) {
			t = c; c = a; a = t;
		}
		//將b,c中較大的數值換到變數c	
		if (c < b) {
			t = c; c = b; b = t;
		}
	//將b,c中最大的數值換到變數b
	if (b < a) {
		t = b; b = a; a = t;
	}
	printf("\n After:  %d  %d  %d\n", a, b, c);
	return 0;
}
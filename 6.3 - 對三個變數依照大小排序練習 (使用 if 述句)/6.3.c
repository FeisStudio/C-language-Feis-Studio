#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	int a, b, c, t;
	printf("Please enter three integers:");
	scanf("%d%d%d", &a, &b, &c);
	printf("\nBefore:  %d  %d  %d\n", a, b, c);
	if (a <= c && c < b) {
		//c�cb����ֵ���Q:(c,b) -> (b,c)
		t = b; b = c; c = t;
	}	
	if (b < a && a <= c) {
		//b�ca����ֵ���Q:(b,a) -> (a,b)
		t = a; a = b; b = t;
	}
	if (b <= c && c < a) {
		//b,c,a����ֵ���Q:(b,c,a) -> (a,b,c)
		t = a; a = b; b = c; c = t;
	}
	if (c < a && a <= b) {
		//c,a,b����ֵ���Q:(c,a,b) -> (a,b,c)
		t = a; a = c; c = b; b = t;
	}
	if (c < b && b < a) {
		//c�cb����ֵ���Q:(c,a) -> (a,c)
		t = a; a = c; c = t;
	}
	printf("\n After:  %d  %d  %d\n", a, b, c);
	return 0;
}
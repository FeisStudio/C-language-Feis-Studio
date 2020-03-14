#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	int a, b, c, t;
	printf("Please enter three integers:");
	scanf("%d%d%d", &a, &b, &c);
	printf("\nBefore:  %d  %d  %d\n", a, b, c);

	//參考寫法一
		//b與a做數值交換
		if ((b < a && a <= c) || (b <= c && c < a))
		{	
			t = a; a = b; b = t;
		}
		//c與a做數值交換
		if ((c < a && a <= b) || (c < b && b < a))
		{
			t = a; a = c; c = t;
		}
		//c與b做數值交換
		if ((a <= c && c < b) || (b <= c && c < a) || (c < a && a <= b))
		{
			t = b; b = c; c = t;
		}
	//參考寫法二
		//b與a做數值交換
		if ((b < a && a <= c) || (b <= c && c < a) || (c < b && b < a))
		{
			t = a; a = b; b = t;
		}
		//c與a做數值交換
		if ((c < a && a <= b))
		{
			t = a; a = c; c = t;
		}
		//c與b做數值交換
		if ((a <= c && c < b) || (b <= c && c < a) || (c < a && a <= b))
		{
			t = b; b = c; c = t;
		}
	//參考寫法三
		//b與a做數值交換
		if (b < a)
		{
			t = a; a = b; b = t;
		}
		//c與a做數值交換
		if (c < a)
		{
			t = a; a = c; c = t;
		}
		//c與b做數值交換
		if (c < b)
		{
			t = b; b = c; c = t;
		}


	printf("\n After:  %d  %d  %d\n", a, b, c);
	return 0;
}
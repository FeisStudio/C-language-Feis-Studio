#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	//C語言主要有兩種字元型別：1.char 2.wchar_t
	//一般我們使用的是char型別，而wchar_t型別則是使用在“寬字元”
	//char類型占用的記憶體大小爲1個位元組 中文使用多個char或者wchar_t
	//char ASCII編碼 1個位元組  整數型別
	//''    “”字串
	//%c
	char ch = 'A';
	printf("%c\n", ch);
	
	

	return 0;
}
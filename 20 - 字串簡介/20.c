#include<stdio.h>

//字串
//	字串是字元的序列
//		字元型別(char）可用來儲存「一個]字元，但需要處理
//	  的文字經常是「一串]字元
//			"Hello world"不只有一個字元
//	C語言並沒有替字串定義一個新的資料型別
//		字串是用字元陣列(char[])的形式來儲存
//		透過在<string.h>內提供各種處理 字元陣列的函式來實
//	  現對字串的操作行爲。

//字元陣列
//	字元與字元陣列
//		一個字元型別變數可以儲放一個字元
//			char ch='H';
//	一個字元陣列型別變數可以儲放一到多個字元
//			char str[]={'H','e','l','l','o'};20 - 字串簡
//		   介
//字串與字元陣列
//	字串是以'\0'表示結尾的字元陣列
//		char str[]={'H','e','l','l','o','\0'};
//	字元陣列可以用 "字串內容" 進行初始化，會自動加上'\0'字元
//			char str[]="Hello";
//


void str_print(char str[]) {

	printf("%s\n", str);
}

int main() {
	char str[] = "Hello world";
	str_print(str);
	return 0;
}
#include<stdio.h>
//字串
//	字串是字元的序列，使用字元陣列儲存
//		字串是以 '\0' 表示結尾的字元陣列
//		char str[] = { 't','e','s','t','\0' };
//	字元陣列可以用 "字串" 進行初始化，會自動加上 '\0' 字元
//		char str[] = "test";

int main() {
	char strA[] = "test";
	char strB[] = { 't','e','s','t','\0' };

	printf(strA);								// (O) 隱性轉性成指標
	printf(strB);								// (O) 隱性轉性成指標

	printf("test");								// (O: 字串字面常數)
	printf({ 't','e','s','t','\0' });			// (X)

	char* strC = "test";						// (?: 字串字面常數）
	char *strD[] = { 't','e','s','t','\0' };	// (X)

	printf((char[]){ 't','e','s','t','\0' });	// (C99:複合字面常數)


	return 0;
}




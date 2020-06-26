#include<stdio.h>
int str_len(char str[]);
//%zu爲C99標準，如果編譯器不支援則須改爲%u或%lu
//	C語言允許字元陣列大小剛好只包括含有文字內容的部分，但這
//樣的字元陣列不能直接拿來给一般字串處理函式使用

int main() {
	char str[] = "Hello world";//12個大小空格\0
	printf("Length: %zu\n", sizeof(str));//字元陣列大小是12
	printf("Length: %d\n", str_len(str));//字串長度是11
	return 0;
}

int str_len(char str[]) {
	int i = 0;
	while (str[i] != '\0') {//以第一個'\0'做結尾
		i++;
	}
	return i;
}

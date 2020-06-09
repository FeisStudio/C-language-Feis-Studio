#include<stdio.h>
int f(int x);//函式宣告


//在程式碼的顺序中，呼叫函式前要先宣告或定義函式。
int main()
{
	printf("%d\n", f(4));//函式呼叫 
	return 0;
}


int f(int x) {
	return x + 3;//函式定義
}

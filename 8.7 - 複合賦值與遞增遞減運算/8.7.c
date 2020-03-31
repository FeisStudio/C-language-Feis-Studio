#include<stdint.h>
int main() 
{
	//a++和a--的區別
	//前遞增  先讓變量+1  然後進行表達式運算
	//int a1 = 10;
	//int b1 = ++a1 * 10;
	//printf("a2=%d	b2=%d\n",a1,b1);
	//後遞增  先讓表達式運算  然後變量+1
	//int a2 = 10;
	//int b2 = a2++ * 10;
	//printf("a2=%d	b2=%d\n", a2, b2);

	//複合賦值運算符
	//運算子		意義		範例		相等於
	// +=	   加等於   a+=2     a=a+2
	// -=      減等於   a-=2     a=a-2
	// *=      乘等於   a*=2     a=a*2
	// /=      除等於   a/=2     a=a/2
	// %=     求餘等於  a%=2     a=a%2

	//遞增遞減運算符
	//運算子		意義		範例		對a相等於
	// ++	    遞增     a++     a=a+1	a原本的值
	// ++       遞增     ++a     a=a+1	a加1後的值
	// --	    遞減     a--     a=a-1	a原本的值
	// --       遞減     --a     a=a-1	a減1後的值



	//int count;
	//count = count + 1;
	//count += 1;
	//count++;
	//putchar(count);
	return 0;
}
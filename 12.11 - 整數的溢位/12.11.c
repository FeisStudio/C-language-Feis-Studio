#include<stdio.h>
#include<limits.h>

//有號整數的溢位是未定義行為
int main() {
	printf("%d\n", INT_MAX);
	printf("%d\n", INT_MIN);
	return 0;
}
#pragma warning(disable:4996)
#include<stdio.h>
int f(int);

int main() {
	printf("%d\n",f(0));
	return 0;
}
 
int f(int i) {
	if (i == 2) {
		return i;
	}
	return f(i + 1);
}
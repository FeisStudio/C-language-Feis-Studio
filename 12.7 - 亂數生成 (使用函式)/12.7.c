#pragma warning(disable:4996)
#include<stdlib.h>
#include<stdio.h>
#include<time.h>

int main()
{
	srand(time(0));
	int i;
	for (i = 1; i <= 5; i++) {
		printf("%d\n", rand());
	}
	return 0;
}

#pragma warning(disable:4996)
#include<stdio.h>

int main() {
	int number[5], integer;
	int i,j;
	for (i = 1; i <= 5; ++i) {
		printf("%d:", i);
		scanf("%d",&number[i-1]);
	}
	while (1) {
		printf("Q:");
		scanf("%d", &i);
		if (i == 0) {
			break;
		}
		printf("%d\n", number[i - 1]);
	}
	
	return 0;
}
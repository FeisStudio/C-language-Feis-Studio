#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	//參考寫法一
	//從小到大
	int max;
	printf("Please enter a maximum value:");
	scanf("%d", &max);

	int i,answer=0;
	for (i = 1; i <= max; ++i) {
		if (i % 3 == 2 &&
			i % 5 == 3 &&
			i % 7 == 2) {
			//printf("%d\n", i);
			//break;
			answer = i;
		}
	}
	if (answer != 0) {
		printf("%d\n", answer);
	}

	//參考寫法二
	//從大到小
	int max;
	printf("MAX=");
	scanf("%d", &max);

	int i = max;
	while (i > 0 && !(i % 3 == 2 && i % 5 == 0 && i % 7 == 2)) {
		--i;
	}
	if (i > 0) {
		printf("%d\n", i);
	}

	//參考寫法三
	int max;
	printf("Please enter a maximum value:");
	scanf("%d", &max);

	int i, answer = 0;
	for (i = max; i >= 1; --i) {
		if (i % 3 == 2 &&
			i % 5 == 3 &&
			i % 7 == 2) {
			//printf("%d\n", i);
			//break;
			answer = i;
		}
	}
	if (answer != 0) {
		printf("%d\n", answer);
	}


	return 0;
}
#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	int guess, count=0, answer = 4;
	while (count == 0 ||guess != answer) {
		printf("Please enter your guess:");
		scanf("%d", &guess);
		count += 1;
		if (guess > answer) {
			printf("Too large!\n");
		}
		else if (guess<answer) {
			printf("Too small!\n");
		}
	}
	printf("Correct!(%d)\n",count);
	return 0;
}
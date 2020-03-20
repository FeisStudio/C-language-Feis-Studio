#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	int fact = 4, guess;
	printf("Please enter your guess:");
	scanf("%d", &guess);
	if (guess > fact) {
		printf("Too large!\n");
	}
		else if (guess < fact) {
			printf("Too small!\n");
		}
			else {
				printf("Correct!\n");
			}
	return 0;
}
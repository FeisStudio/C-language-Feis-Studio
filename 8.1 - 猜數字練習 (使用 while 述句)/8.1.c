#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	int guess, answer = 4;

	//參考寫法一
	//printf("Please enter your guess:");
	//scanf("%d", &guess);
	//if (guess > answer) {
	//	printf("Too large!\n");
	//}
	//else if (guess < answer) {
	//	printf("Too small!\n");
	//}
	//else {
	//	printf("Correct！\n");
	//}
	//while (guess != answer) {
	//	printf("Please enter your guess:");
	//	scanf("%d", &guess);
	//	if (guess > answer) {
	//		printf("Too large!\n");
	//	}
	//	else if (guess < answer) {
	//		printf("Too small!\n");
	//	}
	//	else {
	//		printf("Correct!\n");
	//	}
	//}

	//參考寫法二
	printf("Please enter your guess:");
	scanf("%d", &guess);
	while (guess != answer) {
		if (guess > answer) {
			printf("Too large!\n");
		}
		else {
			printf("Too small!\n");
		}
		printf("Please enter your guess:");
		scanf("%d", &guess);
	}

	printf("Correct!\n");
	return 0;
}
#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	//int a = 5;
	////int a = 3;
	//if (a > 4)
	//{
	//	printf("a is larger than 4.\n");
	//}
	//if (a < 4)
	//{
	//	printf("a is smaller than 4.\n");
	//}
	//if (a == 4)
	//{
	//	printf("a is equal than 4.\n");
	//}

	int answer = 4;
	int guess;
	printf("Please ente your guess:");
	scanf("%d", &guess);
	if (guess > answer)
	{
	printf("Too larger!\n");
	}
	if (guess < answer)
	{
		printf("Too small!\n");
	}
	if (guess == answer)
	{
		printf("Correct!\n");
	}


	return 0;
}
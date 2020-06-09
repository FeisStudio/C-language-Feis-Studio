#pragma warning(disable:4996)
#include<stdlib.h>
#include<stdio.h>
#include<time.h>

//叄考寫法一
//int main()
//{
//	srand(time(0));
//	int i;
//	for (i = 1; i <= 6; i++) {
//		int dice ;
//		do {
//			dice = rand();
//		} while (dice < 1 || dice>6);
//		printf("%d\n", dice);
//	}
//	return 0;
//}
//叄考寫法二
//int main()
//{
//	srand(time(0));
//	int i;
//	for (i = 1; i <= 6; i++) {
//		int dice = rand() % 6+1;
//		printf("%d\n", dice);
//	}
//	return 0;
//}
//

//用户輸入猜數字
int main()
{
	srand(time(0));
	int answer = rand() % 100;
	int guess;

	do {
		printf("Please enter your guess:");
		scanf("%d", &guess);
		if (guess > answer) {
			printf("Too large!\n");
		}
		else if (guess < answer) {
			printf("Too small!\n");
		}
		else {
			printf("Correct!\n");
		}
	} while (guess != answer);
	return 0;
}
#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	int num1, num2;
	char op;
	float answer;
	printf("Please enter an expression:");
	scanf("%d%c%d", &num1, &op, &num2);
	if (op == '+') {
		answer = num1 + num2;
	}
	else if (op == '-') {
		answer = num1 - num2;
	}
	else if (op == '*') {
		answer = num1 * num2;
	}
	else {
		answer = (float)num1 / num2;
	}
	printf("ANS:%\n", answer);

	return 0;
}
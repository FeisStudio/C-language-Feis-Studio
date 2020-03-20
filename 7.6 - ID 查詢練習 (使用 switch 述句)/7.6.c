#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	int id;
	printf("Please enter the ID number you want to query:");
	scanf("%d", &id);
	switch (id) {
		case 2:
			printf("John\n");
			break;
		case 13:
			printf("Mary\n");
			break;
		case 16:
			printf("Amy\n");
			break;
		default:
			printf("No found\n");
	}
		return 0;
}
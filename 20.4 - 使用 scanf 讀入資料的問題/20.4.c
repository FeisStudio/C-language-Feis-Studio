#pragma warning(disable:4996)
#include<stdio.h>

int  main() {
	int number;
	//if (scanf("%d", &number) == 1) {
	//	printf("%d\n", number);
	//}
	//else {
	//	printf("Error: Invalid input\n");
	//}


	while (scanf("%d", &number) != 1) {
		printf("Error: Invalid input\n");
	}
	printf("%d\n", number);





	return 0;
}
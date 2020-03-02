#include<stdio.h>
int main()
{
	printf("short int: %d.\n", sizeof(short int));
	printf("      int: %d.\n", sizeof(int));
	printf(" long int: %d.\n",sizeof(long int));
	printf("     char: %d.\n", sizeof(char));
	printf("    float: %d.\n", sizeof(float));
	printf("   double: %d.\n", sizeof(double));
	printf("     void: %d.\n", sizeof(void));

	return 0;
}
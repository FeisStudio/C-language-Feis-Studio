#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	int side1, side2, side3;
	printf("Please enter the lengths:");
	scanf("%d%d%d", &side1, &side2, &side3);
	
	//參考寫法一 
	if (side1 == side2 && side1 != side3)
	{
		printf("Isosceles triangle\n");
	}
	if (side1 == side3 && side1 != side2)
	{
		printf("Isosceles triangle\n");
	}
	if (side2 == side3 && side2 != side1)
	{
		printf("\n");
	}
	
	//參考寫法二
	if (side1 == side2 && side1 != side3 ||
		side1 == side3 && side1 != side2 ||
		side2 == side3 && side2 != side1)
	{
		printf("Isosceles triangle\n");
	}
	return 0;
}
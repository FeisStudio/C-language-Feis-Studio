#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	int side1, side2, side3, t;
	printf("Pleside1se enter the lengths:");
	scanf("%d%d%d", &side1, &side2, &side3);
	//判断能否组成三角形
	if ((side1 + side2 > side3&& side1 - side2 < side3) &&
		(side1 + side3 > side2&& side1 - side3 < side2) &&
		(side3 + side2 > side1&& side3 - side2 < side1))

	{
		//將side1,side2,side3中最小的數值換到變數side1
			//將side1,side2中最小的數值換到變數side1
			if (side1 > side2) {
t = side1; side1 = side2; side2 = t;
			}
			//將side1,side3中較小的數值換到變數side1	
			if (side1 > side3) {
				t = side1; side1 = side3; side3 = t;
			}
		//將side2,side3中最小的數值換到變數side2
		if (side2 > side3) {
			t = side2; side2 = side3; side3 = t;
		}
		printf("\n After sorting:  %d  %d  %d\n", side1, side2, side3);

		//正三角形
		if (side1 == side3){
			printf("Regular triangle\n");
		}
		//等腰三角形
		if (side1 == side2 && side1 != side3 ||
			side2 == side3 && side2 != side1){
			printf("Isosceles triangle\n");
		}
		//直角三角形
		if (side1 * side1 + side2 * side2 == side3 * side3){
			printf("Rectangular triangle\n");
		}

		}
	else
	{
		printf("It's not a triangle");
	}

	return 0;

}
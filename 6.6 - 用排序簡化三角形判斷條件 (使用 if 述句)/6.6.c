#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	int side1, side2, side3, t;
	printf("Pleside1se enter the lengths:");
	scanf("%d%d%d", &side1, &side2, &side3);
	//�ж��ܷ����������
	if ((side1 + side2 > side3&& side1 - side2 < side3) &&
		(side1 + side3 > side2&& side1 - side3 < side2) &&
		(side3 + side2 > side1&& side3 - side2 < side1))

	{
		//��side1,side2,side3����С�Ĕ�ֵ�Q��׃��side1
			//��side1,side2����С�Ĕ�ֵ�Q��׃��side1
			if (side1 > side2) {
t = side1; side1 = side2; side2 = t;
			}
			//��side1,side3���^С�Ĕ�ֵ�Q��׃��side1	
			if (side1 > side3) {
				t = side1; side1 = side3; side3 = t;
			}
		//��side2,side3����С�Ĕ�ֵ�Q��׃��side2
		if (side2 > side3) {
			t = side2; side2 = side3; side3 = t;
		}
		printf("\n After sorting:  %d  %d  %d\n", side1, side2, side3);

		//��������
		if (side1 == side3){
			printf("Regular triangle\n");
		}
		//����������
		if (side1 == side2 && side1 != side3 ||
			side2 == side3 && side2 != side1){
			printf("Isosceles triangle\n");
		}
		//ֱ��������
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
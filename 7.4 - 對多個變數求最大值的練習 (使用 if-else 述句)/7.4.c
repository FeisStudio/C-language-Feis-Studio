#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	//�ɂ�׃�������ֵ
	//int a, b, max;
	//printf("Please enter two integers:");
	//scanf("%d%d", &a, &b);
	//if (a >= b) {
	//	max = a;
	//}
	//else {
	//	max = b;
	//}
	//printf("The maximum is %d.", max);

	//����׃�������ֵ
	//��������һ
		int a, b, c, max;
		printf("Please enter three integers:");
		scanf("%d%d%d", &a, &b, &c);

		if (a >= b && a >= c){
			max = a;
		}
		else if (b >= a&& b >= c){
			max = b;
		}
		else if (c >= a&& c >= b){z
			max = c;
		}
	//����������
		int a, b, c, max;
		printf("Please enter three integers:");
		scanf("%d%d%d", &a, &b, &c);

		if (a >= b && a >= c) {
			max = a;
		}
		else if (b >= a && b >= c) {
			max = b;
		}
		else {
			max = c;
		}



	return 0;
}
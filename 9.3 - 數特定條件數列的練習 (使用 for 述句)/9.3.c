#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	//1-10间不是3倍数的偶数
	int i;
		//參考寫法一
		//for (i = 1;i<=10;i++) {
		//	if (i%2==0&&i % 3 != 0) {
		//		printf("%d\n", i);
		//	}
		//}
		
		//參考寫法二
		//for (i = 2; i <= 10; i+=2) {
		//	if (i % 3 != 0) {
		//		printf("%d\n", i);
		//	}
		//}

		for (i = 1; i <= 10; i++) {
			if (i % 3 != 0) {
				printf("%d\n", i);
			}
		}

	return 0;
}
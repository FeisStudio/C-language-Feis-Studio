#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	//1-10�䲻��3������ż��
	int i;
		//��������һ
		//for (i = 1;i<=10;i++) {
		//	if (i%2==0&&i % 3 != 0) {
		//		printf("%d\n", i);
		//	}
		//}
		
		//����������
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
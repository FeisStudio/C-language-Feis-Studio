#include<stdio.h>
int main()
{
	//10-1
	//int i;
	//for (i = 10; i >= 1;i--) {
	//	printf("%d\n",i);
	//}

	//1-10���攵
		//��������һ
			//int i;
			//for (i = 1; i <= 10; i+=2) {
			//	printf("%d\n", i);
			//}
		//����������
			//int i;
			//for (i = 1; i <= 5; i++) {
			//	int number = 2*i-1;
			//	printf("%d\n", number);
			//}
		//����������
			//int i;
			//for (i = 1; i <= 10; i++) {
			//	if (i % 2 == 1) {
			//		printf("%d\n", i);
			//	}
			//}
		//1-10��ż��
		//��������һ
			//int i;
			//for (i = 2; i <= 10; i+=2) {
			//	printf("%d\n", i);
			//}
		//����������
			//int i;
			//for (i = 1; i <= 5; i++) {
			//	int number = 2*i;
			//	printf("%d\n", number);
			//}
		//����������
			int i;
			for (i = 1; i <= 10; i++) {
				if (i % 2 == 0) {
					printf("%d\n", i);
				}
			}

	return 0;
}
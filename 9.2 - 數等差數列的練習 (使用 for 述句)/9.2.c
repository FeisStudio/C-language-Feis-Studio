#include<stdio.h>
int main()
{
	//10-1
	//int i;
	//for (i = 10; i >= 1;i--) {
	//	printf("%d\n",i);
	//}

	//1-10的奇數
		//參考寫法一
			//int i;
			//for (i = 1; i <= 10; i+=2) {
			//	printf("%d\n", i);
			//}
		//參考寫法二
			//int i;
			//for (i = 1; i <= 5; i++) {
			//	int number = 2*i-1;
			//	printf("%d\n", number);
			//}
		//參考寫法三
			//int i;
			//for (i = 1; i <= 10; i++) {
			//	if (i % 2 == 1) {
			//		printf("%d\n", i);
			//	}
			//}
		//1-10的偶數
		//參考寫法一
			//int i;
			//for (i = 2; i <= 10; i+=2) {
			//	printf("%d\n", i);
			//}
		//參考寫法二
			//int i;
			//for (i = 1; i <= 5; i++) {
			//	int number = 2*i;
			//	printf("%d\n", number);
			//}
		//參考寫法三
			int i;
			for (i = 1; i <= 10; i++) {
				if (i % 2 == 0) {
					printf("%d\n", i);
				}
			}

	return 0;
}
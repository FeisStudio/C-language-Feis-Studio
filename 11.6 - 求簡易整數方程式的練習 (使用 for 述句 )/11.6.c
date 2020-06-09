#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	//參考寫法一
	int i, j;
	for (i = 1; i<=30; ++i) {
		for (j = 1;j<= 30; ++j) {
			if (i + j == 30 && i * j == 221&&i<j) {
				printf("%d %d\n", i, j);
			}
		}
	}
	
	//參考寫法二
	//int i, j;
	//for (i = 1; i <= 30; ++i) {
	//	for (j = 1; j <= 30; ++j) {
	//		if (i + j == 30 && i * j == 221 && i <=15&&j<=15) {
	//			printf("%d %d\n", i, j);
	//		}
	//	}
	//}

	//參考寫法三
	//int i, j;
	//for (i = 1; i <= 30/2; ++i) {
	//	for (j = 30/2; j <= 30; ++j) {
	//		if (i + j == 30 && i * j == 221 ) {
	//			printf("%d %d\n", i, j);
	//		}
	//	}
	//}

	//參考寫法四
	int i, j;
	for (i = 1; i <= 30/2; ++i) {
		int j = 30 - i;
			if (i * j == 221 ) {
				printf("%d %d\n", i, j);
			}
	}
	

	return 0;
}
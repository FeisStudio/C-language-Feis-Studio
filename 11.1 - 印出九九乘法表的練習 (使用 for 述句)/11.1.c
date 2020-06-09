#include<stdio.h>
int main()
{
	//參考寫法一
	//int i, j;
	//for (i = 1; i <= 9; ++i) {
	//	for (j = 1; j <= 9; ++j) {
	//		printf("%d ｘ %d = %d\n", i, j, i * j);

	//	}
	//}

	//參考寫法二
	//int i,j,c;
	//for (c = 1; c <= 72; ++c) {
	//	int i = (c - 1) / 9 + 2;
	//	int j = (c - 1) % 9 + 1;
	//	printf("%d ｘ %d = %d\n", i, j, i * j);
	//}

	//參考寫法三
	int l,h,n;
	for (l = 1; l <= 9; ++l) {
		//for (n = 1; n <= 9 - l; n++)
		//	printf("         ");

		for (h = 1; h <= l; ++h) {
			printf("%dｘ%d=%2d  ", h, l, h * l);
		}
		printf("\n");
	}

	return 0;
}
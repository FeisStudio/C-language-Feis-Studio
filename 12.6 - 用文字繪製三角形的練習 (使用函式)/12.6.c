#pragma warning(disable:4996)
#include<stdio.h>
//��������һ
	//void triangle(int n);

	//int main()
	//{
	//	int n;
	//	printf("Please enter a positive number:");
	//	scanf("%d", &n);
	//	triangle(n);
	//	return 0;
	//}

	////void ����؂�ֵ�͑B�r��ʾ�ú�ʽ���؂��κ�ֵ
	//void triangle(int n) {
	//	int i, j;
	//	for (i = 1; i <= n; ++i) {
	//		for (j = 1; j <= i; ++j) {
	//			printf("*");
	//		}
	//		printf("\n");
	//	}
	//}
//����������
	void stars(int i);
	void triangle(int n);

	int main()
	{
		int n;
		printf("Please enter a positive number:");
		scanf("%d", &n);
		triangle(n);
		return 0;
	}

	//void ����؂�ֵ�͑B�r��ʾ�ú�ʽ���؂��κ�ֵ
	void triangle(int n) {
		int i;
		for (i = 1; i <= n; ++i) {
				stars(i);
				printf("\n");
		}
	}

	void stars(int i) {
		int j;
		for (j = 1; j <= i; ++j) {
			printf("*");
		}
	}



#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	//����������
	//int n;
	//printf("n = ");
	//scanf("%d", &n);

	//int i, j;
	//for (i = 1; i <= n; ++i) {
	//	for (j = 1; j <= n; ++j) {
	//		if(j==1||i==n||i==j){
	//			printf("*");
	//		}
	//		else {
	//			printf(" ");
	//		}
	//	}
	//	printf("\n");
	//}

	//����������
	//���¿���
	//int n;
	//printf("n = ");
	//scanf("%d", &n);

	//int i, j;
	//for (i = 1; i <= n; ++i) {
	//	for (j = 1; j <= n; ++j) {
	//		if (j == n || i == n || i + j == n + 1) {
	//			printf("*");
	//		}			
	//		else {
	//			printf(" ");
	//		}
	//	}
	//	printf("\n");
	//}

	//���Ͽ���
	int n;
	printf("n = ");
	scanf("%d", &n);

	int i, j;
	for (i = 1; i <= n; ++i) {
		for (j = 1; j <= n; ++j) {
			if (j == n || i == 1 || i ==j) 
				printf("*");
			
			else {
				printf(" ");
			}
		}
		printf("\n");
	}

	return 0;
}
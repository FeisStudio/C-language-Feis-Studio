#include<stdio.h>

//！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！
	//��辛參�ﾀ輌���峺�槙�双
void print(int *(*q)[]) {								//int **q吉揖豢 int *(*q)	匯��峺�勃枯鰔���屁�亀綴���
	int i;												//int **q=&v��int  **��音吉豢(int (*)[5])(?)
	for (i = 0; i < sizeof(*q) / sizeof((*q)[0]); i++) {//sizeof(int[3])/sizeof(int)
		printf("%d ", (*q)[i]);							//慌喘揖匯��痕塀
	}
	printf("\n");
}
int main() {
	int v[] = { 1,2,3 };
	print(&v);
	return 0;
}

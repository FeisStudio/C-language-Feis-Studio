#pragma warning(disable:4996)
#include<stdlib.h>
#include<stdio.h>
#include<time.h>

//��������һ
//int main() {
//	srand(time(0));
//	int i,j,isUsed, n[10];
//	for (i = 0; i < 10; i++) {
//		do {
//			n[i] = rand() % 10 + 1;
//			isUsed = 0;
//			for (j = 0; j < i; j++) {
//				if (n[i] == n[j]){
//					isUsed = 1;
//					break; 
//				}
//			}
//		} while (isUsed == 1);
//		printf("%d\n",n[i]);
//	}
//	printf("\n");
//	return 0;
//}

//����������
int main() {
	srand(time(0));
	int i, j, isUsed, n[10];
	for (i = 0; i < 10; i++) {//10��ޒȦ
		do {
			n[i] = rand() % 10 + 1;//�����S�C��
			for (j = 0; j < i; j++) {//��i-1��ޒȦ�Йz�y���S�C���Ƿ���F�^
				if (n[i] == n[j]) {//�z�y�S�C���Ƿ���ͬ
					break;//�K��ѭ�h
				}
			}
		} while (j != i);//j!=i��ʾ�S�C�����F�^ 
		printf("%d\n", n[i]);
	}
	printf("\n");
	return 0;
}
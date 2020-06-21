#pragma warning(disable:4996)
#include<stdlib.h>
#include<stdio.h>
#include<time.h>

//叄考寫法一
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

//叄考寫法二
int main() {
	srand(time(0));
	int i, j, isUsed, n[10];
	for (i = 0; i < 10; i++) {//10次迴圈
		do {
			n[i] = rand() % 10 + 1;//生成隨機數
			for (j = 0; j < i; j++) {//在i-1次迴圈中檢測，隨機數是否出現過
				if (n[i] == n[j]) {//檢測隨機數是否相同
					break;//終步循環
				}
			}
		} while (j != i);//j!=i表示隨機數出現過 
		printf("%d\n", n[i]);
	}
	printf("\n");
	return 0;
}
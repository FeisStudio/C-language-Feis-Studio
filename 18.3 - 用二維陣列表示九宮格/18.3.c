#include<stdio.h>
int main() {
	
	//��������һ
	int v[3][3] = { {1,2,3,},{4,5,6},{7,8,9,} };
	int i, j, k=1;
	for (i = 0; i < 3; i++) {//�M
		for (j = 0; j < 3; j++) {//�w
			v[i][j] = k;
			k++;
		}
	}
	for (i = 0; i < 3; i++) {//�M
		for (j = 0; j < 3; j++) {//�w
			printf("%2d", v[i][j]);
		}
		printf("\n");
	}
	//����������
	int v[3][3] = { {1,2,3,},{4,5,6},{7,8,9,} };
	int i, j;
	for (i = 0; i < 3; i++) {//�M
		for (j = 0; j < 3; j++) {//�w
			v[i][j] = i * 3 + j + 1;
		}
	}
	for (i = 0; i < 3; i++) {//�M
		for (j = 0; j < 3; j++) {//�w
			printf("%2d", v[i][j]);
		}
		printf("\n");
	}


	return 0;
}
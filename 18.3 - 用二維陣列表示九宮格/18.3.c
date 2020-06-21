#include<stdio.h>
int main() {
	
	//叄考寫法一
	int v[3][3] = { {1,2,3,},{4,5,6},{7,8,9,} };
	int i, j, k=1;
	for (i = 0; i < 3; i++) {//橫
		for (j = 0; j < 3; j++) {//竪
			v[i][j] = k;
			k++;
		}
	}
	for (i = 0; i < 3; i++) {//橫
		for (j = 0; j < 3; j++) {//竪
			printf("%2d", v[i][j]);
		}
		printf("\n");
	}
	//叄考寫法二
	int v[3][3] = { {1,2,3,},{4,5,6},{7,8,9,} };
	int i, j;
	for (i = 0; i < 3; i++) {//橫
		for (j = 0; j < 3; j++) {//竪
			v[i][j] = i * 3 + j + 1;
		}
	}
	for (i = 0; i < 3; i++) {//橫
		for (j = 0; j < 3; j++) {//竪
			printf("%2d", v[i][j]);
		}
		printf("\n");
	}


	return 0;
}
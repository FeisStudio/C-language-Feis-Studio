#include<stdio.h>

int main() {

	//��������һ
	int v[9] = { 1,2,3,4,5,6,7,8,9 };
	int i;

	for (i = 0; i < 9; i++) {
		printf("%2d", v[i]);
		if (i % 3 == 2) {
			printf("\n");
		}
	}

	//����������
	int v[9];
	int i;

	for (i = 0; i < 0; i++) {
		v[i] = i + 1;
	}

	for (i = 0; i < 9; i++) {
		printf("%2d", v[i]);
		if (i % 3 == 2) {
			printf("\n");
		}
	}


	
	
	
	
	
	
	return 0;
}
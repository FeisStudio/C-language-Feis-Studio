#include<stdio.h>
int max5(int[5]);
//int max3(int[3]);

//int main() {
//	int v[3] = { 1,2,3 };
//	printf("%d\n", v[0]);
//	printf("%d\n", v[1]);
//	printf("%d\n", v[3/2]);   //v[1]
//
//	printf("%d\n", v[0.5]);   //���g�e�`
//	printf("%d\n", v[3 / 2.]);//���g�e�`
//
//	printf("%d\n", v[3]);     //δ���x�Р�
//	printf("%d\n", v[4]);     //δ���x�Р�
//	printf("%d\n", v[-1]);     //δ���x�Р�
//
//	return 0;
//}

int main() {
	int a[3] = { 3,9,7 };
	printf("Max: %d\n", max5(a));
	int b[5] = { 3,2,1,9,7 };
	printf("Max: %d\n", max5(b));
	return 0;
}

//int max5(int v[5]) {
//	int max = v[0], i;
//	for (i = 1; i < 5; i++) {
//		if (v[i] > max) {
//			max = v[i];
//		}
//	}
//	return max;
//}

int max5(int v[5]) {
	int max = v[0], i;
	for (i = 1; i < 5; i++) {
		if (v[i] > max) {
			max = v[i];
		}
	}
	return max;
}
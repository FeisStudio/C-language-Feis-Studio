//#include<stdio.h>
//int maxv(int[]);
//
//int main() {
//	int a[3] = { 3,8,7 };
//	printf("Max:%d\n", maxv(&a[0]));
//	return 0;
//}
//
//int maxv(int *v[]) {
//	int max = *(v+0), i;
//	for (i = 1; i < 3; i++) {
//		if (*(v+i) > max) {
//			max = *(v+i);
//		}
//	}
// 	return max;
//}

#include<stdio.h>
int maxv(int[], int n);

int main() {
	int a[3] = { 3,9,7 };
	printf("Max: %d\n", maxv(a, 3));//a等同於&a[0]
	int b[5] = { 3,9,1,2,7 };
	printf("Max: %d\n", maxv(b, 5));//b等同於&b[0]
	return 0;
}

int maxv(int *v, int n) {	//*v等同於v[0]
	int max = v[0], i;		//v[0]等同於*(v+0)等同於*(v[0]+0)
	for (i = 1; i < n; i++) {
		if (v[i] > max) {	//v[i]等同於*(v+i)等同於*(v[0]+i)
			max = v[i];
		}
	}
	return max;
}
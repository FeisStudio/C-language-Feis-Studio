//#include<stdio.h>
//int length(int[]);
//
//int main() {
//
//
//	int v[] = { 1,2,3,4,5,-1 };
//	printf("%d\n",length(v));
//
//	return 0;
//}
//
//int length(int v[]) {
//	int i = 0;
//	while (v[i] != -1) {
//		i++;
//	}
//	//return i+1;
//	return i;
//}

#include<stdio.h>
int maxv(int[]);


int main() {
	int a[4] = { 3,9,7,-1 };
	printf("Max: %d\n", maxv(a));
	int b[6] = { 3,2,1,9,7,-1 };
	printf("Max: %d\n", maxv(b));
	return 0;
}


int maxv(int v[]) {
	int max = v[0], i=1;
	while (v[i] != -1) {
		if (v[i] > max) {
			max = v[i];
		}
		i++;
	}
	return max;
}
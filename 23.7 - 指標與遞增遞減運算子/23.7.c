#include<stdio.h>

//��������һ
//int main() {
//	int v[5];
//	int *p;
//	for (p = v; p < &v[5]; p++) {
//		*p = 0;
//		printf("%2d", *p);
//	}
//	return 0;
//}

//����������
//int main() {
//	int v[5];
//	int* p;
//	for (p = v; p < v+5; p++) {
//		*p = 0;
//		printf("%2d", *p);
//	}
//	return 0;
//}

//����������
//int main() {
//	int v[5];
//	int* p = v;
//	while (p != v+5) {
//		*p++ = 0;		//*(p++) = 0;  p++�@�õ��Ǽ�֮ǰ��p������֮��P��λַ��һ
//	}
//	return 0;
//}
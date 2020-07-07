#include<stdio.h>

//參考寫法一
//int main() {
//	int v[5];
//	int *p;
//	for (p = v; p < &v[5]; p++) {
//		*p = 0;
//		printf("%2d", *p);
//	}
//	return 0;
//}

//參考寫法二
//int main() {
//	int v[5];
//	int* p;
//	for (p = v; p < v+5; p++) {
//		*p = 0;
//		printf("%2d", *p);
//	}
//	return 0;
//}

//參考寫法三
//int main() {
//	int v[5];
//	int* p = v;
//	while (p != v+5) {
//		*p++ = 0;		//*(p++) = 0;  p++獲得的是加之前的p，執行之後P的位址加一
//	}
//	return 0;
//}
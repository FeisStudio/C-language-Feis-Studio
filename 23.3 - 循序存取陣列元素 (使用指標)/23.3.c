#include<stdio.h>


//參考寫法一
int main() {
	int v[5] = { 1,2,3,4,5 };
	int *n = v;	
	int i;	//int *n=&v[0];
	for (i = v; i < 5; i++) {
		printf("%d\n", *(n+i));
	}
	return 0;
}

//參考寫法二
int main() {
	int v[5] = { 1,2,3,4,5 };
	int* n;		//int *n=&v[0];
	for (n = v; n != &v[5]; n++) {//v=v[0]
		printf("%d\n", *n);
	}
	return 0;
}

//參考寫法三
int main() {
	int v[5] = { 1,2,3,4,5 };
	int *n = v;		//int *n=&v[0];
	while (n != &v[5]) {
		printf("%d\n", *n++);
	}
	return 0;
}

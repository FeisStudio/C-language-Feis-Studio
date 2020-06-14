#pragma warning(disable:4996)
#include<stdio.h>
//1~3
//void countTo3(int);
//
//int main(){
//	countTo3(1);	
//	return 0;
//}
//
//void countTo3(int i) {
//	if (i <= 3) {
//		printf("%d\n", i);
//		countTo3(i + 1);
//	}
//}

//3~1
void countTo3(int);

int main() {
	countTo3(1);
	return 0;
}

void countTo3(int i) {
	if (i <= 3) {
		countTo3(i + 1);
		printf("%d\n", i);
	}
}

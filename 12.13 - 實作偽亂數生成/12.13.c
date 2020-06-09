#pragma warning(disable:4996)
#include<stdio.h>

int main() {
	unsigned int next = 1;//unsigned int 溢位後等同除以UINI_MAX+1的餘數

	//叄考寫法一
	//x   =(x * 1103515245 + 12345) % 4294967296
	// n+1   n
	for (int i = 1; i <= 20; i++) {
		next++;
		next = next * 1103515245 + 12345;
		printf("%u\n", next);
	}
	//叄考寫法二
	//for (int i = 1; i <= 20; i++) {
	//	next++;
	//	next = next * 1103515245 + 12345;
	//	int rand = (unsigned int)(next / 65536) % 32768;
	//	printf("%u\n", next);
	//}

	return 0;
}
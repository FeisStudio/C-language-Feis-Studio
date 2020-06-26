#include<stdio.h>

int main() {
	int v[3] = { 1,2,3 };
	//當前定義中int佔據4個位元組
	//1個位元(bit)=(0,1)=0.125字節(byte)
	//1個位元組/字節(Byte)=8個位元(Bit)
	//v[i]的起始位址=第一個元素的起始位址 + i * sizeof(int)
	printf("%d", sizeof(v));
	

	
	
	return 0;
} 
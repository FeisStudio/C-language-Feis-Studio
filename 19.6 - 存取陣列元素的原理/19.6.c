#include<stdio.h>

int main() {
	int v[3] = { 1,2,3 };
	//��ǰ���x��int�ד�4��λԪ�M
	//1��λԪ(bit)=(0,1)=0.125�ֹ�(byte)
	//1��λԪ�M/�ֹ�(Byte)=8��λԪ(Bit)
	//v[i]����ʼλַ=��һ��Ԫ�ص���ʼλַ + i * sizeof(int)
	printf("%d", sizeof(v));
	

	
	
	return 0;
} 
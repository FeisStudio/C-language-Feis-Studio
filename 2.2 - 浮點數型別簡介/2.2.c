#include<stdio.h>
int main()
{
	//һ��λԪ(bit)���ԃ���һ��0��1
	//һ��λԪ�M(byte)ͨ�����ԃ���8��λԪ����2*2*2*2*2*2*2*2��256�N��ͬ�ĽM��
	//256����   0~255���o̖���� -128~127����̖����
	printf("   double: %d.\n", sizeof(double));
	printf("     void: %d.\n", sizeof(void));

	return 0;
}
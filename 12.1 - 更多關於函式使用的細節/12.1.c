#include<stdio.h>
int f(int x);//��ʽ����


//�ڳ�ʽ�a��˳���У����к�ʽǰҪ��������x��ʽ��
int main()
{
	printf("%d\n", f(4));//��ʽ���� 
	return 0;
}


int f(int x) {
	return x + 3;//��ʽ���x
}

#include<stdio.h>
void swap(int*, int*);

//ԓ��׃��ֵ߀��ַ
//	����ԭ�t��
//		���Ԃ�ֵ�͂�ֵ
//			�}�uһ�ݱ��^��ȫ�����±�͵�ģ��_����ʽ�gǬ�Q
//			 ���P�S
//	����Ҏ�t��
//		����������׃���ں��к�ʽ��ֵ���Ąӵĕr�����电ֵ
//		 ���Q�Ĺ���
//		�o��ֱ���}�uֵ�ĕr��������к��ִ���
//		�}�u�ĳɱ�̫�ߵĕr�������^�}�s�ĽY����



int main() {
	int a = 5, b = 3;
	swap(&a, &b);
	printf("a: %d\n", a);
	printf("b: %d\n", b);
	return 0;
}


void swap(int* a, int* b) {
	int t = *a;
	*a = *b;
	*b = t;
}
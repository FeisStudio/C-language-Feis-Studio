#pragma warning(disable:4996)
#include<stdlib.h>
#include<stdio.h>
#include<time.h>

int maxv(int[], int n);

int main() {
	int a[3] = { 3,9,7 };
	printf("Max: %d\n", maxv(a, 3));//a�����xȡ����У�3�����xȡ����д�
	int b[5] = { 3,9,1,2,7 };
	printf("Max: %d\n", maxv(b, 3));
	return 0;
}
//������ʽ�����r����д�С����������������Ҳ���Բ�����С��
//���������ʽ�����ĕr�򣬿��Բ��o��С��
//��ʽ����������͑B�ĕr����еĴ�С�K����Ҫ��
int maxv(int v[], int n) {//int v[]�����xȡ����У�int n�����xȡ����д�С
	int i, max = v[0];
	for (i = 1; i < n; i++) {
		if (v[i] > max) {
			max = v[i];
		}
	}
	return max;
}


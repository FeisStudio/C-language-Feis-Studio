#pragma warning(disable:4996)
#include<stdio.h>



int count(void) {//void��ʾ��ʽ�]�Ѕ���
	static int k = 0;//���B��static���ą^��D��ֻ�Е���һ����ֻ �� ��ʼ��һ��
	k++;
	return k;
}

int main() {
	for (int i = 1; i <= 5; i++) {
		printf("%d\n", count());
	}
	return 0;
}
//1.�ں�ʽ�g��������͑B�r���cһ���Y���͑B�Р���һ��
//		һ���Y���͑B���������}�uһ������뺯ʽ�����������
//	�B�s�����}�uһ����С�
//2.����ʽ�؂�ֵ������͑B�r���@�ǲ��Ϸ��ġ�
//		����������Ч춺�ʽ�؂���Ч�����҂����Ԍ����������
//	�����롣�����������������r����Ѓ��ݵ��޸ĕ����õ��@
//	�������б���
//3.�����cһ���Y���͑B���Р������C�Z�Ԍ�����ָ�ˁ�̎����N
//����}�u�c��ȡ���Р���
#include<stdlib.h>
#include<stdio.h>
#include<time.h>


void arrayPrint(int v[10]);
int arrayMax(int v[10]);
void arrayRand(int v[10]);

//����xֵ�r��������У������}�u
//��ʽ�Ļ؂�ֵ����ָ��������͑B����ʽ�ą�������������͑B
//��п��Ԯ�����ʽ�ą�������
int main() {
	srand(time(0));//����
	int v[10];//����10�����g
	arrayRand(v);//�����S�C��
	arrayPrint(v);//ӡ���S�C��
	printf("Max: %d\n", arrayMax(v));//ӡ�����ֵ
	return 0;
}

void arrayRand(int v[10]) {
	int i;
	for (i = 0; i < 10; i++) {
		v[i] = rand() % 100;
	}
}

void arrayPrint(int v[10]) {
	int i;
	for (i = 0; i < 10; i++) {
		printf("%d", v[i]);
	}
	printf("\n");
}

int arrayMax(int v[10]) {
	int max=v[0],i;
	for (i = 0; i < 10; i++) {
		if (v[i] > max) {
			max = v[i];
		}
	}
	return max;
}


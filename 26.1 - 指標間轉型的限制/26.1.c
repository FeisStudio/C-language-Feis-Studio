#include<stdio.h>

	
void print(int *(*q)[]) {								//int **q��ͬ� int *(*q)	һ��ָ��ָ��һ��������ָ��
	int i;												//int **q=&v��int  **�������(int (*)[5])(?)
	for (i = 0; i < sizeof(*q) / sizeof((*q)[0]); i++) {//sizeof(int[3])/sizeof(int)
		printf("%d ", (*q)[i]);							
	}
	printf("\n");
}
int main() {					//int *n=v;  //(int *)=(int [5])	(O)  һ�����������(�D�ɵ�һ��Ԫ�ص�λַ������ֱ���D��һ��������ָ��  �[���D��
	int v[] = { 1,2,3 };
	print(&v);					//int **q=&v;//	(int **)=(int (*)[5])	(?}  һ��ָ��������е�ָ�� �o���D�� һ��ָ������ָ�˵�ָ��
	return 0;
}

//������������������������������������������������������������������������������������������������������������������������
//ָ���g���D��
//�^�󲿷ֵ���r�£�ָ��ͬ�̈́e��ָ���g�ǲ���ֱ���[���D�͵�
int intVar;
double doubleVar;
int intArray[3];

int* intPointer = &doubleVar;			// (int *)=(double *)		(?)	ָ��֮�g�Ļ��D�^�󲿷ֶ��ǲ��е�
double* doublePointer = &intVar;		// (double *)=(int *)		(?)
int** intPointerPointer1 = &intVar;		// (int **)=(int *)			(?)
int** intPointerPointer2 = &intArray;	// (int **)=(int (*)[3])	(?)һ��ָ���L�Ƞ�3����е�ָ�� �o���D�� һ��ָ������ָ�˵�ָ��
int** intPointerPointer3 = intArray;	// (int **)=(int [3])		(?)һ����������� �o���D�� һ��������ָ�˵�ָ��

const int* c = &a;						//(const int *)=(int *)		(O)һ��ָ��������ָ�� �����D�� һ��ָ���o�B������ָ��
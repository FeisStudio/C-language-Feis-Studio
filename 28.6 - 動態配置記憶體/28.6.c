#pragma warning(disable:4996)
#include<stdio.h>
#include<stdlib.h>


//ʹ�� malloc ��ʽ׌�҂��ӑB����ӛ���w
	//void* malloc(size_t size);
	//size ����ؓ�����ΑB��size_t)����ʾҪ���õ�ӛ���w���g��С��λԪ�M��
		//��ʹ��sizeof�\���������Ҫ���ö���ӛ���w���g
	//�؂�ֵ�ΑB�� void * ��ʾ�����[���D�ͳ������Y���͑B��ָ��
int main() {
	int* numbers;			//����ݔ��Ĕ���
	int length = 0;			//Ŀǰ�ѽ�ݔ��Ĕ��ւ���

	while (1) {
		int input;
		scanf("%d", &input);			//���I�Pݔ�딵��(���O�҂�����ݔ��1��2��3��4��������
		if (input == 0) {				//���ݔ�딵�֠� 0 �t�Y��
			break;
		}
													//�ӑB����ӛ���w
		int* larger = malloc(sizeof(int) * (length + 1));		//�a��һ����һ���������
													//ʹ�� malloc ���õ�ӛ���w�����Ԅ�ጷ�
		for (int i = 0; i < length; i++) {
			larger[i] = numbers[i];		//�}�u�f��е������
		}
		numbers = larger;				//�� numbers �O�����a���������
		numbers[length] = input;		//��ݔ�딵�ּ���������
		length++;						//��ݔ��Ĕ��ւ����� 1
	}

	//��ȡδ���õ�ӛ���w���g����δ���x�Р���

	printf("Numbers:");
	for (int i = 0; i < length; i++) {	//��ÿ��ݔ��Ĕ���
		printf("%-2d", numbers[i]);
	}
	printf("\n");
	return 0;
}

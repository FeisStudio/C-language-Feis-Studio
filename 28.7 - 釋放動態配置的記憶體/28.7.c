#pragma warning(disable:4996)
#include<stdio.h>
#include<stdlib.h>

//ʹ�� free ��ʽጷńӑB���õ�ӛ���w
	//<stdilb.h>�ṩ free ��ʽጷńӑB���õ�ӛ���w
		//void free(void* ptr);	
		//ptr����ҪጷŵĄӑBӛ���wλַ
			//ԓӛ���w���g���� malloc �������ӑB����ӛ���w��ʽ�����õ�
		//�؂�ֵ�ΑB�� void * ��ʾ�����[���D�ͳ������Y���͑B��ָ��

int main() {
	int* numbers = 0;		//0 ��ʾ��ָ�ˣ�NULL)
	int length = 0;			//Ŀǰ�ѽ�ݔ��Ĕ��ւ���

	while (1) {
		int input;
		scanf("%d", &input);			//���I�Pݔ�딵��
		if (input == 0) {				//���ݔ�딵�֠� 0 �t�Y��
			break;
		}
		//�ӑB����ӛ���w
		int* larger = malloc(sizeof(int) * (length + 1));		//�a��һ����һ���������
													//ʹ�� malloc ���õ�ӛ���w�����Ԅ�ጷ�
		for (int i = 0; i < length; i++) {
			larger[i] = numbers[i];		//�}�u�f��е������
		}
		free(numbers);
		numbers = larger;				//�� numbers �O�����a���������
		
		numbers[length] = input;		//��ݔ�딵�ּ���������
		length++;						//��ݔ��Ĕ��ւ����� 1
	}

	//ӛ���w��©(Memory leak)

	printf("Numbers:");
	for (int i = 0; i < length; i++) {	//��ÿ��ݔ��Ĕ���
		printf("%-2d", numbers[i]);
	}
	printf("\n");
	return 0;
}

#pragma warning(disable:4996)
#include<stdio.h>
#include<stdlib.h>

	int main() {
		int* numbers;			//����ݔ��Ĕ���
		int length = 0;			//Ŀǰ�ѽ�ݔ��Ĕ��ւ���

		while (1) {
			int input;
			scanf("%d", &input);			//���I�Pݔ�딵��(���O�҂�����ݔ��1��2��3��4��������
			if (input == 0) {				//���ݔ�딵�֠� 0 �t�Y��
				break;
			}
			int larger[length + 1];		//�a��һ����һ���������
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
	 
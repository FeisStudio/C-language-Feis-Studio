#pragma warning(disable:4996)
#include<stdio.h>
#include<stdlib.h>

//���N׌���׃��
//	�҂������Ć��}
//		��еĴ�С�����涨�x�ĕr��͛Q����
//	��Ҫ׃��ĕr��
//		1���a��һ���^��������
//		2�����f�е��Y���}�u���µ����
//		3���������ȡ���f���

//����������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������
int main() {
	int numbers[0];		//����ݔ��Ĕ���
	int length = 0;			//Ŀǰ�ѽ�ݔ��Ĕ��ւ���

	while (1) {
		int input;
		scanf("%d", &input);	//���I�Pݔ�딵��
		if (input == 0) {		//���ݔ�딵�֠�0�t�Y��
			break;
		}

		int larger[length + 1];		//�a��һ����һ���������
		for (int i = 0; i < length; i++) {
			larger[i] = numbers[i];		//�}�u�f��е������
		}
		numbers = larger;			//�� numbers �O�����a���������

		numbers[length] = input;	//��ݔ�딵�ּ���������
		length++;					//��ݔ��Ĕ��ւ�����1
	}

	printf("Numbers:");
	for (int i = 0; i < length; i++) {
		printf("%-2d", numbers[i]);
	}
	printf("\n");
	return 0;
}


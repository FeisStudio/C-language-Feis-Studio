#pragma warning(disable:4996)
#include<stdio.h>
#include<stdlib.h>

int main() {
	int numbers[10];		//����ݔ��Ĕ���
	int length = 0;			//Ŀǰ�ѽ�ݔ��Ĕ��ւ���

	while (length < 10) {
		int input;
		scanf("%d", &input);	//���I�Pݔ�딵��
		if (input == 0) {		//���ݔ�딵�֠�0�t�Y��
			break;
		}
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


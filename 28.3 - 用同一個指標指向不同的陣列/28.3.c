#pragma warning(disable:4996)
#include<stdio.h>
#include<stdlib.h>

//����������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������
int main() {
	int *numbers;		//����ݔ��Ĕ���
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

//��������������������������������������������������������������������������������������������������������������������������������
//int main() {
//	int* numbers;
//	int length = 0;
//
//	int larger1[1] = { 1 };
//	numbers = larger1;	//numbers=larger[0]
//	length++;
//	for (int i = 0; i < length; i++) {
//		printf("%d ", numbers[i]);	//��ͬ� printf("%d ",larger1[i]);
//	}
//	printf("\n");
//
//	int larger2[2] = { 2,3 };
//	numbers = larger2;	//numbers=larger[0]
//	length++;
//	for (int i = 0; i < length; i++) {
//		printf("%d ", numbers[i]);	//��ͬ� printf("%d ",larger2[i]);
//	}
//	printf("\n");
//	
//	//ָ��׃�����Ը�׃��ָ������
//
//	return 0;
//}

#pragma warning(disable:4996)
#include<stdio.h>
#include<stdlib.h>

//！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！
int main() {
	int *numbers;		//�Υ聟�秘議�久�
	int length = 0;			//朕念厮����秘議�久�����

	while (1) {
		int input;
		scanf("%d", &input);	//槈I�P��秘�久�
		if (input == 0) {		//泌惚��秘�久���0�t�Y崩
			break;
		}

		int larger[length + 1];		//�a伏匯��寄匯��議仟��双
		for (int i = 0; i < length; i++) {
			larger[i] = numbers[i];		//�}�u�f��双欺仟��双
		}
		numbers = larger;			//�� numbers �O�����a伏議仟��双

		numbers[length] = input;	//�⊥�秘�久崋嘖旌釶畸�
		length++;					//�⊥�秘議�久����擬�1
	}

	printf("Numbers:");
	for (int i = 0; i < length; i++) {
		printf("%-2d", numbers[i]);
	}
	printf("\n");
	return 0;
}

//！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！
//int main() {
//	int* numbers;
//	int length = 0;
//
//	int larger1[1] = { 1 };
//	numbers = larger1;	//numbers=larger[0]
//	length++;
//	for (int i = 0; i < length; i++) {
//		printf("%d ", numbers[i]);	//吉揖豢 printf("%d ",larger1[i]);
//	}
//	printf("\n");
//
//	int larger2[2] = { 2,3 };
//	numbers = larger2;	//numbers=larger[0]
//	length++;
//	for (int i = 0; i < length; i++) {
//		printf("%d ", numbers[i]);	//吉揖豢 printf("%d ",larger2[i]);
//	}
//	printf("\n");
//	
//	//峺�没��疑敏垳鍔�侭峺�魑定�双
//
//	return 0;
//}

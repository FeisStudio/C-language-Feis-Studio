#pragma warning(disable:4996)
#include<stdio.h>
#include<stdlib.h>

//！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！
int main() {
	int numbers[10];		//�Υ聟�秘議�久�
	int length = 0;			//朕念厮����秘議�久�����

	while (length < 10) {
		int input;
		scanf("%d", &input);	//槈I�P��秘�久�
		if (input == 0) {		//泌惚��秘�久���0�t�Y崩
			break;
		}
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

//！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！
//int main() {
//	int numbers[10];			//�Υ聟�秘議�久�
//	int length = 0;			//朕念厮����秘議�久�����
//
//	while (length < 10) {
//		int input;
//		scnaf("%d", &input);	//槈I�P��秘�久�
//		if (input == 0) {		//泌惚��秘�久���0�t�Y崩
//			break;
//		}
//		numbers[length] = input;	//�⊥�秘�久崋嘖旌釶畸�
//		length++;					//�⊥�秘議�久����擬�1
//	}
//
//	printf("Numbers:");
//	for (int i = 0; i < length; i++) {
//		printf("%d", numbers[i]);
//	}
//	printf("\n");
//	return 0;
//}

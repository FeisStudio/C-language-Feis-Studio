#include<stdio.h>
//ָ���̈́e�cȡֵ���g���\��
//	ָ��(type *):�Ƀ���ӛ���wλַ���̈́e
//	ȡֵ�\����(&):��ȡ��׃����ӛ���w��ʼλַ
//		&׃��
//	�g���\����(*):ȡ����ԓӛ���wλַ��ʼ��׃��
//		*ӛ���wλַ

//����������*&���Ե���
int main() {

	int count = 9;
	int* countAddr = &count;
	printf("%d\n", countAddr);

	int result = *countAddr;
	*countAddr = 10;
	printf("%d\n", *countAddr);

	*&*&*&*&result = 20;
	printf("%d\n", result);


	return 0;
}
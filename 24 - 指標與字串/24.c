#include<stdio.h>
//�ִ�
//	�ִ�����Ԫ�����У�ʹ����Ԫ��Ѓ���
//		�ִ����� '\0' ��ʾ�Yβ����Ԫ���
//		char str[] = { 't','e','s','t','\0' };
//	��Ԫ��п����� "�ִ�" �M�г�ʼ�������ԄӼ��� '\0' ��Ԫ
//		char str[] = "test";

int main() {
	char strA[] = "test";
	char strB[] = { 't','e','s','t','\0' };

	printf(strA);								// (O) �[���D�Գ�ָ��
	printf(strB);								// (O) �[���D�Գ�ָ��

	printf("test");								// (O: �ִ����泣��)
	printf({ 't','e','s','t','\0' });			// (X)

	char* strC = "test";						// (?: �ִ����泣����
	char *strD[] = { 't','e','s','t','\0' };	// (X)

	printf((char[]){ 't','e','s','t','\0' });	// (C99:�}�����泣��)


	return 0;
}




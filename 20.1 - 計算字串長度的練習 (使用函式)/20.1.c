#include<stdio.h>
int str_len(char str[]);
//%zu��C99�˜ʣ�������g����֧Ԯ�t횸Ġ�%u��%lu
//	C�Z�����S��Ԫ��д�С����ֻ�����������փ��ݵĲ��֣����@
//�ӵ���Ԫ��в���ֱ���Á��һ���ִ�̎��ʽʹ��

int main() {
	char str[] = "Hello world";//12����С�ո�\0
	printf("Length: %zu\n", sizeof(str));//��Ԫ��д�С��12
	printf("Length: %d\n", str_len(str));//�ִ��L����11
	return 0;
}

int str_len(char str[]) {
	int i = 0;
	while (str[i] != '\0') {//�Ե�һ��'\0'���Yβ
		i++;
	}
	return i;
}

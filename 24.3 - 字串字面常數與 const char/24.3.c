#include<stdio.h>

int main() {

	char strA[] = "test";
	const char* strB = "test";	//�ִ����泣�����[���D�ͳ���Ԫָ��
							//ֻ���x���܌�

	strA[0] = 'T';	// (O)
	//strB[0] = 'T';	// (X) ���gʧ��

	//strA = "Test";	// (X) ���gʧ��		
	strB = "Test";	// (O) 

	int printf(const char* "Hello world!\n");


	//printf("Hello world!\n");���int printf( const char *format, ... );

	return 0;
}
#include<stdio.h>

int main() {
	
	char strA[] = "test";
	char *strB = "test";	//�ִ����泣�����[���D�ͳ���Ԫָ��
							//ֻ���x���܌�

	strA[0] = 'T';	// (O)
	strB[0] = 'T';	// (X) δ���x�Р�

	strA = "Test";	// (X) ���gʧ��		
	strB = "Test";	// (O) 


	return 0;
}
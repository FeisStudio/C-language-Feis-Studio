#include<stdio.h>

int main() {
	
	char strA[] = "test";
	char *strB = "test";	//�ִ����泣�����[���D�ͳ���Ԫָ��
							//ֻ���x���܌�
							//һ�����w,���g���Ԅ�һ��Ψ�x���g 

	strA[0] = 'T';	// (O)
	strB[0] = 'T';	// (X) δ���x�Р�	ֻ���xȡ,���܌�

	strA = "Test";	// (X) ���gʧ��		���֮�g�ǲ�����ֱ���xֵ��
	strB = "Test";	// (O)  


	return 0;
}	 
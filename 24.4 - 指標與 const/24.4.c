#include<stdio.h>

// Type * �����D��const Type *

int main() {
	
	char strA[] = 'test';
	char *strB = 'test';
	const char *strC[] = 'test';

	strA[0] = 'T';	// O					ֻ�ܸ���Ԫ�����޸����
	//strB[0] = 'T';	// X	��δ���x�Р���	Ψ�x
	strC[0] = 'T';	// X	�����gʧ����		�����޸���Ԫ�������԰��ִ�ָ������һ���ִ�
	 
	strA = strB;	// (char [])=(char *)			(X)	��в���ֱ�ӱ��xֵ
	strA = strC;	// (char [])=(const char *)		(X)	��в���ֱ�ӱ��xֵ
	strB = strA;	// (char *)=(char [])			(O)	��Ԫ��д浽��Ԫָ��	��Ԫ��п����[���D����Ԫָ��
	strB = strC;	// (char *)=(const char *)		(X)	Ψ�x׃��(��Ԫ)�����޸Ġ����x�Ɍ�
	strC = strA;	// (const char *)=(char [])		(O)	strA�D����Ԫָ�ˣ����D��const char* 
	strC = strB;	// (const char *)=(char *)		(O)	���x�Ɍ��D�����x

	return 0;
}
#include<stdio.h>

// Type * �����D��const Type *

int main() {
	
	char strA[] = 'test';
	char *strB = 'test';
	const char *strC[] = 'test';

	strA[0] = 'T';	// O					ֻ�ܸ���Ԫ�����޸����
	strB[0] = 'T';	// X	��δ���x�Р���
	strC[0] = 'T';	// X	�����gʧ����		�����޸���Ԫ�������԰��ִ�ָ������һ���ִ�

	strA = strB;	// (char [])=(char *)			(X)
	strA = strC;	// (char [])=(const char *)		(X)
	strB = strA;	// (char *)=(char [])			(O)
	strB = strC;	// (char *)=(const char *)		(X)
	strC = strA;	// (const char *)=(char [])		(O)
	strC = strB;	// (const char *)=(char *)		(O)

	return 0;
}
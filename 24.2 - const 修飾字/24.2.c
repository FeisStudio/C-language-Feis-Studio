#include<stdio.h>

//const����� �o�B����
//	�Y���̈́e��const���׃���ڡ���ʼ����֮�ⲻ���ٱ��xֵ
//		��C�Z���e���Կ�����һ��Ψ��(read-only)�Č���



int main() {
	
	int a = 3;			// (O) 
	const int b = 5;	// (O) 
	const int c;		// (?) 
	a = 4;				// (O) 
	b = 6;				// (X) ���gʧ��
	
	int a[3] = { 3,4,5 };			// (O) 
	const int b[3] = { 5,6,7 };		// (O) 

	a[0] = 4;						// (O) 
	b[0] = 6;						// (X) ���gʧ��




	return 0;
}
#include<stdio.h>
//ָ��׃������(type*)
//	��ָ�ˡ�(Pointer)��C�Z�Ե���Ҫ���ԣ��ǷN���桺ӛ���w
//	  λַ�����Y���̈́e
//	ָ��׃�������Z����
//		  �Y���̈́e *׃�����Q��
//		��ʾ׃���ȴ�ŵ���һ������@�N���Y���̈́e��ֵ�ġ�ӛ
//		 ���wλַ��
//
//ȡֵ�\����(&)
//	׃�������Y���̈́e���ד�һ����ӛ���w���g���҂���������ȡ
//   ȡֵ�\����(&)ȥȡ��׃���_�^��ӛ���wλַ
//	
//	int count = 9;
//	int *countAddr = &count;
//
//
//	��ʾʽ	�Y���̈́e		ֵ	
//	count	  int		 9
//	&count	  int*	  2293620
// countAddr  int*	  2293620

int main() {
	int count = 9;
	
	int a;
	int* b;

	a = count;	//	 (int)  = (int)		O
	b = count;	//	(int *)!= (int)		X

	a = &count;	//	 (int) != (int *)	X
	b = &count;	//	(int *) = (int *)	O	


	return 0;
}
#include<stdio.h>
//ȡֵ�\����(*)
//	�����أ��҂����������g���\����(*)��ӛ���wλַȡ���_�^
//   λ�ԓλַ��׃��(�e������ָ��׃���õ� * ��죩
//
//
//	int count = 9;
//	int *countAddr = &count;
//	int result = *countAddr;
//
//	��ʾʽ	�Y���̈́e		ֵ	
//	count	  int		 9
//	&count	  int*	  2293620
// countAddr  int*	  2293620
// *countAddr int		 9
//	result	  int		 9


//int main() {
//	int count = 9;
//
//	int a;
//	int* b;
//
//	a = count;	//	 (int)  = (int)		O
//	b = count;	//	(int *)!= (int)		X
//
//	a = &count;	//	 (int) != (int *)	X
//	b = &count;	//	(int *) = (int *)	O	
//
//	count = *a;	//	 (int) != (int *)	X
//	count = *b;	//	(int *) = (int *)	O	
//
//	return 0;
//}
int main() {
	int countA = 9;
	int countB = 10;
	int *countAddr;

	countAddr = &countA;
	*countAddr = 0;
	printf("%d\n", &countA);

	countAddr = &countB;
	*countAddr = 0;
	printf("%d\n", &countB);

	return 0;
}
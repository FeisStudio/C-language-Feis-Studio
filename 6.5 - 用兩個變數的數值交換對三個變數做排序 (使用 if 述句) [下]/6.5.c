#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	int a, b, c, t;
	printf("Please enter three integers:");
	scanf("%d%d%d", &a, &b, &c);
	printf("\nBefore:  %d  %d  %d\n", a, b, c);

	//��������һ
	//��a,b,c����С�Ĕ�ֵ�Q��׃��a
		//��a,b����С�Ĕ�ֵ�Q��׃��a
	//	if (b < a) {
	//		t = b; b = a; a = t;
	//	}
	//	//��a,c���^С�Ĕ�ֵ�Q��׃��a	
	//	if (c < a) {
	//		t = c; c = a; a = t;
	//	}
	////��b,c����С�Ĕ�ֵ�Q��׃��b
	//if (c < b) {
	//	t = c; c = b; b = t;
	//}

	//����������
	//��a,b,c�д�Ĕ�ֵ�Q��׃��c
		//��a,c�����Ĕ�ֵ�Q��׃��c
		if (c < a) {
			t = c; c = a; a = t;
		}
		//��b,c���^��Ĕ�ֵ�Q��׃��c	
		if (c < b) {
			t = c; c = b; b = t;
		}
	//��b,c�����Ĕ�ֵ�Q��׃��b
	if (b < a) {
		t = b; b = a; a = t;
	}
	printf("\n After:  %d  %d  %d\n", a, b, c);
	return 0;
}
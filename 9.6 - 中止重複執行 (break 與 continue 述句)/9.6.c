#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	int max;
	printf("Please enter a number:");
	scanf("%d", &max);

	//��������һ
	int answer=0,i;
	for (i = max; i >= 1&&answer==0; --i) {
		if (i % 3 == 2 && i % 5 == 3 && i % 7 == 2) {
			answer=i;
		}
	}
	printf("%d\n", answer != 0 ? answer:0);
	
	//break���� �Д�Ŀǰ���ٵ����}��������

	//����������
	int  i;
	for (i = max; i >= 1; --i) {
		if (i % 3 == 2 && i % 5 == 3 && i % 7 == 2) {
			break;
		}
	}
	printf("%d\n", i);
	//continue���� �����}�������������^����ĳ�ʽ�^�K
	return 0;
}
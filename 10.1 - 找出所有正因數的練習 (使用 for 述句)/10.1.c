#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	int n,i,p_factor;
	printf("Please enter a positive integer:");
	//n���򔵣���������n���������������N�����㣩
	//n�����򔵣�n�����Ҵ����
	scanf("%d", &n);
	for (i = 1; i <= n; i++)//�г����ܵĺ��x��
	{
		//��������һ
		if (n % i != 0){//�z��ϸ�l��
			continue;
		}
		printf(" %d ", i);

		//����������
		//if (n % i == 0) {//�z��ϸ�l��
		//	printf("%d", i);
		//}
		
	}
	return 0;
}
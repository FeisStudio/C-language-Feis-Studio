#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	int a, b, c, t;
	printf("Please enter three integers:");
	scanf("%d%d%d",&a,&b,&c);
	printf("\nBefore:%d  %d  %d\n", a, b, c);
	
	//ABC-CAB
		//��������һ
		//t = a;
		//a = c;
		//c = b;
		//b = t;
		//����������
			//��a�cc���Q
			//t = a;
			//a = c;
			//c = t;
			//��b�cc���Q
			//t = b;
			//b = c;
			//c = t;
	//ABC-BCA
			//��������һ
			//t = a;
			//a = b;
			//b = c;
			//c = t;
			//����������
				//��a�cb���Q
				t = a;
				a = b;
				b = t;
				//��a�cc���Q
				t = b;
				b = c;
				c = t;

	printf("\n After:%d  %d  %d\n", a, b, c);
	return 0;
}
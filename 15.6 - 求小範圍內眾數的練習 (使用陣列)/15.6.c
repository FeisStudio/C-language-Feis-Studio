#pragma warning(disable:4996)
#include<stdio.h>

int main()
{
	int i, n, b[10] = { 0 };
	for (i = 1; i <= 10; i++) {
			scanf("%d", &n);
			b[n]++;//׃�����F�ĴΔ�
	}
	
	int ans = 0;
	for (n = 1; n < 10; n++) {
		if (b[n] >= b[ans]) {//b[0]�ĴΔ�
			ans = n;
		}
	}
	printf("Ans:%d\n", ans);

	return 0;
}
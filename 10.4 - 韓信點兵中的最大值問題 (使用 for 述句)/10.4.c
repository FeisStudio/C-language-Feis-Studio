#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	//��������һ
	//��С����
	int max;
	printf("Please enter a maximum value:");
	scanf("%d", &max);

	int i,answer=0;
	for (i = 1; i <= max; ++i) {
		if (i % 3 == 2 &&
			i % 5 == 3 &&
			i % 7 == 2) {
			//printf("%d\n", i);
			//break;
			answer = i;
		}
	}
	if (answer != 0) {
		printf("%d\n", answer);
	}

	//����������
	//�Ĵ�С
	int max;
	printf("MAX=");
	scanf("%d", &max);

	int i = max;
	while (i > 0 && !(i % 3 == 2 && i % 5 == 0 && i % 7 == 2)) {
		--i;
	}
	if (i > 0) {
		printf("%d\n", i);
	}

	//����������
	int max;
	printf("Please enter a maximum value:");
	scanf("%d", &max);

	int i, answer = 0;
	for (i = max; i >= 1; --i) {
		if (i % 3 == 2 &&
			i % 5 == 3 &&
			i % 7 == 2) {
			//printf("%d\n", i);
			//break;
			answer = i;
		}
	}
	if (answer != 0) {
		printf("%d\n", answer);
	}


	return 0;
}
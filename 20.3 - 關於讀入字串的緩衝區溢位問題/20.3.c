#pragma warning(disable:4996)
#include<stdio.h>
void str_read(char[],int);

//��д�С�����涨�x֮��Ͳ��ܸ�׃

int main() {
	char str[15];
	str_read(str,14);
	printf("%s\n", str);
	return 0;
}

void str_read(char str[],int n) {
	int i;
	for (i = 0; i < n; i++) {
		scanf("%c", &str[i]);
		if (str[i] == '\n')
			break;
	}
	str[i] = '\0';
}
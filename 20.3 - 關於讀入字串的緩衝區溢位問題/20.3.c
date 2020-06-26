#pragma warning(disable:4996)
#include<stdio.h>
void str_read(char[],int);

//陣列大小在宣告定義之後就不能改變

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
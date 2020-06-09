#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	//參考寫法一
	int n, i, judgment=1;
	printf("Please enter an integer:");
	scanf("%d", &n);
	for (i = 2; i < n; ++i){
		if (n % i == 0)
		{
			judgment=0;
			break;
		}
	}
	if (judgment){
		printf("Prime number");
	}
	else{
		printf("Composite number");
	}

	//參考寫法二
	int n, i, judgment = 1;
	printf("Please enter an integer:");
	scanf("%d", &n);
	for (i = 2; i < n && judgment; ++i) {
		if (n % i == 0)
		{
			judgment = 0;
		}
	}
	if (judgment) {
		printf("Prime number");
	}
	else {
		printf("Composite number");
	}

	//參考寫法三
	int n, i;
	printf("Please enter an integer:");
	scanf("%d", &n);
	for (i = 2; i < n && n % i != 0; ++i) 
	
	if (i==n) {
		printf("Prime number");
	}
	else {
		printf("Composite number");
	}


	return 0;
}
#pragma warning(disable:4996)
#include<stdio.h>

//叄考寫法一
int main() {
	int i, n;
	int max, avg, sum;
	scanf("%d", &n);
	max = sum = n;
	for (i = 2; i <= 10; i++) {
		if (n > max) {
			max = n;
		}
		sum += n;
	}
	avg = sum / 10;
	printf("Max: %d\n", max);
	printf("Max: %d\n", avg);
	return 0;
}
//叄考寫法二
int main() {
	int i, n;
	int max, avg, sum=0;
	for (i = 1; i <= 10; i++) {
		scanf("%d", &n);
		if (i == 1 || n > max) {
			max = n;
		}
		sum += n;
	}
	avg = sum / 10;
	printf("Max: %d\n", max);
	printf("Max: %d\n", avg);
	return 0;
}

//叄考寫法三
int main() {
	int i, n[10], max, avg;

	for (i = 1; i <= 10; i++) {
		scanf("%d", &n[i-1]);
	}

	int max = n[0];
	for (i = 0; i < 10; i++) {
		if (n[i] > max) {
			max = n[i];
		}
	}

	int sum = n[0];
	for (i = 0; i < 10; i++) {
		sum += n[i];
	}

	avg = sum / 10;
	printf("Max: %d\n", max);
	printf("Max: %d\n", avg);
	return 0;
}
//叄考寫法四
#pragma warning(disable:4996)
#include<stdio.h>

int max10(int n[10]);
int avg10(int n[10]);

int main() {
	int i, n[10];
	for (i = 1; i <= 10; i++) {
		scanf("%d", &n[i - 1]);
	}
	printf("Max: %d\n", max10(n));
	printf("Max: %d\n", avg10(n));
	return 0;
}

int max10(int n[10]) {
	int max = n[0], i;
	for (i = 1; i < 10; i++) {
		if (n[i] > max) {
			max = n[i];
		}
	}
	return max;
}

int avg10(int n[10]) {
	int sum = n[0], i;
	for (i = 0; i < 10; i++) {
		sum += n[i];
	}
	return sum / 10;
}



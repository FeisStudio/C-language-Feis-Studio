#pragma warning(disable:4996)
#include<stdlib.h>
#include<stdio.h>
#include<time.h>

//擲骰子
	//叄考寫法一

	//int main() {
	//	srand(time(0));

	//	int counter[6] = { 0 };

	//	int i, j;
	//	for (int i = 1; i <= 6000;++i) {
	//		int dice = rand() % 6 ;
	//		counter[dice]++;
	//	}
	//	for (j = 1; j <= 6; ++j) {
	//		printf("%d:%d\n", j, counter[j - 1]);
	//	}
	//	return 0;
	//}

	//叄考寫法二
	//int main() {
	//	srand(time(0));

	//	int counter[6] = { 0 };

	//	int i, j;
	//	for (int i = 1; i <= 6000; ++i) {
	//		int dice = rand() % 6 + 1;
	//		counter[dice - 1]++;
	//	}
	//	for (j = 1; j <= 6; ++j) {
	//		printf("%d:%d\n", j, counter[j - 1]);
	//	}
	//	return 0;
	//}


//消費金額計算
int main() {
	int prices[5] = { 98,75,83,89,71 };
	int total = 0, id;
	printf("Please enter the ID:");
	while(1){
		scanf("%d", &id);
		if (id == 0) {
			break;
		}
		total += prices[id - 1];
	} 
	printf("Total:%d\n", total);
	
	return 0;
}
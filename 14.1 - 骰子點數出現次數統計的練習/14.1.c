#include<stdlib.h>
#include<stdio.h>
#include<time.h>

int main(){
	srand(time(0));
	int counter1 = 0, counter2 = 0, counter3 = 0;
	int counter4 = 0, counter5 = 0, counter6 = 0;

	for (int i = 1; i <= 6000; ++i) {
		int dice = rand() % 6 + 1;
		switch (dice) {
			case 1:counter1++; break;
			case 2:counter2++; break;
			case 3:counter3++; break;
			case 4:counter4++; break;
			case 5:counter5++; break;
			case 6:counter6++; break;
		}
	}
	printf("1:%d\n", counter1);
	printf("2:%d\n", counter2);
	printf("3:%d\n", counter3);
	printf("4:%d\n", counter4);
	printf("5:%d\n", counter5);
	printf("6:%d\n", counter6);
	return 0;
}

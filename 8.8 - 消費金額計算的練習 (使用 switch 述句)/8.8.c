#pragma warning(disable:4996)
#include<stdio.h>
int main() {
	int id, total = 0;
	printf("Please enter the ID:\n");
	do {
		scanf("%d", &id);
		switch (id) {
		case 1: total += 90; break;
		case 2: total += 75; break;
		case 3: total += 83; break;
		case 4: total += 89; break;
		case 5: total += 71; break;
		}
	} while (id != 0);

	printf("Total:%d\n", total);
	return 0;
}

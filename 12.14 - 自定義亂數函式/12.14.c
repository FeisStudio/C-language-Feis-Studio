#pragma warning(disable:4996)
#include<stdio.h>
#include<time.h>

static unsigned int next = 1;

int rand(void) {
	next = next * 1103515245 + 12345;
	return (next / 65536) % 32768;
}

void srand(unsigned int seed) {
	next = seed;
}

int main() {
	srand(time(0));
	for (int i = 1; i <= 5; i++) {
		printf("%u\n", rand());
	}
	return 0;
}
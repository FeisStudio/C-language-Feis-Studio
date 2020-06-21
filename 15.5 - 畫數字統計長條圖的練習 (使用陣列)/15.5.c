#pragma warning(disable:4996)
#include<stdio.h>

int main() {
    int b[10] = { 0 };
    int i, j, n;

    for (i = 1; i <= 10; ++i) {
        scanf("%d", &n);
        b[(n - 1) / 10]++;
    }

    for (i = 1; i <= 10; ++i); {
        printf("%3d: ", i * 10);
        for (j = 1; j <= b[i - 1]; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int i, j;

    // --- Print the tree top (N rows) ---
    for (i = 1; i <= N; i++) {
        // spaces
        for (j = 1; j <= N - i; j++) {
            printf(" ");
        }
        // stars
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // --- Print the trunk (N/2 rows) ---
    int trunkHeight = N / 2;
    for (i = 0; i < trunkHeight; i++) {
        // center trunk (1 star)
        for (j = 1; j <= N - 1; j++) {
            printf(" ");
        }
        printf("*\n");
    }

    return 0;
}
